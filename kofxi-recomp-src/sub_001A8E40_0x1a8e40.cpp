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

// Function: sub_001A8E40
// Address: 0x1a8e40 - 0x1a8ec0
void sub_001A8E40_0x1a8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E40_0x1a8e40");
#endif

    switch (ctx->pc) {
        case 0x1a8e6cu: goto label_1a8e6c;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e7cu: goto label_1a8e7c;
        case 0x1a8ea8u: goto label_1a8ea8;
        default: break;
    }

    ctx->pc = 0x1a8e40u;

    // 0x1a8e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8e44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e50: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a8e54: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8e58: 0x261052d8  addiu       $s0, $s0, 0x52D8
    ctx->pc = 0x1a8e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21208));
    // 0x1a8e5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e64: 0xc044436  jal         func_1110D8
    ctx->pc = 0x1A8E64u;
    SET_GPR_U32(ctx, 31, 0x1A8E6Cu);
    ctx->pc = 0x1A8E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E64u;
    // 0x1a8e68: 0x24845290  addiu       $a0, $a0, 0x5290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110D8u, 0x1A8E64u, 0x1A8E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E6Cu;
label_1a8e6c:
    // 0x1a8e6c: 0xc04445c  jal         func_111170
    ctx->pc = 0x1A8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E74u);
    ctx->pc = 0x1A8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E6Cu;
    // 0x1a8e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111170u, 0x1A8E6Cu, 0x1A8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E74u;
label_1a8e74:
    // 0x1a8e74: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x1A8E74u;
    SET_GPR_U32(ctx, 31, 0x1A8E7Cu);
    ctx->pc = 0x1A8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E74u;
    // 0x1a8e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x1A8E74u, 0x1A8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E7Cu;
label_1a8e7c:
    // 0x1a8e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8e84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8e8c: 0x804329c  j           func_10CA70
    ctx->pc = 0x1A8E8Cu;
    ctx->pc = 0x1A8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E8Cu;
    // 0x1a8e90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime); return;
    ctx->pc = 0x1A8E94u;
    // 0x1a8e94: 0x0  nop
    ctx->pc = 0x1a8e94u;
    // NOP
    // 0x1a8e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8ea0: 0xc043324  jal         func_10CC90
    ctx->pc = 0x1A8EA0u;
    SET_GPR_U32(ctx, 31, 0x1A8EA8u);
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x1A8EA0u, 0x1A8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EA8u;
label_1a8ea8:
    // 0x1a8ea8: 0xf  sync
    ctx->pc = 0x1a8ea8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a8eac: 0x42000038  ei
    ctx->pc = 0x1a8eacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a8eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EB4u;
        // 0x1a8eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8EBCu;
    // 0x1a8ebc: 0x0  nop
    ctx->pc = 0x1a8ebcu;
    // NOP
}
