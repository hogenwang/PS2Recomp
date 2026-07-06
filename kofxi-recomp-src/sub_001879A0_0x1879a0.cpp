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

// Function: sub_001879A0
// Address: 0x1879a0 - 0x187a20
void sub_001879A0_0x1879a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001879A0_0x1879a0");
#endif

    ctx->pc = 0x1879a0u;

    // 0x1879a0: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x1879a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x1879a4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1879a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1879a8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1879A8u;
    {
        const bool branch_taken_0x1879a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879A8u;
        // 0x1879ac: 0x248704a6  addiu       $a3, $a0, 0x4A6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879a8) {
            ctx->pc = 0x187A18u;
            goto label_187a18;
        }
    }
    ctx->pc = 0x1879B0u;
    // 0x1879b0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1879b4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1879b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1879b8: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x1879b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x1879bc: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x1879bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1879c0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1879c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1879c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1879C4u;
    {
        const bool branch_taken_0x1879c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1879c4) {
            ctx->pc = 0x187A18u;
            goto label_187a18;
        }
    }
    ctx->pc = 0x1879CCu;
    // 0x1879cc: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x1879d0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1879d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1879d4: 0xac83049c  sw          $v1, 0x49C($a0)
    ctx->pc = 0x1879d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
    // 0x1879d8: 0x84e30014  lh          $v1, 0x14($a3)
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1879dc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1879DCu;
    {
        const bool branch_taken_0x1879dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1879dc) {
            ctx->pc = 0x1879E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1879DCu;
            // 0x1879e0: 0x908304f0  lbu         $v1, 0x4F0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1879F0u;
            goto label_1879f0;
        }
    }
    ctx->pc = 0x1879E4u;
    // 0x1879e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1879e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1879e8: 0xa4e30014  sh          $v1, 0x14($a3)
    ctx->pc = 0x1879e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1879ec: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x1879ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
label_1879f0:
    // 0x1879f0: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x1879f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x1879f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1879F4u;
    {
        const bool branch_taken_0x1879f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1879f4) {
            ctx->pc = 0x187A18u;
            goto label_187a18;
        }
    }
    ctx->pc = 0x1879FCu;
    // 0x1879fc: 0x84e30014  lh          $v1, 0x14($a3)
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x187a00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187A00u;
    {
        const bool branch_taken_0x187a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187a00) {
            ctx->pc = 0x187A18u;
            goto label_187a18;
        }
    }
    ctx->pc = 0x187A08u;
    // 0x187a08: 0x8c85049c  lw          $a1, 0x49C($a0)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x187a0c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x187a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x187a10: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x187a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x187a14: 0xac83049c  sw          $v1, 0x49C($a0)
    ctx->pc = 0x187a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
label_187a18:
    // 0x187a18: 0x3e00008  jr          $ra
    ctx->pc = 0x187A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187A20u;
}
