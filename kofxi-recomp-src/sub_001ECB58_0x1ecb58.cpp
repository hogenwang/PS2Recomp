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

// Function: sub_001ECB58
// Address: 0x1ecb58 - 0x1ecbb0
void sub_001ECB58_0x1ecb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB58_0x1ecb58");
#endif

    switch (ctx->pc) {
        case 0x1ecb6cu: goto label_1ecb6c;
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb98u: goto label_1ecb98;
        default: break;
    }

    ctx->pc = 0x1ecb58u;

    // 0x1ecb58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ecb5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ecb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ecb60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ecb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ecb64: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1ECB64u;
    SET_GPR_U32(ctx, 31, 0x1ECB6Cu);
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1ECB64u, 0x1ECB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB6Cu;
label_1ecb6c:
    // 0x1ecb6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ecb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb74: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECB74u;
    {
        const bool branch_taken_0x1ecb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB74u;
        // 0x1ecb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb74) {
            ctx->pc = 0x1ECB9Cu;
            goto label_1ecb9c;
        }
    }
    ctx->pc = 0x1ECB7Cu;
    // 0x1ecb7c: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1ECB7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB84u);
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x1ECB7Cu, 0x1ECB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB84u;
label_1ecb84:
    // 0x1ecb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ecb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb8c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1ecb8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ecb90: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1ECB90u;
    SET_GPR_U32(ctx, 31, 0x1ECB98u);
    ctx->pc = 0x1ECB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB90u;
    // 0x1ecb94: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1ECB90u, 0x1ECB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB98u;
label_1ecb98:
    // 0x1ecb98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecb9c:
    // 0x1ecb9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ecb9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecba0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ecba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ecba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA4u;
        // 0x1ecba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBACu;
    // 0x1ecbac: 0x0  nop
    ctx->pc = 0x1ecbacu;
    // NOP
    if (ctx->pc == 0x1ecbacu) { ctx->pc = 0x1ecbb0u; }
}
