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

// Function: sub_00261CD8
// Address: 0x261cd8 - 0x261d80
void sub_00261CD8_0x261cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261CD8_0x261cd8");
#endif

    switch (ctx->pc) {
        case 0x261ce8u: goto label_261ce8;
        case 0x261d08u: goto label_261d08;
        case 0x261d50u: goto label_261d50;
        default: break;
    }

    ctx->pc = 0x261cd8u;

    // 0x261cd8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x261cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ce0: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x261ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x261ce4: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
label_261ce8:
    // 0x261ce8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x261ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x261cec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x261CECu;
    {
        const bool branch_taken_0x261cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CECu;
        // 0x261cf0: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cec) {
            ctx->pc = 0x261D20u;
            goto label_261d20;
        }
    }
    ctx->pc = 0x261CF4u;
    // 0x261cf4: 0x8ce3d770  lw          $v1, -0x2890($a3)
    ctx->pc = 0x261cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956912)));
    // 0x261cf8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x261CF8u;
    {
        const bool branch_taken_0x261cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CF8u;
        // 0x261cfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cf8) {
            ctx->pc = 0x261D24u;
            goto label_261d24;
        }
    }
    ctx->pc = 0x261D00u;
    // 0x261d00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x261d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261d04: 0x0  nop
    ctx->pc = 0x261d04u;
    // NOP
label_261d08:
    // 0x261d08: 0x50a2fff7  beql        $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x261D08u;
    {
        const bool branch_taken_0x261d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x261d08) {
            ctx->pc = 0x261D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D08u;
            // 0x261d0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261ce8;
        }
    }
    ctx->pc = 0x261D10u;
    // 0x261d10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x261d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261d14: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x261D14u;
    {
        const bool branch_taken_0x261d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261d14) {
            ctx->pc = 0x261D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D14u;
            // 0x261d18: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261d08;
        }
    }
    ctx->pc = 0x261D1Cu;
    // 0x261d1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x261d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_261d20:
    // 0x261d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x261d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_261d24:
    // 0x261d24: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261D24u;
    {
        const bool branch_taken_0x261d24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x261d24) {
            ctx->pc = 0x261D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D24u;
            // 0x261d28: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D34u;
            goto label_261d34;
        }
    }
    ctx->pc = 0x261D2Cu;
    // 0x261d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x261D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D2Cu;
        // 0x261d30: 0x2402ffe5  addiu       $v0, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261D34u;
label_261d34:
    // 0x261d34: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x261d38: 0x8c62d770  lw          $v0, -0x2890($v1)
    ctx->pc = 0x261d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956912)));
    // 0x261d3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x261D3Cu;
    {
        const bool branch_taken_0x261d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261d3c) {
            ctx->pc = 0x261D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D3Cu;
            // 0x261d40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D50u;
            goto label_261d50;
        }
    }
    ctx->pc = 0x261D44u;
    // 0x261d44: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x261d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x261d48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x261D48u;
    {
        const bool branch_taken_0x261d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D48u;
        // 0x261d4c: 0xac64d770  sw          $a0, -0x2890($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956912), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d48) {
            ctx->pc = 0x261D78u;
            goto label_261d78;
        }
    }
    ctx->pc = 0x261D50u;
label_261d50:
    // 0x261d50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261d58: 0x0  nop
    ctx->pc = 0x261d58u;
    // NOP
    // 0x261d5c: 0x0  nop
    ctx->pc = 0x261d5cu;
    // NOP
    // 0x261d60: 0x0  nop
    ctx->pc = 0x261d60u;
    // NOP
    // 0x261d64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x261D64u;
    {
        const bool branch_taken_0x261d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261d64) {
            ctx->pc = 0x261D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261d50;
        }
    }
    ctx->pc = 0x261D6Cu;
    // 0x261d6c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x261d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x261d70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x261d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x261d74: 0x0  nop
    ctx->pc = 0x261d74u;
    // NOP
label_261d78:
    // 0x261d78: 0x3e00008  jr          $ra
    ctx->pc = 0x261D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D78u;
        // 0x261d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261D80u;
}
