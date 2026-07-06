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

// Function: sub_001C8150
// Address: 0x1c8150 - 0x1c81a0
void sub_001C8150_0x1c8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8150_0x1c8150");
#endif

    switch (ctx->pc) {
        case 0x1c8174u: goto label_1c8174;
        case 0x1c8184u: goto label_1c8184;
        default: break;
    }

    ctx->pc = 0x1c8150u;

    // 0x1c8150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c815c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8160: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8168: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c816c: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C816Cu;
    SET_GPR_U32(ctx, 31, 0x1C8174u);
    ctx->pc = 0x1C8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C816Cu;
    // 0x1c8170: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C816Cu, 0x1C8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8174u;
label_1c8174:
    // 0x1c8174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c817c: 0xc072068  jal         func_1C81A0
    ctx->pc = 0x1C817Cu;
    SET_GPR_U32(ctx, 31, 0x1C8184u);
    ctx->pc = 0x1C8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C817Cu;
    // 0x1c8180: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81A0u, 0x1C817Cu, 0x1C8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8184u;
label_1c8184:
    // 0x1c8184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c818c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c818cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8194: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C8194u;
    ctx->pc = 0x1C8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8194u;
    // 0x1c8198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C819Cu;
    // 0x1c819c: 0x0  nop
    ctx->pc = 0x1c819cu;
    // NOP
}
