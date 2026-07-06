#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AFAC
// Address: 0x15afac - 0x15c2f0
void sub_0015AFAC_0x15afac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AFAC_0x15afac");
#endif

    switch (ctx->pc) {
        case 0x15afc8u: goto label_15afc8;
        case 0x15afe4u: goto label_15afe4;
        case 0x15b024u: goto label_15b024;
        case 0x15b038u: goto label_15b038;
        case 0x15b060u: goto label_15b060;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b100u: goto label_15b100;
        case 0x15b114u: goto label_15b114;
        case 0x15b120u: goto label_15b120;
        case 0x15b174u: goto label_15b174;
        case 0x15b180u: goto label_15b180;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b250u: goto label_15b250;
        case 0x15b2c8u: goto label_15b2c8;
        case 0x15b2e4u: goto label_15b2e4;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b360u: goto label_15b360;
        case 0x15b38cu: goto label_15b38c;
        case 0x15b3a4u: goto label_15b3a4;
        case 0x15b3b8u: goto label_15b3b8;
        case 0x15b3c4u: goto label_15b3c4;
        case 0x15b424u: goto label_15b424;
        case 0x15b43cu: goto label_15b43c;
        case 0x15b470u: goto label_15b470;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b504u: goto label_15b504;
        case 0x15b550u: goto label_15b550;
        case 0x15b564u: goto label_15b564;
        case 0x15b590u: goto label_15b590;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b610u: goto label_15b610;
        case 0x15b624u: goto label_15b624;
        case 0x15b670u: goto label_15b670;
        case 0x15b684u: goto label_15b684;
        case 0x15b6b0u: goto label_15b6b0;
        case 0x15b6fcu: goto label_15b6fc;
        case 0x15b720u: goto label_15b720;
        case 0x15b760u: goto label_15b760;
        case 0x15b774u: goto label_15b774;
        case 0x15b7a0u: goto label_15b7a0;
        case 0x15b7e8u: goto label_15b7e8;
        case 0x15b804u: goto label_15b804;
        case 0x15b844u: goto label_15b844;
        case 0x15b858u: goto label_15b858;
        case 0x15b880u: goto label_15b880;
        case 0x15b8ccu: goto label_15b8cc;
        case 0x15b8fcu: goto label_15b8fc;
        case 0x15b920u: goto label_15b920;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15ba38u: goto label_15ba38;
        case 0x15ba54u: goto label_15ba54;
        case 0x15bac4u: goto label_15bac4;
        case 0x15bb20u: goto label_15bb20;
        case 0x15bb78u: goto label_15bb78;
        case 0x15bb80u: goto label_15bb80;
        case 0x15bc30u: goto label_15bc30;
        case 0x15bc7cu: goto label_15bc7c;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bcd8u: goto label_15bcd8;
        case 0x15bcecu: goto label_15bcec;
        case 0x15bd10u: goto label_15bd10;
        case 0x15bdbcu: goto label_15bdbc;
        case 0x15bdd8u: goto label_15bdd8;
        case 0x15be28u: goto label_15be28;
        case 0x15be50u: goto label_15be50;
        case 0x15be68u: goto label_15be68;
        case 0x15be94u: goto label_15be94;
        case 0x15bec8u: goto label_15bec8;
        case 0x15bf10u: goto label_15bf10;
        case 0x15bf44u: goto label_15bf44;
        case 0x15bfdcu: goto label_15bfdc;
        case 0x15c030u: goto label_15c030;
        case 0x15c06cu: goto label_15c06c;
        case 0x15c104u: goto label_15c104;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c170u: goto label_15c170;
        case 0x15c214u: goto label_15c214;
        case 0x15c230u: goto label_15c230;
        case 0x15c280u: goto label_15c280;
        case 0x15c2a8u: goto label_15c2a8;
        case 0x15c2c0u: goto label_15c2c0;
        default: break;
    }

    ctx->pc = 0x15afacu;

    // 0x15afac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15afacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15afb4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afbc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15afbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afc0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15AFC0u;
    SET_GPR_U32(ctx, 31, 0x15AFC8u);
    ctx->pc = 0x15AFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFC0u;
            // 0x15afc4: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFC8u; }
        if (ctx->pc != 0x15AFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFC8u; }
        if (ctx->pc != 0x15AFC8u) { return; }
    }
    ctx->pc = 0x15AFC8u;
label_15afc8:
    // 0x15afc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15afc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afcc: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15AFCCu;
    {
        const bool branch_taken_0x15afcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afcc) {
            ctx->pc = 0x15AFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFCCu;
            // 0x15afd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B03Cu;
            goto label_15b03c;
        }
    }
    ctx->pc = 0x15AFD4u;
    // 0x15afd4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x15afd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15afd8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x15afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15afdc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15AFDCu;
    SET_GPR_U32(ctx, 31, 0x15AFE4u);
    ctx->pc = 0x15AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFDCu;
            // 0x15afe0: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFE4u; }
        if (ctx->pc != 0x15AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFE4u; }
        if (ctx->pc != 0x15AFE4u) { return; }
    }
    ctx->pc = 0x15AFE4u;
label_15afe4:
    // 0x15afe4: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x15afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15afe8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15afec: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x15aff0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15aff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15aff4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15aff8: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15affc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15affcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b000: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15b000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15b004: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b008: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b00c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b010: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b014: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b018: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b018u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b01c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B01Cu;
    SET_GPR_U32(ctx, 31, 0x15B024u);
    ctx->pc = 0x15B020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B01Cu;
            // 0x15b020: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B024u; }
        if (ctx->pc != 0x15B024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B024u; }
        if (ctx->pc != 0x15B024u) { return; }
    }
    ctx->pc = 0x15B024u;
label_15b024:
    // 0x15b024: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b02c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b030: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B030u;
    SET_GPR_U32(ctx, 31, 0x15B038u);
    ctx->pc = 0x15B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B030u;
            // 0x15b034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B038u; }
        if (ctx->pc != 0x15B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B038u; }
        if (ctx->pc != 0x15B038u) { return; }
    }
    ctx->pc = 0x15B038u;
label_15b038:
    // 0x15b038: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15b038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b03c:
    // 0x15b03c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b040: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b054: 0x3e00008  jr          $ra
    ctx->pc = 0x15B054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B054u;
            // 0x15b058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B05Cu;
    // 0x15b05c: 0x0  nop
    ctx->pc = 0x15b05cu;
    // NOP
label_15b060:
    // 0x15b060: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15b064: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x15b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15b068: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15b06c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15b070: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15b074: 0x24570006  addiu       $s7, $v0, 0x6
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15b078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b07c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15b080: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b084: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15b084u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b08c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15b08cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b098: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b0a0: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x15b0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x15b0a4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15b0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b0a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15b0ac: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x15b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x15b0b0: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x15b0b4: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x15b0b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15b0b8: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x15b0b8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x15b0bc: 0x244200e6  addiu       $v0, $v0, 0xE6
    ctx->pc = 0x15b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 230));
    // 0x15b0c0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x15b0c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b0c4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x15b0c4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_15b0c8:
    // 0x15b0c8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b0cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15b0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0d4: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15b0d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b0dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0e0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B0E0u;
    SET_GPR_U32(ctx, 31, 0x15B0E8u);
    ctx->pc = 0x15B0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0E0u;
            // 0x15b0e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0E8u; }
        if (ctx->pc != 0x15B0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0E8u; }
        if (ctx->pc != 0x15B0E8u) { return; }
    }
    ctx->pc = 0x15B0E8u;
label_15b0e8:
    // 0x15b0e8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15B0E8u;
    {
        const bool branch_taken_0x15b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0E8u;
            // 0x15b0ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0e8) {
            ctx->pc = 0x15B190u;
            goto label_15b190;
        }
    }
    ctx->pc = 0x15B0F0u;
    // 0x15b0f0: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b0f4: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b0f8: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15B0F8u;
    SET_GPR_U32(ctx, 31, 0x15B100u);
    ctx->pc = 0x15B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0F8u;
            // 0x15b0fc: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B100u; }
        if (ctx->pc != 0x15B100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B100u; }
        if (ctx->pc != 0x15B100u) { return; }
    }
    ctx->pc = 0x15B100u;
label_15b100:
    // 0x15b100: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b108: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15b10c: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15B10Cu;
    SET_GPR_U32(ctx, 31, 0x15B114u);
    ctx->pc = 0x15B110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B10Cu;
            // 0x15b110: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B114u; }
        if (ctx->pc != 0x15B114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B114u; }
        if (ctx->pc != 0x15B114u) { return; }
    }
    ctx->pc = 0x15B114u;
label_15b114:
    // 0x15b114: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x15b114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x15b118: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B118u;
    SET_GPR_U32(ctx, 31, 0x15B120u);
    ctx->pc = 0x15B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B118u;
            // 0x15b11c: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B120u; }
        if (ctx->pc != 0x15B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B120u; }
        if (ctx->pc != 0x15B120u) { return; }
    }
    ctx->pc = 0x15B120u;
