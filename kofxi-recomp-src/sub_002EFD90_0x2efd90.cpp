#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EFD90
// Address: 0x2efd90 - 0x2f0330
void sub_002EFD90_0x2efd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFD90_0x2efd90");
#endif

    switch (ctx->pc) {
        case 0x2efd90u: goto label_2efd90;
        case 0x2efd94u: goto label_2efd94;
        case 0x2efd98u: goto label_2efd98;
        case 0x2efd9cu: goto label_2efd9c;
        case 0x2efda0u: goto label_2efda0;
        case 0x2efda4u: goto label_2efda4;
        case 0x2efda8u: goto label_2efda8;
        case 0x2efdacu: goto label_2efdac;
        case 0x2efdb0u: goto label_2efdb0;
        case 0x2efdb4u: goto label_2efdb4;
        case 0x2efdb8u: goto label_2efdb8;
        case 0x2efdbcu: goto label_2efdbc;
        case 0x2efdc0u: goto label_2efdc0;
        case 0x2efdc4u: goto label_2efdc4;
        case 0x2efdc8u: goto label_2efdc8;
        case 0x2efdccu: goto label_2efdcc;
        case 0x2efdd0u: goto label_2efdd0;
        case 0x2efdd4u: goto label_2efdd4;
        case 0x2efdd8u: goto label_2efdd8;
        case 0x2efddcu: goto label_2efddc;
        case 0x2efde0u: goto label_2efde0;
        case 0x2efde4u: goto label_2efde4;
        case 0x2efde8u: goto label_2efde8;
        case 0x2efdecu: goto label_2efdec;
        case 0x2efdf0u: goto label_2efdf0;
        case 0x2efdf4u: goto label_2efdf4;
        case 0x2efdf8u: goto label_2efdf8;
        case 0x2efdfcu: goto label_2efdfc;
        case 0x2efe00u: goto label_2efe00;
        case 0x2efe04u: goto label_2efe04;
        case 0x2efe08u: goto label_2efe08;
        case 0x2efe0cu: goto label_2efe0c;
        case 0x2efe10u: goto label_2efe10;
        case 0x2efe14u: goto label_2efe14;
        case 0x2efe18u: goto label_2efe18;
        case 0x2efe1cu: goto label_2efe1c;
        case 0x2efe20u: goto label_2efe20;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe28u: goto label_2efe28;
        case 0x2efe2cu: goto label_2efe2c;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe34u: goto label_2efe34;
        case 0x2efe38u: goto label_2efe38;
        case 0x2efe3cu: goto label_2efe3c;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe44u: goto label_2efe44;
        case 0x2efe48u: goto label_2efe48;
        case 0x2efe4cu: goto label_2efe4c;
        case 0x2efe50u: goto label_2efe50;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe58u: goto label_2efe58;
        case 0x2efe5cu: goto label_2efe5c;
        case 0x2efe60u: goto label_2efe60;
        case 0x2efe64u: goto label_2efe64;
        case 0x2efe68u: goto label_2efe68;
        case 0x2efe6cu: goto label_2efe6c;
        case 0x2efe70u: goto label_2efe70;
        case 0x2efe74u: goto label_2efe74;
        case 0x2efe78u: goto label_2efe78;
        case 0x2efe7cu: goto label_2efe7c;
        case 0x2efe80u: goto label_2efe80;
        case 0x2efe84u: goto label_2efe84;
        case 0x2efe88u: goto label_2efe88;
        case 0x2efe8cu: goto label_2efe8c;
        case 0x2efe90u: goto label_2efe90;
        case 0x2efe94u: goto label_2efe94;
        case 0x2efe98u: goto label_2efe98;
        case 0x2efe9cu: goto label_2efe9c;
        case 0x2efea0u: goto label_2efea0;
        case 0x2efea4u: goto label_2efea4;
        case 0x2efea8u: goto label_2efea8;
        case 0x2efeacu: goto label_2efeac;
        case 0x2efeb0u: goto label_2efeb0;
        case 0x2efeb4u: goto label_2efeb4;
        case 0x2efeb8u: goto label_2efeb8;
        case 0x2efebcu: goto label_2efebc;
        case 0x2efec0u: goto label_2efec0;
        case 0x2efec4u: goto label_2efec4;
        case 0x2efec8u: goto label_2efec8;
        case 0x2efeccu: goto label_2efecc;
        case 0x2efed0u: goto label_2efed0;
        case 0x2efed4u: goto label_2efed4;
        case 0x2efed8u: goto label_2efed8;
        case 0x2efedcu: goto label_2efedc;
        case 0x2efee0u: goto label_2efee0;
        case 0x2efee4u: goto label_2efee4;
        case 0x2efee8u: goto label_2efee8;
        case 0x2efeecu: goto label_2efeec;
        case 0x2efef0u: goto label_2efef0;
        case 0x2efef4u: goto label_2efef4;
        case 0x2efef8u: goto label_2efef8;
        case 0x2efefcu: goto label_2efefc;
        case 0x2eff00u: goto label_2eff00;
        case 0x2eff04u: goto label_2eff04;
        case 0x2eff08u: goto label_2eff08;
        case 0x2eff0cu: goto label_2eff0c;
        case 0x2eff10u: goto label_2eff10;
        case 0x2eff14u: goto label_2eff14;
        case 0x2eff18u: goto label_2eff18;
        case 0x2eff1cu: goto label_2eff1c;
        case 0x2eff20u: goto label_2eff20;
        case 0x2eff24u: goto label_2eff24;
        case 0x2eff28u: goto label_2eff28;
        case 0x2eff2cu: goto label_2eff2c;
        case 0x2eff30u: goto label_2eff30;
        case 0x2eff34u: goto label_2eff34;
        case 0x2eff38u: goto label_2eff38;
        case 0x2eff3cu: goto label_2eff3c;
        case 0x2eff40u: goto label_2eff40;
        case 0x2eff44u: goto label_2eff44;
        case 0x2eff48u: goto label_2eff48;
        case 0x2eff4cu: goto label_2eff4c;
        case 0x2eff50u: goto label_2eff50;
        case 0x2eff54u: goto label_2eff54;
        case 0x2eff58u: goto label_2eff58;
        case 0x2eff5cu: goto label_2eff5c;
        case 0x2eff60u: goto label_2eff60;
        case 0x2eff64u: goto label_2eff64;
        case 0x2eff68u: goto label_2eff68;
        case 0x2eff6cu: goto label_2eff6c;
        case 0x2eff70u: goto label_2eff70;
        case 0x2eff74u: goto label_2eff74;
        case 0x2eff78u: goto label_2eff78;
        case 0x2eff7cu: goto label_2eff7c;
        case 0x2eff80u: goto label_2eff80;
        case 0x2eff84u: goto label_2eff84;
        case 0x2eff88u: goto label_2eff88;
        case 0x2eff8cu: goto label_2eff8c;
        case 0x2eff90u: goto label_2eff90;
        case 0x2eff94u: goto label_2eff94;
        case 0x2eff98u: goto label_2eff98;
        case 0x2eff9cu: goto label_2eff9c;
        case 0x2effa0u: goto label_2effa0;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effa8u: goto label_2effa8;
        case 0x2effacu: goto label_2effac;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effb4u: goto label_2effb4;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effbcu: goto label_2effbc;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effc4u: goto label_2effc4;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effccu: goto label_2effcc;
        case 0x2effd0u: goto label_2effd0;
        case 0x2effd4u: goto label_2effd4;
        case 0x2effd8u: goto label_2effd8;
        case 0x2effdcu: goto label_2effdc;
        case 0x2effe0u: goto label_2effe0;
        case 0x2effe4u: goto label_2effe4;
        case 0x2effe8u: goto label_2effe8;
        case 0x2effecu: goto label_2effec;
        case 0x2efff0u: goto label_2efff0;
        case 0x2efff4u: goto label_2efff4;
        case 0x2efff8u: goto label_2efff8;
        case 0x2efffcu: goto label_2efffc;
        case 0x2f0000u: goto label_2f0000;
        case 0x2f0004u: goto label_2f0004;
        case 0x2f0008u: goto label_2f0008;
        case 0x2f000cu: goto label_2f000c;
        case 0x2f0010u: goto label_2f0010;
        case 0x2f0014u: goto label_2f0014;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f001cu: goto label_2f001c;
        case 0x2f0020u: goto label_2f0020;
        case 0x2f0024u: goto label_2f0024;
        case 0x2f0028u: goto label_2f0028;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0030u: goto label_2f0030;
        case 0x2f0034u: goto label_2f0034;
        case 0x2f0038u: goto label_2f0038;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0040u: goto label_2f0040;
        case 0x2f0044u: goto label_2f0044;
        case 0x2f0048u: goto label_2f0048;
        case 0x2f004cu: goto label_2f004c;
        case 0x2f0050u: goto label_2f0050;
        case 0x2f0054u: goto label_2f0054;
        case 0x2f0058u: goto label_2f0058;
        case 0x2f005cu: goto label_2f005c;
        case 0x2f0060u: goto label_2f0060;
        case 0x2f0064u: goto label_2f0064;
        case 0x2f0068u: goto label_2f0068;
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0070u: goto label_2f0070;
        case 0x2f0074u: goto label_2f0074;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f007cu: goto label_2f007c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0084u: goto label_2f0084;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f008cu: goto label_2f008c;
        case 0x2f0090u: goto label_2f0090;
        case 0x2f0094u: goto label_2f0094;
        case 0x2f0098u: goto label_2f0098;
        case 0x2f009cu: goto label_2f009c;
        case 0x2f00a0u: goto label_2f00a0;
        case 0x2f00a4u: goto label_2f00a4;
        case 0x2f00a8u: goto label_2f00a8;
        case 0x2f00acu: goto label_2f00ac;
        case 0x2f00b0u: goto label_2f00b0;
        case 0x2f00b4u: goto label_2f00b4;
        case 0x2f00b8u: goto label_2f00b8;
        case 0x2f00bcu: goto label_2f00bc;
        case 0x2f00c0u: goto label_2f00c0;
        case 0x2f00c4u: goto label_2f00c4;
        case 0x2f00c8u: goto label_2f00c8;
        case 0x2f00ccu: goto label_2f00cc;
        case 0x2f00d0u: goto label_2f00d0;
        case 0x2f00d4u: goto label_2f00d4;
        case 0x2f00d8u: goto label_2f00d8;
        case 0x2f00dcu: goto label_2f00dc;
        case 0x2f00e0u: goto label_2f00e0;
        case 0x2f00e4u: goto label_2f00e4;
        case 0x2f00e8u: goto label_2f00e8;
        case 0x2f00ecu: goto label_2f00ec;
        case 0x2f00f0u: goto label_2f00f0;
        case 0x2f00f4u: goto label_2f00f4;
        case 0x2f00f8u: goto label_2f00f8;
        case 0x2f00fcu: goto label_2f00fc;
        case 0x2f0100u: goto label_2f0100;
        case 0x2f0104u: goto label_2f0104;
        case 0x2f0108u: goto label_2f0108;
        case 0x2f010cu: goto label_2f010c;
        case 0x2f0110u: goto label_2f0110;
        case 0x2f0114u: goto label_2f0114;
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        case 0x2f0158u: goto label_2f0158;
        case 0x2f015cu: goto label_2f015c;
        case 0x2f0160u: goto label_2f0160;
        case 0x2f0164u: goto label_2f0164;
        case 0x2f0168u: goto label_2f0168;
        case 0x2f016cu: goto label_2f016c;
        case 0x2f0170u: goto label_2f0170;
        case 0x2f0174u: goto label_2f0174;
        case 0x2f0178u: goto label_2f0178;
        case 0x2f017cu: goto label_2f017c;
        case 0x2f0180u: goto label_2f0180;
        case 0x2f0184u: goto label_2f0184;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f018cu: goto label_2f018c;
        case 0x2f0190u: goto label_2f0190;
        case 0x2f0194u: goto label_2f0194;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f019cu: goto label_2f019c;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01a4u: goto label_2f01a4;
        case 0x2f01a8u: goto label_2f01a8;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01b0u: goto label_2f01b0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01b8u: goto label_2f01b8;
        case 0x2f01bcu: goto label_2f01bc;
        case 0x2f01c0u: goto label_2f01c0;
        case 0x2f01c4u: goto label_2f01c4;
        case 0x2f01c8u: goto label_2f01c8;
        case 0x2f01ccu: goto label_2f01cc;
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01d4u: goto label_2f01d4;
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f024cu: goto label_2f024c;
        case 0x2f0250u: goto label_2f0250;
        case 0x2f0254u: goto label_2f0254;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f025cu: goto label_2f025c;
        case 0x2f0260u: goto label_2f0260;
        case 0x2f0264u: goto label_2f0264;
        case 0x2f0268u: goto label_2f0268;
        case 0x2f026cu: goto label_2f026c;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f0274u: goto label_2f0274;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f027cu: goto label_2f027c;
        case 0x2f0280u: goto label_2f0280;
        case 0x2f0284u: goto label_2f0284;
        case 0x2f0288u: goto label_2f0288;
        case 0x2f028cu: goto label_2f028c;
        case 0x2f0290u: goto label_2f0290;
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0298u: goto label_2f0298;
        case 0x2f029cu: goto label_2f029c;
        case 0x2f02a0u: goto label_2f02a0;
        case 0x2f02a4u: goto label_2f02a4;
        case 0x2f02a8u: goto label_2f02a8;
        case 0x2f02acu: goto label_2f02ac;
        case 0x2f02b0u: goto label_2f02b0;
        case 0x2f02b4u: goto label_2f02b4;
        case 0x2f02b8u: goto label_2f02b8;
        case 0x2f02bcu: goto label_2f02bc;
        case 0x2f02c0u: goto label_2f02c0;
        case 0x2f02c4u: goto label_2f02c4;
        case 0x2f02c8u: goto label_2f02c8;
        case 0x2f02ccu: goto label_2f02cc;
        case 0x2f02d0u: goto label_2f02d0;
        case 0x2f02d4u: goto label_2f02d4;
        case 0x2f02d8u: goto label_2f02d8;
        case 0x2f02dcu: goto label_2f02dc;
        case 0x2f02e0u: goto label_2f02e0;
        case 0x2f02e4u: goto label_2f02e4;
        case 0x2f02e8u: goto label_2f02e8;
        case 0x2f02ecu: goto label_2f02ec;
        case 0x2f02f0u: goto label_2f02f0;
        case 0x2f02f4u: goto label_2f02f4;
        case 0x2f02f8u: goto label_2f02f8;
        case 0x2f02fcu: goto label_2f02fc;
        case 0x2f0300u: goto label_2f0300;
        case 0x2f0304u: goto label_2f0304;
        case 0x2f0308u: goto label_2f0308;
        case 0x2f030cu: goto label_2f030c;
        case 0x2f0310u: goto label_2f0310;
        case 0x2f0314u: goto label_2f0314;
        case 0x2f0318u: goto label_2f0318;
        case 0x2f031cu: goto label_2f031c;
        case 0x2f0320u: goto label_2f0320;
        case 0x2f0324u: goto label_2f0324;
        case 0x2f0328u: goto label_2f0328;
        case 0x2f032cu: goto label_2f032c;
        default: break;
    }

    ctx->pc = 0x2efd90u;

