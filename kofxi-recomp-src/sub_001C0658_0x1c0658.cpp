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

// Function: sub_001C0658
// Address: 0x1c0658 - 0x1c0768
void sub_001C0658_0x1c0658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0658_0x1c0658");
#endif

    switch (ctx->pc) {
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0728u: goto label_1c0728;
        case 0x1c0738u: goto label_1c0738;
        case 0x1c0748u: goto label_1c0748;
        case 0x1c0758u: goto label_1c0758;
        default: break;
    }

    ctx->pc = 0x1c0658u;

    // 0x1c0658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c065c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c0664: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c0668: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c0668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c066c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c0670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0674: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c0678: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c067c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c0680: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x1c0680u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1c0684: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c0684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c0688: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c068c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c0690: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x1c0694: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c0698: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x1c0698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c069c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c06a0:
    // 0x1c06a0: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06A0u;
        // 0x1c06a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C0700u;
            goto label_1c0700;
        }
    }
    ctx->pc = 0x1C06A8u;
    // 0x1c06a8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C06A8u;
    SET_GPR_U32(ctx, 31, 0x1C06B0u);
    ctx->pc = 0x1C06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06A8u;
    // 0x1c06ac: 0x24041100  addiu       $a0, $zero, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C06A8u, 0x1C06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06B0u;
label_1c06b0:
    // 0x1c06b0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1c06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c06b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c06b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c06b8: 0xc070572  jal         func_1C15C8
    ctx->pc = 0x1C06B8u;
    SET_GPR_U32(ctx, 31, 0x1C06C0u);
    ctx->pc = 0x1C06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06B8u;
    // 0x1c06bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C15C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C15C8u, 0x1C06B8u, 0x1C06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06C0u;
label_1c06c0:
    // 0x1c06c0: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x1c06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1c06c4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C06C4u;
    SET_GPR_U32(ctx, 31, 0x1C06CCu);
    ctx->pc = 0x1C06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06C4u;
    // 0x1c06c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C06C4u, 0x1C06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06CCu;
label_1c06cc:
    // 0x1c06cc: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C06CCu;
    {
        const bool branch_taken_0x1c06cc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1c06cc) {
            ctx->pc = 0x1C06E0u;
            goto label_1c06e0;
        }
    }
    ctx->pc = 0x1C06D4u;
    // 0x1c06d4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1c06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1c06d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C06D8u;
    {
        const bool branch_taken_0x1c06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06D8u;
        // 0x1c06dc: 0xa2360002  sb          $s6, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06d8) {
            ctx->pc = 0x1C06FCu;
            goto label_1c06fc;
        }
    }
    ctx->pc = 0x1C06E0u;
label_1c06e0:
    // 0x1c06e0: 0xc070180  jal         func_1C0600
    ctx->pc = 0x1C06E0u;
    SET_GPR_U32(ctx, 31, 0x1C06E8u);
    ctx->pc = 0x1C06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06E0u;
    // 0x1c06e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0600u, 0x1C06E0u, 0x1C06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06E8u;
label_1c06e8:
    // 0x1c06e8: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1c06e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c06ec: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C06ECu;
    {
        const bool branch_taken_0x1c06ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06ec) {
            ctx->pc = 0x1C06F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C06ECu;
            // 0x1c06f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C06A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c06a0;
        }
    }
    ctx->pc = 0x1C06F4u;
    // 0x1c06f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C06F4u;
    SET_GPR_U32(ctx, 31, 0x1C06FCu);
    ctx->pc = 0x1C06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06F4u;
    // 0x1c06f8: 0x26a49770  addiu       $a0, $s5, -0x6890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C06F4u, 0x1C06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06FCu;
label_1c06fc:
    // 0x1c06fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c06fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0700:
    // 0x1c0700: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c0700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0704: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c0704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0708: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c0708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c070c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c070cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0710: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c0710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0714: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c0714u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0718: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c0718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c071c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C071Cu;
        // 0x1c0720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0724u;
    // 0x1c0724: 0x0  nop
    ctx->pc = 0x1c0724u;
    // NOP
label_1c0728:
    // 0x1c0728: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c072c: 0x2463c84c  addiu       $v1, $v1, -0x37B4
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953036));
    // 0x1c0730: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0730u;
        // 0x1c0734: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0738u;
label_1c0738:
    // 0x1c0738: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c073c: 0x2463c850  addiu       $v1, $v1, -0x37B0
    ctx->pc = 0x1c073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953040));
    // 0x1c0740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0740u;
        // 0x1c0744: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0748u;
label_1c0748:
    // 0x1c0748: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c074c: 0x2442c848  addiu       $v0, $v0, -0x37B8
    ctx->pc = 0x1c074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953032));
    // 0x1c0750: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0750u;
        // 0x1c0754: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0758u;
label_1c0758:
    // 0x1c0758: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c075c: 0x2463c848  addiu       $v1, $v1, -0x37B8
    ctx->pc = 0x1c075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953032));
    // 0x1c0760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0760u;
        // 0x1c0764: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0768u;
}
