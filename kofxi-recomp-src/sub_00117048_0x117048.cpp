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

// Function: sub_00117048
// Address: 0x117048 - 0x117148
void sub_00117048_0x117048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117048_0x117048");
#endif

    switch (ctx->pc) {
        case 0x117088u: goto label_117088;
        case 0x117094u: goto label_117094;
        case 0x1170a4u: goto label_1170a4;
        case 0x1170b8u: goto label_1170b8;
        case 0x1170d0u: goto label_1170d0;
        case 0x1170e4u: goto label_1170e4;
        case 0x117100u: goto label_117100;
        default: break;
    }

    ctx->pc = 0x117048u;

    // 0x117048: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x117048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11704c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117050: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x117050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x117054: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117058: 0x3c150011  lui         $s5, 0x11
    ctx->pc = 0x117058u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)17 << 16));
    // 0x11705c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117060: 0x3c140011  lui         $s4, 0x11
    ctx->pc = 0x117060u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17 << 16));
    // 0x117064: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117068: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11706c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117070: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x117070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x117074: 0x24508dc0  addiu       $s0, $v0, -0x7240
    ctx->pc = 0x117074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x117078: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x117078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11707c: 0x8c448dc0  lw          $a0, -0x7240($v0)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938048)));
    // 0x117080: 0xc045c52  jal         func_117148
    ctx->pc = 0x117080u;
    SET_GPR_U32(ctx, 31, 0x117088u);
    ctx->pc = 0x117084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117080u;
    // 0x117084: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117148u, 0x117080u, 0x117088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117088u;
label_117088:
    // 0x117088: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11708c: 0xc045c52  jal         func_117148
    ctx->pc = 0x11708Cu;
    SET_GPR_U32(ctx, 31, 0x117094u);
    ctx->pc = 0x117090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11708Cu;
    // 0x117090: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117148u, 0x11708Cu, 0x117094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117094u;
label_117094:
    // 0x117094: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x117094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x117098: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x117098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x11709c: 0xc045c00  jal         func_117000
    ctx->pc = 0x11709Cu;
    SET_GPR_U32(ctx, 31, 0x1170A4u);
    ctx->pc = 0x1170A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11709Cu;
    // 0x1170a0: 0x26a66fc0  addiu       $a2, $s5, 0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117000u, 0x11709Cu, 0x1170A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170A4u;
label_1170a4:
    // 0x1170a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1170a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1170a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1170ac: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1170acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1170b0: 0xc045c00  jal         func_117000
    ctx->pc = 0x1170B0u;
    SET_GPR_U32(ctx, 31, 0x1170B8u);
    ctx->pc = 0x1170B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170B0u;
    // 0x1170b4: 0x26866f88  addiu       $a2, $s4, 0x6F88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117000u, 0x1170B0u, 0x1170B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170B8u;
label_1170b8:
    // 0x1170b8: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1170b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1170bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1170bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170c0: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1170c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1170c4: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1170C4u;
    {
        const bool branch_taken_0x1170c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1170C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C4u;
        // 0x1170c8: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c4) {
            ctx->pc = 0x117118u;
            goto label_117118;
        }
    }
    ctx->pc = 0x1170CCu;
    // 0x1170cc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1170ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1170d0:
    // 0x1170d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1170D0u;
    {
        const bool branch_taken_0x1170d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170D0u;
        // 0x1170d4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170d0) {
            ctx->pc = 0x1170F0u;
            goto label_1170f0;
        }
    }
    ctx->pc = 0x1170D8u;
    // 0x1170d8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1170d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1170dc: 0xc045c00  jal         func_117000
    ctx->pc = 0x1170DCu;
    SET_GPR_U32(ctx, 31, 0x1170E4u);
    ctx->pc = 0x1170E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170DCu;
    // 0x1170e0: 0x26a66fc0  addiu       $a2, $s5, 0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117000u, 0x1170DCu, 0x1170E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170E4u;
label_1170e4:
    // 0x1170e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1170e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1170E8u;
    {
        const bool branch_taken_0x1170e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170E8u;
        // 0x1170ec: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170e8) {
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x1170F0u;
label_1170f0:
    // 0x1170f0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1170f4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1170f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1170f8: 0xc045c00  jal         func_117000
    ctx->pc = 0x1170F8u;
    SET_GPR_U32(ctx, 31, 0x117100u);
    ctx->pc = 0x1170FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170F8u;
    // 0x1170fc: 0x26866f88  addiu       $a2, $s4, 0x6F88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117000u, 0x1170F8u, 0x117100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117100u;
label_117100:
    // 0x117100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x117100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117104: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x117104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_117108:
    // 0x117108: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x117108u;
    {
        const bool branch_taken_0x117108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x11710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117108u;
        // 0x11710c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117108) {
            ctx->pc = 0x1170D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1170d0;
        }
    }
    ctx->pc = 0x117110u;
    // 0x117110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117110u;
    {
        const bool branch_taken_0x117110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117110u;
        // 0x117114: 0xaed18db8  sw          $s1, -0x7248($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294938040), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117110) {
            ctx->pc = 0x11711Cu;
            goto label_11711c;
        }
    }
    ctx->pc = 0x117118u;
label_117118:
    // 0x117118: 0xaed18db8  sw          $s1, -0x7248($s6)
    ctx->pc = 0x117118u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294938040), GPR_U32(ctx, 17));
label_11711c:
    // 0x11711c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117120: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117124: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x117124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117128: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11712c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11712cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117130: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117134: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11713c: 0x3e00008  jr          $ra
    ctx->pc = 0x11713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11713Cu;
        // 0x117140: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11713Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117144u;
    // 0x117144: 0x0  nop
    ctx->pc = 0x117144u;
    // NOP
}
