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

// Function: sub_002BAE50
// Address: 0x2bae50 - 0x2bb2b0
void sub_002BAE50_0x2bae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE50_0x2bae50");
#endif

    switch (ctx->pc) {
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        case 0x2bae58u: goto label_2bae58;
        case 0x2bae5cu: goto label_2bae5c;
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae64u: goto label_2bae64;
        case 0x2bae68u: goto label_2bae68;
        case 0x2bae6cu: goto label_2bae6c;
        case 0x2bae70u: goto label_2bae70;
        case 0x2bae74u: goto label_2bae74;
        case 0x2bae78u: goto label_2bae78;
        case 0x2bae7cu: goto label_2bae7c;
        case 0x2bae80u: goto label_2bae80;
        case 0x2bae84u: goto label_2bae84;
        case 0x2bae88u: goto label_2bae88;
        case 0x2bae8cu: goto label_2bae8c;
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        case 0x2bafa0u: goto label_2bafa0;
        case 0x2bafa4u: goto label_2bafa4;
        case 0x2bafa8u: goto label_2bafa8;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafb4u: goto label_2bafb4;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafbcu: goto label_2bafbc;
        case 0x2bafc0u: goto label_2bafc0;
        case 0x2bafc4u: goto label_2bafc4;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafccu: goto label_2bafcc;
        case 0x2bafd0u: goto label_2bafd0;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafd8u: goto label_2bafd8;
        case 0x2bafdcu: goto label_2bafdc;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2bafe8u: goto label_2bafe8;
        case 0x2bafecu: goto label_2bafec;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff4u: goto label_2baff4;
        case 0x2baff8u: goto label_2baff8;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb000u: goto label_2bb000;
        case 0x2bb004u: goto label_2bb004;
        case 0x2bb008u: goto label_2bb008;
        case 0x2bb00cu: goto label_2bb00c;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        default: break;
    }

    ctx->pc = 0x2bae50u;

label_2bae50:
    // 0x2bae50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2bae54:
    // 0x2bae54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bae58:
    // 0x2bae58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bae5c:
    // 0x2bae5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bae5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bae60:
    // 0x2bae60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bae64:
    // 0x2bae64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bae68:
    // 0x2bae68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2bae6c:
    // 0x2bae6c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2bae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2bae70:
    // 0x2bae70: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2bae74:
    // 0x2bae74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2bae78:
    // 0x2bae78: 0xc0aeb6e  jal         func_2BADB8
label_2bae7c:
    if (ctx->pc == 0x2BAE7Cu) {
        ctx->pc = 0x2BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE78u;
        // 0x2bae7c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE80u;
        goto label_2bae80;
    }
    ctx->pc = 0x2BAE78u;
    SET_GPR_U32(ctx, 31, 0x2BAE80u);
    ctx->pc = 0x2BAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE78u;
    // 0x2bae7c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BADB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BADB8u, 0x2BAE78u, 0x2BAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE80u;
label_2bae80:
    // 0x2bae80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bae80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae84:
    // 0x2bae84: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
label_2bae88:
    if (ctx->pc == 0x2BAE88u) {
        ctx->pc = 0x2BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE84u;
        // 0x2bae88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE8Cu;
        goto label_2bae8c;
    }
    ctx->pc = 0x2BAE84u;
    {
        const bool branch_taken_0x2bae84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE84u;
        // 0x2bae88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae84) {
            ctx->pc = 0x2BAFC8u;
            goto label_2bafc8;
        }
    }
    ctx->pc = 0x2BAE8Cu;
label_2bae8c:
    // 0x2bae8c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2bae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2bae90:
    // 0x2bae90: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2bae90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2bae94:
    // 0x2bae94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2bae98:
    if (ctx->pc == 0x2BAE98u) {
        ctx->pc = 0x2BAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE94u;
        // 0x2bae98: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE9Cu;
        goto label_2bae9c;
    }
    ctx->pc = 0x2BAE94u;
    {
        const bool branch_taken_0x2bae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae94) {
            ctx->pc = 0x2BAE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAE94u;
            // 0x2bae98: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEA8u;
            goto label_2baea8;
        }
    }
    ctx->pc = 0x2BAE9Cu;
label_2bae9c:
    // 0x2bae9c: 0xc0ac09e  jal         func_2B0278
label_2baea0:
    if (ctx->pc == 0x2BAEA0u) {
        ctx->pc = 0x2BAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE9Cu;
        // 0x2baea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEA4u;
        goto label_2baea4;
    }
    ctx->pc = 0x2BAE9Cu;
    SET_GPR_U32(ctx, 31, 0x2BAEA4u);
    ctx->pc = 0x2BAEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE9Cu;
    // 0x2baea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0278u, 0x2BAE9Cu, 0x2BAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEA4u;
label_2baea4:
    // 0x2baea4: 0xfe2200a0  sd          $v0, 0xA0($s1)
    ctx->pc = 0x2baea4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
label_2baea8:
    // 0x2baea8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x2baea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2baeac:
    // 0x2baeac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2baeb0:
    if (ctx->pc == 0x2BAEB0u) {
        ctx->pc = 0x2BAEB4u;
        goto label_2baeb4;
    }
    ctx->pc = 0x2BAEACu;
    {
        const bool branch_taken_0x2baeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baeac) {
            ctx->pc = 0x2BAEC0u;
            goto label_2baec0;
        }
    }
    ctx->pc = 0x2BAEB4u;
label_2baeb4:
    // 0x2baeb4: 0xc0aed46  jal         func_2BB518
