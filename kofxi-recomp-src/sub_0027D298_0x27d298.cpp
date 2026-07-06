#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D298
// Address: 0x27d298 - 0x27d318
void sub_0027D298_0x27d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D298_0x27d298");
#endif

    switch (ctx->pc) {
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d300u: goto label_27d300;
        case 0x27d308u: goto label_27d308;
        case 0x27d310u: goto label_27d310;
        default: break;
    }

    ctx->pc = 0x27d298u;

    // 0x27d298: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x27d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x27d29c: 0x2c82007d  sltiu       $v0, $a0, 0x7D
    ctx->pc = 0x27d29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x27d2a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27D2A0u;
    {
        const bool branch_taken_0x27d2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d2a0) {
            ctx->pc = 0x27D310u;
            goto label_27d310;
        }
    }
    ctx->pc = 0x27D2A8u;
    // 0x27d2a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27d2ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27d2b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d2b4: 0x8c63a040  lw          $v1, -0x5FC0($v1)
    ctx->pc = 0x27d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942784)));
    // 0x27d2b8: 0x600008  jr          $v1
    ctx->pc = 0x27D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D2C0u: goto label_27d2c0;
            case 0x27D2C8u: goto label_27d2c8;
            case 0x27D2D0u: goto label_27d2d0;
            case 0x27D2D8u: goto label_27d2d8;
            case 0x27D2E0u: goto label_27d2e0;
            case 0x27D2E8u: goto label_27d2e8;
            case 0x27D2F0u: goto label_27d2f0;
            case 0x27D2F8u: goto label_27d2f8;
            case 0x27D300u: goto label_27d300;
            case 0x27D308u: goto label_27d308;
            case 0x27D310u: goto label_27d310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D2C0u;
label_27d2c0:
    // 0x27d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2C0u;
            // 0x27d2c4: 0x2402fd97  addiu       $v0, $zero, -0x269 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966679));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2C8u;
label_27d2c8:
    // 0x27d2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2C8u;
            // 0x27d2cc: 0x2402fda7  addiu       $v0, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2D0u;
label_27d2d0:
    // 0x27d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2D0u;
            // 0x27d2d4: 0x2402fd93  addiu       $v0, $zero, -0x26D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966675));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2D8u;
label_27d2d8:
    // 0x27d2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2D8u;
            // 0x27d2dc: 0x2402fd90  addiu       $v0, $zero, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2E0u;
label_27d2e0:
    // 0x27d2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2E0u;
            // 0x27d2e4: 0x2402fd98  addiu       $v0, $zero, -0x268 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2E8u;
label_27d2e8:
    // 0x27d2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2E8u;
            // 0x27d2ec: 0x2402fd94  addiu       $v0, $zero, -0x26C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966676));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2F0u;
label_27d2f0:
    // 0x27d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2F0u;
            // 0x27d2f4: 0x2402fd96  addiu       $v0, $zero, -0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966678));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D2F8u;
label_27d2f8:
    // 0x27d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2F8u;
            // 0x27d2fc: 0x2402fd8e  addiu       $v0, $zero, -0x272 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966670));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D300u;
label_27d300:
    // 0x27d300: 0x3e00008  jr          $ra
    ctx->pc = 0x27D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D300u;
            // 0x27d304: 0x2402fd95  addiu       $v0, $zero, -0x26B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966677));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D308u;
label_27d308:
    // 0x27d308: 0x3e00008  jr          $ra
    ctx->pc = 0x27D308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D308u;
            // 0x27d30c: 0x2402fd8f  addiu       $v0, $zero, -0x271 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966671));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D310u;
label_27d310:
    // 0x27d310: 0x3e00008  jr          $ra
    ctx->pc = 0x27D310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D310u;
            // 0x27d314: 0x2402fd8f  addiu       $v0, $zero, -0x271 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966671));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D318u;
    ctx->pc = 0x27d318u;
}
