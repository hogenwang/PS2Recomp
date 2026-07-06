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

// Function: sub_001806C0
// Address: 0x1806c0 - 0x180740
void sub_001806C0_0x1806c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806C0_0x1806c0");
#endif

    switch (ctx->pc) {
        case 0x1806e0u: goto label_1806e0;
        default: break;
    }

    ctx->pc = 0x1806c0u;

    // 0x1806c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1806c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1806c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1806c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1806c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1806cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1806ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1806d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1806d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1806d4: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1806d8: 0xc062804  jal         func_18A010
    ctx->pc = 0x1806D8u;
    SET_GPR_U32(ctx, 31, 0x1806E0u);
    ctx->pc = 0x1806DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806D8u;
    // 0x1806dc: 0x26110520  addiu       $s1, $s0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x1806D8u, 0x1806E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1806E0u;
label_1806e0:
    // 0x1806e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1806e4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1806e8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1806e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1806ec: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x1806ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1806f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1806f4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1806f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1806f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1806f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1806fc: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x180700: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x180700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x180704: 0xa223000c  sb          $v1, 0xC($s1)
    ctx->pc = 0x180704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x180708: 0x8e030518  lw          $v1, 0x518($s0)
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x18070c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18070Cu;
    {
        const bool branch_taken_0x18070c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18070c) {
            ctx->pc = 0x180710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18070Cu;
            // 0x180710: 0x8e03051c  lw          $v1, 0x51C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18071Cu;
            goto label_18071c;
        }
    }
    ctx->pc = 0x180714u;
    // 0x180714: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x180714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x180718: 0x8e03051c  lw          $v1, 0x51C($s0)
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1308)));
label_18071c:
    // 0x18071c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18071Cu;
    {
        const bool branch_taken_0x18071c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18071c) {
            ctx->pc = 0x180720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18071Cu;
            // 0x180720: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18072Cu;
            goto label_18072c;
        }
    }
    ctx->pc = 0x180724u;
    // 0x180724: 0xae02051c  sw          $v0, 0x51C($s0)
    ctx->pc = 0x180724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 2));
    // 0x180728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18072c:
    // 0x18072c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18072cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180734: 0x3e00008  jr          $ra
    ctx->pc = 0x180734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180734u;
        // 0x180738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18073Cu;
    // 0x18073c: 0x0  nop
    ctx->pc = 0x18073cu;
    // NOP
}
