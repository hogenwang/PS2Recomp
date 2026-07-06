#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BE28
// Address: 0x27be28 - 0x27be68
void sub_0027BE28_0x27be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE28_0x27be28");
#endif

    switch (ctx->pc) {
        case 0x27be50u: goto label_27be50;
        default: break;
    }

    ctx->pc = 0x27be28u;

    // 0x27be28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27be2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27be30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27be30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27be34: 0x2450354c  addiu       $s0, $v0, 0x354C
    ctx->pc = 0x27be34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13644));
    // 0x27be38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27be38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27be3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27be40: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BE40u;
    {
        const bool branch_taken_0x27be40 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE40u;
            // 0x27be44: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be40) {
            ctx->pc = 0x27BE58u;
            goto label_27be58;
        }
    }
    ctx->pc = 0x27BE48u;
    // 0x27be48: 0xc04636c  jal         func_118DB0
    ctx->pc = 0x27BE48u;
    SET_GPR_U32(ctx, 31, 0x27BE50u);
    ctx->pc = 0x118DB0u;
    if (runtime->hasFunction(0x118DB0u)) {
        auto targetFn = runtime->lookupFunction(0x118DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE50u; }
        if (ctx->pc != 0x27BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118DB0_0x118db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE50u; }
        if (ctx->pc != 0x27BE50u) { return; }
    }
    ctx->pc = 0x27BE50u;
label_27be50:
    // 0x27be50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27be54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x27be54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_27be58:
    // 0x27be58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27be58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27be5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27be60: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE60u;
            // 0x27be64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BE68u;
    ctx->pc = 0x27be68u;
}
