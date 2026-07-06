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

// Function: sub_002CEBF0
// Address: 0x2cebf0 - 0x2cecd0
void sub_002CEBF0_0x2cebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBF0_0x2cebf0");
#endif

    switch (ctx->pc) {
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        default: break;
    }

    ctx->pc = 0x2cebf0u;

label_2cebf0:
    // 0x2cebf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cebf4:
    // 0x2cebf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cebf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cebf8:
    // 0x2cebf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2cebfc:
    // 0x2cebfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cebfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cec00:
    // 0x2cec00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2cec04:
    // 0x2cec04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cec08:
    // 0x2cec08: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_2cec0c:
    if (ctx->pc == 0x2CEC0Cu) {
        ctx->pc = 0x2CEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC08u;
        // 0x2cec0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC10u;
        goto label_2cec10;
    }
    ctx->pc = 0x2CEC08u;
    {
        const bool branch_taken_0x2cec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC08u;
        // 0x2cec0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec08) {
            ctx->pc = 0x2CECBCu;
            goto label_2cecbc;
        }
    }
    ctx->pc = 0x2CEC10u;
label_2cec10:
    // 0x2cec10: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cec14:
    // 0x2cec14: 0xc0b276c  jal         func_2C9DB0
label_2cec18:
    if (ctx->pc == 0x2CEC18u) {
        ctx->pc = 0x2CEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC14u;
        // 0x2cec18: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC1Cu;
        goto label_2cec1c;
    }
    ctx->pc = 0x2CEC14u;
    SET_GPR_U32(ctx, 31, 0x2CEC1Cu);
    ctx->pc = 0x2CEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC14u;
    // 0x2cec18: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DB0u, 0x2CEC14u, 0x2CEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC1Cu;
label_2cec1c:
    // 0x2cec1c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_2cec20:
    if (ctx->pc == 0x2CEC20u) {
        ctx->pc = 0x2CEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC1Cu;
        // 0x2cec20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC24u;
        goto label_2cec24;
    }
    ctx->pc = 0x2CEC1Cu;
    {
        const bool branch_taken_0x2cec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec1c) {
            ctx->pc = 0x2CEC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEC1Cu;
            // 0x2cec20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CECC0u;
            goto label_2cecc0;
        }
    }
    ctx->pc = 0x2CEC24u;
label_2cec24:
    // 0x2cec24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cec28:
    // 0x2cec28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cec2c:
    // 0x2cec2c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x2cec2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2cec30:
    // 0x2cec30: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2cec34:
    if (ctx->pc == 0x2CEC34u) {
        ctx->pc = 0x2CEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC30u;
        // 0x2cec34: 0x8e090004  lw          $t1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC38u;
        goto label_2cec38;
    }
    ctx->pc = 0x2CEC30u;
    {
        const bool branch_taken_0x2cec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec30) {
            ctx->pc = 0x2CEC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEC30u;
            // 0x2cec34: 0x8e090004  lw          $t1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC78u;
            goto label_2cec78;
        }
    }
    ctx->pc = 0x2CEC38u;
label_2cec38:
    // 0x2cec38: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2cec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cec3c:
    // 0x2cec3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cec40:
    if (ctx->pc == 0x2CEC40u) {
        ctx->pc = 0x2CEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC3Cu;
        // 0x2cec40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC44u;
        goto label_2cec44;
    }
    ctx->pc = 0x2CEC3Cu;
    {
        const bool branch_taken_0x2cec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC3Cu;
        // 0x2cec40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec3c) {
            ctx->pc = 0x2CEC54u;
            goto label_2cec54;
        }
    }
    ctx->pc = 0x2CEC44u;
label_2cec44:
    // 0x2cec44: 0xc0b608e  jal         func_2D8238
label_2cec48:
    if (ctx->pc == 0x2CEC48u) {
        ctx->pc = 0x2CEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC44u;
        // 0x2cec48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC4Cu;
        goto label_2cec4c;
    }
    ctx->pc = 0x2CEC44u;
    SET_GPR_U32(ctx, 31, 0x2CEC4Cu);
    ctx->pc = 0x2CEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC44u;
    // 0x2cec48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CEC44u, 0x2CEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC4Cu;
