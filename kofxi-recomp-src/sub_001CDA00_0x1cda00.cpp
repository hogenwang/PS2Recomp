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

// Function: sub_001CDA00
// Address: 0x1cda00 - 0x1cdb48
void sub_001CDA00_0x1cda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDA00_0x1cda00");
#endif

    switch (ctx->pc) {
        case 0x1cda00u: goto label_1cda00;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda08u: goto label_1cda08;
        case 0x1cda0cu: goto label_1cda0c;
        case 0x1cda10u: goto label_1cda10;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cda18u: goto label_1cda18;
        case 0x1cda1cu: goto label_1cda1c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda24u: goto label_1cda24;
        case 0x1cda28u: goto label_1cda28;
        case 0x1cda2cu: goto label_1cda2c;
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        case 0x1cdaa0u: goto label_1cdaa0;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdaa8u: goto label_1cdaa8;
        case 0x1cdaacu: goto label_1cdaac;
        case 0x1cdab0u: goto label_1cdab0;
        case 0x1cdab4u: goto label_1cdab4;
        case 0x1cdab8u: goto label_1cdab8;
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdac4u: goto label_1cdac4;
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdadcu: goto label_1cdadc;
        case 0x1cdae0u: goto label_1cdae0;
        case 0x1cdae4u: goto label_1cdae4;
        case 0x1cdae8u: goto label_1cdae8;
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdaf0u: goto label_1cdaf0;
        case 0x1cdaf4u: goto label_1cdaf4;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb04u: goto label_1cdb04;
        case 0x1cdb08u: goto label_1cdb08;
        case 0x1cdb0cu: goto label_1cdb0c;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb1cu: goto label_1cdb1c;
        case 0x1cdb20u: goto label_1cdb20;
        case 0x1cdb24u: goto label_1cdb24;
        case 0x1cdb28u: goto label_1cdb28;
        case 0x1cdb2cu: goto label_1cdb2c;
        case 0x1cdb30u: goto label_1cdb30;
        case 0x1cdb34u: goto label_1cdb34;
        case 0x1cdb38u: goto label_1cdb38;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdb44u: goto label_1cdb44;
        default: break;
    }

    ctx->pc = 0x1cda00u;

label_1cda00:
    // 0x1cda00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cda04:
    // 0x1cda04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cda08:
    // 0x1cda08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cda08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cda0c:
    // 0x1cda0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cda0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cda10:
    // 0x1cda10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cda10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cda14:
    // 0x1cda14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cda14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cda18:
    // 0x1cda18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cda1c:
    // 0x1cda1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cda1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda20:
    // 0x1cda20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1cda24:
    // 0x1cda24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cda24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda28:
    // 0x1cda28: 0xc07096e  jal         func_1C25B8
label_1cda2c:
    if (ctx->pc == 0x1CDA2Cu) {
        ctx->pc = 0x1CDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA28u;
        // 0x1cda2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA30u;
        goto label_1cda30;
    }
    ctx->pc = 0x1CDA28u;
    SET_GPR_U32(ctx, 31, 0x1CDA30u);
    ctx->pc = 0x1CDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA28u;
    // 0x1cda2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CDA28u, 0x1CDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA30u;
label_1cda30:
    // 0x1cda30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cda30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cda34:
    // 0x1cda34: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cda34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cda38:
    // 0x1cda38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cda38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cda3c:
    // 0x1cda3c: 0x3e00008  jr          $ra
label_1cda40:
    if (ctx->pc == 0x1CDA40u) {
        ctx->pc = 0x1CDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA3Cu;
        // 0x1cda40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA44u;
        goto label_1cda44;
    }
    ctx->pc = 0x1CDA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA3Cu;
        // 0x1cda40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA44u;
label_1cda44:
    // 0x1cda44: 0x0  nop
    ctx->pc = 0x1cda44u;
    // NOP
label_1cda48:
    // 0x1cda48: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1cda48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1cda4c:
    // 0x1cda4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cda50:
    // 0x1cda50: 0x3e00008  jr          $ra
