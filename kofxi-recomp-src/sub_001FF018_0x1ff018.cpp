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

// Function: sub_001FF018
// Address: 0x1ff018 - 0x1ff108
void sub_001FF018_0x1ff018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF018_0x1ff018");
#endif

    switch (ctx->pc) {
        case 0x1ff04cu: goto label_1ff04c;
        case 0x1ff090u: goto label_1ff090;
        case 0x1ff0bcu: goto label_1ff0bc;
        default: break;
    }

    ctx->pc = 0x1ff018u;

    // 0x1ff018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff01c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ff01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ff020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff024: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ff024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ff028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ff028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ff02c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff030: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ff030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ff034: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ff038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ff03c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ff03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ff040: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff044: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1FF044u;
    SET_GPR_U32(ctx, 31, 0x1FF04Cu);
    ctx->pc = 0x1FF048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF044u;
    // 0x1ff048: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF98u, 0x1FF044u, 0x1FF04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF04Cu;
label_1ff04c:
    // 0x1ff04c: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF04Cu;
    {
        const bool branch_taken_0x1ff04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ff04c) {
            ctx->pc = 0x1FF050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF04Cu;
            // 0x1ff050: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF060u;
            goto label_1ff060;
        }
    }
    ctx->pc = 0x1FF054u;
    // 0x1ff054: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FF054u;
    {
        const bool branch_taken_0x1ff054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF054u;
        // 0x1ff058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff054) {
            ctx->pc = 0x1FF0ECu;
            goto label_1ff0ec;
        }
    }
    ctx->pc = 0x1FF05Cu;
    // 0x1ff05c: 0x0  nop
    ctx->pc = 0x1ff05cu;
    // NOP
label_1ff060:
    // 0x1ff060: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x1ff060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x1ff064: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF080u;
            goto label_1ff080;
        }
    }
    ctx->pc = 0x1FF06Cu;
    // 0x1ff06c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff074: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1FF074u;
    {
        const bool branch_taken_0x1ff074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF074u;
        // 0x1ff078: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff074) {
            ctx->pc = 0x1FF0ECu;
            goto label_1ff0ec;
        }
    }
    ctx->pc = 0x1FF07Cu;
    // 0x1ff07c: 0x0  nop
    ctx->pc = 0x1ff07cu;
    // NOP
label_1ff080:
    // 0x1ff080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff084: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ff088: 0xc049c22  jal         func_127088
    ctx->pc = 0x1FF088u;
    SET_GPR_U32(ctx, 31, 0x1FF090u);
    ctx->pc = 0x1FF08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF088u;
    // 0x1ff08c: 0x24a5ee48  addiu       $a1, $a1, -0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1FF088u, 0x1FF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF090u;
label_1ff090:
    // 0x1ff090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff098: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF098u;
    {
        const bool branch_taken_0x1ff098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF098u;
        // 0x1ff09c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff098) {
            ctx->pc = 0x1FF0B0u;
            goto label_1ff0b0;
        }
    }
    ctx->pc = 0x1FF0A0u;
    // 0x1ff0a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff0a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ff0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ff0a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF0A8u;
    {
        const bool branch_taken_0x1ff0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A8u;
        // 0x1ff0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0a8) {
            ctx->pc = 0x1FF0ECu;
            goto label_1ff0ec;
        }
    }
    ctx->pc = 0x1FF0B0u;
label_1ff0b0:
    // 0x1ff0b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff0b4: 0xc07fd02  jal         func_1FF408
    ctx->pc = 0x1FF0B4u;
    SET_GPR_U32(ctx, 31, 0x1FF0BCu);
    ctx->pc = 0x1FF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF0B4u;
    // 0x1ff0b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF408u, 0x1FF0B4u, 0x1FF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF0BCu;
label_1ff0bc:
    // 0x1ff0bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF0BCu;
    {
        const bool branch_taken_0x1ff0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0BCu;
        // 0x1ff0c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0bc) {
            ctx->pc = 0x1FF0ECu;
            goto label_1ff0ec;
        }
    }
    ctx->pc = 0x1FF0C4u;
    // 0x1ff0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff0c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ff0cc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1ff0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ff0d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff0d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ff0d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff0dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ff0e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ff0e4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1ff0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1ff0e8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1ff0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1ff0ec:
    // 0x1ff0ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff0f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff0f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ff0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff0f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ff0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ff0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff100: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF100u;
        // 0x1ff104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF108u;
}
