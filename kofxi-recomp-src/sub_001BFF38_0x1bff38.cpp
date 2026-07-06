#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFF38
// Address: 0x1bff38 - 0x1c0300
void sub_001BFF38_0x1bff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFF38_0x1bff38");
#endif

    switch (ctx->pc) {
        case 0x1bff38u: goto label_1bff38;
        case 0x1bff3cu: goto label_1bff3c;
        case 0x1bff40u: goto label_1bff40;
        case 0x1bff44u: goto label_1bff44;
        case 0x1bff48u: goto label_1bff48;
        case 0x1bff4cu: goto label_1bff4c;
        case 0x1bff50u: goto label_1bff50;
        case 0x1bff54u: goto label_1bff54;
        case 0x1bff58u: goto label_1bff58;
        case 0x1bff5cu: goto label_1bff5c;
        case 0x1bff60u: goto label_1bff60;
        case 0x1bff64u: goto label_1bff64;
        case 0x1bff68u: goto label_1bff68;
        case 0x1bff6cu: goto label_1bff6c;
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff74u: goto label_1bff74;
        case 0x1bff78u: goto label_1bff78;
        case 0x1bff7cu: goto label_1bff7c;
        case 0x1bff80u: goto label_1bff80;
        case 0x1bff84u: goto label_1bff84;
        case 0x1bff88u: goto label_1bff88;
        case 0x1bff8cu: goto label_1bff8c;
        case 0x1bff90u: goto label_1bff90;
        case 0x1bff94u: goto label_1bff94;
        case 0x1bff98u: goto label_1bff98;
        case 0x1bff9cu: goto label_1bff9c;
        case 0x1bffa0u: goto label_1bffa0;
        case 0x1bffa4u: goto label_1bffa4;
        case 0x1bffa8u: goto label_1bffa8;
        case 0x1bffacu: goto label_1bffac;
        case 0x1bffb0u: goto label_1bffb0;
        case 0x1bffb4u: goto label_1bffb4;
        case 0x1bffb8u: goto label_1bffb8;
        case 0x1bffbcu: goto label_1bffbc;
        case 0x1bffc0u: goto label_1bffc0;
        case 0x1bffc4u: goto label_1bffc4;
        case 0x1bffc8u: goto label_1bffc8;
        case 0x1bffccu: goto label_1bffcc;
        case 0x1bffd0u: goto label_1bffd0;
        case 0x1bffd4u: goto label_1bffd4;
        case 0x1bffd8u: goto label_1bffd8;
        case 0x1bffdcu: goto label_1bffdc;
        case 0x1bffe0u: goto label_1bffe0;
        case 0x1bffe4u: goto label_1bffe4;
        case 0x1bffe8u: goto label_1bffe8;
        case 0x1bffecu: goto label_1bffec;
        case 0x1bfff0u: goto label_1bfff0;
        case 0x1bfff4u: goto label_1bfff4;
        case 0x1bfff8u: goto label_1bfff8;
        case 0x1bfffcu: goto label_1bfffc;
        case 0x1c0000u: goto label_1c0000;
        case 0x1c0004u: goto label_1c0004;
        case 0x1c0008u: goto label_1c0008;
        case 0x1c000cu: goto label_1c000c;
        case 0x1c0010u: goto label_1c0010;
        case 0x1c0014u: goto label_1c0014;
        case 0x1c0018u: goto label_1c0018;
        case 0x1c001cu: goto label_1c001c;
        case 0x1c0020u: goto label_1c0020;
        case 0x1c0024u: goto label_1c0024;
        case 0x1c0028u: goto label_1c0028;
        case 0x1c002cu: goto label_1c002c;
        case 0x1c0030u: goto label_1c0030;
        case 0x1c0034u: goto label_1c0034;
        case 0x1c0038u: goto label_1c0038;
        case 0x1c003cu: goto label_1c003c;
        case 0x1c0040u: goto label_1c0040;
        case 0x1c0044u: goto label_1c0044;
        case 0x1c0048u: goto label_1c0048;
        case 0x1c004cu: goto label_1c004c;
        case 0x1c0050u: goto label_1c0050;
        case 0x1c0054u: goto label_1c0054;
        case 0x1c0058u: goto label_1c0058;
        case 0x1c005cu: goto label_1c005c;
        case 0x1c0060u: goto label_1c0060;
        case 0x1c0064u: goto label_1c0064;
        case 0x1c0068u: goto label_1c0068;
        case 0x1c006cu: goto label_1c006c;
        case 0x1c0070u: goto label_1c0070;
        case 0x1c0074u: goto label_1c0074;
        case 0x1c0078u: goto label_1c0078;
        case 0x1c007cu: goto label_1c007c;
        case 0x1c0080u: goto label_1c0080;
        case 0x1c0084u: goto label_1c0084;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c008cu: goto label_1c008c;
        case 0x1c0090u: goto label_1c0090;
        case 0x1c0094u: goto label_1c0094;
        case 0x1c0098u: goto label_1c0098;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00a4u: goto label_1c00a4;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00b0u: goto label_1c00b0;
        case 0x1c00b4u: goto label_1c00b4;
        case 0x1c00b8u: goto label_1c00b8;
        case 0x1c00bcu: goto label_1c00bc;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00c4u: goto label_1c00c4;
        case 0x1c00c8u: goto label_1c00c8;
        case 0x1c00ccu: goto label_1c00cc;
        case 0x1c00d0u: goto label_1c00d0;
        case 0x1c00d4u: goto label_1c00d4;
        case 0x1c00d8u: goto label_1c00d8;
        case 0x1c00dcu: goto label_1c00dc;
        case 0x1c00e0u: goto label_1c00e0;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        case 0x1c00f0u: goto label_1c00f0;
        case 0x1c00f4u: goto label_1c00f4;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0100u: goto label_1c0100;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0108u: goto label_1c0108;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0110u: goto label_1c0110;
        case 0x1c0114u: goto label_1c0114;
        case 0x1c0118u: goto label_1c0118;
        case 0x1c011cu: goto label_1c011c;
        case 0x1c0120u: goto label_1c0120;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0218u: goto label_1c0218;
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0220u: goto label_1c0220;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0228u: goto label_1c0228;
        case 0x1c022cu: goto label_1c022c;
        case 0x1c0230u: goto label_1c0230;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0238u: goto label_1c0238;
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0240u: goto label_1c0240;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0248u: goto label_1c0248;
        case 0x1c024cu: goto label_1c024c;
        case 0x1c0250u: goto label_1c0250;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0258u: goto label_1c0258;
        case 0x1c025cu: goto label_1c025c;
        case 0x1c0260u: goto label_1c0260;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c0268u: goto label_1c0268;
        case 0x1c026cu: goto label_1c026c;
        case 0x1c0270u: goto label_1c0270;
        case 0x1c0274u: goto label_1c0274;
        case 0x1c0278u: goto label_1c0278;
        case 0x1c027cu: goto label_1c027c;
        case 0x1c0280u: goto label_1c0280;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c0288u: goto label_1c0288;
        case 0x1c028cu: goto label_1c028c;
        case 0x1c0290u: goto label_1c0290;
        case 0x1c0294u: goto label_1c0294;
        case 0x1c0298u: goto label_1c0298;
        case 0x1c029cu: goto label_1c029c;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02a4u: goto label_1c02a4;
        case 0x1c02a8u: goto label_1c02a8;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02b0u: goto label_1c02b0;
        case 0x1c02b4u: goto label_1c02b4;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02bcu: goto label_1c02bc;
        case 0x1c02c0u: goto label_1c02c0;
        case 0x1c02c4u: goto label_1c02c4;
        case 0x1c02c8u: goto label_1c02c8;
        case 0x1c02ccu: goto label_1c02cc;
        case 0x1c02d0u: goto label_1c02d0;
        case 0x1c02d4u: goto label_1c02d4;
        case 0x1c02d8u: goto label_1c02d8;
        case 0x1c02dcu: goto label_1c02dc;
        case 0x1c02e0u: goto label_1c02e0;
        case 0x1c02e4u: goto label_1c02e4;
        case 0x1c02e8u: goto label_1c02e8;
        case 0x1c02ecu: goto label_1c02ec;
        case 0x1c02f0u: goto label_1c02f0;
        case 0x1c02f4u: goto label_1c02f4;
        case 0x1c02f8u: goto label_1c02f8;
        case 0x1c02fcu: goto label_1c02fc;
        default: break;
    }

    ctx->pc = 0x1bff38u;

