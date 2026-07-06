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

// Function: sub_0016AF30
// Address: 0x16af30 - 0x16b220
void sub_0016AF30_0x16af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF30_0x16af30");
#endif

    switch (ctx->pc) {
        case 0x16af30u: goto label_16af30;
        case 0x16af34u: goto label_16af34;
        case 0x16af38u: goto label_16af38;
        case 0x16af3cu: goto label_16af3c;
        case 0x16af40u: goto label_16af40;
        case 0x16af44u: goto label_16af44;
        case 0x16af48u: goto label_16af48;
        case 0x16af4cu: goto label_16af4c;
        case 0x16af50u: goto label_16af50;
        case 0x16af54u: goto label_16af54;
        case 0x16af58u: goto label_16af58;
        case 0x16af5cu: goto label_16af5c;
        case 0x16af60u: goto label_16af60;
        case 0x16af64u: goto label_16af64;
        case 0x16af68u: goto label_16af68;
        case 0x16af6cu: goto label_16af6c;
        case 0x16af70u: goto label_16af70;
        case 0x16af74u: goto label_16af74;
        case 0x16af78u: goto label_16af78;
        case 0x16af7cu: goto label_16af7c;
        case 0x16af80u: goto label_16af80;
        case 0x16af84u: goto label_16af84;
        case 0x16af88u: goto label_16af88;
        case 0x16af8cu: goto label_16af8c;
        case 0x16af90u: goto label_16af90;
        case 0x16af94u: goto label_16af94;
        case 0x16af98u: goto label_16af98;
        case 0x16af9cu: goto label_16af9c;
        case 0x16afa0u: goto label_16afa0;
        case 0x16afa4u: goto label_16afa4;
        case 0x16afa8u: goto label_16afa8;
        case 0x16afacu: goto label_16afac;
        case 0x16afb0u: goto label_16afb0;
        case 0x16afb4u: goto label_16afb4;
        case 0x16afb8u: goto label_16afb8;
        case 0x16afbcu: goto label_16afbc;
        case 0x16afc0u: goto label_16afc0;
        case 0x16afc4u: goto label_16afc4;
        case 0x16afc8u: goto label_16afc8;
        case 0x16afccu: goto label_16afcc;
        case 0x16afd0u: goto label_16afd0;
        case 0x16afd4u: goto label_16afd4;
        case 0x16afd8u: goto label_16afd8;
        case 0x16afdcu: goto label_16afdc;
        case 0x16afe0u: goto label_16afe0;
        case 0x16afe4u: goto label_16afe4;
        case 0x16afe8u: goto label_16afe8;
        case 0x16afecu: goto label_16afec;
        case 0x16aff0u: goto label_16aff0;
        case 0x16aff4u: goto label_16aff4;
        case 0x16aff8u: goto label_16aff8;
        case 0x16affcu: goto label_16affc;
        case 0x16b000u: goto label_16b000;
        case 0x16b004u: goto label_16b004;
        case 0x16b008u: goto label_16b008;
        case 0x16b00cu: goto label_16b00c;
        case 0x16b010u: goto label_16b010;
        case 0x16b014u: goto label_16b014;
        case 0x16b018u: goto label_16b018;
        case 0x16b01cu: goto label_16b01c;
        case 0x16b020u: goto label_16b020;
        case 0x16b024u: goto label_16b024;
        case 0x16b028u: goto label_16b028;
        case 0x16b02cu: goto label_16b02c;
        case 0x16b030u: goto label_16b030;
        case 0x16b034u: goto label_16b034;
        case 0x16b038u: goto label_16b038;
        case 0x16b03cu: goto label_16b03c;
        case 0x16b040u: goto label_16b040;
        case 0x16b044u: goto label_16b044;
        case 0x16b048u: goto label_16b048;
        case 0x16b04cu: goto label_16b04c;
        case 0x16b050u: goto label_16b050;
        case 0x16b054u: goto label_16b054;
        case 0x16b058u: goto label_16b058;
        case 0x16b05cu: goto label_16b05c;
        case 0x16b060u: goto label_16b060;
        case 0x16b064u: goto label_16b064;
        case 0x16b068u: goto label_16b068;
        case 0x16b06cu: goto label_16b06c;
        case 0x16b070u: goto label_16b070;
        case 0x16b074u: goto label_16b074;
        case 0x16b078u: goto label_16b078;
        case 0x16b07cu: goto label_16b07c;
        case 0x16b080u: goto label_16b080;
        case 0x16b084u: goto label_16b084;
        case 0x16b088u: goto label_16b088;
        case 0x16b08cu: goto label_16b08c;
        case 0x16b090u: goto label_16b090;
        case 0x16b094u: goto label_16b094;
        case 0x16b098u: goto label_16b098;
        case 0x16b09cu: goto label_16b09c;
        case 0x16b0a0u: goto label_16b0a0;
        case 0x16b0a4u: goto label_16b0a4;
        case 0x16b0a8u: goto label_16b0a8;
        case 0x16b0acu: goto label_16b0ac;
        case 0x16b0b0u: goto label_16b0b0;
        case 0x16b0b4u: goto label_16b0b4;
        case 0x16b0b8u: goto label_16b0b8;
        case 0x16b0bcu: goto label_16b0bc;
        case 0x16b0c0u: goto label_16b0c0;
        case 0x16b0c4u: goto label_16b0c4;
        case 0x16b0c8u: goto label_16b0c8;
        case 0x16b0ccu: goto label_16b0cc;
        case 0x16b0d0u: goto label_16b0d0;
        case 0x16b0d4u: goto label_16b0d4;
        case 0x16b0d8u: goto label_16b0d8;
        case 0x16b0dcu: goto label_16b0dc;
        case 0x16b0e0u: goto label_16b0e0;
        case 0x16b0e4u: goto label_16b0e4;
        case 0x16b0e8u: goto label_16b0e8;
        case 0x16b0ecu: goto label_16b0ec;
        case 0x16b0f0u: goto label_16b0f0;
        case 0x16b0f4u: goto label_16b0f4;
        case 0x16b0f8u: goto label_16b0f8;
        case 0x16b0fcu: goto label_16b0fc;
        case 0x16b100u: goto label_16b100;
        case 0x16b104u: goto label_16b104;
        case 0x16b108u: goto label_16b108;
        case 0x16b10cu: goto label_16b10c;
        case 0x16b110u: goto label_16b110;
        case 0x16b114u: goto label_16b114;
        case 0x16b118u: goto label_16b118;
        case 0x16b11cu: goto label_16b11c;
        case 0x16b120u: goto label_16b120;
        case 0x16b124u: goto label_16b124;
        case 0x16b128u: goto label_16b128;
        case 0x16b12cu: goto label_16b12c;
        case 0x16b130u: goto label_16b130;
        case 0x16b134u: goto label_16b134;
        case 0x16b138u: goto label_16b138;
        case 0x16b13cu: goto label_16b13c;
        case 0x16b140u: goto label_16b140;
        case 0x16b144u: goto label_16b144;
        case 0x16b148u: goto label_16b148;
        case 0x16b14cu: goto label_16b14c;
        case 0x16b150u: goto label_16b150;
        case 0x16b154u: goto label_16b154;
        case 0x16b158u: goto label_16b158;
        case 0x16b15cu: goto label_16b15c;
        case 0x16b160u: goto label_16b160;
        case 0x16b164u: goto label_16b164;
        case 0x16b168u: goto label_16b168;
        case 0x16b16cu: goto label_16b16c;
        case 0x16b170u: goto label_16b170;
        case 0x16b174u: goto label_16b174;
        case 0x16b178u: goto label_16b178;
        case 0x16b17cu: goto label_16b17c;
        case 0x16b180u: goto label_16b180;
        case 0x16b184u: goto label_16b184;
        case 0x16b188u: goto label_16b188;
        case 0x16b18cu: goto label_16b18c;
        case 0x16b190u: goto label_16b190;
        case 0x16b194u: goto label_16b194;
        case 0x16b198u: goto label_16b198;
        case 0x16b19cu: goto label_16b19c;
        case 0x16b1a0u: goto label_16b1a0;
        case 0x16b1a4u: goto label_16b1a4;
        case 0x16b1a8u: goto label_16b1a8;
        case 0x16b1acu: goto label_16b1ac;
        case 0x16b1b0u: goto label_16b1b0;
        case 0x16b1b4u: goto label_16b1b4;
        case 0x16b1b8u: goto label_16b1b8;
        case 0x16b1bcu: goto label_16b1bc;
        case 0x16b1c0u: goto label_16b1c0;
        case 0x16b1c4u: goto label_16b1c4;
        case 0x16b1c8u: goto label_16b1c8;
        case 0x16b1ccu: goto label_16b1cc;
        case 0x16b1d0u: goto label_16b1d0;
        case 0x16b1d4u: goto label_16b1d4;
        case 0x16b1d8u: goto label_16b1d8;
        case 0x16b1dcu: goto label_16b1dc;
        case 0x16b1e0u: goto label_16b1e0;
        case 0x16b1e4u: goto label_16b1e4;
        case 0x16b1e8u: goto label_16b1e8;
        case 0x16b1ecu: goto label_16b1ec;
        case 0x16b1f0u: goto label_16b1f0;
        case 0x16b1f4u: goto label_16b1f4;
        case 0x16b1f8u: goto label_16b1f8;
        case 0x16b1fcu: goto label_16b1fc;
        case 0x16b200u: goto label_16b200;
        case 0x16b204u: goto label_16b204;
        case 0x16b208u: goto label_16b208;
        case 0x16b20cu: goto label_16b20c;
        case 0x16b210u: goto label_16b210;
        case 0x16b214u: goto label_16b214;
        case 0x16b218u: goto label_16b218;
        case 0x16b21cu: goto label_16b21c;
        default: break;
    }

    ctx->pc = 0x16af30u;