label_15b120:
    // 0x15b120: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x15b120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b124: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b128: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15b128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x15b12c: 0x2484ebb8  addiu       $a0, $a0, -0x1448
    ctx->pc = 0x15b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962104));
    // 0x15b130: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b134: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b138: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15b138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15b13c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15b13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15b140: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x15b140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x15b144: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b148: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b14c: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x15b14cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15b150: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15b150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15b154: 0xa6140000  sh          $s4, 0x0($s0)
    ctx->pc = 0x15b154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x15b158: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x15b158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x15b15c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b160: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b164: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b168: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b168u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b16c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B16Cu;
    SET_GPR_U32(ctx, 31, 0x15B174u);
    ctx->pc = 0x15B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B16Cu;
            // 0x15b170: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B174u; }
        if (ctx->pc != 0x15B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B174u; }
        if (ctx->pc != 0x15B174u) { return; }
    }
    ctx->pc = 0x15B174u;
label_15b174:
    // 0x15b174: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b178: 0xc055a44  jal         func_156910
    ctx->pc = 0x15B178u;
    SET_GPR_U32(ctx, 31, 0x15B180u);
    ctx->pc = 0x15B17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B178u;
            // 0x15b17c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156910u;
    if (runtime->hasFunction(0x156910u)) {
        auto targetFn = runtime->lookupFunction(0x156910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B180u; }
        if (ctx->pc != 0x15B180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156910_0x156910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B180u; }
        if (ctx->pc != 0x15B180u) { return; }
    }
    ctx->pc = 0x15B180u;
label_15b180:
    // 0x15b180: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15b184: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15B184u;
    {
        const bool branch_taken_0x15b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B184u;
            // 0x15b188: 0xa6020266  sh          $v0, 0x266($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b184) {
            ctx->pc = 0x15B1C8u;
            goto label_15b1c8;
        }
    }
    ctx->pc = 0x15B18Cu;
    // 0x15b18c: 0x0  nop
    ctx->pc = 0x15b18cu;
    // NOP
label_15b190:
    // 0x15b190: 0x1aa0000b  blez        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x15B190u;
    {
        const bool branch_taken_0x15b190 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x15b190) {
            ctx->pc = 0x15B1C0u;
            goto label_15b1c0;
        }
    }
    ctx->pc = 0x15B198u;
    // 0x15b198: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15b19c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15b1a0: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15b1a4:
    // 0x15b1a4: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x15B1A4u;
    SET_GPR_U32(ctx, 31, 0x15B1ACu);
    ctx->pc = 0x15B1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1A4u;
            // 0x15b1a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1ACu; }
        if (ctx->pc != 0x15B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1ACu; }
        if (ctx->pc != 0x15B1ACu) { return; }
    }
    ctx->pc = 0x15B1ACu;
label_15b1ac:
    // 0x15b1ac: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x15b1acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x15b1b0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x15b1b4: 0x0  nop
    ctx->pc = 0x15b1b4u;
    // NOP
    // 0x15b1b8: 0x1ea0fffa  bgtz        $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B1B8u;
    {
        const bool branch_taken_0x15b1b8 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x15b1b8) {
            ctx->pc = 0x15B1A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b1a4;
        }
    }
    ctx->pc = 0x15B1C0u;
label_15b1c0:
    // 0x15b1c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15B1C0u;
    {
        const bool branch_taken_0x15b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1C0u;
            // 0x15b1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1c0) {
            ctx->pc = 0x15B218u;
            goto label_15b218;
        }
    }
    ctx->pc = 0x15B1C8u;
label_15b1c8:
    // 0x15b1c8: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x15b1c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15b1cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15b1d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B1D0u;
    {
        const bool branch_taken_0x15b1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1d0) {
            ctx->pc = 0x15B1E8u;
            goto label_15b1e8;
        }
    }
    ctx->pc = 0x15B1D8u;
    // 0x15b1d8: 0x2682ffac  addiu       $v0, $s4, -0x54
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967212));
    // 0x15b1dc: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x15b1dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b1e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B1E0u;
    {
        const bool branch_taken_0x15b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1E0u;
            // 0x15b1e4: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1e0) {
            ctx->pc = 0x15B1F8u;
            goto label_15b1f8;
        }
    }
    ctx->pc = 0x15B1E8u;
label_15b1e8:
    // 0x15b1e8: 0x26820054  addiu       $v0, $s4, 0x54
    ctx->pc = 0x15b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x15b1ec: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x15b1ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b1f0: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x15b1f0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x15b1f4: 0x0  nop
    ctx->pc = 0x15b1f4u;
    // NOP
label_15b1f8:
    // 0x15b1f8: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x15b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x15b1fc: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x15b1fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b200: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15b200u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x15b204: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x15b204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15b208: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x15b208u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x15b20c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x15B20Cu;
    {
        const bool branch_taken_0x15b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B20Cu;
            // 0x15b210: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b20c) {
            ctx->pc = 0x15B0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b0c8;
        }
    }
    ctx->pc = 0x15B214u;
    // 0x15b214: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_15b218:
    // 0x15b218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b21c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15b21cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b220: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15b220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b22c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b23c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B23Cu;
            // 0x15b240: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B244u;
    // 0x15b244: 0x0  nop
    ctx->pc = 0x15b244u;
    // NOP
    // 0x15b248: 0x0  nop
    ctx->pc = 0x15b248u;
    // NOP
    // 0x15b24c: 0x0  nop
    ctx->pc = 0x15b24cu;
    // NOP
label_15b250:
    // 0x15b250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15b254: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b258: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15b25c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15b260: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15b264: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15b268: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b26c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b274: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15b274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b27c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15b27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b284: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15b284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15b288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b298: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x15b29c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b29cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2a0: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x15b2a4: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b2a8: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x15b2ac: 0x244200e6  addiu       $v0, $v0, 0xE6
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 230));
    // 0x15b2b0: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x15b2b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15b2b4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x15b2b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2bc: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x15b2bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x15b2c0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B2C0u;
    SET_GPR_U32(ctx, 31, 0x15B2C8u);
    ctx->pc = 0x15B2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2C0u;
            // 0x15b2c4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2C8u; }
        if (ctx->pc != 0x15B2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2C8u; }
        if (ctx->pc != 0x15B2C8u) { return; }
    }
    ctx->pc = 0x15B2C8u;
label_15b2c8:
    // 0x15b2c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15b2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2cc: 0x5280005e  beql        $s4, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x15B2CCu;
    {
        const bool branch_taken_0x15b2cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2cc) {
            ctx->pc = 0x15B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2CCu;
            // 0x15b2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B448u;
            goto label_15b448;
        }
    }
    ctx->pc = 0x15B2D4u;
    // 0x15b2d4: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15b2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15b2d8: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b2dc: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15B2DCu;
    SET_GPR_U32(ctx, 31, 0x15B2E4u);
    ctx->pc = 0x15B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2DCu;
            // 0x15b2e0: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2E4u; }
        if (ctx->pc != 0x15B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2E4u; }
        if (ctx->pc != 0x15B2E4u) { return; }
    }
    ctx->pc = 0x15B2E4u;
label_15b2e4:
    // 0x15b2e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b2e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2ec: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15b2f0: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15B2F0u;
    SET_GPR_U32(ctx, 31, 0x15B2F8u);
    ctx->pc = 0x15B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2F0u;
            // 0x15b2f4: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F8u; }
        if (ctx->pc != 0x15B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F8u; }
        if (ctx->pc != 0x15B2F8u) { return; }
    }
    ctx->pc = 0x15B2F8u;
label_15b2f8:
    // 0x15b2f8: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x15b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15b2fc: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15b300: 0x24560008  addiu       $s6, $v0, 0x8
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15b304: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B304u;
    SET_GPR_U32(ctx, 31, 0x15B30Cu);
    ctx->pc = 0x15B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B304u;
            // 0x15b308: 0x32c4ffff  andi        $a0, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B30Cu; }
        if (ctx->pc != 0x15B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B30Cu; }
        if (ctx->pc != 0x15B30Cu) { return; }
    }
    ctx->pc = 0x15B30Cu;
label_15b30c:
    // 0x15b30c: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15b310: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b314: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15b314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x15b318: 0x2484ebc0  addiu       $a0, $a0, -0x1440
    ctx->pc = 0x15b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    // 0x15b31c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b320: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b324: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15b324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15b328: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15b328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15b32c: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x15b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x15b330: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b334: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b338: 0x9264008c  lbu         $a0, 0x8C($s3)
    ctx->pc = 0x15b338u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x15b33c: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15b340: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x15b340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x15b344: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x15b344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x15b348: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b34c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b34cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b350: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b354: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b354u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b358: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B358u;
    SET_GPR_U32(ctx, 31, 0x15B360u);
    ctx->pc = 0x15B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B358u;
            // 0x15b35c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    }
    ctx->pc = 0x15B360u;
