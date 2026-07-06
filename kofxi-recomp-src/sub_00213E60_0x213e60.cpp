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

// Function: sub_00213E60
// Address: 0x213e60 - 0x213f58
void sub_00213E60_0x213e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E60_0x213e60");
#endif

    switch (ctx->pc) {
        case 0x213e9cu: goto label_213e9c;
        case 0x213eb0u: goto label_213eb0;
        case 0x213ec4u: goto label_213ec4;
        case 0x213ed8u: goto label_213ed8;
        case 0x213eecu: goto label_213eec;
        case 0x213f00u: goto label_213f00;
        case 0x213f14u: goto label_213f14;
        case 0x213f28u: goto label_213f28;
        case 0x213f30u: goto label_213f30;
        default: break;
    }

    ctx->pc = 0x213e60u;

    // 0x213e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213e64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213e7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x213e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213e84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x213e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e8c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x213e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x213e90: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x213e90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213e94: 0xc084582  jal         func_211608
    ctx->pc = 0x213E94u;
    SET_GPR_U32(ctx, 31, 0x213E9Cu);
    ctx->pc = 0x213E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E94u;
    // 0x213e98: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213E94u, 0x213E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E9Cu;
label_213e9c:
    // 0x213e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ea4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ea8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213EA8u;
    SET_GPR_U32(ctx, 31, 0x213EB0u);
    ctx->pc = 0x213EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EA8u;
    // 0x213eac: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213EA8u, 0x213EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EB0u;
label_213eb0:
    // 0x213eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ebc: 0xc084612  jal         func_211848
    ctx->pc = 0x213EBCu;
    SET_GPR_U32(ctx, 31, 0x213EC4u);
    ctx->pc = 0x213EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EBCu;
    // 0x213ec0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213EBCu, 0x213EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EC4u;
label_213ec4:
    // 0x213ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ecc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ed0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213ED0u;
    SET_GPR_U32(ctx, 31, 0x213ED8u);
    ctx->pc = 0x213ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213ED0u;
    // 0x213ed4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213ED0u, 0x213ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213ED8u;
label_213ed8:
    // 0x213ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213edc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ee0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ee4: 0xc084582  jal         func_211608
    ctx->pc = 0x213EE4u;
    SET_GPR_U32(ctx, 31, 0x213EECu);
    ctx->pc = 0x213EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EE4u;
    // 0x213ee8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213EE4u, 0x213EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EECu;
label_213eec:
    // 0x213eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ef0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ef4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ef8: 0xc084612  jal         func_211848
    ctx->pc = 0x213EF8u;
    SET_GPR_U32(ctx, 31, 0x213F00u);
    ctx->pc = 0x213EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EF8u;
    // 0x213efc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213EF8u, 0x213F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F00u;
label_213f00:
    // 0x213f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f0c: 0xc084612  jal         func_211848
    ctx->pc = 0x213F0Cu;
    SET_GPR_U32(ctx, 31, 0x213F14u);
    ctx->pc = 0x213F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F0Cu;
    // 0x213f10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213F0Cu, 0x213F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F14u;
label_213f14:
    // 0x213f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f20: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213F20u;
    SET_GPR_U32(ctx, 31, 0x213F28u);
    ctx->pc = 0x213F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F20u;
    // 0x213f24: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213F20u, 0x213F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F28u;
label_213f28:
    // 0x213f28: 0xc084f2c  jal         func_213CB0
    ctx->pc = 0x213F28u;
    SET_GPR_U32(ctx, 31, 0x213F30u);
    ctx->pc = 0x213F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F28u;
    // 0x213f2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213CB0u, 0x213F28u, 0x213F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F30u;
label_213f30:
    // 0x213f30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x213f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213f38: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213f48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213f4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213f50: 0x3e00008  jr          $ra
    ctx->pc = 0x213F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F50u;
        // 0x213f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213F58u;
}
