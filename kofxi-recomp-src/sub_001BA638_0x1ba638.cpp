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

// Function: sub_001BA638
// Address: 0x1ba638 - 0x1ba678
void sub_001BA638_0x1ba638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA638_0x1ba638");
#endif

    switch (ctx->pc) {
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba660u: goto label_1ba660;
        default: break;
    }

    ctx->pc = 0x1ba638u;

    // 0x1ba638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba64c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA64Cu;
    SET_GPR_U32(ctx, 31, 0x1BA654u);
    ctx->pc = 0x1BA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA64Cu;
    // 0x1ba650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA64Cu, 0x1BA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA654u;
label_1ba654:
    // 0x1ba654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba658: 0xc06e99e  jal         func_1BA678
    ctx->pc = 0x1BA658u;
    SET_GPR_U32(ctx, 31, 0x1BA660u);
    ctx->pc = 0x1BA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA658u;
    // 0x1ba65c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA678u, 0x1BA658u, 0x1BA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA660u;
label_1ba660:
    // 0x1ba660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba66c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA66Cu;
    ctx->pc = 0x1BA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA66Cu;
    // 0x1ba670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA674u;
    // 0x1ba674: 0x0  nop
    ctx->pc = 0x1ba674u;
    // NOP
}
