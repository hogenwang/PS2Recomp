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

// Function: sub_0028CDF0
// Address: 0x28cdf0 - 0x28cfe8
void sub_0028CDF0_0x28cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CDF0_0x28cdf0");
#endif

    switch (ctx->pc) {
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfd0u: goto label_28cfd0;
        default: break;
    }

    ctx->pc = 0x28cdf0u;

    // 0x28cdf0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDF4u;
        // 0x28cdf8: 0x24423798  addiu       $v0, $v0, 0x3798 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CDFCu;
    // 0x28cdfc: 0x0  nop
    ctx->pc = 0x28cdfcu;
    // NOP
    // 0x28ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ce04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ce08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28ce0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28ce10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28ce10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ce18: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28CE18u;
    {
        const bool branch_taken_0x28ce18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE18u;
        // 0x28ce1c: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce18) {
            ctx->pc = 0x28CEA8u;
            goto label_28cea8;
        }
    }
    ctx->pc = 0x28CE20u;
    // 0x28ce20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ce24: 0x14e2001b  bne         $a3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28CE24u;
    {
        const bool branch_taken_0x28ce24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE24u;
        // 0x28ce28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce24) {
            ctx->pc = 0x28CE94u;
            goto label_28ce94;
        }
    }
    ctx->pc = 0x28CE2Cu;
    // 0x28ce2c: 0xc0b01f4  jal         func_2C07D0
    ctx->pc = 0x28CE2Cu;
    SET_GPR_U32(ctx, 31, 0x28CE34u);
    ctx->pc = 0x2C07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C07D0u, 0x28CE2Cu, 0x28CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE34u;
label_28ce34:
    // 0x28ce34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce3c: 0xc0a33fa  jal         func_28CFE8
    ctx->pc = 0x28CE3Cu;
    SET_GPR_U32(ctx, 31, 0x28CE44u);
    ctx->pc = 0x28CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE3Cu;
    // 0x28ce40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE8u, 0x28CE3Cu, 0x28CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE44u;
label_28ce44:
    // 0x28ce44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ce44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce48: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28CE48u;
    {
        const bool branch_taken_0x28ce48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE48u;
        // 0x28ce4c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce48) {
            ctx->pc = 0x28CE6Cu;
            goto label_28ce6c;
        }
    }
    ctx->pc = 0x28CE50u;
    // 0x28ce50: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x28ce54: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x28ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x28ce58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ce58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce5c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28CE5Cu;
    SET_GPR_U32(ctx, 31, 0x28CE64u);
    ctx->pc = 0x28CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE5Cu;
    // 0x28ce60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28CE5Cu, 0x28CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE64u;
label_28ce64:
    // 0x28ce64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28CE64u;
    {
        const bool branch_taken_0x28ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE64u;
        // 0x28ce68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce64) {
            ctx->pc = 0x28CEACu;
            goto label_28ceac;
        }
    }
    ctx->pc = 0x28CE6Cu;
label_28ce6c:
    // 0x28ce6c: 0xc0b01fc  jal         func_2C07F0
    ctx->pc = 0x28CE6Cu;
    SET_GPR_U32(ctx, 31, 0x28CE74u);
    ctx->pc = 0x2C07F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C07F0u, 0x28CE6Cu, 0x28CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE74u;
label_28ce74:
    // 0x28ce74: 0xc049802  jal         func_126008
    ctx->pc = 0x28CE74u;
    SET_GPR_U32(ctx, 31, 0x28CE7Cu);
    ctx->pc = 0x28CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE74u;
    // 0x28ce78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126008u, 0x28CE74u, 0x28CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE7Cu;
label_28ce7c:
    // 0x28ce7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce84: 0xc0a33fa  jal         func_28CFE8
    ctx->pc = 0x28CE84u;
    SET_GPR_U32(ctx, 31, 0x28CE8Cu);
    ctx->pc = 0x28CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE84u;
    // 0x28ce88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE8u, 0x28CE84u, 0x28CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE8Cu;
label_28ce8c:
    // 0x28ce8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CE8Cu;
    {
        const bool branch_taken_0x28ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE8Cu;
        // 0x28ce90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce8c) {
            ctx->pc = 0x28CEA8u;
            goto label_28cea8;
        }
    }
    ctx->pc = 0x28CE94u;
label_28ce94:
    // 0x28ce94: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x28ce94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28ce98: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28ce98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28ce9c: 0xc0a33fa  jal         func_28CFE8
    ctx->pc = 0x28CE9Cu;
    SET_GPR_U32(ctx, 31, 0x28CEA4u);
    ctx->pc = 0x28CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE9Cu;
    // 0x28cea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE8u, 0x28CE9Cu, 0x28CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEA4u;
label_28cea4:
    // 0x28cea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cea8:
    // 0x28cea8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28cea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ceac:
    // 0x28ceac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ceb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28ceb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ceb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ceb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEB8u;
        // 0x28cebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CEC0u;
    // 0x28cec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28cec4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ced0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28ced4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28CED4u;
    SET_GPR_U32(ctx, 31, 0x28CEDCu);
    ctx->pc = 0x28CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CED4u;
    // 0x28ced8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x28CED4u, 0x28CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEDCu;
