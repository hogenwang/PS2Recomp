#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245408
// Address: 0x245408 - 0x2455c8
void sub_00245408_0x245408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245408_0x245408");
#endif

    switch (ctx->pc) {
        case 0x245450u: goto label_245450;
        case 0x245470u: goto label_245470;
        case 0x2454b8u: goto label_2454b8;
        case 0x2454d8u: goto label_2454d8;
        case 0x245508u: goto label_245508;
        case 0x245514u: goto label_245514;
        case 0x245530u: goto label_245530;
        case 0x245584u: goto label_245584;
        case 0x2455b0u: goto label_2455b0;
        default: break;
    }

    ctx->pc = 0x245408u;

    // 0x245408: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x24540c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x245410: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x245410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x245414: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x245414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x245418: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x245418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24541c: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x24541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x245420: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x245420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245424: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x245424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x245428: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24542c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x24542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x245430: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x245430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245434: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x245434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x245438: 0x8c43fefc  lw          $v1, -0x104($v0)
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967036)));
    // 0x24543c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24543Cu;
    {
        const bool branch_taken_0x24543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24543Cu;
            // 0x245440: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24543c) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x245444u;
    // 0x245444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245448: 0xc048c96  jal         func_123258
    ctx->pc = 0x245448u;
    SET_GPR_U32(ctx, 31, 0x245450u);
    ctx->pc = 0x24544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245448u;
            // 0x24544c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245450u; }
        if (ctx->pc != 0x245450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245450u; }
        if (ctx->pc != 0x245450u) { return; }
    }
    ctx->pc = 0x245450u;
label_245450:
    // 0x245450: 0x36220040  ori         $v0, $s1, 0x40
    ctx->pc = 0x245450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x245454: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x245454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x245458: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x245458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x24545c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245464: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x245464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245468: 0xc091412  jal         func_245048
    ctx->pc = 0x245468u;
    SET_GPR_U32(ctx, 31, 0x245470u);
    ctx->pc = 0x24546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245468u;
            // 0x24546c: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245048u;
    if (runtime->hasFunction(0x245048u)) {
        auto targetFn = runtime->lookupFunction(0x245048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245470u; }
        if (ctx->pc != 0x245470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245048_0x245048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245470u; }
        if (ctx->pc != 0x245470u) { return; }
    }
    ctx->pc = 0x245470u;
label_245470:
    // 0x245470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245474: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x245474u;
    {
        const bool branch_taken_0x245474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245474u;
            // 0x245478: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245474) {
            ctx->pc = 0x2454B8u;
            goto label_2454b8;
        }
    }
    ctx->pc = 0x24547Cu;
    // 0x24547c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245480: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x245480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x245484: 0x24a6ffe0  addiu       $a2, $a1, -0x20
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x245488: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x245488u;
    {
        const bool branch_taken_0x245488 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245488u;
            // 0x24548c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245488) {
            ctx->pc = 0x24549Cu;
            goto label_24549c;
        }
    }
    ctx->pc = 0x245490u;
    // 0x245490: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x245490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x245494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245494u;
    {
        const bool branch_taken_0x245494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245494u;
            // 0x245498: 0xa4c20002  sh          $v0, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245494) {
            ctx->pc = 0x2454A0u;
            goto label_2454a0;
        }
    }
    ctx->pc = 0x24549Cu;
label_24549c:
    // 0x24549c: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x24549cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
label_2454a0:
    // 0x2454a0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2454a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2454a4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2454a8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2454ac: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x2454acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2454b0: 0xc090a8e  jal         func_242A38
    ctx->pc = 0x2454B0u;
    SET_GPR_U32(ctx, 31, 0x2454B8u);
    ctx->pc = 0x2454B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454B0u;
            // 0x2454b4: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A38u;
    if (runtime->hasFunction(0x242A38u)) {
        auto targetFn = runtime->lookupFunction(0x242A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454B8u; }
        if (ctx->pc != 0x2454B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242A38_0x242a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454B8u; }
        if (ctx->pc != 0x2454B8u) { return; }
    }
    ctx->pc = 0x2454B8u;
label_2454b8:
    // 0x2454b8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2454b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2454bc: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2454bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2454c0: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2454c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2454c4: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2454c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2454c8: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2454c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2454cc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2454ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2454d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2454D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2454D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454D0u;
            // 0x2454d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2454D8u;
