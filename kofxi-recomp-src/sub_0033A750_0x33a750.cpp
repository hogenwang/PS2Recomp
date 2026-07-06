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

// Function: sub_0033A750
// Address: 0x33a750 - 0x33a790
void sub_0033A750_0x33a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A750_0x33a750");
#endif

    ctx->pc = 0x33a750u;

    // 0x33a750: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33a754: 0x9043e86f  lbu         $v1, -0x1791($v0)
    ctx->pc = 0x33a754u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961263)));
    // 0x33a758: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a75c: 0x9042b247  lbu         $v0, -0x4DB9($v0)
    ctx->pc = 0x33a75cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947399)));
    // 0x33a760: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A760u;
    {
        const bool branch_taken_0x33a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a760) {
            ctx->pc = 0x33A770u;
            goto label_33a770;
        }
    }
    ctx->pc = 0x33A768u;
    // 0x33a768: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33A768u;
    {
        const bool branch_taken_0x33a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A768u;
        // 0x33a76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a768) {
            ctx->pc = 0x33A788u;
            goto label_33a788;
        }
    }
    ctx->pc = 0x33A770u;
label_33a770:
    // 0x33a770: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33a770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33a774: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a778: 0x9063e871  lbu         $v1, -0x178F($v1)
    ctx->pc = 0x33a778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961265)));
    // 0x33a77c: 0x9042b249  lbu         $v0, -0x4DB7($v0)
    ctx->pc = 0x33a77cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x33a780: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x33a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x33a784: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33a784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33a788:
    // 0x33a788: 0x3e00008  jr          $ra
    ctx->pc = 0x33A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A790u;
}
