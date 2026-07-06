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

// Function: sub_002C6990
// Address: 0x2c6990 - 0x2c69d0
void sub_002C6990_0x2c6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6990_0x2c6990");
#endif

    switch (ctx->pc) {
        case 0x2c6990u: goto label_2c6990;
        case 0x2c6994u: goto label_2c6994;
        case 0x2c6998u: goto label_2c6998;
        case 0x2c699cu: goto label_2c699c;
        case 0x2c69a0u: goto label_2c69a0;
        case 0x2c69a4u: goto label_2c69a4;
        case 0x2c69a8u: goto label_2c69a8;
        case 0x2c69acu: goto label_2c69ac;
        case 0x2c69b0u: goto label_2c69b0;
        case 0x2c69b4u: goto label_2c69b4;
        case 0x2c69b8u: goto label_2c69b8;
        case 0x2c69bcu: goto label_2c69bc;
        case 0x2c69c0u: goto label_2c69c0;
        case 0x2c69c4u: goto label_2c69c4;
        case 0x2c69c8u: goto label_2c69c8;
        case 0x2c69ccu: goto label_2c69cc;
        default: break;
    }

    ctx->pc = 0x2c6990u;

label_2c6990:
    // 0x2c6990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c6994:
    // 0x2c6994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6998:
    // 0x2c6998: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c6998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c699c:
    // 0x2c699c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c69a0:
    // 0x2c69a0: 0x40f809  jalr        $v0
label_2c69a4:
    if (ctx->pc == 0x2C69A4u) {
        ctx->pc = 0x2C69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69A0u;
        // 0x2c69a4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C69A8u;
        goto label_2c69a8;
    }
    ctx->pc = 0x2C69A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C69A8u);
        ctx->pc = 0x2C69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69A0u;
        // 0x2c69a4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C69A0u, 0x2C69A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C69A8u;
label_2c69a8:
    // 0x2c69a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c69a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c69ac:
    // 0x2c69ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c69b0:
    if (ctx->pc == 0x2C69B0u) {
        ctx->pc = 0x2C69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69ACu;
        // 0x2c69b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C69B4u;
        goto label_2c69b4;
    }
    ctx->pc = 0x2C69ACu;
    {
        const bool branch_taken_0x2c69ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69ACu;
        // 0x2c69b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69ac) {
            ctx->pc = 0x2C69C0u;
            goto label_2c69c0;
        }
    }
    ctx->pc = 0x2C69B4u;
label_2c69b4:
    // 0x2c69b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c69b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c69b8:
    // 0x2c69b8: 0x80b21d8  j           func_2C8760
label_2c69bc:
    if (ctx->pc == 0x2C69BCu) {
        ctx->pc = 0x2C69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69B8u;
        // 0x2c69bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C69C0u;
        goto label_2c69c0;
    }
    ctx->pc = 0x2C69B8u;
    ctx->pc = 0x2C69BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C69B8u;
    // 0x2c69bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C69C0u;
label_2c69c0:
    // 0x2c69c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c69c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c69c4:
    // 0x2c69c4: 0x3e00008  jr          $ra
label_2c69c8:
    if (ctx->pc == 0x2C69C8u) {
        ctx->pc = 0x2C69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69C4u;
        // 0x2c69c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C69CCu;
        goto label_2c69cc;
    }
    ctx->pc = 0x2C69C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69C4u;
        // 0x2c69c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C69C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C69CCu;
label_2c69cc:
    // 0x2c69cc: 0x0  nop
    ctx->pc = 0x2c69ccu;
    // NOP
}