label_2454d8:
    // 0x2454d8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2454d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2454dc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2454dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2454e0: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2454e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2454e4: 0x8c62fefc  lw          $v0, -0x104($v1)
    ctx->pc = 0x2454e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967036)));
    // 0x2454e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2454e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454ec: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2454ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2454f0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2454F0u;
    {
        const bool branch_taken_0x2454f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454F0u;
            // 0x2454f4: 0xffb100e0  sd          $s1, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454f0) {
            ctx->pc = 0x2455B0u;
            goto label_2455b0;
        }
    }
    ctx->pc = 0x2454F8u;
    // 0x2454f8: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2454fc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2454fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x245500: 0xc048c96  jal         func_123258
    ctx->pc = 0x245500u;
    SET_GPR_U32(ctx, 31, 0x245508u);
    ctx->pc = 0x245504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245500u;
            // 0x245504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245508u; }
        if (ctx->pc != 0x245508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245508u; }
        if (ctx->pc != 0x245508u) { return; }
    }
    ctx->pc = 0x245508u;
label_245508:
    // 0x245508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24550c: 0xc048c96  jal         func_123258
    ctx->pc = 0x24550Cu;
    SET_GPR_U32(ctx, 31, 0x245514u);
    ctx->pc = 0x245510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24550Cu;
            // 0x245510: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245514u; }
        if (ctx->pc != 0x245514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245514u; }
        if (ctx->pc != 0x245514u) { return; }
    }
    ctx->pc = 0x245514u;
label_245514:
    // 0x245514: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x245514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x245518: 0x260600b8  addiu       $a2, $s0, 0xB8
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x24551c: 0x86030030  lh          $v1, 0x30($s0)
    ctx->pc = 0x24551cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x245520: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x245520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x245524: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x245524u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x245528: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x245528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x24552c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x24552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_245530:
    // 0x245530: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x245530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245534: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x245534u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x245538: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x245538u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24553c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x24553cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x245540: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x245540u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x245544: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x245544u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x245548: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x245548u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x24554c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x24554cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x245550: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x245554: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x245554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x245558: 0x0  nop
    ctx->pc = 0x245558u;
    // NOP
    // 0x24555c: 0x1486fff4  bne         $a0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x24555Cu;
    {
        const bool branch_taken_0x24555c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x24555c) {
            ctx->pc = 0x245530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245530;
        }
    }
    ctx->pc = 0x245564u;
    // 0x245564: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x245564u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245568: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x245568u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x24556c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245570: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x245570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x245574: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x245574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x245578: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x245578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24557c: 0xc091412  jal         func_245048
    ctx->pc = 0x24557Cu;
    SET_GPR_U32(ctx, 31, 0x245584u);
    ctx->pc = 0x245580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24557Cu;
            // 0x245580: 0x24070098  addiu       $a3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245048u;
    if (runtime->hasFunction(0x245048u)) {
        auto targetFn = runtime->lookupFunction(0x245048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245584u; }
        if (ctx->pc != 0x245584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245048_0x245048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245584u; }
        if (ctx->pc != 0x245584u) { return; }
    }
    ctx->pc = 0x245584u;
label_245584:
    // 0x245584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245588: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245588u;
    {
        const bool branch_taken_0x245588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245588u;
            // 0x24558c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245588) {
            ctx->pc = 0x2455B0u;
            goto label_2455b0;
        }
    }
    ctx->pc = 0x245590u;
    // 0x245590: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x245590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x245594: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x245598: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24559c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455a0: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2455a4: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x2455a8: 0xc090a8e  jal         func_242A38
    ctx->pc = 0x2455A8u;
    SET_GPR_U32(ctx, 31, 0x2455B0u);
    ctx->pc = 0x2455ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2455A8u;
            // 0x2455ac: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A38u;
    if (runtime->hasFunction(0x242A38u)) {
        auto targetFn = runtime->lookupFunction(0x242A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455B0u; }
        if (ctx->pc != 0x2455B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242A38_0x242a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455B0u; }
        if (ctx->pc != 0x2455B0u) { return; }
    }
    ctx->pc = 0x2455B0u;
label_2455b0:
    // 0x2455b0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2455b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2455b4: 0xdfb100e0  ld          $s1, 0xE0($sp)
    ctx->pc = 0x2455b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2455b8: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2455b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2455bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2455BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2455C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2455BCu;
            // 0x2455c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2455C4u;
    // 0x2455c4: 0x0  nop
    ctx->pc = 0x2455c4u;
    // NOP
    ctx->pc = 0x2455c8u;
}
