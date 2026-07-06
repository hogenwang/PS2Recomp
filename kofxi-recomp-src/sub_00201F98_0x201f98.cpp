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

// Function: sub_00201F98
// Address: 0x201f98 - 0x2020d8
void sub_00201F98_0x201f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F98_0x201f98");
#endif

    switch (ctx->pc) {
        case 0x202020u: goto label_202020;
        case 0x202048u: goto label_202048;
        case 0x202074u: goto label_202074;
        default: break;
    }

    ctx->pc = 0x201f98u;

    // 0x201f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201f9c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x201f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x201fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201fa8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x201fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x201fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x201fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x201fb4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x201fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x201fb8: 0x80807f0  j           func_201FC0
    ctx->pc = 0x201FB8u;
    ctx->pc = 0x201FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FB8u;
    // 0x201fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201FC0u;
    goto label_201fc0;
    ctx->pc = 0x201FC0u;
label_201fc0:
    // 0x201fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201fc4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x201fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x201fcc: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x201fd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x201fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x201fd4: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x201fd8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x201fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x201fdc: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x201fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x201fe0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x201fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x201fe4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x201fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x201fe8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x201fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x201fec: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x201fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x201ff0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201FF0u;
    {
        const bool branch_taken_0x201ff0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FF0u;
        // 0x201ff4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ff0) {
            ctx->pc = 0x202018u;
            goto label_202018;
        }
    }
    ctx->pc = 0x201FF8u;
    // 0x201ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ffc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x201ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x202000: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x202000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x202004: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x202004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x202008: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x202008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x20200c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x20200cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x202010: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x202010u;
    {
        const bool branch_taken_0x202010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202010u;
        // 0x202014: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202010) {
            ctx->pc = 0x202088u;
            goto label_202088;
        }
    }
    ctx->pc = 0x202018u;
label_202018:
    // 0x202018: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x202018u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x20201c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x20201cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_202020:
    // 0x202020: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202024: 0x2610f288  addiu       $s0, $s0, -0xD78
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963848));
    // 0x202028: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20202c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20202cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202030: 0x24a5f280  addiu       $a1, $a1, -0xD80
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963840));
    // 0x202034: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x202034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202038: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x202038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x20203c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20203cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202040: 0xc07340e  jal         func_1CD038
    ctx->pc = 0x202040u;
    SET_GPR_U32(ctx, 31, 0x202048u);
    ctx->pc = 0x202044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202040u;
    // 0x202044: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD038u, 0x202040u, 0x202048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202048u;
label_202048:
    // 0x202048: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20204c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202050: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x202050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x202054: 0x24a5f290  addiu       $a1, $a1, -0xD70
    ctx->pc = 0x202054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963856));
    // 0x202058: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x202058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x20205c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202060: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x202060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x202064: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x202064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202068: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x202068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x20206c: 0xc07340e  jal         func_1CD038
    ctx->pc = 0x20206Cu;
    SET_GPR_U32(ctx, 31, 0x202074u);
    ctx->pc = 0x202070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20206Cu;
    // 0x202070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD038u, 0x20206Cu, 0x202074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202074u;
label_202074:
    // 0x202074: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x202074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x202078: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x202078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20207c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x20207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x202080: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x202080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x202084: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x202084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_202088:
    // 0x202088: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x202088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20208c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x202090: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x202090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202094: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x202094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202098: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x202098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20209c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2020a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2020A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020A0u;
        // 0x2020a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020A8u;
    // 0x2020a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2020ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2020acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2020b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2020b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2020b4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2020B4u;
    {
        const bool branch_taken_0x2020b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2020b4) {
            ctx->pc = 0x2020B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2020B4u;
            // 0x2020b8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2020C8u;
            goto label_2020c8;
        }
    }
    ctx->pc = 0x2020BCu;
    // 0x2020bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2020bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2020c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2020C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020C0u;
        // 0x2020c4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020C8u;
label_2020c8:
    // 0x2020c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2020c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2020cc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2020ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2020d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2020D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020D0u;
        // 0x2020d4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020D8u;
}