label_2efd90:
    // 0x2efd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2efd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2efd94:
    // 0x2efd94: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2efd94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2efd98:
    // 0x2efd98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2efd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2efd9c:
    // 0x2efd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2efd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efda0:
    // 0x2efda0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2efda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2efda4:
    // 0x2efda4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2efda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2efda8:
    // 0x2efda8: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2efda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
label_2efdac:
    // 0x2efdac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2efdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2efdb0:
    // 0x2efdb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2efdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efdb4:
    // 0x2efdb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2efdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2efdb8:
    // 0x2efdb8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2efdb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efdbc:
    // 0x2efdbc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2efdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2efdc0:
    // 0x2efdc0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2efdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2efdc4:
    // 0x2efdc4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2efdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2efdc8:
    // 0x2efdc8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2efdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2efdcc:
    // 0x2efdcc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2efdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2efdd0:
    // 0x2efdd0: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x2efdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
label_2efdd4:
    // 0x2efdd4: 0x8e060378  lw          $a2, 0x378($s0)
    ctx->pc = 0x2efdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
label_2efdd8:
    // 0x2efdd8: 0x8e1300a0  lw          $s3, 0xA0($s0)
    ctx->pc = 0x2efdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2efddc:
    // 0x2efddc: 0x8e110080  lw          $s1, 0x80($s0)
    ctx->pc = 0x2efddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2efde0:
    // 0x2efde0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2efde0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2efde4:
    // 0x2efde4: 0xc049cb6  jal         func_1272D8
label_2efde8:
    if (ctx->pc == 0x2EFDE8u) {
        ctx->pc = 0x2EFDE8u;
            // 0x2efde8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDECu;
        goto label_2efdec;
    }
    ctx->pc = 0x2EFDE4u;
    SET_GPR_U32(ctx, 31, 0x2EFDECu);
    ctx->pc = 0x2EFDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFDE4u;
            // 0x2efde8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDECu; }
        if (ctx->pc != 0x2EFDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDECu; }
        if (ctx->pc != 0x2EFDECu) { return; }
    }
    ctx->pc = 0x2EFDECu;
label_2efdec:
    // 0x2efdec: 0x8e0f0390  lw          $t7, 0x390($s0)
    ctx->pc = 0x2efdecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2efdf0:
    // 0x2efdf0: 0x55f600ed  bnel        $t7, $s6, . + 4 + (0xED << 2)
label_2efdf4:
    if (ctx->pc == 0x2EFDF4u) {
        ctx->pc = 0x2EFDF4u;
            // 0x2efdf4: 0x962e0000  lhu         $t6, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2EFDF8u;
        goto label_2efdf8;
    }
    ctx->pc = 0x2EFDF0u;
    {
        const bool branch_taken_0x2efdf0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 22));
        if (branch_taken_0x2efdf0) {
            ctx->pc = 0x2EFDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFDF0u;
            // 0x2efdf4: 0x962e0000  lhu         $t6, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F01A8u;
            goto label_2f01a8;
        }
    }
    ctx->pc = 0x2EFDF8u;
label_2efdf8:
    // 0x2efdf8: 0x962c0000  lhu         $t4, 0x0($s1)
    ctx->pc = 0x2efdf8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2efdfc:
    // 0x2efdfc: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2efdfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2efe00:
    // 0x2efe00: 0x318e000f  andi        $t6, $t4, 0xF
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
label_2efe04:
    // 0x2efe04: 0x51cf003d  beql        $t6, $t7, . + 4 + (0x3D << 2)
label_2efe08:
    if (ctx->pc == 0x2EFE08u) {
        ctx->pc = 0x2EFE08u;
            // 0x2efe08: 0x3c0c003c  lui         $t4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
        ctx->pc = 0x2EFE0Cu;
        goto label_2efe0c;
    }
    ctx->pc = 0x2EFE04u;
    {
        const bool branch_taken_0x2efe04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x2efe04) {
            ctx->pc = 0x2EFE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE04u;
            // 0x2efe08: 0x3c0c003c  lui         $t4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFEFCu;
            goto label_2efefc;
        }
    }
    ctx->pc = 0x2EFE0Cu;
label_2efe0c:
    // 0x2efe0c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2efe0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efe10:
    // 0x2efe10: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2efe10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2efe14:
    // 0x2efe14: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2efe14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efe18:
    // 0x2efe18: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2efe18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2efe1c:
    // 0x2efe1c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2efe20:
    if (ctx->pc == 0x2EFE20u) {
        ctx->pc = 0x2EFE20u;
            // 0x2efe20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE24u;
        goto label_2efe24;
    }
    ctx->pc = 0x2EFE1Cu;
    {
        const bool branch_taken_0x2efe1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE1Cu;
            // 0x2efe20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe1c) {
            ctx->pc = 0x2EFE50u;
            goto label_2efe50;
        }
    }
    ctx->pc = 0x2EFE24u;
label_2efe24:
    // 0x2efe24: 0x318c00f0  andi        $t4, $t4, 0xF0
    ctx->pc = 0x2efe24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)240);
