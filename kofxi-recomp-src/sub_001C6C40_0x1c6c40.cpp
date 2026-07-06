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

// Function: sub_001C6C40
// Address: 0x1c6c40 - 0x1c6e28
void sub_001C6C40_0x1c6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6C40_0x1c6c40");
#endif

    switch (ctx->pc) {
        case 0x1c6c80u: goto label_1c6c80;
        case 0x1c6c94u: goto label_1c6c94;
        case 0x1c6cb0u: goto label_1c6cb0;
        case 0x1c6cb8u: goto label_1c6cb8;
        case 0x1c6d00u: goto label_1c6d00;
        case 0x1c6d38u: goto label_1c6d38;
        case 0x1c6d40u: goto label_1c6d40;
        case 0x1c6d4cu: goto label_1c6d4c;
        case 0x1c6d60u: goto label_1c6d60;
        case 0x1c6dc0u: goto label_1c6dc0;
        case 0x1c6dccu: goto label_1c6dcc;
        case 0x1c6decu: goto label_1c6dec;
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6e00u: goto label_1c6e00;
        default: break;
    }

    ctx->pc = 0x1c6c40u;

    // 0x1c6c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6c44: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c6c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c4c: 0x2463f1c8  addiu       $v1, $v1, -0xE38
    ctx->pc = 0x1c6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963656));
    // 0x1c6c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6c54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6c60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6c64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c6c68: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6C68u;
    {
        const bool branch_taken_0x1c6c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C68u;
        // 0x1c6c6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c68) {
            ctx->pc = 0x1C6CE0u;
            goto label_1c6ce0;
        }
    }
    ctx->pc = 0x1C6C70u;
    // 0x1c6c70: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c6c70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1c6c74: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c6c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c78: 0x2670f1d0  addiu       $s0, $s3, -0xE30
    ctx->pc = 0x1c6c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1c6c7c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1c6c80:
    // 0x1c6c80: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6c84: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6C84u;
    {
        const bool branch_taken_0x1c6c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c6c84) {
            ctx->pc = 0x1C6C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6C84u;
            // 0x1c6c88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C98u;
            goto label_1c6c98;
        }
    }
    ctx->pc = 0x1C6C8Cu;
    // 0x1c6c8c: 0xc07179a  jal         func_1C5E68
    ctx->pc = 0x1C6C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C94u);
    ctx->pc = 0x1C6C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C8Cu;
    // 0x1c6c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5E68u, 0x1C6C8Cu, 0x1C6C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C94u;
label_1c6c94:
    // 0x1c6c94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c6c98:
    // 0x1c6c98: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C6C98u;
    {
        const bool branch_taken_0x1c6c98 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C98u;
        // 0x1c6c9c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c98) {
            ctx->pc = 0x1C6C80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6c80;
        }
    }
    ctx->pc = 0x1C6CA0u;
    // 0x1c6ca0: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1c6ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ca8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C6CA8u;
    SET_GPR_U32(ctx, 31, 0x1C6CB0u);
    ctx->pc = 0x1C6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CA8u;
    // 0x1c6cac: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C6CA8u, 0x1C6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CB0u;
label_1c6cb0:
    // 0x1c6cb0: 0xc071aee  jal         func_1C6BB8
    ctx->pc = 0x1C6CB0u;
    SET_GPR_U32(ctx, 31, 0x1C6CB8u);
    ctx->pc = 0x1C6BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BB8u, 0x1C6CB0u, 0x1C6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CB8u;
label_1c6cb8:
    // 0x1c6cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6cbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6cd4: 0x8071abe  j           func_1C6AF8
    ctx->pc = 0x1C6CD4u;
    ctx->pc = 0x1C6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CD4u;
    // 0x1c6cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AF8u;
    sub_001C6AF8_0x1c6af8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6CDCu;
    // 0x1c6cdc: 0x0  nop
    ctx->pc = 0x1c6cdcu;
    // NOP
label_1c6ce0:
    // 0x1c6ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6cec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF4u;
        // 0x1c6cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6CFCu;
    // 0x1c6cfc: 0x0  nop
    ctx->pc = 0x1c6cfcu;
    // NOP
label_1c6d00:
    // 0x1c6d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6d10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6d14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6d18: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6d1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6d20: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c6d24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c6d28: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C6D28u;
    {
        const bool branch_taken_0x1c6d28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D28u;
        // 0x1c6d2c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d28) {
            ctx->pc = 0x1C6E10u;
            goto label_1c6e10;
        }
    }
    ctx->pc = 0x1C6D30u;
    // 0x1c6d30: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1C6D30u;
    SET_GPR_U32(ctx, 31, 0x1C6D38u);
    ctx->pc = 0x1C6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D30u;
    // 0x1c6d34: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E98u, 0x1C6D30u, 0x1C6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D38u;
