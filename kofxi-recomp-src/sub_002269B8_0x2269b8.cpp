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

// Function: sub_002269B8
// Address: 0x2269b8 - 0x226cc8
void sub_002269B8_0x2269b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269B8_0x2269b8");
#endif

    switch (ctx->pc) {
        case 0x226a18u: goto label_226a18;
        case 0x226a1cu: goto label_226a1c;
        case 0x226a3cu: goto label_226a3c;
        case 0x226a54u: goto label_226a54;
        case 0x226a5cu: goto label_226a5c;
        case 0x226a64u: goto label_226a64;
        case 0x226a6cu: goto label_226a6c;
        case 0x226a84u: goto label_226a84;
        case 0x226a8cu: goto label_226a8c;
        case 0x226a98u: goto label_226a98;
        case 0x226ab0u: goto label_226ab0;
        case 0x226ab8u: goto label_226ab8;
        case 0x226ac4u: goto label_226ac4;
        case 0x226adcu: goto label_226adc;
        case 0x226ae8u: goto label_226ae8;
        case 0x226b20u: goto label_226b20;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b50u: goto label_226b50;
        case 0x226b58u: goto label_226b58;
        case 0x226b98u: goto label_226b98;
        case 0x226bf8u: goto label_226bf8;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c48u: goto label_226c48;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226cbcu: goto label_226cbc;
        default: break;
    }

    ctx->pc = 0x2269b8u;

    // 0x2269b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2269bc: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2269bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x2269c0: 0xade0f1c8  sw          $zero, -0xE38($t7)
    ctx->pc = 0x2269c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963656), GPR_U32(ctx, 0));
    // 0x2269c4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2269c8: 0xadc0f1d0  sw          $zero, -0xE30($t6)
    ctx->pc = 0x2269c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963664), GPR_U32(ctx, 0));
    // 0x2269cc: 0x3c0d003a  lui         $t5, 0x3A
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)58 << 16));
    // 0x2269d0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2269d4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2269d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2269d8: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x2269dc: 0xade0f1d4  sw          $zero, -0xE2C($t7)
    ctx->pc = 0x2269dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963668), GPR_U32(ctx, 0));
    // 0x2269e0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2269e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2269e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2269e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2269e8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2269ec: 0xadc0f1d8  sw          $zero, -0xE28($t6)
    ctx->pc = 0x2269ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963672), GPR_U32(ctx, 0));
    // 0x2269f0: 0x8daef1cc  lw          $t6, -0xE34($t5)
    ctx->pc = 0x2269f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963660)));
    // 0x2269f4: 0x15c0000e  bnez        $t6, . + 4 + (0xE << 2)
    ctx->pc = 0x2269F4u;
    {
        const bool branch_taken_0x2269f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2269F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269F4u;
        // 0x2269f8: 0x8df0f1e0  lw          $s0, -0xE20($t7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269f4) {
            ctx->pc = 0x226A30u;
            goto label_226a30;
        }
    }
    ctx->pc = 0x2269FCu;
    // 0x2269fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226a00: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226a04: 0x24843a38  addiu       $a0, $a0, 0x3A38
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14904));
    // 0x226a08: 0x24e73a48  addiu       $a3, $a3, 0x3A48
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14920));
    // 0x226a0c: 0x2405011c  addiu       $a1, $zero, 0x11C
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x226a10: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226A10u;
    SET_GPR_U32(ctx, 31, 0x226A18u);
    ctx->pc = 0x226A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A10u;
    // 0x226a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226A10u, 0x226A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A18u;
label_226a18:
    // 0x226a18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x226a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_226a1c:
    // 0x226a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a20: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x226a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x226a24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x226a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226a28: 0x3e00008  jr          $ra
    ctx->pc = 0x226A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A28u;
        // 0x226a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A30u;
label_226a30:
    // 0x226a30: 0xada0f1cc  sw          $zero, -0xE34($t5)
    ctx->pc = 0x226a30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294963660), GPR_U32(ctx, 0));
    // 0x226a34: 0xc0bdd0e  jal         func_2F7438
    ctx->pc = 0x226A34u;
    SET_GPR_U32(ctx, 31, 0x226A3Cu);
    ctx->pc = 0x226A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A34u;
    // 0x226a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7438u, 0x226A34u, 0x226A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A3Cu;
