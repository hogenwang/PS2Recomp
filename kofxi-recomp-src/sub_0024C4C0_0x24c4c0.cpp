#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C4C0
// Address: 0x24c4c0 - 0x24c4f8
void sub_0024C4C0_0x24c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C4C0_0x24c4c0");
#endif

    switch (ctx->pc) {
        case 0x24c4e4u: goto label_24c4e4;
        default: break;
    }

    ctx->pc = 0x24c4c0u;

    // 0x24c4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c4cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4d0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x24c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c4d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C4D4u;
    {
        const bool branch_taken_0x24c4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4D4u;
            // 0x24c4d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4d4) {
            ctx->pc = 0x24C4ECu;
            goto label_24c4ec;
        }
    }
    ctx->pc = 0x24C4DCu;
    // 0x24c4dc: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24C4DCu;
    SET_GPR_U32(ctx, 31, 0x24C4E4u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4E4u; }
        if (ctx->pc != 0x24C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4E4u; }
        if (ctx->pc != 0x24C4E4u) { return; }
    }
    ctx->pc = 0x24C4E4u;
label_24c4e4:
    // 0x24c4e4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x24c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x24c4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24c4ec:
    // 0x24c4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4F0u;
            // 0x24c4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C4F8u;
    ctx->pc = 0x24c4f8u;
}
