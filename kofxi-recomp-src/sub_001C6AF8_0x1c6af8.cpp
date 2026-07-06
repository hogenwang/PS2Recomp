#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6AF8
// Address: 0x1c6af8 - 0x1c6b20
void sub_001C6AF8_0x1c6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AF8_0x1c6af8");
#endif

    switch (ctx->pc) {
        case 0x1c6b10u: goto label_1c6b10;
        default: break;
    }

    ctx->pc = 0x1c6af8u;

    // 0x1c6af8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6AF8u;
    {
        const bool branch_taken_0x1c6af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AF8u;
            // 0x1c6afc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6af8) {
            ctx->pc = 0x1C6B10u;
            goto label_1c6b10;
        }
    }
    ctx->pc = 0x1C6B00u;
    // 0x1c6b00: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c6b04: 0xac40f0a8  sw          $zero, -0xF58($v0)
    ctx->pc = 0x1c6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963368), GPR_U32(ctx, 0));
    // 0x1c6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B08u;
            // 0x1c6b0c: 0xac60f0ac  sw          $zero, -0xF54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6B10u;
label_1c6b10:
    // 0x1c6b10: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c6b14: 0xac44f0a8  sw          $a0, -0xF58($v0)
    ctx->pc = 0x1c6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963368), GPR_U32(ctx, 4));
    // 0x1c6b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B18u;
            // 0x1c6b1c: 0xac65f0ac  sw          $a1, -0xF54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963372), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6B20u;
    ctx->pc = 0x1c6b20u;
}