label_2efe28:
    // 0x2efe28: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x2efe28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efe2c:
    // 0x2efe2c: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x2efe2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_2efe30:
    // 0x2efe30: 0x95cf0000  lhu         $t7, 0x0($t6)
    ctx->pc = 0x2efe30u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_2efe34:
    // 0x2efe34: 0x31ef00f0  andi        $t7, $t7, 0xF0
    ctx->pc = 0x2efe34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)240);
label_2efe38:
    // 0x2efe38: 0x11ec0005  beq         $t7, $t4, . + 4 + (0x5 << 2)
label_2efe3c:
    if (ctx->pc == 0x2EFE3Cu) {
        ctx->pc = 0x2EFE3Cu;
            // 0x2efe3c: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->pc = 0x2EFE40u;
        goto label_2efe40;
    }
    ctx->pc = 0x2EFE38u;
    {
        const bool branch_taken_0x2efe38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 12));
        ctx->pc = 0x2EFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE38u;
            // 0x2efe3c: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe38) {
            ctx->pc = 0x2EFE50u;
            goto label_2efe50;
        }
    }
    ctx->pc = 0x2EFE40u;
label_2efe40:
    // 0x2efe40: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2efe40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2efe44:
    // 0x2efe44: 0x172782b  sltu        $t7, $t3, $s2
    ctx->pc = 0x2efe44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2efe48:
    // 0x2efe48: 0x55e0fff9  bnel        $t7, $zero, . + 4 + (-0x7 << 2)
label_2efe4c:
    if (ctx->pc == 0x2EFE4Cu) {
        ctx->pc = 0x2EFE4Cu;
            // 0x2efe4c: 0x8dae0000  lw          $t6, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->pc = 0x2EFE50u;
        goto label_2efe50;
    }
    ctx->pc = 0x2EFE48u;
    {
        const bool branch_taken_0x2efe48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efe48) {
            ctx->pc = 0x2EFE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE48u;
            // 0x2efe4c: 0x8dae0000  lw          $t6, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efe30;
        }
    }
    ctx->pc = 0x2EFE50u;
label_2efe50:
    // 0x2efe50: 0x564b0021  bnel        $s2, $t3, . + 4 + (0x21 << 2)
label_2efe54:
    if (ctx->pc == 0x2EFE54u) {
        ctx->pc = 0x2EFE54u;
            // 0x2efe54: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x2EFE58u;
        goto label_2efe58;
    }
    ctx->pc = 0x2EFE50u;
    {
        const bool branch_taken_0x2efe50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 11));
        if (branch_taken_0x2efe50) {
            ctx->pc = 0x2EFE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE50u;
            // 0x2efe54: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFED8u;
            goto label_2efed8;
        }
    }
    ctx->pc = 0x2EFE58u;
label_2efe58:
    // 0x2efe58: 0x962f0002  lhu         $t7, 0x2($s1)
    ctx->pc = 0x2efe58u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2efe5c:
    // 0x2efe5c: 0x968e001c  lhu         $t6, 0x1C($s4)
    ctx->pc = 0x2efe5cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
label_2efe60:
    // 0x2efe60: 0x15ee001c  bne         $t7, $t6, . + 4 + (0x1C << 2)
label_2efe64:
    if (ctx->pc == 0x2EFE64u) {
        ctx->pc = 0x2EFE64u;
            // 0x2efe64: 0xa7af0000  sh          $t7, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x2EFE68u;
        goto label_2efe68;
    }
    ctx->pc = 0x2EFE60u;
    {
        const bool branch_taken_0x2efe60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EFE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE60u;
            // 0x2efe64: 0xa7af0000  sh          $t7, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe60) {
            ctx->pc = 0x2EFED4u;
            goto label_2efed4;
        }
    }
    ctx->pc = 0x2EFE68u;
label_2efe68:
    // 0x2efe68: 0x962c0000  lhu         $t4, 0x0($s1)
    ctx->pc = 0x2efe68u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2efe6c:
    // 0x2efe6c: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x2efe6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2efe70:
    // 0x2efe70: 0x31ae000f  andi        $t6, $t5, 0xF
    ctx->pc = 0x2efe70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
label_2efe74:
    // 0x2efe74: 0x25cffffa  addiu       $t7, $t6, -0x6
    ctx->pc = 0x2efe74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967290));
label_2efe78:
    // 0x2efe78: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2efe78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2efe7c:
    // 0x2efe7c: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
label_2efe80:
    if (ctx->pc == 0x2EFE80u) {
        ctx->pc = 0x2EFE80u;
            // 0x2efe80: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2EFE84u;
        goto label_2efe84;
    }
    ctx->pc = 0x2EFE7Cu;
    {
        const bool branch_taken_0x2efe7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE7Cu;
            // 0x2efe80: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe7c) {
            ctx->pc = 0x2EFEA0u;
            goto label_2efea0;
        }
    }
    ctx->pc = 0x2EFE84u;
label_2efe84:
    // 0x2efe84: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x2efe84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_2efe88:
    // 0x2efe88: 0x11d70003  beq         $t6, $s7, . + 4 + (0x3 << 2)
label_2efe8c:
    if (ctx->pc == 0x2EFE8Cu) {
        ctx->pc = 0x2EFE8Cu;
            // 0x2efe8c: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2EFE90u;
        goto label_2efe90;
    }
    ctx->pc = 0x2EFE88u;
    {
        const bool branch_taken_0x2efe88 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 23));
        ctx->pc = 0x2EFE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE88u;
            // 0x2efe8c: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe88) {
            ctx->pc = 0x2EFE98u;
            goto label_2efe98;
        }
    }
    ctx->pc = 0x2EFE90u;
label_2efe90:
    // 0x2efe90: 0x55cf0011  bnel        $t6, $t7, . + 4 + (0x11 << 2)
label_2efe94:
    if (ctx->pc == 0x2EFE94u) {
        ctx->pc = 0x2EFE94u;
            // 0x2efe94: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x2EFE98u;
        goto label_2efe98;
    }
    ctx->pc = 0x2EFE90u;
    {
        const bool branch_taken_0x2efe90 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2efe90) {
            ctx->pc = 0x2EFE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE90u;
            // 0x2efe94: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFED8u;
            goto label_2efed8;
        }
    }
    ctx->pc = 0x2EFE98u;
label_2efe98:
    // 0x2efe98: 0x31ae000f  andi        $t6, $t5, 0xF
    ctx->pc = 0x2efe98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
label_2efe9c:
    // 0x2efe9c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2efe9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2efea0:
    // 0x2efea0: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
label_2efea4:
    if (ctx->pc == 0x2EFEA4u) {
        ctx->pc = 0x2EFEA4u;
            // 0x2efea4: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2EFEA8u;
        goto label_2efea8;
    }
    ctx->pc = 0x2EFEA0u;
    {
        const bool branch_taken_0x2efea0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EFEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEA0u;
            // 0x2efea4: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efea0) {
            ctx->pc = 0x2EFEACu;
            goto label_2efeac;
        }
    }
    ctx->pc = 0x2EFEA8u;
label_2efea8:
    // 0x2efea8: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x2efea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2efeac:
    // 0x2efeac: 0x240efff0  addiu       $t6, $zero, -0x10
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2efeb0:
    // 0x2efeb0: 0x318f0007  andi        $t7, $t4, 0x7
    ctx->pc = 0x2efeb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
label_2efeb4:
    // 0x2efeb4: 0x1ae7024  and         $t6, $t5, $t6
    ctx->pc = 0x2efeb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
label_2efeb8:
    // 0x2efeb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2efeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2efebc:
    // 0x2efebc: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2efebcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_2efec0:
    // 0x2efec0: 0xa62e0000  sh          $t6, 0x0($s1)
    ctx->pc = 0x2efec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 14));
label_2efec4:
    // 0x2efec4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2efec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2efec8:
    // 0x2efec8: 0x8eaf0378  lw          $t7, 0x378($s5)
    ctx->pc = 0x2efec8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 888)));
label_2efecc:
    // 0x2efecc: 0x124f000a  beq         $s2, $t7, . + 4 + (0xA << 2)
label_2efed0:
    if (ctx->pc == 0x2EFED0u) {
        ctx->pc = 0x2EFED0u;
            // 0x2efed0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2EFED4u;
        goto label_2efed4;
    }
    ctx->pc = 0x2EFECCu;
    {
        const bool branch_taken_0x2efecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EFED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFECCu;
            // 0x2efed0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efecc) {
            ctx->pc = 0x2EFEF8u;
            goto label_2efef8;
        }
    }
    ctx->pc = 0x2EFED4u;
label_2efed4:
    // 0x2efed4: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x2efed4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2efed8:
    // 0x2efed8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2efed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2efedc:
    // 0x2efedc: 0xc0bc19e  jal         func_2F0678
label_2efee0:
    if (ctx->pc == 0x2EFEE0u) {
        ctx->pc = 0x2EFEE0u;
            // 0x2efee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEE4u;
        goto label_2efee4;
    }
    ctx->pc = 0x2EFEDCu;
    SET_GPR_U32(ctx, 31, 0x2EFEE4u);
    ctx->pc = 0x2EFEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEDCu;
            // 0x2efee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFEE4u; }
        if (ctx->pc != 0x2EFEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFEE4u; }
        if (ctx->pc != 0x2EFEE4u) { return; }
    }
    ctx->pc = 0x2EFEE4u;
label_2efee4:
    // 0x2efee4: 0x944c0000  lhu         $t4, 0x0($v0)
    ctx->pc = 0x2efee4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2efee8:
    // 0x2efee8: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2efee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2efeec:
    // 0x2efeec: 0x318e000f  andi        $t6, $t4, 0xF
    ctx->pc = 0x2efeecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
label_2efef0:
    // 0x2efef0: 0x15cfffca  bne         $t6, $t7, . + 4 + (-0x36 << 2)
label_2efef4:
    if (ctx->pc == 0x2EFEF4u) {
        ctx->pc = 0x2EFEF4u;
            // 0x2efef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEF8u;
        goto label_2efef8;
    }
    ctx->pc = 0x2EFEF0u;
    {
        const bool branch_taken_0x2efef0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EFEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEF0u;
            // 0x2efef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efef0) {
            ctx->pc = 0x2EFE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efe1c;
        }
    }
    ctx->pc = 0x2EFEF8u;
label_2efef8:
    // 0x2efef8: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x2efef8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