label_1bff38:
    // 0x1bff38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bff3c:
    // 0x1bff3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bff40:
    // 0x1bff40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bff40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bff44:
    // 0x1bff44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bff48:
    // 0x1bff48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bff48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bff4c:
    // 0x1bff4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bff50:
    // 0x1bff50: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1bff54:
    if (ctx->pc == 0x1BFF54u) {
        ctx->pc = 0x1BFF54u;
            // 0x1bff54: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1BFF58u;
        goto label_1bff58;
    }
    ctx->pc = 0x1BFF50u;
    {
        const bool branch_taken_0x1bff50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF50u;
            // 0x1bff54: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff50) {
            ctx->pc = 0x1BFF64u;
            goto label_1bff64;
        }
    }
    ctx->pc = 0x1BFF58u;
label_1bff58:
    // 0x1bff58: 0xc06f9b0  jal         func_1BE6C0
label_1bff5c:
    if (ctx->pc == 0x1BFF5Cu) {
        ctx->pc = 0x1BFF60u;
        goto label_1bff60;
    }
    ctx->pc = 0x1BFF58u;
    SET_GPR_U32(ctx, 31, 0x1BFF60u);
    ctx->pc = 0x1BE6C0u;
    if (runtime->hasFunction(0x1BE6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF60u; }
        if (ctx->pc != 0x1BFF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6C0_0x1be6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF60u; }
        if (ctx->pc != 0x1BFF60u) { return; }
    }
    ctx->pc = 0x1BFF60u;