label_15b360:
    // 0x15b360: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b364: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x15b368: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x15b368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b36c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b378: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15b37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b384: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B384u;
    SET_GPR_U32(ctx, 31, 0x15B38Cu);
    ctx->pc = 0x15B388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B384u;
            // 0x15b388: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B38Cu; }
        if (ctx->pc != 0x15B38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B38Cu; }
        if (ctx->pc != 0x15B38Cu) { return; }
    }
    ctx->pc = 0x15B38Cu;
label_15b38c:
    // 0x15b38c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x15B38Cu;
    {
        const bool branch_taken_0x15b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b38c) {
            ctx->pc = 0x15B390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B38Cu;
            // 0x15b390: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B434u;
            goto label_15b434;
        }
    }
    ctx->pc = 0x15B394u;
    // 0x15b394: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b398: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b39c: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15B39Cu;
    SET_GPR_U32(ctx, 31, 0x15B3A4u);
    ctx->pc = 0x15B3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B39Cu;
            // 0x15b3a0: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3A4u; }
        if (ctx->pc != 0x15B3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3A4u; }
        if (ctx->pc != 0x15B3A4u) { return; }
    }
    ctx->pc = 0x15B3A4u;
label_15b3a4:
    // 0x15b3a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b3a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3ac: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15b3b0: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15B3B0u;
    SET_GPR_U32(ctx, 31, 0x15B3B8u);
    ctx->pc = 0x15B3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3B0u;
            // 0x15b3b4: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3B8u; }
        if (ctx->pc != 0x15B3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3B8u; }
        if (ctx->pc != 0x15B3B8u) { return; }
    }
    ctx->pc = 0x15B3B8u;
label_15b3b8:
    // 0x15b3b8: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x15b3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x15b3bc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B3BCu;
    SET_GPR_U32(ctx, 31, 0x15B3C4u);
    ctx->pc = 0x15B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3BCu;
            // 0x15b3c0: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3C4u; }
        if (ctx->pc != 0x15B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3C4u; }
        if (ctx->pc != 0x15B3C4u) { return; }
    }
    ctx->pc = 0x15B3C4u;
label_15b3c4:
    // 0x15b3c4: 0x8e6700dc  lw          $a3, 0xDC($s3)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15b3c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b3cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x15b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x15b3d0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x15b3d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b3d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b3d8: 0x24a5ebc0  addiu       $a1, $a1, -0x1440
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962112));
    // 0x15b3dc: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x15b3dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x15b3e0: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x15b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x15b3e4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x15b3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x15b3e8: 0xae0700dc  sw          $a3, 0xDC($s0)
    ctx->pc = 0x15b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
    // 0x15b3ec: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x15b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x15b3f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b3f4: 0xae0505e8  sw          $a1, 0x5E8($s0)
    ctx->pc = 0x15b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 5));
    // 0x15b3f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b3fc: 0x9265008c  lbu         $a1, 0x8C($s3)
    ctx->pc = 0x15b3fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x15b400: 0xa205008c  sb          $a1, 0x8C($s0)
    ctx->pc = 0x15b400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 5));
    // 0x15b404: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x15b404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x15b408: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x15b408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b40c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b410: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b414: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b418: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b418u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b41c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B41Cu;
    SET_GPR_U32(ctx, 31, 0x15B424u);
    ctx->pc = 0x15B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B41Cu;
            // 0x15b420: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B424u; }
        if (ctx->pc != 0x15B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B424u; }
        if (ctx->pc != 0x15B424u) { return; }
    }
    ctx->pc = 0x15B424u;
label_15b424:
    // 0x15b424: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b428: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x15b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x15b42c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B42Cu;
    {
        const bool branch_taken_0x15b42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B42Cu;
            // 0x15b430: 0xa6020266  sh          $v0, 0x266($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b42c) {
            ctx->pc = 0x15B444u;
            goto label_15b444;
        }
    }
    ctx->pc = 0x15B434u;
label_15b434:
    // 0x15b434: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x15B434u;
    SET_GPR_U32(ctx, 31, 0x15B43Cu);
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B43Cu; }
        if (ctx->pc != 0x15B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B43Cu; }
        if (ctx->pc != 0x15B43Cu) { return; }
    }
    ctx->pc = 0x15B43Cu;
label_15b43c:
    // 0x15b43c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B43Cu;
    {
        const bool branch_taken_0x15b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B43Cu;
            // 0x15b440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b43c) {
            ctx->pc = 0x15B448u;
            goto label_15b448;
        }
    }
    ctx->pc = 0x15B444u;
label_15b444:
    // 0x15b444: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15b444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b448:
    // 0x15b448: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15b448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b44c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15b44cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b450: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b45c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b468: 0x3e00008  jr          $ra
    ctx->pc = 0x15B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B468u;
            // 0x15b46c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B470u;
label_15b470:
    // 0x15b470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15b474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b478: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15b47c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b484: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15b484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b488: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b48c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b49c: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b4a0: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b4a4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15b4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b4a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4ac: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b4b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15b4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4b8: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B4B8u;
    SET_GPR_U32(ctx, 31, 0x15B4C0u);
    ctx->pc = 0x15B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4B8u;
            // 0x15b4bc: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C0u; }
        if (ctx->pc != 0x15B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C0u; }
        if (ctx->pc != 0x15B4C0u) { return; }
    }
    ctx->pc = 0x15B4C0u;
label_15b4c0:
    // 0x15b4c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15b4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4c4: 0x52800028  beql        $s4, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x15B4C4u;
    {
        const bool branch_taken_0x15b4c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4c4) {
            ctx->pc = 0x15B4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4C4u;
            // 0x15b4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B568u;
            goto label_15b568;
        }
    }
    ctx->pc = 0x15B4CCu;
    // 0x15b4cc: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15b4d0: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b4d4: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15B4D4u;
    SET_GPR_U32(ctx, 31, 0x15B4DCu);
    ctx->pc = 0x15B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4D4u;
            // 0x15b4d8: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4DCu; }
        if (ctx->pc != 0x15B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4DCu; }
        if (ctx->pc != 0x15B4DCu) { return; }
    }
    ctx->pc = 0x15B4DCu;
label_15b4dc:
    // 0x15b4dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b4e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4e4: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15b4e8: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15B4E8u;
    SET_GPR_U32(ctx, 31, 0x15B4F0u);
    ctx->pc = 0x15B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4E8u;
            // 0x15b4ec: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4F0u; }
        if (ctx->pc != 0x15B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4F0u; }
        if (ctx->pc != 0x15B4F0u) { return; }
    }
    ctx->pc = 0x15B4F0u;
label_15b4f0:
    // 0x15b4f0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15b4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15b4f4: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15b4f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15b4fc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B4FCu;
    SET_GPR_U32(ctx, 31, 0x15B504u);
    ctx->pc = 0x15B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4FCu;
            // 0x15b500: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B504u; }
        if (ctx->pc != 0x15B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B504u; }
        if (ctx->pc != 0x15B504u) { return; }
    }
    ctx->pc = 0x15B504u;
label_15b504:
    // 0x15b504: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b508: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b50c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x15b510: 0x2484ebc8  addiu       $a0, $a0, -0x1438
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962120));
    // 0x15b514: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b518: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b51c: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15b51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15b520: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15b524: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x15b524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x15b528: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b52c: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b530: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x15b530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15b534: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15b534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15b538: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b53c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b53cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b540: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b544: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b544u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b548: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B548u;
    SET_GPR_U32(ctx, 31, 0x15B550u);
    ctx->pc = 0x15B54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B548u;
            // 0x15b54c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B550u; }
        if (ctx->pc != 0x15B550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B550u; }
        if (ctx->pc != 0x15B550u) { return; }
    }
    ctx->pc = 0x15B550u;
label_15b550:
    // 0x15b550: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b554: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b55c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B55Cu;
    SET_GPR_U32(ctx, 31, 0x15B564u);
    ctx->pc = 0x15B560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B55Cu;
            // 0x15b560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B564u; }
        if (ctx->pc != 0x15B564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B564u; }
        if (ctx->pc != 0x15B564u) { return; }
    }
    ctx->pc = 0x15B564u;
label_15b564:
    // 0x15b564: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15b564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b568:
    // 0x15b568: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15b568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b56c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b56cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b570: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b57c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b57cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b584: 0x3e00008  jr          $ra
    ctx->pc = 0x15B584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B584u;
            // 0x15b588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B58Cu;
    // 0x15b58c: 0x0  nop
    ctx->pc = 0x15b58cu;
    // NOP
label_15b590:
    // 0x15b590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15b594: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b594u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b598: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15b59c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b5a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b5a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15b5a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b5ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b5bc: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b5c0: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15b5c0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b5c4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15b5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b5c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5cc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b5d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15b5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5d8: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B5D8u;
    SET_GPR_U32(ctx, 31, 0x15B5E0u);
    ctx->pc = 0x15B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5D8u;
            // 0x15b5dc: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E0u; }
        if (ctx->pc != 0x15B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E0u; }
        if (ctx->pc != 0x15B5E0u) { return; }
    }
    ctx->pc = 0x15B5E0u;