label_16af30:
    // 0x16af30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16af34:
    // 0x16af34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_16af38:
    // 0x16af38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16af3c:
    // 0x16af3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16af40:
    // 0x16af40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16af40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16af44:
    // 0x16af44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16af48:
    // 0x16af48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16af4c:
    // 0x16af4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16af4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16af50:
    // 0x16af50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16af54:
    // 0x16af54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16af54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16af58:
    // 0x16af58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16af5c:
    // 0x16af5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16af60:
    // 0x16af60: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_16af64:
    // 0x16af64: 0x92a505f1  lbu         $a1, 0x5F1($s5)
    ctx->pc = 0x16af64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1521)));
label_16af68:
    // 0x16af68: 0xc058d7c  jal         func_1635F0
label_16af6c:
    if (ctx->pc == 0x16AF6Cu) {
        ctx->pc = 0x16AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF68u;
        // 0x16af6c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF70u;
        goto label_16af70;
    }
    ctx->pc = 0x16AF68u;
    SET_GPR_U32(ctx, 31, 0x16AF70u);
    ctx->pc = 0x16AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF68u;
    // 0x16af6c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x16AF68u, 0x16AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF70u;
label_16af70:
    // 0x16af70: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x16af70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_16af74:
    // 0x16af74: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x16af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_16af78:
    // 0x16af78: 0xc062804  jal         func_18A010
