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

// Function: sub_002E6AE8
// Address: 0x2e6ae8 - 0x2e6b88
void sub_002E6AE8_0x2e6ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6AE8_0x2e6ae8");
#endif

    switch (ctx->pc) {
        case 0x2e6b34u: goto label_2e6b34;
        case 0x2e6b68u: goto label_2e6b68;
        default: break;
    }

    ctx->pc = 0x2e6ae8u;

    // 0x2e6ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e6ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e6aec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e6af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e6af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6afc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e6b00: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E6B00u;
    {
        const bool branch_taken_0x2e6b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B00u;
        // 0x2e6b04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b00) {
            ctx->pc = 0x2E6B70u;
            goto label_2e6b70;
        }
    }
    ctx->pc = 0x2E6B08u;
    // 0x2e6b08: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6B08u;
    {
        const bool branch_taken_0x2e6b08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B08u;
        // 0x2e6b0c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b08) {
            ctx->pc = 0x2E6B38u;
            goto label_2e6b38;
        }
    }
    ctx->pc = 0x2E6B10u;
    // 0x2e6b10: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2e6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e6b14: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2e6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2e6b18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e6b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e6b1c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e6b20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e6b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e6b24: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E6B24u;
    {
        const bool branch_taken_0x2e6b24 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B24u;
        // 0x2e6b28: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b24) {
            ctx->pc = 0x2E6B70u;
            goto label_2e6b70;
        }
    }
    ctx->pc = 0x2E6B2Cu;
    // 0x2e6b2c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E6B34u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2E6B2Cu, 0x2E6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B34u;
label_2e6b34:
    // 0x2e6b34: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e6b38:
    // 0x2e6b38: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2e6b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e6b3c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2e6b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e6b40: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2e6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2e6b44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e6b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e6b48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e6b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6b4c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2e6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e6b50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6b54: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e6b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e6b5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e6b60: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E6B60u;
    SET_GPR_U32(ctx, 31, 0x2E6B68u);
    ctx->pc = 0x2E6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B60u;
    // 0x2e6b64: 0xac860038  sw          $a2, 0x38($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8568u, 0x2E6B60u, 0x2E6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B68u;
label_2e6b68:
    // 0x2e6b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6B68u;
    {
        const bool branch_taken_0x2e6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B68u;
        // 0x2e6b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b68) {
            ctx->pc = 0x2E6B74u;
            goto label_2e6b74;
        }
    }
    ctx->pc = 0x2E6B70u;
label_2e6b70:
    // 0x2e6b70: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_2e6b74:
    // 0x2e6b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e6b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6b78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e6b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B80u;
        // 0x2e6b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6B88u;
}