label_15b5e0:
    // 0x15b5e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15b5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5e4: 0x52800028  beql        $s4, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x15B5E4u;
    {
        const bool branch_taken_0x15b5e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5e4) {
            ctx->pc = 0x15B5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5E4u;
            // 0x15b5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B688u;
            goto label_15b688;
        }
    }
    ctx->pc = 0x15B5ECu;
    // 0x15b5ec: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15b5f0: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b5f4: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15B5F4u;
    SET_GPR_U32(ctx, 31, 0x15B5FCu);
    ctx->pc = 0x15B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5F4u;
            // 0x15b5f8: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5FCu; }
        if (ctx->pc != 0x15B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5FCu; }
        if (ctx->pc != 0x15B5FCu) { return; }
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15b600: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b604: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15b608: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15B608u;
    SET_GPR_U32(ctx, 31, 0x15B610u);
    ctx->pc = 0x15B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B608u;
            // 0x15b60c: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B610u; }
        if (ctx->pc != 0x15B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B610u; }
        if (ctx->pc != 0x15B610u) { return; }
    }
    ctx->pc = 0x15B610u;
label_15b610:
    // 0x15b610: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15b614: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15b618: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15b61c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B61Cu;
    SET_GPR_U32(ctx, 31, 0x15B624u);
    ctx->pc = 0x15B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B61Cu;
            // 0x15b620: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B624u; }
        if (ctx->pc != 0x15B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B624u; }
        if (ctx->pc != 0x15B624u) { return; }
    }
    ctx->pc = 0x15B624u;
label_15b624:
    // 0x15b624: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b628: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b62c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x15b630: 0x2484ebd0  addiu       $a0, $a0, -0x1430
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962128));
    // 0x15b634: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b638: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b63c: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15b63cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15b640: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15b640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15b644: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x15b644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x15b648: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b64c: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b650: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x15b650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15b654: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15b654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15b658: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b65c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b660: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b664: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b664u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b668: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B668u;
    SET_GPR_U32(ctx, 31, 0x15B670u);
    ctx->pc = 0x15B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B668u;
            // 0x15b66c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B670u; }
        if (ctx->pc != 0x15B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B670u; }
        if (ctx->pc != 0x15B670u) { return; }
    }
    ctx->pc = 0x15B670u;
label_15b670:
    // 0x15b670: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15b674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b678: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b67c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B67Cu;
    SET_GPR_U32(ctx, 31, 0x15B684u);
    ctx->pc = 0x15B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B67Cu;
            // 0x15b680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B684u; }
        if (ctx->pc != 0x15B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B684u; }
        if (ctx->pc != 0x15B684u) { return; }
    }
    ctx->pc = 0x15B684u;
label_15b684:
    // 0x15b684: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15b684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b688:
    // 0x15b688: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b68c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b68cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6A4u;
            // 0x15b6a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B6ACu;
    // 0x15b6ac: 0x0  nop
    ctx->pc = 0x15b6acu;
    // NOP
label_15b6b0:
    // 0x15b6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b6b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15b6b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b6cc: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15b6ccu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6d4: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b6d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6dc: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15b6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b6e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6e4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b6e8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15b6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6f0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15b6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6f4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B6F4u;
    SET_GPR_U32(ctx, 31, 0x15B6FCu);
    ctx->pc = 0x15B6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6F4u;
            // 0x15b6f8: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6FCu; }
        if (ctx->pc != 0x15B6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6FCu; }
        if (ctx->pc != 0x15B6FCu) { return; }
    }
    ctx->pc = 0x15B6FCu;
label_15b6fc:
    // 0x15b6fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15b6fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b700: 0x5280001d  beql        $s4, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x15B700u;
    {
        const bool branch_taken_0x15b700 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b700) {
            ctx->pc = 0x15B704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B700u;
            // 0x15b704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B778u;
            goto label_15b778;
        }
    }
    ctx->pc = 0x15B708u;
    // 0x15b708: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x15b70c: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15b710: 0x24420092  addiu       $v0, $v0, 0x92
    ctx->pc = 0x15b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 146));
    // 0x15b714: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15b714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15b718: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B718u;
    SET_GPR_U32(ctx, 31, 0x15B720u);
    ctx->pc = 0x15B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B718u;
            // 0x15b71c: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B720u; }
        if (ctx->pc != 0x15B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B720u; }
        if (ctx->pc != 0x15B720u) { return; }
    }
    ctx->pc = 0x15B720u;
label_15b720:
    // 0x15b720: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b724: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b728: 0x2484ebd8  addiu       $a0, $a0, -0x1428
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    // 0x15b72c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b730: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15b734: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15b734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15b738: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b73c: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15b73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15b740: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b744: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b748: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b74c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b74cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b750: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b754: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b754u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b758: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B758u;
    SET_GPR_U32(ctx, 31, 0x15B760u);
    ctx->pc = 0x15B75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B758u;
            // 0x15b75c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B760u; }
        if (ctx->pc != 0x15B760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B760u; }
        if (ctx->pc != 0x15B760u) { return; }
    }
    ctx->pc = 0x15B760u;
label_15b760:
    // 0x15b760: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b764: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15b764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b76c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B76Cu;
    SET_GPR_U32(ctx, 31, 0x15B774u);
    ctx->pc = 0x15B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B76Cu;
            // 0x15b770: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B774u; }
        if (ctx->pc != 0x15B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B774u; }
        if (ctx->pc != 0x15B774u) { return; }
    }
    ctx->pc = 0x15B774u;
label_15b774:
    // 0x15b774: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15b774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b778:
    // 0x15b778: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15b778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b77c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b77cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b790: 0x3e00008  jr          $ra
    ctx->pc = 0x15B790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B790u;
            // 0x15b794: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B798u;
    // 0x15b798: 0x0  nop
    ctx->pc = 0x15b798u;
    // NOP
    // 0x15b79c: 0x0  nop
    ctx->pc = 0x15b79cu;
    // NOP
label_15b7a0:
    // 0x15b7a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b7a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15b7ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b7b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b7b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b7c0: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x15b7c0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b7c4: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b7c8: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15b7c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b7cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15b7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7d0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b7d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15b7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7dc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15b7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7e0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B7E0u;
    SET_GPR_U32(ctx, 31, 0x15B7E8u);
    ctx->pc = 0x15B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7E0u;
            // 0x15b7e4: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7E8u; }
        if (ctx->pc != 0x15B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7E8u; }
        if (ctx->pc != 0x15B7E8u) { return; }
    }
    ctx->pc = 0x15B7E8u;
label_15b7e8:
    // 0x15b7e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15b7e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7ec: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15B7ECu;
    {
        const bool branch_taken_0x15b7ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7ec) {
            ctx->pc = 0x15B7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7ECu;
            // 0x15b7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B7F4u;
    // 0x15b7f4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x15b7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15b7f8: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x15b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x15b7fc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B7FCu;
    SET_GPR_U32(ctx, 31, 0x15B804u);
    ctx->pc = 0x15B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7FCu;
            // 0x15b800: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B804u; }
        if (ctx->pc != 0x15B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B804u; }
        if (ctx->pc != 0x15B804u) { return; }
    }
    ctx->pc = 0x15B804u;
label_15b804:
    // 0x15b804: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15b808: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15b80c: 0x2484ebe0  addiu       $a0, $a0, -0x1420
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962144));
    // 0x15b810: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15b810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b814: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15b818: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15b818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15b81c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b820: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15b820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15b824: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15b824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15b828: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15b828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15b82c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15b82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b830: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15b830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b834: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15b834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b838: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15b838u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b83c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15B83Cu;
    SET_GPR_U32(ctx, 31, 0x15B844u);
    ctx->pc = 0x15B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B83Cu;
            // 0x15b840: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B844u; }
        if (ctx->pc != 0x15B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B844u; }
        if (ctx->pc != 0x15B844u) { return; }
    }
    ctx->pc = 0x15B844u;
label_15b844:
    // 0x15b844: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15b844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15b848: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b84c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b850: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B850u;
    SET_GPR_U32(ctx, 31, 0x15B858u);
    ctx->pc = 0x15B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B850u;
            // 0x15b854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B858u; }
        if (ctx->pc != 0x15B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B858u; }
        if (ctx->pc != 0x15B858u) { return; }
    }
    ctx->pc = 0x15B858u;
label_15b858:
    // 0x15b858: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15b858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b85c:
    // 0x15b85c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b874: 0x3e00008  jr          $ra
    ctx->pc = 0x15B874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B874u;
            // 0x15b878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B87Cu;
    // 0x15b87c: 0x0  nop
    ctx->pc = 0x15b87cu;
    // NOP
