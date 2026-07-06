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

// Function: sub_001BEE00
// Address: 0x1bee00 - 0x1bee68
void sub_001BEE00_0x1bee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE00_0x1bee00");
#endif

    switch (ctx->pc) {
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee04u: goto label_1bee04;
        case 0x1bee08u: goto label_1bee08;
        case 0x1bee0cu: goto label_1bee0c;
        case 0x1bee10u: goto label_1bee10;
        case 0x1bee14u: goto label_1bee14;
        case 0x1bee18u: goto label_1bee18;
        case 0x1bee1cu: goto label_1bee1c;
        case 0x1bee20u: goto label_1bee20;
        case 0x1bee24u: goto label_1bee24;
        case 0x1bee28u: goto label_1bee28;
        case 0x1bee2cu: goto label_1bee2c;
        case 0x1bee30u: goto label_1bee30;
        case 0x1bee34u: goto label_1bee34;
        case 0x1bee38u: goto label_1bee38;
        case 0x1bee3cu: goto label_1bee3c;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee44u: goto label_1bee44;
        case 0x1bee48u: goto label_1bee48;
        case 0x1bee4cu: goto label_1bee4c;
        case 0x1bee50u: goto label_1bee50;
        case 0x1bee54u: goto label_1bee54;
        case 0x1bee58u: goto label_1bee58;
        case 0x1bee5cu: goto label_1bee5c;
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee64u: goto label_1bee64;
        default: break;
    }

    ctx->pc = 0x1bee00u;

label_1bee00:
    // 0x1bee00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bee04:
    // 0x1bee04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bee08:
    // 0x1bee08: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1bee08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bee0c:
    // 0x1bee0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bee10:
    if (ctx->pc == 0x1BEE10u) {
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE14u;
        goto label_1bee14;
    }
    ctx->pc = 0x1BEE0Cu;
    {
        const bool branch_taken_0x1bee0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee0c) {
            ctx->pc = 0x1BEE28u;
            goto label_1bee28;
        }
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bee14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bee18:
    // 0x1bee18: 0xc06f838  jal         func_1BE0E0
label_1bee1c:
    if (ctx->pc == 0x1BEE1Cu) {
        ctx->pc = 0x1BEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE18u;
        // 0x1bee1c: 0x24848d10  addiu       $a0, $a0, -0x72F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE20u;
        goto label_1bee20;
    }
    ctx->pc = 0x1BEE18u;
    SET_GPR_U32(ctx, 31, 0x1BEE20u);
    ctx->pc = 0x1BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE18u;
    // 0x1bee1c: 0x24848d10  addiu       $a0, $a0, -0x72F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEE18u, 0x1BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE20u;
label_1bee20:
    // 0x1bee20: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bee24:
    if (ctx->pc == 0x1BEE24u) {
        ctx->pc = 0x1BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE20u;
        // 0x1bee24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE28u;
        goto label_1bee28;
    }
    ctx->pc = 0x1BEE20u;
    {
        const bool branch_taken_0x1bee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE20u;
        // 0x1bee24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee20) {
            ctx->pc = 0x1BEE54u;
            goto label_1bee54;
        }
    }
    ctx->pc = 0x1BEE28u;
label_1bee28:
    // 0x1bee28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bee2c:
    // 0x1bee2c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1bee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1bee30:
    // 0x1bee30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bee34:
    if (ctx->pc == 0x1BEE34u) {
        ctx->pc = 0x1BEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE30u;
        // 0x1bee34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE38u;
        goto label_1bee38;
    }
    ctx->pc = 0x1BEE30u;
    {
        const bool branch_taken_0x1bee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee30) {
            ctx->pc = 0x1BEE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEE30u;
            // 0x1bee34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEE48u;
            goto label_1bee48;
        }
    }
    ctx->pc = 0x1BEE38u;
label_1bee38:
    // 0x1bee38: 0x40f809  jalr        $v0
label_1bee3c:
    if (ctx->pc == 0x1BEE3Cu) {
        ctx->pc = 0x1BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE38u;
        // 0x1bee3c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE40u;
        goto label_1bee40;
    }
    ctx->pc = 0x1BEE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEE40u);
        ctx->pc = 0x1BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE38u;
        // 0x1bee3c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE38u, 0x1BEE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bee44:
    if (ctx->pc == 0x1BEE44u) {
        ctx->pc = 0x1BEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE40u;
        // 0x1bee44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE48u;
        goto label_1bee48;
    }
    ctx->pc = 0x1BEE40u;
    {
        const bool branch_taken_0x1bee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE40u;
        // 0x1bee44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee40) {
            ctx->pc = 0x1BEE50u;
            goto label_1bee50;
        }
    }
    ctx->pc = 0x1BEE48u;
label_1bee48:
    // 0x1bee48: 0xc06f838  jal         func_1BE0E0
label_1bee4c:
    if (ctx->pc == 0x1BEE4Cu) {
        ctx->pc = 0x1BEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE48u;
        // 0x1bee4c: 0x24848d30  addiu       $a0, $a0, -0x72D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE50u;
        goto label_1bee50;
    }
    ctx->pc = 0x1BEE48u;
    SET_GPR_U32(ctx, 31, 0x1BEE50u);
    ctx->pc = 0x1BEE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE48u;
    // 0x1bee4c: 0x24848d30  addiu       $a0, $a0, -0x72D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEE48u, 0x1BEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE50u;
label_1bee50:
    // 0x1bee50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bee50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bee54:
    // 0x1bee54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bee54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bee58:
    // 0x1bee58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bee5c:
    // 0x1bee5c: 0x3e00008  jr          $ra
label_1bee60:
    if (ctx->pc == 0x1BEE60u) {
        ctx->pc = 0x1BEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE5Cu;
        // 0x1bee60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE64u;
        goto label_1bee64;
    }
    ctx->pc = 0x1BEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE5Cu;
        // 0x1bee60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEE64u;
label_1bee64:
    // 0x1bee64: 0x0  nop
    ctx->pc = 0x1bee64u;
    // NOP
}