label_16af7c:
    if (ctx->pc == 0x16AF7Cu) {
        ctx->pc = 0x16AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF78u;
        // 0x16af7c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF80u;
        goto label_16af80;
    }
    ctx->pc = 0x16AF78u;
    SET_GPR_U32(ctx, 31, 0x16AF80u);
    ctx->pc = 0x16AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF78u;
    // 0x16af7c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x16AF78u, 0x16AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF80u;
label_16af80:
    // 0x16af80: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x16af80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_16af84:
    // 0x16af84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16af84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16af88:
    // 0x16af88: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x16af88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16af8c:
    // 0x16af8c: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x16af8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16af90:
    // 0x16af90: 0x965300f0  lhu         $s3, 0xF0($s2)
    ctx->pc = 0x16af90u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
label_16af94:
    // 0x16af94: 0xc063658  jal         func_18D960
label_16af98:
    if (ctx->pc == 0x16AF98u) {
        ctx->pc = 0x16AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF94u;
        // 0x16af98: 0x26b00314  addiu       $s0, $s5, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 788));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF9Cu;
        goto label_16af9c;
    }
    ctx->pc = 0x16AF94u;
    SET_GPR_U32(ctx, 31, 0x16AF9Cu);
    ctx->pc = 0x16AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF94u;
    // 0x16af98: 0x26b00314  addiu       $s0, $s5, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D960u, 0x16AF94u, 0x16AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF9Cu;