label_2baeb8:
    if (ctx->pc == 0x2BAEB8u) {
        ctx->pc = 0x2BAEBCu;
        goto label_2baebc;
    }
    ctx->pc = 0x2BAEB4u;
    SET_GPR_U32(ctx, 31, 0x2BAEBCu);
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BAEB4u, 0x2BAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEBCu;
label_2baebc:
    // 0x2baebc: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2baebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_2baec0:
    // 0x2baec0: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_2baec4:
    if (ctx->pc == 0x2BAEC4u) {
        ctx->pc = 0x2BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC0u;
        // 0x2baec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEC8u;
        goto label_2baec8;
    }
    ctx->pc = 0x2BAEC0u;
    {
        const bool branch_taken_0x2baec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC0u;
        // 0x2baec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baec0) {
            ctx->pc = 0x2BAF94u;
            goto label_2baf94;
        }
    }
    ctx->pc = 0x2BAEC8u;
label_2baec8:
    // 0x2baec8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2baec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2baecc:
    // 0x2baecc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2baed0:
    if (ctx->pc == 0x2BAED0u) {
        ctx->pc = 0x2BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAECCu;
        // 0x2baed0: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAED4u;
        goto label_2baed4;
    }
    ctx->pc = 0x2BAECCu;
    {
        const bool branch_taken_0x2baecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAECCu;
        // 0x2baed0: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baecc) {
            ctx->pc = 0x2BAEDCu;
            goto label_2baedc;
        }
    }
    ctx->pc = 0x2BAED4u;
label_2baed4:
    // 0x2baed4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2baed8:
    if (ctx->pc == 0x2BAED8u) {
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED4u;
        // 0x2baed8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEDCu;
        goto label_2baedc;
    }
    ctx->pc = 0x2BAED4u;
    {
        const bool branch_taken_0x2baed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED4u;
        // 0x2baed8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baed4) {
            ctx->pc = 0x2BAF14u;
            goto label_2baf14;
        }
    }
    ctx->pc = 0x2BAEDCu;
label_2baedc:
    // 0x2baedc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2baee0:
    if (ctx->pc == 0x2BAEE0u) {
        ctx->pc = 0x2BAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEDCu;
        // 0x2baee0: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEE4u;
        goto label_2baee4;
    }
    ctx->pc = 0x2BAEDCu;
    {
        const bool branch_taken_0x2baedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEDCu;
        // 0x2baee0: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baedc) {
            ctx->pc = 0x2BAF10u;
            goto label_2baf10;
        }
    }
    ctx->pc = 0x2BAEE4u;
label_2baee4:
    // 0x2baee4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2baee8:
    if (ctx->pc == 0x2BAEE8u) {
        ctx->pc = 0x2BAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE4u;
        // 0x2baee8: 0x240500b5  addiu       $a1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEECu;
        goto label_2baeec;
    }
    ctx->pc = 0x2BAEE4u;
    {
        const bool branch_taken_0x2baee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE4u;
        // 0x2baee8: 0x240500b5  addiu       $a1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baee4) {
            ctx->pc = 0x2BAF10u;
            goto label_2baf10;
        }
    }
    ctx->pc = 0x2BAEECu;
label_2baeec:
    // 0x2baeec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2baeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2baef0:
    // 0x2baef0: 0x24060103  addiu       $a2, $zero, 0x103
    ctx->pc = 0x2baef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2baef4:
    // 0x2baef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2baef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baef8:
    // 0x2baef8: 0xc0a5648  jal         func_295920
label_2baefc:
    if (ctx->pc == 0x2BAEFCu) {
        ctx->pc = 0x2BAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEF8u;
        // 0x2baefc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF00u;
        goto label_2baf00;
    }
    ctx->pc = 0x2BAEF8u;
    SET_GPR_U32(ctx, 31, 0x2BAF00u);
    ctx->pc = 0x2BAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEF8u;
    // 0x2baefc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BAEF8u, 0x2BAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF00u;
label_2baf00:
    // 0x2baf00: 0xc0aed46  jal         func_2BB518
label_2baf04:
    if (ctx->pc == 0x2BAF04u) {
        ctx->pc = 0x2BAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF00u;
        // 0x2baf04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF08u;
        goto label_2baf08;
    }
    ctx->pc = 0x2BAF00u;
    SET_GPR_U32(ctx, 31, 0x2BAF08u);
    ctx->pc = 0x2BAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF00u;
    // 0x2baf04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BAF00u, 0x2BAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF08u;
label_2baf08:
    // 0x2baf08: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2baf0c:
    if (ctx->pc == 0x2BAF0Cu) {
        ctx->pc = 0x2BAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF08u;
        // 0x2baf0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF10u;
        goto label_2baf10;
    }
    ctx->pc = 0x2BAF08u;
    {
        const bool branch_taken_0x2baf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF08u;
        // 0x2baf0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf08) {
            ctx->pc = 0x2BAFC8u;
            goto label_2bafc8;
        }
    }
    ctx->pc = 0x2BAF10u;
label_2baf10:
    // 0x2baf10: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2baf14:
    // 0x2baf14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2baf14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2baf18:
    // 0x2baf18: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2baf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_2baf1c:
    // 0x2baf1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2baf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2baf20:
    // 0x2baf20: 0x26340048  addiu       $s4, $s1, 0x48
    ctx->pc = 0x2baf20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_2baf24:
    // 0x2baf24: 0x2453e848  addiu       $s3, $v0, -0x17B8
    ctx->pc = 0x2baf24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
label_2baf28:
    // 0x2baf28: 0x2636006c  addiu       $s6, $s1, 0x6C
    ctx->pc = 0x2baf28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2baf2c:
    // 0x2baf2c: 0x26550090  addiu       $s5, $s2, 0x90
    ctx->pc = 0x2baf2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2baf30:
    // 0x2baf30: 0xc0a8d8a  jal         func_2A3628
