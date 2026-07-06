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

// Function: sub_001527B0
// Address: 0x1527b0 - 0x152810
void sub_001527B0_0x1527b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001527B0_0x1527b0");
#endif

    ctx->pc = 0x1527b0u;

    // 0x1527b0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1527B0u;
    {
        const bool branch_taken_0x1527b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527b0) {
            ctx->pc = 0x1527E4u;
            goto label_1527e4;
        }
    }
    ctx->pc = 0x1527B8u;
    // 0x1527b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1527b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1527bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1527BCu;
    {
        const bool branch_taken_0x1527bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1527bc) {
            ctx->pc = 0x1527CCu;
            goto label_1527cc;
        }
    }
    ctx->pc = 0x1527C4u;
    // 0x1527c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1527C4u;
    {
        const bool branch_taken_0x1527c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527c4) {
            ctx->pc = 0x1527F8u;
            goto label_1527f8;
        }
    }
    ctx->pc = 0x1527CCu;
label_1527cc:
    // 0x1527cc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1527ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1527d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1527d4: 0x9484f348  lhu         $a0, -0xCB8($a0)
    ctx->pc = 0x1527d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294964040)));
    // 0x1527d8: 0x3084fffd  andi        $a0, $a0, 0xFFFD
    ctx->pc = 0x1527d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
    // 0x1527dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1527DCu;
    {
        const bool branch_taken_0x1527dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527DCu;
        // 0x1527e0: 0xa464f348  sh          $a0, -0xCB8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294964040), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527dc) {
            ctx->pc = 0x1527F8u;
            goto label_1527f8;
        }
    }
    ctx->pc = 0x1527E4u;
label_1527e4:
    // 0x1527e4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1527e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1527e8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1527e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1527ec: 0x9484f348  lhu         $a0, -0xCB8($a0)
    ctx->pc = 0x1527ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294964040)));
    // 0x1527f0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1527f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1527f4: 0xa464f348  sh          $a0, -0xCB8($v1)
    ctx->pc = 0x1527f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964040), (uint16_t)GPR_U32(ctx, 4));
label_1527f8:
    // 0x1527f8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1527f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1527fc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152800: 0x9484f348  lhu         $a0, -0xCB8($a0)
    ctx->pc = 0x152800u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294964040)));
    // 0x152804: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x152804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x152808: 0x3e00008  jr          $ra
    ctx->pc = 0x152808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152808u;
        // 0x15280c: 0xa464f348  sh          $a0, -0xCB8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294964040), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152810u;
}
