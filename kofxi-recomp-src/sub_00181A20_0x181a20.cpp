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

// Function: sub_00181A20
// Address: 0x181a20 - 0x181ac0
void sub_00181A20_0x181a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181A20_0x181a20");
#endif

    ctx->pc = 0x181a20u;

    // 0x181a20: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x181a24: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x181a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x181a28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181a2c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x181A2Cu;
    {
        const bool branch_taken_0x181a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a2c) {
            ctx->pc = 0x181A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A2Cu;
            // 0x181a30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181AACu;
            goto label_181aac;
        }
    }
    ctx->pc = 0x181A34u;
    // 0x181a34: 0x8c85051c  lw          $a1, 0x51C($a0)
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x181a38: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x181A38u;
    {
        const bool branch_taken_0x181a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a38) {
            ctx->pc = 0x181AA8u;
            goto label_181aa8;
        }
    }
    ctx->pc = 0x181A40u;
    // 0x181a40: 0x8ca3049c  lw          $v1, 0x49C($a1)
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1180)));
    // 0x181a44: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x181a48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181a4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x181A4Cu;
    {
        const bool branch_taken_0x181a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a4c) {
            ctx->pc = 0x181AA8u;
            goto label_181aa8;
        }
    }
    ctx->pc = 0x181A54u;
    // 0x181a54: 0x9083008c  lbu         $v1, 0x8C($a0)
    ctx->pc = 0x181a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x181a58: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x181a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181a5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x181A5Cu;
    {
        const bool branch_taken_0x181a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a5c) {
            ctx->pc = 0x181A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A5Cu;
            // 0x181a60: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A70u;
            goto label_181a70;
        }
    }
    ctx->pc = 0x181A64u;
    // 0x181a64: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x181a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x181a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181A68u;
    {
        const bool branch_taken_0x181a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A68u;
        // 0x181a6c: 0xa082008c  sb          $v0, 0x8C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a68) {
            ctx->pc = 0x181A74u;
            goto label_181a74;
        }
    }
    ctx->pc = 0x181A70u;
label_181a70:
    // 0x181a70: 0xa082008c  sb          $v0, 0x8C($a0)
    ctx->pc = 0x181a70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 2));
label_181a74:
    // 0x181a74: 0x90a3008c  lbu         $v1, 0x8C($a1)
    ctx->pc = 0x181a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x181a78: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x181a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181a7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x181A7Cu;
    {
        const bool branch_taken_0x181a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a7c) {
            ctx->pc = 0x181A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A7Cu;
            // 0x181a80: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A90u;
            goto label_181a90;
        }
    }
    ctx->pc = 0x181A84u;
    // 0x181a84: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x181a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x181a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181A88u;
    {
        const bool branch_taken_0x181a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A88u;
        // 0x181a8c: 0xa0a2008c  sb          $v0, 0x8C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a88) {
            ctx->pc = 0x181A94u;
            goto label_181a94;
        }
    }
    ctx->pc = 0x181A90u;
label_181a90:
    // 0x181a90: 0xa0a2008c  sb          $v0, 0x8C($a1)
    ctx->pc = 0x181a90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 2));
label_181a94:
    // 0x181a94: 0x8ca3049c  lw          $v1, 0x49C($a1)
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1180)));
    // 0x181a98: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x181a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x181a9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181aa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181aa4: 0xaca2049c  sw          $v0, 0x49C($a1)
    ctx->pc = 0x181aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1180), GPR_U32(ctx, 2));
label_181aa8:
    // 0x181aa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181aac:
    // 0x181aac: 0x3e00008  jr          $ra
    ctx->pc = 0x181AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181AB4u;
    // 0x181ab4: 0x0  nop
    ctx->pc = 0x181ab4u;
    // NOP
    // 0x181ab8: 0x0  nop
    ctx->pc = 0x181ab8u;
    // NOP
    // 0x181abc: 0x0  nop
    ctx->pc = 0x181abcu;
    // NOP
}
