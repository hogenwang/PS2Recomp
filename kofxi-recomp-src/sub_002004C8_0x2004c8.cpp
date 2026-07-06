#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002004C8
// Address: 0x2004c8 - 0x200510
void sub_002004C8_0x2004c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002004C8_0x2004c8");
#endif

    ctx->pc = 0x2004c8u;

    // 0x2004c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2004c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004cc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2004ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2004d0: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x2004d4: 0x24a4ff20  addiu       $a0, $a1, -0xE0
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x2004d8: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x2004d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2004dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2004DCu;
    {
        const bool branch_taken_0x2004dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2004E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004DCu;
            // 0x2004e0: 0x2c840010  sltiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004dc) {
            ctx->pc = 0x200504u;
            goto label_200504;
        }
    }
    ctx->pc = 0x2004E4u;
    // 0x2004e4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2004E4u;
    {
        const bool branch_taken_0x2004e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2004E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004E4u;
            // 0x2004e8: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004e4) {
            ctx->pc = 0x200504u;
            goto label_200504;
        }
    }
    ctx->pc = 0x2004ECu;
    // 0x2004ec: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x2004f0: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2004F0u;
    {
        const bool branch_taken_0x2004f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2004F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004F0u;
            // 0x2004f4: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004f0) {
            ctx->pc = 0x200504u;
            goto label_200504;
        }
    }
    ctx->pc = 0x2004F8u;
    // 0x2004f8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2004F8u;
    {
        const bool branch_taken_0x2004f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2004FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004F8u;
            // 0x2004fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004f8) {
            ctx->pc = 0x200504u;
            goto label_200504;
        }
    }
    ctx->pc = 0x200500u;
    // 0x200500: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_200504:
    // 0x200504: 0x3e00008  jr          $ra
    ctx->pc = 0x200504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20050Cu;
    // 0x20050c: 0x0  nop
    ctx->pc = 0x20050cu;
    // NOP
    ctx->pc = 0x200510u;
}
