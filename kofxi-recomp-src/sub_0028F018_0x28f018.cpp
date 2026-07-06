#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F018
// Address: 0x28f018 - 0x28f060
void sub_0028F018_0x28f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F018_0x28f018");
#endif

    switch (ctx->pc) {
        case 0x28f018u: goto label_28f018;
        case 0x28f01cu: goto label_28f01c;
        case 0x28f020u: goto label_28f020;
        case 0x28f024u: goto label_28f024;
        case 0x28f028u: goto label_28f028;
        case 0x28f02cu: goto label_28f02c;
        case 0x28f030u: goto label_28f030;
        case 0x28f034u: goto label_28f034;
        case 0x28f038u: goto label_28f038;
        case 0x28f03cu: goto label_28f03c;
        case 0x28f040u: goto label_28f040;
        case 0x28f044u: goto label_28f044;
        case 0x28f048u: goto label_28f048;
        case 0x28f04cu: goto label_28f04c;
        case 0x28f050u: goto label_28f050;
        case 0x28f054u: goto label_28f054;
        case 0x28f058u: goto label_28f058;
        case 0x28f05cu: goto label_28f05c;
        default: break;
    }

    ctx->pc = 0x28f018u;

label_28f018:
    // 0x28f018: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f01c:
    // 0x28f01c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f01cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f020:
    // 0x28f020: 0x8c424650  lw          $v0, 0x4650($v0)
    ctx->pc = 0x28f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18000)));
label_28f024:
    // 0x28f024: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f028:
    if (ctx->pc == 0x28F028u) {
        ctx->pc = 0x28F028u;
            // 0x28f028: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F02Cu;
        goto label_28f02c;
    }
    ctx->pc = 0x28F024u;
    {
        const bool branch_taken_0x28f024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F024u;
            // 0x28f028: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f024) {
            ctx->pc = 0x28F04Cu;
            goto label_28f04c;
        }
    }
    ctx->pc = 0x28F02Cu;
label_28f02c:
    // 0x28f02c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f030:
    // 0x28f030: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_28f034:
    // 0x28f034: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f038:
    // 0x28f038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f03c:
    // 0x28f03c: 0xc0a5648  jal         func_295920
label_28f040:
    if (ctx->pc == 0x28F040u) {
        ctx->pc = 0x28F040u;
            // 0x28f040: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F044u;
        goto label_28f044;
    }
    ctx->pc = 0x28F03Cu;
    SET_GPR_U32(ctx, 31, 0x28F044u);
    ctx->pc = 0x28F040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F03Cu;
            // 0x28f040: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F044u; }
        if (ctx->pc != 0x28F044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F044u; }
        if (ctx->pc != 0x28F044u) { return; }
    }
    ctx->pc = 0x28F044u;
label_28f044:
    // 0x28f044: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f048:
    if (ctx->pc == 0x28F048u) {
        ctx->pc = 0x28F048u;
            // 0x28f048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28F04Cu;
        goto label_28f04c;
    }
    ctx->pc = 0x28F044u;
    {
        const bool branch_taken_0x28f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F044u;
            // 0x28f048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f044) {
            ctx->pc = 0x28F054u;
            goto label_28f054;
        }
    }
    ctx->pc = 0x28F04Cu;
label_28f04c:
    // 0x28f04c: 0x40f809  jalr        $v0
label_28f050:
    if (ctx->pc == 0x28F050u) {
        ctx->pc = 0x28F054u;
        goto label_28f054;
    }
    ctx->pc = 0x28F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F054u; }
            if (ctx->pc != 0x28F054u) { return; }
        }
        }
    }
    ctx->pc = 0x28F054u;
label_28f054:
    // 0x28f054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f058:
    // 0x28f058: 0x3e00008  jr          $ra
label_28f05c:
    if (ctx->pc == 0x28F05Cu) {
        ctx->pc = 0x28F05Cu;
            // 0x28f05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F060u;
        goto label_fallthrough_0x28f058;
    }
    ctx->pc = 0x28F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F058u;
            // 0x28f05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f058:
    ctx->pc = 0x28F060u;
    ctx->pc = 0x28f060u;
}
