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

// Function: sub_0019ACB0
// Address: 0x19acb0 - 0x19adb0
void sub_0019ACB0_0x19acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ACB0_0x19acb0");
#endif

    switch (ctx->pc) {
        case 0x19acc0u: goto label_19acc0;
        case 0x19acc8u: goto label_19acc8;
        case 0x19ace4u: goto label_19ace4;
        case 0x19ad04u: goto label_19ad04;
        case 0x19ad10u: goto label_19ad10;
        case 0x19ad38u: goto label_19ad38;
        case 0x19ad58u: goto label_19ad58;
        case 0x19ad78u: goto label_19ad78;
        case 0x19ad98u: goto label_19ad98;
        default: break;
    }

    ctx->pc = 0x19acb0u;

    // 0x19acb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19acb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19acb8: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x19ACB8u;
    SET_GPR_U32(ctx, 31, 0x19ACC0u);
    ctx->pc = 0x19ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACB8u;
    // 0x19acbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F80u, 0x19ACB8u, 0x19ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACC0u;
label_19acc0:
    // 0x19acc0: 0xc067d50  jal         func_19F540
    ctx->pc = 0x19ACC0u;
    SET_GPR_U32(ctx, 31, 0x19ACC8u);
    ctx->pc = 0x19F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F540u, 0x19ACC0u, 0x19ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACC8u;
label_19acc8:
    // 0x19acc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19accc: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19acd0: 0x8c63d50c  lw          $v1, -0x2AF4($v1)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956300)));
    // 0x19acd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ACD4u;
    {
        const bool branch_taken_0x19acd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD4u;
        // 0x19acd8: 0x2610d500  addiu       $s0, $s0, -0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acd4) {
            ctx->pc = 0x19ACE8u;
            goto label_19ace8;
        }
    }
    ctx->pc = 0x19ACDCu;
    // 0x19acdc: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19ACDCu;
    SET_GPR_U32(ctx, 31, 0x19ACE4u);
    ctx->pc = 0x19ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACDCu;
    // 0x19ace0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19ACDCu, 0x19ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACE4u;
label_19ace4:
    // 0x19ace4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x19ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_19ace8:
    // 0x19ace8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19acec: 0x8c63d530  lw          $v1, -0x2AD0($v1)
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956336)));
    // 0x19acf0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19ACF0u;
    {
        const bool branch_taken_0x19acf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19acf0) {
            ctx->pc = 0x19AD20u;
            goto label_19ad20;
        }
    }
    ctx->pc = 0x19ACF8u;
    // 0x19acf8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19acfc: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x19ACFCu;
    SET_GPR_U32(ctx, 31, 0x19AD04u);
    ctx->pc = 0x19AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACFCu;
    // 0x19ad00: 0x2484d530  addiu       $a0, $a0, -0x2AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x19ACFCu, 0x19AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD04u;
label_19ad04:
    // 0x19ad04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ad08: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19AD08u;
    SET_GPR_U32(ctx, 31, 0x19AD10u);
    ctx->pc = 0x19AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD08u;
    // 0x19ad0c: 0x8c44d530  lw          $a0, -0x2AD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19AD08u, 0x19AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD10u;
label_19ad10:
    // 0x19ad10: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19ad14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad18: 0xac80d530  sw          $zero, -0x2AD0($a0)
    ctx->pc = 0x19ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956336), GPR_U32(ctx, 0));
    // 0x19ad1c: 0xac60d534  sw          $zero, -0x2ACC($v1)
    ctx->pc = 0x19ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956340), GPR_U32(ctx, 0));
label_19ad20:
    // 0x19ad20: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad24: 0x8c64d520  lw          $a0, -0x2AE0($v1)
    ctx->pc = 0x19ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956320)));
    // 0x19ad28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AD28u;
    {
        const bool branch_taken_0x19ad28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad28) {
            ctx->pc = 0x19AD40u;
            goto label_19ad40;
        }
    }
    ctx->pc = 0x19AD30u;
    // 0x19ad30: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19AD30u;
    SET_GPR_U32(ctx, 31, 0x19AD38u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19AD30u, 0x19AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD38u;
label_19ad38:
    // 0x19ad38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad3c: 0xac60d520  sw          $zero, -0x2AE0($v1)
    ctx->pc = 0x19ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956320), GPR_U32(ctx, 0));
label_19ad40:
    // 0x19ad40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad44: 0x8c64d4d8  lw          $a0, -0x2B28($v1)
    ctx->pc = 0x19ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956248)));
    // 0x19ad48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AD48u;
    {
        const bool branch_taken_0x19ad48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad48) {
            ctx->pc = 0x19AD60u;
            goto label_19ad60;
        }
    }
    ctx->pc = 0x19AD50u;
    // 0x19ad50: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19AD50u;
    SET_GPR_U32(ctx, 31, 0x19AD58u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19AD50u, 0x19AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD58u;
label_19ad58:
    // 0x19ad58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad5c: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
label_19ad60:
    // 0x19ad60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad64: 0x8c64d4e0  lw          $a0, -0x2B20($v1)
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956256)));
    // 0x19ad68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AD68u;
    {
        const bool branch_taken_0x19ad68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad68) {
            ctx->pc = 0x19AD80u;
            goto label_19ad80;
        }
    }
    ctx->pc = 0x19AD70u;
    // 0x19ad70: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19AD70u;
    SET_GPR_U32(ctx, 31, 0x19AD78u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19AD70u, 0x19AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD78u;
label_19ad78:
    // 0x19ad78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad7c: 0xac60d4e0  sw          $zero, -0x2B20($v1)
    ctx->pc = 0x19ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956256), GPR_U32(ctx, 0));
label_19ad80:
    // 0x19ad80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad84: 0x8c64d4e8  lw          $a0, -0x2B18($v1)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956264)));
    // 0x19ad88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AD88u;
    {
        const bool branch_taken_0x19ad88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad88) {
            ctx->pc = 0x19AD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AD88u;
            // 0x19ad8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD90u;
    // 0x19ad90: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19AD90u;
    SET_GPR_U32(ctx, 31, 0x19AD98u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19AD90u, 0x19AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ad9c: 0xac60d4e8  sw          $zero, -0x2B18($v1)
    ctx->pc = 0x19ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956264), GPR_U32(ctx, 0));
    // 0x19ada0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ada4:
    // 0x19ada4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ada4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADA8u;
        // 0x19adac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ADB0u;
}
