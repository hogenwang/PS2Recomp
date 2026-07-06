#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B0F0
// Address: 0x29b0f0 - 0x29b318
void sub_0029B0F0_0x29b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B0F0_0x29b0f0");
#endif

    switch (ctx->pc) {
        case 0x29b118u: goto label_29b118;
        case 0x29b128u: goto label_29b128;
        case 0x29b178u: goto label_29b178;
        case 0x29b1a8u: goto label_29b1a8;
        case 0x29b1dcu: goto label_29b1dc;
        case 0x29b20cu: goto label_29b20c;
        case 0x29b23cu: goto label_29b23c;
        case 0x29b284u: goto label_29b284;
        case 0x29b2b8u: goto label_29b2b8;
        case 0x29b2e8u: goto label_29b2e8;
        default: break;
    }

    ctx->pc = 0x29b0f0u;

    // 0x29b0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b0f8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x29b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29b0fc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x29b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x29b100: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B104u;
    {
        const bool branch_taken_0x29b104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B104u;
            // 0x29b108: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b104) {
            ctx->pc = 0x29B11Cu;
            goto label_29b11c;
        }
    }
    ctx->pc = 0x29B10Cu;
    // 0x29b10c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29b110: 0xc049c22  jal         func_127088
    ctx->pc = 0x29B110u;
    SET_GPR_U32(ctx, 31, 0x29B118u);
    ctx->pc = 0x29B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B110u;
            // 0x29b114: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B118u; }
        if (ctx->pc != 0x29B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B118u; }
        if (ctx->pc != 0x29B118u) { return; }
    }
    ctx->pc = 0x29B118u;
label_29b118:
    // 0x29b118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b11c:
    // 0x29b11c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B11Cu;
            // 0x29b120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B124u;
    // 0x29b124: 0x0  nop
    ctx->pc = 0x29b124u;
    // NOP
label_29b128:
    // 0x29b128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b12c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29b12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b130: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b134: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29b134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b138: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b140: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29b140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b148: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b14c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x29b14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x29b150: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29B150u;
    {
        const bool branch_taken_0x29b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B150u;
            // 0x29b154: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b150) {
            ctx->pc = 0x29B1B0u;
            goto label_29b1b0;
        }
    }
    ctx->pc = 0x29B158u;
    // 0x29b158: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b15c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b15cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b160: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b164: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b164u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b16c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29b16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b170: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29B170u;
    SET_GPR_U32(ctx, 31, 0x29B178u);
    ctx->pc = 0x29B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B170u;
            // 0x29b174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B178u; }
        if (ctx->pc != 0x29B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B178u; }
        if (ctx->pc != 0x29B178u) { return; }
    }
    ctx->pc = 0x29B178u;
label_29b178:
    // 0x29b178: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x29B178u;
    {
        const bool branch_taken_0x29b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B178u;
            // 0x29b17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b178) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B180u;
    // 0x29b180: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b184: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x29b184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x29b188: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b188u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b18c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x29b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x29b190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b194: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29b198: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29b198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b19c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29b1a0: 0xc0a0edc  jal         func_283B70
    ctx->pc = 0x29B1A0u;
    SET_GPR_U32(ctx, 31, 0x29B1A8u);
    ctx->pc = 0x29B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1A0u;
            // 0x29b1a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B70u;
    if (runtime->hasFunction(0x283B70u)) {
        auto targetFn = runtime->lookupFunction(0x283B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1A8u; }
        if (ctx->pc != 0x29B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283B70_0x283b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1A8u; }
        if (ctx->pc != 0x29B1A8u) { return; }
    }
    ctx->pc = 0x29B1A8u;
label_29b1a8:
    // 0x29b1a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x29B1A8u;
    {
        const bool branch_taken_0x29b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1A8u;
            // 0x29b1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1a8) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B1B0u;
label_29b1b0:
    // 0x29b1b0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29b1b4: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29B1B4u;
    {
        const bool branch_taken_0x29b1b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1B4u;
            // 0x29b1b8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1b4) {
            ctx->pc = 0x29B214u;
            goto label_29b214;
        }
    }
    ctx->pc = 0x29B1BCu;
    // 0x29b1bc: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b1c0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b1c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b1c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b1c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b1c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1d0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29b1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1d4: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29B1D4u;
    SET_GPR_U32(ctx, 31, 0x29B1DCu);
    ctx->pc = 0x29B1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1D4u;
            // 0x29b1d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1DCu; }
        if (ctx->pc != 0x29B1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1DCu; }
        if (ctx->pc != 0x29B1DCu) { return; }
    }
    ctx->pc = 0x29B1DCu;