label_2efefc:
    // 0x2efefc: 0x258deca8  addiu       $t5, $t4, -0x1358
    ctx->pc = 0x2efefcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962344));
label_2eff00:
    // 0x2eff00: 0x8daf0378  lw          $t7, 0x378($t5)
    ctx->pc = 0x2eff00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 888)));
label_2eff04:
    // 0x2eff04: 0x24f782b  sltu        $t7, $s2, $t7
    ctx->pc = 0x2eff04u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_2eff08:
    // 0x2eff08: 0x51e00065  beql        $t7, $zero, . + 4 + (0x65 << 2)
label_2eff0c:
    if (ctx->pc == 0x2EFF0Cu) {
        ctx->pc = 0x2EFF0Cu;
            // 0x2eff0c: 0x8daf0024  lw          $t7, 0x24($t5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
        ctx->pc = 0x2EFF10u;
        goto label_2eff10;
    }
    ctx->pc = 0x2EFF08u;
    {
        const bool branch_taken_0x2eff08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff08) {
            ctx->pc = 0x2EFF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF08u;
            // 0x2eff0c: 0x8daf0024  lw          $t7, 0x24($t5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F00A0u;
            goto label_2f00a0;
        }
    }
    ctx->pc = 0x2EFF10u;
label_2eff10:
    // 0x2eff10: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x2eff10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2eff14:
    // 0x2eff14: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
label_2eff18:
    if (ctx->pc == 0x2EFF18u) {
        ctx->pc = 0x2EFF18u;
            // 0x2eff18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF1Cu;
        goto label_2eff1c;
    }
    ctx->pc = 0x2EFF14u;
    {
        const bool branch_taken_0x2eff14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF14u;
            // 0x2eff18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff14) {
            ctx->pc = 0x2EFF28u;
            goto label_2eff28;
        }
    }
    ctx->pc = 0x2EFF1Cu;
label_2eff1c:
    // 0x2eff1c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2eff1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eff20:
    // 0x2eff20: 0x15cf0010  bne         $t6, $t7, . + 4 + (0x10 << 2)
label_2eff24:
    if (ctx->pc == 0x2EFF24u) {
        ctx->pc = 0x2EFF24u;
            // 0x2eff24: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->pc = 0x2EFF28u;
        goto label_2eff28;
    }
    ctx->pc = 0x2EFF20u;
    {
        const bool branch_taken_0x2eff20 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EFF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF20u;
            // 0x2eff24: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff20) {
            ctx->pc = 0x2EFF64u;
            goto label_2eff64;
        }
    }
    ctx->pc = 0x2EFF28u;
label_2eff28:
    // 0x2eff28: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2eff28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2eff2c:
    // 0x2eff2c: 0x95a8001c  lhu         $t0, 0x1C($t5)
    ctx->pc = 0x2eff2cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
label_2eff30:
    // 0x2eff30: 0x26101538  addiu       $s0, $s0, 0x1538
    ctx->pc = 0x2eff30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5432));
label_2eff34:
    // 0x2eff34: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2eff34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2eff38:
    // 0x2eff38: 0x24e71550  addiu       $a3, $a3, 0x1550
    ctx->pc = 0x2eff38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5456));
label_2eff3c:
    // 0x2eff3c: 0x24050bb5  addiu       $a1, $zero, 0xBB5
    ctx->pc = 0x2eff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2997));
label_2eff40:
    // 0x2eff40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2eff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2eff44:
    // 0x2eff44: 0xc0897d6  jal         func_225F58
label_2eff48:
    if (ctx->pc == 0x2EFF48u) {
        ctx->pc = 0x2EFF48u;
            // 0x2eff48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF4Cu;
        goto label_2eff4c;
    }
    ctx->pc = 0x2EFF44u;
    SET_GPR_U32(ctx, 31, 0x2EFF4Cu);
    ctx->pc = 0x2EFF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF44u;
            // 0x2eff48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF4Cu; }
        if (ctx->pc != 0x2EFF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF4Cu; }
        if (ctx->pc != 0x2EFF4Cu) { return; }
    }
    ctx->pc = 0x2EFF4Cu;
label_2eff4c:
    // 0x2eff4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff50:
    // 0x2eff50: 0x24050bb6  addiu       $a1, $zero, 0xBB6
    ctx->pc = 0x2eff50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2998));
label_2eff54:
    // 0x2eff54: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2eff54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2eff58:
    // 0x2eff58: 0xc0bc6f6  jal         func_2F1BD8
label_2eff5c:
    if (ctx->pc == 0x2EFF5Cu) {
        ctx->pc = 0x2EFF5Cu;
            // 0x2eff5c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2EFF60u;
        goto label_2eff60;
    }
    ctx->pc = 0x2EFF58u;
    SET_GPR_U32(ctx, 31, 0x2EFF60u);
    ctx->pc = 0x2EFF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF58u;
            // 0x2eff5c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF60u; }
        if (ctx->pc != 0x2EFF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF60u; }
        if (ctx->pc != 0x2EFF60u) { return; }
    }
    ctx->pc = 0x2EFF60u;
label_2eff60:
    // 0x2eff60: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2eff60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_2eff64:
    // 0x2eff64: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2eff64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2eff68:
    // 0x2eff68: 0x262feca8  addiu       $t7, $s1, -0x1358
    ctx->pc = 0x2eff68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962344));
label_2eff6c:
    // 0x2eff6c: 0x8ded0004  lw          $t5, 0x4($t7)
    ctx->pc = 0x2eff6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_2eff70:
    // 0x2eff70: 0x15ae0033  bne         $t5, $t6, . + 4 + (0x33 << 2)
label_2eff74:
    if (ctx->pc == 0x2EFF74u) {
        ctx->pc = 0x2EFF74u;
            // 0x2eff74: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->pc = 0x2EFF78u;
        goto label_2eff78;
    }
    ctx->pc = 0x2EFF70u;
    {
        const bool branch_taken_0x2eff70 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EFF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF70u;
            // 0x2eff74: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff70) {
            ctx->pc = 0x2F0040u;
            goto label_2f0040;
        }
    }
    ctx->pc = 0x2EFF78u;
label_2eff78:
    // 0x2eff78: 0xc0bb642  jal         func_2ED908
label_2eff7c:
    if (ctx->pc == 0x2EFF7Cu) {
        ctx->pc = 0x2EFF7Cu;
            // 0x2eff7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF80u;
        goto label_2eff80;
    }
    ctx->pc = 0x2EFF78u;
    SET_GPR_U32(ctx, 31, 0x2EFF80u);
    ctx->pc = 0x2EFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF78u;
            // 0x2eff7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF80u; }
        if (ctx->pc != 0x2EFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF80u; }
        if (ctx->pc != 0x2EFF80u) { return; }
    }
    ctx->pc = 0x2EFF80u;
label_2eff80:
    // 0x2eff80: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2eff84:
    if (ctx->pc == 0x2EFF84u) {
        ctx->pc = 0x2EFF84u;
            // 0x2eff84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF88u;
        goto label_2eff88;
    }
    ctx->pc = 0x2EFF80u;
    {
        const bool branch_taken_0x2eff80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF80u;
            // 0x2eff84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff80) {
            ctx->pc = 0x2F003Cu;
            goto label_2f003c;
        }
    }
    ctx->pc = 0x2EFF88u;
label_2eff88:
    // 0x2eff88: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eff88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
label_2eff8c:
    // 0x2eff8c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2eff8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eff90:
    // 0x2eff90: 0x25f41538  addiu       $s4, $t7, 0x1538
    ctx->pc = 0x2eff90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 5432));
label_2eff94:
    // 0x2eff94: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2eff94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2eff98:
    // 0x2eff98: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x2eff98u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_2eff9c:
    // 0x2eff9c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2effa0:
    if (ctx->pc == 0x2EFFA0u) {
        ctx->pc = 0x2EFFA0u;
            // 0x2effa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFA4u;
        goto label_2effa4;
    }
    ctx->pc = 0x2EFF9Cu;
    {
        const bool branch_taken_0x2eff9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF9Cu;
            // 0x2effa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff9c) {
            ctx->pc = 0x2EFFC4u;
            goto label_2effc4;
        }
    }
    ctx->pc = 0x2EFFA4u;
label_2effa4:
    // 0x2effa4: 0x920c0000  lbu         $t4, 0x0($s0)
    ctx->pc = 0x2effa4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2effa8:
    // 0x2effa8: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x2effa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2effac:
    // 0x2effac: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x2effacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_2effb0:
    // 0x2effb0: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x2effb0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_2effb4:
    // 0x2effb4: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x2effb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
label_2effb8:
    // 0x2effb8: 0x158f0033  bne         $t4, $t7, . + 4 + (0x33 << 2)
label_2effbc:
    if (ctx->pc == 0x2EFFBCu) {
        ctx->pc = 0x2EFFBCu;
            // 0x2effbc: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->pc = 0x2EFFC0u;
        goto label_2effc0;
    }
    ctx->pc = 0x2EFFB8u;
    {
        const bool branch_taken_0x2effb8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EFFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFB8u;
            // 0x2effbc: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effb8) {
            ctx->pc = 0x2F0088u;
            goto label_2f0088;
        }
    }
    ctx->pc = 0x2EFFC0u;
label_2effc0:
    // 0x2effc0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2effc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2effc4:
    // 0x2effc4: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x2effc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2effc8:
    // 0x2effc8: 0x26b1eca8  addiu       $s1, $s5, -0x1358
    ctx->pc = 0x2effc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962344));
label_2effcc:
    // 0x2effcc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2effccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2effd0:
    // 0x2effd0: 0xae0f0028  sw          $t7, 0x28($s0)
    ctx->pc = 0x2effd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 15));
label_2effd4:
    // 0x2effd4: 0x8e2e0384  lw          $t6, 0x384($s1)
    ctx->pc = 0x2effd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_2effd8:
    // 0x2effd8: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x2effd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_2effdc:
    // 0x2effdc: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
