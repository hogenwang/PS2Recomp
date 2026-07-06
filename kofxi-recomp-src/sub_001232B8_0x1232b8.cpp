#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001232B8
// Address: 0x1232b8 - 0x1233c0
void sub_001232B8_0x1232b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001232B8_0x1232b8");
#endif

    switch (ctx->pc) {
        case 0x1232ccu: goto label_1232cc;
        case 0x123348u: goto label_123348;
        case 0x123358u: goto label_123358;
        case 0x123364u: goto label_123364;
        case 0x123370u: goto label_123370;
        case 0x123394u: goto label_123394;
        default: break;
    }

    ctx->pc = 0x1232b8u;

    // 0x1232b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1232b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1232bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1232bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1232c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1232c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1232c4: 0xc049a24  jal         func_126890
    ctx->pc = 0x1232C4u;
    SET_GPR_U32(ctx, 31, 0x1232CCu);
    ctx->pc = 0x1232C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1232C4u;
            // 0x1232c8: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (runtime->hasFunction(0x126890u)) {
        auto targetFn = runtime->lookupFunction(0x126890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232CCu; }
        if (ctx->pc != 0x1232CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126890_0x126890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232CCu; }
        if (ctx->pc != 0x1232CCu) { return; }
    }
    ctx->pc = 0x1232CCu;
label_1232cc:
    // 0x1232cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1232ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232d0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1232D0u;
    {
        const bool branch_taken_0x1232d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232D0u;
            // 0x1232d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d0) {
            ctx->pc = 0x123348u;
            goto label_123348;
        }
    }
    ctx->pc = 0x1232D8u;
    // 0x1232d8: 0x8e0ffffc  lw          $t7, -0x4($s0)
    ctx->pc = 0x1232d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x1232dc: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x1232dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1232e0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x1232e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x1232e4: 0x25edfffc  addiu       $t5, $t7, -0x4
    ctx->pc = 0x1232e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x1232e8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1232e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232ec: 0x2daf0025  sltiu       $t7, $t5, 0x25
    ctx->pc = 0x1232ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x1232f0: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1232F0u;
    {
        const bool branch_taken_0x1232f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232F0u;
            // 0x1232f4: 0x2dac0014  sltiu       $t4, $t5, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f0) {
            ctx->pc = 0x123358u;
            goto label_123358;
        }
    }
    ctx->pc = 0x1232F8u;
    // 0x1232f8: 0x1580000e  bnez        $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1232F8u;
    {
        const bool branch_taken_0x1232f8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1232FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232F8u;
            // 0x1232fc: 0x200702d  daddu       $t6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f8) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x123300u;
    // 0x123300: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x123300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x123304: 0x260e0008  addiu       $t6, $s0, 0x8
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x123308: 0x2daf001c  sltiu       $t7, $t5, 0x1C
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x12330c: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12330Cu;
    {
        const bool branch_taken_0x12330c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12330Cu;
            // 0x123310: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12330c) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x123314u;
    // 0x123314: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x123314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x123318: 0x2daf0024  sltiu       $t7, $t5, 0x24
    ctx->pc = 0x123318u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x12331c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x123320: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x123320u;
    {
        const bool branch_taken_0x123320 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123320u;
            // 0x123324: 0x260e0010  addiu       $t6, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123320) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x123328u;
    // 0x123328: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x123328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12332c: 0x260e0018  addiu       $t6, $s0, 0x18
    ctx->pc = 0x12332cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x123330: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x123330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_123334:
    // 0x123334: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x123334u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x123338: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x12333c: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x12333cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x123340: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x123340u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x123344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x123344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123348:
    // 0x123348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12334c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12334cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123350: 0x3e00008  jr          $ra
    ctx->pc = 0x123350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123350u;
            // 0x123354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123358u;
label_123358:
    // 0x123358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12335c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x12335Cu;
    SET_GPR_U32(ctx, 31, 0x123364u);
    ctx->pc = 0x123360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12335Cu;
            // 0x123360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123364u; }
        if (ctx->pc != 0x123364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123364u; }
        if (ctx->pc != 0x123364u) { return; }
    }
    ctx->pc = 0x123364u;
label_123364:
    // 0x123364: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123364u;
            // 0x123368: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123364) {
            ctx->pc = 0x123348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123348;
        }
    }
    ctx->pc = 0x12336Cu;
    // 0x12336c: 0x0  nop
    ctx->pc = 0x12336cu;
    // NOP
label_123370:
    // 0x123370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12337c: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x12337cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x123380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123388: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x123388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x12338c: 0xc0434d2  jal         func_10D348
    ctx->pc = 0x12338Cu;
    SET_GPR_U32(ctx, 31, 0x123394u);
    ctx->pc = 0x123390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12338Cu;
            // 0x123390: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D348u;
    if (runtime->hasFunction(0x10D348u)) {
        auto targetFn = runtime->lookupFunction(0x10D348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123394u; }
        if (ctx->pc != 0x123394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D348_0x10d348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123394u; }
        if (ctx->pc != 0x123394u) { return; }
    }
    ctx->pc = 0x123394u;
label_123394:
    // 0x123394: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123398: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123398u;
    {
        const bool branch_taken_0x123398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x123398) {
            ctx->pc = 0x12339Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123398u;
            // 0x12339c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1233B0u;
            goto label_1233b0;
        }
    }
    ctx->pc = 0x1233A0u;
    // 0x1233a0: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x1233a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x1233a4: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1233A4u;
    {
        const bool branch_taken_0x1233a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233a4) {
            ctx->pc = 0x1233A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1233A4u;
            // 0x1233a8: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1233ACu;
            goto label_1233ac;
        }
    }
    ctx->pc = 0x1233ACu;
label_1233ac:
    // 0x1233ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1233acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1233b0:
    // 0x1233b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1233b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1233b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1233b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1233b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1233B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1233BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1233B8u;
            // 0x1233bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1233C0u;
    ctx->pc = 0x1233c0u;
}