label_226a3c:
    // 0x226a3c: 0x4410064  bgez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x226A3Cu;
    {
        const bool branch_taken_0x226a3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A3Cu;
        // 0x226a40: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a3c) {
            ctx->pc = 0x226BD0u;
            goto label_226bd0;
        }
    }
    ctx->pc = 0x226A44u;
    // 0x226a44: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226a48: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226a4c: 0x24e73a60  addiu       $a3, $a3, 0x3A60
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14944));
    // 0x226a50: 0x24050123  addiu       $a1, $zero, 0x123
    ctx->pc = 0x226a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_226a54:
    // 0x226a54: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226A54u;
    SET_GPR_U32(ctx, 31, 0x226A5Cu);
    ctx->pc = 0x226A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A54u;
    // 0x226a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226A54u, 0x226A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A5Cu;
label_226a5c:
    // 0x226a5c: 0xc08998e  jal         func_226638
    ctx->pc = 0x226A5Cu;
    SET_GPR_U32(ctx, 31, 0x226A64u);
    ctx->pc = 0x226A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A5Cu;
    // 0x226a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226638u, 0x226A5Cu, 0x226A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A64u;
label_226a64:
    // 0x226a64: 0xc0bc836  jal         func_2F20D8
    ctx->pc = 0x226A64u;
    SET_GPR_U32(ctx, 31, 0x226A6Cu);
    ctx->pc = 0x226A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A64u;
    // 0x226a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F20D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F20D8u, 0x226A64u, 0x226A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A6Cu;
label_226a6c:
    // 0x226a6c: 0x4410054  bgez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x226A6Cu;
    {
        const bool branch_taken_0x226a6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A6Cu;
        // 0x226a70: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a6c) {
            ctx->pc = 0x226BC0u;
            goto label_226bc0;
        }
    }
    ctx->pc = 0x226A74u;
    // 0x226a74: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226a78: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226a7c: 0x24e73a98  addiu       $a3, $a3, 0x3A98
    ctx->pc = 0x226a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15000));
    // 0x226a80: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_226a84:
    // 0x226a84: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226A84u;
    SET_GPR_U32(ctx, 31, 0x226A8Cu);
    ctx->pc = 0x226A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A84u;
    // 0x226a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226A84u, 0x226A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A8Cu;
label_226a8c:
    // 0x226a8c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226a90: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x226A90u;
    SET_GPR_U32(ctx, 31, 0x226A98u);
    ctx->pc = 0x226A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A90u;
    // 0x226a94: 0x8de4f1e8  lw          $a0, -0xE18($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5130u, 0x226A90u, 0x226A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A98u;
label_226a98:
    // 0x226a98: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x226A98u;
    {
        const bool branch_taken_0x226a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A98u;
        // 0x226a9c: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a98) {
            ctx->pc = 0x226BB0u;
            goto label_226bb0;
        }
    }
    ctx->pc = 0x226AA0u;
    // 0x226aa0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226aa4: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226aa8: 0x24e73ad0  addiu       $a3, $a3, 0x3AD0
    ctx->pc = 0x226aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15056));
    // 0x226aac: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x226aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_226ab0:
    // 0x226ab0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226AB0u;
    SET_GPR_U32(ctx, 31, 0x226AB8u);
    ctx->pc = 0x226AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AB0u;
    // 0x226ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226AB0u, 0x226AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AB8u;
label_226ab8:
    // 0x226ab8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226abc: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x226ABCu;
    SET_GPR_U32(ctx, 31, 0x226AC4u);
    ctx->pc = 0x226AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226ABCu;
    // 0x226ac0: 0x8de4f1ec  lw          $a0, -0xE14($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5650u, 0x226ABCu, 0x226AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AC4u;
label_226ac4:
    // 0x226ac4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x226AC4u;
    {
        const bool branch_taken_0x226ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AC4u;
        // 0x226ac8: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ac4) {
            ctx->pc = 0x226BA0u;
            goto label_226ba0;
        }
    }
    ctx->pc = 0x226ACCu;
    // 0x226acc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226ad0: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226ad4: 0x24e73b08  addiu       $a3, $a3, 0x3B08
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15112));
    // 0x226ad8: 0x24050144  addiu       $a1, $zero, 0x144
    ctx->pc = 0x226ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_226adc:
    // 0x226adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ae0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226AE0u;
    SET_GPR_U32(ctx, 31, 0x226AE8u);
    ctx->pc = 0x226AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AE0u;
    // 0x226ae4: 0x26303a38  addiu       $s0, $s1, 0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226AE0u, 0x226AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AE8u;