label_2baf34:
    if (ctx->pc == 0x2BAF34u) {
        ctx->pc = 0x2BAF38u;
        goto label_2baf38;
    }
    ctx->pc = 0x2BAF30u;
    SET_GPR_U32(ctx, 31, 0x2BAF38u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2BAF30u, 0x2BAF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF38u;
label_2baf38:
    // 0x2baf38: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2baf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2baf3c:
    // 0x2baf3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baf40:
    // 0x2baf40: 0xc0a8d02  jal         func_2A3408
label_2baf44:
    if (ctx->pc == 0x2BAF44u) {
        ctx->pc = 0x2BAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF40u;
        // 0x2baf44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF48u;
        goto label_2baf48;
    }
    ctx->pc = 0x2BAF40u;
    SET_GPR_U32(ctx, 31, 0x2BAF48u);
    ctx->pc = 0x2BAF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF40u;
    // 0x2baf44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2BAF40u, 0x2BAF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF48u;
label_2baf48:
    // 0x2baf48: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2baf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2baf4c:
    // 0x2baf4c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2baf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2baf50:
    // 0x2baf50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2baf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2baf54:
    // 0x2baf54: 0xc0a8b3a  jal         func_2A2CE8
label_2baf58:
    if (ctx->pc == 0x2BAF58u) {
        ctx->pc = 0x2BAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF54u;
        // 0x2baf58: 0x24070087  addiu       $a3, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF5Cu;
        goto label_2baf5c;
    }
    ctx->pc = 0x2BAF54u;
    SET_GPR_U32(ctx, 31, 0x2BAF5Cu);
    ctx->pc = 0x2BAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF54u;
    // 0x2baf58: 0x24070087  addiu       $a3, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BAF54u, 0x2BAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF5Cu;
label_2baf5c:
    // 0x2baf5c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x2baf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2baf60:
    // 0x2baf60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2baf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baf64:
    // 0x2baf64: 0xc0a6246  jal         func_298918
label_2baf68:
    if (ctx->pc == 0x2BAF68u) {
        ctx->pc = 0x2BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF64u;
        // 0x2baf68: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF6Cu;
        goto label_2baf6c;
    }
    ctx->pc = 0x2BAF64u;
    SET_GPR_U32(ctx, 31, 0x2BAF6Cu);
    ctx->pc = 0x2BAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF64u;
    // 0x2baf68: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x2BAF64u, 0x2BAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF6Cu;
label_2baf6c:
    // 0x2baf6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2baf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baf70:
    // 0x2baf70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2baf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2baf74:
    // 0x2baf74: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2baf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2baf78:
    // 0x2baf78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2baf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2baf7c:
    // 0x2baf7c: 0xc0a8b3a  jal         func_2A2CE8
label_2baf80:
    if (ctx->pc == 0x2BAF80u) {
        ctx->pc = 0x2BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF7Cu;
        // 0x2baf80: 0x2407008a  addiu       $a3, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF84u;
        goto label_2baf84;
    }
    ctx->pc = 0x2BAF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF84u);
    ctx->pc = 0x2BAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF7Cu;
    // 0x2baf80: 0x2407008a  addiu       $a3, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BAF7Cu, 0x2BAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF84u;
label_2baf84:
    // 0x2baf84: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
label_2baf88:
    if (ctx->pc == 0x2BAF88u) {
        ctx->pc = 0x2BAF8Cu;
        goto label_2baf8c;
    }
    ctx->pc = 0x2BAF84u;
    {
        const bool branch_taken_0x2baf84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf84) {
            ctx->pc = 0x2BAF30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2baf30;
        }
    }
    ctx->pc = 0x2BAF8Cu;
label_2baf8c:
    // 0x2baf8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2baf90:
    if (ctx->pc == 0x2BAF90u) {
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x8e46008c  lw          $a2, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF94u;
        goto label_2baf94;
    }
    ctx->pc = 0x2BAF8Cu;
    {
        const bool branch_taken_0x2baf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF8Cu;
        // 0x2baf90: 0x8e46008c  lw          $a2, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf8c) {
            ctx->pc = 0x2BAFA4u;
            goto label_2bafa4;
        }
    }
    ctx->pc = 0x2BAF94u;
label_2baf94:
    // 0x2baf94: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2baf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2baf98:
    // 0x2baf98: 0x2636006c  addiu       $s6, $s1, 0x6C
    ctx->pc = 0x2baf98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2baf9c:
    // 0x2baf9c: 0x26550090  addiu       $s5, $s2, 0x90
    ctx->pc = 0x2baf9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2bafa0:
    // 0x2bafa0: 0x8e46008c  lw          $a2, 0x8C($s2)
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2bafa4:
    // 0x2bafa4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bafa8:
    // 0x2bafa8: 0xc049c48  jal         func_127120
label_2bafac:
    if (ctx->pc == 0x2BAFACu) {
        ctx->pc = 0x2BAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFA8u;
        // 0x2bafac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFB0u;
        goto label_2bafb0;
    }
    ctx->pc = 0x2BAFA8u;
    SET_GPR_U32(ctx, 31, 0x2BAFB0u);
    ctx->pc = 0x2BAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFA8u;
    // 0x2bafac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BAFA8u, 0x2BAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFB0u;
label_2bafb0:
    // 0x2bafb0: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2bafb4:
    // 0x2bafb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bafb8:
    // 0x2bafb8: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2bafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_2bafbc:
    // 0x2bafbc: 0xae5100b0  sw          $s1, 0xB0($s2)
    ctx->pc = 0x2bafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 17));
label_2bafc0:
    // 0x2bafc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bafc4:
    // 0x2bafc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bafc8:
    // 0x2bafc8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2bafcc:
    // 0x2bafcc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2bafccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bafd0:
    // 0x2bafd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2bafd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bafd4:
    // 0x2bafd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bafd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bafd8:
    // 0x2bafd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bafd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bafdc:
    // 0x2bafdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bafdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bafe0:
    // 0x2bafe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bafe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bafe4:
    // 0x2bafe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bafe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bafe8:
    // 0x2bafe8: 0x3e00008  jr          $ra
