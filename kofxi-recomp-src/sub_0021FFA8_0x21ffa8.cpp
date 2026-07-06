#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FFA8
// Address: 0x21ffa8 - 0x21ffd8
void sub_0021FFA8_0x21ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FFA8_0x21ffa8");
#endif

    switch (ctx->pc) {
        case 0x21ffccu: goto label_21ffcc;
        default: break;
    }

    ctx->pc = 0x21ffa8u;

    // 0x21ffa8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ffa8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ffac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ffacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ffb0: 0x8deeca18  lw          $t6, -0x35E8($t7)
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953496)));
    // 0x21ffb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ffb8: 0x19c00004  blez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FFB8u;
    {
        const bool branch_taken_0x21ffb8 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFB8u;
            // 0x21ffbc: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffb8) {
            ctx->pc = 0x21FFCCu;
            goto label_21ffcc;
        }
    }
    ctx->pc = 0x21FFC0u;
    // 0x21ffc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ffc4: 0x8043328  j           func_10CCA0
    ctx->pc = 0x21FFC4u;
    ctx->pc = 0x21FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFC4u;
            // 0x21ffc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21FFCCu;
label_21ffcc:
    // 0x21ffcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFD0u;
            // 0x21ffd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FFD8u;
    ctx->pc = 0x21ffd8u;
}
