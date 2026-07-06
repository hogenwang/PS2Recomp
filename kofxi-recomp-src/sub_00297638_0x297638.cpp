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

// Function: sub_00297638
// Address: 0x297638 - 0x297700
void sub_00297638_0x297638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297638_0x297638");
#endif

    switch (ctx->pc) {
        case 0x297638u: goto label_297638;
        case 0x29763cu: goto label_29763c;
        case 0x297640u: goto label_297640;
        case 0x297644u: goto label_297644;
        case 0x297648u: goto label_297648;
        case 0x29764cu: goto label_29764c;
        case 0x297650u: goto label_297650;
        case 0x297654u: goto label_297654;
        case 0x297658u: goto label_297658;
        case 0x29765cu: goto label_29765c;
        case 0x297660u: goto label_297660;
        case 0x297664u: goto label_297664;
        case 0x297668u: goto label_297668;
        case 0x29766cu: goto label_29766c;
        case 0x297670u: goto label_297670;
        case 0x297674u: goto label_297674;
        case 0x297678u: goto label_297678;
        case 0x29767cu: goto label_29767c;
        case 0x297680u: goto label_297680;
        case 0x297684u: goto label_297684;
        case 0x297688u: goto label_297688;
        case 0x29768cu: goto label_29768c;
        case 0x297690u: goto label_297690;
        case 0x297694u: goto label_297694;
        case 0x297698u: goto label_297698;
        case 0x29769cu: goto label_29769c;
        case 0x2976a0u: goto label_2976a0;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976a8u: goto label_2976a8;
        case 0x2976acu: goto label_2976ac;
        case 0x2976b0u: goto label_2976b0;
        case 0x2976b4u: goto label_2976b4;
        case 0x2976b8u: goto label_2976b8;
        case 0x2976bcu: goto label_2976bc;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976c4u: goto label_2976c4;
        case 0x2976c8u: goto label_2976c8;
        case 0x2976ccu: goto label_2976cc;
        case 0x2976d0u: goto label_2976d0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976d8u: goto label_2976d8;
        case 0x2976dcu: goto label_2976dc;
        case 0x2976e0u: goto label_2976e0;
        case 0x2976e4u: goto label_2976e4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976ecu: goto label_2976ec;
        case 0x2976f0u: goto label_2976f0;
        case 0x2976f4u: goto label_2976f4;
        case 0x2976f8u: goto label_2976f8;
        case 0x2976fcu: goto label_2976fc;
        default: break;
    }

    ctx->pc = 0x297638u;

label_297638:
    // 0x297638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29763c:
    // 0x29763c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_297640:
    // 0x297640: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_297644:
    // 0x297644: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x297644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_297648:
    // 0x297648: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29764c:
    // 0x29764c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29764cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297650:
    // 0x297650: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x297650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_297654:
    // 0x297654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x297654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297658:
    // 0x297658: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_29765c:
    // 0x29765c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_297660:
    // 0x297660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297664:
    // 0x297664: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
label_297668:
    if (ctx->pc == 0x297668u) {
        ctx->pc = 0x297668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297664u;
        // 0x297668: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29766Cu;
        goto label_29766c;
    }
    ctx->pc = 0x297664u;
    {
        const bool branch_taken_0x297664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x297668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297664u;
        // 0x297668: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297664) {
            ctx->pc = 0x2976D8u;
            goto label_2976d8;
        }
    }
    ctx->pc = 0x29766Cu;
label_29766c:
    // 0x29766c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x29766cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_297670:
    // 0x297670: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
label_297674:
    if (ctx->pc == 0x297674u) {
        ctx->pc = 0x297674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297670u;
        // 0x297674: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297678u;
        goto label_297678;
    }
    ctx->pc = 0x297670u;
    {
        const bool branch_taken_0x297670 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x297674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297670u;
        // 0x297674: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297670) {
            ctx->pc = 0x2976D8u;
            goto label_2976d8;
        }
    }
    ctx->pc = 0x297678u;
label_297678:
    // 0x297678: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x297678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_29767c:
    // 0x29767c: 0x0  nop
    ctx->pc = 0x29767cu;
    // NOP
