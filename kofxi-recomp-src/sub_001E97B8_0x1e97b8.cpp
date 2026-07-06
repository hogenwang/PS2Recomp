#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E97B8
// Address: 0x1e97b8 - 0x1e9808
void sub_001E97B8_0x1e97b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E97B8_0x1e97b8");
#endif

    switch (ctx->pc) {
        case 0x1e9800u: goto label_1e9800;
        default: break;
    }

    ctx->pc = 0x1e97b8u;

    // 0x1e97b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e97b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e97bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e97bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e97c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e97c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e97c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97c8: 0x24851078  addiu       $a1, $a0, 0x1078
    ctx->pc = 0x1e97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x1e97cc: 0x8c83205c  lw          $v1, 0x205C($a0)
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e97d0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1e97d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1e97d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E97D4u;
    {
        const bool branch_taken_0x1e97d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97D4u;
            // 0x1e97d8: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97d4) {
            ctx->pc = 0x1E97ECu;
            goto label_1e97ec;
        }
    }
    ctx->pc = 0x1E97DCu;
    // 0x1e97dc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1e97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1e97e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e97e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E97E4u;
    {
        const bool branch_taken_0x1e97e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E97E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97E4u;
            // 0x1e97e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97e4) {
            ctx->pc = 0x1E9800u;
            goto label_1e9800;
        }
    }
    ctx->pc = 0x1E97ECu;
label_1e97ec:
    // 0x1e97ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e97ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e97f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e97f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97f4: 0x807a614  j           func_1E9850
    ctx->pc = 0x1E97F4u;
    ctx->pc = 0x1E97F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97F4u;
            // 0x1e97f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9850u;
    {
        auto targetFn = runtime->lookupFunction(0x1E9850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E97FCu;
    // 0x1e97fc: 0x0  nop
    ctx->pc = 0x1e97fcu;
    // NOP
label_1e9800:
    // 0x1e9800: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9800u;
            // 0x1e9804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9808u;
    ctx->pc = 0x1e9808u;
}
