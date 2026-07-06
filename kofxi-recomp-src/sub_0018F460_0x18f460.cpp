#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F460
// Address: 0x18f460 - 0x18f4b0
void sub_0018F460_0x18f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F460_0x18f460");
#endif

    switch (ctx->pc) {
        case 0x18f46cu: goto label_18f46c;
        default: break;
    }

    ctx->pc = 0x18f460u;

    // 0x18f460: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f468: 0x2463bb70  addiu       $v1, $v1, -0x4490
    ctx->pc = 0x18f468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949744));
label_18f46c:
    // 0x18f46c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18f470: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18f474: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18f474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18f478: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x18f478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18f47c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x18f480: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18f480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x18f484: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x18f484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x18f488: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x18f488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x18f48c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x18f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x18f490: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x18f490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x18f494: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18F494u;
    {
        const bool branch_taken_0x18f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F494u;
            // 0x18f498: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f494) {
            ctx->pc = 0x18F46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f46c;
        }
    }
    ctx->pc = 0x18F49Cu;
    // 0x18f49c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F49Cu;
            // 0x18f4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F4A4u;
    // 0x18f4a4: 0x0  nop
    ctx->pc = 0x18f4a4u;
    // NOP
    // 0x18f4a8: 0x0  nop
    ctx->pc = 0x18f4a8u;
    // NOP
    // 0x18f4ac: 0x0  nop
    ctx->pc = 0x18f4acu;
    // NOP
    ctx->pc = 0x18f4b0u;
}
