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

// Function: sub_0022D850
// Address: 0x22d850 - 0x22d8b0
void sub_0022D850_0x22d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D850_0x22d850");
#endif

    ctx->pc = 0x22d850u;

    // 0x22d850: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x22d850u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x22d854: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x22d858: 0x8d04f9f8  lw          $a0, -0x608($t0)
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965752)));
    // 0x22d85c: 0x3463f31d  ori         $v1, $v1, 0xF31D
    ctx->pc = 0x22d85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62237);
    // 0x22d860: 0x240641a7  addiu       $a2, $zero, 0x41A7
    ctx->pc = 0x22d860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16807));
    // 0x22d864: 0x24070b14  addiu       $a3, $zero, 0xB14
    ctx->pc = 0x22d864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2836));
    // 0x22d868: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22d868u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22d86c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22d870: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22D870u;
    {
        const bool branch_taken_0x22d870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d870) {
            ctx->pc = 0x22D874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D870u;
            // 0x22d874: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D878u;
            goto label_22d878;
        }
    }
    ctx->pc = 0x22D878u;
label_22d878:
    // 0x22d878: 0x3442f31d  ori         $v0, $v0, 0xF31D
    ctx->pc = 0x22d878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62237);
    // 0x22d87c: 0x2012  mflo        $a0
    ctx->pc = 0x22d87cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x22d880: 0x2810  mfhi        $a1
    ctx->pc = 0x22d880u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22d884: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x22d884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22d888: 0x70872018  mult1       $a0, $a0, $a3
    ctx->pc = 0x22d888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22d88c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x22d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22d890: 0x5ca00005  bgtzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D890u;
    {
        const bool branch_taken_0x22d890 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x22d890) {
            ctx->pc = 0x22D894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D890u;
            // 0x22d894: 0xad05f9f8  sw          $a1, -0x608($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 4294965752), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8A8u;
            goto label_22d8a8;
        }
    }
    ctx->pc = 0x22D898u;
    // 0x22d898: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x22d89c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d8a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d8a4: 0xad05f9f8  sw          $a1, -0x608($t0)
    ctx->pc = 0x22d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294965752), GPR_U32(ctx, 5));
label_22d8a8:
    // 0x22d8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8A8u;
        // 0x22d8ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D8B0u;
}