label_2effe0:
    if (ctx->pc == 0x2EFFE0u) {
        ctx->pc = 0x2EFFE0u;
            // 0x2effe0: 0x24050bd0  addiu       $a1, $zero, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3024));
        ctx->pc = 0x2EFFE4u;
        goto label_2effe4;
    }
    ctx->pc = 0x2EFFDCu;
    {
        const bool branch_taken_0x2effdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFDCu;
            // 0x2effe0: 0x24050bd0  addiu       $a1, $zero, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effdc) {
            ctx->pc = 0x2F002Cu;
            goto label_2f002c;
        }
    }
    ctx->pc = 0x2EFFE4u;
label_2effe4:
    // 0x2effe4: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x2effe4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2effe8:
    // 0x2effe8: 0x9629001c  lhu         $t1, 0x1C($s1)
    ctx->pc = 0x2effe8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_2effec:
    // 0x2effec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2effecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2efff0:
    // 0x2efff0: 0x26e71568  addiu       $a3, $s7, 0x1568
    ctx->pc = 0x2efff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 5480));
label_2efff4:
    // 0x2efff4: 0xc0897d6  jal         func_225F58
label_2efff8:
    if (ctx->pc == 0x2EFFF8u) {
        ctx->pc = 0x2EFFF8u;
            // 0x2efff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFFCu;
        goto label_2efffc;
    }
    ctx->pc = 0x2EFFF4u;
    SET_GPR_U32(ctx, 31, 0x2EFFFCu);
    ctx->pc = 0x2EFFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFF4u;
            // 0x2efff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFFCu; }
        if (ctx->pc != 0x2EFFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFFCu; }
        if (ctx->pc != 0x2EFFFCu) { return; }
    }
    ctx->pc = 0x2EFFFCu;
label_2efffc:
    // 0x2efffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2efffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0000:
    // 0x2f0000: 0x24050bd1  addiu       $a1, $zero, 0xBD1
    ctx->pc = 0x2f0000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3025));
label_2f0004:
    // 0x2f0004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0008:
    // 0x2f0008: 0xc0bc71e  jal         func_2F1C78
label_2f000c:
    if (ctx->pc == 0x2F000Cu) {
        ctx->pc = 0x2F000Cu;
            // 0x2f000c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2F0010u;
        goto label_2f0010;
    }
    ctx->pc = 0x2F0008u;
    SET_GPR_U32(ctx, 31, 0x2F0010u);
    ctx->pc = 0x2F000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0008u;
            // 0x2f000c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0010u; }
        if (ctx->pc != 0x2F0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0010u; }
        if (ctx->pc != 0x2F0010u) { return; }
    }
    ctx->pc = 0x2F0010u;
label_2f0010:
    // 0x2f0010: 0x8e290384  lw          $t1, 0x384($s1)
    ctx->pc = 0x2f0010u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_2f0014:
    // 0x2f0014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0018:
    // 0x2f0018: 0x24050bd2  addiu       $a1, $zero, 0xBD2
    ctx->pc = 0x2f0018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3026));
label_2f001c:
    // 0x2f001c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0020:
    // 0x2f0020: 0x2407d8ec  addiu       $a3, $zero, -0x2714
    ctx->pc = 0x2f0020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
label_2f0024:
    // 0x2f0024: 0xc0bc73e  jal         func_2F1CF8
label_2f0028:
    if (ctx->pc == 0x2F0028u) {
        ctx->pc = 0x2F0028u;
            // 0x2f0028: 0x27c809c8  addiu       $t0, $fp, 0x9C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 2504));
        ctx->pc = 0x2F002Cu;
        goto label_2f002c;
    }
    ctx->pc = 0x2F0024u;
    SET_GPR_U32(ctx, 31, 0x2F002Cu);
    ctx->pc = 0x2F0028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0024u;
            // 0x2f0028: 0x27c809c8  addiu       $t0, $fp, 0x9C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 2504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F002Cu; }
        if (ctx->pc != 0x2F002Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F002Cu; }
        if (ctx->pc != 0x2F002Cu) { return; }
    }
    ctx->pc = 0x2F002Cu;
label_2f002c:
    // 0x2f002c: 0xc0bb642  jal         func_2ED908
label_2f0030:
    if (ctx->pc == 0x2F0030u) {
        ctx->pc = 0x2F0030u;
            // 0x2f0030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0034u;
        goto label_2f0034;
    }
    ctx->pc = 0x2F002Cu;
    SET_GPR_U32(ctx, 31, 0x2F0034u);
    ctx->pc = 0x2F0030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F002Cu;
            // 0x2f0030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0034u; }
        if (ctx->pc != 0x2F0034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0034u; }
        if (ctx->pc != 0x2F0034u) { return; }
    }
    ctx->pc = 0x2F0034u;
label_2f0034:
    // 0x2f0034: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_2f0038:
    if (ctx->pc == 0x2F0038u) {
        ctx->pc = 0x2F0038u;
            // 0x2f0038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F003Cu;
        goto label_2f003c;
    }
    ctx->pc = 0x2F0034u;
    {
        const bool branch_taken_0x2f0034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0034u;
            // 0x2f0038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0034) {
            ctx->pc = 0x2EFF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eff9c;
        }
    }
    ctx->pc = 0x2F003Cu;
label_2f003c:
    // 0x2f003c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f003cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f0040:
    // 0x2f0040: 0x8deff070  lw          $t7, -0xF90($t7)
    ctx->pc = 0x2f0040u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963312)));
label_2f0044:
    // 0x2f0044: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_2f0048:
    if (ctx->pc == 0x2F0048u) {
        ctx->pc = 0x2F0048u;
            // 0x2f0048: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F004Cu;
        goto label_2f004c;
    }
    ctx->pc = 0x2F0044u;
    {
        const bool branch_taken_0x2f0044 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0044u;
            // 0x2f0048: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0044) {
            ctx->pc = 0x2F0058u;
            goto label_2f0058;
        }
    }
    ctx->pc = 0x2F004Cu;
label_2f004c:
    // 0x2f004c: 0x1e0f809  jalr        $t7
label_2f0050:
    if (ctx->pc == 0x2F0050u) {
        ctx->pc = 0x2F0054u;
        goto label_2f0054;
    }
    ctx->pc = 0x2F004Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2F0054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0054u; }
            if (ctx->pc != 0x2F0054u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0054u;
label_2f0054:
    // 0x2f0054: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f0054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f0058:
    // 0x2f0058: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f0058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f005c:
    // 0x2f005c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f005cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f0060:
    // 0x2f0060: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f0060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0064:
    // 0x2f0064: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f0064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f0068:
    // 0x2f0068: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f0068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f006c:
    // 0x2f006c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f006cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f0070:
    // 0x2f0070: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f0070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0074:
    // 0x2f0074: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2f0074u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f0078:
    // 0x2f0078: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2f0078u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f007c:
    // 0x2f007c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2f007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2f0080:
    // 0x2f0080: 0x3e00008  jr          $ra
label_2f0084:
    if (ctx->pc == 0x2F0084u) {
        ctx->pc = 0x2F0084u;
            // 0x2f0084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F0088u;
        goto label_2f0088;
    }
    ctx->pc = 0x2F0080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0080u;
            // 0x2f0084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0088u;
label_2f0088:
    // 0x2f0088: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2f0088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2f008c:
    // 0x2f008c: 0x172782b  sltu        $t7, $t3, $s2
    ctx->pc = 0x2f008cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2f0090:
    // 0x2f0090: 0x55e0ffc7  bnel        $t7, $zero, . + 4 + (-0x39 << 2)
label_2f0094:
    if (ctx->pc == 0x2F0094u) {
        ctx->pc = 0x2F0094u;
            // 0x2f0094: 0x8dae0000  lw          $t6, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->pc = 0x2F0098u;
        goto label_2f0098;
    }
    ctx->pc = 0x2F0090u;
    {
        const bool branch_taken_0x2f0090 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0090) {
            ctx->pc = 0x2F0094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0090u;
            // 0x2f0094: 0x8dae0000  lw          $t6, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2effb0;
        }
    }
    ctx->pc = 0x2F0098u;
label_2f0098:
    // 0x2f0098: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_2f009c:
    if (ctx->pc == 0x2F009Cu) {
        ctx->pc = 0x2F009Cu;
            // 0x2f009c: 0x8e0f0028  lw          $t7, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x2F00A0u;
        goto label_2f00a0;
    }
    ctx->pc = 0x2F0098u;
    {
        const bool branch_taken_0x2f0098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0098u;
            // 0x2f009c: 0x8e0f0028  lw          $t7, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0098) {
            ctx->pc = 0x2EFFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2effc8;
        }
    }
    ctx->pc = 0x2F00A0u;
label_2f00a0:
    // 0x2f00a0: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x2f00a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f00a4:
    // 0x2f00a4: 0x11eeffec  beq         $t7, $t6, . + 4 + (-0x14 << 2)
label_2f00a8:
    if (ctx->pc == 0x2F00A8u) {
        ctx->pc = 0x2F00A8u;
            // 0x2f00a8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F00ACu;
        goto label_2f00ac;
    }
    ctx->pc = 0x2F00A4u;
    {
        const bool branch_taken_0x2f00a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x2F00A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00A4u;
            // 0x2f00a8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00a4) {
            ctx->pc = 0x2F0058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0058;
        }
    }
    ctx->pc = 0x2F00ACu;
label_2f00ac:
    // 0x2f00ac: 0x8daf0030  lw          $t7, 0x30($t5)
    ctx->pc = 0x2f00acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
label_2f00b0:
    // 0x2f00b0: 0x11eeffe9  beq         $t7, $t6, . + 4 + (-0x17 << 2)
label_2f00b4:
    if (ctx->pc == 0x2F00B4u) {
        ctx->pc = 0x2F00B4u;
            // 0x2f00b4: 0x8d8eeca8  lw          $t6, -0x1358($t4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294962344)));
        ctx->pc = 0x2F00B8u;
        goto label_2f00b8;
    }
    ctx->pc = 0x2F00B0u;
    {
        const bool branch_taken_0x2f00b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x2F00B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00B0u;
            // 0x2f00b4: 0x8d8eeca8  lw          $t6, -0x1358($t4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294962344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00b0) {
            ctx->pc = 0x2F0058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0058;
        }
    }
    ctx->pc = 0x2F00B8u;
label_2f00b8:
    // 0x2f00b8: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2f00b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f00bc:
    // 0x2f00bc: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