label_16af9c:
    // 0x16af9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16afa0:
    // 0x16afa0: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x16afa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_16afa4:
    // 0x16afa4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x16afa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_16afa8:
    // 0x16afa8: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_16afac:
    if (ctx->pc == 0x16AFACu) {
        ctx->pc = 0x16AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFA8u;
        // 0x16afac: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AFB0u;
        goto label_16afb0;
    }
    ctx->pc = 0x16AFA8u;
    {
        const bool branch_taken_0x16afa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afa8) {
            ctx->pc = 0x16AFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AFA8u;
            // 0x16afac: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AFC8u;
            goto label_16afc8;
        }
    }
    ctx->pc = 0x16AFB0u;
label_16afb0:
    // 0x16afb0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_16afb4:
    // 0x16afb4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16afb8:
    // 0x16afb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16afbc:
    // 0x16afbc: 0x90560000  lbu         $s6, 0x0($v0)
    ctx->pc = 0x16afbcu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16afc0:
    // 0x16afc0: 0x90570001  lbu         $s7, 0x1($v0)
    ctx->pc = 0x16afc0u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_16afc4:
    // 0x16afc4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_16afc8:
    // 0x16afc8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_16afcc:
    // 0x16afcc: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
label_16afd0:
    // 0x16afd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16afd4:
    // 0x16afd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16afd8:
    // 0x16afd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16afdc:
    // 0x16afdc: 0xc055768  jal         func_155DA0
label_16afe0:
    if (ctx->pc == 0x16AFE0u) {
        ctx->pc = 0x16AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFDCu;
        // 0x16afe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AFE4u;
        goto label_16afe4;
    }
    ctx->pc = 0x16AFDCu;
    SET_GPR_U32(ctx, 31, 0x16AFE4u);
    ctx->pc = 0x16AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFDCu;
    // 0x16afe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x16AFDCu, 0x16AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFE4u;
label_16afe4:
    // 0x16afe4: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x16afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_16afe8:
    // 0x16afe8: 0x9205008b  lbu         $a1, 0x8B($s0)
    ctx->pc = 0x16afe8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
label_16afec:
    // 0x16afec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16afecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16aff0:
    // 0x16aff0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_16aff4:
    // 0x16aff4: 0x244231c0  addiu       $v0, $v0, 0x31C0
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12736));
label_16aff8:
    // 0x16aff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16affc:
    // 0x16affc: 0x34a3003f  ori         $v1, $a1, 0x3F
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
label_16b000:
    // 0x16b000: 0xa203008b  sb          $v1, 0x8B($s0)
    ctx->pc = 0x16b000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 3));
label_16b004:
    // 0x16b004: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16b008:
    // 0x16b008: 0x40f809  jalr        $v0
label_16b00c:
    if (ctx->pc == 0x16B00Cu) {
        ctx->pc = 0x16B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B008u;
        // 0x16b00c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B010u;
        goto label_16b010;
    }
    ctx->pc = 0x16B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16B010u);
        ctx->pc = 0x16B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B008u;
        // 0x16b00c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B008u, 0x16B010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16B010u;
label_16b010:
    // 0x16b010: 0x964300ec  lhu         $v1, 0xEC($s2)
    ctx->pc = 0x16b010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16b014:
    // 0x16b014: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_16b018:
    // 0x16b018: 0xa64300ee  sh          $v1, 0xEE($s2)
    ctx->pc = 0x16b018u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 238), (uint16_t)GPR_U32(ctx, 3));