label_2bafec:
    if (ctx->pc == 0x2BAFECu) {
        ctx->pc = 0x2BAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFE8u;
        // 0x2bafec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAFF0u;
        goto label_2baff0;
    }
    ctx->pc = 0x2BAFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFE8u;
        // 0x2bafec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFF0u;
label_2baff0:
    // 0x2baff0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2baff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2baff4:
    // 0x2baff4: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2baff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
label_2baff8:
    // 0x2baff8: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x2baff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
label_2baffc:
    // 0x2baffc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2baffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb000:
    // 0x2bb000: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2bb000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_2bb004:
    // 0x2bb004: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bb004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb008:
    // 0x2bb008: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x2bb008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
label_2bb00c:
    // 0x2bb00c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb010:
    // 0x2bb010: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2bb010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_2bb014:
    // 0x2bb014: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bb014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bb018:
    // 0x2bb018: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x2bb018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
label_2bb01c:
    // 0x2bb01c: 0x2e220021  sltiu       $v0, $s1, 0x21
    ctx->pc = 0x2bb01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_2bb020:
    // 0x2bb020: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bb024:
    // 0x2bb024: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x2bb024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
label_2bb028:
    // 0x2bb028: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_2bb02c:
    if (ctx->pc == 0x2BB02Cu) {
        ctx->pc = 0x2BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB028u;
        // 0x2bb02c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB030u;
        goto label_2bb030;
    }
    ctx->pc = 0x2BB028u;
    {
        const bool branch_taken_0x2bb028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB028u;
        // 0x2bb02c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb028) {
            ctx->pc = 0x2BB28Cu;
            goto label_2bb28c;
        }
    }
    ctx->pc = 0x2BB030u;
label_2bb030:
    // 0x2bb030: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2bb034:
    // 0x2bb034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb038:
    // 0x2bb038: 0xc049c48  jal         func_127120
label_2bb03c:
    if (ctx->pc == 0x2BB03Cu) {
        ctx->pc = 0x2BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB038u;
        // 0x2bb03c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB040u;
        goto label_2bb040;
    }
    ctx->pc = 0x2BB038u;
    SET_GPR_U32(ctx, 31, 0x2BB040u);
    ctx->pc = 0x2BB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB038u;
    // 0x2bb03c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BB038u, 0x2BB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB040u;
label_2bb040:
    // 0x2bb040: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x2bb040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2bb044:
    // 0x2bb044: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2bb044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2bb048:
    // 0x2bb048: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2bb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_2bb04c:
    // 0x2bb04c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2bb050:
    if (ctx->pc == 0x2BB050u) {
        ctx->pc = 0x2BB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB04Cu;
        // 0x2bb050: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB054u;
        goto label_2bb054;
    }
    ctx->pc = 0x2BB04Cu;
    {
        const bool branch_taken_0x2bb04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB04Cu;
        // 0x2bb050: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb04c) {
            ctx->pc = 0x2BB094u;
            goto label_2bb094;
        }
    }
    ctx->pc = 0x2BB054u;
label_2bb054:
    // 0x2bb054: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2bb054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bb058:
    // 0x2bb058: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x2bb058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
label_2bb05c:
    // 0x2bb05c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bb060:
    // 0x2bb060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb064:
    // 0x2bb064: 0xc0a8b3a  jal         func_2A2CE8
label_2bb068:
    if (ctx->pc == 0x2BB068u) {
        ctx->pc = 0x2BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB064u;
        // 0x2bb068: 0x240700ae  addiu       $a3, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB06Cu;
        goto label_2bb06c;
    }
    ctx->pc = 0x2BB064u;
    SET_GPR_U32(ctx, 31, 0x2BB06Cu);
    ctx->pc = 0x2BB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB064u;
    // 0x2bb068: 0x240700ae  addiu       $a3, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB064u, 0x2BB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB06Cu;
label_2bb06c:
    // 0x2bb06c: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x2bb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2bb070:
    // 0x2bb070: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bb074:
    // 0x2bb074: 0xc0a6246  jal         func_298918
label_2bb078:
    if (ctx->pc == 0x2BB078u) {
        ctx->pc = 0x2BB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB074u;
        // 0x2bb078: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB07Cu;
        goto label_2bb07c;
    }
    ctx->pc = 0x2BB074u;
    SET_GPR_U32(ctx, 31, 0x2BB07Cu);
    ctx->pc = 0x2BB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB074u;
    // 0x2bb078: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x2BB074u, 0x2BB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB07Cu;
label_2bb07c:
    // 0x2bb07c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bb07cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb080:
    // 0x2bb080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb084:
    // 0x2bb084: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2bb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2bb088:
    // 0x2bb088: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bb08c:
    // 0x2bb08c: 0xc0a8b3a  jal         func_2A2CE8
label_2bb090:
    if (ctx->pc == 0x2BB090u) {
        ctx->pc = 0x2BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB08Cu;
        // 0x2bb090: 0x240700b0  addiu       $a3, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB094u;
        goto label_2bb094;
    }
    ctx->pc = 0x2BB08Cu;
    SET_GPR_U32(ctx, 31, 0x2BB094u);
    ctx->pc = 0x2BB090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB08Cu;
    // 0x2bb090: 0x240700b0  addiu       $a3, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB08Cu, 0x2BB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB094u;
label_2bb094:
    // 0x2bb094: 0x56800020  bnel        $s4, $zero, . + 4 + (0x20 << 2)