label_2f00c0:
    if (ctx->pc == 0x2F00C0u) {
        ctx->pc = 0x2F00C0u;
            // 0x2f00c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F00C4u;
        goto label_2f00c4;
    }
    ctx->pc = 0x2F00BCu;
    {
        const bool branch_taken_0x2f00bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F00C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00BCu;
            // 0x2f00c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00bc) {
            ctx->pc = 0x2F00E4u;
            goto label_2f00e4;
        }
    }
    ctx->pc = 0x2F00C4u;
label_2f00c4:
    // 0x2f00c4: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x2f00c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2f00c8:
    // 0x2f00c8: 0x15ee0006  bne         $t7, $t6, . + 4 + (0x6 << 2)
label_2f00cc:
    if (ctx->pc == 0x2F00CCu) {
        ctx->pc = 0x2F00CCu;
            // 0x2f00cc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2F00D0u;
        goto label_2f00d0;
    }
    ctx->pc = 0x2F00C8u;
    {
        const bool branch_taken_0x2f00c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x2F00CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00C8u;
            // 0x2f00cc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00c8) {
            ctx->pc = 0x2F00E4u;
            goto label_2f00e4;
        }
    }
    ctx->pc = 0x2F00D0u;
label_2f00d0:
    // 0x2f00d0: 0x24050be6  addiu       $a1, $zero, 0xBE6
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3046));
label_2f00d4:
    // 0x2f00d4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f00d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f00d8:
    // 0x2f00d8: 0x24841538  addiu       $a0, $a0, 0x1538
    ctx->pc = 0x2f00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5432));
label_2f00dc:
    // 0x2f00dc: 0xc0bc6f6  jal         func_2F1BD8
label_2f00e0:
    if (ctx->pc == 0x2F00E0u) {
        ctx->pc = 0x2F00E0u;
            // 0x2f00e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F00E4u;
        goto label_2f00e4;
    }
    ctx->pc = 0x2F00DCu;
    SET_GPR_U32(ctx, 31, 0x2F00E4u);
    ctx->pc = 0x2F00E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00DCu;
            // 0x2f00e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00E4u; }
        if (ctx->pc != 0x2F00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00E4u; }
        if (ctx->pc != 0x2F00E4u) { return; }
    }
    ctx->pc = 0x2F00E4u;
label_2f00e4:
    // 0x2f00e4: 0xc0bb642  jal         func_2ED908
label_2f00e8:
    if (ctx->pc == 0x2F00E8u) {
        ctx->pc = 0x2F00E8u;
            // 0x2f00e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F00ECu;
        goto label_2f00ec;
    }
    ctx->pc = 0x2F00E4u;
    SET_GPR_U32(ctx, 31, 0x2F00ECu);
    ctx->pc = 0x2F00E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00E4u;
            // 0x2f00e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00ECu; }
        if (ctx->pc != 0x2F00ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00ECu; }
        if (ctx->pc != 0x2F00ECu) { return; }
    }
    ctx->pc = 0x2F00ECu;
label_2f00ec:
    // 0x2f00ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f00f0:
    if (ctx->pc == 0x2F00F0u) {
        ctx->pc = 0x2F00F0u;
            // 0x2f00f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F00F4u;
        goto label_2f00f4;
    }
    ctx->pc = 0x2F00ECu;
    {
        const bool branch_taken_0x2f00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00ECu;
            // 0x2f00f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00ec) {
            ctx->pc = 0x2F0108u;
            goto label_2f0108;
        }
    }
    ctx->pc = 0x2F00F4u;
label_2f00f4:
    // 0x2f00f4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2f00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2f00f8:
    // 0x2f00f8: 0xc0bb642  jal         func_2ED908
label_2f00fc:
    if (ctx->pc == 0x2F00FCu) {
        ctx->pc = 0x2F00FCu;
            // 0x2f00fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0100u;
        goto label_2f0100;
    }
    ctx->pc = 0x2F00F8u;
    SET_GPR_U32(ctx, 31, 0x2F0100u);
    ctx->pc = 0x2F00FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00F8u;
            // 0x2f00fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0100u; }
        if (ctx->pc != 0x2F0100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0100u; }
        if (ctx->pc != 0x2F0100u) { return; }
    }
    ctx->pc = 0x2F0100u;
label_2f0100:
    // 0x2f0100: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
label_2f0104:
    if (ctx->pc == 0x2F0104u) {
        ctx->pc = 0x2F0104u;
            // 0x2f0104: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0108u;
        goto label_2f0108;
    }
    ctx->pc = 0x2F0100u;
    {
        const bool branch_taken_0x2f0100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0100u;
            // 0x2f0104: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0100) {
            ctx->pc = 0x2F00F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f00f4;
        }
    }
    ctx->pc = 0x2F0108u;
label_2f0108:
    // 0x2f0108: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f0108u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f010c:
    // 0x2f010c: 0x25ececa8  addiu       $t4, $t7, -0x1358
    ctx->pc = 0x2f010cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
label_2f0110:
    // 0x2f0110: 0x958e001c  lhu         $t6, 0x1C($t4)
    ctx->pc = 0x2f0110u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 28)));
label_2f0114:
    // 0x2f0114: 0x340ffffe  ori         $t7, $zero, 0xFFFE
    ctx->pc = 0x2f0114u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_2f0118:
    // 0x2f0118: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2f0118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2f011c:
    // 0x2f011c: 0x31cdffff  andi        $t5, $t6, 0xFFFF
    ctx->pc = 0x2f011cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_2f0120:
    // 0x2f0120: 0x1ed782b  sltu        $t7, $t7, $t5
    ctx->pc = 0x2f0120u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_2f0124:
    // 0x2f0124: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_2f0128:
    if (ctx->pc == 0x2F0128u) {
        ctx->pc = 0x2F0128u;
            // 0x2f0128: 0xa58e001c  sh          $t6, 0x1C($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 28), (uint16_t)GPR_U32(ctx, 14));
        ctx->pc = 0x2F012Cu;
        goto label_2f012c;
    }
    ctx->pc = 0x2F0124u;
    {
        const bool branch_taken_0x2f0124 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0124u;
            // 0x2f0128: 0xa58e001c  sh          $t6, 0x1C($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 28), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0124) {
            ctx->pc = 0x2F013Cu;
            goto label_2f013c;
        }
    }
    ctx->pc = 0x2F012Cu;
label_2f012c:
    // 0x2f012c: 0x958f001e  lhu         $t7, 0x1E($t4)
    ctx->pc = 0x2f012cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 30)));
label_2f0130:
    // 0x2f0130: 0xa580001c  sh          $zero, 0x1C($t4)
    ctx->pc = 0x2f0130u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 28), (uint16_t)GPR_U32(ctx, 0));
label_2f0134:
    // 0x2f0134: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f0134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2f0138:
    // 0x2f0138: 0xa58f001e  sh          $t7, 0x1E($t4)
    ctx->pc = 0x2f0138u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 30), (uint16_t)GPR_U32(ctx, 15));
label_2f013c:
    // 0x2f013c: 0x8d8f03cc  lw          $t7, 0x3CC($t4)
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 972)));
label_2f0140:
    // 0x2f0140: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_2f0144:
    if (ctx->pc == 0x2F0144u) {
        ctx->pc = 0x2F0148u;
        goto label_2f0148;
    }
    ctx->pc = 0x2F0140u;
    {
        const bool branch_taken_0x2f0140 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0140) {
            ctx->pc = 0x2F0150u;
            goto label_2f0150;
        }
    }
    ctx->pc = 0x2F0148u;
label_2f0148:
    // 0x2f0148: 0x1e0f809  jalr        $t7
label_2f014c:
    if (ctx->pc == 0x2F014Cu) {
        ctx->pc = 0x2F0150u;
        goto label_2f0150;
    }
    ctx->pc = 0x2F0148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2F0150u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0150u; }
            if (ctx->pc != 0x2F0150u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0150u;
label_2f0150:
    // 0x2f0150: 0x1240ffc0  beqz        $s2, . + 4 + (-0x40 << 2)
label_2f0154:
    if (ctx->pc == 0x2F0154u) {
        ctx->pc = 0x2F0154u;
            // 0x2f0154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0158u;
        goto label_2f0158;
    }
    ctx->pc = 0x2F0150u;
    {
        const bool branch_taken_0x2f0150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0150u;
            // 0x2f0154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0150) {
            ctx->pc = 0x2F0054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0054;
        }
    }
    ctx->pc = 0x2F0158u;
label_2f0158:
    // 0x2f0158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f015c:
    // 0x2f015c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2f015cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f0160:
    // 0x2f0160: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x2f0160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2f0164:
    // 0x2f0164: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x2f0164u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0168:
    // 0x2f0168: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x2f0168u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f016c:
    // 0x2f016c: 0x958f0000  lhu         $t7, 0x0($t4)
    ctx->pc = 0x2f016cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_2f0170:
    // 0x2f0170: 0x1ea6824  and         $t5, $t7, $t2
    ctx->pc = 0x2f0170u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 10));
label_2f0174:
    // 0x2f0174: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f0174u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
label_2f0178:
    // 0x2f0178: 0x11e90002  beq         $t7, $t1, . + 4 + (0x2 << 2)
label_2f017c:
    if (ctx->pc == 0x2F017Cu) {
        ctx->pc = 0x2F017Cu;
            // 0x2f017c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2F0180u;
        goto label_2f0180;
    }
    ctx->pc = 0x2F0178u;
    {
        const bool branch_taken_0x2f0178 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 9));
        ctx->pc = 0x2F017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0178u;
            // 0x2f017c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0178) {
            ctx->pc = 0x2F0184u;
            goto label_2f0184;
        }
    }
    ctx->pc = 0x2F0180u;
label_2f0180:
    // 0x2f0180: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x2f0180u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0184:
    // 0x2f0184: 0x31cf000d  andi        $t7, $t6, 0xD
    ctx->pc = 0x2f0184u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)13);
label_2f0188:
    // 0x2f0188: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2f018c:
    // 0x2f018c: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x2f018cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
label_2f0190:
    // 0x2f0190: 0x172702b  sltu        $t6, $t3, $s2
    ctx->pc = 0x2f0190u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2f0194:
    // 0x2f0194: 0x15c0fff3  bnez        $t6, . + 4 + (-0xD << 2)
