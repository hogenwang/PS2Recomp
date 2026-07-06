#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC7A0
// Address: 0x2fc7a0 - 0x2fc840
void sub_002FC7A0_0x2fc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC7A0_0x2fc7a0");
#endif

    switch (ctx->pc) {
        case 0x2fc7b0u: goto label_2fc7b0;
        case 0x2fc7c0u: goto label_2fc7c0;
        case 0x2fc7d0u: goto label_2fc7d0;
        case 0x2fc7e0u: goto label_2fc7e0;
        case 0x2fc7f0u: goto label_2fc7f0;
        case 0x2fc800u: goto label_2fc800;
        case 0x2fc810u: goto label_2fc810;
        case 0x2fc820u: goto label_2fc820;
        case 0x2fc830u: goto label_2fc830;
        default: break;
    }

    ctx->pc = 0x2fc7a0u;

    // 0x2fc7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7a8: 0xc0974ee  jal         func_25D3B8
    ctx->pc = 0x2FC7A8u;
    SET_GPR_U32(ctx, 31, 0x2FC7B0u);
    ctx->pc = 0x25D3B8u;
    if (runtime->hasFunction(0x25D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x25D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7B0u; }
        if (ctx->pc != 0x2FC7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D3B8_0x25d3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7B0u; }
        if (ctx->pc != 0x2FC7B0u) { return; }
    }
    ctx->pc = 0x2FC7B0u;
label_2fc7b0:
    // 0x2fc7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7B4u;
            // 0x2fc7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC7BCu;
    // 0x2fc7bc: 0x0  nop
    ctx->pc = 0x2fc7bcu;
    // NOP
label_2fc7c0:
    // 0x2fc7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7c8: 0xc0978e0  jal         func_25E380
    ctx->pc = 0x2FC7C8u;
    SET_GPR_U32(ctx, 31, 0x2FC7D0u);
    ctx->pc = 0x25E380u;
    if (runtime->hasFunction(0x25E380u)) {
        auto targetFn = runtime->lookupFunction(0x25E380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7D0u; }
        if (ctx->pc != 0x2FC7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E380_0x25e380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7D0u; }
        if (ctx->pc != 0x2FC7D0u) { return; }
    }
    ctx->pc = 0x2FC7D0u;
label_2fc7d0:
    // 0x2fc7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7D4u;
            // 0x2fc7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC7DCu;
    // 0x2fc7dc: 0x0  nop
    ctx->pc = 0x2fc7dcu;
    // NOP
label_2fc7e0:
    // 0x2fc7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7e8: 0xc09789e  jal         func_25E278
    ctx->pc = 0x2FC7E8u;
    SET_GPR_U32(ctx, 31, 0x2FC7F0u);
    ctx->pc = 0x25E278u;
    if (runtime->hasFunction(0x25E278u)) {
        auto targetFn = runtime->lookupFunction(0x25E278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7F0u; }
        if (ctx->pc != 0x2FC7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E278_0x25e278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7F0u; }
        if (ctx->pc != 0x2FC7F0u) { return; }
    }
    ctx->pc = 0x2FC7F0u;
label_2fc7f0:
    // 0x2fc7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7F4u;
            // 0x2fc7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC7FCu;
    // 0x2fc7fc: 0x0  nop
    ctx->pc = 0x2fc7fcu;
    // NOP
label_2fc800:
    // 0x2fc800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc808: 0xc097812  jal         func_25E048
    ctx->pc = 0x2FC808u;
    SET_GPR_U32(ctx, 31, 0x2FC810u);
    ctx->pc = 0x25E048u;
    if (runtime->hasFunction(0x25E048u)) {
        auto targetFn = runtime->lookupFunction(0x25E048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC810u; }
        if (ctx->pc != 0x2FC810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E048_0x25e048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC810u; }
        if (ctx->pc != 0x2FC810u) { return; }
    }
    ctx->pc = 0x2FC810u;
label_2fc810:
    // 0x2fc810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc814: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC814u;
            // 0x2fc818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC81Cu;
    // 0x2fc81c: 0x0  nop
    ctx->pc = 0x2fc81cu;
    // NOP
label_2fc820:
    // 0x2fc820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc828: 0xc09741e  jal         func_25D078
    ctx->pc = 0x2FC828u;
    SET_GPR_U32(ctx, 31, 0x2FC830u);
    ctx->pc = 0x25D078u;
    if (runtime->hasFunction(0x25D078u)) {
        auto targetFn = runtime->lookupFunction(0x25D078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC830u; }
        if (ctx->pc != 0x2FC830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D078_0x25d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC830u; }
        if (ctx->pc != 0x2FC830u) { return; }
    }
    ctx->pc = 0x2FC830u;
label_2fc830:
    // 0x2fc830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc834: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC834u;
            // 0x2fc838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC83Cu;
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
    ctx->pc = 0x2fc840u;
}
