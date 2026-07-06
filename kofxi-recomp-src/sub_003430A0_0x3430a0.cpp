#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003430A0
// Address: 0x3430a0 - 0x343100
void sub_003430A0_0x3430a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003430A0_0x3430a0");
#endif

    switch (ctx->pc) {
        case 0x3430c8u: goto label_3430c8;
        default: break;
    }

    ctx->pc = 0x3430a0u;

    // 0x3430a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3430a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3430a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3430a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3430a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3430a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3430ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3430acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3430b0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3430b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3430b4: 0x248450b8  addiu       $a0, $a0, 0x50B8
    ctx->pc = 0x3430b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20664));
    // 0x3430b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3430b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3430bc: 0x27a6001e  addiu       $a2, $sp, 0x1E
    ctx->pc = 0x3430bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x3430c0: 0xc098202  jal         func_260808
    ctx->pc = 0x3430C0u;
    SET_GPR_U32(ctx, 31, 0x3430C8u);
    ctx->pc = 0x3430C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3430C0u;
            // 0x3430c4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (runtime->hasFunction(0x260808u)) {
        auto targetFn = runtime->lookupFunction(0x260808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3430C8u; }
        if (ctx->pc != 0x3430C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260808_0x260808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3430C8u; }
        if (ctx->pc != 0x3430C8u) { return; }
    }
    ctx->pc = 0x3430C8u;
label_3430c8:
    // 0x3430c8: 0x97a3001e  lhu         $v1, 0x1E($sp)
    ctx->pc = 0x3430c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x3430cc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3430ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3430d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3430D0u;
    {
        const bool branch_taken_0x3430d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3430d0) {
            ctx->pc = 0x3430D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3430D0u;
            // 0x3430d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3430F0u;
            goto label_3430f0;
        }
    }
    ctx->pc = 0x3430D8u;
    // 0x3430d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3430d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3430dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3430DCu;
    {
        const bool branch_taken_0x3430dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3430dc) {
            ctx->pc = 0x3430ECu;
            goto label_3430ec;
        }
    }
    ctx->pc = 0x3430E4u;
    // 0x3430e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3430E4u;
    {
        const bool branch_taken_0x3430e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3430E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3430E4u;
            // 0x3430e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430e4) {
            ctx->pc = 0x3430F0u;
            goto label_3430f0;
        }
    }
    ctx->pc = 0x3430ECu;
label_3430ec:
    // 0x3430ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3430ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430f0:
    // 0x3430f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3430f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3430f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3430F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3430F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3430F4u;
            // 0x3430f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3430FCu;
    // 0x3430fc: 0x0  nop
    ctx->pc = 0x3430fcu;
    // NOP
    ctx->pc = 0x343100u;
}
