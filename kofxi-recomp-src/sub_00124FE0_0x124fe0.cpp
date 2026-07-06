#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124FE0
// Address: 0x124fe0 - 0x1250f0
void sub_00124FE0_0x124fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124FE0_0x124fe0");
#endif

    switch (ctx->pc) {
        case 0x125048u: goto label_125048;
        case 0x125058u: goto label_125058;
        case 0x125070u: goto label_125070;
        case 0x125098u: goto label_125098;
        case 0x1250b4u: goto label_1250b4;
        default: break;
    }

    ctx->pc = 0x124fe0u;

    // 0x124fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124ff0: 0xc59018  mult        $s2, $a2, $a1
    ctx->pc = 0x124ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x124ff4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124ff8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x124ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x124ffc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x124ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125004: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x125004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125008: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12500c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x125010: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x125010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x125014: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x125014u;
    {
        const bool branch_taken_0x125014 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125014u;
        // 0x125018: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125014) {
            ctx->pc = 0x1250B4u;
            goto label_1250b4;
        }
    }
    ctx->pc = 0x12501Cu;
    // 0x12501c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x12501cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x125020: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x125020u;
    {
        const bool branch_taken_0x125020 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x125024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125020u;
        // 0x125024: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125020) {
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x125028u;
    // 0x125028: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x125028u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12502c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12502cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125030: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125034:
    // 0x125034: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125038: 0xd2782b  sltu        $t7, $a2, $s2
    ctx->pc = 0x125038u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12503c: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12503Cu;
    {
        const bool branch_taken_0x12503c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12503Cu;
        // 0x125040: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12503c) {
            ctx->pc = 0x125088u;
            goto label_125088;
        }
    }
    ctx->pc = 0x125044u;
    // 0x125044: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x125044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125048:
    // 0x125048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12504c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12504cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125050: 0xc049c48  jal         func_127120
    ctx->pc = 0x125050u;
    SET_GPR_U32(ctx, 31, 0x125058u);
    ctx->pc = 0x125054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125050u;
    // 0x125054: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x125050u, 0x125058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125058u;
label_125058:
    // 0x125058: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x12505c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12505cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125064: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x125064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x125068: 0xc04a566  jal         func_129598
    ctx->pc = 0x125068u;
    SET_GPR_U32(ctx, 31, 0x125070u);
    ctx->pc = 0x12506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125068u;
    // 0x12506c: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x125068u, 0x125070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125070u;
label_125070:
    // 0x125070: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x125070u;
    {
        const bool branch_taken_0x125070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125070u;
        // 0x125074: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125070) {
            ctx->pc = 0x1250DCu;
            goto label_1250dc;
        }
    }
    ctx->pc = 0x125078u;
    // 0x125078: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x125078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12507c: 0x212782b  sltu        $t7, $s0, $s2
    ctx->pc = 0x12507cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x125080: 0x55e0fff1  bnel        $t7, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x125080u;
    {
        const bool branch_taken_0x125080 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125080) {
            ctx->pc = 0x125084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125080u;
            // 0x125084: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125048;
        }
    }
    ctx->pc = 0x125088u;
label_125088:
    // 0x125088: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12508c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125090: 0xc049c48  jal         func_127120
    ctx->pc = 0x125090u;
    SET_GPR_U32(ctx, 31, 0x125098u);
    ctx->pc = 0x125094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125090u;
    // 0x125094: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x125090u, 0x125098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125098u;
label_125098:
    // 0x125098: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12509c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x12509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250a0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1250a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1250a4: 0x1d27023  subu        $t6, $t6, $s2
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x1250a8: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1250ac: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x1250acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
    // 0x1250b0: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x1250b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_1250b4:
    // 0x1250b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1250b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1250b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1250b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1250bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1250c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1250c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1250c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1250c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1250c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1250c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1250cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1250ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1250d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1250d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1250d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1250D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1250D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250D4u;
        // 0x1250d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1250D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1250DCu;
label_1250dc:
    // 0x1250dc: 0x1f4001b  divu        $zero, $t7, $s4
    ctx->pc = 0x1250dcu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x1250e0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1250E0u;
    {
        const bool branch_taken_0x1250e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250e0) {
            ctx->pc = 0x1250E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1250E0u;
            // 0x1250e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1250E8u;
            goto label_1250e8;
        }
    }
    ctx->pc = 0x1250E8u;
label_1250e8:
    // 0x1250e8: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1250E8u;
    {
        const bool branch_taken_0x1250e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250e8) {
            ctx->pc = 0x1250B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1250b4;
        }
    }
    ctx->pc = 0x1250F0u;
}
