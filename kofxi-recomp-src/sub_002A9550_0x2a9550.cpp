#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9550
// Address: 0x2a9550 - 0x2a9608
void sub_002A9550_0x2a9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9550_0x2a9550");
#endif

    switch (ctx->pc) {
        case 0x2a956cu: goto label_2a956c;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a95a0u: goto label_2a95a0;
        case 0x2a95f0u: goto label_2a95f0;
        default: break;
    }

    ctx->pc = 0x2a9550u;

    // 0x2a9550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9554: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a9558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a955c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a955cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9560: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a9564: 0xc0aa2ea  jal         func_2A8BA8
    ctx->pc = 0x2A9564u;
    SET_GPR_U32(ctx, 31, 0x2A956Cu);
    ctx->pc = 0x2A9568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9564u;
            // 0x2a9568: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BA8u;
    if (runtime->hasFunction(0x2A8BA8u)) {
        auto targetFn = runtime->lookupFunction(0x2A8BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A956Cu; }
        if (ctx->pc != 0x2A956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8BA8_0x2a8ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A956Cu; }
        if (ctx->pc != 0x2A956Cu) { return; }
    }
    ctx->pc = 0x2A956Cu;
label_2a956c:
    // 0x2a956c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a956cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9570: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A9570u;
    {
        const bool branch_taken_0x2a9570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9570u;
            // 0x2a9574: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9570) {
            ctx->pc = 0x2A95F0u;
            goto label_2a95f0;
        }
    }
    ctx->pc = 0x2A9578u;
    // 0x2a9578: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a9578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a957c: 0xc0a8874  jal         func_2A21D0
    ctx->pc = 0x2A957Cu;
    SET_GPR_U32(ctx, 31, 0x2A9584u);
    ctx->pc = 0x2A9580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A957Cu;
            // 0x2a9580: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A21D0u;
    if (runtime->hasFunction(0x2A21D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9584u; }
        if (ctx->pc != 0x2A9584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A21D0_0x2a21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9584u; }
        if (ctx->pc != 0x2A9584u) { return; }
    }
    ctx->pc = 0x2A9584u;
label_2a9584:
    // 0x2a9584: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A9584u;
    {
        const bool branch_taken_0x2a9584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9584) {
            ctx->pc = 0x2A95E0u;
            goto label_2a95e0;
        }
    }
    ctx->pc = 0x2A958Cu;
    // 0x2a958c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2a958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a9590: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A9590u;
    {
        const bool branch_taken_0x2a9590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9590u;
            // 0x2a9594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9590) {
            ctx->pc = 0x2A95F4u;
            goto label_2a95f4;
        }
    }
    ctx->pc = 0x2A9598u;
    // 0x2a9598: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A9598u;
    SET_GPR_U32(ctx, 31, 0x2A95A0u);
    ctx->pc = 0x2A959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9598u;
            // 0x2a959c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95A0u; }
        if (ctx->pc != 0x2A95A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95A0u; }
        if (ctx->pc != 0x2A95A0u) { return; }
    }
    ctx->pc = 0x2A95A0u;
label_2a95a0:
    // 0x2a95a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a95a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a95a4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A95A4u;
    {
        const bool branch_taken_0x2a95a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95A4u;
            // 0x2a95a8: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95a4) {
            ctx->pc = 0x2A95E0u;
            goto label_2a95e0;
        }
    }
    ctx->pc = 0x2A95ACu;
    // 0x2a95ac: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2a95acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a95b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a95b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a95b8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2a95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a95bc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a95c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a95c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2a95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a95c8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a95cc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a95d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a95d4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2a95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2a95d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A95D8u;
    {
        const bool branch_taken_0x2a95d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95D8u;
            // 0x2a95dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95d8) {
            ctx->pc = 0x2A95F4u;
            goto label_2a95f4;
        }
    }
    ctx->pc = 0x2A95E0u;
label_2a95e0:
    // 0x2a95e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A95E0u;
    {
        const bool branch_taken_0x2a95e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95E0u;
            // 0x2a95e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95e0) {
            ctx->pc = 0x2A95F4u;
            goto label_2a95f4;
        }
    }
    ctx->pc = 0x2A95E8u;
    // 0x2a95e8: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2A95E8u;
    SET_GPR_U32(ctx, 31, 0x2A95F0u);
    ctx->pc = 0x2A95ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95E8u;
            // 0x2a95ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95F0u; }
        if (ctx->pc != 0x2A95F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95F0u; }
        if (ctx->pc != 0x2A95F0u) { return; }
    }
    ctx->pc = 0x2A95F0u;
label_2a95f0:
    // 0x2a95f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a95f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a95f4:
    // 0x2a95f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a95f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a95f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a95f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a95fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a95fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9600: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9600u;
            // 0x2a9604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9608u;
    ctx->pc = 0x2a9608u;
}