label_297680:
    // 0x297680: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x297680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_297684:
    // 0x297684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297688:
    // 0x297688: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x297688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29768c:
    // 0x29768c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_297690:
    if (ctx->pc == 0x297690u) {
        ctx->pc = 0x297690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29768Cu;
        // 0x297690: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297694u;
        goto label_297694;
    }
    ctx->pc = 0x29768Cu;
    {
        const bool branch_taken_0x29768c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29768c) {
            ctx->pc = 0x297690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29768Cu;
            // 0x297690: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2976CCu;
            goto label_2976cc;
        }
    }
    ctx->pc = 0x297694u;
label_297694:
    // 0x297694: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x297694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_297698:
    // 0x297698: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29769c:
    if (ctx->pc == 0x29769Cu) {
        ctx->pc = 0x29769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297698u;
        // 0x29769c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976A0u;
        goto label_2976a0;
    }
    ctx->pc = 0x297698u;
    {
        const bool branch_taken_0x297698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297698u;
        // 0x29769c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297698) {
            ctx->pc = 0x2976C8u;
            goto label_2976c8;
        }
    }
    ctx->pc = 0x2976A0u;
label_2976a0:
    // 0x2976a0: 0xc0a5d12  jal         func_297448
label_2976a4:
    if (ctx->pc == 0x2976A4u) {
        ctx->pc = 0x2976A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976A0u;
        // 0x2976a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976A8u;
        goto label_2976a8;
    }
    ctx->pc = 0x2976A0u;
    SET_GPR_U32(ctx, 31, 0x2976A8u);
    ctx->pc = 0x2976A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976A0u;
    // 0x2976a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297448u, 0x2976A0u, 0x2976A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976A8u;
label_2976a8:
    // 0x2976a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2976a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2976ac:
    // 0x2976ac: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x2976acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2976b0:
    // 0x2976b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2976b4:
    // 0x2976b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2976b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2976b8:
    // 0x2976b8: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x2976b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2976bc:
    // 0x2976bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2976bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2976c0:
    // 0x2976c0: 0x40f809  jalr        $v0
label_2976c4:
    if (ctx->pc == 0x2976C4u) {
        ctx->pc = 0x2976C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976C0u;
        // 0x2976c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976C8u;
        goto label_2976c8;
    }
    ctx->pc = 0x2976C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2976C8u);
        ctx->pc = 0x2976C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976C0u;
        // 0x2976c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2976C0u, 0x2976C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2976C8u;
label_2976c8:
    // 0x2976c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2976c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2976cc:
    // 0x2976cc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2976ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2976d0:
    // 0x2976d0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_2976d4:
    if (ctx->pc == 0x2976D4u) {
        ctx->pc = 0x2976D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976D0u;
        // 0x2976d4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976D8u;
        goto label_2976d8;
    }
    ctx->pc = 0x2976D0u;
    {
        const bool branch_taken_0x2976d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2976d0) {
            ctx->pc = 0x2976D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2976D0u;
            // 0x2976d4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297680;
        }
    }
    ctx->pc = 0x2976D8u;
label_2976d8:
    // 0x2976d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2976d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2976dc:
    // 0x2976dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2976dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2976e0:
    // 0x2976e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2976e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2976e4:
    // 0x2976e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2976e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2976e8:
    // 0x2976e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2976e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2976ec:
    // 0x2976ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2976ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2976f0:
    // 0x2976f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2976f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2976f4:
    // 0x2976f4: 0x3e00008  jr          $ra
label_2976f8:
    if (ctx->pc == 0x2976F8u) {
        ctx->pc = 0x2976F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976F4u;
        // 0x2976f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976FCu;
        goto label_2976fc;
    }
    ctx->pc = 0x2976F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2976F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976F4u;
        // 0x2976f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2976F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2976FCu;
label_2976fc:
    // 0x2976fc: 0x0  nop
    ctx->pc = 0x2976fcu;
    // NOP
    if (ctx->pc == 0x2976fcu) { ctx->pc = 0x297700u; }
}
