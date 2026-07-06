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

// Function: sub_001103A8
// Address: 0x1103a8 - 0x110548
void sub_001103A8_0x1103a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001103A8_0x1103a8");
#endif

    switch (ctx->pc) {
        case 0x1103c0u: goto label_1103c0;
        case 0x1103f0u: goto label_1103f0;
        case 0x1103f8u: goto label_1103f8;
        case 0x110400u: goto label_110400;
        case 0x110474u: goto label_110474;
        case 0x11048cu: goto label_11048c;
        case 0x1104a4u: goto label_1104a4;
        case 0x1104bcu: goto label_1104bc;
        case 0x1104c4u: goto label_1104c4;
        case 0x1104d0u: goto label_1104d0;
        case 0x1104fcu: goto label_1104fc;
        case 0x110500u: goto label_110500;
        case 0x110508u: goto label_110508;
        default: break;
    }

    ctx->pc = 0x1103a8u;

    // 0x1103a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1103a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1103ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1103acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1103b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1103b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1103b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1103b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1103b8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1103B8u;
    SET_GPR_U32(ctx, 31, 0x1103C0u);
    ctx->pc = 0x1103BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103B8u;
    // 0x1103bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1103B8u, 0x1103C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103C0u;
label_1103c0:
    // 0x1103c0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1103c4: 0x8c6286b0  lw          $v0, -0x7950($v1)
    ctx->pc = 0x1103c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936240)));
    // 0x1103c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1103C8u;
    {
        const bool branch_taken_0x1103c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C8u;
        // 0x1103cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103c8) {
            ctx->pc = 0x1103E8u;
            goto label_1103e8;
        }
    }
    ctx->pc = 0x1103D0u;
    // 0x1103d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1103d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1103d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1103d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1103d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1103d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1103dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1103dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1103e0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1103E0u;
    ctx->pc = 0x1103E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103E0u;
    // 0x1103e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1103E8u;
label_1103e8:
    // 0x1103e8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1103E8u;
    SET_GPR_U32(ctx, 31, 0x1103F0u);
    ctx->pc = 0x1103ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103E8u;
    // 0x1103ec: 0xac7186b0  sw          $s1, -0x7950($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936240), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1103E8u, 0x1103F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103F0u;
label_1103f0:
    // 0x1103f0: 0xc043f12  jal         func_10FC48
    ctx->pc = 0x1103F0u;
    SET_GPR_U32(ctx, 31, 0x1103F8u);
    ctx->pc = 0x10FC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC48u, 0x1103F0u, 0x1103F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103F8u;
label_1103f8:
    // 0x1103f8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1103F8u;
    SET_GPR_U32(ctx, 31, 0x110400u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1103F8u, 0x110400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110400u;
label_110400:
    // 0x110400: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x110404: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x110404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x110408: 0x24726a00  addiu       $s2, $v1, 0x6A00
    ctx->pc = 0x110408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 27136));
    // 0x11040c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x11040cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x110410: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x110410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x110414: 0x25108200  addiu       $s0, $t0, -0x7E00
    ctx->pc = 0x110414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935040));
    // 0x110418: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11041c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x110420: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x110420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x110424: 0x24e77a00  addiu       $a3, $a3, 0x7A00
    ctx->pc = 0x110424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31232));
    // 0x110428: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x110428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11042c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11042cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x110430: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x110430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x110434: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x110434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x110438: 0xad118200  sw          $s1, -0x7E00($t0)
    ctx->pc = 0x110438u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294935040), GPR_U32(ctx, 17));
    // 0x11043c: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x11043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x110440: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x110440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x110444: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110448: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x110448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x11044c: 0x24a506a8  addiu       $a1, $a1, 0x6A8
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1704));
    // 0x110450: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x110450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x110454: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x110454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x110458: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x110458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11045c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x110460: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x110460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x110464: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x110464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x110468: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x110468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x11046c: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x11046Cu;
    SET_GPR_U32(ctx, 31, 0x110474u);
    ctx->pc = 0x110470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11046Cu;
    // 0x110470: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x11046Cu, 0x110474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110474u;
