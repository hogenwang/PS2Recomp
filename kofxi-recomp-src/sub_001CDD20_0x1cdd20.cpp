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

// Function: sub_001CDD20
// Address: 0x1cdd20 - 0x1cde08
void sub_001CDD20_0x1cdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDD20_0x1cdd20");
#endif

    switch (ctx->pc) {
        case 0x1cdd20u: goto label_1cdd20;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd28u: goto label_1cdd28;
        case 0x1cdd2cu: goto label_1cdd2c;
        case 0x1cdd30u: goto label_1cdd30;
        case 0x1cdd34u: goto label_1cdd34;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd3cu: goto label_1cdd3c;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cddc8u: goto label_1cddc8;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cddd0u: goto label_1cddd0;
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cddd8u: goto label_1cddd8;
        case 0x1cdddcu: goto label_1cdddc;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cdde8u: goto label_1cdde8;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cddf0u: goto label_1cddf0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cddfcu: goto label_1cddfc;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde04u: goto label_1cde04;
        default: break;
    }

    ctx->pc = 0x1cdd20u;

label_1cdd20:
    // 0x1cdd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cdd24:
    // 0x1cdd24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cdd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd28:
    // 0x1cdd28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdd2c:
    // 0x1cdd2c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_1cdd30:
    if (ctx->pc == 0x1CDD30u) {
        ctx->pc = 0x1CDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD2Cu;
        // 0x1cdd30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD34u;
        goto label_1cdd34;
    }
    ctx->pc = 0x1CDD2Cu;
    {
        const bool branch_taken_0x1cdd2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD2Cu;
        // 0x1cdd30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd2c) {
            ctx->pc = 0x1CDD58u;
            goto label_1cdd58;
        }
    }
    ctx->pc = 0x1CDD34u;
label_1cdd34:
    // 0x1cdd34: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cdd38:
    // 0x1cdd38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd3c:
    // 0x1cdd3c: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1cdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_1cdd40:
    // 0x1cdd40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdd44:
    // 0x1cdd44: 0x60f809  jalr        $v1
label_1cdd48:
    if (ctx->pc == 0x1CDD48u) {
        ctx->pc = 0x1CDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD44u;
        // 0x1cdd48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD4Cu;
        goto label_1cdd4c;
    }
    ctx->pc = 0x1CDD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDD4Cu);
        ctx->pc = 0x1CDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD44u;
        // 0x1cdd48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD44u, 0x1CDD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDD4Cu;
label_1cdd4c:
    // 0x1cdd4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1cdd50:
    if (ctx->pc == 0x1CDD50u) {
        ctx->pc = 0x1CDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4Cu;
        // 0x1cdd50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD54u;
        goto label_1cdd54;
    }
    ctx->pc = 0x1CDD4Cu;
    {
        const bool branch_taken_0x1cdd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4Cu;
        // 0x1cdd50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4c) {
            ctx->pc = 0x1CDD8Cu;
            goto label_1cdd8c;
        }
    }
    ctx->pc = 0x1CDD54u;
label_1cdd54:
    // 0x1cdd54: 0x0  nop
    ctx->pc = 0x1cdd54u;
    // NOP
label_1cdd58:
    // 0x1cdd58: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1cdd58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1cdd5c:
    // 0x1cdd5c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1cdd60:
    // 0x1cdd60: 0x2610e5a8  addiu       $s0, $s0, -0x1A58
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960552));
label_1cdd64:
    // 0x1cdd64: 0xc04a966  jal         func_12A598
label_1cdd68:
    if (ctx->pc == 0x1CDD68u) {
        ctx->pc = 0x1CDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD64u;
        // 0x1cdd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD6Cu;
        goto label_1cdd6c;
    }
    ctx->pc = 0x1CDD64u;
    SET_GPR_U32(ctx, 31, 0x1CDD6Cu);
    ctx->pc = 0x1CDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD64u;
    // 0x1cdd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1CDD64u, 0x1CDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD6Cu;
label_1cdd6c:
    // 0x1cdd6c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cdd70:
    // 0x1cdd70: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1cdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_1cdd74:
    // 0x1cdd74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdd78:
    // 0x1cdd78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cdd7c:
    if (ctx->pc == 0x1CDD7Cu) {
        ctx->pc = 0x1CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD78u;
        // 0x1cdd7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD80u;
        goto label_1cdd80;
    }
    ctx->pc = 0x1CDD78u;
    {
        const bool branch_taken_0x1cdd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD78u;
        // 0x1cdd7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd78) {
            ctx->pc = 0x1CDD88u;
            goto label_1cdd88;
        }
    }
    ctx->pc = 0x1CDD80u;
