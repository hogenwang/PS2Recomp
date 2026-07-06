#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA948
// Address: 0x1ca948 - 0x1ca998
void sub_001CA948_0x1ca948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA948_0x1ca948");
#endif

    switch (ctx->pc) {
        case 0x1ca988u: goto label_1ca988;
        default: break;
    }

    ctx->pc = 0x1ca948u;

    // 0x1ca948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca94c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ca94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ca950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca954: 0x246386e0  addiu       $v1, $v1, -0x7920
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936288));
    // 0x1ca958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca960: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA960u;
    {
        const bool branch_taken_0x1ca960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA960u;
            // 0x1ca964: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca960) {
            ctx->pc = 0x1CA988u;
            goto label_1ca988;
        }
    }
    ctx->pc = 0x1CA968u;
    // 0x1ca968: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ca968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ca96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca974: 0x248486e8  addiu       $a0, $a0, -0x7918
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936296));
    // 0x1ca978: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x1ca978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x1ca97c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1CA97Cu;
    ctx->pc = 0x1CA980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA97Cu;
            // 0x1ca980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA984u;
    // 0x1ca984: 0x0  nop
    ctx->pc = 0x1ca984u;
    // NOP
label_1ca988:
    // 0x1ca988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA98Cu;
            // 0x1ca990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA994u;
    // 0x1ca994: 0x0  nop
    ctx->pc = 0x1ca994u;
    // NOP
    ctx->pc = 0x1ca998u;
}
