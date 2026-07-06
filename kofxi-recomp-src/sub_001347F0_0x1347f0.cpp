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

// Function: sub_001347F0
// Address: 0x1347f0 - 0x134970
void sub_001347F0_0x1347f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001347F0_0x1347f0");
#endif

    switch (ctx->pc) {
        case 0x134864u: goto label_134864;
        case 0x13486cu: goto label_13486c;
        case 0x134874u: goto label_134874;
        case 0x13487cu: goto label_13487c;
        case 0x134884u: goto label_134884;
        case 0x134898u: goto label_134898;
        case 0x1348a8u: goto label_1348a8;
        case 0x1348b8u: goto label_1348b8;
        case 0x1348e0u: goto label_1348e0;
        case 0x1348e8u: goto label_1348e8;
        case 0x1348f0u: goto label_1348f0;
        case 0x1348f8u: goto label_1348f8;
        case 0x134904u: goto label_134904;
        case 0x134910u: goto label_134910;
        case 0x134920u: goto label_134920;
        case 0x134954u: goto label_134954;
        default: break;
    }

    ctx->pc = 0x1347f0u;

label_1347f0:
    // 0x1347f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1347f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1347f4: 0x9443dab0  lhu         $v1, -0x2550($v0)
    ctx->pc = 0x1347f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x1347f8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1347fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1347FCu;
    {
        const bool branch_taken_0x1347fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1347fc) {
            ctx->pc = 0x13480Cu;
            goto label_13480c;
        }
    }
    ctx->pc = 0x134804u;
    // 0x134804: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x134804u;
    {
        const bool branch_taken_0x134804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134804u;
        // 0x134808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134804) {
            ctx->pc = 0x134848u;
            goto label_134848;
        }
    }
    ctx->pc = 0x13480Cu;
label_13480c:
    // 0x13480c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x134810: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x134814: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x134814u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x134818: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134818u;
    {
        const bool branch_taken_0x134818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134818) {
            ctx->pc = 0x13481Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134818u;
            // 0x13481c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134828u;
            goto label_134828;
        }
    }
    ctx->pc = 0x134820u;
    // 0x134820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134820u;
    {
        const bool branch_taken_0x134820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134820u;
        // 0x134824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134820) {
            ctx->pc = 0x134848u;
            goto label_134848;
        }
    }
    ctx->pc = 0x134828u;
label_134828:
    // 0x134828: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134828u;
    {
        const bool branch_taken_0x134828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134828) {
            ctx->pc = 0x134838u;
            goto label_134838;
        }
    }
    ctx->pc = 0x134830u;
    // 0x134830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134830u;
    {
        const bool branch_taken_0x134830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134830u;
        // 0x134834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134830) {
            ctx->pc = 0x134848u;
            goto label_134848;
        }
    }
    ctx->pc = 0x134838u;
label_134838:
    // 0x134838: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x13483c: 0x9042b286  lbu         $v0, -0x4D7A($v0)
    ctx->pc = 0x13483cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947462)));
    // 0x134840: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x134840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x134844: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_134848:
    // 0x134848: 0x3e00008  jr          $ra
    ctx->pc = 0x134848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134850u;
    // 0x134850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13485c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x13485Cu;
    SET_GPR_U32(ctx, 31, 0x134864u);
    ctx->pc = 0x134860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13485Cu;
    // 0x134860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x13485Cu, 0x134864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134864u;
label_134864:
    // 0x134864: 0xc055630  jal         func_1558C0
    ctx->pc = 0x134864u;
    SET_GPR_U32(ctx, 31, 0x13486Cu);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x134864u, 0x13486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13486Cu;
label_13486c:
    // 0x13486c: 0xc055684  jal         func_155A10
    ctx->pc = 0x13486Cu;
    SET_GPR_U32(ctx, 31, 0x134874u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x13486Cu, 0x134874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134874u;
label_134874:
    // 0x134874: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x134874u;
    SET_GPR_U32(ctx, 31, 0x13487Cu);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x134874u, 0x13487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13487Cu;
label_13487c:
    // 0x13487c: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x13487Cu;
    SET_GPR_U32(ctx, 31, 0x134884u);
    ctx->pc = 0x197F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F80u, 0x13487Cu, 0x134884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134884u;
label_134884:
    // 0x134884: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x134884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134888: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x134888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13488c: 0xa06058c0  sb          $zero, 0x58C0($v1)
    ctx->pc = 0x13488cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 0));
    // 0x134890: 0xc04d1fc  jal         func_1347F0
    ctx->pc = 0x134890u;
    SET_GPR_U32(ctx, 31, 0x134898u);
    ctx->pc = 0x134894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134890u;
    // 0x134894: 0xa04058b8  sb          $zero, 0x58B8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 22712), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347F0u;
    goto label_1347f0;
    ctx->pc = 0x134898u;
