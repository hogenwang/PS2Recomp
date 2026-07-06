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

// Function: sub_0032FC40
// Address: 0x32fc40 - 0x32fcd0
void sub_0032FC40_0x32fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FC40_0x32fc40");
#endif

    switch (ctx->pc) {
        case 0x32fc80u: goto label_32fc80;
        case 0x32fc88u: goto label_32fc88;
        case 0x32fc94u: goto label_32fc94;
        case 0x32fc9cu: goto label_32fc9c;
        case 0x32fca4u: goto label_32fca4;
        case 0x32fcb0u: goto label_32fcb0;
        case 0x32fcbcu: goto label_32fcbc;
        default: break;
    }

    ctx->pc = 0x32fc40u;

    // 0x32fc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fc44: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32fc48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fc4c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32fc50: 0xa0409780  sb          $zero, -0x6880($v0)
    ctx->pc = 0x32fc50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fc54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fc58: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x32fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fc5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fc60: 0xac40e808  sw          $zero, -0x17F8($v0)
    ctx->pc = 0x32fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
    // 0x32fc64: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fc68: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x32fc68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fc6c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fc70: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x32fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x32fc74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fc78: 0xc068244  jal         func_1A0910
    ctx->pc = 0x32FC78u;
    SET_GPR_U32(ctx, 31, 0x32FC80u);
    ctx->pc = 0x32FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC78u;
    // 0x32fc7c: 0xac43e7d8  sw          $v1, -0x1828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x32FC78u, 0x32FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC80u;
label_32fc80:
    // 0x32fc80: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x32FC80u;
    SET_GPR_U32(ctx, 31, 0x32FC88u);
    ctx->pc = 0x32FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC80u;
    // 0x32fc84: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x32FC80u, 0x32FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC88u;
label_32fc88:
    // 0x32fc88: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32fc8c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x32FC8Cu;
    SET_GPR_U32(ctx, 31, 0x32FC94u);
    ctx->pc = 0x32FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC8Cu;
    // 0x32fc90: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x32FC8Cu, 0x32FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC94u;
label_32fc94:
    // 0x32fc94: 0xc053318  jal         func_14CC60
    ctx->pc = 0x32FC94u;
    SET_GPR_U32(ctx, 31, 0x32FC9Cu);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x32FC94u, 0x32FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC9Cu;
label_32fc9c:
    // 0x32fc9c: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x32FC9Cu;
    SET_GPR_U32(ctx, 31, 0x32FCA4u);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x32FC9Cu, 0x32FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCA4u;
label_32fca4:
    // 0x32fca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fca8: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FCA8u;
    SET_GPR_U32(ctx, 31, 0x32FCB0u);
    ctx->pc = 0x32FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCA8u;
    // 0x32fcac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FCA8u, 0x32FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCB0u;
label_32fcb0:
    // 0x32fcb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fcb4: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FCB4u;
    SET_GPR_U32(ctx, 31, 0x32FCBCu);
    ctx->pc = 0x32FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FCB4u;
    // 0x32fcb8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FCB4u, 0x32FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCBCu;
label_32fcbc:
    // 0x32fcbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCC0u;
        // 0x32fcc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FCC8u;
    // 0x32fcc8: 0x0  nop
    ctx->pc = 0x32fcc8u;
    // NOP
    // 0x32fccc: 0x0  nop
    ctx->pc = 0x32fcccu;
    // NOP
}