label_226ae8:
    // 0x226ae8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226aec: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x226aecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x226af0: 0xade0f1e0  sw          $zero, -0xE20($t7)
    ctx->pc = 0x226af0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963680), GPR_U32(ctx, 0));
    // 0x226af4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226af8: 0xadc0f1e4  sw          $zero, -0xE1C($t6)
    ctx->pc = 0x226af8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963684), GPR_U32(ctx, 0));
    // 0x226afc: 0x24e73b28  addiu       $a3, $a3, 0x3B28
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15144));
    // 0x226b00: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226b00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b08: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x226b0c: 0xade0f1e8  sw          $zero, -0xE18($t7)
    ctx->pc = 0x226b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963688), GPR_U32(ctx, 0));
    // 0x226b10: 0xadc0f1ec  sw          $zero, -0xE14($t6)
    ctx->pc = 0x226b10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963692), GPR_U32(ctx, 0));
    // 0x226b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b18: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226B18u;
    SET_GPR_U32(ctx, 31, 0x226B20u);
    ctx->pc = 0x226B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B18u;
    // 0x226b1c: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226B18u, 0x226B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B20u;
label_226b20:
    // 0x226b20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x226b24: 0xc0be774  jal         func_2F9DD0
    ctx->pc = 0x226B24u;
    SET_GPR_U32(ctx, 31, 0x226B2Cu);
    ctx->pc = 0x226B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B24u;
    // 0x226b28: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9DD0u, 0x226B24u, 0x226B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B2Cu;
label_226b2c:
    // 0x226b2c: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x226b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226b30: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226b30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226b34: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x226b38: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x226b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b3c: 0x24e73b40  addiu       $a3, $a3, 0x3B40
    ctx->pc = 0x226b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15168));
    // 0x226b40: 0x24050159  addiu       $a1, $zero, 0x159
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    // 0x226b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b48: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226B48u;
    SET_GPR_U32(ctx, 31, 0x226B50u);
    ctx->pc = 0x226B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B48u;
    // 0x226b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226B48u, 0x226B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B50u;
label_226b50:
    // 0x226b50: 0xc08a60c  jal         func_229830
    ctx->pc = 0x226B50u;
    SET_GPR_U32(ctx, 31, 0x226B58u);
    ctx->pc = 0x226B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B50u;
    // 0x226b54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229830u, 0x226B50u, 0x226B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B58u;
label_226b58:
    // 0x226b58: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x226b58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226b5c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226b60: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x226b60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b68: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x226b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x226b6c: 0x24e73b70  addiu       $a3, $a3, 0x3B70
    ctx->pc = 0x226b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15216));
    // 0x226b70: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x226b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x226b74: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x226b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x226b78: 0x8faf0034  lw          $t7, 0x34($sp)
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x226b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b80: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b84: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x226b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x226b88: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x226b88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x226b8c: 0x8faf0038  lw          $t7, 0x38($sp)
    ctx->pc = 0x226b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226b90: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226B90u;
    SET_GPR_U32(ctx, 31, 0x226B98u);
    ctx->pc = 0x226B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B90u;
    // 0x226b94: 0xafaf0010  sw          $t7, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226B90u, 0x226B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B98u;
label_226b98:
    // 0x226b98: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x226B98u;
    {
        const bool branch_taken_0x226b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B98u;
        // 0x226b9c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b98) {
            ctx->pc = 0x226A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226a1c;
        }
    }
    ctx->pc = 0x226BA0u;
label_226ba0:
    // 0x226ba0: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226ba4: 0x24e73ae8  addiu       $a3, $a3, 0x3AE8
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15080));
    // 0x226ba8: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x226BA8u;
    {
        const bool branch_taken_0x226ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BA8u;
        // 0x226bac: 0x24050149  addiu       $a1, $zero, 0x149 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ba8) {
            ctx->pc = 0x226ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226adc;
        }
    }
    ctx->pc = 0x226BB0u;
label_226bb0:
    // 0x226bb0: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226bb4: 0x24e73ab0  addiu       $a3, $a3, 0x3AB0
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15024));
    // 0x226bb8: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x226BB8u;
    {
        const bool branch_taken_0x226bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB8u;
        // 0x226bbc: 0x2405013f  addiu       $a1, $zero, 0x13F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bb8) {
            ctx->pc = 0x226AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ab0;
        }
    }
    ctx->pc = 0x226BC0u;
label_226bc0:
    // 0x226bc0: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226bc4: 0x24e73a78  addiu       $a3, $a3, 0x3A78
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14968));
    // 0x226bc8: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x226BC8u;
    {
        const bool branch_taken_0x226bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BC8u;
        // 0x226bcc: 0x24050135  addiu       $a1, $zero, 0x135 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bc8) {
            ctx->pc = 0x226A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226a84;
        }
    }
    ctx->pc = 0x226BD0u;
