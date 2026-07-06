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

// Function: sub_002FCAF0
// Address: 0x2fcaf0 - 0x2fcba8
void sub_002FCAF0_0x2fcaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCAF0_0x2fcaf0");
#endif

    switch (ctx->pc) {
        case 0x2fcb00u: goto label_2fcb00;
        case 0x2fcb18u: goto label_2fcb18;
        case 0x2fcb50u: goto label_2fcb50;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb90u: goto label_2fcb90;
        default: break;
    }

    ctx->pc = 0x2fcaf0u;

    // 0x2fcaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcaf8: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCAF8u;
    SET_GPR_U32(ctx, 31, 0x2FCB00u);
    ctx->pc = 0x2FC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC9B0u, 0x2FCAF8u, 0x2FCB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB00u;
label_2fcb00:
    // 0x2fcb00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB00u;
    {
        const bool branch_taken_0x2fcb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB00u;
        // 0x2fcb04: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb00) {
            ctx->pc = 0x2FCB10u;
            goto label_2fcb10;
        }
    }
    ctx->pc = 0x2FCB08u;
    // 0x2fcb08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCB08u;
    {
        const bool branch_taken_0x2fcb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB08u;
        // 0x2fcb0c: 0x844206a8  lh          $v0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb08) {
            ctx->pc = 0x2FCB30u;
            goto label_2fcb30;
        }
    }
    ctx->pc = 0x2FCB10u;
label_2fcb10:
    // 0x2fcb10: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCB10u;
    SET_GPR_U32(ctx, 31, 0x2FCB18u);
    ctx->pc = 0x2FCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB10u;
    // 0x2fcb14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD10u, 0x2FCB10u, 0x2FCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB18u;
label_2fcb18:
    // 0x2fcb18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcb1c: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x2fcb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2fcb20: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2fcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2fcb24: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x2fcb24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x2fcb28: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2fcb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2fcb2c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2fcb2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2fcb30:
    // 0x2fcb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcb34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB34u;
        // 0x2fcb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCB3Cu;
    // 0x2fcb3c: 0x0  nop
    ctx->pc = 0x2fcb3cu;
    // NOP
    // 0x2fcb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcb48: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCB48u;
    SET_GPR_U32(ctx, 31, 0x2FCB50u);
    ctx->pc = 0x2FC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC9B0u, 0x2FCB48u, 0x2FCB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB50u;
label_2fcb50:
    // 0x2fcb50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB50u;
    {
        const bool branch_taken_0x2fcb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB50u;
        // 0x2fcb54: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb50) {
            ctx->pc = 0x2FCB60u;
            goto label_2fcb60;
        }
    }
    ctx->pc = 0x2FCB58u;
    // 0x2fcb58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2FCB58u;
    {
        const bool branch_taken_0x2fcb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB58u;
        // 0x2fcb5c: 0x904206ab  lbu         $v0, 0x6AB($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1707)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb58) {
            ctx->pc = 0x2FCB98u;
            goto label_2fcb98;
        }
    }
    ctx->pc = 0x2FCB60u;
label_2fcb60:
    // 0x2fcb60: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCB60u;
    SET_GPR_U32(ctx, 31, 0x2FCB68u);
    ctx->pc = 0x2FCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB60u;
    // 0x2fcb64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD10u, 0x2FCB60u, 0x2FCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB68u;
label_2fcb68:
    // 0x2fcb68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcb6c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2fcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2fcb70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2fcb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2fcb74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB74u;
    {
        const bool branch_taken_0x2fcb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB74u;
        // 0x2fcb78: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb74) {
            ctx->pc = 0x2FCB84u;
            goto label_2fcb84;
        }
    }
    ctx->pc = 0x2FCB7Cu;
    // 0x2fcb7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCB7Cu;
    {
        const bool branch_taken_0x2fcb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB7Cu;
        // 0x2fcb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb7c) {
            ctx->pc = 0x2FCB98u;
            goto label_2fcb98;
        }
    }
    ctx->pc = 0x2FCB84u;
label_2fcb84:
    // 0x2fcb84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fcb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcb88: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2FCB88u;
    SET_GPR_U32(ctx, 31, 0x2FCB90u);
    ctx->pc = 0x2FCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB88u;
    // 0x2fcb8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2FCB88u, 0x2FCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB90u;
label_2fcb90:
    // 0x2fcb90: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2fcb90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fcb94: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x2fcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_2fcb98:
    // 0x2fcb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB9Cu;
        // 0x2fcba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCBA4u;
    // 0x2fcba4: 0x0  nop
    ctx->pc = 0x2fcba4u;
    // NOP
}