label_2f0198:
    if (ctx->pc == 0x2F0198u) {
        ctx->pc = 0x2F0198u;
            // 0x2f0198: 0xa58f0000  sh          $t7, 0x0($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x2F019Cu;
        goto label_2f019c;
    }
    ctx->pc = 0x2F0194u;
    {
        const bool branch_taken_0x2f0194 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0194u;
            // 0x2f0198: 0xa58f0000  sh          $t7, 0x0($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0194) {
            ctx->pc = 0x2F0164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0164;
        }
    }
    ctx->pc = 0x2F019Cu;
label_2f019c:
    // 0x2f019c: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_2f01a0:
    if (ctx->pc == 0x2F01A0u) {
        ctx->pc = 0x2F01A0u;
            // 0x2f01a0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F01A4u;
        goto label_2f01a4;
    }
    ctx->pc = 0x2F019Cu;
    {
        const bool branch_taken_0x2f019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F019Cu;
            // 0x2f01a0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f019c) {
            ctx->pc = 0x2F0058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0058;
        }
    }
    ctx->pc = 0x2F01A4u;
label_2f01a4:
    // 0x2f01a4: 0x0  nop
    ctx->pc = 0x2f01a4u;
    // NOP
label_2f01a8:
    // 0x2f01a8: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x2f01a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f01ac:
    // 0x2f01ac: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x2f01acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2f01b0:
    // 0x2f01b0: 0x318d000f  andi        $t5, $t4, 0xF
    ctx->pc = 0x2f01b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
label_2f01b4:
    // 0x2f01b4: 0x11af0021  beq         $t5, $t7, . + 4 + (0x21 << 2)
label_2f01b8:
    if (ctx->pc == 0x2F01B8u) {
        ctx->pc = 0x2F01B8u;
            // 0x2f01b8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F01BCu;
        goto label_2f01bc;
    }
    ctx->pc = 0x2F01B4u;
    {
        const bool branch_taken_0x2f01b4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01B4u;
            // 0x2f01b8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01b4) {
            ctx->pc = 0x2F023Cu;
            goto label_2f023c;
        }
    }
    ctx->pc = 0x2F01BCu;
label_2f01bc:
    // 0x2f01bc: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x2f01bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f01c0:
    // 0x2f01c0: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2f01c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f01c4:
    // 0x2f01c4: 0x2413fff0  addiu       $s3, $zero, -0x10
    ctx->pc = 0x2f01c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2f01c8:
    // 0x2f01c8: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x2f01c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f01cc:
    // 0x2f01cc: 0x25affffa  addiu       $t7, $t5, -0x6
    ctx->pc = 0x2f01ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967290));
label_2f01d0:
    // 0x2f01d0: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2f01d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f01d4:
    // 0x2f01d4: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
label_2f01d8:
    if (ctx->pc == 0x2F01D8u) {
        ctx->pc = 0x2F01D8u;
            // 0x2f01d8: 0x31aeffff  andi        $t6, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2F01DCu;
        goto label_2f01dc;
    }
    ctx->pc = 0x2F01D4u;
    {
        const bool branch_taken_0x2f01d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F01D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01D4u;
            // 0x2f01d8: 0x31aeffff  andi        $t6, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01d4) {
            ctx->pc = 0x2F01E4u;
            goto label_2f01e4;
        }
    }
    ctx->pc = 0x2F01DCu;
label_2f01dc:
    // 0x2f01dc: 0x55d5000f  bnel        $t6, $s5, . + 4 + (0xF << 2)
label_2f01e0:
    if (ctx->pc == 0x2F01E0u) {
        ctx->pc = 0x2F01E0u;
            // 0x2f01e0: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x2F01E4u;
        goto label_2f01e4;
    }
    ctx->pc = 0x2F01DCu;
    {
        const bool branch_taken_0x2f01dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f01dc) {
            ctx->pc = 0x2F01E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01DCu;
            // 0x2f01e0: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F021Cu;
            goto label_2f021c;
        }
    }
    ctx->pc = 0x2F01E4u;
label_2f01e4:
    // 0x2f01e4: 0x11d40002  beq         $t6, $s4, . + 4 + (0x2 << 2)
label_2f01e8:
    if (ctx->pc == 0x2F01E8u) {
        ctx->pc = 0x2F01E8u;
            // 0x2f01e8: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2F01ECu;
        goto label_2f01ec;
    }
    ctx->pc = 0x2F01E4u;
    {
        const bool branch_taken_0x2f01e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F01E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01E4u;
            // 0x2f01e8: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01e4) {
            ctx->pc = 0x2F01F0u;
            goto label_2f01f0;
        }
    }
    ctx->pc = 0x2F01ECu;
label_2f01ec:
    // 0x2f01ec: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2f01ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f01f0:
    // 0x2f01f0: 0x1937024  and         $t6, $t4, $s3
    ctx->pc = 0x2f01f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 19));
label_2f01f4:
    // 0x2f01f4: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f01f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
label_2f01f8:
    // 0x2f01f8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2f01f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_2f01fc:
    // 0x2f01fc: 0xe213a  dsrl        $a0, $t6, 4
    ctx->pc = 0x2f01fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) >> 4);
label_2f0200:
    // 0x2f0200: 0xa62e0000  sh          $t6, 0x0($s1)
    ctx->pc = 0x2f0200u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 14));
label_2f0204:
    // 0x2f0204: 0xc0bb5fc  jal         func_2ED7F0
label_2f0208:
    if (ctx->pc == 0x2F0208u) {
        ctx->pc = 0x2F0208u;
            // 0x2f0208: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x2F020Cu;
        goto label_2f020c;
    }
    ctx->pc = 0x2F0204u;
    SET_GPR_U32(ctx, 31, 0x2F020Cu);
    ctx->pc = 0x2F0208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0204u;
            // 0x2f0208: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (runtime->hasFunction(0x2ED7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F020Cu; }
        if (ctx->pc != 0x2F020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED7F0_0x2ed7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F020Cu; }
        if (ctx->pc != 0x2F020Cu) { return; }
    }
    ctx->pc = 0x2F020Cu;
label_2f020c:
    // 0x2f020c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_2f0210:
    if (ctx->pc == 0x2F0210u) {
        ctx->pc = 0x2F0210u;
            // 0x2f0210: 0x92290000  lbu         $t1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2F0214u;
        goto label_2f0214;
    }
    ctx->pc = 0x2F020Cu;
    {
        const bool branch_taken_0x2f020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f020c) {
            ctx->pc = 0x2F0210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F020Cu;
            // 0x2f0210: 0x92290000  lbu         $t1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0300u;
            goto label_2f0300;
        }
    }
    ctx->pc = 0x2F0214u;
label_2f0214:
    // 0x2f0214: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2f0214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2f0218:
    // 0x2f0218: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x2f0218u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2f021c:
    // 0x2f021c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2f021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f0220:
    // 0x2f0220: 0xc0bc19e  jal         func_2F0678
label_2f0224:
    if (ctx->pc == 0x2F0224u) {
        ctx->pc = 0x2F0224u;
            // 0x2f0224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0228u;
        goto label_2f0228;
    }
    ctx->pc = 0x2F0220u;
    SET_GPR_U32(ctx, 31, 0x2F0228u);
    ctx->pc = 0x2F0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0220u;
            // 0x2f0224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0228u; }
        if (ctx->pc != 0x2F0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0228u; }
        if (ctx->pc != 0x2F0228u) { return; }
    }
    ctx->pc = 0x2F0228u;
label_2f0228:
    // 0x2f0228: 0x944e0000  lhu         $t6, 0x0($v0)
    ctx->pc = 0x2f0228u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f022c:
    // 0x2f022c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x2f022cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2f0230:
    // 0x2f0230: 0x318d000f  andi        $t5, $t4, 0xF
    ctx->pc = 0x2f0230u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
label_2f0234:
    // 0x2f0234: 0x15b2ffe5  bne         $t5, $s2, . + 4 + (-0x1B << 2)
label_2f0238:
    if (ctx->pc == 0x2F0238u) {
        ctx->pc = 0x2F0238u;
            // 0x2f0238: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F023Cu;
        goto label_2f023c;
    }
    ctx->pc = 0x2F0234u;
    {
        const bool branch_taken_0x2f0234 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F0238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0234u;
            // 0x2f0238: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0234) {
            ctx->pc = 0x2F01CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f01cc;
        }
    }
    ctx->pc = 0x2F023Cu;
label_2f023c:
    // 0x2f023c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f023cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f0240:
    // 0x2f0240: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2f0240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
label_2f0244:
    // 0x2f0244: 0x8e2f03cc  lw          $t7, 0x3CC($s1)
    ctx->pc = 0x2f0244u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 972)));
label_2f0248:
    // 0x2f0248: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_2f024c:
    if (ctx->pc == 0x2F024Cu) {
        ctx->pc = 0x2F0250u;
        goto label_2f0250;
    }
    ctx->pc = 0x2F0248u;
    {
        const bool branch_taken_0x2f0248 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0248) {
            ctx->pc = 0x2F0258u;
            goto label_2f0258;
        }
    }
    ctx->pc = 0x2F0250u;
label_2f0250:
    // 0x2f0250: 0x1e0f809  jalr        $t7
label_2f0254:
    if (ctx->pc == 0x2F0254u) {
        ctx->pc = 0x2F0258u;
        goto label_2f0258;
    }
    ctx->pc = 0x2F0250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2F0258u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0258u; }
            if (ctx->pc != 0x2F0258u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0258u;
label_2f0258:
    // 0x2f0258: 0xc0bb642  jal         func_2ED908
label_2f025c:
    if (ctx->pc == 0x2F025Cu) {
        ctx->pc = 0x2F025Cu;
            // 0x2f025c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0260u;
        goto label_2f0260;
    }
    ctx->pc = 0x2F0258u;
    SET_GPR_U32(ctx, 31, 0x2F0260u);
    ctx->pc = 0x2F025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0258u;
            // 0x2f025c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0260u; }
        if (ctx->pc != 0x2F0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0260u; }
        if (ctx->pc != 0x2F0260u) { return; }
    }
    ctx->pc = 0x2F0260u;
label_2f0260:
    // 0x2f0260: 0x1040ff7c  beqz        $v0, . + 4 + (-0x84 << 2)
