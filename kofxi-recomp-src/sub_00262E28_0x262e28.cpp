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

// Function: sub_00262E28
// Address: 0x262e28 - 0x262ea0
void sub_00262E28_0x262e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262E28_0x262e28");
#endif

    switch (ctx->pc) {
        case 0x262e48u: goto label_262e48;
        case 0x262e7cu: goto label_262e7c;
        case 0x262e84u: goto label_262e84;
        default: break;
    }

    ctx->pc = 0x262e28u;

    // 0x262e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262e2c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x262e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x262e30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e38: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x262e38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x262e3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262e40: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x262E40u;
    SET_GPR_U32(ctx, 31, 0x262E48u);
    ctx->pc = 0x262E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E40u;
    // 0x262e44: 0x8e041a18  lw          $a0, 0x1A18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x262E40u, 0x262E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E48u;
label_262e48:
    // 0x262e48: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262e4c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x262e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x262e50: 0x2447d7c0  addiu       $a3, $v0, -0x2840
    ctx->pc = 0x262e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x262e54: 0xac51d7c0  sw          $s1, -0x2840($v0)
    ctx->pc = 0x262e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956992), GPR_U32(ctx, 17));
    // 0x262e58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x262e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e60: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x262e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262e64: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x262e64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x262e68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262e68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e6c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x262e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e70: 0x2484d780  addiu       $a0, $a0, -0x2880
    ctx->pc = 0x262e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956928));
    // 0x262e74: 0xc098b12  jal         func_262C48
    ctx->pc = 0x262E74u;
    SET_GPR_U32(ctx, 31, 0x262E7Cu);
    ctx->pc = 0x262E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E74u;
    // 0x262e78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x262E74u, 0x262E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E7Cu;
label_262e7c:
    // 0x262e7c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x262E7Cu;
    SET_GPR_U32(ctx, 31, 0x262E84u);
    ctx->pc = 0x262E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E7Cu;
    // 0x262e80: 0x8e041a18  lw          $a0, 0x1A18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x262E7Cu, 0x262E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E84u;
label_262e84:
    // 0x262e84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e8c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x262e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262e90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262e94: 0x3e00008  jr          $ra
    ctx->pc = 0x262E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E94u;
        // 0x262e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E9Cu;
    // 0x262e9c: 0x0  nop
    ctx->pc = 0x262e9cu;
    // NOP
    if (ctx->pc == 0x262e9cu) { ctx->pc = 0x262ea0u; }
}