label_16b01c:
    // 0x16b01c: 0xa65300ec  sh          $s3, 0xEC($s2)
    ctx->pc = 0x16b01cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 236), (uint16_t)GPR_U32(ctx, 19));
label_16b020:
    // 0x16b020: 0xa64200f0  sh          $v0, 0xF0($s2)
    ctx->pc = 0x16b020u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 240), (uint16_t)GPR_U32(ctx, 2));
label_16b024:
    // 0x16b024: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x16b024u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
label_16b028:
    // 0x16b028: 0xa64200f4  sh          $v0, 0xF4($s2)
    ctx->pc = 0x16b028u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 2));
label_16b02c:
    // 0x16b02c: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x16b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_16b030:
    // 0x16b030: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16b034:
    // 0x16b034: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x16b034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
label_16b038:
    // 0x16b038: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16b03c:
    // 0x16b03c: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x16b03cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16b040:
    // 0x16b040: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x16b040u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16b044:
    // 0x16b044: 0x964700ec  lhu         $a3, 0xEC($s2)
    ctx->pc = 0x16b044u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16b048:
    // 0x16b048: 0xc063860  jal         func_18E180
label_16b04c:
    if (ctx->pc == 0x16B04Cu) {
        ctx->pc = 0x16B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B048u;
        // 0x16b04c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B050u;
        goto label_16b050;
    }
    ctx->pc = 0x16B048u;
    SET_GPR_U32(ctx, 31, 0x16B050u);
    ctx->pc = 0x16B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B048u;
    // 0x16b04c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16B048u, 0x16B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B050u;
label_16b050:
    // 0x16b050: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16b050u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16b054:
    // 0x16b054: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x16b054u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16b058:
    // 0x16b058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b05c:
    // 0x16b05c: 0xc063808  jal         func_18E020
label_16b060:
    if (ctx->pc == 0x16B060u) {
        ctx->pc = 0x16B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B05Cu;
        // 0x16b060: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B064u;
        goto label_16b064;
    }
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x864304da  lh          $v1, 0x4DA($s2)
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1242)));
label_16b068:
    // 0x16b068: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16b068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b06c:
    // 0x16b06c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16b070:
    // 0x16b070: 0xa64204da  sh          $v0, 0x4DA($s2)
    ctx->pc = 0x16b070u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1242), (uint16_t)GPR_U32(ctx, 2));
label_16b074:
    // 0x16b074: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16b074u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16b078:
    // 0x16b078: 0xc063808  jal         func_18E020
label_16b07c:
    if (ctx->pc == 0x16B07Cu) {
        ctx->pc = 0x16B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B078u;
        // 0x16b07c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B080u;
        goto label_16b080;
    }
    ctx->pc = 0x16B078u;
    SET_GPR_U32(ctx, 31, 0x16B080u);
    ctx->pc = 0x16B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B078u;
    // 0x16b07c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B078u, 0x16B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B080u;
label_16b080:
    // 0x16b080: 0x862304da  lh          $v1, 0x4DA($s1)
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1242)));
label_16b084:
    // 0x16b084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16b088:
    // 0x16b088: 0xa62204da  sh          $v0, 0x4DA($s1)
    ctx->pc = 0x16b088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1242), (uint16_t)GPR_U32(ctx, 2));
label_16b08c:
    // 0x16b08c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x16b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16b090:
    // 0x16b090: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x16b090u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16b094:
    // 0x16b094: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x16b094u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16b098:
    // 0x16b098: 0x964700ec  lhu         $a3, 0xEC($s2)
    ctx->pc = 0x16b098u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16b09c:
    // 0x16b09c: 0xc063860  jal         func_18E180
label_16b0a0:
    if (ctx->pc == 0x16B0A0u) {
        ctx->pc = 0x16B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B09Cu;
        // 0x16b0a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0A4u;
        goto label_16b0a4;
    }
    ctx->pc = 0x16B09Cu;
    SET_GPR_U32(ctx, 31, 0x16B0A4u);
    ctx->pc = 0x16B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B09Cu;
    // 0x16b0a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16B09Cu, 0x16B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0A4u;
