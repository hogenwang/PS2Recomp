#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4D20
// Address: 0x2f4d20 - 0x2f4d60
void sub_002F4D20_0x2f4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D20_0x2f4d20");
#endif

    switch (ctx->pc) {
        case 0x2f4d38u: goto label_2f4d38;
        default: break;
    }

    ctx->pc = 0x2f4d20u;

    // 0x2f4d20: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2f4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f4d24: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x2f4d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x2f4d28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4D28u;
    {
        const bool branch_taken_0x2f4d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D28u;
            // 0x2f4d2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d28) {
            ctx->pc = 0x2F4D38u;
            goto label_2f4d38;
        }
    }
    ctx->pc = 0x2F4D30u;
    // 0x2f4d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D30u;
            // 0x2f4d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4D38u;
label_2f4d38:
    // 0x2f4d38: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f4d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d40: 0x24830210  addiu       $v1, $a0, 0x210
    ctx->pc = 0x2f4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x2f4d44: 0xac860210  sw          $a2, 0x210($a0)
    ctx->pc = 0x2f4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 6));
    // 0x2f4d48: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x2f4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x2f4d4c: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2f4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x2f4d50: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2f4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2f4d54: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2f4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2f4d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D58u;
            // 0x2f4d5c: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4D60u;
    ctx->pc = 0x2f4d60u;
}