label_134898:
    // 0x134898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134898u;
    {
        const bool branch_taken_0x134898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134898) {
            ctx->pc = 0x1348C0u;
            goto label_1348c0;
        }
    }
    ctx->pc = 0x1348A0u;
    // 0x1348a0: 0xc04d25c  jal         func_134970
    ctx->pc = 0x1348A0u;
    SET_GPR_U32(ctx, 31, 0x1348A8u);
    ctx->pc = 0x134970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134970u, 0x1348A0u, 0x1348A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348A8u;
label_1348a8:
    // 0x1348a8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1348a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1348ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1348acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348b0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1348B0u;
    SET_GPR_U32(ctx, 31, 0x1348B8u);
    ctx->pc = 0x1348B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348B0u;
    // 0x1348b4: 0x2484d750  addiu       $a0, $a0, -0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1348B0u, 0x1348B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348B8u;
label_1348b8:
    // 0x1348b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1348B8u;
    {
        const bool branch_taken_0x1348b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348B8u;
        // 0x1348bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348b8) {
            ctx->pc = 0x134924u;
            goto label_134924;
        }
    }
    ctx->pc = 0x1348C0u;
label_1348c0:
    // 0x1348c0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1348c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1348c4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1348c8: 0x248454a0  addiu       $a0, $a0, 0x54A0
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21664));
    // 0x1348cc: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
    // 0x1348d0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1348d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1348d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1348d8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1348D8u;
    SET_GPR_U32(ctx, 31, 0x1348E0u);
    ctx->pc = 0x1348DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348D8u;
    // 0x1348dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1348D8u, 0x1348E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348E0u;
label_1348e0:
    // 0x1348e0: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x1348E0u;
    SET_GPR_U32(ctx, 31, 0x1348E8u);
    ctx->pc = 0x1348E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348E0u;
    // 0x1348e4: 0x24040302  addiu       $a0, $zero, 0x302 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x1348E0u, 0x1348E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348E8u;
label_1348e8:
    // 0x1348e8: 0xc04c200  jal         func_130800
    ctx->pc = 0x1348E8u;
    SET_GPR_U32(ctx, 31, 0x1348F0u);
    ctx->pc = 0x130800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130800u, 0x1348E8u, 0x1348F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348F0u;
label_1348f0:
    // 0x1348f0: 0xc04d198  jal         func_134660
    ctx->pc = 0x1348F0u;
    SET_GPR_U32(ctx, 31, 0x1348F8u);
    ctx->pc = 0x134660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134660u, 0x1348F0u, 0x1348F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348F8u;
label_1348f8:
    // 0x1348f8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1348fc: 0xc0558e4  jal         func_156390
    ctx->pc = 0x1348FCu;
    SET_GPR_U32(ctx, 31, 0x134904u);
    ctx->pc = 0x134900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348FCu;
    // 0x134900: 0x2484c5d8  addiu       $a0, $a0, -0x3A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156390u, 0x1348FCu, 0x134904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134904u;
label_134904:
    // 0x134904: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134908: 0xc0558d0  jal         func_156340
    ctx->pc = 0x134908u;
    SET_GPR_U32(ctx, 31, 0x134910u);
    ctx->pc = 0x13490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134908u;
    // 0x13490c: 0x2484d750  addiu       $a0, $a0, -0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x134908u, 0x134910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134910u;
label_134910:
    // 0x134910: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x134910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x134914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134918: 0xc055768  jal         func_155DA0
    ctx->pc = 0x134918u;
    SET_GPR_U32(ctx, 31, 0x134920u);
    ctx->pc = 0x13491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134918u;
    // 0x13491c: 0x24844930  addiu       $a0, $a0, 0x4930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x134918u, 0x134920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134920u;
label_134920:
    // 0x134920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_134924:
    // 0x134924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134928: 0x3e00008  jr          $ra
    ctx->pc = 0x134928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134928u;
        // 0x13492c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134930u;
    // 0x134930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134934: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x134934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x134938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13493c: 0x806358b8  lb          $v1, 0x58B8($v1)
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22712)));
    // 0x134940: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134940u;
    {
        const bool branch_taken_0x134940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134940u;
        // 0x134944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134940) {
            ctx->pc = 0x134954u;
            goto label_134954;
        }
    }
    ctx->pc = 0x134948u;
    // 0x134948: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x13494c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x13494Cu;
    SET_GPR_U32(ctx, 31, 0x134954u);
    ctx->pc = 0x134950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13494Cu;
    // 0x134950: 0x24844960  addiu       $a0, $a0, 0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x13494Cu, 0x134954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134954u;
label_134954:
    // 0x134954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134958: 0x3e00008  jr          $ra
    ctx->pc = 0x134958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134958u;
        // 0x13495c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134960u;
    // 0x134960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x134960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134964: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x134968: 0x8055768  j           func_155DA0
    ctx->pc = 0x134968u;
    ctx->pc = 0x13496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134968u;
    // 0x13496c: 0x24849440  addiu       $a0, $a0, -0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    sub_00155DA0_0x155da0(rdram, ctx, runtime); return;
    ctx->pc = 0x134970u;
}
