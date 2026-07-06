#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB268
// Address: 0x1cb268 - 0x1cb2b0
void sub_001CB268_0x1cb268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB268_0x1cb268");
#endif

    switch (ctx->pc) {
        case 0x1cb288u: goto label_1cb288;
        case 0x1cb294u: goto label_1cb294;
        case 0x1cb29cu: goto label_1cb29c;
        default: break;
    }

    ctx->pc = 0x1cb268u;

    // 0x1cb268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cb26c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cb26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb270: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1cb270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1cb274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cb274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb27c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1cb27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1cb280: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1CB280u;
    SET_GPR_U32(ctx, 31, 0x1CB288u);
    ctx->pc = 0x1CB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB280u;
            // 0x1cb284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB288u; }
        if (ctx->pc != 0x1CB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB288u; }
        if (ctx->pc != 0x1CB288u) { return; }
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb28c: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1CB28Cu;
    SET_GPR_U32(ctx, 31, 0x1CB294u);
    ctx->pc = 0x1CB290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB28Cu;
            // 0x1cb290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB294u; }
        if (ctx->pc != 0x1CB294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB294u; }
        if (ctx->pc != 0x1CB294u) { return; }
    }
    ctx->pc = 0x1CB294u;
label_1cb294:
    // 0x1cb294: 0xc072a06  jal         func_1CA818
    ctx->pc = 0x1CB294u;
    SET_GPR_U32(ctx, 31, 0x1CB29Cu);
    ctx->pc = 0x1CB298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB294u;
            // 0x1cb298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    if (runtime->hasFunction(0x1CA818u)) {
        auto targetFn = runtime->lookupFunction(0x1CA818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB29Cu; }
        if (ctx->pc != 0x1CB29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA818_0x1ca818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB29Cu; }
        if (ctx->pc != 0x1CB29Cu) { return; }
    }
    ctx->pc = 0x1CB29Cu;
label_1cb29c:
    // 0x1cb29c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1cb29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb2a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1cb2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cb2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2A4u;
            // 0x1cb2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB2ACu;
    // 0x1cb2ac: 0x0  nop
    ctx->pc = 0x1cb2acu;
    // NOP
    ctx->pc = 0x1cb2b0u;
}
