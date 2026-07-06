#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F450
// Address: 0x27f450 - 0x27f508
void sub_0027F450_0x27f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F450_0x27f450");
#endif

    switch (ctx->pc) {
        case 0x27f488u: goto label_27f488;
        case 0x27f4f0u: goto label_27f4f0;
        default: break;
    }

    ctx->pc = 0x27f450u;

    // 0x27f450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f454: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x27f454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f458: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27f45c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x27f45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f460: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27f464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27f464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f468: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27f46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f474: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x27f474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x27f478: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f47c: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x27f480: 0xc0a0554  jal         func_281550
    ctx->pc = 0x27F480u;
    SET_GPR_U32(ctx, 31, 0x27F488u);
    ctx->pc = 0x27F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F480u;
            // 0x27f484: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F488u; }
        if (ctx->pc != 0x27F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F488u; }
        if (ctx->pc != 0x27F488u) { return; }
    }
    ctx->pc = 0x27F488u;
label_27f488:
    // 0x27f488: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27f48c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27F48Cu;
    {
        const bool branch_taken_0x27f48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F48Cu;
            // 0x27f490: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f48c) {
            ctx->pc = 0x27F4DCu;
            goto label_27f4dc;
        }
    }
    ctx->pc = 0x27F494u;
    // 0x27f494: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f49c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27F49Cu;
    {
        const bool branch_taken_0x27f49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F49Cu;
            // 0x27f4a0: 0x24060075  addiu       $a2, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f49c) {
            ctx->pc = 0x27F4DCu;
            goto label_27f4dc;
        }
    }
    ctx->pc = 0x27F4A4u;
    // 0x27f4a4: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x27f4a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f4ac: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F4ACu;
    {
        const bool branch_taken_0x27f4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4ACu;
            // 0x27f4b0: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4ac) {
            ctx->pc = 0x27F4DCu;
            goto label_27f4dc;
        }
    }
    ctx->pc = 0x27F4B4u;
    // 0x27f4b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4b8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x27f4b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f4c0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F4C0u;
    {
        const bool branch_taken_0x27f4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4C0u;
            // 0x27f4c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4c0) {
            ctx->pc = 0x27F4CCu;
            goto label_27f4cc;
        }
    }
    ctx->pc = 0x27F4C8u;
    // 0x27f4c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x27f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_27f4cc:
    // 0x27f4cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27f4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F4D4u;
    {
        const bool branch_taken_0x27f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4D4u;
            // 0x27f4d8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4d4) {
            ctx->pc = 0x27F4F4u;
            goto label_27f4f4;
        }
    }
    ctx->pc = 0x27F4DCu;
label_27f4dc:
    // 0x27f4dc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27f4e0: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x27f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x27f4e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27f4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4e8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27F4E8u;
    SET_GPR_U32(ctx, 31, 0x27F4F0u);
    ctx->pc = 0x27F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4E8u;
            // 0x27f4ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4F0u; }
        if (ctx->pc != 0x27F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4F0u; }
        if (ctx->pc != 0x27F4F0u) { return; }
    }
    ctx->pc = 0x27F4F0u;
label_27f4f0:
    // 0x27f4f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f4f4:
    // 0x27f4f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f4f8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27f4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f4fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27f4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f500: 0x3e00008  jr          $ra
    ctx->pc = 0x27F500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F500u;
            // 0x27f504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F508u;
    ctx->pc = 0x27f508u;
}
