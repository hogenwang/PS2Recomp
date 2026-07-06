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

// Function: sub_003019D0
// Address: 0x3019d0 - 0x301ac0
void sub_003019D0_0x3019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003019D0_0x3019d0");
#endif

    switch (ctx->pc) {
        case 0x301a30u: goto label_301a30;
        case 0x301a68u: goto label_301a68;
        case 0x301a94u: goto label_301a94;
        case 0x301a9cu: goto label_301a9c;
        default: break;
    }

    ctx->pc = 0x3019d0u;

    // 0x3019d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3019d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3019d4: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x3019d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x3019d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3019d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3019dc: 0x24632180  addiu       $v1, $v1, 0x2180
    ctx->pc = 0x3019dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8576));
    // 0x3019e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3019e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3019e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3019e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3019e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3019e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3019ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3019ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019f0: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x3019f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3019f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3019f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3019f8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x3019f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3019fc: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x3019fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x301a00: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x301a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x301a04: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x301a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x301a08: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x301a08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x301a0c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x301a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x301a10: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x301a10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x301a14: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x301a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x301a18: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x301a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x301a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a24: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x301a24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301a28: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301A28u;
    SET_GPR_U32(ctx, 31, 0x301A30u);
    ctx->pc = 0x301A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A28u;
    // 0x301a2c: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301A28u, 0x301A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A30u;
label_301a30:
    // 0x301a30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x301a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x301a34: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x301a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x301a38: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x301a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x301a3c: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x301a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x301a40: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x301a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x301a44: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x301a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x301a48: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x301a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x301a4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x301a4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x301a50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x301a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a60: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301A60u;
    SET_GPR_U32(ctx, 31, 0x301A68u);
    ctx->pc = 0x301A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A60u;
    // 0x301a64: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301A60u, 0x301A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A68u;
label_301a68:
    // 0x301a68: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301a6c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x301a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x301a70: 0x24420ce0  addiu       $v0, $v0, 0xCE0
    ctx->pc = 0x301a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3296));
    // 0x301a74: 0x26430400  addiu       $v1, $s2, 0x400
    ctx->pc = 0x301a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x301a78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x301a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x301a7c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x301a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x301a80: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301a84: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x301a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x301a88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x301a8c: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x301A8Cu;
    SET_GPR_U32(ctx, 31, 0x301A94u);
    ctx->pc = 0x301A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A8Cu;
    // 0x301a90: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x301A8Cu, 0x301A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A94u;
label_301a94:
    // 0x301a94: 0xc0c0808  jal         func_302020
    ctx->pc = 0x301A94u;
    SET_GPR_U32(ctx, 31, 0x301A9Cu);
    ctx->pc = 0x302020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302020u, 0x301A94u, 0x301A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A9Cu;
label_301a9c:
    // 0x301a9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x301a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301aac: 0x3e00008  jr          $ra
    ctx->pc = 0x301AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AACu;
        // 0x301ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301AB4u;
    // 0x301ab4: 0x0  nop
    ctx->pc = 0x301ab4u;
    // NOP
    // 0x301ab8: 0x0  nop
    ctx->pc = 0x301ab8u;
    // NOP
    // 0x301abc: 0x0  nop
    ctx->pc = 0x301abcu;
    // NOP
}
