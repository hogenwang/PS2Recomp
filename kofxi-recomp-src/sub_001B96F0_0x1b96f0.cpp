#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B96F0
// Address: 0x1b96f0 - 0x1b9740
void sub_001B96F0_0x1b96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B96F0_0x1b96f0");
#endif

    switch (ctx->pc) {
        case 0x1b9714u: goto label_1b9714;
        case 0x1b9724u: goto label_1b9724;
        default: break;
    }

    ctx->pc = 0x1b96f0u;

    // 0x1b96f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b96f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b96f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b96f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b96f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b96f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9704: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b970c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B970Cu;
    SET_GPR_U32(ctx, 31, 0x1B9714u);
    ctx->pc = 0x1B9710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B970Cu;
            // 0x1b9710: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9714u; }
        if (ctx->pc != 0x1B9714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9714u; }
        if (ctx->pc != 0x1B9714u) { return; }
    }
    ctx->pc = 0x1B9714u;
label_1b9714:
    // 0x1b9714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b971c: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1B971Cu;
    SET_GPR_U32(ctx, 31, 0x1B9724u);
    ctx->pc = 0x1B9720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B971Cu;
            // 0x1b9720: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (runtime->hasFunction(0x1B9740u)) {
        auto targetFn = runtime->lookupFunction(0x1B9740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9724u; }
        if (ctx->pc != 0x1B9724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9740_0x1b9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9724u; }
        if (ctx->pc != 0x1B9724u) { return; }
    }
    ctx->pc = 0x1B9724u;
label_1b9724:
    // 0x1b9724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b972c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b972cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b9730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9734: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B9734u;
    ctx->pc = 0x1B9738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9734u;
            // 0x1b9738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B973Cu;
    // 0x1b973c: 0x0  nop
    ctx->pc = 0x1b973cu;
    // NOP
    ctx->pc = 0x1b9740u;
}