label_15b880:
    // 0x15b880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15b884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15b888: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b88c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b8a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15b8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8a4: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15b8a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15b8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8ac: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b8b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8b4: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x15b8b8: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x15b8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x15b8bc: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15b8c0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15b8c4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15B8C4u;
    SET_GPR_U32(ctx, 31, 0x15B8CCu);
    ctx->pc = 0x15B8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8C4u;
            // 0x15b8c8: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8CCu; }
        if (ctx->pc != 0x15B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8CCu; }
        if (ctx->pc != 0x15B8CCu) { return; }
    }
    ctx->pc = 0x15B8CCu;
label_15b8cc:
    // 0x15b8cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B8CCu;
    {
        const bool branch_taken_0x15b8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b8cc) {
            ctx->pc = 0x15B8DCu;
            goto label_15b8dc;
        }
    }
    ctx->pc = 0x15B8D4u;
    // 0x15b8d4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15B8D4u;
    {
        const bool branch_taken_0x15b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8D4u;
            // 0x15b8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8d4) {
            ctx->pc = 0x15B9A4u;
            goto label_15b9a4;
        }
    }
    ctx->pc = 0x15B8DCu;
label_15b8dc:
    // 0x15b8dc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8e8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15b8ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8f0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15b8f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8f4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15B8F4u;
    SET_GPR_U32(ctx, 31, 0x15B8FCu);
    ctx->pc = 0x15B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8F4u;
            // 0x15b8f8: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8FCu; }
        if (ctx->pc != 0x15B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8FCu; }
        if (ctx->pc != 0x15B8FCu) { return; }
    }
    ctx->pc = 0x15B8FCu;
label_15b8fc:
    // 0x15b8fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b900: 0x52a00024  beql        $s5, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x15B900u;
    {
        const bool branch_taken_0x15b900 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b900) {
            ctx->pc = 0x15B904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B900u;
            // 0x15b904: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B994u;
            goto label_15b994;
        }
    }
    ctx->pc = 0x15B908u;
    // 0x15b908: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x15b908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15b90c: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x15b90cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15b910: 0x260200ca  addiu       $v0, $s0, 0xCA
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 202));
    // 0x15b914: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15b914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15b918: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15B918u;
    SET_GPR_U32(ctx, 31, 0x15B920u);
    ctx->pc = 0x15B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B918u;
            // 0x15b91c: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B920u; }
        if (ctx->pc != 0x15B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B920u; }
        if (ctx->pc != 0x15B920u) { return; }
    }
    ctx->pc = 0x15B920u;
label_15b920:
    // 0x15b920: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15b924: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b928: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15b928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15b92c: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x15b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    // 0x15b930: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x15b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x15b934: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15B934u;
    {
        const bool branch_taken_0x15b934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B934u;
            // 0x15b938: 0xae2300dc  sw          $v1, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b934) {
            ctx->pc = 0x15B968u;
            goto label_15b968;
        }
    }
    ctx->pc = 0x15B93Cu;
    // 0x15b93c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x15B93Cu;
    {
        const bool branch_taken_0x15b93c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b93c) {
            ctx->pc = 0x15B968u;
            goto label_15b968;
        }
    }
    ctx->pc = 0x15B944u;
    // 0x15b944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b948: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B948u;
    {
        const bool branch_taken_0x15b948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b948) {
            ctx->pc = 0x15B958u;
            goto label_15b958;
        }
    }
    ctx->pc = 0x15B950u;
    // 0x15b950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B950u;
    {
        const bool branch_taken_0x15b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b950) {
            ctx->pc = 0x15B968u;
            goto label_15b968;
        }
    }
    ctx->pc = 0x15B958u;
label_15b958:
    // 0x15b958: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15b95c: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x15b960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B960u;
    {
        const bool branch_taken_0x15b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B960u;
            // 0x15b964: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b960) {
            ctx->pc = 0x15B974u;
            goto label_15b974;
        }
    }
    ctx->pc = 0x15B968u;
label_15b968:
    // 0x15b968: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15b96c: 0x2442ebe8  addiu       $v0, $v0, -0x1418
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962152));
    // 0x15b970: 0xae2205e8  sw          $v0, 0x5E8($s1)
    ctx->pc = 0x15b970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
label_15b974:
    // 0x15b974: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x15b974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x15b978: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15b97c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x15b97cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b980: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15b984: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x15b984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b988: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x15b988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b98c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x15b98cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b994:
    // 0x15b994: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b998: 0xc057208  jal         func_15C820
    ctx->pc = 0x15B998u;
    SET_GPR_U32(ctx, 31, 0x15B9A0u);
    ctx->pc = 0x15B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B998u;
            // 0x15b99c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9A0u; }
        if (ctx->pc != 0x15B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9A0u; }
        if (ctx->pc != 0x15B9A0u) { return; }
    }
    ctx->pc = 0x15B9A0u;
label_15b9a0:
    // 0x15b9a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15b9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15b9a4:
    // 0x15b9a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15b9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b9a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15b9a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b9ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b9acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9C0u;
            // 0x15b9c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B9C8u;
    // 0x15b9c8: 0x0  nop
    ctx->pc = 0x15b9c8u;
    // NOP
    // 0x15b9cc: 0x0  nop
    ctx->pc = 0x15b9ccu;
    // NOP
label_15b9d0:
    // 0x15b9d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b9d4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15b9d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15b9dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15b9e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b9e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15b9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b9ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b9f4: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15b9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b9fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ba04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ba04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba08: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x15ba08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x15ba0c: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ba10: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x15ba14: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x15ba18: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x15ba18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15ba1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ba1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba20: 0x244201a8  addiu       $v0, $v0, 0x1A8
    ctx->pc = 0x15ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 424));
    // 0x15ba24: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x15ba24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba28: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x15ba28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ba2c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x15ba2cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x15ba30: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15BA30u;
    SET_GPR_U32(ctx, 31, 0x15BA38u);
    ctx->pc = 0x15BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA30u;
            // 0x15ba34: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA38u; }
        if (ctx->pc != 0x15BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA38u; }
        if (ctx->pc != 0x15BA38u) { return; }
    }
    ctx->pc = 0x15BA38u;
label_15ba38:
    // 0x15ba38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15ba38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba3c: 0x52800023  beql        $s4, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x15BA3Cu;
    {
        const bool branch_taken_0x15ba3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba3c) {
            ctx->pc = 0x15BA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA3Cu;
            // 0x15ba40: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BACCu;
            goto label_15bacc;
        }
    }
    ctx->pc = 0x15BA44u;
    // 0x15ba44: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15ba48: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x15ba4c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15BA4Cu;
    SET_GPR_U32(ctx, 31, 0x15BA54u);
    ctx->pc = 0x15BA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA4Cu;
            // 0x15ba50: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA54u; }
        if (ctx->pc != 0x15BA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA54u; }
        if (ctx->pc != 0x15BA54u) { return; }
    }
    ctx->pc = 0x15BA54u;
label_15ba54:
    // 0x15ba54: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x15ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15ba58: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15ba5c: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x15ba60: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15ba60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15ba64: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x15ba68: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x15ba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x15ba6c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x15ba70: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15ba74: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x15ba74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x15ba78: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x15ba78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x15ba7c: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x15ba7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15ba80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ba84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BA84u;
    {
        const bool branch_taken_0x15ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba84) {
            ctx->pc = 0x15BA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA84u;
            // 0x15ba88: 0x2402014a  addiu       $v0, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA98u;
            goto label_15ba98;
        }
    }
    ctx->pc = 0x15BA8Cu;
    // 0x15ba8c: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x15ba90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA90u;
            // 0x15ba94: 0xa60205ec  sh          $v0, 0x5EC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BA9Cu;
            goto label_15ba9c;
        }
    }
    ctx->pc = 0x15BA98u;
label_15ba98:
    // 0x15ba98: 0xa60205ec  sh          $v0, 0x5EC($s0)
    ctx->pc = 0x15ba98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1516), (uint16_t)GPR_U32(ctx, 2));
label_15ba9c:
    // 0x15ba9c: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x15baa0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15baa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15baa4: 0xa60205ee  sh          $v0, 0x5EE($s0)
    ctx->pc = 0x15baa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1518), (uint16_t)GPR_U32(ctx, 2));
    // 0x15baa8: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15baa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15baac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15bab0: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15bab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bab4: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15bab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15bab8: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15bab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15babc: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15BABCu;
    SET_GPR_U32(ctx, 31, 0x15BAC4u);
    ctx->pc = 0x15BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BABCu;
            // 0x15bac0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAC4u; }
        if (ctx->pc != 0x15BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAC4u; }
        if (ctx->pc != 0x15BAC4u) { return; }
    }
    ctx->pc = 0x15BAC4u;