label_1bff60:
    // 0x1bff60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bff60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bff64:
    // 0x1bff64: 0xc06ffba  jal         func_1BFEE8
label_1bff68:
    if (ctx->pc == 0x1BFF68u) {
        ctx->pc = 0x1BFF68u;
            // 0x1bff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF6Cu;
        goto label_1bff6c;
    }
    ctx->pc = 0x1BFF64u;
    SET_GPR_U32(ctx, 31, 0x1BFF6Cu);
    ctx->pc = 0x1BFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF64u;
            // 0x1bff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEE8u;
    if (runtime->hasFunction(0x1BFEE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BFEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF6Cu; }
        if (ctx->pc != 0x1BFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFEE8_0x1bfee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF6Cu; }
        if (ctx->pc != 0x1BFF6Cu) { return; }
    }
    ctx->pc = 0x1BFF6Cu;
label_1bff6c:
    // 0x1bff6c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1bff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
label_1bff70:
    // 0x1bff70: 0x247257a0  addiu       $s2, $v1, 0x57A0
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
label_1bff74:
    // 0x1bff74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bff78:
    // 0x1bff78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bff78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bff7c:
    // 0x1bff7c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1bff80:
    if (ctx->pc == 0x1BFF80u) {
        ctx->pc = 0x1BFF80u;
            // 0x1bff80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF84u;
        goto label_1bff84;
    }
    ctx->pc = 0x1BFF7Cu;
    {
        const bool branch_taken_0x1bff7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BFF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF7Cu;
            // 0x1bff80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff7c) {
            ctx->pc = 0x1BFFB8u;
            goto label_1bffb8;
        }
    }
    ctx->pc = 0x1BFF84u;
label_1bff84:
    // 0x1bff84: 0xc04a7dc  jal         func_129F70
label_1bff88:
    if (ctx->pc == 0x1BFF88u) {
        ctx->pc = 0x1BFF8Cu;
        goto label_1bff8c;
    }
    ctx->pc = 0x1BFF84u;
    SET_GPR_U32(ctx, 31, 0x1BFF8Cu);
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF8Cu; }
        if (ctx->pc != 0x1BFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF8Cu; }
        if (ctx->pc != 0x1BFF8Cu) { return; }
    }
    ctx->pc = 0x1BFF8Cu;
label_1bff8c:
    // 0x1bff8c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1bff90:
    // 0x1bff90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bff90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bff94:
    // 0x1bff94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bff94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bff98:
    // 0x1bff98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bff9c:
    // 0x1bff9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bff9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bffa0:
    // 0x1bffa0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bffa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bffa4:
    // 0x1bffa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bffa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bffa8:
    // 0x1bffa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bffac:
    // 0x1bffac: 0x24a59660  addiu       $a1, $a1, -0x69A0
    ctx->pc = 0x1bffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940256));
label_1bffb0:
    // 0x1bffb0: 0x804a5f2  j           func_1297C8
label_1bffb4:
    if (ctx->pc == 0x1BFFB4u) {
        ctx->pc = 0x1BFFB4u;
            // 0x1bffb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BFFB8u;
        goto label_1bffb8;
    }
    ctx->pc = 0x1BFFB0u;
    ctx->pc = 0x1BFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFB0u;
            // 0x1bffb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001297C8_0x1297c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BFFB8u;
label_1bffb8:
    // 0x1bffb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bffb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bffbc:
    // 0x1bffbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bffbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bffc0:
    // 0x1bffc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bffc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bffc4:
    // 0x1bffc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bffc8:
    // 0x1bffc8: 0x3e00008  jr          $ra
label_1bffcc:
    if (ctx->pc == 0x1BFFCCu) {
        ctx->pc = 0x1BFFCCu;
            // 0x1bffcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BFFD0u;
        goto label_1bffd0;
    }
    ctx->pc = 0x1BFFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFC8u;
            // 0x1bffcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFFD0u;
label_1bffd0:
    // 0x1bffd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bffd4:
    // 0x1bffd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bffd8:
    // 0x1bffd8: 0xc06f8ea  jal         func_1BE3A8
label_1bffdc:
    if (ctx->pc == 0x1BFFDCu) {
        ctx->pc = 0x1BFFE0u;
        goto label_1bffe0;
    }
    ctx->pc = 0x1BFFD8u;
    SET_GPR_U32(ctx, 31, 0x1BFFE0u);
    ctx->pc = 0x1BE3A8u;
    if (runtime->hasFunction(0x1BE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE0u; }
        if (ctx->pc != 0x1BFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3A8_0x1be3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE0u; }
        if (ctx->pc != 0x1BFFE0u) { return; }
    }
    ctx->pc = 0x1BFFE0u;
label_1bffe0:
    // 0x1bffe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bffe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bffe4:
    // 0x1bffe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bffe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bffe8:
    // 0x1bffe8: 0x3e00008  jr          $ra
