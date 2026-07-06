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

// Function: sub_003076D0
// Address: 0x3076d0 - 0x307800
void sub_003076D0_0x3076d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003076D0_0x3076d0");
#endif

    switch (ctx->pc) {
        case 0x3076e8u: goto label_3076e8;
        case 0x3076f0u: goto label_3076f0;
        case 0x3076f8u: goto label_3076f8;
        case 0x307734u: goto label_307734;
        case 0x30773cu: goto label_30773c;
        case 0x30775cu: goto label_30775c;
        case 0x307768u: goto label_307768;
        case 0x307774u: goto label_307774;
        case 0x3077a4u: goto label_3077a4;
        case 0x3077d8u: goto label_3077d8;
        default: break;
    }

    ctx->pc = 0x3076d0u;

    // 0x3076d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3076d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3076d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3076d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3076d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3076d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3076dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3076dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3076e0: 0xc0c1d84  jal         func_307610
    ctx->pc = 0x3076E0u;
    SET_GPR_U32(ctx, 31, 0x3076E8u);
    ctx->pc = 0x3076E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076E0u;
    // 0x3076e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307610u, 0x3076E0u, 0x3076E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076E8u;
label_3076e8:
    // 0x3076e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3076ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3076f0:
    // 0x3076f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3076f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076f4: 0x0  nop
    ctx->pc = 0x3076f4u;
    // NOP
label_3076f8:
    // 0x3076f8: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3076fc: 0x94421db0  lhu         $v0, 0x1DB0($v0)
    ctx->pc = 0x3076fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x307700: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x307700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x307704: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x307704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307708: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x307708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
    // 0x30770c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x307710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307714: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x307714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x307718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30771c: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x30771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x307720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x307720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307724: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x307724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x307728: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x307728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30772c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30772Cu;
    SET_GPR_U32(ctx, 31, 0x307734u);
    ctx->pc = 0x307730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30772Cu;
    // 0x307730: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x30772Cu, 0x307734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307734u;
label_307734:
    // 0x307734: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x307734u;
    SET_GPR_U32(ctx, 31, 0x30773Cu);
    ctx->pc = 0x307738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307734u;
    // 0x307738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x307734u, 0x30773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30773Cu;
label_30773c:
    // 0x30773c: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x307740: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x307740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x307744: 0x8c421db8  lw          $v0, 0x1DB8($v0)
    ctx->pc = 0x307744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
    // 0x307748: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x307748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x30774c: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x307750: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
    // 0x307754: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x307754u;
    SET_GPR_U32(ctx, 31, 0x30775Cu);
    ctx->pc = 0x307758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307754u;
    // 0x307758: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x307754u, 0x30775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30775Cu;
label_30775c:
    // 0x30775c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307760: 0xc040454  jal         func_101150
    ctx->pc = 0x307760u;
    SET_GPR_U32(ctx, 31, 0x307768u);
    ctx->pc = 0x307764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307760u;
    // 0x307764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x307760u, 0x307768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307768u;
label_307768:
    // 0x307768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x307768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30776c: 0xc0c1ce4  jal         func_307390
    ctx->pc = 0x30776Cu;
    SET_GPR_U32(ctx, 31, 0x307774u);
    ctx->pc = 0x307770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30776Cu;
    // 0x307770: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307390u, 0x30776Cu, 0x307774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307774u;
label_307774:
    // 0x307774: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x307778: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x30777c: 0x94451db0  lhu         $a1, 0x1DB0($v0)
    ctx->pc = 0x30777cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x307780: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307784: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x307788: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30778c: 0xa4651db0  sh          $a1, 0x1DB0($v1)
    ctx->pc = 0x30778cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7600), (uint16_t)GPR_U32(ctx, 5));
    // 0x307790: 0x94421db0  lhu         $v0, 0x1DB0($v0)
    ctx->pc = 0x307790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x307794: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307794u;
    {
        const bool branch_taken_0x307794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x307794) {
            ctx->pc = 0x3077B0u;
            goto label_3077b0;
        }
    }
    ctx->pc = 0x30779Cu;
    // 0x30779c: 0xc0c1d8c  jal         func_307630
    ctx->pc = 0x30779Cu;
    SET_GPR_U32(ctx, 31, 0x3077A4u);
    ctx->pc = 0x307630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307630u, 0x30779Cu, 0x3077A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077A4u;
label_3077a4:
    // 0x3077a4: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3077a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3077a8: 0xa4401db0  sh          $zero, 0x1DB0($v0)
    ctx->pc = 0x3077a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7600), (uint16_t)GPR_U32(ctx, 0));
    // 0x3077ac: 0x0  nop
    ctx->pc = 0x3077acu;
    // NOP
label_3077b0:
    // 0x3077b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3077b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3077b4: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x3077b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3077b8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3077B8u;
    {
        const bool branch_taken_0x3077b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3077b8) {
            ctx->pc = 0x3076F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3076f8;
        }
    }
    ctx->pc = 0x3077C0u;
    // 0x3077c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3077c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3077c4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x3077c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3077c8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3077C8u;
    {
        const bool branch_taken_0x3077c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077C8u;
        // 0x3077cc: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077c8) {
            ctx->pc = 0x3076F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3076f0;
        }
    }
    ctx->pc = 0x3077D0u;
    // 0x3077d0: 0xc0c1d8c  jal         func_307630
    ctx->pc = 0x3077D0u;
    SET_GPR_U32(ctx, 31, 0x3077D8u);
    ctx->pc = 0x307630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307630u, 0x3077D0u, 0x3077D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077D8u;
label_3077d8:
    // 0x3077d8: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3077d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3077dc: 0xa4601db0  sh          $zero, 0x1DB0($v1)
    ctx->pc = 0x3077dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7600), (uint16_t)GPR_U32(ctx, 0));
    // 0x3077e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3077e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3077e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3077e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3077e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3077e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3077ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3077ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3077f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3077F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3077F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077F0u;
        // 0x3077f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3077F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3077F8u;
    // 0x3077f8: 0x0  nop
    ctx->pc = 0x3077f8u;
    // NOP
    // 0x3077fc: 0x0  nop
    ctx->pc = 0x3077fcu;
    // NOP
}
