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

// Function: sub_00342EB0
// Address: 0x342eb0 - 0x342ee0
void sub_00342EB0_0x342eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342EB0_0x342eb0");
#endif

    ctx->pc = 0x342eb0u;

    // 0x342eb0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342eb4: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x342eb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342EB8u;
    {
        const bool branch_taken_0x342eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342eb8) {
            ctx->pc = 0x342EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342EB8u;
            // 0x342ebc: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342EC8u;
            goto label_342ec8;
        }
    }
    ctx->pc = 0x342EC0u;
    // 0x342ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x342EC0u;
    {
        const bool branch_taken_0x342ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EC0u;
        // 0x342ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ec0) {
            ctx->pc = 0x342ECCu;
            goto label_342ecc;
        }
    }
    ctx->pc = 0x342EC8u;
label_342ec8:
    // 0x342ec8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x342ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_342ecc:
    // 0x342ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x342ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342ED4u;
    // 0x342ed4: 0x0  nop
    ctx->pc = 0x342ed4u;
    // NOP
    // 0x342ed8: 0x0  nop
    ctx->pc = 0x342ed8u;
    // NOP
    // 0x342edc: 0x0  nop
    ctx->pc = 0x342edcu;
    // NOP
    if (ctx->pc == 0x342edcu) { ctx->pc = 0x342ee0u; }
}