label_15bac4:
    // 0x15bac4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15bac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15bac8: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_15bacc:
    // 0x15bacc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15bad0: 0x24634094  addiu       $v1, $v1, 0x4094
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16532));
    // 0x15bad4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15bad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bad8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15badc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15bae0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15bae4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bae8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15baec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15baf0: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x15baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x15baf4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15baf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15baf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15baf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bafc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bb00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB0Cu;
            // 0x15bb10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BB14u;
    // 0x15bb14: 0x0  nop
    ctx->pc = 0x15bb14u;
    // NOP
    // 0x15bb18: 0x0  nop
    ctx->pc = 0x15bb18u;
    // NOP
    // 0x15bb1c: 0x0  nop
    ctx->pc = 0x15bb1cu;
    // NOP
label_15bb20:
    // 0x15bb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bb24: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15bb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15bb2c: 0x24424094  addiu       $v0, $v0, 0x4094
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16532));
    // 0x15bb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bb34: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x15bb34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15bb38: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bb3c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15bb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15bb40: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15bb44: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15bb48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bb4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15bb50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bb54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bb58: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB58u;
            // 0x15bb5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BC18u;
            goto label_15bc18;
        }
    }
    ctx->pc = 0x15BB60u;
    // 0x15bb60: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bb64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bb68: 0x946205e0  lhu         $v0, 0x5E0($v1)
    ctx->pc = 0x15bb68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1504)));
    // 0x15bb6c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15bb70: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x15BB70u;
    SET_GPR_U32(ctx, 31, 0x15BB78u);
    ctx->pc = 0x15BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB70u;
            // 0x15bb74: 0xa46205e0  sh          $v0, 0x5E0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1504), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB78u; }
        if (ctx->pc != 0x15BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB78u; }
        if (ctx->pc != 0x15BB78u) { return; }
    }
    ctx->pc = 0x15BB78u;
label_15bb78:
    // 0x15bb78: 0xc055914  jal         func_156450
    ctx->pc = 0x15BB78u;
    SET_GPR_U32(ctx, 31, 0x15BB80u);
    ctx->pc = 0x15BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB78u;
            // 0x15bb7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156450u;
    if (runtime->hasFunction(0x156450u)) {
        auto targetFn = runtime->lookupFunction(0x156450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB80u; }
        if (ctx->pc != 0x15BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156450_0x156450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB80u; }
        if (ctx->pc != 0x15BB80u) { return; }
    }
    ctx->pc = 0x15BB80u;
label_15bb80:
    // 0x15bb80: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x15bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bb84: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x15bb88: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15bb8c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15bb90: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15bb94: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x15bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
    // 0x15bb98: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x15bb98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x15bb9c: 0x24844078  addiu       $a0, $a0, 0x4078
    ctx->pc = 0x15bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16504));
    // 0x15bba0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x15bba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x15bba4: 0x2463407c  addiu       $v1, $v1, 0x407C
    ctx->pc = 0x15bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16508));
    // 0x15bba8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15bbac: 0x24424094  addiu       $v0, $v0, 0x4094
    ctx->pc = 0x15bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16532));
    // 0x15bbb0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x15bbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bbb4: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x15bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bbb8: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x15bbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x15bbbc: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x15bbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x15bbc0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15bbc4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15bbc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15bbcc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bbd0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x15bbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bbd4: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x15bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bbd8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15bbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15bbdc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15bbe0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15bbe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bbe8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bbec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bbf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15bbf4: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bbf8: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15bbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15bbfc: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x15bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15bc00: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15bc04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bc08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15bc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bc10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15bc14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15bc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15bc18:
    // 0x15bc18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15bc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC20u;
            // 0x15bc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BC28u;
    // 0x15bc28: 0x0  nop
    ctx->pc = 0x15bc28u;
    // NOP
    // 0x15bc2c: 0x0  nop
    ctx->pc = 0x15bc2cu;
    // NOP
label_15bc30:
    // 0x15bc30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15bc34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15bc3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bc40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bc44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bc50: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15bc54: 0xa28000f7  sb          $zero, 0xF7($s4)
    ctx->pc = 0x15bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bc58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc5c: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x15bc5cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15bc60: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc64: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15bc68: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15bc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc6c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15bc70: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15bc70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc74: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15BC74u;
    SET_GPR_U32(ctx, 31, 0x15BC7Cu);
    ctx->pc = 0x15BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC74u;
            // 0x15bc78: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC7Cu; }
        if (ctx->pc != 0x15BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC7Cu; }
        if (ctx->pc != 0x15BC7Cu) { return; }
    }
    ctx->pc = 0x15BC7Cu;
label_15bc7c:
    // 0x15bc7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15bc7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc80: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15BC80u;
    {
        const bool branch_taken_0x15bc80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc80) {
            ctx->pc = 0x15BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC80u;
            // 0x15bc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BCF0u;
            goto label_15bcf0;
        }
    }
    ctx->pc = 0x15BC88u;
    // 0x15bc88: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15bc8c: 0x240400cd  addiu       $a0, $zero, 0xCD
    ctx->pc = 0x15bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x15bc90: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15BC90u;
    SET_GPR_U32(ctx, 31, 0x15BC98u);
    ctx->pc = 0x15BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC90u;
            // 0x15bc94: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC98u; }
        if (ctx->pc != 0x15BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC98u; }
        if (ctx->pc != 0x15BC98u) { return; }
    }
    ctx->pc = 0x15BC98u;
label_15bc98:
    // 0x15bc98: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x15bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15bc9c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15bca0: 0x2484ec08  addiu       $a0, $a0, -0x13F8
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
    // 0x15bca4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15bca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15bca8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15bcac: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15bcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15bcb0: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15bcb4: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15bcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15bcb8: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15bcbc: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15bcc0: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15bcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bcc4: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15bcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bcc8: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15bcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15bccc: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15bcccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15bcd0: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15BCD0u;
    SET_GPR_U32(ctx, 31, 0x15BCD8u);
    ctx->pc = 0x15BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCD0u;
            // 0x15bcd4: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCD8u; }
        if (ctx->pc != 0x15BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCD8u; }
        if (ctx->pc != 0x15BCD8u) { return; }
    }
    ctx->pc = 0x15BCD8u;
label_15bcd8:
    // 0x15bcd8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15bcdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15bcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15bce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bce4: 0xc057208  jal         func_15C820
    ctx->pc = 0x15BCE4u;
    SET_GPR_U32(ctx, 31, 0x15BCECu);
    ctx->pc = 0x15BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCE4u;
            // 0x15bce8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCECu; }
        if (ctx->pc != 0x15BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCECu; }
        if (ctx->pc != 0x15BCECu) { return; }
    }
    ctx->pc = 0x15BCECu;
label_15bcec:
    // 0x15bcec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15bcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15bcf0:
    // 0x15bcf0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bcf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bcf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bcf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bcf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bcfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bcfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd08: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD08u;
            // 0x15bd0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD10u;
label_15bd10:
    // 0x15bd10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15bd14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15bd18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15bd1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15bd20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bd24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15bd24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bd2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bd30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bd34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bd38: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x15bd38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x15bd3c: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x15bd3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15bd40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15bd44: 0x8442db2e  lh          $v0, -0x24D2($v0)
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957870)));
    // 0x15bd48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bd4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD4Cu;
    {
        const bool branch_taken_0x15bd4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15BD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD4Cu;
            // 0x15bd50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd4c) {
            ctx->pc = 0x15BD5Cu;
            goto label_15bd5c;
        }
    }
    ctx->pc = 0x15BD54u;
    // 0x15bd54: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15bd58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15bd58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15bd5c:
    // 0x15bd5c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x15bd5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bd60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15bd64: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x15bd64u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x15bd68: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x15bd68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x15bd6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15bd70: 0x8442db32  lh          $v0, -0x24CE($v0)
    ctx->pc = 0x15bd70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x15bd74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bd78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD78u;
    {
        const bool branch_taken_0x15bd78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15BD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD78u;
            // 0x15bd7c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd78) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD80u;
    // 0x15bd80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15bd84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15bd84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15bd88:
    // 0x15bd88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bd8c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15bd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15bd90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bd90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bd94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd98: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x15bd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bda0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bda4: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15bda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15bda8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15bda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15bdacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdb0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x15bdb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdb4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15BDB4u;
    SET_GPR_U32(ctx, 31, 0x15BDBCu);
    ctx->pc = 0x15BDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDB4u;
            // 0x15bdb8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDBCu; }
        if (ctx->pc != 0x15BDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDBCu; }
        if (ctx->pc != 0x15BDBCu) { return; }
    }
    ctx->pc = 0x15BDBCu;
label_15bdbc:
    // 0x15bdbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15bdbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc0: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x15BDC0u;
    {
        const bool branch_taken_0x15bdc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdc0) {
            ctx->pc = 0x15BE74u;
            goto label_15be74;
        }
    }
    ctx->pc = 0x15BDC8u;
    // 0x15bdc8: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15bdcc: 0x240400ad  addiu       $a0, $zero, 0xAD
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x15bdd0: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15BDD0u;
    SET_GPR_U32(ctx, 31, 0x15BDD8u);
    ctx->pc = 0x15BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDD0u;
            // 0x15bdd4: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDD8u; }
        if (ctx->pc != 0x15BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDD8u; }
        if (ctx->pc != 0x15BDD8u) { return; }
    }
    ctx->pc = 0x15BDD8u;
