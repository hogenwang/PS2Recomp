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

// Function: sub_00296E70
// Address: 0x296e70 - 0x296eb8
void sub_00296E70_0x296e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E70_0x296e70");
#endif

    switch (ctx->pc) {
        case 0x296e98u: goto label_296e98;
        case 0x296ea0u: goto label_296ea0;
        default: break;
    }

    ctx->pc = 0x296e70u;

    // 0x296e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x296e84: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x296E84u;
    {
        const bool branch_taken_0x296e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e84) {
            ctx->pc = 0x296E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296E84u;
            // 0x296e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296EA4u;
            goto label_296ea4;
        }
    }
    ctx->pc = 0x296E8Cu;
    // 0x296e8c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x296e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296e90: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296E90u;
    SET_GPR_U32(ctx, 31, 0x296E98u);
    ctx->pc = 0x296E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E90u;
    // 0x296e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296E90u, 0x296E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E98u;
label_296e98:
    // 0x296e98: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296E98u;
    SET_GPR_U32(ctx, 31, 0x296EA0u);
    ctx->pc = 0x296E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E98u;
    // 0x296e9c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296E98u, 0x296EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EA0u;
label_296ea0:
    // 0x296ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296ea4:
    // 0x296ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296eac: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x296EACu;
    ctx->pc = 0x296EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EACu;
    // 0x296eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x296EB4u;
    // 0x296eb4: 0x0  nop
    ctx->pc = 0x296eb4u;
    // NOP
    if (ctx->pc == 0x296eb4u) { ctx->pc = 0x296eb8u; }
}