label_1cdd80:
    // 0x1cdd80: 0x60f809  jalr        $v1
label_1cdd84:
    if (ctx->pc == 0x1CDD84u) {
        ctx->pc = 0x1CDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD80u;
        // 0x1cdd84: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD88u;
        goto label_1cdd88;
    }
    ctx->pc = 0x1CDD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDD88u);
        ctx->pc = 0x1CDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD80u;
        // 0x1cdd84: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD80u, 0x1CDD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDD88u;
label_1cdd88:
    // 0x1cdd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd8c:
    // 0x1cdd8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cdd90:
    // 0x1cdd90: 0x3e00008  jr          $ra
label_1cdd94:
    if (ctx->pc == 0x1CDD94u) {
        ctx->pc = 0x1CDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD90u;
        // 0x1cdd94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD98u;
        goto label_1cdd98;
    }
    ctx->pc = 0x1CDD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD90u;
        // 0x1cdd94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD98u;
label_1cdd98:
    // 0x1cdd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cdd9c:
    // 0x1cdd9c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1cdd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1cdda0:
    // 0x1cdda0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdda4:
    // 0x1cdda4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1cdda4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1cdda8:
    // 0x1cdda8: 0x2610e5a8  addiu       $s0, $s0, -0x1A58
    ctx->pc = 0x1cdda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960552));
label_1cddac:
    // 0x1cddac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cddb0:
    // 0x1cddb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cddb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cddb4:
    // 0x1cddb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cddb8:
    // 0x1cddb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cddbc:
    // 0x1cddbc: 0xc04a966  jal         func_12A598
label_1cddc0:
    if (ctx->pc == 0x1CDDC0u) {
        ctx->pc = 0x1CDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDBCu;
        // 0x1cddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDC4u;
        goto label_1cddc4;
    }
    ctx->pc = 0x1CDDBCu;
    SET_GPR_U32(ctx, 31, 0x1CDDC4u);
    ctx->pc = 0x1CDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDBCu;
    // 0x1cddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1CDDBCu, 0x1CDDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDC4u;
label_1cddc4:
    // 0x1cddc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cddc8:
    // 0x1cddc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cddc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cddcc:
    // 0x1cddcc: 0xc04a88c  jal         func_12A230
label_1cddd0:
    if (ctx->pc == 0x1CDDD0u) {
        ctx->pc = 0x1CDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDCCu;
        // 0x1cddd0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDD4u;
        goto label_1cddd4;
    }
    ctx->pc = 0x1CDDCCu;
    SET_GPR_U32(ctx, 31, 0x1CDDD4u);
    ctx->pc = 0x1CDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDCCu;
    // 0x1cddd0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x1CDDCCu, 0x1CDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDD4u;
label_1cddd4:
    // 0x1cddd4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cddd8:
    // 0x1cddd8: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1cddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_1cdddc:
    // 0x1cdddc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdde0:
    // 0x1cdde0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cdde4:
    if (ctx->pc == 0x1CDDE4u) {
        ctx->pc = 0x1CDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE0u;
        // 0x1cdde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDE8u;
        goto label_1cdde8;
    }
    ctx->pc = 0x1CDDE0u;
    {
        const bool branch_taken_0x1cdde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE0u;
        // 0x1cdde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdde0) {
            ctx->pc = 0x1CDDF0u;
            goto label_1cddf0;
        }
    }
    ctx->pc = 0x1CDDE8u;
label_1cdde8:
    // 0x1cdde8: 0x60f809  jalr        $v1
label_1cddec:
    if (ctx->pc == 0x1CDDECu) {
        ctx->pc = 0x1CDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE8u;
        // 0x1cddec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDF0u;
        goto label_1cddf0;
    }
    ctx->pc = 0x1CDDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDDF0u);
        ctx->pc = 0x1CDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE8u;
        // 0x1cddec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDDE8u, 0x1CDDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDDF0u;
label_1cddf0:
    // 0x1cddf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cddf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cddf4:
    // 0x1cddf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cddf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cddf8:
    // 0x1cddf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cddfc:
    // 0x1cddfc: 0x3e00008  jr          $ra
label_1cde00:
    if (ctx->pc == 0x1CDE00u) {
        ctx->pc = 0x1CDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDFCu;
        // 0x1cde00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE04u;
        goto label_1cde04;
    }
    ctx->pc = 0x1CDDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDFCu;
        // 0x1cde00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDE04u;
label_1cde04:
    // 0x1cde04: 0x0  nop
    ctx->pc = 0x1cde04u;
    // NOP
}
