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

// Function: sub_00212BA0
// Address: 0x212ba0 - 0x212cd8
void sub_00212BA0_0x212ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212BA0_0x212ba0");
#endif

    switch (ctx->pc) {
        case 0x212bdcu: goto label_212bdc;
        case 0x212bf0u: goto label_212bf0;
        case 0x212c04u: goto label_212c04;
        case 0x212c18u: goto label_212c18;
        case 0x212c2cu: goto label_212c2c;
        case 0x212c40u: goto label_212c40;
        case 0x212c54u: goto label_212c54;
        case 0x212c68u: goto label_212c68;
        case 0x212c7cu: goto label_212c7c;
        case 0x212c90u: goto label_212c90;
        case 0x212ca4u: goto label_212ca4;
        case 0x212cb4u: goto label_212cb4;
        default: break;
    }

    ctx->pc = 0x212ba0u;

    // 0x212ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212ba4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212bb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x212bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212bbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212bc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x212bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bcc: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x212bccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212bd0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x212bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212bd4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212BD4u;
    SET_GPR_U32(ctx, 31, 0x212BDCu);
    ctx->pc = 0x212BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BD4u;
    // 0x212bd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212BD4u, 0x212BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BDCu;
label_212bdc:
    // 0x212bdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212be4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212be8: 0xc08449a  jal         func_211268
    ctx->pc = 0x212BE8u;
    SET_GPR_U32(ctx, 31, 0x212BF0u);
    ctx->pc = 0x212BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BE8u;
    // 0x212bec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x212BE8u, 0x212BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BF0u;
label_212bf0:
    // 0x212bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bf8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bfc: 0xc08449a  jal         func_211268
    ctx->pc = 0x212BFCu;
    SET_GPR_U32(ctx, 31, 0x212C04u);
    ctx->pc = 0x212C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BFCu;
    // 0x212c00: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x212BFCu, 0x212C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C04u;
label_212c04:
    // 0x212c04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c10: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C10u;
    SET_GPR_U32(ctx, 31, 0x212C18u);
    ctx->pc = 0x212C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C10u;
    // 0x212c14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C10u, 0x212C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C18u;
label_212c18:
    // 0x212c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c24: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C24u;
    SET_GPR_U32(ctx, 31, 0x212C2Cu);
    ctx->pc = 0x212C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C24u;
    // 0x212c28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C24u, 0x212C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C2Cu;
label_212c2c:
    // 0x212c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c38: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C38u;
    SET_GPR_U32(ctx, 31, 0x212C40u);
    ctx->pc = 0x212C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C38u;
    // 0x212c3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C38u, 0x212C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C40u;
label_212c40:
    // 0x212c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c4c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C4Cu;
    SET_GPR_U32(ctx, 31, 0x212C54u);
    ctx->pc = 0x212C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C4Cu;
    // 0x212c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C4Cu, 0x212C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C54u;
label_212c54:
    // 0x212c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c60: 0xc08449a  jal         func_211268
    ctx->pc = 0x212C60u;
    SET_GPR_U32(ctx, 31, 0x212C68u);
    ctx->pc = 0x212C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C60u;
    // 0x212c64: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x212C60u, 0x212C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C68u;
label_212c68:
    // 0x212c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c74: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C74u;
    SET_GPR_U32(ctx, 31, 0x212C7Cu);
    ctx->pc = 0x212C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C74u;
    // 0x212c78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C74u, 0x212C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C7Cu;
label_212c7c:
    // 0x212c7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c88: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212C88u;
    SET_GPR_U32(ctx, 31, 0x212C90u);
    ctx->pc = 0x212C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C88u;
    // 0x212c8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x212C88u, 0x212C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C90u;
label_212c90:
    // 0x212c90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c9c: 0xc08449a  jal         func_211268
    ctx->pc = 0x212C9Cu;
    SET_GPR_U32(ctx, 31, 0x212CA4u);
    ctx->pc = 0x212CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C9Cu;
    // 0x212ca0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x212C9Cu, 0x212CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CA4u;
label_212ca4:
    // 0x212ca4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x212ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212ca8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x212ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cac: 0xc084ab0  jal         func_212AC0
    ctx->pc = 0x212CACu;
    SET_GPR_U32(ctx, 31, 0x212CB4u);
    ctx->pc = 0x212CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CACu;
    // 0x212cb0: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AC0u, 0x212CACu, 0x212CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CB4u;
label_212cb4:
    // 0x212cb4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x212cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212cc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ccc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x212cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x212CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CD0u;
        // 0x212cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212CD8u;
}