label_15bdd8:
    // 0x15bdd8: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x15bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15bddc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15bde0: 0x24a5ec20  addiu       $a1, $a1, -0x13E0
    ctx->pc = 0x15bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    // 0x15bde4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x15bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15bde8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15bde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15bdec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15bdf0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15bdf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15bdf4: 0xae4600dc  sw          $a2, 0xDC($s2)
    ctx->pc = 0x15bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 6));
    // 0x15bdf8: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x15bdf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x15bdfc: 0xae4600dc  sw          $a2, 0xDC($s2)
    ctx->pc = 0x15bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 6));
    // 0x15be00: 0xae4505e8  sw          $a1, 0x5E8($s2)
    ctx->pc = 0x15be00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 5));
    // 0x15be04: 0xa6500000  sh          $s0, 0x0($s2)
    ctx->pc = 0x15be04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x15be08: 0xa6510002  sh          $s1, 0x2($s2)
    ctx->pc = 0x15be08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x15be0c: 0xa6440266  sh          $a0, 0x266($s2)
    ctx->pc = 0x15be0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 4));
    // 0x15be10: 0xa64300f2  sh          $v1, 0xF2($s2)
    ctx->pc = 0x15be10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15be14: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x15be14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15be18: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x15be18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15be1c: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x15be1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15be20: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15BE20u;
    SET_GPR_U32(ctx, 31, 0x15BE28u);
    ctx->pc = 0x15BE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE20u;
            // 0x15be24: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE28u; }
        if (ctx->pc != 0x15BE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE28u; }
        if (ctx->pc != 0x15BE28u) { return; }
    }
    ctx->pc = 0x15BE28u;
label_15be28:
    // 0x15be28: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x15be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15be2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be30: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x15be30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15be34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15be38: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x15be3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be40: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15be40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be44: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x15be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x15be48: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x15BE48u;
    SET_GPR_U32(ctx, 31, 0x15BE50u);
    ctx->pc = 0x15BE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE48u;
            // 0x15be4c: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE50u; }
        if (ctx->pc != 0x15BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE50u; }
        if (ctx->pc != 0x15BE50u) { return; }
    }
    ctx->pc = 0x15BE50u;
label_15be50:
    // 0x15be50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15be54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15be58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15be5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be60: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x15BE60u;
    SET_GPR_U32(ctx, 31, 0x15BE68u);
    ctx->pc = 0x15BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE60u;
            // 0x15be64: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE68u; }
        if (ctx->pc != 0x15BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE68u; }
        if (ctx->pc != 0x15BE68u) { return; }
    }
    ctx->pc = 0x15BE68u;
label_15be68:
    // 0x15be68: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x15be6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15be70: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x15be70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
label_15be74:
    // 0x15be74: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15be74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15be78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15be78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15be7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be80: 0x24c6c6f0  addiu       $a2, $a2, -0x3910
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
    // 0x15be84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15be88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be8c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15BE8Cu;
    SET_GPR_U32(ctx, 31, 0x15BE94u);
    ctx->pc = 0x15BE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE8Cu;
            // 0x15be90: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE94u; }
        if (ctx->pc != 0x15BE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE94u; }
        if (ctx->pc != 0x15BE94u) { return; }
    }
    ctx->pc = 0x15BE94u;
label_15be94:
    // 0x15be94: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15BE94u;
    {
        const bool branch_taken_0x15be94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be94) {
            ctx->pc = 0x15BE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE94u;
            // 0x15be98: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BEE0u;
            goto label_15bee0;
        }
    }
    ctx->pc = 0x15BE9Cu;
    // 0x15be9c: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15bea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bea4: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x15bea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bea8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15beac: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15beacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x15beb0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15beb4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x15beb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x15beb8: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x15beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x15bebc: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x15bec0: 0xc055a44  jal         func_156910
    ctx->pc = 0x15BEC0u;
    SET_GPR_U32(ctx, 31, 0x15BEC8u);
    ctx->pc = 0x15BEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEC0u;
            // 0x15bec4: 0xae0205e8  sw          $v0, 0x5E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156910u;
    if (runtime->hasFunction(0x156910u)) {
        auto targetFn = runtime->lookupFunction(0x156910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEC8u; }
        if (ctx->pc != 0x15BEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156910_0x156910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEC8u; }
        if (ctx->pc != 0x15BEC8u) { return; }
    }
    ctx->pc = 0x15BEC8u;
label_15bec8:
    // 0x15bec8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15bec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15becc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x15beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15bed0: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15bed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bed4: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15bed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bed8: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x15bed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15bedc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15bedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15bee0:
    // 0x15bee0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bee4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bee8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15beec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15beecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15befc: 0x3e00008  jr          $ra
    ctx->pc = 0x15BEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEFCu;
            // 0x15bf00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BF04u;
    // 0x15bf04: 0x0  nop
    ctx->pc = 0x15bf04u;
    // NOP
    // 0x15bf08: 0x0  nop
    ctx->pc = 0x15bf08u;
    // NOP
    // 0x15bf0c: 0x0  nop
    ctx->pc = 0x15bf0cu;
    // NOP
label_15bf10:
    // 0x15bf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bf14: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15bf14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15bf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bf1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bf24: 0x24c6c6f0  addiu       $a2, $a2, -0x3910
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
    // 0x15bf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bf2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15bf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf30: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15bf34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15bf34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15bf38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf3c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15BF3Cu;
    SET_GPR_U32(ctx, 31, 0x15BF44u);
    ctx->pc = 0x15BF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF3Cu;
            // 0x15bf40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF44u; }
        if (ctx->pc != 0x15BF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF44u; }
        if (ctx->pc != 0x15BF44u) { return; }
    }
    ctx->pc = 0x15BF44u;
label_15bf44:
    // 0x15bf44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15bf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf48: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x15BF48u;
    {
        const bool branch_taken_0x15bf48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf48) {
            ctx->pc = 0x15BF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF48u;
            // 0x15bf4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C018u;
            goto label_15c018;
        }
    }
    ctx->pc = 0x15BF50u;
    // 0x15bf50: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bf54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15bf58: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x15bf5c: 0x24a5ec30  addiu       $a1, $a1, -0x13D0
    ctx->pc = 0x15bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962224));
    // 0x15bf60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15bf64: 0x24e74078  addiu       $a3, $a3, 0x4078
    ctx->pc = 0x15bf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16504));
    // 0x15bf68: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x15bf68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15bf6c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x15bf6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15bf70: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bf74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15bf78: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15bf7c: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x15bf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x15bf80: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15bf84: 0xae0505e8  sw          $a1, 0x5E8($s0)
    ctx->pc = 0x15bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 5));
    // 0x15bf88: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x15bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x15bf8c: 0x9065d9c8  lbu         $a1, -0x2638($v1)
    ctx->pc = 0x15bf8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957512)));
    // 0x15bf90: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bf94: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15bf98: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15bf9c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15bfa0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bfa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15bfa8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15bfac: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x15bfacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x15bfb0: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bfb4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15bfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15bfb8: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15bfbc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15bfc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bfc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15bfc8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15bfcc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15bfccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bfd0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15bfd4: 0xc067ca8  jal         func_19F2A0
    ctx->pc = 0x15BFD4u;
    SET_GPR_U32(ctx, 31, 0x15BFDCu);
    ctx->pc = 0x15BFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFD4u;
            // 0x15bfd8: 0xa043d9c8  sb          $v1, -0x2638($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957512), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2A0u;
    if (runtime->hasFunction(0x19F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFDCu; }
        if (ctx->pc != 0x15BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2A0_0x19f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFDCu; }
        if (ctx->pc != 0x15BFDCu) { return; }
    }
    ctx->pc = 0x15BFDCu;
label_15bfdc:
    // 0x15bfdc: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15bfe0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15bfe4: 0x2463407c  addiu       $v1, $v1, 0x407C
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16508));
    // 0x15bfe8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15bfec: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15bfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15bff0: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15bff4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15bff8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bffc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15c000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c004: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15c004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15c008: 0xa6000266  sh          $zero, 0x266($s0)
    ctx->pc = 0x15c008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c00c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c010: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15c010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c014: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c018:
    // 0x15c018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c01c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c024: 0x3e00008  jr          $ra
    ctx->pc = 0x15C024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C024u;
            // 0x15c028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C02Cu;
    // 0x15c02c: 0x0  nop
    ctx->pc = 0x15c02cu;
    // NOP
