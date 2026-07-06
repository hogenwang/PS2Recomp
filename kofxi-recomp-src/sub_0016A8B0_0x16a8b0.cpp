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

// Function: sub_0016A8B0
// Address: 0x16a8b0 - 0x16a950
void sub_0016A8B0_0x16a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A8B0_0x16a8b0");
#endif

    switch (ctx->pc) {
        case 0x16a908u: goto label_16a908;
        case 0x16a930u: goto label_16a930;
        default: break;
    }

    ctx->pc = 0x16a8b0u;

    // 0x16a8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a8b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16a8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16a8b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a8bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16a8c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a8c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16a8c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a8cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a8d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d4: 0x244230e0  addiu       $v0, $v0, 0x30E0
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12512));
    // 0x16a8d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16a8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a8e0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a8e4: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x16a8e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16a8e8: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a8ec: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x16a8f0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x16a8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16a8f4: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16a8f8: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x16a8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16a8fc: 0x862b0014  lh          $t3, 0x14($s1)
    ctx->pc = 0x16a8fcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16a900: 0xc05aa54  jal         func_16A950
    ctx->pc = 0x16A900u;
    SET_GPR_U32(ctx, 31, 0x16A908u);
    ctx->pc = 0x16A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A900u;
    // 0x16a904: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A950u, 0x16A900u, 0x16A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A908u;
label_16a908:
    // 0x16a908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a90c: 0x86250018  lh          $a1, 0x18($s1)
    ctx->pc = 0x16a90cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16a910: 0x8626001a  lh          $a2, 0x1A($s1)
    ctx->pc = 0x16a910u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x16a914: 0x8627001c  lh          $a3, 0x1C($s1)
    ctx->pc = 0x16a914u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16a918: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x16a918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16a91c: 0x8e290024  lw          $t1, 0x24($s1)
    ctx->pc = 0x16a91cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16a920: 0x8e2a0028  lw          $t2, 0x28($s1)
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16a924: 0x862b002c  lh          $t3, 0x2C($s1)
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16a928: 0xc05aa54  jal         func_16A950
    ctx->pc = 0x16A928u;
    SET_GPR_U32(ctx, 31, 0x16A930u);
    ctx->pc = 0x16A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A928u;
    // 0x16a92c: 0x86240016  lh          $a0, 0x16($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A950u, 0x16A928u, 0x16A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A930u;
label_16a930:
    // 0x16a930: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A93Cu;
        // 0x16a940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A944u;
    // 0x16a944: 0x0  nop
    ctx->pc = 0x16a944u;
    // NOP
    // 0x16a948: 0x0  nop
    ctx->pc = 0x16a948u;
    // NOP
    // 0x16a94c: 0x0  nop
    ctx->pc = 0x16a94cu;
    // NOP
    if (ctx->pc == 0x16a94cu) { ctx->pc = 0x16a950u; }
}
