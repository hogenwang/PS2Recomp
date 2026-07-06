#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFFC0
// Address: 0x1dffc0 - 0x1dfff0
void sub_001DFFC0_0x1dffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFFC0_0x1dffc0");
#endif

    switch (ctx->pc) {
        case 0x1dffd0u: goto label_1dffd0;
        default: break;
    }

    ctx->pc = 0x1dffc0u;

    // 0x1dffc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dffc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dffc8: 0xc07fe0a  jal         func_1FF828
    ctx->pc = 0x1DFFC8u;
    SET_GPR_U32(ctx, 31, 0x1DFFD0u);
    ctx->pc = 0x1DFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFC8u;
            // 0x1dffcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF828u;
    if (runtime->hasFunction(0x1FF828u)) {
        auto targetFn = runtime->lookupFunction(0x1FF828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFD0u; }
        if (ctx->pc != 0x1DFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF828_0x1ff828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFD0u; }
        if (ctx->pc != 0x1DFFD0u) { return; }
    }
    ctx->pc = 0x1DFFD0u;
label_1dffd0:
    // 0x1dffd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dffd4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffd8: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x1dffd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1dffdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dffe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dffe4: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x1dffe4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dffe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFE8u;
            // 0x1dffec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFFF0u;
    ctx->pc = 0x1dfff0u;
}
