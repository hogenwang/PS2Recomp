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

// Function: sub_00213A38
// Address: 0x213a38 - 0x213b58
void sub_00213A38_0x213a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213A38_0x213a38");
#endif

    switch (ctx->pc) {
        case 0x213a74u: goto label_213a74;
        case 0x213a88u: goto label_213a88;
        case 0x213a9cu: goto label_213a9c;
        case 0x213ab0u: goto label_213ab0;
        case 0x213ac4u: goto label_213ac4;
        case 0x213ad8u: goto label_213ad8;
        case 0x213aecu: goto label_213aec;
        case 0x213b00u: goto label_213b00;
        case 0x213b14u: goto label_213b14;
        case 0x213b28u: goto label_213b28;
        case 0x213b30u: goto label_213b30;
        default: break;
    }

    ctx->pc = 0x213a38u;

    // 0x213a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213a3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213a54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x213a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213a5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x213a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x213a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213a68: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213a6c: 0xc084612  jal         func_211848
    ctx->pc = 0x213A6Cu;
    SET_GPR_U32(ctx, 31, 0x213A74u);
    ctx->pc = 0x213A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A6Cu;
    // 0x213a70: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213A6Cu, 0x213A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A74u;
label_213a74:
    // 0x213a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a80: 0xc084582  jal         func_211608
    ctx->pc = 0x213A80u;
    SET_GPR_U32(ctx, 31, 0x213A88u);
    ctx->pc = 0x213A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A80u;
    // 0x213a84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213A80u, 0x213A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A88u;
label_213a88:
    // 0x213a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a94: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213A94u;
    SET_GPR_U32(ctx, 31, 0x213A9Cu);
    ctx->pc = 0x213A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A94u;
    // 0x213a98: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213A94u, 0x213A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A9Cu;
label_213a9c:
    // 0x213a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aa8: 0xc084612  jal         func_211848
    ctx->pc = 0x213AA8u;
    SET_GPR_U32(ctx, 31, 0x213AB0u);
    ctx->pc = 0x213AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AA8u;
    // 0x213aac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213AA8u, 0x213AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AB0u;
label_213ab0:
    // 0x213ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ab8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213abc: 0xc084612  jal         func_211848
    ctx->pc = 0x213ABCu;
    SET_GPR_U32(ctx, 31, 0x213AC4u);
    ctx->pc = 0x213AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213ABCu;
    // 0x213ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213ABCu, 0x213AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AC4u;
label_213ac4:
    // 0x213ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213acc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ad0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213AD0u;
    SET_GPR_U32(ctx, 31, 0x213AD8u);
    ctx->pc = 0x213AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AD0u;
    // 0x213ad4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213AD0u, 0x213AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AD8u;
label_213ad8:
    // 0x213ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213adc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ae0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ae4: 0xc084582  jal         func_211608
    ctx->pc = 0x213AE4u;
    SET_GPR_U32(ctx, 31, 0x213AECu);
    ctx->pc = 0x213AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AE4u;
    // 0x213ae8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213AE4u, 0x213AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AECu;
label_213aec:
    // 0x213aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213af4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213af8: 0xc084612  jal         func_211848
    ctx->pc = 0x213AF8u;
    SET_GPR_U32(ctx, 31, 0x213B00u);
    ctx->pc = 0x213AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AF8u;
    // 0x213afc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213AF8u, 0x213B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B00u;
label_213b00:
    // 0x213b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b0c: 0xc084612  jal         func_211848
    ctx->pc = 0x213B0Cu;
    SET_GPR_U32(ctx, 31, 0x213B14u);
    ctx->pc = 0x213B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B0Cu;
    // 0x213b10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213B0Cu, 0x213B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B14u;
label_213b14:
    // 0x213b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b20: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213B20u;
    SET_GPR_U32(ctx, 31, 0x213B28u);
    ctx->pc = 0x213B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B20u;
    // 0x213b24: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213B20u, 0x213B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B28u;
label_213b28:
    // 0x213b28: 0xc084e10  jal         func_213840
    ctx->pc = 0x213B28u;
    SET_GPR_U32(ctx, 31, 0x213B30u);
    ctx->pc = 0x213B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B28u;
    // 0x213b2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213840u, 0x213B28u, 0x213B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B30u;
label_213b30:
    // 0x213b30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x213b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b38: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x213b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213b48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213b4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213b50: 0x3e00008  jr          $ra
    ctx->pc = 0x213B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B50u;
        // 0x213b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B58u;
}
