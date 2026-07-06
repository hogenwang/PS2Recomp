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

// Function: sub_0024AC30
// Address: 0x24ac30 - 0x24ad58
void sub_0024AC30_0x24ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AC30_0x24ac30");
#endif

    switch (ctx->pc) {
        case 0x24ac78u: goto label_24ac78;
        case 0x24aca8u: goto label_24aca8;
        case 0x24acc4u: goto label_24acc4;
        default: break;
    }

    ctx->pc = 0x24ac30u;

    // 0x24ac30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24ac34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24ac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24ac3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24ac40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24ac44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ac48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ac4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x24ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24ac50: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x24ac50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24ac54: 0x5220002e  beql        $s1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x24AC54u;
    {
        const bool branch_taken_0x24ac54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac54) {
            ctx->pc = 0x24AC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC54u;
            // 0x24ac58: 0xacc00054  sw          $zero, 0x54($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AD10u;
            goto label_24ad10;
        }
    }
    ctx->pc = 0x24AC5Cu;
    // 0x24ac5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ac60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ac64: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24ac64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24ac68: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AC68u;
    {
        const bool branch_taken_0x24ac68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ac68) {
            ctx->pc = 0x24AC90u;
            goto label_24ac90;
        }
    }
    ctx->pc = 0x24AC70u;
    // 0x24ac70: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x24ac70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24ac74: 0x0  nop
    ctx->pc = 0x24ac74u;
    // NOP
label_24ac78:
    // 0x24ac78: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x24AC78u;
    {
        const bool branch_taken_0x24ac78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac78) {
            ctx->pc = 0x24AC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC78u;
            // 0x24ac7c: 0xacc00054  sw          $zero, 0x54($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AD10u;
            goto label_24ad10;
        }
    }
    ctx->pc = 0x24AC80u;
    // 0x24ac80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ac84: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24ac84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24ac88: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24AC88u;
    {
        const bool branch_taken_0x24ac88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24ac88) {
            ctx->pc = 0x24AC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC88u;
            // 0x24ac8c: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ac78;
        }
    }
    ctx->pc = 0x24AC90u;
label_24ac90:
    // 0x24ac90: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x24AC90u;
    {
        const bool branch_taken_0x24ac90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac90) {
            ctx->pc = 0x24AC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC90u;
            // 0x24ac94: 0xacc00054  sw          $zero, 0x54($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AD0Cu;
            goto label_24ad0c;
        }
    }
    ctx->pc = 0x24AC98u;
    // 0x24ac98: 0x8cd0008c  lw          $s0, 0x8C($a2)
    ctx->pc = 0x24ac98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x24ac9c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24AC9Cu;
    {
        const bool branch_taken_0x24ac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC9Cu;
        // 0x24aca0: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac9c) {
            ctx->pc = 0x24AD3Cu;
            goto label_24ad3c;
        }
    }
    ctx->pc = 0x24ACA4u;
    // 0x24aca4: 0x8e130014  lw          $s3, 0x14($s0)
    ctx->pc = 0x24aca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24aca8:
    // 0x24aca8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24acac: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24acb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24acb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24ACB4u;
    {
        const bool branch_taken_0x24acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB4u;
        // 0x24acb8: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acb4) {
            ctx->pc = 0x24ACC4u;
            goto label_24acc4;
        }
    }
    ctx->pc = 0x24ACBCu;
    // 0x24acbc: 0xc090c82  jal         func_243208
    ctx->pc = 0x24ACBCu;
    SET_GPR_U32(ctx, 31, 0x24ACC4u);
    ctx->pc = 0x24ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ACBCu;
    // 0x24acc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x24ACBCu, 0x24ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ACC4u;
label_24acc4:
    // 0x24acc4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x24acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24acc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24accc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x24acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x24acd0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x24acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x24acd4: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x24acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x24acd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACD8u;
    {
        const bool branch_taken_0x24acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACD8u;
        // 0x24acdc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acd8) {
            ctx->pc = 0x24ACF0u;
            goto label_24acf0;
        }
    }
    ctx->pc = 0x24ACE0u;
    // 0x24ace0: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x24ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x24ace4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x24ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x24ace8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x24ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x24acec: 0x0  nop
    ctx->pc = 0x24acecu;
    // NOP
label_24acf0:
    // 0x24acf0: 0xae30008c  sw          $s0, 0x8C($s1)
    ctx->pc = 0x24acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
    // 0x24acf4: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x24acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x24acf8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x24acf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24acfc: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24ACFCu;
    {
        const bool branch_taken_0x24acfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24acfc) {
            ctx->pc = 0x24AD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ACFCu;
            // 0x24ad00: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ACA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24aca8;
        }
    }
    ctx->pc = 0x24AD04u;
    // 0x24ad04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24AD04u;
    {
        const bool branch_taken_0x24ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD04u;
        // 0x24ad08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad04) {
            ctx->pc = 0x24AD40u;
            goto label_24ad40;
        }
    }
    ctx->pc = 0x24AD0Cu;
label_24ad0c:
    // 0x24ad0c: 0x0  nop
    ctx->pc = 0x24ad0cu;
    // NOP
label_24ad10:
    // 0x24ad10: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24ad14: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x24ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x24ad18: 0x24c50054  addiu       $a1, $a2, 0x54
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
    // 0x24ad1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ad20: 0xacc20058  sw          $v0, 0x58($a2)
    ctx->pc = 0x24ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 2));
    // 0x24ad24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ad28: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x24ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x24ad2c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x24ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x24ad30: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x24ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x24ad34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ad38: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x24ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_24ad3c:
    // 0x24ad3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ad40:
    // 0x24ad40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24ad40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ad44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ad44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ad48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ad48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ad4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ad4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ad50: 0x3e00008  jr          $ra
    ctx->pc = 0x24AD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD50u;
        // 0x24ad54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AD58u;
}
