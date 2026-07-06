#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1FE0
// Address: 0x1b1fe0 - 0x1b2028
void sub_001B1FE0_0x1b1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1FE0_0x1b1fe0");
#endif

    switch (ctx->pc) {
        case 0x1b1fe8u: goto label_1b1fe8;
        case 0x1b2004u: goto label_1b2004;
        case 0x1b2010u: goto label_1b2010;
        default: break;
    }

    ctx->pc = 0x1b1fe0u;

    // 0x1b1fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1FE8u;
label_1b1fe8:
    // 0x1b1fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1ffc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B1FFCu;
    SET_GPR_U32(ctx, 31, 0x1B2004u);
    ctx->pc = 0x1B2000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FFCu;
            // 0x1b2000: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2004u; }
        if (ctx->pc != 0x1B2004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2004u; }
        if (ctx->pc != 0x1B2004u) { return; }
    }
    ctx->pc = 0x1B2004u;
label_1b2004:
    // 0x1b2004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2008: 0xc06c80a  jal         func_1B2028
    ctx->pc = 0x1B2008u;
    SET_GPR_U32(ctx, 31, 0x1B2010u);
    ctx->pc = 0x1B200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2008u;
            // 0x1b200c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2028u;
    if (runtime->hasFunction(0x1B2028u)) {
        auto targetFn = runtime->lookupFunction(0x1B2028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2010u; }
        if (ctx->pc != 0x1B2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2028_0x1b2028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2010u; }
        if (ctx->pc != 0x1B2010u) { return; }
    }
    ctx->pc = 0x1B2010u;
label_1b2010:
    // 0x1b2010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b201c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B201Cu;
    ctx->pc = 0x1B2020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B201Cu;
            // 0x1b2020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2024u;
    // 0x1b2024: 0x0  nop
    ctx->pc = 0x1b2024u;
    // NOP
    ctx->pc = 0x1b2028u;
}