label_110474:
    // 0x110474: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x110474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x110478: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11047c: 0x24a50a80  addiu       $a1, $a1, 0xA80
    ctx->pc = 0x11047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2688));
    // 0x110480: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x110480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x110484: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x110484u;
    SET_GPR_U32(ctx, 31, 0x11048Cu);
    ctx->pc = 0x110488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110484u;
    // 0x110488: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x110484u, 0x11048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11048Cu;
label_11048c:
    // 0x11048c: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x11048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x110490: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110494: 0x24a50ca0  addiu       $a1, $a1, 0xCA0
    ctx->pc = 0x110494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3232));
    // 0x110498: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x110498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x11049c: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x11049Cu;
    SET_GPR_U32(ctx, 31, 0x1104A4u);
    ctx->pc = 0x1104A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11049Cu;
    // 0x1104a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x11049Cu, 0x1104A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104A4u;
label_1104a4:
    // 0x1104a4: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1104a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1104a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1104a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1104ac: 0x24a507b8  addiu       $a1, $a1, 0x7B8
    ctx->pc = 0x1104acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1976));
    // 0x1104b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1104b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104b4: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x1104B4u;
    SET_GPR_U32(ctx, 31, 0x1104BCu);
    ctx->pc = 0x1104B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104B4u;
    // 0x1104b8: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF30u, 0x1104B4u, 0x1104BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104BCu;
label_1104bc:
    // 0x1104bc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1104BCu;
    SET_GPR_U32(ctx, 31, 0x1104C4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1104BCu, 0x1104C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104C4u;
label_1104c4:
    // 0x1104c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1104c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1104c8: 0xc04341c  jal         func_10D070
    ctx->pc = 0x1104C8u;
    SET_GPR_U32(ctx, 31, 0x1104D0u);
    ctx->pc = 0x1104CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104C8u;
    // 0x1104cc: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D070u, 0x1104C8u, 0x1104D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104D0u;
label_1104d0:
    // 0x1104d0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1104D0u;
    {
        const bool branch_taken_0x1104d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1104D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104D0u;
        // 0x1104d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104d0) {
            ctx->pc = 0x110530u;
            goto label_110530;
        }
    }
    ctx->pc = 0x1104D8u;
    // 0x1104d8: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1104d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1104dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1104dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1104e0: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x1104e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x1104e4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1104e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1104e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1104e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1104ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1104ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1104f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f4: 0xc04404c  jal         func_110130
    ctx->pc = 0x1104F4u;
    SET_GPR_U32(ctx, 31, 0x1104FCu);
    ctx->pc = 0x1104F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104F4u;
    // 0x1104f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110130u, 0x1104F4u, 0x1104FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104FCu;
label_1104fc:
    // 0x1104fc: 0x0  nop
    ctx->pc = 0x1104fcu;
    // NOP
label_110500:
    // 0x110500: 0xc043e9e  jal         func_10FA78
    ctx->pc = 0x110500u;
    SET_GPR_U32(ctx, 31, 0x110508u);
    ctx->pc = 0x110504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110500u;
    // 0x110504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA78u, 0x110500u, 0x110508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110508u;
label_110508:
    // 0x110508: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x110508u;
    {
        const bool branch_taken_0x110508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110508u;
        // 0x11050c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110508) {
            ctx->pc = 0x110500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110500;
        }
    }
    ctx->pc = 0x110510u;
    // 0x110510: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11051c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11051cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110520: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x110520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x110524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110528: 0x8043418  j           func_10D060
    ctx->pc = 0x110528u;
    ctx->pc = 0x11052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110528u;
    // 0x11052c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    sub_0010D060_0x10d060(rdram, ctx, runtime); return;
    ctx->pc = 0x110530u;
label_110530:
    // 0x110530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110534: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11053c: 0x3e00008  jr          $ra
    ctx->pc = 0x11053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11053Cu;
        // 0x110540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110544u;
    // 0x110544: 0x0  nop
    ctx->pc = 0x110544u;
    // NOP
    if (ctx->pc == 0x110544u) { ctx->pc = 0x110548u; }
}
