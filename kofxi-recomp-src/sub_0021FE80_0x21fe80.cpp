#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FE80
// Address: 0x21fe80 - 0x21feb0
void sub_0021FE80_0x21fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FE80_0x21fe80");
#endif

    switch (ctx->pc) {
        case 0x21fea4u: goto label_21fea4;
        default: break;
    }

    ctx->pc = 0x21fe80u;

    // 0x21fe80: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21fe80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21fe84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fe84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fe88: 0x8deeca14  lw          $t6, -0x35EC($t7)
    ctx->pc = 0x21fe88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953492)));
    // 0x21fe8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fe90: 0x19c00004  blez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE90u;
            // 0x21fe94: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FEA4u;
            goto label_21fea4;
        }
    }
    ctx->pc = 0x21FE98u;
    // 0x21fe98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe9c: 0x8043328  j           func_10CCA0
    ctx->pc = 0x21FE9Cu;
    ctx->pc = 0x21FEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE9Cu;
            // 0x21fea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21FEA4u;
label_21fea4:
    // 0x21fea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fea8: 0x3e00008  jr          $ra
    ctx->pc = 0x21FEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEA8u;
            // 0x21feac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FEB0u;
    ctx->pc = 0x21feb0u;
}