label_1c6d38:
    // 0x1c6d38: 0xc06dada  jal         func_1B6B68
    ctx->pc = 0x1C6D38u;
    SET_GPR_U32(ctx, 31, 0x1C6D40u);
    ctx->pc = 0x1C6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D38u;
    // 0x1c6d3c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1C6D38u, 0x1C6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D40u;
label_1c6d40:
    // 0x1c6d40: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1c6d40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6d44: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C6D44u;
    SET_GPR_U32(ctx, 31, 0x1C6D4Cu);
    ctx->pc = 0x1C6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D44u;
    // 0x1c6d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C6D44u, 0x1C6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D4Cu;
label_1c6d4c:
    // 0x1c6d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c6d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d54: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D54u;
    {
        const bool branch_taken_0x1c6d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D54u;
        // 0x1c6d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d54) {
            ctx->pc = 0x1C6D7Cu;
            goto label_1c6d7c;
        }
    }
    ctx->pc = 0x1C6D5Cu;
    // 0x1c6d5c: 0x0  nop
    ctx->pc = 0x1c6d5cu;
    // NOP
label_1c6d60:
    // 0x1c6d60: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1c6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1c6d64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c6d68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c6d68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6d6c: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x1c6d6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c6d70: 0x0  nop
    ctx->pc = 0x1c6d70u;
    // NOP
    // 0x1c6d74: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6D74u;
    {
        const bool branch_taken_0x1c6d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D74u;
        // 0x1c6d78: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d74) {
            ctx->pc = 0x1C6D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6d60;
        }
    }
    ctx->pc = 0x1C6D7Cu;
label_1c6d7c:
    // 0x1c6d7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6d80: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D80u;
    {
        const bool branch_taken_0x1c6d80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D80u;
        // 0x1c6d84: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d80) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6D88u;
    // 0x1c6d88: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c6d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d90: 0x2484aa20  addiu       $a0, $a0, -0x55E0
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945312));
    // 0x1c6d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6d98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6d9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6da0: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C6DA0u;
    ctx->pc = 0x1C6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DA0u;
    // 0x1c6da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6dac: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1c6dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c6db0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1c6db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6db4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6db8: 0xc06da76  jal         func_1B69D8
    ctx->pc = 0x1C6DB8u;
    SET_GPR_U32(ctx, 31, 0x1C6DC0u);
    ctx->pc = 0x1C6DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DB8u;
    // 0x1c6dbc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B69D8u, 0x1C6DB8u, 0x1C6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DC0u;
label_1c6dc0:
    // 0x1c6dc0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6dc4: 0xc06dc04  jal         func_1B7010
    ctx->pc = 0x1C6DC4u;
    SET_GPR_U32(ctx, 31, 0x1C6DCCu);
    ctx->pc = 0x1C6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DC4u;
    // 0x1c6dc8: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7010u, 0x1C6DC4u, 0x1C6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DCCu;
label_1c6dcc:
    // 0x1c6dcc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c6dd0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6dd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1c6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c6dd8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1c6dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1c6ddc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c6ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6de0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1c6de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c6de4: 0xc06de5a  jal         func_1B7968
    ctx->pc = 0x1C6DE4u;
    SET_GPR_U32(ctx, 31, 0x1C6DECu);
    ctx->pc = 0x1C6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DE4u;
    // 0x1c6de8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7968u, 0x1C6DE4u, 0x1C6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DECu;
label_1c6dec:
    // 0x1c6dec: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6df0: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1C6DF0u;
    SET_GPR_U32(ctx, 31, 0x1C6DF8u);
    ctx->pc = 0x1C6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DF0u;
    // 0x1c6df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1C6DF0u, 0x1C6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DF8u;
label_1c6df8:
    // 0x1c6df8: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1C6DF8u;
    SET_GPR_U32(ctx, 31, 0x1C6E00u);
    ctx->pc = 0x1C6DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DF8u;
    // 0x1c6dfc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D90u, 0x1C6DF8u, 0x1C6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E00u;
label_1c6e00:
    // 0x1c6e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6e08: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1c6e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6e0c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1c6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1c6e10:
    // 0x1c6e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6e18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E20u;
        // 0x1c6e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6E28u;
}
