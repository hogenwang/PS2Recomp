#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E0A8
// Address: 0x28e0a8 - 0x28e0d8
void sub_0028E0A8_0x28e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E0A8_0x28e0a8");
#endif

    switch (ctx->pc) {
        case 0x28e0bcu: goto label_28e0bc;
        default: break;
    }

    ctx->pc = 0x28e0a8u;

    // 0x28e0a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E0A8u;
    {
        const bool branch_taken_0x28e0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0A8u;
            // 0x28e0ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0a8) {
            ctx->pc = 0x28E0C0u;
            goto label_28e0c0;
        }
    }
    ctx->pc = 0x28E0B0u;
    // 0x28e0b0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E0B0u;
    {
        const bool branch_taken_0x28e0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0B0u;
            // 0x28e0b4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0b0) {
            ctx->pc = 0x28E0CCu;
            goto label_28e0cc;
        }
    }
    ctx->pc = 0x28E0B8u;
    // 0x28e0b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_28e0bc:
    if (ctx->pc == 0x28E0BCu) {
        ctx->pc = 0x28E0BCu;
            // 0x28e0bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E0C0u;
        goto label_28e0c0;
    }
    ctx->pc = 0x28E0B8u;
    {
        const bool branch_taken_0x28e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0B8u;
            // 0x28e0bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0b8) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28E0C0u;
label_28e0c0:
    // 0x28e0c0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x28e0c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E0C4u;
    {
        const bool branch_taken_0x28e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0C4u;
            // 0x28e0c8: 0xac4545b8  sw          $a1, 0x45B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17848), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0c4) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28E0CCu;
label_28e0cc:
    // 0x28e0cc: 0xac4545bc  sw          $a1, 0x45BC($v0)
    ctx->pc = 0x28e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17852), GPR_U32(ctx, 5));
label_28e0d0:
    // 0x28e0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28E0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0D0u;
            // 0x28e0d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E0D8u;
    ctx->pc = 0x28e0d8u;
}