label_2bb098:
    if (ctx->pc == 0x2BB098u) {
        ctx->pc = 0x2BB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB094u;
        // 0x2bb098: 0x8e66008c  lw          $a2, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB09Cu;
        goto label_2bb09c;
    }
    ctx->pc = 0x2BB094u;
    {
        const bool branch_taken_0x2bb094 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb094) {
            ctx->pc = 0x2BB098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB094u;
            // 0x2bb098: 0x8e66008c  lw          $a2, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB118u;
            goto label_2bb118;
        }
    }
    ctx->pc = 0x2BB09Cu;
label_2bb09c:
    // 0x2bb09c: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x2bb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2bb0a0:
    // 0x2bb0a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb0a4:
    // 0x2bb0a4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2bb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_2bb0a8:
    // 0x2bb0a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2bb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_2bb0ac:
    // 0x2bb0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb0b0:
    // 0x2bb0b0: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x2bb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
label_2bb0b4:
    // 0x2bb0b4: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x2bb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2bb0b8:
    // 0x2bb0b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2bb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bb0bc:
    // 0x2bb0bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2bb0c0:
    if (ctx->pc == 0x2BB0C0u) {
        ctx->pc = 0x2BB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0BCu;
        // 0x2bb0c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0C4u;
        goto label_2bb0c4;
    }
    ctx->pc = 0x2BB0BCu;
    {
        const bool branch_taken_0x2bb0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0BCu;
        // 0x2bb0c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0bc) {
            ctx->pc = 0x2BB10Cu;
            goto label_2bb10c;
        }
    }
    ctx->pc = 0x2BB0C4u;
label_2bb0c4:
    // 0x2bb0c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bb0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0c8:
    // 0x2bb0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bb0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0cc:
    // 0x2bb0cc: 0x40f809  jalr        $v0
label_2bb0d0:
    if (ctx->pc == 0x2BB0D0u) {
        ctx->pc = 0x2BB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0CCu;
        // 0x2bb0d0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0D4u;
        goto label_2bb0d4;
    }
    ctx->pc = 0x2BB0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB0D4u);
        ctx->pc = 0x2BB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0CCu;
        // 0x2bb0d0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0CCu, 0x2BB0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB0D4u;
label_2bb0d4:
    // 0x2bb0d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bb0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0d8:
    // 0x2bb0d8: 0x1280006c  beqz        $s4, . + 4 + (0x6C << 2)
label_2bb0dc:
    if (ctx->pc == 0x2BB0DCu) {
        ctx->pc = 0x2BB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D8u;
        // 0x2bb0dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0E0u;
        goto label_2bb0e0;
    }
    ctx->pc = 0x2BB0D8u;
    {
        const bool branch_taken_0x2bb0d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D8u;
        // 0x2bb0dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0d8) {
            ctx->pc = 0x2BB28Cu;
            goto label_2bb28c;
        }
    }
    ctx->pc = 0x2BB0E0u;
label_2bb0e0:
    // 0x2bb0e0: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x2bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2bb0e4:
    // 0x2bb0e4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2bb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2bb0e8:
    // 0x2bb0e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2bb0ec:
    // 0x2bb0ec: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x2bb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
label_2bb0f0:
    // 0x2bb0f0: 0xc0aecac  jal         func_2BB2B0
label_2bb0f4:
    if (ctx->pc == 0x2BB0F4u) {
        ctx->pc = 0x2BB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0F0u;
        // 0x2bb0f4: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0F8u;
        goto label_2bb0f8;
    }
    ctx->pc = 0x2BB0F0u;
    SET_GPR_U32(ctx, 31, 0x2BB0F8u);
    ctx->pc = 0x2BB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0F0u;
    // 0x2bb0f4: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2B0u, 0x2BB0F0u, 0x2BB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0F8u;
label_2bb0f8:
    // 0x2bb0f8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2bb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2bb0fc:
    // 0x2bb0fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2bb100:
    if (ctx->pc == 0x2BB100u) {
        ctx->pc = 0x2BB104u;
        goto label_2bb104;
    }
    ctx->pc = 0x2BB0FCu;
    {
        const bool branch_taken_0x2bb0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0fc) {
            ctx->pc = 0x2BB10Cu;
            goto label_2bb10c;
        }
    }
    ctx->pc = 0x2BB104u;
label_2bb104:
    // 0x2bb104: 0xc0aed46  jal         func_2BB518
label_2bb108:
    if (ctx->pc == 0x2BB108u) {
        ctx->pc = 0x2BB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB104u;
        // 0x2bb108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB10Cu;
        goto label_2bb10c;
    }
    ctx->pc = 0x2BB104u;
    SET_GPR_U32(ctx, 31, 0x2BB10Cu);
    ctx->pc = 0x2BB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB104u;
    // 0x2bb108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BB104u, 0x2BB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB10Cu;
label_2bb10c:
    // 0x2bb10c: 0x12800060  beqz        $s4, . + 4 + (0x60 << 2)
label_2bb110:
    if (ctx->pc == 0x2BB110u) {
        ctx->pc = 0x2BB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB10Cu;
        // 0x2bb110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB114u;
        goto label_2bb114;
    }
    ctx->pc = 0x2BB10Cu;
    {
        const bool branch_taken_0x2bb10c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB10Cu;
        // 0x2bb110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb10c) {
            ctx->pc = 0x2BB290u;
            goto label_2bb290;
        }
    }
    ctx->pc = 0x2BB114u;
label_2bb114:
    // 0x2bb114: 0x8e66008c  lw          $a2, 0x8C($s3)
    ctx->pc = 0x2bb114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_2bb118:
    // 0x2bb118: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_2bb11c:
    if (ctx->pc == 0x2BB11Cu) {
        ctx->pc = 0x2BB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB118u;
        // 0x2bb11c: 0x8e8200ac  lw          $v0, 0xAC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB120u;
        goto label_2bb120;
    }
    ctx->pc = 0x2BB118u;
    {
        const bool branch_taken_0x2bb118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb118) {
            ctx->pc = 0x2BB11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB118u;
            // 0x2bb11c: 0x8e8200ac  lw          $v0, 0xAC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB144u;
            goto label_2bb144;
        }
    }
    ctx->pc = 0x2BB120u;
