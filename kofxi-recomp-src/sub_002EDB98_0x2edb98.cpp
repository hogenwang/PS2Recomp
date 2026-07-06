#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EDB98
// Address: 0x2edb98 - 0x2edbd8
void sub_002EDB98_0x2edb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDB98_0x2edb98");
#endif

    switch (ctx->pc) {
        case 0x2edbc8u: goto label_2edbc8;
        default: break;
    }

    ctx->pc = 0x2edb98u;

    // 0x2edb98: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edb98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edb9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edba0: 0xade4ecf4  sw          $a0, -0x130C($t7)
    ctx->pc = 0x2edba0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962420), GPR_U32(ctx, 4));
    // 0x2edba4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2edba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edbac: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edbacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edbb0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edbb4: 0x24e70c48  addiu       $a3, $a3, 0xC48
    ctx->pc = 0x2edbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3144));
    // 0x2edbb8: 0x24840c60  addiu       $a0, $a0, 0xC60
    ctx->pc = 0x2edbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3168));
    // 0x2edbbc: 0x24050659  addiu       $a1, $zero, 0x659
    ctx->pc = 0x2edbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1625));
    // 0x2edbc0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDBC0u;
    SET_GPR_U32(ctx, 31, 0x2EDBC8u);
    ctx->pc = 0x2EDBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBC0u;
            // 0x2edbc4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBC8u; }
        if (ctx->pc != 0x2EDBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBC8u; }
        if (ctx->pc != 0x2EDBC8u) { return; }
    }
    ctx->pc = 0x2EDBC8u;
label_2edbc8:
    // 0x2edbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBD0u;
            // 0x2edbd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EDBD8u;
    ctx->pc = 0x2edbd8u;
}
