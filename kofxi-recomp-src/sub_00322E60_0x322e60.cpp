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

// Function: sub_00322E60
// Address: 0x322e60 - 0x322eb0
void sub_00322E60_0x322e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E60_0x322e60");
#endif

    switch (ctx->pc) {
        case 0x322e78u: goto label_322e78;
        default: break;
    }

    ctx->pc = 0x322e60u;

    // 0x322e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e70: 0xc0c8ab8  jal         func_322AE0
    ctx->pc = 0x322E70u;
    SET_GPR_U32(ctx, 31, 0x322E78u);
    ctx->pc = 0x322E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E70u;
    // 0x322e74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322AE0u, 0x322E70u, 0x322E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E78u;
label_322e78:
    // 0x322e78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x322e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x322e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e80: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x322e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x322e84: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x322e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x322e88: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x322e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x322e8c: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x322e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x322e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322e98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x322e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x322e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322ea0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x322ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x322EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EA4u;
        // 0x322ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322EACu;
    // 0x322eac: 0x0  nop
    ctx->pc = 0x322eacu;
    // NOP
    if (ctx->pc == 0x322eacu) { ctx->pc = 0x322eb0u; }
}
