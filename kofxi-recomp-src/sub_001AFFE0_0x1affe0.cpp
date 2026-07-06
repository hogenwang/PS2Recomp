#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFFE0
// Address: 0x1affe0 - 0x1b0028
void sub_001AFFE0_0x1affe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFFE0_0x1affe0");
#endif

    switch (ctx->pc) {
        case 0x1afffcu: goto label_1afffc;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b0010u: goto label_1b0010;
        default: break;
    }

    ctx->pc = 0x1affe0u;

    // 0x1affe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1affe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1affe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1affe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1affe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1affecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1afff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1afff4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AFFF4u;
    SET_GPR_U32(ctx, 31, 0x1AFFFCu);
    ctx->pc = 0x1AFFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFF4u;
            // 0x1afff8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFFCu; }
        if (ctx->pc != 0x1AFFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFFCu; }
        if (ctx->pc != 0x1AFFFCu) { return; }
    }
    ctx->pc = 0x1AFFFCu;
label_1afffc:
    // 0x1afffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0000: 0xc06c00a  jal         func_1B0028
    ctx->pc = 0x1B0000u;
    SET_GPR_U32(ctx, 31, 0x1B0008u);
    ctx->pc = 0x1B0004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0000u;
            // 0x1b0004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0028u;
    if (runtime->hasFunction(0x1B0028u)) {
        auto targetFn = runtime->lookupFunction(0x1B0028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0008u; }
        if (ctx->pc != 0x1B0008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0028_0x1b0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0008u; }
        if (ctx->pc != 0x1B0008u) { return; }
    }
    ctx->pc = 0x1B0008u;
label_1b0008:
    // 0x1b0008: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0008u;
    SET_GPR_U32(ctx, 31, 0x1B0010u);
    ctx->pc = 0x1B000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0008u;
            // 0x1b000c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0010u; }
        if (ctx->pc != 0x1B0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0010u; }
        if (ctx->pc != 0x1B0010u) { return; }
    }
    ctx->pc = 0x1B0010u;
label_1b0010:
    // 0x1b0010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b001c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b001cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0020: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0020u;
            // 0x1b0024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0028u;
    ctx->pc = 0x1b0028u;
}
