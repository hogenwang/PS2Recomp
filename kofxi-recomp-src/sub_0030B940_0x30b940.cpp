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

// Function: sub_0030B940
// Address: 0x30b940 - 0x30b980
void sub_0030B940_0x30b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B940_0x30b940");
#endif

    switch (ctx->pc) {
        case 0x30b958u: goto label_30b958;
        case 0x30b968u: goto label_30b968;
        default: break;
    }

    ctx->pc = 0x30b940u;

    // 0x30b940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b944: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x30b948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30b94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b950: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30B950u;
    SET_GPR_U32(ctx, 31, 0x30B958u);
    ctx->pc = 0x30B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B950u;
    // 0x30b954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30B950u, 0x30B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B958u;
label_30b958:
    // 0x30b958: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x30b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b960: 0xc040dd0  jal         func_103740
    ctx->pc = 0x30B960u;
    SET_GPR_U32(ctx, 31, 0x30B968u);
    ctx->pc = 0x30B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B960u;
    // 0x30b964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103740u, 0x30B960u, 0x30B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B968u;
label_30b968:
    // 0x30b968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b970: 0x3e00008  jr          $ra
    ctx->pc = 0x30B970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B970u;
        // 0x30b974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B978u;
    // 0x30b978: 0x0  nop
    ctx->pc = 0x30b978u;
    // NOP
    // 0x30b97c: 0x0  nop
    ctx->pc = 0x30b97cu;
    // NOP
    if (ctx->pc == 0x30b97cu) { ctx->pc = 0x30b980u; }
}
