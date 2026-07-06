#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B63C0
// Address: 0x1b63c0 - 0x1b6418
void sub_001B63C0_0x1b63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B63C0_0x1b63c0");
#endif

    switch (ctx->pc) {
        case 0x1b63d8u: goto label_1b63d8;
        case 0x1b63fcu: goto label_1b63fc;
        default: break;
    }

    ctx->pc = 0x1b63c0u;

    // 0x1b63c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b63c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b63c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b63c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b63c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b63c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b63ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b63d0: 0xc06ae96  jal         func_1ABA58
    ctx->pc = 0x1B63D0u;
    SET_GPR_U32(ctx, 31, 0x1B63D8u);
    ctx->pc = 0x1B63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63D0u;
            // 0x1b63d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA58u;
    if (runtime->hasFunction(0x1ABA58u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63D8u; }
        if (ctx->pc != 0x1B63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABA58_0x1aba58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63D8u; }
        if (ctx->pc != 0x1B63D8u) { return; }
    }
    ctx->pc = 0x1B63D8u;
label_1b63d8:
    // 0x1b63d8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B63D8u;
    {
        const bool branch_taken_0x1b63d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63D8u;
            // 0x1b63dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63d8) {
            ctx->pc = 0x1B6408u;
            goto label_1b6408;
        }
    }
    ctx->pc = 0x1B63E0u;
    // 0x1b63e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b63e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b63e4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1b63e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b63e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b63ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B63ECu;
    {
        const bool branch_taken_0x1b63ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b63ec) {
            ctx->pc = 0x1B63F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63ECu;
            // 0x1b63f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6408u;
            goto label_1b6408;
        }
    }
    ctx->pc = 0x1B63F4u;
    // 0x1b63f4: 0xc06ae98  jal         func_1ABA60
    ctx->pc = 0x1B63F4u;
    SET_GPR_U32(ctx, 31, 0x1B63FCu);
    ctx->pc = 0x1B63F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63F4u;
            // 0x1b63f8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA60u;
    if (runtime->hasFunction(0x1ABA60u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63FCu; }
        if (ctx->pc != 0x1B63FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABA60_0x1aba60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63FCu; }
        if (ctx->pc != 0x1B63FCu) { return; }
    }
    ctx->pc = 0x1B63FCu;
label_1b63fc:
    // 0x1b63fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B63FCu;
    {
        const bool branch_taken_0x1b63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63FCu;
            // 0x1b6400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63fc) {
            ctx->pc = 0x1B640Cu;
            goto label_1b640c;
        }
    }
    ctx->pc = 0x1B6404u;
    // 0x1b6404: 0x0  nop
    ctx->pc = 0x1b6404u;
    // NOP
label_1b6408:
    // 0x1b6408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b640c:
    // 0x1b640c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b640cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6410: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6410u;
            // 0x1b6414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6418u;
    ctx->pc = 0x1b6418u;
}
