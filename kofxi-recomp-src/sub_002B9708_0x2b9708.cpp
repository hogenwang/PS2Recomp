#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9708
// Address: 0x2b9708 - 0x2b9748
void sub_002B9708_0x2b9708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9708_0x2b9708");
#endif

    switch (ctx->pc) {
        case 0x2b9724u: goto label_2b9724;
        case 0x2b972cu: goto label_2b972c;
        default: break;
    }

    ctx->pc = 0x2b9708u;

    // 0x2b9708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b970c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b9710: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x2b9710u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b9714: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9714u;
    {
        const bool branch_taken_0x2b9714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9714u;
            // 0x2b9718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9714) {
            ctx->pc = 0x2B9734u;
            goto label_2b9734;
        }
    }
    ctx->pc = 0x2B971Cu;
    // 0x2b971c: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2B971Cu;
    SET_GPR_U32(ctx, 31, 0x2B9724u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9724u; }
        if (ctx->pc != 0x2B9724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9724u; }
        if (ctx->pc != 0x2B9724u) { return; }
    }
    ctx->pc = 0x2B9724u;
label_2b9724:
    // 0x2b9724: 0xc0ae5d2  jal         func_2B9748
    ctx->pc = 0x2B9724u;
    SET_GPR_U32(ctx, 31, 0x2B972Cu);
    ctx->pc = 0x2B9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9724u;
            // 0x2b9728: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9748u;
    if (runtime->hasFunction(0x2B9748u)) {
        auto targetFn = runtime->lookupFunction(0x2B9748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B972Cu; }
        if (ctx->pc != 0x2B972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9748_0x2b9748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B972Cu; }
        if (ctx->pc != 0x2B972Cu) { return; }
    }
    ctx->pc = 0x2B972Cu;
label_2b972c:
    // 0x2b972c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B972Cu;
    {
        const bool branch_taken_0x2b972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B972Cu;
            // 0x2b9730: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b972c) {
            ctx->pc = 0x2B973Cu;
            goto label_2b973c;
        }
    }
    ctx->pc = 0x2B9734u;
label_2b9734:
    // 0x2b9734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b973c:
    // 0x2b973c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B973Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B973Cu;
            // 0x2b9740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9744u;
    // 0x2b9744: 0x0  nop
    ctx->pc = 0x2b9744u;
    // NOP
    ctx->pc = 0x2b9748u;
}
