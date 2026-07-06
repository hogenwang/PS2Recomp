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

// Function: sub_001FCBE0
// Address: 0x1fcbe0 - 0x1fcd68
void sub_001FCBE0_0x1fcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCBE0_0x1fcbe0");
#endif

    switch (ctx->pc) {
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fcd44u: goto label_1fcd44;
        default: break;
    }

    ctx->pc = 0x1fcbe0u;

    // 0x1fcbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcbe4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fcbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fcbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fcbec: 0x8ce30a44  lw          $v1, 0xA44($a3)
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2628)));
    // 0x1fcbf0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCBF0u;
    {
        const bool branch_taken_0x1fcbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF0u;
        // 0x1fcbf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf0) {
            ctx->pc = 0x1FCC08u;
            goto label_1fcc08;
        }
    }
    ctx->pc = 0x1FCBF8u;
    // 0x1fcbf8: 0x8ce80abc  lw          $t0, 0xABC($a3)
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2748)));
    // 0x1fcbfc: 0xc07f35a  jal         func_1FCD68
    ctx->pc = 0x1FCBFCu;
    SET_GPR_U32(ctx, 31, 0x1FCC04u);
    ctx->pc = 0x1FCC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBFCu;
    // 0x1fcc00: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCD68u, 0x1FCBFCu, 0x1FCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC04u;
label_1fcc04:
    // 0x1fcc04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fcc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcc08:
    // 0x1fcc08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC0Cu;
        // 0x1fcc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCC14u;
    // 0x1fcc14: 0x0  nop
    ctx->pc = 0x1fcc14u;
    // NOP
    // 0x1fcc18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcc1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fcc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fcc20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcc28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fcc28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fcc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fcc30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fcc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fcc34: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FCC34u;
    SET_GPR_U32(ctx, 31, 0x1FCC3Cu);
    ctx->pc = 0x1FCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC34u;
    // 0x1fcc38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FCC34u, 0x1FCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC3Cu;
label_1fcc3c:
    // 0x1fcc3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fcc40: 0x26060d88  addiu       $a2, $s0, 0xD88
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1fcc44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC48u;
        // 0x1fcc4c: 0x34a50125  ori         $a1, $a1, 0x125 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)293);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FCC68u;
            goto label_1fcc68;
        }
    }
    ctx->pc = 0x1FCC50u;
    // 0x1fcc50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcc54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcc58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcc5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fcc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcc60: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FCC60u;
    ctx->pc = 0x1FCC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC60u;
    // 0x1fcc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FCC68u;
label_1fcc68:
    // 0x1fcc68: 0x8cc302b0  lw          $v1, 0x2B0($a2)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x1fcc6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fcc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcc70: 0xacd102b8  sw          $s1, 0x2B8($a2)
    ctx->pc = 0x1fcc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 696), GPR_U32(ctx, 17));
    // 0x1fcc74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fcc78: 0xacd202b4  sw          $s2, 0x2B4($a2)
    ctx->pc = 0x1fcc78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 692), GPR_U32(ctx, 18));
    // 0x1fcc7c: 0xacc302b0  sw          $v1, 0x2B0($a2)
    ctx->pc = 0x1fcc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 688), GPR_U32(ctx, 3));
    // 0x1fcc80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcc84: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1fcc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1fcc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcc90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fcc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC94u;
        // 0x1fcc98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCC9Cu;
    // 0x1fcc9c: 0x0  nop
    ctx->pc = 0x1fcc9cu;
    // NOP
    // 0x1fcca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcca8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fcca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fccb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fccb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fccb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fccb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fccc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fccc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fccc8: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FCCC8u;
    SET_GPR_U32(ctx, 31, 0x1FCCD0u);
    ctx->pc = 0x1FCCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCC8u;
    // 0x1fcccc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FCCC8u, 0x1FCCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCD0u;
label_1fccd0:
    // 0x1fccd0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fccd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCCD4u;
    {
        const bool branch_taken_0x1fccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCD4u;
        // 0x1fccd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccd4) {
            ctx->pc = 0x1FCD00u;
            goto label_1fcd00;
        }
    }
    ctx->pc = 0x1FCCDCu;
    // 0x1fccdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fccdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcce0: 0x34a50126  ori         $a1, $a1, 0x126
    ctx->pc = 0x1fcce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)294);
    // 0x1fcce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fccec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fccecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fccf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccf4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FCCF4u;
    ctx->pc = 0x1FCCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCF4u;
    // 0x1fccf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FCCFCu;
    // 0x1fccfc: 0x0  nop
    ctx->pc = 0x1fccfcu;
    // NOP
label_1fcd00:
    // 0x1fcd00: 0x8e030a44  lw          $v1, 0xA44($s0)
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2628)));
    // 0x1fcd04: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCD04u;
    {
        const bool branch_taken_0x1fcd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd04) {
            ctx->pc = 0x1FCD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCD04u;
            // 0x1fcd08: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCD18u;
            goto label_1fcd18;
        }
    }
    ctx->pc = 0x1FCD0Cu;
    // 0x1fcd0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcd10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FCD10u;
    {
        const bool branch_taken_0x1fcd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD10u;
        // 0x1fcd14: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd10) {
            ctx->pc = 0x1FCD48u;
            goto label_1fcd48;
        }
    }
    ctx->pc = 0x1FCD18u;
label_1fcd18:
    // 0x1fcd18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fcd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fcd1c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCD1Cu;
    {
        const bool branch_taken_0x1fcd1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD1Cu;
        // 0x1fcd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd1c) {
            ctx->pc = 0x1FCD30u;
            goto label_1fcd30;
        }
    }
    ctx->pc = 0x1FCD24u;
    // 0x1fcd24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCD24u;
    {
        const bool branch_taken_0x1fcd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD24u;
        // 0x1fcd28: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd24) {
            ctx->pc = 0x1FCD48u;
            goto label_1fcd48;
        }
    }
    ctx->pc = 0x1FCD2Cu;
    // 0x1fcd2c: 0x0  nop
    ctx->pc = 0x1fcd2cu;
    // NOP
label_1fcd30:
    // 0x1fcd30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fcd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd34: 0x8c880ac0  lw          $t0, 0xAC0($a0)
    ctx->pc = 0x1fcd34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2752)));
    // 0x1fcd38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fcd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd3c: 0xc07f35a  jal         func_1FCD68
    ctx->pc = 0x1FCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD44u);
    ctx->pc = 0x1FCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD3Cu;
    // 0x1fcd40: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCD68u, 0x1FCD3Cu, 0x1FCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD44u;
label_1fcd44:
    // 0x1fcd44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fcd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd48:
    // 0x1fcd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcd4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcd50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcd50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcd54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fcd54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcd58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fcd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCD64u;
    // 0x1fcd64: 0x0  nop
    ctx->pc = 0x1fcd64u;
    // NOP
    if (ctx->pc == 0x1fcd64u) { ctx->pc = 0x1fcd68u; }
}