label_1bffec:
    if (ctx->pc == 0x1BFFECu) {
        ctx->pc = 0x1BFFECu;
            // 0x1bffec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BFFF0u;
        goto label_1bfff0;
    }
    ctx->pc = 0x1BFFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFE8u;
            // 0x1bffec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFFF0u;
label_1bfff0:
    // 0x1bfff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bfff4:
    // 0x1bfff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bfff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bfff8:
    // 0x1bfff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bfff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bfffc:
    // 0x1bfffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bfffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c0000:
    // 0x1c0000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0004:
    // 0x1c0004: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1c0008:
    if (ctx->pc == 0x1C0008u) {
        ctx->pc = 0x1C0008u;
            // 0x1c0008: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1C000Cu;
        goto label_1c000c;
    }
    ctx->pc = 0x1C0004u;
    {
        const bool branch_taken_0x1c0004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0004u;
            // 0x1c0008: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0004) {
            ctx->pc = 0x1C0020u;
            goto label_1c0020;
        }
    }
    ctx->pc = 0x1C000Cu;
label_1c000c:
    // 0x1c000c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c0010:
    // 0x1c0010: 0xc06f838  jal         func_1BE0E0
label_1c0014:
    if (ctx->pc == 0x1C0014u) {
        ctx->pc = 0x1C0014u;
            // 0x1c0014: 0x24849668  addiu       $a0, $a0, -0x6998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940264));
        ctx->pc = 0x1C0018u;
        goto label_1c0018;
    }
    ctx->pc = 0x1C0010u;
    SET_GPR_U32(ctx, 31, 0x1C0018u);
    ctx->pc = 0x1C0014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0010u;
            // 0x1c0014: 0x24849668  addiu       $a0, $a0, -0x6998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0018u; }
        if (ctx->pc != 0x1C0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0018u; }
        if (ctx->pc != 0x1C0018u) { return; }
    }
    ctx->pc = 0x1C0018u;
label_1c0018:
    // 0x1c0018: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c001c:
    if (ctx->pc == 0x1C001Cu) {
        ctx->pc = 0x1C001Cu;
            // 0x1c001c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0020u;
        goto label_1c0020;
    }
    ctx->pc = 0x1C0018u;
    {
        const bool branch_taken_0x1c0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0018u;
            // 0x1c001c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0018) {
            ctx->pc = 0x1C0074u;
            goto label_1c0074;
        }
    }
    ctx->pc = 0x1C0020u;
label_1c0020:
    // 0x1c0020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0024:
    // 0x1c0024: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1c0028:
    // 0x1c0028: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1c002c:
    if (ctx->pc == 0x1C002Cu) {
        ctx->pc = 0x1C002Cu;
            // 0x1c002c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1C0030u;
        goto label_1c0030;
    }
    ctx->pc = 0x1C0028u;
    {
        const bool branch_taken_0x1c0028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0028u;
            // 0x1c002c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0028) {
            ctx->pc = 0x1C0070u;
            goto label_1c0070;
        }
    }
    ctx->pc = 0x1C0030u;
label_1c0030:
    // 0x1c0030: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c0030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c0034:
    // 0x1c0034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0038:
    // 0x1c0038: 0x40f809  jalr        $v0
label_1c003c:
    if (ctx->pc == 0x1C003Cu) {
        ctx->pc = 0x1C003Cu;
            // 0x1c003c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0040u;
        goto label_1c0040;
    }
    ctx->pc = 0x1C0038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0040u);
        ctx->pc = 0x1C003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0038u;
            // 0x1c003c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0040u; }
            if (ctx->pc != 0x1C0040u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0040u;
label_1c0040:
    // 0x1c0040: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0044:
    // 0x1c0044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0048:
    // 0x1c0048: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c0048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c004c:
    // 0x1c004c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1c0050:
    // 0x1c0050: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x1c0050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_1c0054:
    // 0x1c0054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0058:
    // 0x1c0058: 0x40f809  jalr        $v0
label_1c005c:
    if (ctx->pc == 0x1C005Cu) {
        ctx->pc = 0x1C005Cu;
            // 0x1c005c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0060u;
        goto label_1c0060;
    }
    ctx->pc = 0x1C0058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0060u);
        ctx->pc = 0x1C005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0058u;
            // 0x1c005c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0060u; }
            if (ctx->pc != 0x1C0060u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0060u;
label_1c0060:
    // 0x1c0060: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1c0060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1c0064:
    // 0x1c0064: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c0068:
    // 0x1c0068: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1c006c:
    // 0x1c006c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1c006cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1c0070:
    // 0x1c0070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0074:
    // 0x1c0074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0078:
    // 0x1c0078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c007c:
    // 0x1c007c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0080:
    // 0x1c0080: 0x3e00008  jr          $ra
label_1c0084:
    if (ctx->pc == 0x1C0084u) {
        ctx->pc = 0x1C0084u;
            // 0x1c0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C0088u;
        goto label_1c0088;
    }
    ctx->pc = 0x1C0080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0080u;
            // 0x1c0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1c0088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1c008c:
    // 0x1c008c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1c008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1c0090:
    // 0x1c0090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0094:
    // 0x1c0094: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x1c0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_1c0098:
    // 0x1c0098: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x1c0098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1c009c:
    // 0x1c009c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c009cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c00a0:
    // 0x1c00a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c00a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c00a4:
    // 0x1c00a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c00a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c00a8:
    // 0x1c00a8: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1c00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1c00ac:
    // 0x1c00ac: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1c00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1c00b0:
    // 0x1c00b0: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x1c00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_1c00b4:
    // 0x1c00b4: 0xc06fa46  jal         func_1BE918
label_1c00b8:
    if (ctx->pc == 0x1C00B8u) {
        ctx->pc = 0x1C00B8u;
            // 0x1c00b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C00BCu;
        goto label_1c00bc;
    }
    ctx->pc = 0x1C00B4u;
    SET_GPR_U32(ctx, 31, 0x1C00BCu);
    ctx->pc = 0x1C00B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00B4u;
            // 0x1c00b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (runtime->hasFunction(0x1BE918u)) {
        auto targetFn = runtime->lookupFunction(0x1BE918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00BCu; }
        if (ctx->pc != 0x1C00BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE918_0x1be918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00BCu; }
        if (ctx->pc != 0x1C00BCu) { return; }
    }
    ctx->pc = 0x1C00BCu;