label_16b0a4:
    // 0x16b0a4: 0x8e44049c  lw          $a0, 0x49C($s2)
    ctx->pc = 0x16b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16b0a8:
    // 0x16b0a8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16b0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16b0ac:
    // 0x16b0ac: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x16b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_16b0b0:
    // 0x16b0b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x16b0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_16b0b4:
    // 0x16b0b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16b0b8:
    // 0x16b0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16b0bc:
    if (ctx->pc == 0x16B0BCu) {
        ctx->pc = 0x16B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0B8u;
        // 0x16b0bc: 0xae43049c  sw          $v1, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0C0u;
        goto label_16b0c0;
    }
    ctx->pc = 0x16B0B8u;
    {
        const bool branch_taken_0x16b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0B8u;
        // 0x16b0bc: 0xae43049c  sw          $v1, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0b8) {
            ctx->pc = 0x16B0CCu;
            goto label_16b0cc;
        }
    }
    ctx->pc = 0x16B0C0u;
label_16b0c0:
    // 0x16b0c0: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x16b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16b0c4:
    // 0x16b0c4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_16b0c8:
    // 0x16b0c8: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x16b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_16b0cc:
    // 0x16b0cc: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x16b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_16b0d0:
    // 0x16b0d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_16b0d4:
    if (ctx->pc == 0x16B0D4u) {
        ctx->pc = 0x16B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D0u;
        // 0x16b0d4: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0D8u;
        goto label_16b0d8;
    }
    ctx->pc = 0x16B0D0u;
    {
        const bool branch_taken_0x16b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b0d0) {
            ctx->pc = 0x16B0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B0D0u;
            // 0x16b0d4: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B0E8u;
            goto label_16b0e8;
        }
    }
    ctx->pc = 0x16B0D8u;
label_16b0d8:
    // 0x16b0d8: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16b0dc:
    // 0x16b0dc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_16b0e0:
    // 0x16b0e0: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x16b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_16b0e4:
    // 0x16b0e4: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x16b0e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_16b0e8:
    // 0x16b0e8: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x16b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_16b0ec:
    // 0x16b0ec: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x16b0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_16b0f0:
    // 0x16b0f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16b0f4:
    if (ctx->pc == 0x16B0F4u) {
        ctx->pc = 0x16B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F0u;
        // 0x16b0f4: 0xa24304ea  sb          $v1, 0x4EA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0F8u;
        goto label_16b0f8;
    }
    ctx->pc = 0x16B0F0u;
    {
        const bool branch_taken_0x16b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F0u;
        // 0x16b0f4: 0xa24304ea  sb          $v1, 0x4EA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0f0) {
            ctx->pc = 0x16B108u;
            goto label_16b108;
        }
    }
    ctx->pc = 0x16B0F8u;
label_16b0f8:
    // 0x16b0f8: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x16b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16b0fc:
    // 0x16b0fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_16b100:
    // 0x16b100: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b104:
    if (ctx->pc == 0x16B104u) {
        ctx->pc = 0x16B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B100u;
        // 0x16b104: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B108u;
        goto label_16b108;
    }
    ctx->pc = 0x16B100u;
    {
        const bool branch_taken_0x16b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B100u;
        // 0x16b104: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b100) {
            ctx->pc = 0x16B118u;
            goto label_16b118;
        }
    }
    ctx->pc = 0x16B108u;
label_16b108:
    // 0x16b108: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16b10c:
    // 0x16b10c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x16b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_16b110:
    // 0x16b110: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16b114:
    // 0x16b114: 0xae420490  sw          $v0, 0x490($s2)
    ctx->pc = 0x16b114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
label_16b118:
    // 0x16b118: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x16b118u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16b11c:
    // 0x16b11c: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x16b11cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16b120:
    // 0x16b120: 0xc0592e4  jal         func_164B90
label_16b124:
    if (ctx->pc == 0x16B124u) {
        ctx->pc = 0x16B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B120u;
        // 0x16b124: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B128u;
        goto label_16b128;
    }
    ctx->pc = 0x16B120u;
    SET_GPR_U32(ctx, 31, 0x16B128u);
    ctx->pc = 0x16B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B120u;
    // 0x16b124: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x16B120u, 0x16B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B128u;
