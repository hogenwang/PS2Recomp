#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180070
// Address: 0x180070 - 0x1800d0
void sub_00180070_0x180070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180070_0x180070");
#endif

    ctx->pc = 0x180070u;

    // 0x180070: 0xac800530  sw          $zero, 0x530($a0)
    ctx->pc = 0x180070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 0));
    // 0x180074: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x180078: 0x8c850538  lw          $a1, 0x538($a0)
    ctx->pc = 0x180078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x18007c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x180080: 0xac830538  sw          $v1, 0x538($a0)
    ctx->pc = 0x180080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1336), GPR_U32(ctx, 3));
    // 0x180084: 0xa4800534  sh          $zero, 0x534($a0)
    ctx->pc = 0x180084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1332), (uint16_t)GPR_U32(ctx, 0));
    // 0x180088: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x18008c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x180090: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x180090u;
    {
        const bool branch_taken_0x180090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180090) {
            ctx->pc = 0x1800C0u;
            goto label_1800c0;
        }
    }
    ctx->pc = 0x180098u;
    // 0x180098: 0xa4800582  sh          $zero, 0x582($a0)
    ctx->pc = 0x180098u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x18009c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x18009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1800a0: 0x908604f0  lbu         $a2, 0x4F0($a0)
    ctx->pc = 0x1800a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x1800a4: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x1800a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1800a8: 0x30c600bf  andi        $a2, $a2, 0xBF
    ctx->pc = 0x1800a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)191);
    // 0x1800ac: 0xa08604f0  sb          $a2, 0x4F0($a0)
    ctx->pc = 0x1800acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1264), (uint8_t)GPR_U32(ctx, 6));
    // 0x1800b0: 0x8c860494  lw          $a2, 0x494($a0)
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1800b4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1800b8: 0xac850494  sw          $a1, 0x494($a0)
    ctx->pc = 0x1800b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 5));
    // 0x1800bc: 0xa48304ba  sh          $v1, 0x4BA($a0)
    ctx->pc = 0x1800bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1210), (uint16_t)GPR_U32(ctx, 3));
label_1800c0:
    // 0x1800c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1800C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1800C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1800C8u;
    // 0x1800c8: 0x0  nop
    ctx->pc = 0x1800c8u;
    // NOP
    // 0x1800cc: 0x0  nop
    ctx->pc = 0x1800ccu;
    // NOP
}