label_1c00bc:
    // 0x1c00bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c00c0:
    // 0x1c00c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c00c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c00c4:
    // 0x1c00c4: 0xc06f9b4  jal         func_1BE6D0
label_1c00c8:
    if (ctx->pc == 0x1C00C8u) {
        ctx->pc = 0x1C00C8u;
            // 0x1c00c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C00CCu;
        goto label_1c00cc;
    }
    ctx->pc = 0x1C00C4u;
    SET_GPR_U32(ctx, 31, 0x1C00CCu);
    ctx->pc = 0x1C00C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00C4u;
            // 0x1c00c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (runtime->hasFunction(0x1BE6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00CCu; }
        if (ctx->pc != 0x1C00CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6D0_0x1be6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00CCu; }
        if (ctx->pc != 0x1C00CCu) { return; }
    }
    ctx->pc = 0x1C00CCu;
label_1c00cc:
    // 0x1c00cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c00ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c00d0:
    // 0x1c00d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c00d4:
    // 0x1c00d4: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_1c00d8:
    // 0x1c00d8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1c00dc:
    // 0x1c00dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c00dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c00e0:
    // 0x1c00e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c00e4:
    if (ctx->pc == 0x1C00E4u) {
        ctx->pc = 0x1C00E4u;
            // 0x1c00e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E8u;
        goto label_1c00e8;
    }
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00E0u;
            // 0x1c00e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C011Cu;
            goto label_1c011c;
        }
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0x40f809  jalr        $v0
label_1c00ec:
    if (ctx->pc == 0x1C00ECu) {
        ctx->pc = 0x1C00F0u;
        goto label_1c00f0;
    }
    ctx->pc = 0x1C00E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C00F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C00F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C00F0u; }
            if (ctx->pc != 0x1C00F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C00F0u;
label_1c00f0:
    // 0x1c00f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c00f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c00f4:
    // 0x1c00f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c00f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c00f8:
    // 0x1c00f8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1c00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1c00fc:
    // 0x1c00fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c00fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0100:
    // 0x1c0100: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_1c0104:
    // 0x1c0104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0108:
    // 0x1c0108: 0x40f809  jalr        $v0
label_1c010c:
    if (ctx->pc == 0x1C010Cu) {
        ctx->pc = 0x1C010Cu;
            // 0x1c010c: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x1C0110u;
        goto label_1c0110;
    }
    ctx->pc = 0x1C0108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0110u);
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0108u;
            // 0x1c010c: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0110u; }
            if (ctx->pc != 0x1C0110u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0110u;
label_1c0110:
    // 0x1c0110: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c0114:
    // 0x1c0114: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1c0118:
    // 0x1c0118: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1c0118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1c011c:
    // 0x1c011c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c011cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0120:
    // 0x1c0120: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1c0120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1c0124:
    // 0x1c0124: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1c0124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1c0128:
    // 0x1c0128: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x1c0128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1c012c:
    // 0x1c012c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x1c012cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1c0130:
    // 0x1c0130: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x1c0130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1c0134:
    // 0x1c0134: 0x3e00008  jr          $ra
label_1c0138:
    if (ctx->pc == 0x1C0138u) {
        ctx->pc = 0x1C0138u;
            // 0x1c0138: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1C013Cu;
        goto label_1c013c;
    }
    ctx->pc = 0x1C0134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0134u;
            // 0x1c0138: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C013Cu;
label_1c013c:
    // 0x1c013c: 0x0  nop
    ctx->pc = 0x1c013cu;
    // NOP
label_1c0140:
    // 0x1c0140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c0144:
    // 0x1c0144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c0148:
    // 0x1c0148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c014c:
    // 0x1c014c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c0150:
    // 0x1c0150: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1c0154:
    if (ctx->pc == 0x1C0154u) {
        ctx->pc = 0x1C0154u;
            // 0x1c0154: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1C0158u;
        goto label_1c0158;
    }
    ctx->pc = 0x1C0150u;
    {
        const bool branch_taken_0x1c0150 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0150u;
            // 0x1c0154: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0150) {
            ctx->pc = 0x1C0170u;
            goto label_1c0170;
        }
    }
    ctx->pc = 0x1C0158u;
