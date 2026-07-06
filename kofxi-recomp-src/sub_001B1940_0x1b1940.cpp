#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1940
// Address: 0x1b1940 - 0x1b19b0
void sub_001B1940_0x1b1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1940_0x1b1940");
#endif

    switch (ctx->pc) {
        case 0x1b1968u: goto label_1b1968;
        case 0x1b1978u: goto label_1b1978;
        case 0x1b198cu: goto label_1b198c;
        case 0x1b1994u: goto label_1b1994;
        case 0x1b199cu: goto label_1b199c;
        default: break;
    }

    ctx->pc = 0x1b1940u;

    // 0x1b1940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1948: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1948u;
    {
        const bool branch_taken_0x1b1948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1948u;
            // 0x1b194c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1948) {
            ctx->pc = 0x1B1968u;
            goto label_1b1968;
        }
    }
    ctx->pc = 0x1B1950u;
    // 0x1b1950: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b1950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b1954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1954u;
    {
        const bool branch_taken_0x1b1954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1954u;
            // 0x1b1958: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1954) {
            ctx->pc = 0x1B1968u;
            goto label_1b1968;
        }
    }
    ctx->pc = 0x1B195Cu;
    // 0x1b195c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1960: 0x806e004  j           func_1B8010
    ctx->pc = 0x1B1960u;
    ctx->pc = 0x1B1964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1960u;
            // 0x1b1964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8010u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1968u;
label_1b1968:
    // 0x1b1968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b196c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B196Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B196Cu;
            // 0x1b1970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1974u;
    // 0x1b1974: 0x0  nop
    ctx->pc = 0x1b1974u;
    // NOP
label_1b1978:
    // 0x1b1978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b197c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1984: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1984u;
    SET_GPR_U32(ctx, 31, 0x1B198Cu);
    ctx->pc = 0x1B1988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1984u;
            // 0x1b1988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B198Cu; }
        if (ctx->pc != 0x1B198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B198Cu; }
        if (ctx->pc != 0x1B198Cu) { return; }
    }
    ctx->pc = 0x1B198Cu;
label_1b198c:
    // 0x1b198c: 0xc06c66c  jal         func_1B19B0
    ctx->pc = 0x1B198Cu;
    SET_GPR_U32(ctx, 31, 0x1B1994u);
    ctx->pc = 0x1B1990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B198Cu;
            // 0x1b1990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B19B0u;
    if (runtime->hasFunction(0x1B19B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1994u; }
        if (ctx->pc != 0x1B1994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19B0_0x1b19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1994u; }
        if (ctx->pc != 0x1B1994u) { return; }
    }
    ctx->pc = 0x1B1994u;
label_1b1994:
    // 0x1b1994: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1994u;
    SET_GPR_U32(ctx, 31, 0x1B199Cu);
    ctx->pc = 0x1B1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1994u;
            // 0x1b1998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B199Cu; }
        if (ctx->pc != 0x1B199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B199Cu; }
        if (ctx->pc != 0x1B199Cu) { return; }
    }
    ctx->pc = 0x1B199Cu;
label_1b199c:
    // 0x1b199c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b19a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b19a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b19a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B19A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19A8u;
            // 0x1b19ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B19B0u;
    ctx->pc = 0x1b19b0u;
}
