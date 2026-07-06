#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341C70
// Address: 0x341c70 - 0x341cc0
void sub_00341C70_0x341c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C70_0x341c70");
#endif

    switch (ctx->pc) {
        case 0x341cb0u: goto label_341cb0;
        default: break;
    }

    ctx->pc = 0x341c70u;

    // 0x341c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341c74: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341c7c: 0x8c64ea60  lw          $a0, -0x15A0($v1)
    ctx->pc = 0x341c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961760)));
    // 0x341c80: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x341C80u;
    {
        const bool branch_taken_0x341c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x341c80) {
            ctx->pc = 0x341C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341C80u;
            // 0x341c84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341CB4u;
            goto label_341cb4;
        }
    }
    ctx->pc = 0x341C88u;
    // 0x341c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341c8c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x341C8Cu;
    {
        const bool branch_taken_0x341c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x341c8c) {
            ctx->pc = 0x341CB0u;
            goto label_341cb0;
        }
    }
    ctx->pc = 0x341C94u;
    // 0x341c94: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341c98: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x341c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x341c9c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x341c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x341ca0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341CA0u;
    {
        const bool branch_taken_0x341ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341ca0) {
            ctx->pc = 0x341CB0u;
            goto label_341cb0;
        }
    }
    ctx->pc = 0x341CA8u;
    // 0x341ca8: 0xc0d0644  jal         func_341910
    ctx->pc = 0x341CA8u;
    SET_GPR_U32(ctx, 31, 0x341CB0u);
    ctx->pc = 0x341910u;
    if (runtime->hasFunction(0x341910u)) {
        auto targetFn = runtime->lookupFunction(0x341910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341CB0u; }
        if (ctx->pc != 0x341CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341910_0x341910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341CB0u; }
        if (ctx->pc != 0x341CB0u) { return; }
    }
    ctx->pc = 0x341CB0u;
label_341cb0:
    // 0x341cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341cb4:
    // 0x341cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x341CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341CB4u;
            // 0x341cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341CBCu;
    // 0x341cbc: 0x0  nop
    ctx->pc = 0x341cbcu;
    // NOP
    ctx->pc = 0x341cc0u;
}