label_1c0158:
    // 0x1c0158: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c0158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c015c:
    // 0x1c015c: 0xc06f838  jal         func_1BE0E0
label_1c0160:
    if (ctx->pc == 0x1C0160u) {
        ctx->pc = 0x1C0160u;
            // 0x1c0160: 0x24849688  addiu       $a0, $a0, -0x6978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940296));
        ctx->pc = 0x1C0164u;
        goto label_1c0164;
    }
    ctx->pc = 0x1C015Cu;
    SET_GPR_U32(ctx, 31, 0x1C0164u);
    ctx->pc = 0x1C0160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C015Cu;
            // 0x1c0160: 0x24849688  addiu       $a0, $a0, -0x6978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0164u; }
        if (ctx->pc != 0x1C0164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0164u; }
        if (ctx->pc != 0x1C0164u) { return; }
    }
    ctx->pc = 0x1C0164u;
label_1c0164:
    // 0x1c0164: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c0168:
    if (ctx->pc == 0x1C0168u) {
        ctx->pc = 0x1C0168u;
            // 0x1c0168: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C016Cu;
        goto label_1c016c;
    }
    ctx->pc = 0x1C0164u;
    {
        const bool branch_taken_0x1c0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0164u;
            // 0x1c0168: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0164) {
            ctx->pc = 0x1C01CCu;
            goto label_1c01cc;
        }
    }
    ctx->pc = 0x1C016Cu;
label_1c016c:
    // 0x1c016c: 0x0  nop
    ctx->pc = 0x1c016cu;
    // NOP
label_1c0170:
    // 0x1c0170: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0174:
    // 0x1c0174: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x1c0174u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_1c0178:
    // 0x1c0178: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1c0178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_1c017c:
    // 0x1c017c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1c017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1c0180:
    // 0x1c0180: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1c0184:
    if (ctx->pc == 0x1C0184u) {
        ctx->pc = 0x1C0184u;
            // 0x1c0184: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->pc = 0x1C0188u;
        goto label_1c0188;
    }
    ctx->pc = 0x1C0180u;
    {
        const bool branch_taken_0x1c0180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0180u;
            // 0x1c0184: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0180) {
            ctx->pc = 0x1C01C8u;
            goto label_1c01c8;
        }
    }
    ctx->pc = 0x1C0188u;
label_1c0188:
    // 0x1c0188: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c0188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c018c:
    // 0x1c018c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0190:
    // 0x1c0190: 0x40f809  jalr        $v0
