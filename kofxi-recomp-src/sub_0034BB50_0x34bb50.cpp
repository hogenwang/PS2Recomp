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

// Function: sub_0034BB50
// Address: 0x34bb50 - 0x34bc30
void sub_0034BB50_0x34bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BB50_0x34bb50");
#endif

    switch (ctx->pc) {
        case 0x34bb88u: goto label_34bb88;
        case 0x34bbb8u: goto label_34bbb8;
        case 0x34bbe4u: goto label_34bbe4;
        default: break;
    }

    ctx->pc = 0x34bb50u;

    // 0x34bb50: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x34bb50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bb54: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BB54u;
    {
        const bool branch_taken_0x34bb54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb54) {
            ctx->pc = 0x34BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BB54u;
            // 0x34bb58: 0x81030000  lb          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BB64u;
            goto label_34bb64;
        }
    }
    ctx->pc = 0x34BB5Cu;
    // 0x34bb5c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x34BB5Cu;
    {
        const bool branch_taken_0x34bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB5Cu;
        // 0x34bb60: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb5c) {
            ctx->pc = 0x34BC20u;
            goto label_34bc20;
        }
    }
    ctx->pc = 0x34BB64u;
label_34bb64:
    // 0x34bb64: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BB64u;
    {
        const bool branch_taken_0x34bb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb64) {
            ctx->pc = 0x34BB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BB64u;
            // 0x34bb68: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BB74u;
            goto label_34bb74;
        }
    }
    ctx->pc = 0x34BB6Cu;
    // 0x34bb6c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x34BB6Cu;
    {
        const bool branch_taken_0x34bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB6Cu;
        // 0x34bb70: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb6c) {
            ctx->pc = 0x34BC20u;
            goto label_34bc20;
        }
    }
    ctx->pc = 0x34BB74u;
label_34bb74:
    // 0x34bb74: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34bb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34bb78: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x34bb78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x34bb7c: 0x1466000a  bne         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x34BB7Cu;
    {
        const bool branch_taken_0x34bb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x34bb7c) {
            ctx->pc = 0x34BBA8u;
            goto label_34bba8;
        }
    }
    ctx->pc = 0x34BB84u;
    // 0x34bb84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34bb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_34bb88:
    // 0x34bb88: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x34bb88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34bb8c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BB8Cu;
    {
        const bool branch_taken_0x34bb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb8c) {
            ctx->pc = 0x34BB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BB8Cu;
            // 0x34bb90: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BB9Cu;
            goto label_34bb9c;
        }
    }
    ctx->pc = 0x34BB94u;
    // 0x34bb94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34BB94u;
    {
        const bool branch_taken_0x34bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB94u;
        // 0x34bb98: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb94) {
            ctx->pc = 0x34BC20u;
            goto label_34bc20;
        }
    }
    ctx->pc = 0x34BB9Cu;
label_34bb9c:
    // 0x34bb9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x34bb9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x34bba0: 0x5066fff9  beql        $v1, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34BBA0u;
    {
        const bool branch_taken_0x34bba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x34bba0) {
            ctx->pc = 0x34BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BBA0u;
            // 0x34bba4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BB88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bb88;
        }
    }
    ctx->pc = 0x34BBA8u;
label_34bba8:
    // 0x34bba8: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x34bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x34bbac: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x34BBACu;
    {
        const bool branch_taken_0x34bbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x34bbac) {
            ctx->pc = 0x34BBD8u;
            goto label_34bbd8;
        }
    }
    ctx->pc = 0x34BBB4u;
    // 0x34bbb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34bbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_34bbb8:
    // 0x34bbb8: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x34bbb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34bbbc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BBBCu;
    {
        const bool branch_taken_0x34bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bbbc) {
            ctx->pc = 0x34BBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BBBCu;
            // 0x34bbc0: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBCCu;
            goto label_34bbcc;
        }
    }
    ctx->pc = 0x34BBC4u;
    // 0x34bbc4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34BBC4u;
    {
        const bool branch_taken_0x34bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBC4u;
        // 0x34bbc8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bbc4) {
            ctx->pc = 0x34BC20u;
            goto label_34bc20;
        }
    }
    ctx->pc = 0x34BBCCu;
label_34bbcc:
    // 0x34bbcc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x34bbccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x34bbd0: 0x5466fff9  bnel        $v1, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34BBD0u;
    {
        const bool branch_taken_0x34bbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x34bbd0) {
            ctx->pc = 0x34BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BBD0u;
            // 0x34bbd4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bbb8;
        }
    }
    ctx->pc = 0x34BBD8u;
label_34bbd8:
    // 0x34bbd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x34bbdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34BBDCu;
    {
        const bool branch_taken_0x34bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBDCu;
        // 0x34bbe0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bbdc) {
            ctx->pc = 0x34BBF0u;
            goto label_34bbf0;
        }
    }
    ctx->pc = 0x34BBE4u;
label_34bbe4:
    // 0x34bbe4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34bbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x34bbe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34bbec: 0x0  nop
    ctx->pc = 0x34bbecu;
    // NOP
label_34bbf0:
    // 0x34bbf0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34bbf4: 0x7302b  sltu        $a2, $zero, $a3
    ctx->pc = 0x34bbf4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x34bbf8: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x34bbf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x34bbfc: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x34BBFCu;
    {
        const bool branch_taken_0x34bbfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bbfc) {
            ctx->pc = 0x34BC18u;
            goto label_34bc18;
        }
    }
    ctx->pc = 0x34BC04u;
    // 0x34bc04: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x34bc04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x34bc08: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x34bc08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x34bc0c: 0x54c3fff5  bnel        $a2, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x34BC0Cu;
    {
        const bool branch_taken_0x34bc0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x34bc0c) {
            ctx->pc = 0x34BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BC0Cu;
            // 0x34bc10: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bbe4;
        }
    }
    ctx->pc = 0x34BC14u;
    // 0x34bc14: 0x0  nop
    ctx->pc = 0x34bc14u;
    // NOP
label_34bc18:
    // 0x34bc18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x34bc18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bc1c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x34bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_34bc20:
    // 0x34bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x34BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BC28u;
    // 0x34bc28: 0x0  nop
    ctx->pc = 0x34bc28u;
    // NOP
    // 0x34bc2c: 0x0  nop
    ctx->pc = 0x34bc2cu;
    // NOP
    if (ctx->pc == 0x34bc2cu) { ctx->pc = 0x34bc30u; }
}
