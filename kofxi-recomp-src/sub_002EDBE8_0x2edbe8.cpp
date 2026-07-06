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

// Function: sub_002EDBE8
// Address: 0x2edbe8 - 0x2edd70
void sub_002EDBE8_0x2edbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDBE8_0x2edbe8");
#endif

    switch (ctx->pc) {
        case 0x2edc14u: goto label_2edc14;
        case 0x2edc38u: goto label_2edc38;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edcdcu: goto label_2edcdc;
        case 0x2edd1cu: goto label_2edd1c;
        case 0x2edd5cu: goto label_2edd5c;
        default: break;
    }

    ctx->pc = 0x2edbe8u;

    // 0x2edbe8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edbe8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edbec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edbecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edbf0: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2edbf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2edbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edbf8: 0xada40384  sw          $a0, 0x384($t5)
    ctx->pc = 0x2edbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 900), GPR_U32(ctx, 4));
    // 0x2edbfc: 0x46080  sll         $t4, $a0, 2
    ctx->pc = 0x2edbfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2edc00: 0x8dae037c  lw          $t6, 0x37C($t5)
    ctx->pc = 0x2edc00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 892)));
    // 0x2edc04: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2edc04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edc08: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2EDC08u;
    {
        const bool branch_taken_0x2edc08 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC08u;
        // 0x2edc0c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc08) {
            ctx->pc = 0x2EDC48u;
            goto label_2edc48;
        }
    }
    ctx->pc = 0x2EDC10u;
    // 0x2edc10: 0xadac0388  sw          $t4, 0x388($t5)
    ctx->pc = 0x2edc10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 904), GPR_U32(ctx, 12));
label_2edc14:
    // 0x2edc14: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edc14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edc18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edc1c: 0x8de8f02c  lw          $t0, -0xFD4($t7)
    ctx->pc = 0x2edc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963244)));
    // 0x2edc20: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edc20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edc24: 0x2405067c  addiu       $a1, $zero, 0x67C
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1660));
    // 0x2edc28: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2edc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2edc2c: 0x24840c78  addiu       $a0, $a0, 0xC78
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3192));
    // 0x2edc30: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDC30u;
    SET_GPR_U32(ctx, 31, 0x2EDC38u);
    ctx->pc = 0x2EDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC30u;
    // 0x2edc34: 0x24e70c90  addiu       $a3, $a3, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDC30u, 0x2EDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC38u;
label_2edc38:
    // 0x2edc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edc40: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC40u;
        // 0x2edc44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC48u;
label_2edc48:
    // 0x2edc48: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2EDC48u;
    {
        const bool branch_taken_0x2edc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC48u;
        // 0x2edc4c: 0xada40388  sw          $a0, 0x388($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc48) {
            ctx->pc = 0x2EDC14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edc14;
        }
    }
    ctx->pc = 0x2EDC50u;
    // 0x2edc50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edc54: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2edc54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edc58: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edc58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edc60: 0xadeeecf8  sw          $t6, -0x1308($t7)
    ctx->pc = 0x2edc60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962424), GPR_U32(ctx, 14));
    // 0x2edc64: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edc68: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edc68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edc6c: 0x24840ca8  addiu       $a0, $a0, 0xCA8
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3240));
    // 0x2edc70: 0x24e70cc0  addiu       $a3, $a3, 0xCC0
    ctx->pc = 0x2edc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3264));
    // 0x2edc74: 0x2405068b  addiu       $a1, $zero, 0x68B
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1675));
    // 0x2edc78: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDC78u;
    SET_GPR_U32(ctx, 31, 0x2EDC80u);
    ctx->pc = 0x2EDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC78u;
    // 0x2edc7c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDC78u, 0x2EDC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC80u;
label_2edc80:
    // 0x2edc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edc88: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC88u;
        // 0x2edc8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC90u;
    // 0x2edc90: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edc90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edc94: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC94u;
        // 0x2edc98: 0x8de2f02c  lw          $v0, -0xFD4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963244)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC9Cu;
    // 0x2edc9c: 0x0  nop
    ctx->pc = 0x2edc9cu;
    // NOP
    // 0x2edca0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edca0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCA4u;
        // 0x2edca8: 0x8de2ecf8  lw          $v0, -0x1308($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDCACu;
    // 0x2edcac: 0x0  nop
    ctx->pc = 0x2edcacu;
    // NOP
    // 0x2edcb0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edcb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edcb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edcb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edcb8: 0xade4f070  sw          $a0, -0xF90($t7)
    ctx->pc = 0x2edcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963312), GPR_U32(ctx, 4));
    // 0x2edcbc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edcc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edcc4: 0x24e70cd0  addiu       $a3, $a3, 0xCD0
    ctx->pc = 0x2edcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3280));
    // 0x2edcc8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edccc: 0x240506ae  addiu       $a1, $zero, 0x6AE
    ctx->pc = 0x2edcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1710));
    // 0x2edcd0: 0x24840ce8  addiu       $a0, $a0, 0xCE8
    ctx->pc = 0x2edcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3304));
    // 0x2edcd4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDCD4u;
    SET_GPR_U32(ctx, 31, 0x2EDCDCu);
    ctx->pc = 0x2EDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCD4u;
    // 0x2edcd8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDCD4u, 0x2EDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCDCu;
label_2edcdc:
    // 0x2edcdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE4u;
        // 0x2edce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDCECu;
    // 0x2edcec: 0x0  nop
    ctx->pc = 0x2edcecu;
    // NOP
    // 0x2edcf0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edcf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edcf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edcf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edcf8: 0xade4f074  sw          $a0, -0xF8C($t7)
    ctx->pc = 0x2edcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963316), GPR_U32(ctx, 4));
    // 0x2edcfc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edd04: 0x24e70d08  addiu       $a3, $a3, 0xD08
    ctx->pc = 0x2edd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3336));
    // 0x2edd08: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edd0c: 0x240506bb  addiu       $a1, $zero, 0x6BB
    ctx->pc = 0x2edd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1723));
    // 0x2edd10: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x2edd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x2edd14: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDD14u;
    SET_GPR_U32(ctx, 31, 0x2EDD1Cu);
    ctx->pc = 0x2EDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD14u;
    // 0x2edd18: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDD14u, 0x2EDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD1Cu;
label_2edd1c:
    // 0x2edd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edd20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD24u;
        // 0x2edd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD2Cu;
    // 0x2edd2c: 0x0  nop
    ctx->pc = 0x2edd2cu;
    // NOP
    // 0x2edd30: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edd30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edd34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edd38: 0xade4f06c  sw          $a0, -0xF94($t7)
    ctx->pc = 0x2edd38u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963308), GPR_U32(ctx, 4));
    // 0x2edd3c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2edd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2edd40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edd44: 0x24e70d38  addiu       $a3, $a3, 0xD38
    ctx->pc = 0x2edd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3384));
    // 0x2edd48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2edd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2edd4c: 0x240506c8  addiu       $a1, $zero, 0x6C8
    ctx->pc = 0x2edd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1736));
    // 0x2edd50: 0x24840d50  addiu       $a0, $a0, 0xD50
    ctx->pc = 0x2edd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
    // 0x2edd54: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EDD54u;
    SET_GPR_U32(ctx, 31, 0x2EDD5Cu);
    ctx->pc = 0x2EDD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD54u;
    // 0x2edd58: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EDD54u, 0x2EDD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD5Cu;
label_2edd5c:
    // 0x2edd5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edd60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edd64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD64u;
        // 0x2edd68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD6Cu;
    // 0x2edd6c: 0x0  nop
    ctx->pc = 0x2edd6cu;
    // NOP
}
