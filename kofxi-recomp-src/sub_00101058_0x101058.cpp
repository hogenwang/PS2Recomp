#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101058
// Address: 0x101058 - 0x1010b8
void sub_00101058_0x101058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101058_0x101058");
#endif

    switch (ctx->pc) {
        case 0x101080u: goto label_101080;
        case 0x101090u: goto label_101090;
        case 0x1010a0u: goto label_1010a0;
        default: break;
    }

    ctx->pc = 0x101058u;

    // 0x101058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10105c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x101060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101068: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x101068u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10106c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x101070: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x101070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101078: 0xc040218  jal         func_100860
    ctx->pc = 0x101078u;
    SET_GPR_U32(ctx, 31, 0x101080u);
    ctx->pc = 0x10107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101078u;
            // 0x10107c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100860u;
    if (runtime->hasFunction(0x100860u)) {
        auto targetFn = runtime->lookupFunction(0x100860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101080u; }
        if (ctx->pc != 0x101080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100860_0x100860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101080u; }
        if (ctx->pc != 0x101080u) { return; }
    }
    ctx->pc = 0x101080u;
label_101080:
    // 0x101080: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101080u;
    {
        const bool branch_taken_0x101080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101080) {
            ctx->pc = 0x101098u;
            goto label_101098;
        }
    }
    ctx->pc = 0x101088u;
    // 0x101088: 0xc040336  jal         func_100CD8
    ctx->pc = 0x101088u;
    SET_GPR_U32(ctx, 31, 0x101090u);
    ctx->pc = 0x10108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101088u;
            // 0x10108c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (runtime->hasFunction(0x100CD8u)) {
        auto targetFn = runtime->lookupFunction(0x100CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101090u; }
        if (ctx->pc != 0x101090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CD8_0x100cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101090u; }
        if (ctx->pc != 0x101090u) { return; }
    }
    ctx->pc = 0x101090u;
label_101090:
    // 0x101090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x101090u;
    {
        const bool branch_taken_0x101090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101090u;
            // 0x101094: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101090) {
            ctx->pc = 0x1010A4u;
            goto label_1010a4;
        }
    }
    ctx->pc = 0x101098u;
label_101098:
    // 0x101098: 0xc040336  jal         func_100CD8
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101098u;
            // 0x10109c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (runtime->hasFunction(0x100CD8u)) {
        auto targetFn = runtime->lookupFunction(0x100CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CD8_0x100cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1010a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1010a4:
    // 0x1010a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1010a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1010a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1010a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1010ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1010ACu;
            // 0x1010b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1010B4u;
    // 0x1010b4: 0x0  nop
    ctx->pc = 0x1010b4u;
    // NOP
    ctx->pc = 0x1010b8u;
}
