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

// Function: sub_00266038
// Address: 0x266038 - 0x266140
void sub_00266038_0x266038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266038_0x266038");
#endif

    switch (ctx->pc) {
        case 0x266070u: goto label_266070;
        case 0x266078u: goto label_266078;
        case 0x266098u: goto label_266098;
        case 0x2660b0u: goto label_2660b0;
        case 0x2660c0u: goto label_2660c0;
        case 0x2660c8u: goto label_2660c8;
        case 0x2660ecu: goto label_2660ec;
        case 0x266100u: goto label_266100;
        default: break;
    }

    ctx->pc = 0x266038u;

    // 0x266038: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26603c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x266040: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266044: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x266044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266048: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26604c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x26604cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266050: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266054: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x266054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266058: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26605c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26605cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266060: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x266060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x266064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266068: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x266068u;
    SET_GPR_U32(ctx, 31, 0x266070u);
    ctx->pc = 0x26606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266068u;
    // 0x26606c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x266068u, 0x266070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266070u;
label_266070:
    // 0x266070: 0xc097242  jal         func_25C908
    ctx->pc = 0x266070u;
    SET_GPR_U32(ctx, 31, 0x266078u);
    ctx->pc = 0x266074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266070u;
    // 0x266074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x266070u, 0x266078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266078u;
label_266078:
    // 0x266078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26607c: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26607Cu;
    {
        const bool branch_taken_0x26607c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x266080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26607Cu;
        // 0x266080: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26607c) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266084u;
    // 0x266084: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x266084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x266088: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x266088u;
    {
        const bool branch_taken_0x266088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266088) {
            ctx->pc = 0x2660B8u;
            goto label_2660b8;
        }
    }
    ctx->pc = 0x266090u;
    // 0x266090: 0xc099642  jal         func_265908
    ctx->pc = 0x266090u;
    SET_GPR_U32(ctx, 31, 0x266098u);
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x266090u, 0x266098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266098u;
label_266098:
    // 0x266098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26609c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2660a0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2660A0u;
    {
        const bool branch_taken_0x2660a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2660a0) {
            ctx->pc = 0x2660B8u;
            goto label_2660b8;
        }
    }
    ctx->pc = 0x2660A8u;
    // 0x2660a8: 0xc097308  jal         func_25CC20
    ctx->pc = 0x2660A8u;
    SET_GPR_U32(ctx, 31, 0x2660B0u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x2660A8u, 0x2660B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660B0u;
label_2660b0:
    // 0x2660b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2660B0u;
    {
        const bool branch_taken_0x2660b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660B0u;
        // 0x2660b4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660b0) {
            ctx->pc = 0x266118u;
            goto label_266118;
        }
    }
    ctx->pc = 0x2660B8u;
label_2660b8:
    // 0x2660b8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2660B8u;
    SET_GPR_U32(ctx, 31, 0x2660C0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2660B8u, 0x2660C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660C0u;
label_2660c0:
    // 0x2660c0: 0xc097308  jal         func_25CC20
    ctx->pc = 0x2660C0u;
    SET_GPR_U32(ctx, 31, 0x2660C8u);
    ctx->pc = 0x2660C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660C0u;
    // 0x2660c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x2660C0u, 0x2660C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660C8u;
label_2660c8:
    // 0x2660c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2660c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2660cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2660ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2660d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2660d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2660d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2660d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660dc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2660dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660e0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2660e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660e4: 0xc099850  jal         func_266140
    ctx->pc = 0x2660E4u;
    SET_GPR_U32(ctx, 31, 0x2660ECu);
    ctx->pc = 0x2660E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660E4u;
    // 0x2660e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266140u, 0x2660E4u, 0x2660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660ECu;
label_2660ec:
    // 0x2660ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2660ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660f0: 0x1e00000a  bgtz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2660F0u;
    {
        const bool branch_taken_0x2660f0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2660F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660F0u;
        // 0x2660f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660f0) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x2660F8u;
    // 0x2660f8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2660F8u;
    SET_GPR_U32(ctx, 31, 0x266100u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2660F8u, 0x266100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266100u;
label_266100:
    // 0x266100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266104: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266108: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266108u;
    {
        const bool branch_taken_0x266108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266108u;
        // 0x26610c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266108) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266110u;
    // 0x266110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266110u;
    {
        const bool branch_taken_0x266110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266110u;
        // 0x266114: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266110) {
            ctx->pc = 0x26611Cu;
            goto label_26611c;
        }
    }
    ctx->pc = 0x266118u;
label_266118:
    // 0x266118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26611c:
    // 0x26611c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266120: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x266124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266128: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26612c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26612cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266138: 0x3e00008  jr          $ra
    ctx->pc = 0x266138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266138u;
        // 0x26613c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266140u;
}
