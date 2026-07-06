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

// Function: sub_001E20D8
// Address: 0x1e20d8 - 0x1e2140
void sub_001E20D8_0x1e20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E20D8_0x1e20d8");
#endif

    switch (ctx->pc) {
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2120u: goto label_1e2120;
        default: break;
    }

    ctx->pc = 0x1e20d8u;

    // 0x1e20d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e20dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e20e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e20e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e20e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e20e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e20f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e20f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e20f8: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1E20F8u;
    SET_GPR_U32(ctx, 31, 0x1E2100u);
    ctx->pc = 0x1E20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20F8u;
    // 0x1e20fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1E20F8u, 0x1E2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2100u;
label_1e2100:
    // 0x1e2100: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1e2104: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1e2104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e2108: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x1e2108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x1e210c: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x1e210cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x1e2110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e2114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2118: 0xc040a6c  jal         func_1029B0
    ctx->pc = 0x1E2118u;
    SET_GPR_U32(ctx, 31, 0x1E2120u);
    ctx->pc = 0x1E211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2118u;
    // 0x1e211c: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029B0u, 0x1E2118u, 0x1E2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2120u;
label_1e2120:
    // 0x1e2120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e212c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e212cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2130: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e2130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2134: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2134u;
        // 0x1e2138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E213Cu;
    // 0x1e213c: 0x0  nop
    ctx->pc = 0x1e213cu;
    // NOP
}
