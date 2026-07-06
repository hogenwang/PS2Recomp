#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163D80
// Address: 0x163d80 - 0x163de0
void sub_00163D80_0x163d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163D80_0x163d80");
#endif

    switch (ctx->pc) {
        case 0x163da4u: goto label_163da4;
        default: break;
    }

    ctx->pc = 0x163d80u;

    // 0x163d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x163d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163D94u;
    {
        const bool branch_taken_0x163d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d94) {
            ctx->pc = 0x163DA8u;
            goto label_163da8;
        }
    }
    ctx->pc = 0x163D9Cu;
    // 0x163d9c: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x163D9Cu;
    SET_GPR_U32(ctx, 31, 0x163DA4u);
    ctx->pc = 0x1B04A0u;
    if (runtime->hasFunction(0x1B04A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DA4u; }
        if (ctx->pc != 0x163DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04A0_0x1b04a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DA4u; }
        if (ctx->pc != 0x163DA4u) { return; }
    }
    ctx->pc = 0x163DA4u;
label_163da4:
    // 0x163da4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x163da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_163da8:
    // 0x163da8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163dac: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x163dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x163db0: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x163db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
    // 0x163db4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163db8: 0xac8047a0  sw          $zero, 0x47A0($a0)
    ctx->pc = 0x163db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18336), GPR_U32(ctx, 0));
    // 0x163dbc: 0xa06047b0  sb          $zero, 0x47B0($v1)
    ctx->pc = 0x163dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18352), (uint8_t)GPR_U32(ctx, 0));
    // 0x163dc0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x163dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x163dc4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163dc8: 0xac8047a8  sw          $zero, 0x47A8($a0)
    ctx->pc = 0x163dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18344), GPR_U32(ctx, 0));
    // 0x163dcc: 0xa06047d0  sb          $zero, 0x47D0($v1)
    ctx->pc = 0x163dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18384), (uint8_t)GPR_U32(ctx, 0));
    // 0x163dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x163DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DD8u;
            // 0x163ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163DE0u;
    ctx->pc = 0x163de0u;
}
