#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A22F0
// Address: 0x2a22f0 - 0x2a2340
void sub_002A22F0_0x2a22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A22F0_0x2a22f0");
#endif

    switch (ctx->pc) {
        case 0x2a2304u: goto label_2a2304;
        case 0x2a2324u: goto label_2a2324;
        default: break;
    }

    ctx->pc = 0x2a22f0u;

    // 0x2a22f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a22f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a22f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a22fc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A22FCu;
    SET_GPR_U32(ctx, 31, 0x2A2304u);
    ctx->pc = 0x2A2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22FCu;
            // 0x2a2300: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2304u; }
        if (ctx->pc != 0x2A2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2304u; }
        if (ctx->pc != 0x2A2304u) { return; }
    }
    ctx->pc = 0x2A2304u;
label_2a2304:
    // 0x2a2304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2308: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2308u;
    {
        const bool branch_taken_0x2a2308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2308u;
            // 0x2a230c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2308) {
            ctx->pc = 0x2A2318u;
            goto label_2a2318;
        }
    }
    ctx->pc = 0x2A2310u;
    // 0x2a2310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2310u;
    {
        const bool branch_taken_0x2a2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2310u;
            // 0x2a2314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2310) {
            ctx->pc = 0x2A2330u;
            goto label_2a2330;
        }
    }
    ctx->pc = 0x2A2318u;
label_2a2318:
    // 0x2a2318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a231c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A231Cu;
    SET_GPR_U32(ctx, 31, 0x2A2324u);
    ctx->pc = 0x2A2320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A231Cu;
            // 0x2a2320: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2324u; }
        if (ctx->pc != 0x2A2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2324u; }
        if (ctx->pc != 0x2A2324u) { return; }
    }
    ctx->pc = 0x2A2324u;
label_2a2324:
    // 0x2a2324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a232c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a232cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2a2330:
    // 0x2a2330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2338: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2338u;
            // 0x2a233c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2340u;
    ctx->pc = 0x2a2340u;
}
