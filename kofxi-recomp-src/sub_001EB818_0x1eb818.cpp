#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB818
// Address: 0x1eb818 - 0x1eb850
void sub_001EB818_0x1eb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB818_0x1eb818");
#endif

    ctx->pc = 0x1eb818u;

    // 0x1eb818: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eb818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb81c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1eb81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb820: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1eb824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1eb828: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1eb828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1eb82c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1eb82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb830: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eb830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eb834: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1eb834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1eb838: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1eb838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1eb83c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1eb83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1eb840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1eb840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eb844: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB844u;
            // 0x1eb848: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB84Cu;
    // 0x1eb84c: 0x0  nop
    ctx->pc = 0x1eb84cu;
    // NOP
    ctx->pc = 0x1eb850u;
}