label_16b128:
    // 0x16b128: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16b128u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16b12c:
    // 0x16b12c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x16b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_16b130:
    // 0x16b130: 0x5202001a  beql        $s0, $v0, . + 4 + (0x1A << 2)
label_16b134:
    if (ctx->pc == 0x16B134u) {
        ctx->pc = 0x16B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B130u;
        // 0x16b134: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B138u;
        goto label_16b138;
    }
    ctx->pc = 0x16B130u;
    {
        const bool branch_taken_0x16b130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b130) {
            ctx->pc = 0x16B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B130u;
            // 0x16b134: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B138u;
label_16b138:
    // 0x16b138: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_16b13c:
    // 0x16b13c: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_16b140:
    if (ctx->pc == 0x16B140u) {
        ctx->pc = 0x16B144u;
        goto label_16b144;
    }
    ctx->pc = 0x16B13Cu;
    {
        const bool branch_taken_0x16b13c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b13c) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B144u;
label_16b144:
    // 0x16b144: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x16b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_16b148:
    // 0x16b148: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_16b14c:
    if (ctx->pc == 0x16B14Cu) {
        ctx->pc = 0x16B150u;
        goto label_16b150;
    }
    ctx->pc = 0x16B148u;
    {
        const bool branch_taken_0x16b148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b148) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B150u;
label_16b150:
    // 0x16b150: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_16b154:
    // 0x16b154: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_16b158:
    if (ctx->pc == 0x16B158u) {
        ctx->pc = 0x16B15Cu;
        goto label_16b15c;
    }
    ctx->pc = 0x16B154u;
    {
        const bool branch_taken_0x16b154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b154) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B15Cu;
label_16b15c:
    // 0x16b15c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_16b160:
    // 0x16b160: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_16b164:
    if (ctx->pc == 0x16B164u) {
        ctx->pc = 0x16B168u;
        goto label_16b168;
    }
    ctx->pc = 0x16B160u;
    {
        const bool branch_taken_0x16b160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b160) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B168u;
label_16b168:
    // 0x16b168: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16b16c:
    // 0x16b16c: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_16b170:
    if (ctx->pc == 0x16B170u) {
        ctx->pc = 0x16B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B16Cu;
        // 0x16b170: 0x8e430490  lw          $v1, 0x490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B174u;
        goto label_16b174;
    }
    ctx->pc = 0x16B16Cu;
    {
        const bool branch_taken_0x16b16c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b16c) {
            ctx->pc = 0x16B170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B16Cu;
            // 0x16b170: 0x8e430490  lw          $v1, 0x490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B188u;
            goto label_16b188;
        }
    }
    ctx->pc = 0x16B174u;
label_16b174:
    // 0x16b174: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_16b178:
    if (ctx->pc == 0x16B178u) {
        ctx->pc = 0x16B17Cu;
        goto label_16b17c;
    }
    ctx->pc = 0x16B174u;
    {
        const bool branch_taken_0x16b174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b174) {
            ctx->pc = 0x16B184u;
            goto label_16b184;
        }
    }
    ctx->pc = 0x16B17Cu;
label_16b17c:
    // 0x16b17c: 0x1000000a  b           . + 4 + (0xA << 2)
label_16b180:
    if (ctx->pc == 0x16B180u) {
        ctx->pc = 0x16B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B17Cu;
        // 0x16b180: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B184u;
        goto label_16b184;
    }
    ctx->pc = 0x16B17Cu;
    {
        const bool branch_taken_0x16b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B17Cu;
        // 0x16b180: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b17c) {
            ctx->pc = 0x16B1A8u;
            goto label_16b1a8;
        }
    }
    ctx->pc = 0x16B184u;
label_16b184:
    // 0x16b184: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x16b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16b188:
    // 0x16b188: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_16b18c:
    // 0x16b18c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16b190:
    // 0x16b190: 0x10000004  b           . + 4 + (0x4 << 2)
