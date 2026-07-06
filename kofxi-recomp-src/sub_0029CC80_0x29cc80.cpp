#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CC80
// Address: 0x29cc80 - 0x29cd28
void sub_0029CC80_0x29cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC80_0x29cc80");
#endif

    switch (ctx->pc) {
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd20u: goto label_29cd20;
        default: break;
    }

    ctx->pc = 0x29cc80u;

    // 0x29cc80: 0x28820044  slti        $v0, $a0, 0x44
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)68) ? 1 : 0);
    // 0x29cc84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29CC84u;
    {
        const bool branch_taken_0x29cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC84u;
            // 0x29cc88: 0x28820042  slti        $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc84) {
            ctx->pc = 0x29CCC8u;
            goto label_29ccc8;
        }
    }
    ctx->pc = 0x29CC8Cu;
    // 0x29cc8c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29CC8Cu;
    {
        const bool branch_taken_0x29cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC8Cu;
            // 0x29cc90: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc8c) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CC94u;
    // 0x29cc94: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29CC94u;
    {
        const bool branch_taken_0x29cc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC94u;
            // 0x29cc98: 0x28820014  slti        $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc94) {
            ctx->pc = 0x29CD00u;
            goto label_29cd00;
        }
    }
    ctx->pc = 0x29CC9Cu;
    // 0x29cc9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CC9Cu;
    {
        const bool branch_taken_0x29cc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC9Cu;
            // 0x29cca0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc9c) {
            ctx->pc = 0x29CCB4u;
            goto label_29ccb4;
        }
    }
    ctx->pc = 0x29CCA4u;
    // 0x29cca4: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29CCA4u;
    {
        const bool branch_taken_0x29cca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCA4u;
            // 0x29cca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cca4) {
            ctx->pc = 0x29CD00u;
            goto label_29cd00;
        }
    }
    ctx->pc = 0x29CCACu;
    // 0x29ccac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29CCACu;
    {
        const bool branch_taken_0x29ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ccac) {
            ctx->pc = 0x29CD18u;
            goto label_29cd18;
        }
    }
    ctx->pc = 0x29CCB4u;
label_29ccb4:
    // 0x29ccb4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29ccb8: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29CCB8u;
    {
        const bool branch_taken_0x29ccb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCB8u;
            // 0x29ccbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccb8) {
            ctx->pc = 0x29CD10u;
            goto label_29cd10;
        }
    }
    ctx->pc = 0x29CCC0u;
    // 0x29ccc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29CCC0u;
    {
        const bool branch_taken_0x29ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ccc0) {
            ctx->pc = 0x29CD18u;
            goto label_29cd18;
        }
    }
    ctx->pc = 0x29CCC8u;
label_29ccc8:
    // 0x29ccc8: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x29ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x29cccc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29CCCCu;
    {
        const bool branch_taken_0x29cccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCCCu;
            // 0x29ccd0: 0x28820072  slti        $v0, $a0, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cccc) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CCD4u;
    // 0x29ccd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CCD4u;
    {
        const bool branch_taken_0x29ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCD4u;
            // 0x29ccd8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccd4) {
            ctx->pc = 0x29CCECu;
            goto label_29ccec;
        }
    }
    ctx->pc = 0x29CCDCu;
    // 0x29ccdc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29CCDCu;
    {
        const bool branch_taken_0x29ccdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCDCu;
            // 0x29cce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccdc) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CCE4u;
    // 0x29cce4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29CCE4u;
    {
        const bool branch_taken_0x29cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cce4) {
            ctx->pc = 0x29CD18u;
            goto label_29cd18;
        }
    }
    ctx->pc = 0x29CCECu;
label_29ccec:
    // 0x29ccec: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x29ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29ccf0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CCF0u;
    {
        const bool branch_taken_0x29ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCF0u;
            // 0x29ccf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccf0) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CCF8u;
    // 0x29ccf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29CCF8u;
    {
        const bool branch_taken_0x29ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ccf8) {
            ctx->pc = 0x29CD18u;
            goto label_29cd18;
        }
    }
    ctx->pc = 0x29CD00u;
label_29cd00:
    // 0x29cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD00u;
            // 0x29cd04: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CD08u;
label_29cd08:
    // 0x29cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD08u;
            // 0x29cd0c: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CD10u;
label_29cd10:
    // 0x29cd10: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD10u;
            // 0x29cd14: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CD18u;
label_29cd18:
    // 0x29cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CD20u;
label_29cd20:
    // 0x29cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD20u;
            // 0x29cd24: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CD28u;
    ctx->pc = 0x29cd28u;
}