label_2bb120:
    // 0x2bb120: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x2bb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_2bb124:
    // 0x2bb124: 0x14c2005a  bne         $a2, $v0, . + 4 + (0x5A << 2)
label_2bb128:
    if (ctx->pc == 0x2BB128u) {
        ctx->pc = 0x2BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB124u;
        // 0x2bb128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB12Cu;
        goto label_2bb12c;
    }
    ctx->pc = 0x2BB124u;
    {
        const bool branch_taken_0x2bb124 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB124u;
        // 0x2bb128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb124) {
            ctx->pc = 0x2BB290u;
            goto label_2bb290;
        }
    }
    ctx->pc = 0x2BB12Cu;
label_2bb12c:
    // 0x2bb12c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2bb12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2bb130:
    // 0x2bb130: 0xc049c22  jal         func_127088
label_2bb134:
    if (ctx->pc == 0x2BB134u) {
        ctx->pc = 0x2BB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB130u;
        // 0x2bb134: 0x2685006c  addiu       $a1, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB138u;
        goto label_2bb138;
    }
    ctx->pc = 0x2BB130u;
    SET_GPR_U32(ctx, 31, 0x2BB138u);
    ctx->pc = 0x2BB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB130u;
    // 0x2bb134: 0x2685006c  addiu       $a1, $s4, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2BB130u, 0x2BB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB138u;
label_2bb138:
    // 0x2bb138: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_2bb13c:
    if (ctx->pc == 0x2BB13Cu) {
        ctx->pc = 0x2BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB138u;
        // 0x2bb13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB140u;
        goto label_2bb140;
    }
    ctx->pc = 0x2BB138u;
    {
        const bool branch_taken_0x2bb138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB138u;
        // 0x2bb13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb138) {
            ctx->pc = 0x2BB290u;
            goto label_2bb290;
        }
    }
    ctx->pc = 0x2BB140u;
label_2bb140:
    // 0x2bb140: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_2bb144:
    // 0x2bb144: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2bb148:
    if (ctx->pc == 0x2BB148u) {
        ctx->pc = 0x2BB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB144u;
        // 0x2bb148: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB14Cu;
        goto label_2bb14c;
    }
    ctx->pc = 0x2BB144u;
    {
        const bool branch_taken_0x2bb144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB144u;
        // 0x2bb148: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb144) {
            ctx->pc = 0x2BB1C4u;
            goto label_2bb1c4;
        }
    }
    ctx->pc = 0x2BB14Cu;
label_2bb14c:
    // 0x2bb14c: 0xde8300b0  ld          $v1, 0xB0($s4)
    ctx->pc = 0x2bb14cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 176)));
label_2bb150:
    // 0x2bb150: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2bb150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bb154:
    // 0x2bb154: 0x928500b3  lbu         $a1, 0xB3($s4)
    ctx->pc = 0x2bb154u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 179)));
label_2bb158:
    // 0x2bb158: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2bb158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
label_2bb15c:
    // 0x2bb15c: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x2bb15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
label_2bb160:
    // 0x2bb160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bb160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bb164:
    // 0x2bb164: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2bb164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2bb168:
    // 0x2bb168: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bb168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2bb16c:
    // 0x2bb16c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bb16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bb170:
    // 0x2bb170: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2bb170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2bb174:
    // 0x2bb174: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2bb174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2bb178:
    // 0x2bb178: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bb178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2bb17c:
    // 0x2bb17c: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x2bb17cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
label_2bb180:
    // 0x2bb180: 0xa3a200d1  sb          $v0, 0xD1($sp)
    ctx->pc = 0x2bb180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 209), (uint8_t)GPR_U32(ctx, 2));
label_2bb184:
    // 0x2bb184: 0xa3a400d2  sb          $a0, 0xD2($sp)
    ctx->pc = 0x2bb184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 210), (uint8_t)GPR_U32(ctx, 4));
label_2bb188:
    // 0x2bb188: 0xa3a300d3  sb          $v1, 0xD3($sp)
    ctx->pc = 0x2bb188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 211), (uint8_t)GPR_U32(ctx, 3));
label_2bb18c:
    // 0x2bb18c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2bb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb190:
    // 0x2bb190: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2bb194:
    // 0x2bb194: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_2bb198:
    if (ctx->pc == 0x2BB198u) {
        ctx->pc = 0x2BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB194u;
        // 0x2bb198: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB19Cu;
        goto label_2bb19c;
    }
    ctx->pc = 0x2BB194u;
    {
        const bool branch_taken_0x2bb194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB194u;
        // 0x2bb198: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb194) {
            ctx->pc = 0x2BB1A4u;
            goto label_2bb1a4;
        }
    }
    ctx->pc = 0x2BB19Cu;
label_2bb19c:
    // 0x2bb19c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bb1a0:
    if (ctx->pc == 0x2BB1A0u) {
        ctx->pc = 0x2BB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB19Cu;
        // 0x2bb1a0: 0x27a400d2  addiu       $a0, $sp, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1A4u;
        goto label_2bb1a4;
    }
    ctx->pc = 0x2BB19Cu;
    {
        const bool branch_taken_0x2bb19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB19Cu;
        // 0x2bb1a0: 0x27a400d2  addiu       $a0, $sp, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb19c) {
            ctx->pc = 0x2BB1A8u;
            goto label_2bb1a8;
        }
    }
    ctx->pc = 0x2BB1A4u;
label_2bb1a4:
    // 0x2bb1a4: 0x27a400d1  addiu       $a0, $sp, 0xD1
    ctx->pc = 0x2bb1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 209));
