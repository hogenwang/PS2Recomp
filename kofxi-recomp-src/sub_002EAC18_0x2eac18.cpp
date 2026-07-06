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

// Function: sub_002EAC18
// Address: 0x2eac18 - 0x2ead18
void sub_002EAC18_0x2eac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAC18_0x2eac18");
#endif

    switch (ctx->pc) {
        case 0x2eac48u: goto label_2eac48;
        case 0x2eac58u: goto label_2eac58;
        case 0x2eac5cu: goto label_2eac5c;
        case 0x2eac68u: goto label_2eac68;
        case 0x2eac88u: goto label_2eac88;
        case 0x2eac94u: goto label_2eac94;
        case 0x2eacc0u: goto label_2eacc0;
        case 0x2eace8u: goto label_2eace8;
        case 0x2eacf8u: goto label_2eacf8;
        default: break;
    }

    ctx->pc = 0x2eac18u;

    // 0x2eac18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eac1c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2eac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2eac20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eac24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eac28: 0x24910118  addiu       $s1, $a0, 0x118
    ctx->pc = 0x2eac28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x2eac2c: 0x8c43ec48  lw          $v1, -0x13B8($v0)
    ctx->pc = 0x2eac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962248)));
    // 0x2eac30: 0x2450ec48  addiu       $s0, $v0, -0x13B8
    ctx->pc = 0x2eac30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962248));
    // 0x2eac34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2eac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2eac38: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EAC38u;
    {
        const bool branch_taken_0x2eac38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC38u;
        // 0x2eac3c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac38) {
            ctx->pc = 0x2EAC70u;
            goto label_2eac70;
        }
    }
    ctx->pc = 0x2EAC40u;
    // 0x2eac40: 0x3c1201cb  lui         $s2, 0x1CB
    ctx->pc = 0x2eac40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)459 << 16));
    // 0x2eac44: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2eac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eac48:
    // 0x2eac48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac4c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2eac50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eac50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac54: 0xc08dc0a  jal         func_237028
label_2eac58:
    if (ctx->pc == 0x2EAC58u) {
        ctx->pc = 0x2EAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC54u;
        // 0x2eac58: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAC5Cu;
        goto label_2eac5c;
    }
    ctx->pc = 0x2EAC54u;
    SET_GPR_U32(ctx, 31, 0x2EAC5Cu);
    ctx->pc = 0x2EAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC54u;
    // 0x2eac58: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237028u, 0x2EAC54u, 0x2EAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC5Cu;
label_2eac5c:
    // 0x2eac5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eac60: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EAC60u;
    {
        const bool branch_taken_0x2eac60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac60) {
            ctx->pc = 0x2EAC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAC60u;
            // 0x2eac64: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eac48;
        }
    }
    ctx->pc = 0x2EAC68u;
label_2eac68:
    // 0x2eac68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAC68u;
    {
        const bool branch_taken_0x2eac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC68u;
        // 0x2eac6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac68) {
            ctx->pc = 0x2EAC78u;
            goto label_2eac78;
        }
    }
    ctx->pc = 0x2EAC70u;
label_2eac70:
    // 0x2eac70: 0x3c1201cb  lui         $s2, 0x1CB
    ctx->pc = 0x2eac70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)459 << 16));
    // 0x2eac74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eac78:
    // 0x2eac78: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2eac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2eac7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac80: 0xc08dc0a  jal         func_237028
    ctx->pc = 0x2EAC80u;
    SET_GPR_U32(ctx, 31, 0x2EAC88u);
    ctx->pc = 0x2EAC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC80u;
    // 0x2eac84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237028u, 0x2EAC80u, 0x2EAC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC88u;
label_2eac88:
    // 0x2eac88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac8c: 0xc08dc46  jal         func_237118
    ctx->pc = 0x2EAC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EAC94u);
    ctx->pc = 0x2EAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC8Cu;
    // 0x2eac90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237118u, 0x2EAC8Cu, 0x2EAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC94u;
label_2eac94:
    // 0x2eac94: 0xae400640  sw          $zero, 0x640($s2)
    ctx->pc = 0x2eac94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 0));
    // 0x2eac98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eac9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eac9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eaca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eaca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eaca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACA8u;
        // 0x2eacac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EACB0u;
    // 0x2eacb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eacb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eacb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eacb8: 0xc0bad08  jal         func_2EB420
    ctx->pc = 0x2EACB8u;
    SET_GPR_U32(ctx, 31, 0x2EACC0u);
    ctx->pc = 0x2EACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACB8u;
    // 0x2eacbc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB420u, 0x2EACB8u, 0x2EACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACC0u;
label_2eacc0:
    // 0x2eacc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eacc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eacc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eacc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACC8u;
        // 0x2eaccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EACD0u;
    // 0x2eacd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eacd4: 0x8c822e88  lw          $v0, 0x2E88($a0)
    ctx->pc = 0x2eacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11912)));
    // 0x2eacd8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2eacd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2eacdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eace0: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x2eace0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x2eace4: 0x8c820134  lw          $v0, 0x134($a0)
    ctx->pc = 0x2eace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_2eace8:
    // 0x2eace8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EACE8u;
    {
        const bool branch_taken_0x2eace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACE8u;
        // 0x2eacec: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eace8) {
            ctx->pc = 0x2EACF4u;
            goto label_2eacf4;
        }
    }
    ctx->pc = 0x2EACF0u;
    // 0x2eacf0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2eacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_2eacf4:
    // 0x2eacf4: 0x8c822e88  lw          $v0, 0x2E88($a0)
    ctx->pc = 0x2eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11912)));
label_2eacf8:
    // 0x2eacf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eacfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EACFCu;
    {
        const bool branch_taken_0x2eacfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacfc) {
            ctx->pc = 0x2EAD10u;
            goto label_2ead10;
        }
    }
    ctx->pc = 0x2EAD04u;
    // 0x2ead04: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2ead08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ead08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ead0c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x2ead0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_2ead10:
    // 0x2ead10: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAD18u;
}
