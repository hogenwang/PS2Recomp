#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227D30
// Address: 0x227d30 - 0x227d78
void sub_00227D30_0x227d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D30_0x227d30");
#endif

    switch (ctx->pc) {
        case 0x227d40u: goto label_227d40;
        default: break;
    }

    ctx->pc = 0x227d30u;

    // 0x227d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227d38: 0xc089f44  jal         func_227D10
    ctx->pc = 0x227D38u;
    SET_GPR_U32(ctx, 31, 0x227D40u);
    ctx->pc = 0x227D10u;
    if (runtime->hasFunction(0x227D10u)) {
        auto targetFn = runtime->lookupFunction(0x227D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D40u; }
        if (ctx->pc != 0x227D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227D10_0x227d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D40u; }
        if (ctx->pc != 0x227D40u) { return; }
    }
    ctx->pc = 0x227D40u;
label_227d40:
    // 0x227d40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227D40u;
    {
        const bool branch_taken_0x227d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D40u;
            // 0x227d44: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d40) {
            ctx->pc = 0x227D64u;
            goto label_227d64;
        }
    }
    ctx->pc = 0x227D48u;
    // 0x227d48: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x227d48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x227d4c: 0x8dcdf200  lw          $t5, -0xE00($t6)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963712)));
    // 0x227d50: 0x8daf0328  lw          $t7, 0x328($t5)
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x227d54: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x227d54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x227d58: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x227d5c: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x227d60: 0x2dce0001  sltiu       $t6, $t6, 0x1
    ctx->pc = 0x227d60u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_227d64:
    // 0x227d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227d68: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x227d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x227D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D6Cu;
            // 0x227d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227D74u;
    // 0x227d74: 0x0  nop
    ctx->pc = 0x227d74u;
    // NOP
    ctx->pc = 0x227d78u;
}