label_2bb1a8:
    // 0x2bb1a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2bb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2bb1ac:
    // 0x2bb1ac: 0x40f809  jalr        $v0
label_2bb1b0:
    if (ctx->pc == 0x2BB1B0u) {
        ctx->pc = 0x2BB1B4u;
        goto label_2bb1b4;
    }
    ctx->pc = 0x2BB1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB1B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB1ACu, 0x2BB1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB1B4u;
label_2bb1b4:
    // 0x2bb1b4: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x2bb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
label_2bb1b8:
    // 0x2bb1b8: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_2bb1bc:
    // 0x2bb1bc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2bb1c0:
    if (ctx->pc == 0x2BB1C0u) {
        ctx->pc = 0x2BB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1BCu;
        // 0x2bb1c0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1C4u;
        goto label_2bb1c4;
    }
    ctx->pc = 0x2BB1BCu;
    {
        const bool branch_taken_0x2bb1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1BCu;
        // 0x2bb1c0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1bc) {
            ctx->pc = 0x2BB28Cu;
            goto label_2bb28c;
        }
    }
    ctx->pc = 0x2BB1C4u;
label_2bb1c4:
    // 0x2bb1c4: 0x26840098  addiu       $a0, $s4, 0x98
    ctx->pc = 0x2bb1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
label_2bb1c8:
    // 0x2bb1c8: 0x24e7e848  addiu       $a3, $a3, -0x17B8
    ctx->pc = 0x2bb1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961224));
label_2bb1cc:
    // 0x2bb1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bb1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb1d0:
    // 0x2bb1d0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2bb1d4:
    // 0x2bb1d4: 0xc0a8b46  jal         func_2A2D18
label_2bb1d8:
    if (ctx->pc == 0x2BB1D8u) {
        ctx->pc = 0x2BB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D4u;
        // 0x2bb1d8: 0x240800f5  addiu       $t0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1DCu;
        goto label_2bb1dc;
    }
    ctx->pc = 0x2BB1D4u;
    SET_GPR_U32(ctx, 31, 0x2BB1DCu);
    ctx->pc = 0x2BB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1D4u;
    // 0x2bb1d8: 0x240800f5  addiu       $t0, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2BB1D4u, 0x2BB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1DCu;
label_2bb1dc:
    // 0x2bb1dc: 0xc0a8df2  jal         func_2A37C8
label_2bb1e0:
    if (ctx->pc == 0x2BB1E0u) {
        ctx->pc = 0x2BB1E4u;
        goto label_2bb1e4;
    }
    ctx->pc = 0x2BB1DCu;
    SET_GPR_U32(ctx, 31, 0x2BB1E4u);
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2BB1DCu, 0x2BB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1E4u;
label_2bb1e4:
    // 0x2bb1e4: 0xc0a8df2  jal         func_2A37C8
label_2bb1e8:
    if (ctx->pc == 0x2BB1E8u) {
        ctx->pc = 0x2BB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E4u;
        // 0x2bb1e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1ECu;
        goto label_2bb1ec;
    }
    ctx->pc = 0x2BB1E4u;
    SET_GPR_U32(ctx, 31, 0x2BB1ECu);
    ctx->pc = 0x2BB1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1E4u;
    // 0x2bb1e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2BB1E4u, 0x2BB1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1ECu;
label_2bb1ec:
    // 0x2bb1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1f0:
    // 0x2bb1f0: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_2bb1f4:
    // 0x2bb1f4: 0x8e8600a0  lw          $a2, 0xA0($s4)
    ctx->pc = 0x2bb1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_2bb1f8:
    // 0x2bb1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1fc:
    // 0x2bb1fc: 0xc0a8e0c  jal         func_2A3830
label_2bb200:
    if (ctx->pc == 0x2BB200u) {
        ctx->pc = 0x2BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1FCu;
        // 0x2bb200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB204u;
        goto label_2bb204;
    }
    ctx->pc = 0x2BB1FCu;
    SET_GPR_U32(ctx, 31, 0x2BB204u);
    ctx->pc = 0x2BB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1FCu;
    // 0x2bb200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3830u, 0x2BB1FCu, 0x2BB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB204u;
label_2bb204:
    // 0x2bb204: 0xc0a8a3e  jal         func_2A28F8
label_2bb208:
    if (ctx->pc == 0x2BB208u) {
        ctx->pc = 0x2BB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB204u;
        // 0x2bb208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB20Cu;
        goto label_2bb20c;
    }
    ctx->pc = 0x2BB204u;
    SET_GPR_U32(ctx, 31, 0x2BB20Cu);
    ctx->pc = 0x2BB208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB204u;
    // 0x2bb208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28F8u, 0x2BB204u, 0x2BB20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB20Cu;
label_2bb20c:
    // 0x2bb20c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb210:
    // 0x2bb210: 0xc0a8e4e  jal         func_2A3938
label_2bb214:
    if (ctx->pc == 0x2BB214u) {
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB218u;
        goto label_2bb218;
    }
    ctx->pc = 0x2BB210u;
    SET_GPR_U32(ctx, 31, 0x2BB218u);
    ctx->pc = 0x2BB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB210u;
    // 0x2bb214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3938u, 0x2BB210u, 0x2BB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB218u;
label_2bb218:
    // 0x2bb218: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bb218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb21c:
    // 0x2bb21c: 0xc0a8e0a  jal         func_2A3828
label_2bb220:
    if (ctx->pc == 0x2BB220u) {
        ctx->pc = 0x2BB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB21Cu;
        // 0x2bb220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB224u;
        goto label_2bb224;
    }
    ctx->pc = 0x2BB21Cu;
    SET_GPR_U32(ctx, 31, 0x2BB224u);
    ctx->pc = 0x2BB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB21Cu;
    // 0x2bb220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2BB21Cu, 0x2BB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB224u;