label_16b194:
    if (ctx->pc == 0x16B194u) {
        ctx->pc = 0x16B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B190u;
        // 0x16b194: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B198u;
        goto label_16b198;
    }
    ctx->pc = 0x16B190u;
    {
        const bool branch_taken_0x16b190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B190u;
        // 0x16b194: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b190) {
            ctx->pc = 0x16B1A4u;
            goto label_16b1a4;
        }
    }
    ctx->pc = 0x16B198u;
label_16b198:
    // 0x16b198: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x16b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16b19c:
    // 0x16b19c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_16b1a0:
    // 0x16b1a0: 0xae420490  sw          $v0, 0x490($s2)
    ctx->pc = 0x16b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
label_16b1a4:
    // 0x16b1a4: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16b1a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16b1a8:
    // 0x16b1a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b1ac:
    // 0x16b1ac: 0xc063808  jal         func_18E020
label_16b1b0:
    if (ctx->pc == 0x16B1B0u) {
        ctx->pc = 0x16B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1ACu;
        // 0x16b1b0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1B4u;
        goto label_16b1b4;
    }
    ctx->pc = 0x16B1ACu;
    SET_GPR_U32(ctx, 31, 0x16B1B4u);
    ctx->pc = 0x16B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1ACu;
    // 0x16b1b0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16B1ACu, 0x16B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1B4u;
label_16b1b4:
    // 0x16b1b4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16b1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_16b1b8:
    // 0x16b1b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16b1b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_16b1bc:
    // 0x16b1bc: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x16b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16b1c0:
    // 0x16b1c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16b1c4:
    // 0x16b1c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16b1c8:
    // 0x16b1c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16b1cc:
    // 0x16b1cc: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x16b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_16b1d0:
    // 0x16b1d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16b1d4:
    // 0x16b1d4: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x16b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_16b1d8:
    // 0x16b1d8: 0xc0634f8  jal         func_18D3E0
label_16b1dc:
    if (ctx->pc == 0x16B1DCu) {
        ctx->pc = 0x16B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1D8u;
        // 0x16b1dc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1E0u;
        goto label_16b1e0;
    }
    ctx->pc = 0x16B1D8u;
    SET_GPR_U32(ctx, 31, 0x16B1E0u);
    ctx->pc = 0x16B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1D8u;
    // 0x16b1dc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D3E0u, 0x16B1D8u, 0x16B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1E0u;
label_16b1e0:
    // 0x16b1e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16b1e4:
    // 0x16b1e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16b1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b1e8:
    // 0x16b1e8: 0xc062670  jal         func_1899C0
label_16b1ec:
    if (ctx->pc == 0x16B1ECu) {
        ctx->pc = 0x16B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1E8u;
        // 0x16b1ec: 0xa25003ec  sb          $s0, 0x3EC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1F0u;
        goto label_16b1f0;
    }
    ctx->pc = 0x16B1E8u;
    SET_GPR_U32(ctx, 31, 0x16B1F0u);
    ctx->pc = 0x16B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1E8u;
    // 0x16b1ec: 0xa25003ec  sb          $s0, 0x3EC($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899C0u, 0x16B1E8u, 0x16B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1F0u;
label_16b1f0:
    // 0x16b1f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16b1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16b1f4:
    // 0x16b1f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16b1f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16b1f8:
    // 0x16b1f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16b1f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16b1fc:
    // 0x16b1fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16b1fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16b200:
    // 0x16b200: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b204:
    // 0x16b204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b208:
    // 0x16b208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b20c:
    // 0x16b20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b210:
    // 0x16b210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b214:
    // 0x16b214: 0x3e00008  jr          $ra
label_16b218:
    if (ctx->pc == 0x16B218u) {
        ctx->pc = 0x16B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B214u;
        // 0x16b218: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B21Cu;
        goto label_16b21c;
    }
    ctx->pc = 0x16B214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B214u;
        // 0x16b218: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B21Cu;
label_16b21c:
    // 0x16b21c: 0x0  nop
    ctx->pc = 0x16b21cu;
    // NOP
    if (ctx->pc == 0x16b21cu) { ctx->pc = 0x16b220u; }
}