label_2cec4c:
    // 0x2cec4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2cec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cec50:
    // 0x2cec50: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2cec50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cec54:
    // 0x2cec54: 0xc0b60c0  jal         func_2D8300
label_2cec58:
    if (ctx->pc == 0x2CEC58u) {
        ctx->pc = 0x2CEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC54u;
        // 0x2cec58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC5Cu;
        goto label_2cec5c;
    }
    ctx->pc = 0x2CEC54u;
    SET_GPR_U32(ctx, 31, 0x2CEC5Cu);
    ctx->pc = 0x2CEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC54u;
    // 0x2cec58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8300u, 0x2CEC54u, 0x2CEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC5Cu;
label_2cec5c:
    // 0x2cec5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cec5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec60:
    // 0x2cec60: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2cec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2cec64:
    // 0x2cec64: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2cec68:
    if (ctx->pc == 0x2CEC68u) {
        ctx->pc = 0x2CEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC64u;
        // 0x2cec68: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC6Cu;
        goto label_2cec6c;
    }
    ctx->pc = 0x2CEC64u;
    {
        const bool branch_taken_0x2cec64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC64u;
        // 0x2cec68: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec64) {
            ctx->pc = 0x2CECBCu;
            goto label_2cecbc;
        }
    }
    ctx->pc = 0x2CEC6Cu;
label_2cec6c:
    // 0x2cec6c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cec70:
    // 0x2cec70: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2cec70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_2cec74:
    // 0x2cec74: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cec78:
    // 0x2cec78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2cec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cec7c:
    // 0x2cec7c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2cec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cec80:
    // 0x2cec80: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x2cec80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2cec84:
    // 0x2cec84: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x2cec84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cec88:
    // 0x2cec88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cec8c:
    // 0x2cec8c: 0xc0b27e4  jal         func_2C9F90
label_2cec90:
    if (ctx->pc == 0x2CEC90u) {
        ctx->pc = 0x2CEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC8Cu;
        // 0x2cec90: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC94u;
        goto label_2cec94;
    }
    ctx->pc = 0x2CEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC94u);
    ctx->pc = 0x2CEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC8Cu;
    // 0x2cec90: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F90u, 0x2CEC8Cu, 0x2CEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC94u;
label_2cec94:
    // 0x2cec94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cec98:
    // 0x2cec98: 0xc0b5cc4  jal         func_2D7310
label_2cec9c:
    if (ctx->pc == 0x2CEC9Cu) {
        ctx->pc = 0x2CEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC98u;
        // 0x2cec9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECA0u;
        goto label_2ceca0;
    }
    ctx->pc = 0x2CEC98u;
    SET_GPR_U32(ctx, 31, 0x2CECA0u);
    ctx->pc = 0x2CEC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC98u;
    // 0x2cec9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7310u, 0x2CEC98u, 0x2CECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECA0u;
label_2ceca0:
    // 0x2ceca0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ceca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ceca4:
    // 0x2ceca4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ceca8:
    // 0x2ceca8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ceca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cecac:
    // 0x2cecac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cecb0:
    // 0x2cecb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cecb4:
    // 0x2cecb4: 0x40f809  jalr        $v0
label_2cecb8:
    if (ctx->pc == 0x2CECB8u) {
        ctx->pc = 0x2CECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECB4u;
        // 0x2cecb8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECBCu;
        goto label_2cecbc;
    }
    ctx->pc = 0x2CECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CECBCu);
        ctx->pc = 0x2CECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECB4u;
        // 0x2cecb8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECB4u, 0x2CECBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CECBCu;
label_2cecbc:
    // 0x2cecbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cecbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cecc0:
    // 0x2cecc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cecc4:
    // 0x2cecc4: 0x3e00008  jr          $ra
label_2cecc8:
    if (ctx->pc == 0x2CECC8u) {
        ctx->pc = 0x2CECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECC4u;
        // 0x2cecc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CECCCu;
        goto label_2ceccc;
    }
    ctx->pc = 0x2CECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECC4u;
        // 0x2cecc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CECCCu;
label_2ceccc:
    // 0x2ceccc: 0x0  nop
    ctx->pc = 0x2cecccu;
    // NOP
}
