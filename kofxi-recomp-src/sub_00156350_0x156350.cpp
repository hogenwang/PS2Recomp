#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156350
// Address: 0x156350 - 0x156380
void sub_00156350_0x156350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156350_0x156350");
#endif

    switch (ctx->pc) {
        case 0x156364u: goto label_156364;
        case 0x15636cu: goto label_15636c;
        default: break;
    }

    ctx->pc = 0x156350u;

    // 0x156350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15635c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x15635Cu;
    SET_GPR_U32(ctx, 31, 0x156364u);
    ctx->pc = 0x156360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15635Cu;
            // 0x156360: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156364u; }
        if (ctx->pc != 0x156364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156364u; }
        if (ctx->pc != 0x156364u) { return; }
    }
    ctx->pc = 0x156364u;
label_156364:
    // 0x156364: 0xc0558d0  jal         func_156340
    ctx->pc = 0x156364u;
    SET_GPR_U32(ctx, 31, 0x15636Cu);
    ctx->pc = 0x156368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156364u;
            // 0x156368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15636Cu; }
        if (ctx->pc != 0x15636Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15636Cu; }
        if (ctx->pc != 0x15636Cu) { return; }
    }
    ctx->pc = 0x15636Cu;
label_15636c:
    // 0x15636c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15636cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156374: 0x3e00008  jr          $ra
    ctx->pc = 0x156374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156374u;
            // 0x156378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15637Cu;
    // 0x15637c: 0x0  nop
    ctx->pc = 0x15637cu;
    // NOP
    ctx->pc = 0x156380u;
}