label_1cda54:
    if (ctx->pc == 0x1CDA54u) {
        ctx->pc = 0x1CDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA50u;
        // 0x1cda54: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA58u;
        goto label_1cda58;
    }
    ctx->pc = 0x1CDA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA50u;
        // 0x1cda54: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA58u;
label_1cda58:
    // 0x1cda58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cda5c:
    // 0x1cda5c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cda60:
    // 0x1cda60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cda64:
    // 0x1cda64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cda64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1cda68:
    // 0x1cda68: 0x24427fe0  addiu       $v0, $v0, 0x7FE0
    ctx->pc = 0x1cda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32736));
label_1cda6c:
    // 0x1cda6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cda70:
    // 0x1cda70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1cda74:
    if (ctx->pc == 0x1CDA74u) {
        ctx->pc = 0x1CDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA70u;
        // 0x1cda74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA78u;
        goto label_1cda78;
    }
    ctx->pc = 0x1CDA70u;
    {
        const bool branch_taken_0x1cda70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA70u;
        // 0x1cda74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda70) {
            ctx->pc = 0x1CDAA8u;
            goto label_1cdaa8;
        }
    }
    ctx->pc = 0x1CDA78u;
label_1cda78:
    // 0x1cda78: 0x60f809  jalr        $v1
label_1cda7c:
    if (ctx->pc == 0x1CDA7Cu) {
        ctx->pc = 0x1CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA78u;
        // 0x1cda7c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA80u;
        goto label_1cda80;
    }
    ctx->pc = 0x1CDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA80u);
        ctx->pc = 0x1CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA78u;
        // 0x1cda7c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA78u, 0x1CDA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA80u;
label_1cda80:
    // 0x1cda80: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1cda84:
    // 0x1cda84: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cda84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1cda88:
    // 0x1cda88: 0x2444e564  addiu       $a0, $v0, -0x1A9C
    ctx->pc = 0x1cda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960484));
label_1cda8c:
    // 0x1cda8c: 0x2463e560  addiu       $v1, $v1, -0x1AA0
    ctx->pc = 0x1cda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960480));
label_1cda90:
    // 0x1cda90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda94:
    // 0x1cda94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1cda98:
    if (ctx->pc == 0x1CDA98u) {
        ctx->pc = 0x1CDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA94u;
        // 0x1cda98: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA9Cu;
        goto label_1cda9c;
    }
    ctx->pc = 0x1CDA94u;
    {
        const bool branch_taken_0x1cda94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda94) {
            ctx->pc = 0x1CDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDA94u;
            // 0x1cda98: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDA9Cu;
            goto label_1cda9c;
        }
    }
    ctx->pc = 0x1CDA9Cu;
label_1cda9c:
    // 0x1cda9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cdaa0:
    // 0x1cdaa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cdaa4:
    // 0x1cdaa4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cdaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1cdaa8:
    // 0x1cdaa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdaa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdaac:
    // 0x1cdaac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cdab0:
    // 0x1cdab0: 0x3e00008  jr          $ra
label_1cdab4:
    if (ctx->pc == 0x1CDAB4u) {
        ctx->pc = 0x1CDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB0u;
        // 0x1cdab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAB8u;
        goto label_1cdab8;
    }
    ctx->pc = 0x1CDAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB0u;
        // 0x1cdab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAB8u;
label_1cdab8:
    // 0x1cdab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cdabc:
    // 0x1cdabc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cdabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdac0:
    // 0x1cdac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cdac4:
    // 0x1cdac4: 0x3c1101bf  lui         $s1, 0x1BF
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)447 << 16));
label_1cdac8:
    // 0x1cdac8: 0x8e227fe8  lw          $v0, 0x7FE8($s1)
    ctx->pc = 0x1cdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32744)));
