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

// Function: sub_0032FAF0
// Address: 0x32faf0 - 0x32fc40
void sub_0032FAF0_0x32faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FAF0_0x32faf0");
#endif

    switch (ctx->pc) {
        case 0x32fb44u: goto label_32fb44;
        case 0x32fb50u: goto label_32fb50;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb64u: goto label_32fb64;
        case 0x32fb6cu: goto label_32fb6c;
        case 0x32fb78u: goto label_32fb78;
        case 0x32fb84u: goto label_32fb84;
        case 0x32fb8cu: goto label_32fb8c;
        case 0x32fc00u: goto label_32fc00;
        case 0x32fc0cu: goto label_32fc0c;
        case 0x32fc14u: goto label_32fc14;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fc28u: goto label_32fc28;
        case 0x32fc34u: goto label_32fc34;
        default: break;
    }

    ctx->pc = 0x32faf0u;

    // 0x32faf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32faf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32faf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fafc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32fb00: 0xa0409780  sb          $zero, -0x6880($v0)
    ctx->pc = 0x32fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fb04: 0x24040202  addiu       $a0, $zero, 0x202
    ctx->pc = 0x32fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x32fb08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb0c: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x32fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fb10: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb14: 0xac40e800  sw          $zero, -0x1800($v0)
    ctx->pc = 0x32fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 0));
    // 0x32fb18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb1c: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x32fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x32fb20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb24: 0xac40e808  sw          $zero, -0x17F8($v0)
    ctx->pc = 0x32fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
    // 0x32fb28: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb2c: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x32fb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fb30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb34: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x32fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x32fb38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fb3c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x32FB3Cu;
    SET_GPR_U32(ctx, 31, 0x32FB44u);
    ctx->pc = 0x32FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB3Cu;
    // 0x32fb40: 0xac43e7d8  sw          $v1, -0x1828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x32FB3Cu, 0x32FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB44u;
label_32fb44:
    // 0x32fb44: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32fb48: 0xc0558e0  jal         func_156380
    ctx->pc = 0x32FB48u;
    SET_GPR_U32(ctx, 31, 0x32FB50u);
    ctx->pc = 0x32FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB48u;
    // 0x32fb4c: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x32FB48u, 0x32FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB50u;
label_32fb50:
    // 0x32fb50: 0xc053318  jal         func_14CC60
    ctx->pc = 0x32FB50u;
    SET_GPR_U32(ctx, 31, 0x32FB58u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x32FB50u, 0x32FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB58u;
label_32fb58:
    // 0x32fb58: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x32fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x32fb5c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x32FB5Cu;
    SET_GPR_U32(ctx, 31, 0x32FB64u);
    ctx->pc = 0x32FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB5Cu;
    // 0x32fb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x32FB5Cu, 0x32FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB64u;
label_32fb64:
    // 0x32fb64: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x32FB64u;
    SET_GPR_U32(ctx, 31, 0x32FB6Cu);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x32FB64u, 0x32FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB6Cu;
label_32fb6c:
    // 0x32fb6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb70: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FB70u;
    SET_GPR_U32(ctx, 31, 0x32FB78u);
    ctx->pc = 0x32FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB70u;
    // 0x32fb74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FB70u, 0x32FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB78u;
label_32fb78:
    // 0x32fb78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb7c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FB7Cu;
    SET_GPR_U32(ctx, 31, 0x32FB84u);
    ctx->pc = 0x32FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB7Cu;
    // 0x32fb80: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FB7Cu, 0x32FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB84u;
label_32fb84:
    // 0x32fb84: 0xc052f0c  jal         func_14BC30
    ctx->pc = 0x32FB84u;
    SET_GPR_U32(ctx, 31, 0x32FB8Cu);
    ctx->pc = 0x32FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB84u;
    // 0x32fb88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC30u, 0x32FB84u, 0x32FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB8Cu;
label_32fb8c:
    // 0x32fb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fb90: 0x3e00008  jr          $ra
    ctx->pc = 0x32FB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB90u;
        // 0x32fb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FB98u;
    // 0x32fb98: 0x0  nop
    ctx->pc = 0x32fb98u;
    // NOP
    // 0x32fb9c: 0x0  nop
    ctx->pc = 0x32fb9cu;
    // NOP
    // 0x32fba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fba4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32fba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fbac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32fbb0: 0xa0409780  sb          $zero, -0x6880($v0)
    ctx->pc = 0x32fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fbb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fbb8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbbc: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x32fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fbc0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbc4: 0xac44e800  sw          $a0, -0x1800($v0)
    ctx->pc = 0x32fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 4));
    // 0x32fbc8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbcc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x32fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32fbd0: 0xac43e7f8  sw          $v1, -0x1808($v0)
    ctx->pc = 0x32fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
    // 0x32fbd4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbd8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fbdc: 0xac44e808  sw          $a0, -0x17F8($v0)
    ctx->pc = 0x32fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 4));
    // 0x32fbe0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbe4: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x32fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fbe8: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x32fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x32fbec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32fbf0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fbf4: 0x24040202  addiu       $a0, $zero, 0x202
    ctx->pc = 0x32fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x32fbf8: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x32FBF8u;
    SET_GPR_U32(ctx, 31, 0x32FC00u);
    ctx->pc = 0x32FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBF8u;
    // 0x32fbfc: 0xac43e7d8  sw          $v1, -0x1828($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x32FBF8u, 0x32FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC00u;
label_32fc00:
    // 0x32fc00: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32fc04: 0xc0558e0  jal         func_156380
    ctx->pc = 0x32FC04u;
    SET_GPR_U32(ctx, 31, 0x32FC0Cu);
    ctx->pc = 0x32FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC04u;
    // 0x32fc08: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x32FC04u, 0x32FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC0Cu;
label_32fc0c:
    // 0x32fc0c: 0xc053318  jal         func_14CC60
    ctx->pc = 0x32FC0Cu;
    SET_GPR_U32(ctx, 31, 0x32FC14u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x32FC0Cu, 0x32FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC14u;
label_32fc14:
    // 0x32fc14: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x32FC14u;
    SET_GPR_U32(ctx, 31, 0x32FC1Cu);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x32FC14u, 0x32FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC1Cu;
label_32fc1c:
    // 0x32fc1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc20: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FC20u;
    SET_GPR_U32(ctx, 31, 0x32FC28u);
    ctx->pc = 0x32FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC20u;
    // 0x32fc24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FC20u, 0x32FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC28u;
label_32fc28:
    // 0x32fc28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc2c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x32FC2Cu;
    SET_GPR_U32(ctx, 31, 0x32FC34u);
    ctx->pc = 0x32FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC2Cu;
    // 0x32fc30: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x32FC2Cu, 0x32FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC34u;
label_32fc34:
    // 0x32fc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fc38: 0x3e00008  jr          $ra
    ctx->pc = 0x32FC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC38u;
        // 0x32fc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FC40u;
}
