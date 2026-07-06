#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2238
// Address: 0x1e2238 - 0x1e22d0
void sub_001E2238_0x1e2238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2238_0x1e2238");
#endif

    switch (ctx->pc) {
        case 0x1e224cu: goto label_1e224c;
        case 0x1e2258u: goto label_1e2258;
        case 0x1e2264u: goto label_1e2264;
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2294u: goto label_1e2294;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22b8u: goto label_1e22b8;
        default: break;
    }

    ctx->pc = 0x1e2238u;

    // 0x1e2238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e223c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e2244: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1E2244u;
    SET_GPR_U32(ctx, 31, 0x1E224Cu);
    ctx->pc = 0x1024E0u;
    if (runtime->hasFunction(0x1024E0u)) {
        auto targetFn = runtime->lookupFunction(0x1024E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E224Cu; }
        if (ctx->pc != 0x1E224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001024E0_0x1024e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E224Cu; }
        if (ctx->pc != 0x1E224Cu) { return; }
    }
    ctx->pc = 0x1E224Cu;
label_1e224c:
    // 0x1e224c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e224cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2254: 0x0  nop
    ctx->pc = 0x1e2254u;
    // NOP
label_1e2258:
    // 0x1e2258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e225c: 0xc040aac  jal         func_102AB0
    ctx->pc = 0x1E225Cu;
    SET_GPR_U32(ctx, 31, 0x1E2264u);
    ctx->pc = 0x1E2260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E225Cu;
            // 0x1e2260: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AB0u;
    if (runtime->hasFunction(0x102AB0u)) {
        auto targetFn = runtime->lookupFunction(0x102AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2264u; }
        if (ctx->pc != 0x1E2264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102AB0_0x102ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2264u; }
        if (ctx->pc != 0x1E2264u) { return; }
    }
    ctx->pc = 0x1E2264u;
label_1e2264:
    // 0x1e2264: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1E2264u;
    {
        const bool branch_taken_0x1e2264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2264u;
            // 0x1e2268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2264) {
            ctx->pc = 0x1E2258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e2258;
        }
    }
    ctx->pc = 0x1E226Cu;
    // 0x1e226c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e226cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e2270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2274: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2274u;
            // 0x1e2278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E227Cu;
    // 0x1e227c: 0x0  nop
    ctx->pc = 0x1e227cu;
    // NOP
label_1e2280:
    // 0x1e2280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e228c: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1E228Cu;
    SET_GPR_U32(ctx, 31, 0x1E2294u);
    ctx->pc = 0x1E2290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E228Cu;
            // 0x1e2290: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (runtime->hasFunction(0x1024E0u)) {
        auto targetFn = runtime->lookupFunction(0x1024E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2294u; }
        if (ctx->pc != 0x1E2294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001024E0_0x1024e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2294u; }
        if (ctx->pc != 0x1E2294u) { return; }
    }
    ctx->pc = 0x1E2294u;
label_1e2294:
    // 0x1e2294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e229c: 0xc040aac  jal         func_102AB0
    ctx->pc = 0x1E229Cu;
    SET_GPR_U32(ctx, 31, 0x1E22A4u);
    ctx->pc = 0x1E22A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E229Cu;
            // 0x1e22a0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AB0u;
    if (runtime->hasFunction(0x102AB0u)) {
        auto targetFn = runtime->lookupFunction(0x102AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22A4u; }
        if (ctx->pc != 0x1E22A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102AB0_0x102ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22A4u; }
        if (ctx->pc != 0x1E22A4u) { return; }
    }
    ctx->pc = 0x1E22A4u;
label_1e22a4:
    // 0x1e22a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e22a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e22a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e22ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e22acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E22B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22B0u;
            // 0x1e22b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E22B8u;
label_1e22b8:
    // 0x1e22b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e22b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e22bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e22c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e22c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22c4: 0x806d03c  j           func_1B40F0
    ctx->pc = 0x1E22C4u;
    ctx->pc = 0x1E22C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22C4u;
            // 0x1e22c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B40F0u;
    if (runtime->hasFunction(0x1B40F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B40F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiRunFrameScheduler_0x1b40f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E22CCu;
    // 0x1e22cc: 0x0  nop
    ctx->pc = 0x1e22ccu;
    // NOP
    ctx->pc = 0x1e22d0u;
}
