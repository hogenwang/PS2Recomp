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

// Function: sub_00201E50
// Address: 0x201e50 - 0x201ea8
void sub_00201E50_0x201e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E50_0x201e50");
#endif

    switch (ctx->pc) {
        case 0x201e8cu: goto label_201e8c;
        default: break;
    }

    ctx->pc = 0x201e50u;

    // 0x201e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e5c: 0x808079a  j           func_201E68
    ctx->pc = 0x201E5Cu;
    ctx->pc = 0x201E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E5Cu;
    // 0x201e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E68u;
    goto label_201e68;
    ctx->pc = 0x201E64u;
    // 0x201e64: 0x0  nop
    ctx->pc = 0x201e64u;
    // NOP
label_201e68:
    // 0x201e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201e74: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x201e74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x201e78: 0x26101e00  addiu       $s0, $s0, 0x1E00
    ctx->pc = 0x201e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7680));
    // 0x201e7c: 0x2406026c  addiu       $a2, $zero, 0x26C
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x201e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x201e84: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x201E84u;
    SET_GPR_U32(ctx, 31, 0x201E8Cu);
    ctx->pc = 0x201E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E84u;
    // 0x201e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x201E84u, 0x201E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E8Cu;
label_201e8c:
    // 0x201e8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201e90: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x201e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x201e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201ea0: 0x80809f2  j           func_2027C8
    ctx->pc = 0x201EA0u;
    ctx->pc = 0x201EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EA0u;
    // 0x201ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027C8u, 0x201EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201EA8u;
}
