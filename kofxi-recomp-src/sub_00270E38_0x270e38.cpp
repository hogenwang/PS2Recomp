#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270E38
// Address: 0x270e38 - 0x270ea0
void sub_00270E38_0x270e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270E38_0x270e38");
#endif

    ctx->pc = 0x270e38u;

    // 0x270e38: 0x308effff  andi        $t6, $a0, 0xFFFF
    ctx->pc = 0x270e38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x270e3c: 0x47c3a  dsrl        $t7, $a0, 16
    ctx->pc = 0x270e3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) >> 16);
    // 0x270e40: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x270e40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x270e44: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x270e44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x270e48: 0x1ee1025  or          $v0, $t7, $t6
    ctx->pc = 0x270e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x270e4c: 0x3c0d00ff  lui         $t5, 0xFF
    ctx->pc = 0x270e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)255 << 16));
    // 0x270e50: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x270e50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x270e54: 0x35ad00ff  ori         $t5, $t5, 0xFF
    ctx->pc = 0x270e54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)255);
    // 0x270e58: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x270e58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x270e5c: 0x4d6824  and         $t5, $v0, $t5
    ctx->pc = 0x270e5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x270e60: 0x35efff00  ori         $t7, $t7, 0xFF00
    ctx->pc = 0x270e60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65280);
    // 0x270e64: 0xd6a38  dsll        $t5, $t5, 8
    ctx->pc = 0x270e64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 8);
    // 0x270e68: 0x4f7824  and         $t7, $v0, $t7
    ctx->pc = 0x270e68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x270e6c: 0x240e0f0f  addiu       $t6, $zero, 0xF0F
    ctx->pc = 0x270e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x270e70: 0xf7a3a  dsrl        $t7, $t7, 8
    ctx->pc = 0x270e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 8);
    // 0x270e74: 0xe7538  dsll        $t6, $t6, 20
    ctx->pc = 0x270e74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 20);
    // 0x270e78: 0x1ed1025  or          $v0, $t7, $t5
    ctx->pc = 0x270e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x270e7c: 0x35cef0f0  ori         $t6, $t6, 0xF0F0
    ctx->pc = 0x270e7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)61680);
    // 0x270e80: 0x3c0f0f0f  lui         $t7, 0xF0F
    ctx->pc = 0x270e80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)3855 << 16));
    // 0x270e84: 0x4e7024  and         $t6, $v0, $t6
    ctx->pc = 0x270e84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x270e88: 0x35ef0f0f  ori         $t7, $t7, 0xF0F
    ctx->pc = 0x270e88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)3855);
    // 0x270e8c: 0xe713a  dsrl        $t6, $t6, 4
    ctx->pc = 0x270e8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 4);
    // 0x270e90: 0x4f7824  and         $t7, $v0, $t7
    ctx->pc = 0x270e90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x270e94: 0xf7938  dsll        $t7, $t7, 4
    ctx->pc = 0x270e94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 4);
    // 0x270e98: 0x3e00008  jr          $ra
    ctx->pc = 0x270E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E98u;
            // 0x270e9c: 0x1cf1025  or          $v0, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270EA0u;
    ctx->pc = 0x270ea0u;
}