label_2f0264:
    if (ctx->pc == 0x2F0264u) {
        ctx->pc = 0x2F0264u;
            // 0x2f0264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0268u;
        goto label_2f0268;
    }
    ctx->pc = 0x2F0260u;
    {
        const bool branch_taken_0x2f0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0260u;
            // 0x2f0264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0260) {
            ctx->pc = 0x2F0054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0054;
        }
    }
    ctx->pc = 0x2F0268u;
label_2f0268:
    // 0x2f0268: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2f0268u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
label_2f026c:
    // 0x2f026c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2f026cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_2f0270:
    // 0x2f0270: 0x25f21538  addiu       $s2, $t7, 0x1538
    ctx->pc = 0x2f0270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 5432));
label_2f0274:
    // 0x2f0274: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2f0274u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2f0278:
    // 0x2f0278: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x2f0278u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f027c:
    // 0x2f027c: 0x8e2f00b0  lw          $t7, 0xB0($s1)
    ctx->pc = 0x2f027cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2f0280:
    // 0x2f0280: 0x110f0018  beq         $t0, $t7, . + 4 + (0x18 << 2)
label_2f0284:
    if (ctx->pc == 0x2F0284u) {
        ctx->pc = 0x2F0288u;
        goto label_2f0288;
    }
    ctx->pc = 0x2F0280u;
    {
        const bool branch_taken_0x2f0280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 15));
        if (branch_taken_0x2f0280) {
            ctx->pc = 0x2F02E4u;
            goto label_2f02e4;
        }
    }
    ctx->pc = 0x2F0288u;
label_2f0288:
    // 0x2f0288: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x2f0288u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2f028c:
    // 0x2f028c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f028cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2f0290:
    // 0x2f0290: 0xae0f0028  sw          $t7, 0x28($s0)
    ctx->pc = 0x2f0290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 15));
label_2f0294:
    // 0x2f0294: 0x8e2e0384  lw          $t6, 0x384($s1)
    ctx->pc = 0x2f0294u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_2f0298:
    // 0x2f0298: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x2f0298u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_2f029c:
    // 0x2f029c: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
label_2f02a0:
    if (ctx->pc == 0x2F02A0u) {
        ctx->pc = 0x2F02A0u;
            // 0x2f02a0: 0x24050c26  addiu       $a1, $zero, 0xC26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3110));
        ctx->pc = 0x2F02A4u;
        goto label_2f02a4;
    }
    ctx->pc = 0x2F029Cu;
    {
        const bool branch_taken_0x2f029c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F02A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F029Cu;
            // 0x2f02a0: 0x24050c26  addiu       $a1, $zero, 0xC26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f029c) {
            ctx->pc = 0x2F02E4u;
            goto label_2f02e4;
        }
    }
    ctx->pc = 0x2F02A4u;
label_2f02a4:
    // 0x2f02a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f02a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f02a8:
    // 0x2f02a8: 0x26871588  addiu       $a3, $s4, 0x1588
    ctx->pc = 0x2f02a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 5512));
label_2f02ac:
    // 0x2f02ac: 0xc0897d6  jal         func_225F58
label_2f02b0:
    if (ctx->pc == 0x2F02B0u) {
        ctx->pc = 0x2F02B0u;
            // 0x2f02b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F02B4u;
        goto label_2f02b4;
    }
    ctx->pc = 0x2F02ACu;
    SET_GPR_U32(ctx, 31, 0x2F02B4u);
    ctx->pc = 0x2F02B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02ACu;
            // 0x2f02b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02B4u; }
        if (ctx->pc != 0x2F02B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02B4u; }
        if (ctx->pc != 0x2F02B4u) { return; }
    }
    ctx->pc = 0x2F02B4u;
label_2f02b4:
    // 0x2f02b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f02b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f02b8:
    // 0x2f02b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f02b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f02bc:
    // 0x2f02bc: 0x24050c27  addiu       $a1, $zero, 0xC27
    ctx->pc = 0x2f02bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3111));
label_2f02c0:
    // 0x2f02c0: 0xc0bc71e  jal         func_2F1C78
label_2f02c4:
    if (ctx->pc == 0x2F02C4u) {
        ctx->pc = 0x2F02C4u;
            // 0x2f02c4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2F02C8u;
        goto label_2f02c8;
    }
    ctx->pc = 0x2F02C0u;
    SET_GPR_U32(ctx, 31, 0x2F02C8u);
    ctx->pc = 0x2F02C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02C0u;
            // 0x2f02c4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (runtime->hasFunction(0x2F1C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F1C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02C8u; }
        if (ctx->pc != 0x2F02C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1C78_0x2f1c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02C8u; }
        if (ctx->pc != 0x2F02C8u) { return; }
    }
    ctx->pc = 0x2F02C8u;
label_2f02c8:
    // 0x2f02c8: 0x8e290384  lw          $t1, 0x384($s1)
    ctx->pc = 0x2f02c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_2f02cc:
    // 0x2f02cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f02ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f02d0:
    // 0x2f02d0: 0x24050c28  addiu       $a1, $zero, 0xC28
    ctx->pc = 0x2f02d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3112));
label_2f02d4:
    // 0x2f02d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f02d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f02d8:
    // 0x2f02d8: 0x2407d8ec  addiu       $a3, $zero, -0x2714
    ctx->pc = 0x2f02d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
label_2f02dc:
    // 0x2f02dc: 0xc0bc73e  jal         func_2F1CF8
label_2f02e0:
    if (ctx->pc == 0x2F02E0u) {
        ctx->pc = 0x2F02E0u;
            // 0x2f02e0: 0x266809c8  addiu       $t0, $s3, 0x9C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2504));
        ctx->pc = 0x2F02E4u;
        goto label_2f02e4;
    }
    ctx->pc = 0x2F02DCu;
    SET_GPR_U32(ctx, 31, 0x2F02E4u);
    ctx->pc = 0x2F02E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02DCu;
            // 0x2f02e0: 0x266809c8  addiu       $t0, $s3, 0x9C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02E4u; }
        if (ctx->pc != 0x2F02E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02E4u; }
        if (ctx->pc != 0x2F02E4u) { return; }
    }
    ctx->pc = 0x2F02E4u;
label_2f02e4:
    // 0x2f02e4: 0xc0bb642  jal         func_2ED908
label_2f02e8:
    if (ctx->pc == 0x2F02E8u) {
        ctx->pc = 0x2F02E8u;
            // 0x2f02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F02ECu;
        goto label_2f02ec;
    }
    ctx->pc = 0x2F02E4u;
    SET_GPR_U32(ctx, 31, 0x2F02ECu);
    ctx->pc = 0x2F02E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02E4u;
            // 0x2f02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02ECu; }
        if (ctx->pc != 0x2F02ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02ECu; }
        if (ctx->pc != 0x2F02ECu) { return; }
    }
    ctx->pc = 0x2F02ECu;
label_2f02ec:
    // 0x2f02ec: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2f02f0:
    if (ctx->pc == 0x2F02F0u) {
        ctx->pc = 0x2F02F0u;
            // 0x2f02f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F02F4u;
        goto label_2f02f4;
    }
    ctx->pc = 0x2F02ECu;
    {
        const bool branch_taken_0x2f02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F02F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02ECu;
            // 0x2f02f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02ec) {
            ctx->pc = 0x2F0278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0278;
        }
    }
    ctx->pc = 0x2F02F4u;
label_2f02f4:
    // 0x2f02f4: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_2f02f8:
    if (ctx->pc == 0x2F02F8u) {
        ctx->pc = 0x2F02F8u;
            // 0x2f02f8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F02FCu;
        goto label_2f02fc;
    }
    ctx->pc = 0x2F02F4u;
    {
        const bool branch_taken_0x2f02f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F02F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02F4u;
            // 0x2f02f8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02f4) {
            ctx->pc = 0x2F0058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0058;
        }
    }
    ctx->pc = 0x2F02FCu;
label_2f02fc:
    // 0x2f02fc: 0x0  nop
    ctx->pc = 0x2f02fcu;
    // NOP
label_2f0300:
    // 0x2f0300: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f0304:
    // 0x2f0304: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f0308:
    // 0x2f0308: 0x24841538  addiu       $a0, $a0, 0x1538
    ctx->pc = 0x2f0308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5432));
label_2f030c:
    // 0x2f030c: 0x9493a  dsrl        $t1, $t1, 4
    ctx->pc = 0x2f030cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 4);
label_2f0310:
    // 0x2f0310: 0x250811c8  addiu       $t0, $t0, 0x11C8
    ctx->pc = 0x2f0310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4552));
label_2f0314:
    // 0x2f0314: 0x24050c17  addiu       $a1, $zero, 0xC17
    ctx->pc = 0x2f0314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3095));
label_2f0318:
    // 0x2f0318: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f031c:
    // 0x2f031c: 0xc0bc73e  jal         func_2F1CF8
label_2f0320:
    if (ctx->pc == 0x2F0320u) {
        ctx->pc = 0x2F0320u;
            // 0x2f0320: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
        ctx->pc = 0x2F0324u;
        goto label_2f0324;
    }
    ctx->pc = 0x2F031Cu;
    SET_GPR_U32(ctx, 31, 0x2F0324u);
    ctx->pc = 0x2F0320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F031Cu;
            // 0x2f0320: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0324u; }
        if (ctx->pc != 0x2F0324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0324u; }
        if (ctx->pc != 0x2F0324u) { return; }
    }
    ctx->pc = 0x2F0324u;
label_2f0324:
    // 0x2f0324: 0x1000ff4d  b           . + 4 + (-0xB3 << 2)
label_2f0328:
    if (ctx->pc == 0x2F0328u) {
        ctx->pc = 0x2F0328u;
            // 0x2f0328: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2F032Cu;
        goto label_2f032c;
    }
    ctx->pc = 0x2F0324u;
    {
        const bool branch_taken_0x2f0324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0324u;
            // 0x2f0328: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0324) {
            ctx->pc = 0x2F005Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f005c;
        }
    }
    ctx->pc = 0x2F032Cu;
label_2f032c:
    // 0x2f032c: 0x0  nop
    ctx->pc = 0x2f032cu;
    // NOP
    ctx->pc = 0x2f0330u;
}
