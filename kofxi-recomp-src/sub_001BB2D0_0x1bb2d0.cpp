#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB2D0
// Address: 0x1bb2d0 - 0x1bb320
void sub_001BB2D0_0x1bb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB2D0_0x1bb2d0");
#endif

    switch (ctx->pc) {
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb304u: goto label_1bb304;
        default: break;
    }

    ctx->pc = 0x1bb2d0u;

    // 0x1bb2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb2d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb2e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb2e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb2ec: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB2ECu;
    SET_GPR_U32(ctx, 31, 0x1BB2F4u);
    ctx->pc = 0x1BB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2ECu;
            // 0x1bb2f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F4u; }
        if (ctx->pc != 0x1BB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F4u; }
        if (ctx->pc != 0x1BB2F4u) { return; }
    }
    ctx->pc = 0x1BB2F4u;
label_1bb2f4:
    // 0x1bb2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2fc: 0xc06ecca  jal         func_1BB328
    ctx->pc = 0x1BB2FCu;
    SET_GPR_U32(ctx, 31, 0x1BB304u);
    ctx->pc = 0x1BB300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2FCu;
            // 0x1bb300: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB328u;
    if (runtime->hasFunction(0x1BB328u)) {
        auto targetFn = runtime->lookupFunction(0x1BB328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB304u; }
        if (ctx->pc != 0x1BB304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB328_0x1bb328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB304u; }
        if (ctx->pc != 0x1BB304u) { return; }
    }
    ctx->pc = 0x1BB304u;
label_1bb304:
    // 0x1bb304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb30c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb310: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb314: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB314u;
    ctx->pc = 0x1BB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB314u;
            // 0x1bb318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BB31Cu;
    // 0x1bb31c: 0x0  nop
    ctx->pc = 0x1bb31cu;
    // NOP
    ctx->pc = 0x1bb320u;
}