label_15c030:
    // 0x15c030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c034: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15c044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c04c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15c04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c054: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15c058: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15c05c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15c060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c064: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15C064u;
    SET_GPR_U32(ctx, 31, 0x15C06Cu);
    ctx->pc = 0x15C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C064u;
            // 0x15c068: 0x24c6c6f0  addiu       $a2, $a2, -0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C06Cu; }
        if (ctx->pc != 0x15C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C06Cu; }
        if (ctx->pc != 0x15C06Cu) { return; }
    }
    ctx->pc = 0x15C06Cu;
label_15c06c:
    // 0x15c06c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c070: 0x52400036  beql        $s2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x15C070u;
    {
        const bool branch_taken_0x15c070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c070) {
            ctx->pc = 0x15C074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C070u;
            // 0x15c074: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C14Cu;
            goto label_15c14c;
        }
    }
    ctx->pc = 0x15C078u;
    // 0x15c078: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x15c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15c07c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15c080: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x15c084: 0x24a5ec38  addiu       $a1, $a1, -0x13C8
    ctx->pc = 0x15c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
    // 0x15c088: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c08c: 0x24e74078  addiu       $a3, $a3, 0x4078
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16504));
    // 0x15c090: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15c094: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x15c094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15c098: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c09c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15c0a0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15c0a4: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x15c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x15c0a8: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15c0ac: 0xae0505e8  sw          $a1, 0x5E8($s0)
    ctx->pc = 0x15c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 5));
    // 0x15c0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c0b4: 0x9065d9c8  lbu         $a1, -0x2638($v1)
    ctx->pc = 0x15c0b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957512)));
    // 0x15c0b8: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15c0bc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15c0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15c0c0: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15c0c4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15c0c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c0cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c0d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15c0d4: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x15c0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x15c0d8: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15c0dc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15c0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15c0e0: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x15c0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15c0e4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15c0e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c0ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c0f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15c0f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15c0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c0f8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15c0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15c0fc: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x15C0FCu;
    SET_GPR_U32(ctx, 31, 0x15C104u);
    ctx->pc = 0x15C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0FCu;
            // 0x15c100: 0xa043d9c8  sb          $v1, -0x2638($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957512), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C104u; }
        if (ctx->pc != 0x15C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C104u; }
        if (ctx->pc != 0x15C104u) { return; }
    }
    ctx->pc = 0x15C104u;
label_15c104:
    // 0x15c104: 0xc067ca8  jal         func_19F2A0
    ctx->pc = 0x15C104u;
    SET_GPR_U32(ctx, 31, 0x15C10Cu);
    ctx->pc = 0x15C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C104u;
            // 0x15c108: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2A0u;
    if (runtime->hasFunction(0x19F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C10Cu; }
        if (ctx->pc != 0x15C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2A0_0x19f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C10Cu; }
        if (ctx->pc != 0x15C10Cu) { return; }
    }
    ctx->pc = 0x15C10Cu;
label_15c10c:
    // 0x15c10c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x15c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15c110: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c114: 0x2463407c  addiu       $v1, $v1, 0x407C
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16508));
    // 0x15c118: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x15c118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x15c11c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15c120: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15c120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15c124: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15c124u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15c128: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15c128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15c12c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15c130: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15c130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15c134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c138: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x15c138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x15c13c: 0xa6110266  sh          $s1, 0x266($s0)
    ctx->pc = 0x15c13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 17));
    // 0x15c140: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15c140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c144: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15c144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c148: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15c148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c14c:
    // 0x15c14c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C15Cu;
            // 0x15c160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C164u;
    // 0x15c164: 0x0  nop
    ctx->pc = 0x15c164u;
    // NOP
    // 0x15c168: 0x0  nop
    ctx->pc = 0x15c168u;
    // NOP
    // 0x15c16c: 0x0  nop
    ctx->pc = 0x15c16cu;
    // NOP
label_15c170:
    // 0x15c170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c174: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15c178: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15c17c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15c180: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c184: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c188: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c18c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c194: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x15c194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x15c198: 0x8442db2e  lh          $v0, -0x24D2($v0)
    ctx->pc = 0x15c198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957870)));
    // 0x15c19c: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15c1a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c1a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C1A4u;
    {
        const bool branch_taken_0x15c1a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1A4u;
            // 0x15c1a8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1a4) {
            ctx->pc = 0x15C1B4u;
            goto label_15c1b4;
        }
    }
    ctx->pc = 0x15C1ACu;
    // 0x15c1ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c1b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15c1b4:
    // 0x15c1b4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x15c1b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c1b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15c1bc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x15c1bcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x15c1c0: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x15c1c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x15c1c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15c1c8: 0x8442db32  lh          $v0, -0x24CE($v0)
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x15c1cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c1d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C1D0u;
    {
        const bool branch_taken_0x15c1d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15C1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1D0u;
            // 0x15c1d4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1d0) {
            ctx->pc = 0x15C1E0u;
            goto label_15c1e0;
        }
    }
    ctx->pc = 0x15C1D8u;
    // 0x15c1d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c1dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15c1e0:
    // 0x15c1e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c1e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15c1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c1e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c1ec: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15c1f0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x15c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x15c1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1f8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x15c1f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c1fc: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15c200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15c204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c208: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x15c208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c20c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15C20Cu;
    SET_GPR_U32(ctx, 31, 0x15C214u);
    ctx->pc = 0x15C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C20Cu;
            // 0x15c210: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C214u; }
        if (ctx->pc != 0x15C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C214u; }
        if (ctx->pc != 0x15C214u) { return; }
    }
    ctx->pc = 0x15C214u;
label_15c214:
    // 0x15c214: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15c214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c218: 0x5280002d  beql        $s4, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x15C218u;
    {
        const bool branch_taken_0x15c218 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c218) {
            ctx->pc = 0x15C21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C218u;
            // 0x15c21c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C2D0u;
            goto label_15c2d0;
        }
    }
    ctx->pc = 0x15C220u;
    // 0x15c220: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15c224: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x15c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x15c228: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15C228u;
    SET_GPR_U32(ctx, 31, 0x15C230u);
    ctx->pc = 0x15C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C228u;
            // 0x15c22c: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C230u; }
        if (ctx->pc != 0x15C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C230u; }
        if (ctx->pc != 0x15C230u) { return; }
    }
    ctx->pc = 0x15C230u;
label_15c230:
    // 0x15c230: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x15c230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15c234: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15c234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15c238: 0x24a5ec40  addiu       $a1, $a1, -0x13C0
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
    // 0x15c23c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x15c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15c240: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15c240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15c244: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15c248: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15c248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15c24c: 0xae4600dc  sw          $a2, 0xDC($s2)
    ctx->pc = 0x15c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 6));
    // 0x15c250: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x15c250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x15c254: 0xae4600dc  sw          $a2, 0xDC($s2)
    ctx->pc = 0x15c254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 6));
    // 0x15c258: 0xae4505e8  sw          $a1, 0x5E8($s2)
    ctx->pc = 0x15c258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 5));
    // 0x15c25c: 0xa6500000  sh          $s0, 0x0($s2)
    ctx->pc = 0x15c25cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x15c260: 0xa6510002  sh          $s1, 0x2($s2)
    ctx->pc = 0x15c260u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x15c264: 0xa6440266  sh          $a0, 0x266($s2)
    ctx->pc = 0x15c264u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 4));
    // 0x15c268: 0xa64300f2  sh          $v1, 0xF2($s2)
    ctx->pc = 0x15c268u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c26c: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x15c26cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c270: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x15c270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c274: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x15c274u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15c278: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15C278u;
    SET_GPR_U32(ctx, 31, 0x15C280u);
    ctx->pc = 0x15C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C278u;
            // 0x15c27c: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C280u; }
        if (ctx->pc != 0x15C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C280u; }
        if (ctx->pc != 0x15C280u) { return; }
    }
    ctx->pc = 0x15C280u;
label_15c280:
    // 0x15c280: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x15c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15c284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c288: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x15c288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15c28c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c290: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x15c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x15c294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c298: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x15c298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c29c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x15c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x15c2a0: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x15C2A0u;
    SET_GPR_U32(ctx, 31, 0x15C2A8u);
    ctx->pc = 0x15C2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2A0u;
            // 0x15c2a4: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2A8u; }
        if (ctx->pc != 0x15C2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2A8u; }
        if (ctx->pc != 0x15C2A8u) { return; }
    }
    ctx->pc = 0x15C2A8u;
label_15c2a8:
    // 0x15c2a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c2ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2b8: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x15C2B8u;
    SET_GPR_U32(ctx, 31, 0x15C2C0u);
    ctx->pc = 0x15C2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2B8u;
            // 0x15c2bc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2C0u; }
        if (ctx->pc != 0x15C2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2C0u; }
        if (ctx->pc != 0x15C2C0u) { return; }
    }
    ctx->pc = 0x15C2C0u;
label_15c2c0:
    // 0x15c2c0: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x15c2c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15c2c8: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x15c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    // 0x15c2cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15c2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15c2d0:
    // 0x15c2d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c2d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c2d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c2d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2E8u;
            // 0x15c2ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C2F0u;
    ctx->pc = 0x15c2f0u;
}