label_28cedc:
    // 0x28cedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cee0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x28CEE0u;
    {
        const bool branch_taken_0x28cee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEE0u;
        // 0x28cee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cee0) {
            ctx->pc = 0x28CF20u;
            goto label_28cf20;
        }
    }
    ctx->pc = 0x28CEE8u;
    // 0x28cee8: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x28CEE8u;
    SET_GPR_U32(ctx, 31, 0x28CEF0u);
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x28CEE8u, 0x28CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEF0u;
label_28cef0:
    // 0x28cef0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEF0u;
    {
        const bool branch_taken_0x28cef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF0u;
        // 0x28cef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cef0) {
            ctx->pc = 0x28CF08u;
            goto label_28cf08;
        }
    }
    ctx->pc = 0x28CEF8u;
    // 0x28cef8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28CEF8u;
    SET_GPR_U32(ctx, 31, 0x28CF00u);
    ctx->pc = 0x28CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEF8u;
    // 0x28cefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28CEF8u, 0x28CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF00u;
label_28cf00:
    // 0x28cf00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28CF00u;
    {
        const bool branch_taken_0x28cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF00u;
        // 0x28cf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf00) {
            ctx->pc = 0x28CF20u;
            goto label_28cf20;
        }
    }
    ctx->pc = 0x28CF08u;
label_28cf08:
    // 0x28cf08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x28cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x28cf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cf10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x28cf14: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28cf18: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x28cf1c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x28cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_28cf20:
    // 0x28cf20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cf24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cf24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF2Cu;
        // 0x28cf30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CF34u;
    // 0x28cf34: 0x0  nop
    ctx->pc = 0x28cf34u;
    // NOP
    // 0x28cf38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28cf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28cf3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cf40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28cf44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cf48: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x28cf48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28cf4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28cf50: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x28CF50u;
    {
        const bool branch_taken_0x28cf50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF50u;
        // 0x28cf54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf50) {
            ctx->pc = 0x28CF94u;
            goto label_28cf94;
        }
    }
    ctx->pc = 0x28CF58u;
    // 0x28cf58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28cf5c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28cf60:
    // 0x28cf60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28cf64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28cf68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CF68u;
    {
        const bool branch_taken_0x28cf68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF68u;
        // 0x28cf6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf68) {
            ctx->pc = 0x28CF80u;
            goto label_28cf80;
        }
    }
    ctx->pc = 0x28CF70u;
    // 0x28cf70: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28CF70u;
    SET_GPR_U32(ctx, 31, 0x28CF78u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28CF70u, 0x28CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF78u;
label_28cf78:
    // 0x28cf78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x28cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28cf7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28cf80:
    // 0x28cf80: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x28cf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28cf84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28CF84u;
    {
        const bool branch_taken_0x28cf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF84u;
        // 0x28cf88: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf84) {
            ctx->pc = 0x28CF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28CF8Cu;
    // 0x28cf8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28CF8Cu;
    {
        const bool branch_taken_0x28cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cf8c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF94u;
label_28cf94:
    // 0x28cf94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28cf98:
    // 0x28cf98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CF98u;
    {
        const bool branch_taken_0x28cf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cf98) {
            ctx->pc = 0x28CF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CF98u;
            // 0x28cf9c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFACu;
            goto label_28cfac;
        }
    }
    ctx->pc = 0x28CFA0u;
    // 0x28cfa0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28CFA0u;
    SET_GPR_U32(ctx, 31, 0x28CFA8u);
    ctx->pc = 0x28CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFA0u;
    // 0x28cfa4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28CFA0u, 0x28CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFA8u;
label_28cfa8:
    // 0x28cfa8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28cfac:
    // 0x28cfac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CFACu;
    {
        const bool branch_taken_0x28cfac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cfac) {
            ctx->pc = 0x28CFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CFACu;
            // 0x28cfb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFC0u;
            goto label_28cfc0;
        }
    }
    ctx->pc = 0x28CFB4u;
    // 0x28cfb4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28CFB4u;
    SET_GPR_U32(ctx, 31, 0x28CFBCu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28CFB4u, 0x28CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFBCu;
label_28cfbc:
    // 0x28cfbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28cfc0:
    // 0x28cfc0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CFC0u;
    {
        const bool branch_taken_0x28cfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cfc0) {
            ctx->pc = 0x28CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CFC0u;
            // 0x28cfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFD4u;
            goto label_28cfd4;
        }
    }
    ctx->pc = 0x28CFC8u;
    // 0x28cfc8: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x28CFC8u;
    SET_GPR_U32(ctx, 31, 0x28CFD0u);
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x28CFC8u, 0x28CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFD0u;
label_28cfd0:
    // 0x28cfd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cfd4:
    // 0x28cfd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cfd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cfd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cfdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cfe0: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x28CFE0u;
    ctx->pc = 0x28CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFE0u;
    // 0x28cfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x28CFE8u;
}
