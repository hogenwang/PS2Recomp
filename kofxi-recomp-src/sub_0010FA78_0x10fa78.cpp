#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FA78
// Address: 0x10fa78 - 0x10fac0
void sub_0010FA78_0x10fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA78_0x10fa78");
#endif

    switch (ctx->pc) {
        case 0x10fa90u: goto label_10fa90;
        case 0x10fab0u: goto label_10fab0;
        default: break;
    }

    ctx->pc = 0x10fa78u;

    // 0x10fa78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10fa7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10fa80: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x10fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x10fa84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10fa88: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FA88u;
            // 0x10fa8c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FA90u;
label_10fa90:
    // 0x10fa90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10fa94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10fa98: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x10fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x10fa9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10faa0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10faa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faa4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FAA4u;
            // 0x10faa8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FAACu;
    // 0x10faac: 0x0  nop
    ctx->pc = 0x10faacu;
    // NOP
label_10fab0:
    // 0x10fab0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FAB4u;
            // 0x10fab8: 0x244267d8  addiu       $v0, $v0, 0x67D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FABCu;
    // 0x10fabc: 0x0  nop
    ctx->pc = 0x10fabcu;
    // NOP
    ctx->pc = 0x10fac0u;
}
