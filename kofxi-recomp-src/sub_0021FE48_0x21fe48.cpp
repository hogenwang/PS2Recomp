#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FE48
// Address: 0x21fe48 - 0x21fe80
void sub_0021FE48_0x21fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FE48_0x21fe48");
#endif

    switch (ctx->pc) {
        case 0x21fe6cu: goto label_21fe6c;
        default: break;
    }

    ctx->pc = 0x21fe48u;

    // 0x21fe48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fe4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fe50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21fe54: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21fe54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21fe58: 0x8e0fca14  lw          $t7, -0x35EC($s0)
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953492)));
    // 0x21fe5c: 0x19e00003  blez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE5Cu;
    {
        const bool branch_taken_0x21fe5c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x21FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE5Cu;
            // 0x21fe60: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe5c) {
            ctx->pc = 0x21FE6Cu;
            goto label_21fe6c;
        }
    }
    ctx->pc = 0x21FE64u;
    // 0x21fe64: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE6Cu; }
        if (ctx->pc != 0x21FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE6Cu; }
        if (ctx->pc != 0x21FE6Cu) { return; }
    }
    ctx->pc = 0x21FE6Cu;
label_21fe6c:
    // 0x21fe6c: 0xae00ca14  sw          $zero, -0x35EC($s0)
    ctx->pc = 0x21fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953492), GPR_U32(ctx, 0));
    // 0x21fe70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21fe70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fe74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fe74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe78: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE78u;
            // 0x21fe7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FE80u;
    ctx->pc = 0x21fe80u;
}