label_2bb224:
    // 0x2bb224: 0xc0a8e0a  jal         func_2A3828
label_2bb228:
    if (ctx->pc == 0x2BB228u) {
        ctx->pc = 0x2BB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB224u;
        // 0x2bb228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB22Cu;
        goto label_2bb22c;
    }
    ctx->pc = 0x2BB224u;
    SET_GPR_U32(ctx, 31, 0x2BB22Cu);
    ctx->pc = 0x2BB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB224u;
    // 0x2bb228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2BB224u, 0x2BB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB22Cu;
label_2bb22c:
    // 0x2bb22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bb230:
    // 0x2bb230: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_2bb234:
    if (ctx->pc == 0x2BB234u) {
        ctx->pc = 0x2BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB230u;
        // 0x2bb234: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB238u;
        goto label_2bb238;
    }
    ctx->pc = 0x2BB230u;
    {
        const bool branch_taken_0x2bb230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB230u;
        // 0x2bb234: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb230) {
            ctx->pc = 0x2BB260u;
            goto label_2bb260;
        }
    }
    ctx->pc = 0x2BB238u;
label_2bb238:
    // 0x2bb238: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bb238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb23c:
    // 0x2bb23c: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2bb240:
    // 0x2bb240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb244:
    // 0x2bb244: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x2bb244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_2bb248:
    // 0x2bb248: 0xc0aecfe  jal         func_2BB3F8
label_2bb24c:
    if (ctx->pc == 0x2BB24Cu) {
        ctx->pc = 0x2BB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB248u;
        // 0x2bb24c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB250u;
        goto label_2bb250;
    }
    ctx->pc = 0x2BB248u;
    SET_GPR_U32(ctx, 31, 0x2BB250u);
    ctx->pc = 0x2BB24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB248u;
    // 0x2bb24c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB3F8u, 0x2BB248u, 0x2BB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB250u;
label_2bb250:
    // 0x2bb250: 0xc0aed46  jal         func_2BB518
label_2bb254:
    if (ctx->pc == 0x2BB254u) {
        ctx->pc = 0x2BB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB250u;
        // 0x2bb254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB258u;
        goto label_2bb258;
    }
    ctx->pc = 0x2BB250u;
    SET_GPR_U32(ctx, 31, 0x2BB258u);
    ctx->pc = 0x2BB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB250u;
    // 0x2bb254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BB250u, 0x2BB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB258u;
label_2bb258:
    // 0x2bb258: 0x1000000d  b           . + 4 + (0xD << 2)
label_2bb25c:
    if (ctx->pc == 0x2BB25Cu) {
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB260u;
        goto label_2bb260;
    }
    ctx->pc = 0x2BB258u;
    {
        const bool branch_taken_0x2bb258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb258) {
            ctx->pc = 0x2BB290u;
            goto label_2bb290;
        }
    }
    ctx->pc = 0x2BB260u;
label_2bb260:
    // 0x2bb260: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2bb260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2bb264:
    // 0x2bb264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb268:
    // 0x2bb268: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x2bb268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_2bb26c:
    // 0x2bb26c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x2bb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_2bb270:
    // 0x2bb270: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2bb274:
    if (ctx->pc == 0x2BB274u) {
        ctx->pc = 0x2BB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB270u;
        // 0x2bb274: 0xae7400b0  sw          $s4, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB278u;
        goto label_2bb278;
    }
    ctx->pc = 0x2BB270u;
    {
        const bool branch_taken_0x2bb270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb270) {
            ctx->pc = 0x2BB274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB270u;
            // 0x2bb274: 0xae7400b0  sw          $s4, 0xB0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB284u;
            goto label_2bb284;
        }
    }
    ctx->pc = 0x2BB278u;
label_2bb278:
    // 0x2bb278: 0xc0aed46  jal         func_2BB518
label_2bb27c:
    if (ctx->pc == 0x2BB27Cu) {
        ctx->pc = 0x2BB280u;
        goto label_2bb280;
    }
    ctx->pc = 0x2BB278u;
    SET_GPR_U32(ctx, 31, 0x2BB280u);
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BB278u, 0x2BB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB280u;
label_2bb280:
    // 0x2bb280: 0xae7400b0  sw          $s4, 0xB0($s3)
    ctx->pc = 0x2bb280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 20));
label_2bb284:
    // 0x2bb284: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bb288:
    if (ctx->pc == 0x2BB288u) {
        ctx->pc = 0x2BB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB284u;
        // 0x2bb288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB28Cu;
        goto label_2bb28c;
    }
    ctx->pc = 0x2BB284u;
    {
        const bool branch_taken_0x2bb284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB284u;
        // 0x2bb288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb284) {
            ctx->pc = 0x2BB290u;
            goto label_2bb290;
        }
    }
    ctx->pc = 0x2BB28Cu;
label_2bb28c:
    // 0x2bb28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb290:
    // 0x2bb290: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2bb290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2bb294:
    // 0x2bb294: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2bb294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2bb298:
    // 0x2bb298: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x2bb298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2bb29c:
    // 0x2bb29c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2bb29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2bb2a0:
    // 0x2bb2a0: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x2bb2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2bb2a4:
    // 0x2bb2a4: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2bb2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2bb2a8:
    // 0x2bb2a8: 0x3e00008  jr          $ra
label_2bb2ac:
    if (ctx->pc == 0x2BB2ACu) {
        ctx->pc = 0x2BB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A8u;
        // 0x2bb2ac: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2B0u;
        goto label_fallthrough_0x2bb2a8;
    }
    ctx->pc = 0x2BB2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A8u;
        // 0x2bb2ac: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bb2a8:
    ctx->pc = 0x2BB2B0u;
}