label_1c0194:
    if (ctx->pc == 0x1C0194u) {
        ctx->pc = 0x1C0194u;
            // 0x1c0194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0198u;
        goto label_1c0198;
    }
    ctx->pc = 0x1C0190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0198u);
        ctx->pc = 0x1C0194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0190u;
            // 0x1c0194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0198u; }
            if (ctx->pc != 0x1C0198u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0198u;
label_1c0198:
    // 0x1c0198: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c019c:
    // 0x1c019c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c019cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c01a0:
    // 0x1c01a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c01a4:
    // 0x1c01a4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1c01a8:
    // 0x1c01a8: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_1c01ac:
    // 0x1c01ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c01acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01b0:
    // 0x1c01b0: 0x40f809  jalr        $v0
label_1c01b4:
    if (ctx->pc == 0x1C01B4u) {
        ctx->pc = 0x1C01B4u;
            // 0x1c01b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C01B8u;
        goto label_1c01b8;
    }
    ctx->pc = 0x1C01B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C01B8u);
        ctx->pc = 0x1C01B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01B0u;
            // 0x1c01b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C01B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C01B8u; }
            if (ctx->pc != 0x1C01B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C01B8u;
label_1c01b8:
    // 0x1c01b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1c01b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1c01bc:
    // 0x1c01bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c01bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c01c0:
    // 0x1c01c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c01c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1c01c4:
    // 0x1c01c4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1c01c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1c01c8:
    // 0x1c01c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c01c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c01cc:
    // 0x1c01cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c01d0:
    // 0x1c01d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c01d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c01d4:
    // 0x1c01d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c01d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c01d8:
    // 0x1c01d8: 0x3e00008  jr          $ra
label_1c01dc:
    if (ctx->pc == 0x1C01DCu) {
        ctx->pc = 0x1C01DCu;
            // 0x1c01dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C01E0u;
        goto label_1c01e0;
    }
    ctx->pc = 0x1C01D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01D8u;
            // 0x1c01dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C01E0u;
label_1c01e0:
    // 0x1c01e0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1c01e4:
    // 0x1c01e4: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1c01e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1c01e8:
    // 0x1c01e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c01e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c01ec:
    // 0x1c01ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c01ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c01f0:
    // 0x1c01f0: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1c01f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1c01f4:
    // 0x1c01f4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x1c01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_1c01f8:
    // 0x1c01f8: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x1c01f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_1c01fc:
    // 0x1c01fc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1c01fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1c0200:
    // 0x1c0200: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x1c0200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_1c0204:
    // 0x1c0204: 0xc06f8ea  jal         func_1BE3A8
label_1c0208:
    if (ctx->pc == 0x1C0208u) {
        ctx->pc = 0x1C0208u;
            // 0x1c0208: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C020Cu;
        goto label_1c020c;
    }
    ctx->pc = 0x1C0204u;
    SET_GPR_U32(ctx, 31, 0x1C020Cu);
    ctx->pc = 0x1C0208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0204u;
            // 0x1c0208: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3A8u;
    if (runtime->hasFunction(0x1BE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C020Cu; }
        if (ctx->pc != 0x1C020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3A8_0x1be3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C020Cu; }
        if (ctx->pc != 0x1C020Cu) { return; }
    }
    ctx->pc = 0x1C020Cu;
label_1c020c:
    // 0x1c020c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c020cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0210:
    // 0x1c0210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0214:
    // 0x1c0214: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1c0218:
    // 0x1c0218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c021c:
    // 0x1c021c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c021cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0220:
    // 0x1c0220: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_1c0224:
    if (ctx->pc == 0x1C0224u) {
        ctx->pc = 0x1C0224u;
            // 0x1c0224: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0228u;
        goto label_1c0228;
    }
    ctx->pc = 0x1C0220u;
    {
        const bool branch_taken_0x1c0220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0220u;
            // 0x1c0224: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0220) {
            ctx->pc = 0x1C0280u;
            goto label_1c0280;
        }
    }
    ctx->pc = 0x1C0228u;
label_1c0228:
    // 0x1c0228: 0xc06fa46  jal         func_1BE918
label_1c022c:
    if (ctx->pc == 0x1C022Cu) {
        ctx->pc = 0x1C0230u;
        goto label_1c0230;
    }
    ctx->pc = 0x1C0228u;
    SET_GPR_U32(ctx, 31, 0x1C0230u);
    ctx->pc = 0x1BE918u;
    if (runtime->hasFunction(0x1BE918u)) {
        auto targetFn = runtime->lookupFunction(0x1BE918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0230u; }
        if (ctx->pc != 0x1C0230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE918_0x1be918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0230u; }
        if (ctx->pc != 0x1C0230u) { return; }
    }
    ctx->pc = 0x1C0230u;
label_1c0230:
    // 0x1c0230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0234:
    // 0x1c0234: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1c0238:
    // 0x1c0238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c023c:
    // 0x1c023c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c023cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c0240:
    // 0x1c0240: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1c0244:
    // 0x1c0244: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1c0248:
    if (ctx->pc == 0x1C0248u) {
        ctx->pc = 0x1C0248u;
            // 0x1c0248: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C024Cu;
        goto label_1c024c;
    }
    ctx->pc = 0x1C0244u;
    {
        const bool branch_taken_0x1c0244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0244u;
            // 0x1c0248: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0244) {
            ctx->pc = 0x1C0280u;
            goto label_1c0280;
        }
    }
    ctx->pc = 0x1C024Cu;
label_1c024c:
    // 0x1c024c: 0x60f809  jalr        $v1