label_226bd0:
    // 0x226bd0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226bd4: 0x26243a38  addiu       $a0, $s1, 0x3A38
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14904));
    // 0x226bd8: 0x24e73bb8  addiu       $a3, $a3, 0x3BB8
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15288));
    // 0x226bdc: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
    ctx->pc = 0x226BDCu;
    {
        const bool branch_taken_0x226bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BDCu;
        // 0x226be0: 0x24050128  addiu       $a1, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bdc) {
            ctx->pc = 0x226A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226a54;
        }
    }
    ctx->pc = 0x226BE4u;
    // 0x226be4: 0x0  nop
    ctx->pc = 0x226be4u;
    // NOP
    // 0x226be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226bf0: 0xc0bead0  jal         func_2FAB40
    ctx->pc = 0x226BF0u;
    SET_GPR_U32(ctx, 31, 0x226BF8u);
    ctx->pc = 0x2FAB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB40u, 0x226BF0u, 0x226BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BF8u;
label_226bf8:
    // 0x226bf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226bfc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226c00: 0x24843bd0  addiu       $a0, $a0, 0x3BD0
    ctx->pc = 0x226c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15312));
    // 0x226c04: 0x24e73be0  addiu       $a3, $a3, 0x3BE0
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15328));
    // 0x226c08: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x226c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x226c0c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226C0Cu;
    {
        const bool branch_taken_0x226c0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C0Cu;
        // 0x226c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c0c) {
            ctx->pc = 0x226C2Cu;
            goto label_226c2c;
        }
    }
    ctx->pc = 0x226C14u;
    // 0x226c14: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226c20:
    // 0x226c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226c24: 0x3e00008  jr          $ra
    ctx->pc = 0x226C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C24u;
        // 0x226c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C2Cu;
label_226c2c:
    // 0x226c2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226c30: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226c34: 0x24843bd0  addiu       $a0, $a0, 0x3BD0
    ctx->pc = 0x226c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15312));
    // 0x226c38: 0x24e73c00  addiu       $a3, $a3, 0x3C00
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
    // 0x226c3c: 0x24050175  addiu       $a1, $zero, 0x175
    ctx->pc = 0x226c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    // 0x226c40: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226C40u;
    SET_GPR_U32(ctx, 31, 0x226C48u);
    ctx->pc = 0x226C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C40u;
    // 0x226c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226C40u, 0x226C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C48u;
label_226c48:
    // 0x226c48: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x226C48u;
    {
        const bool branch_taken_0x226c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C48u;
        // 0x226c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c48) {
            ctx->pc = 0x226C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226c20;
        }
    }
    ctx->pc = 0x226C50u;
    // 0x226c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226c54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c64: 0xc0be81a  jal         func_2FA068
    ctx->pc = 0x226C64u;
    SET_GPR_U32(ctx, 31, 0x226C6Cu);
    ctx->pc = 0x226C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C64u;
    // 0x226c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA068u, 0x226C64u, 0x226C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C6Cu;
label_226c6c:
    // 0x226c6c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226c70: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226c74: 0x24843c20  addiu       $a0, $a0, 0x3C20
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15392));
    // 0x226c78: 0x24e73a00  addiu       $a3, $a3, 0x3A00
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14848));
    // 0x226c7c: 0x24050181  addiu       $a1, $zero, 0x181
    ctx->pc = 0x226c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x226c80: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226C80u;
    {
        const bool branch_taken_0x226c80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C80u;
        // 0x226c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c80) {
            ctx->pc = 0x226CA0u;
            goto label_226ca0;
        }
    }
    ctx->pc = 0x226C88u;
    // 0x226c88: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226C88u;
    SET_GPR_U32(ctx, 31, 0x226C90u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226C88u, 0x226C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C90u;
label_226c90:
    // 0x226c90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226c94:
    // 0x226c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226c98: 0x3e00008  jr          $ra
    ctx->pc = 0x226C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C98u;
        // 0x226c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226CA0u;
label_226ca0:
    // 0x226ca0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x226ca4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226ca8: 0x24843c20  addiu       $a0, $a0, 0x3C20
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15392));
    // 0x226cac: 0x24e73c30  addiu       $a3, $a3, 0x3C30
    ctx->pc = 0x226cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15408));
    // 0x226cb0: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x226cb4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226CB4u;
    SET_GPR_U32(ctx, 31, 0x226CBCu);
    ctx->pc = 0x226CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CB4u;
    // 0x226cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226CB4u, 0x226CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CBCu;
label_226cbc:
    // 0x226cbc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x226CBCu;
    {
        const bool branch_taken_0x226cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CBCu;
        // 0x226cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cbc) {
            ctx->pc = 0x226C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226c94;
        }
    }
    ctx->pc = 0x226CC4u;
    // 0x226cc4: 0x0  nop
    ctx->pc = 0x226cc4u;
    // NOP
    if (ctx->pc == 0x226cc4u) { ctx->pc = 0x226cc8u; }
}
