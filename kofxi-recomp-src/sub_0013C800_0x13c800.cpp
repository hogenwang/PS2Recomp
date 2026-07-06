#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C800
// Address: 0x13c800 - 0x13c870
void sub_0013C800_0x13c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C800_0x13c800");
#endif

    switch (ctx->pc) {
        case 0x13c818u: goto label_13c818;
        case 0x13c830u: goto label_13c830;
        case 0x13c83cu: goto label_13c83c;
        case 0x13c85cu: goto label_13c85c;
        default: break;
    }

    ctx->pc = 0x13c800u;

    // 0x13c800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c80c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c810: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C810u;
    SET_GPR_U32(ctx, 31, 0x13C818u);
    ctx->pc = 0x13C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C810u;
            // 0x13c814: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C818u; }
        if (ctx->pc != 0x13C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C818u; }
        if (ctx->pc != 0x13C818u) { return; }
    }
    ctx->pc = 0x13C818u;
label_13c818:
    // 0x13c818: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C818u;
    {
        const bool branch_taken_0x13c818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c818) {
            ctx->pc = 0x13C81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C818u;
            // 0x13c81c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C828u;
            goto label_13c828;
        }
    }
    ctx->pc = 0x13C820u;
    // 0x13c820: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13C820u;
    {
        const bool branch_taken_0x13c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C820u;
            // 0x13c824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c820) {
            ctx->pc = 0x13C860u;
            goto label_13c860;
        }
    }
    ctx->pc = 0x13C828u;
label_13c828:
    // 0x13c828: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13C828u;
    SET_GPR_U32(ctx, 31, 0x13C830u);
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C830u; }
        if (ctx->pc != 0x13C830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C830u; }
        if (ctx->pc != 0x13C830u) { return; }
    }
    ctx->pc = 0x13C830u;
label_13c830:
    // 0x13c830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c834: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C834u;
    SET_GPR_U32(ctx, 31, 0x13C83Cu);
    ctx->pc = 0x13C838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C834u;
            // 0x13c838: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E200u;
    if (runtime->hasFunction(0x13E200u)) {
        auto targetFn = runtime->lookupFunction(0x13E200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C83Cu; }
        if (ctx->pc != 0x13C83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E200_0x13e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C83Cu; }
        if (ctx->pc != 0x13C83Cu) { return; }
    }
    ctx->pc = 0x13C83Cu;
label_13c83c:
    // 0x13c83c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C83Cu;
    {
        const bool branch_taken_0x13c83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c83c) {
            ctx->pc = 0x13C840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C83Cu;
            // 0x13c840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C84Cu;
            goto label_13c84c;
        }
    }
    ctx->pc = 0x13C844u;
    // 0x13c844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C844u;
    {
        const bool branch_taken_0x13c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C844u;
            // 0x13c848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c844) {
            ctx->pc = 0x13C860u;
            goto label_13c860;
        }
    }
    ctx->pc = 0x13C84Cu;
label_13c84c:
    // 0x13c84c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13c850: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x13c854: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13C854u;
    SET_GPR_U32(ctx, 31, 0x13C85Cu);
    ctx->pc = 0x13C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C854u;
            // 0x13c858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C85Cu; }
        if (ctx->pc != 0x13C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C85Cu; }
        if (ctx->pc != 0x13C85Cu) { return; }
    }
    ctx->pc = 0x13C85Cu;
label_13c85c:
    // 0x13c85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c860:
    // 0x13c860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c868: 0x3e00008  jr          $ra
    ctx->pc = 0x13C868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C868u;
            // 0x13c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C870u;
    ctx->pc = 0x13c870u;
}
