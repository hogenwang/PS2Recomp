#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7968
// Address: 0x1b7968 - 0x1b79c0
void sub_001B7968_0x1b7968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7968_0x1b7968");
#endif

    switch (ctx->pc) {
        case 0x1b798cu: goto label_1b798c;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79a4u: goto label_1b79a4;
        default: break;
    }

    ctx->pc = 0x1b7968u;

    // 0x1b7968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b796c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7978: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b797c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7980: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b7984: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7984u;
    SET_GPR_U32(ctx, 31, 0x1B798Cu);
    ctx->pc = 0x1B7988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7984u;
            // 0x1b7988: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B798Cu; }
        if (ctx->pc != 0x1B798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B798Cu; }
        if (ctx->pc != 0x1B798Cu) { return; }
    }
    ctx->pc = 0x1B798Cu;
label_1b798c:
    // 0x1b798c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b7990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7994: 0xc06de70  jal         func_1B79C0
    ctx->pc = 0x1B7994u;
    SET_GPR_U32(ctx, 31, 0x1B799Cu);
    ctx->pc = 0x1B7998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7994u;
            // 0x1b7998: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B79C0u;
    if (runtime->hasFunction(0x1B79C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B79C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B799Cu; }
        if (ctx->pc != 0x1B799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B79C0_0x1b79c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B799Cu; }
        if (ctx->pc != 0x1B799Cu) { return; }
    }
    ctx->pc = 0x1B799Cu;
label_1b799c:
    // 0x1b799c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B799Cu;
    SET_GPR_U32(ctx, 31, 0x1B79A4u);
    ctx->pc = 0x1B79A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B799Cu;
            // 0x1b79a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79A4u; }
        if (ctx->pc != 0x1B79A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79A4u; }
        if (ctx->pc != 0x1B79A4u) { return; }
    }
    ctx->pc = 0x1B79A4u;
label_1b79a4:
    // 0x1b79a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b79a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b79a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b79a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b79acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b79b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b79b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b79b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b79b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b79b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B79B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79B8u;
            // 0x1b79bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B79C0u;
    ctx->pc = 0x1b79c0u;
}
