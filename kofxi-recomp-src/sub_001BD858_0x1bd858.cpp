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

// Function: sub_001BD858
// Address: 0x1bd858 - 0x1bd888
void sub_001BD858_0x1bd858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD858_0x1bd858");
#endif

    switch (ctx->pc) {
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd874u: goto label_1bd874;
        default: break;
    }

    ctx->pc = 0x1bd858u;

    // 0x1bd858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd864: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BD864u;
    SET_GPR_U32(ctx, 31, 0x1BD86Cu);
    ctx->pc = 0x1BD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD864u;
    // 0x1bd868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BD864u, 0x1BD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD86Cu;
label_1bd86c:
    // 0x1bd86c: 0xc06f622  jal         func_1BD888
    ctx->pc = 0x1BD86Cu;
    SET_GPR_U32(ctx, 31, 0x1BD874u);
    ctx->pc = 0x1BD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD86Cu;
    // 0x1bd870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD888u, 0x1BD86Cu, 0x1BD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD874u;
label_1bd874:
    // 0x1bd874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd87c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BD87Cu;
    ctx->pc = 0x1BD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD87Cu;
    // 0x1bd880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BD884u;
    // 0x1bd884: 0x0  nop
    ctx->pc = 0x1bd884u;
    // NOP
}