label_1c0250:
    if (ctx->pc == 0x1C0250u) {
        ctx->pc = 0x1C0254u;
        goto label_1c0254;
    }
    ctx->pc = 0x1C024Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0254u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0254u; }
            if (ctx->pc != 0x1C0254u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0254u;
label_1c0254:
    // 0x1c0254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0258:
    // 0x1c0258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c025c:
    // 0x1c025c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1c0260:
    // 0x1c0260: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c0260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0264:
    // 0x1c0264: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c0264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c0268:
    // 0x1c0268: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x1c0268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_1c026c:
    // 0x1c026c: 0x40f809  jalr        $v0
label_1c0270:
    if (ctx->pc == 0x1C0270u) {
        ctx->pc = 0x1C0270u;
            // 0x1c0270: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x1C0274u;
        goto label_1c0274;
    }
    ctx->pc = 0x1C026Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0274u);
        ctx->pc = 0x1C0270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C026Cu;
            // 0x1c0270: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0274u; }
            if (ctx->pc != 0x1C0274u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0274u;
label_1c0274:
    // 0x1c0274: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c0278:
    // 0x1c0278: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1c027c:
    // 0x1c027c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x1c027cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1c0280:
    // 0x1c0280: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1c0280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1c0284:
    // 0x1c0284: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1c0284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1c0288:
    // 0x1c0288: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x1c0288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1c028c:
    // 0x1c028c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x1c028cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1c0290:
    // 0x1c0290: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x1c0290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1c0294:
    // 0x1c0294: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x1c0294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_1c0298:
    // 0x1c0298: 0x3e00008  jr          $ra
label_1c029c:
    if (ctx->pc == 0x1C029Cu) {
        ctx->pc = 0x1C029Cu;
            // 0x1c029c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1C02A0u;
        goto label_1c02a0;
    }
    ctx->pc = 0x1C0298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0298u;
            // 0x1c029c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C02A0u;
label_1c02a0:
    // 0x1c02a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c02a4:
    // 0x1c02a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c02a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c02a8:
    // 0x1c02a8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1c02ac:
    if (ctx->pc == 0x1C02ACu) {
        ctx->pc = 0x1C02ACu;
            // 0x1c02ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C02B0u;
        goto label_1c02b0;
    }
    ctx->pc = 0x1C02A8u;
    {
        const bool branch_taken_0x1c02a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02A8u;
            // 0x1c02ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02a8) {
            ctx->pc = 0x1C02C8u;
            goto label_1c02c8;
        }
    }
    ctx->pc = 0x1C02B0u;
label_1c02b0:
    // 0x1c02b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c02b4:
    // 0x1c02b4: 0xc06f838  jal         func_1BE0E0
label_1c02b8:
    if (ctx->pc == 0x1C02B8u) {
        ctx->pc = 0x1C02B8u;
            // 0x1c02b8: 0x248496b8  addiu       $a0, $a0, -0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940344));
        ctx->pc = 0x1C02BCu;
        goto label_1c02bc;
    }
    ctx->pc = 0x1C02B4u;
    SET_GPR_U32(ctx, 31, 0x1C02BCu);
    ctx->pc = 0x1C02B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02B4u;
            // 0x1c02b8: 0x248496b8  addiu       $a0, $a0, -0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02BCu; }
        if (ctx->pc != 0x1C02BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02BCu; }
        if (ctx->pc != 0x1C02BCu) { return; }
    }
    ctx->pc = 0x1C02BCu;
label_1c02bc:
    // 0x1c02bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c02c0:
    if (ctx->pc == 0x1C02C0u) {
        ctx->pc = 0x1C02C0u;
            // 0x1c02c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C02C4u;
        goto label_1c02c4;
    }
    ctx->pc = 0x1C02BCu;
    {
        const bool branch_taken_0x1c02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02BCu;
            // 0x1c02c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02bc) {
            ctx->pc = 0x1C02F0u;
            goto label_1c02f0;
        }
    }
    ctx->pc = 0x1C02C4u;
label_1c02c4:
    // 0x1c02c4: 0x0  nop
    ctx->pc = 0x1c02c4u;
    // NOP
label_1c02c8:
    // 0x1c02c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c02cc:
    // 0x1c02cc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1c02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1c02d0:
    // 0x1c02d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c02d4:
    if (ctx->pc == 0x1C02D4u) {
        ctx->pc = 0x1C02D4u;
            // 0x1c02d4: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->pc = 0x1C02D8u;
        goto label_1c02d8;
    }
    ctx->pc = 0x1C02D0u;
    {
        const bool branch_taken_0x1c02d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02D0u;
            // 0x1c02d4: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02d0) {
            ctx->pc = 0x1C02ECu;
            goto label_1c02ec;
        }
    }
    ctx->pc = 0x1C02D8u;
label_1c02d8:
    // 0x1c02d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c02dc:
    // 0x1c02dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c02dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c02e0:
    // 0x1c02e0: 0x40f809  jalr        $v0
label_1c02e4:
    if (ctx->pc == 0x1C02E4u) {
        ctx->pc = 0x1C02E4u;
            // 0x1c02e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E8u;
        goto label_1c02e8;
    }
    ctx->pc = 0x1C02E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C02E8u);
        ctx->pc = 0x1C02E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02E0u;
            // 0x1c02e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C02E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C02E8u; }
            if (ctx->pc != 0x1C02E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C02E8u;
label_1c02e8:
    // 0x1c02e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c02e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c02ec:
    // 0x1c02ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c02ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c02f0:
    // 0x1c02f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c02f4:
    // 0x1c02f4: 0x3e00008  jr          $ra
label_1c02f8:
    if (ctx->pc == 0x1C02F8u) {
        ctx->pc = 0x1C02F8u;
            // 0x1c02f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C02FCu;
        goto label_1c02fc;
    }
    ctx->pc = 0x1C02F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02F4u;
            // 0x1c02f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C02FCu;
label_1c02fc:
    // 0x1c02fc: 0x0  nop
    ctx->pc = 0x1c02fcu;
    // NOP
    ctx->pc = 0x1c0300u;
}