label_1cdacc:
    // 0x1cdacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdad0:
    // 0x1cdad0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1cdad4:
    if (ctx->pc == 0x1CDAD4u) {
        ctx->pc = 0x1CDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAD0u;
        // 0x1cdad4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAD8u;
        goto label_1cdad8;
    }
    ctx->pc = 0x1CDAD0u;
    {
        const bool branch_taken_0x1cdad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAD0u;
        // 0x1cdad4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdad0) {
            ctx->pc = 0x1CDB30u;
            goto label_1cdb30;
        }
    }
    ctx->pc = 0x1CDAD8u;
label_1cdad8:
    // 0x1cdad8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1cdadc:
    // 0x1cdadc: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_1cdae0:
    // 0x1cdae0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdae4:
    // 0x1cdae4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cdae8:
    // 0x1cdae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cdae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1cdaec:
    // 0x1cdaec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdaf0:
    // 0x1cdaf0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1cdaf4:
    if (ctx->pc == 0x1CDAF4u) {
        ctx->pc = 0x1CDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF0u;
        // 0x1cdaf4: 0x26237fe8  addiu       $v1, $s1, 0x7FE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAF8u;
        goto label_1cdaf8;
    }
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF0u;
        // 0x1cdaf4: 0x26237fe8  addiu       $v1, $s1, 0x7FE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDB24u;
            goto label_1cdb24;
        }
    }
    ctx->pc = 0x1CDAF8u;
label_1cdaf8:
    // 0x1cdaf8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1cdafc:
    // 0x1cdafc: 0x2450e564  addiu       $s0, $v0, -0x1A9C
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960484));
label_1cdb00:
    // 0x1cdb00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cdb04:
    // 0x1cdb04: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_1cdb08:
    if (ctx->pc == 0x1CDB08u) {
        ctx->pc = 0x1CDB0Cu;
        goto label_1cdb0c;
    }
    ctx->pc = 0x1CDB04u;
    {
        const bool branch_taken_0x1cdb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1cdb04) {
            ctx->pc = 0x1CDB1Cu;
            goto label_1cdb1c;
        }
    }
    ctx->pc = 0x1CDB0Cu;
label_1cdb0c:
    // 0x1cdb0c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cdb10:
    // 0x1cdb10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1cdb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cdb14:
    // 0x1cdb14: 0xc07371e  jal         func_1CDC78
label_1cdb18:
    if (ctx->pc == 0x1CDB18u) {
        ctx->pc = 0x1CDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB14u;
        // 0x1cdb18: 0x2484be10  addiu       $a0, $a0, -0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB1Cu;
        goto label_1cdb1c;
    }
    ctx->pc = 0x1CDB14u;
    SET_GPR_U32(ctx, 31, 0x1CDB1Cu);
    ctx->pc = 0x1CDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB14u;
    // 0x1cdb18: 0x2484be10  addiu       $a0, $a0, -0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC78u, 0x1CDB14u, 0x1CDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB1Cu;
label_1cdb1c:
    // 0x1cdb1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cdb20:
    // 0x1cdb20: 0x26237fe8  addiu       $v1, $s1, 0x7FE8
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32744));
label_1cdb24:
    // 0x1cdb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cdb28:
    // 0x1cdb28: 0x40f809  jalr        $v0
label_1cdb2c:
    if (ctx->pc == 0x1CDB2Cu) {
        ctx->pc = 0x1CDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB28u;
        // 0x1cdb2c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB30u;
        goto label_1cdb30;
    }
    ctx->pc = 0x1CDB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDB30u);
        ctx->pc = 0x1CDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB28u;
        // 0x1cdb2c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB28u, 0x1CDB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDB30u;
label_1cdb30:
    // 0x1cdb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdb34:
    // 0x1cdb34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cdb38:
    // 0x1cdb38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdb3c:
    // 0x1cdb3c: 0x3e00008  jr          $ra
label_1cdb40:
    if (ctx->pc == 0x1CDB40u) {
        ctx->pc = 0x1CDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB3Cu;
        // 0x1cdb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB44u;
        goto label_1cdb44;
    }
    ctx->pc = 0x1CDB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB3Cu;
        // 0x1cdb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB44u;
label_1cdb44:
    // 0x1cdb44: 0x0  nop
    ctx->pc = 0x1cdb44u;
    // NOP
}
