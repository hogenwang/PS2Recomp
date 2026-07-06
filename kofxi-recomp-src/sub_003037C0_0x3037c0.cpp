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

// Function: sub_003037C0
// Address: 0x3037c0 - 0x303830
void sub_003037C0_0x3037c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003037C0_0x3037c0");
#endif

    ctx->pc = 0x3037c0u;

    // 0x3037c0: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3037c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3037c4: 0x94461530  lhu         $a2, 0x1530($v0)
    ctx->pc = 0x3037c4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5424)));
    // 0x3037c8: 0x28c10100  slti        $at, $a2, 0x100
    ctx->pc = 0x3037c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3037cc: 0x50200016  beql        $at, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3037CCu;
    {
        const bool branch_taken_0x3037cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3037cc) {
            ctx->pc = 0x3037D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3037CCu;
            // 0x3037d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303828u;
            goto label_303828;
        }
    }
    ctx->pc = 0x3037D4u;
    // 0x3037d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3037d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3037d8: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x3037d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3037dc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3037dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3037e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3037e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3037e4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3037E4u;
    {
        const bool branch_taken_0x3037e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3037e4) {
            ctx->pc = 0x303824u;
            goto label_303824;
        }
    }
    ctx->pc = 0x3037ECu;
    // 0x3037ec: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3037ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3037f0: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x3037f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3037f4: 0x24631540  addiu       $v1, $v1, 0x1540
    ctx->pc = 0x3037f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5440));
    // 0x3037f8: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3037f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3037fc: 0x24421544  addiu       $v0, $v0, 0x1544
    ctx->pc = 0x3037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5444));
    // 0x303800: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x303800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x303804: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x303804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x303808: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x303808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30380c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x30380cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x303810: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x303814: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x303814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x303818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30381c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30381Cu;
    {
        const bool branch_taken_0x30381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30381Cu;
        // 0x303820: 0xa4661530  sh          $a2, 0x1530($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 5424), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30381c) {
            ctx->pc = 0x303828u;
            goto label_303828;
        }
    }
    ctx->pc = 0x303824u;
label_303824:
    // 0x303824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303828:
    // 0x303828: 0x3e00008  jr          $ra
    ctx->pc = 0x303828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303830u;
}