label_29b1dc:
    // 0x29b1dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B1DCu;
    {
        const bool branch_taken_0x29b1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1DCu;
            // 0x29b1e0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1dc) {
            ctx->pc = 0x29B1ECu;
            goto label_29b1ec;
        }
    }
    ctx->pc = 0x29B1E4u;
    // 0x29b1e4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x29B1E4u;
    {
        const bool branch_taken_0x29b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1E4u;
            // 0x29b1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1e4) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B1ECu;
label_29b1ec:
    // 0x29b1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1f0: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x29b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x29b1f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29b1f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1f8: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29b1fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29b1fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b200: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x29b200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29b204: 0xc0a0edc  jal         func_283B70
    ctx->pc = 0x29B204u;
    SET_GPR_U32(ctx, 31, 0x29B20Cu);
    ctx->pc = 0x29B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B204u;
            // 0x29b208: 0x8c47000c  lw          $a3, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B70u;
    if (runtime->hasFunction(0x283B70u)) {
        auto targetFn = runtime->lookupFunction(0x283B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B20Cu; }
        if (ctx->pc != 0x29B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283B70_0x283b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B20Cu; }
        if (ctx->pc != 0x29B20Cu) { return; }
    }
    ctx->pc = 0x29B20Cu;
label_29b20c:
    // 0x29b20c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x29B20Cu;
    {
        const bool branch_taken_0x29b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B20Cu;
            // 0x29b210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b20c) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B214u;
label_29b214:
    // 0x29b214: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B214u;
    {
        const bool branch_taken_0x29b214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B214u;
            // 0x29b218: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b214) {
            ctx->pc = 0x29B254u;
            goto label_29b254;
        }
    }
    ctx->pc = 0x29B21Cu;
    // 0x29b21c: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b220: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b220u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b224: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b228: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b228u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b22c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b230: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29b230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b234: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29B234u;
    SET_GPR_U32(ctx, 31, 0x29B23Cu);
    ctx->pc = 0x29B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B234u;
            // 0x29b238: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B23Cu; }
        if (ctx->pc != 0x29B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B23Cu; }
        if (ctx->pc != 0x29B23Cu) { return; }
    }
    ctx->pc = 0x29B23Cu;
label_29b23c:
    // 0x29b23c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x29B23Cu;
    {
        const bool branch_taken_0x29b23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B23Cu;
            // 0x29b240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b23c) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B244u;
    // 0x29b244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b248: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x29b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29b24c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x29B24Cu;
    {
        const bool branch_taken_0x29b24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B24Cu;
            // 0x29b250: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b24c) {
            ctx->pc = 0x29B2FCu;
            goto label_29b2fc;
        }
    }
    ctx->pc = 0x29B254u;
label_29b254:
    // 0x29b254: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29B254u;
    {
        const bool branch_taken_0x29b254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B254u;
            // 0x29b258: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b254) {
            ctx->pc = 0x29B28Cu;
            goto label_29b28c;
        }
    }
    ctx->pc = 0x29B25Cu;
    // 0x29b25c: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x29b260: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b264: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b264u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b268: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b26c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b26cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b270: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x29b270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b274: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x29b274u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b278: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x29b278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29b27c: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x29B27Cu;
    SET_GPR_U32(ctx, 31, 0x29B284u);
    ctx->pc = 0x29B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B27Cu;
            // 0x29b280: 0x8c480008  lw          $t0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (runtime->hasFunction(0x2A23F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B284u; }
        if (ctx->pc != 0x29B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A23F0_0x2a23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B284u; }
        if (ctx->pc != 0x29B284u) { return; }
    }
    ctx->pc = 0x29B284u;
label_29b284:
    // 0x29b284: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29B284u;
    {
        const bool branch_taken_0x29b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B284u;
            // 0x29b288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b284) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B28Cu;
label_29b28c:
    // 0x29b28c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29B28Cu;
    {
        const bool branch_taken_0x29b28c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B28Cu;
            // 0x29b290: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b28c) {
            ctx->pc = 0x29B2C0u;
            goto label_29b2c0;
        }
    }
    ctx->pc = 0x29B294u;
    // 0x29b294: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b298: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b298u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b29c: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x29b29cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b2a0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b2a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b2a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b2a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b2a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29b2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2b0: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x29B2B0u;
    SET_GPR_U32(ctx, 31, 0x29B2B8u);
    ctx->pc = 0x29B2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2B0u;
            // 0x29b2b4: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (runtime->hasFunction(0x2A23F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2B8u; }
        if (ctx->pc != 0x29B2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A23F0_0x2a23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2B8u; }
        if (ctx->pc != 0x29B2B8u) { return; }
    }
    ctx->pc = 0x29B2B8u;
label_29b2b8:
    // 0x29b2b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29B2B8u;
    {
        const bool branch_taken_0x29b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2B8u;
            // 0x29b2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2b8) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B2C0u;
label_29b2c0:
    // 0x29b2c0: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B2C0u;
    {
        const bool branch_taken_0x29b2c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2C0u;
            // 0x29b2c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2c0) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B2C8u;
    // 0x29b2c8: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x29b2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b2cc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29b2ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b2d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b2d4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b2d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b2d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2dc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29b2dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2e0: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29B2E0u;
    SET_GPR_U32(ctx, 31, 0x29B2E8u);
    ctx->pc = 0x29B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2E0u;
            // 0x29b2e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2E8u; }
        if (ctx->pc != 0x29B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2E8u; }
        if (ctx->pc != 0x29B2E8u) { return; }
    }
    ctx->pc = 0x29B2E8u;
label_29b2e8:
    // 0x29b2e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x29b2f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29b2f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B2F4u;
    {
        const bool branch_taken_0x29b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2F4u;
            // 0x29b2f8: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2f4) {
            ctx->pc = 0x29B300u;
            goto label_29b300;
        }
    }
    ctx->pc = 0x29B2FCu;
label_29b2fc:
    // 0x29b2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b300:
    // 0x29b300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b304: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b308: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b30c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b310: 0x3e00008  jr          $ra
    ctx->pc = 0x29B310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B310u;
            // 0x29b314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B318u;
    ctx->pc = 0x29b318u;
}
