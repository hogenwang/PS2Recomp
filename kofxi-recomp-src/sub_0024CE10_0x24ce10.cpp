#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024CE10
// Address: 0x24ce10 - 0x24ce80
void sub_0024CE10_0x24ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE10_0x24ce10");
#endif

    switch (ctx->pc) {
        case 0x24ce50u: goto label_24ce50;
        default: break;
    }

    ctx->pc = 0x24ce10u;

    // 0x24ce10: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x24ce10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x24ce14: 0x24050125  addiu       $a1, $zero, 0x125
    ctx->pc = 0x24ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x24ce18: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x24ce18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x24ce1c: 0x2402280f  addiu       $v0, $zero, 0x280F
    ctx->pc = 0x24ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10255));
    // 0x24ce20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ce24: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24ce24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24ce28: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x24ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x24ce2c: 0xad050374  sw          $a1, 0x374($t0)
    ctx->pc = 0x24ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 884), GPR_U32(ctx, 5));
    // 0x24ce30: 0xacc20378  sw          $v0, 0x378($a2)
    ctx->pc = 0x24ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 888), GPR_U32(ctx, 2));
    // 0x24ce34: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24ce38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ce3c: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x24ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x24ce40: 0xace3037c  sw          $v1, 0x37C($a3)
    ctx->pc = 0x24ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 892), GPR_U32(ctx, 3));
    // 0x24ce44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x24CE48u;
    SET_GPR_U32(ctx, 31, 0x24CE50u);
    ctx->pc = 0x24CE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE48u;
            // 0x24ce4c: 0x24060928  addiu       $a2, $zero, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE50u; }
        if (ctx->pc != 0x24CE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE50u; }
        if (ctx->pc != 0x24CE50u) { return; }
    }
    ctx->pc = 0x24CE50u;
label_24ce50:
    // 0x24ce50: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x24ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24ce54: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24ce58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ce5c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x24ce60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ce64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ce68: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x24ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x24ce6c: 0xac460388  sw          $a2, 0x388($v0)
    ctx->pc = 0x24ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 6));
    // 0x24ce70: 0xaca60384  sw          $a2, 0x384($a1)
    ctx->pc = 0x24ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 900), GPR_U32(ctx, 6));
    // 0x24ce74: 0x3e00008  jr          $ra
    ctx->pc = 0x24CE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE74u;
            // 0x24ce78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24CE7Cu;
    // 0x24ce7c: 0x0  nop
    ctx->pc = 0x24ce7cu;
    // NOP
    ctx->pc = 0x24ce80u;
}
