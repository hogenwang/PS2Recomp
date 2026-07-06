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

// Function: sub_001BAD60
// Address: 0x1bad60 - 0x1bada0
void sub_001BAD60_0x1bad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAD60_0x1bad60");
#endif

    switch (ctx->pc) {
        case 0x1bad7cu: goto label_1bad7c;
        case 0x1bad88u: goto label_1bad88;
        default: break;
    }

    ctx->pc = 0x1bad60u;

    // 0x1bad60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bad64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bad68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bad68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bad70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bad74: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAD74u;
    SET_GPR_U32(ctx, 31, 0x1BAD7Cu);
    ctx->pc = 0x1BAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD74u;
    // 0x1bad78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAD74u, 0x1BAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD7Cu;
label_1bad7c:
    // 0x1bad7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad80: 0xc06eb68  jal         func_1BADA0
    ctx->pc = 0x1BAD80u;
    SET_GPR_U32(ctx, 31, 0x1BAD88u);
    ctx->pc = 0x1BAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD80u;
    // 0x1bad84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BADA0u, 0x1BAD80u, 0x1BAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD88u;
label_1bad88:
    // 0x1bad88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bad88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bad8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bad8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bad90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bad90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bad94: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BAD94u;
    ctx->pc = 0x1BAD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD94u;
    // 0x1bad98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAD9Cu;
    // 0x1bad9c: 0x0  nop
    ctx->pc = 0x1bad9cu;
    // NOP
    if (ctx->pc == 0x1bad9cu) { ctx->pc = 0x1bada0u; }
}
