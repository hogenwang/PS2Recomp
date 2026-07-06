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

// Function: sub_001E7D78
// Address: 0x1e7d78 - 0x1e7de8
void sub_001E7D78_0x1e7d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D78_0x1e7d78");
#endif

    switch (ctx->pc) {
        case 0x1e7dacu: goto label_1e7dac;
        case 0x1e7dc8u: goto label_1e7dc8;
        default: break;
    }

    ctx->pc = 0x1e7d78u;

    // 0x1e7d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d84: 0x806da54  j           func_1B6950
    ctx->pc = 0x1E7D84u;
    ctx->pc = 0x1E7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D84u;
    // 0x1e7d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6950u;
    sub_001B6950_0x1b6950(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7D8Cu;
    // 0x1e7d8c: 0x0  nop
    ctx->pc = 0x1e7d8cu;
    // NOP
    // 0x1e7d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7d98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e7d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7da4: 0xc06dada  jal         func_1B6B68
    ctx->pc = 0x1E7DA4u;
    SET_GPR_U32(ctx, 31, 0x1E7DACu);
    ctx->pc = 0x1E7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DA4u;
    // 0x1e7da8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1E7DA4u, 0x1E7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DACu;
label_1e7dac:
    // 0x1e7dac: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x1e7dacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x1e7db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7db4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e7dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dc0: 0xc06da76  jal         func_1B69D8
    ctx->pc = 0x1E7DC0u;
    SET_GPR_U32(ctx, 31, 0x1E7DC8u);
    ctx->pc = 0x1E7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DC0u;
    // 0x1e7dc4: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B69D8u, 0x1E7DC0u, 0x1E7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DC8u;
label_1e7dc8:
    // 0x1e7dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dcc: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1e7dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1e7dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7dd8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e7dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e7ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7de0: 0x806dc04  j           func_1B7010
    ctx->pc = 0x1E7DE0u;
    ctx->pc = 0x1E7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DE0u;
    // 0x1e7de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    sub_001B7010_0x1b7010(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7DE8u;
}
