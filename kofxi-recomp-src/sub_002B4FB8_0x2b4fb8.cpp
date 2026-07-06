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

// Function: sub_002B4FB8
// Address: 0x2b4fb8 - 0x2b5410
void sub_002B4FB8_0x2b4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4FB8_0x2b4fb8");
#endif

    switch (ctx->pc) {
        case 0x2b4fb8u: goto label_2b4fb8;
        case 0x2b4fbcu: goto label_2b4fbc;
        case 0x2b4fc0u: goto label_2b4fc0;
        case 0x2b4fc4u: goto label_2b4fc4;
        case 0x2b4fc8u: goto label_2b4fc8;
        case 0x2b4fccu: goto label_2b4fcc;
        case 0x2b4fd0u: goto label_2b4fd0;
        case 0x2b4fd4u: goto label_2b4fd4;
        case 0x2b4fd8u: goto label_2b4fd8;
        case 0x2b4fdcu: goto label_2b4fdc;
        case 0x2b4fe0u: goto label_2b4fe0;
        case 0x2b4fe4u: goto label_2b4fe4;
        case 0x2b4fe8u: goto label_2b4fe8;
        case 0x2b4fecu: goto label_2b4fec;
        case 0x2b4ff0u: goto label_2b4ff0;
        case 0x2b4ff4u: goto label_2b4ff4;
        case 0x2b4ff8u: goto label_2b4ff8;
        case 0x2b4ffcu: goto label_2b4ffc;
        case 0x2b5000u: goto label_2b5000;
        case 0x2b5004u: goto label_2b5004;
        case 0x2b5008u: goto label_2b5008;
        case 0x2b500cu: goto label_2b500c;
        case 0x2b5010u: goto label_2b5010;
        case 0x2b5014u: goto label_2b5014;
        case 0x2b5018u: goto label_2b5018;
        case 0x2b501cu: goto label_2b501c;
        case 0x2b5020u: goto label_2b5020;
        case 0x2b5024u: goto label_2b5024;
        case 0x2b5028u: goto label_2b5028;
        case 0x2b502cu: goto label_2b502c;
        case 0x2b5030u: goto label_2b5030;
        case 0x2b5034u: goto label_2b5034;
        case 0x2b5038u: goto label_2b5038;
        case 0x2b503cu: goto label_2b503c;
        case 0x2b5040u: goto label_2b5040;
        case 0x2b5044u: goto label_2b5044;
        case 0x2b5048u: goto label_2b5048;
        case 0x2b504cu: goto label_2b504c;
        case 0x2b5050u: goto label_2b5050;
        case 0x2b5054u: goto label_2b5054;
        case 0x2b5058u: goto label_2b5058;
        case 0x2b505cu: goto label_2b505c;
        case 0x2b5060u: goto label_2b5060;
        case 0x2b5064u: goto label_2b5064;
        case 0x2b5068u: goto label_2b5068;
        case 0x2b506cu: goto label_2b506c;
        case 0x2b5070u: goto label_2b5070;
        case 0x2b5074u: goto label_2b5074;
        case 0x2b5078u: goto label_2b5078;
        case 0x2b507cu: goto label_2b507c;
        case 0x2b5080u: goto label_2b5080;
        case 0x2b5084u: goto label_2b5084;
        case 0x2b5088u: goto label_2b5088;
        case 0x2b508cu: goto label_2b508c;
        case 0x2b5090u: goto label_2b5090;
        case 0x2b5094u: goto label_2b5094;
        case 0x2b5098u: goto label_2b5098;
        case 0x2b509cu: goto label_2b509c;
        case 0x2b50a0u: goto label_2b50a0;
        case 0x2b50a4u: goto label_2b50a4;
        case 0x2b50a8u: goto label_2b50a8;
        case 0x2b50acu: goto label_2b50ac;
        case 0x2b50b0u: goto label_2b50b0;
        case 0x2b50b4u: goto label_2b50b4;
        case 0x2b50b8u: goto label_2b50b8;
        case 0x2b50bcu: goto label_2b50bc;
        case 0x2b50c0u: goto label_2b50c0;
        case 0x2b50c4u: goto label_2b50c4;
        case 0x2b50c8u: goto label_2b50c8;
        case 0x2b50ccu: goto label_2b50cc;
        case 0x2b50d0u: goto label_2b50d0;
        case 0x2b50d4u: goto label_2b50d4;
        case 0x2b50d8u: goto label_2b50d8;
        case 0x2b50dcu: goto label_2b50dc;
        case 0x2b50e0u: goto label_2b50e0;
        case 0x2b50e4u: goto label_2b50e4;
        case 0x2b50e8u: goto label_2b50e8;
        case 0x2b50ecu: goto label_2b50ec;
        case 0x2b50f0u: goto label_2b50f0;
        case 0x2b50f4u: goto label_2b50f4;
        case 0x2b50f8u: goto label_2b50f8;
        case 0x2b50fcu: goto label_2b50fc;
        case 0x2b5100u: goto label_2b5100;
        case 0x2b5104u: goto label_2b5104;
        case 0x2b5108u: goto label_2b5108;
        case 0x2b510cu: goto label_2b510c;
        case 0x2b5110u: goto label_2b5110;
        case 0x2b5114u: goto label_2b5114;
        case 0x2b5118u: goto label_2b5118;
        case 0x2b511cu: goto label_2b511c;
        case 0x2b5120u: goto label_2b5120;
        case 0x2b5124u: goto label_2b5124;
        case 0x2b5128u: goto label_2b5128;
        case 0x2b512cu: goto label_2b512c;
        case 0x2b5130u: goto label_2b5130;
        case 0x2b5134u: goto label_2b5134;
        case 0x2b5138u: goto label_2b5138;
        case 0x2b513cu: goto label_2b513c;
        case 0x2b5140u: goto label_2b5140;
        case 0x2b5144u: goto label_2b5144;
        case 0x2b5148u: goto label_2b5148;
        case 0x2b514cu: goto label_2b514c;
        case 0x2b5150u: goto label_2b5150;
        case 0x2b5154u: goto label_2b5154;
        case 0x2b5158u: goto label_2b5158;
        case 0x2b515cu: goto label_2b515c;
        case 0x2b5160u: goto label_2b5160;
        case 0x2b5164u: goto label_2b5164;
        case 0x2b5168u: goto label_2b5168;
        case 0x2b516cu: goto label_2b516c;
        case 0x2b5170u: goto label_2b5170;
        case 0x2b5174u: goto label_2b5174;
        case 0x2b5178u: goto label_2b5178;
        case 0x2b517cu: goto label_2b517c;
        case 0x2b5180u: goto label_2b5180;
        case 0x2b5184u: goto label_2b5184;
        case 0x2b5188u: goto label_2b5188;
        case 0x2b518cu: goto label_2b518c;
        case 0x2b5190u: goto label_2b5190;
        case 0x2b5194u: goto label_2b5194;
        case 0x2b5198u: goto label_2b5198;
        case 0x2b519cu: goto label_2b519c;
        case 0x2b51a0u: goto label_2b51a0;
        case 0x2b51a4u: goto label_2b51a4;
        case 0x2b51a8u: goto label_2b51a8;
        case 0x2b51acu: goto label_2b51ac;
        case 0x2b51b0u: goto label_2b51b0;
        case 0x2b51b4u: goto label_2b51b4;
        case 0x2b51b8u: goto label_2b51b8;
        case 0x2b51bcu: goto label_2b51bc;
        case 0x2b51c0u: goto label_2b51c0;
        case 0x2b51c4u: goto label_2b51c4;
        case 0x2b51c8u: goto label_2b51c8;
        case 0x2b51ccu: goto label_2b51cc;
        case 0x2b51d0u: goto label_2b51d0;
        case 0x2b51d4u: goto label_2b51d4;
        case 0x2b51d8u: goto label_2b51d8;
        case 0x2b51dcu: goto label_2b51dc;
        case 0x2b51e0u: goto label_2b51e0;
        case 0x2b51e4u: goto label_2b51e4;
        case 0x2b51e8u: goto label_2b51e8;
        case 0x2b51ecu: goto label_2b51ec;
        case 0x2b51f0u: goto label_2b51f0;
        case 0x2b51f4u: goto label_2b51f4;
        case 0x2b51f8u: goto label_2b51f8;
        case 0x2b51fcu: goto label_2b51fc;
        case 0x2b5200u: goto label_2b5200;
        case 0x2b5204u: goto label_2b5204;
        case 0x2b5208u: goto label_2b5208;
        case 0x2b520cu: goto label_2b520c;
        case 0x2b5210u: goto label_2b5210;
        case 0x2b5214u: goto label_2b5214;
        case 0x2b5218u: goto label_2b5218;
        case 0x2b521cu: goto label_2b521c;
        case 0x2b5220u: goto label_2b5220;
        case 0x2b5224u: goto label_2b5224;
        case 0x2b5228u: goto label_2b5228;
        case 0x2b522cu: goto label_2b522c;
        case 0x2b5230u: goto label_2b5230;
        case 0x2b5234u: goto label_2b5234;
        case 0x2b5238u: goto label_2b5238;
        case 0x2b523cu: goto label_2b523c;
        case 0x2b5240u: goto label_2b5240;
        case 0x2b5244u: goto label_2b5244;
        case 0x2b5248u: goto label_2b5248;
        case 0x2b524cu: goto label_2b524c;
        case 0x2b5250u: goto label_2b5250;
        case 0x2b5254u: goto label_2b5254;
        case 0x2b5258u: goto label_2b5258;
        case 0x2b525cu: goto label_2b525c;
        case 0x2b5260u: goto label_2b5260;
        case 0x2b5264u: goto label_2b5264;
        case 0x2b5268u: goto label_2b5268;
        case 0x2b526cu: goto label_2b526c;
        case 0x2b5270u: goto label_2b5270;
        case 0x2b5274u: goto label_2b5274;
        case 0x2b5278u: goto label_2b5278;
        case 0x2b527cu: goto label_2b527c;
        case 0x2b5280u: goto label_2b5280;
        case 0x2b5284u: goto label_2b5284;
        case 0x2b5288u: goto label_2b5288;
        case 0x2b528cu: goto label_2b528c;
        case 0x2b5290u: goto label_2b5290;
        case 0x2b5294u: goto label_2b5294;
        case 0x2b5298u: goto label_2b5298;
        case 0x2b529cu: goto label_2b529c;
        case 0x2b52a0u: goto label_2b52a0;
        case 0x2b52a4u: goto label_2b52a4;
        case 0x2b52a8u: goto label_2b52a8;
        case 0x2b52acu: goto label_2b52ac;
        case 0x2b52b0u: goto label_2b52b0;
        case 0x2b52b4u: goto label_2b52b4;
        case 0x2b52b8u: goto label_2b52b8;
        case 0x2b52bcu: goto label_2b52bc;
        case 0x2b52c0u: goto label_2b52c0;
        case 0x2b52c4u: goto label_2b52c4;
        case 0x2b52c8u: goto label_2b52c8;
        case 0x2b52ccu: goto label_2b52cc;
        case 0x2b52d0u: goto label_2b52d0;
        case 0x2b52d4u: goto label_2b52d4;
        case 0x2b52d8u: goto label_2b52d8;
        case 0x2b52dcu: goto label_2b52dc;
        case 0x2b52e0u: goto label_2b52e0;
        case 0x2b52e4u: goto label_2b52e4;
        case 0x2b52e8u: goto label_2b52e8;
        case 0x2b52ecu: goto label_2b52ec;
        case 0x2b52f0u: goto label_2b52f0;
        case 0x2b52f4u: goto label_2b52f4;
        case 0x2b52f8u: goto label_2b52f8;
        case 0x2b52fcu: goto label_2b52fc;
        case 0x2b5300u: goto label_2b5300;
        case 0x2b5304u: goto label_2b5304;
        case 0x2b5308u: goto label_2b5308;
        case 0x2b530cu: goto label_2b530c;
        case 0x2b5310u: goto label_2b5310;
        case 0x2b5314u: goto label_2b5314;
        case 0x2b5318u: goto label_2b5318;
        case 0x2b531cu: goto label_2b531c;
        case 0x2b5320u: goto label_2b5320;
        case 0x2b5324u: goto label_2b5324;
        case 0x2b5328u: goto label_2b5328;
        case 0x2b532cu: goto label_2b532c;
        case 0x2b5330u: goto label_2b5330;
        case 0x2b5334u: goto label_2b5334;
        case 0x2b5338u: goto label_2b5338;
        case 0x2b533cu: goto label_2b533c;
        case 0x2b5340u: goto label_2b5340;
        case 0x2b5344u: goto label_2b5344;
        case 0x2b5348u: goto label_2b5348;
        case 0x2b534cu: goto label_2b534c;
        case 0x2b5350u: goto label_2b5350;
        case 0x2b5354u: goto label_2b5354;
        case 0x2b5358u: goto label_2b5358;
        case 0x2b535cu: goto label_2b535c;
        case 0x2b5360u: goto label_2b5360;
        case 0x2b5364u: goto label_2b5364;
        case 0x2b5368u: goto label_2b5368;
        case 0x2b536cu: goto label_2b536c;
        case 0x2b5370u: goto label_2b5370;
        case 0x2b5374u: goto label_2b5374;
        case 0x2b5378u: goto label_2b5378;
        case 0x2b537cu: goto label_2b537c;
        case 0x2b5380u: goto label_2b5380;
        case 0x2b5384u: goto label_2b5384;
        case 0x2b5388u: goto label_2b5388;
        case 0x2b538cu: goto label_2b538c;
        case 0x2b5390u: goto label_2b5390;
        case 0x2b5394u: goto label_2b5394;
        case 0x2b5398u: goto label_2b5398;
        case 0x2b539cu: goto label_2b539c;
        case 0x2b53a0u: goto label_2b53a0;
        case 0x2b53a4u: goto label_2b53a4;
        case 0x2b53a8u: goto label_2b53a8;
        case 0x2b53acu: goto label_2b53ac;
        case 0x2b53b0u: goto label_2b53b0;
        case 0x2b53b4u: goto label_2b53b4;
        case 0x2b53b8u: goto label_2b53b8;
        case 0x2b53bcu: goto label_2b53bc;
        case 0x2b53c0u: goto label_2b53c0;
        case 0x2b53c4u: goto label_2b53c4;
        case 0x2b53c8u: goto label_2b53c8;
        case 0x2b53ccu: goto label_2b53cc;
        case 0x2b53d0u: goto label_2b53d0;
        case 0x2b53d4u: goto label_2b53d4;
        case 0x2b53d8u: goto label_2b53d8;
        case 0x2b53dcu: goto label_2b53dc;
        case 0x2b53e0u: goto label_2b53e0;
        case 0x2b53e4u: goto label_2b53e4;
        case 0x2b53e8u: goto label_2b53e8;
        case 0x2b53ecu: goto label_2b53ec;
        case 0x2b53f0u: goto label_2b53f0;
        case 0x2b53f4u: goto label_2b53f4;
        case 0x2b53f8u: goto label_2b53f8;
        case 0x2b53fcu: goto label_2b53fc;
        case 0x2b5400u: goto label_2b5400;
        case 0x2b5404u: goto label_2b5404;
        case 0x2b5408u: goto label_2b5408;
        case 0x2b540cu: goto label_2b540c;
        default: break;
    }

    ctx->pc = 0x2b4fb8u;

label_2b4fb8:
    // 0x2b4fb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b4fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2b4fbc:
    // 0x2b4fbc: 0x24021180  addiu       $v0, $zero, 0x1180
    ctx->pc = 0x2b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
label_2b4fc0:
    // 0x2b4fc0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2b4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_2b4fc4:
    // 0x2b4fc4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2b4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2b4fc8:
    // 0x2b4fc8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b4fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2b4fcc:
    // 0x2b4fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4fd0:
    // 0x2b4fd0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2b4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_2b4fd4:
    // 0x2b4fd4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2b4fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2b4fd8:
    // 0x2b4fd8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2b4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2b4fdc:
    // 0x2b4fdc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2b4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2b4fe0:
    // 0x2b4fe0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2b4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2b4fe4:
    // 0x2b4fe4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2b4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b4fe8:
    // 0x2b4fe8: 0x146200f5  bne         $v1, $v0, . + 4 + (0xF5 << 2)
label_2b4fec:
    if (ctx->pc == 0x2B4FECu) {
        ctx->pc = 0x2B4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FE8u;
        // 0x2b4fec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4FF0u;
        goto label_2b4ff0;
    }
    ctx->pc = 0x2B4FE8u;
    {
        const bool branch_taken_0x2b4fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FE8u;
        // 0x2b4fec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fe8) {
            ctx->pc = 0x2B53C0u;
            goto label_2b53c0;
        }
    }
    ctx->pc = 0x2B4FF0u;
label_2b4ff0:
    // 0x2b4ff0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b4ff4:
    // 0x2b4ff4: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2b4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2b4ff8:
    // 0x2b4ff8: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x2b4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_2b4ffc:
    // 0x2b4ffc: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x2b4ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b5000:
    // 0x2b5000: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x2b5000u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2b5004:
    // 0x2b5004: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x2b5004u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b5008:
    // 0x2b5008: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x2b5008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2b500c:
    // 0x2b500c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2b500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2b5010:
    // 0x2b5010: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b5010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b5014:
    // 0x2b5014: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b5014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b5018:
    // 0x2b5018: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_2b501c:
    if (ctx->pc == 0x2B501Cu) {
        ctx->pc = 0x2B501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5018u;
        // 0x2b501c: 0xdc660018  ld          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5020u;
        goto label_2b5020;
    }
    ctx->pc = 0x2B5018u;
    {
        const bool branch_taken_0x2b5018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5018u;
        // 0x2b501c: 0xdc660018  ld          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5018) {
            ctx->pc = 0x2B51E0u;
            goto label_2b51e0;
        }
    }
    ctx->pc = 0x2B5020u;
label_2b5020:
    // 0x2b5020: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b5020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2b5024:
    // 0x2b5024: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2b5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2b5028:
    // 0x2b5028: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2b502c:
    if (ctx->pc == 0x2B502Cu) {
        ctx->pc = 0x2B502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5028u;
        // 0x2b502c: 0x30c2ff00  andi        $v0, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5030u;
        goto label_2b5030;
    }
    ctx->pc = 0x2B5028u;
    {
        const bool branch_taken_0x2b5028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5028u;
        // 0x2b502c: 0x30c2ff00  andi        $v0, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5028) {
            ctx->pc = 0x2B5078u;
            goto label_2b5078;
        }
    }
    ctx->pc = 0x2B5030u;
label_2b5030:
    // 0x2b5030: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2b5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2b5034:
    // 0x2b5034: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b5038:
    // 0x2b5038: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b5038u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b503c:
    // 0x2b503c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2b5040:
    if (ctx->pc == 0x2B5040u) {
        ctx->pc = 0x2B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B503Cu;
        // 0x2b5040: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5044u;
        goto label_2b5044;
    }
    ctx->pc = 0x2B503Cu;
    {
        const bool branch_taken_0x2b503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B503Cu;
        // 0x2b5040: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b503c) {
            ctx->pc = 0x2B5054u;
            goto label_2b5054;
        }
    }
    ctx->pc = 0x2B5044u;
label_2b5044:
    // 0x2b5044: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b5048:
    // 0x2b5048: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x2b5048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2b504c:
    // 0x2b504c: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
label_2b5050:
    if (ctx->pc == 0x2B5050u) {
        ctx->pc = 0x2B5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B504Cu;
        // 0x2b5050: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5054u;
        goto label_2b5054;
    }
    ctx->pc = 0x2B504Cu;
    {
        const bool branch_taken_0x2b504c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B504Cu;
        // 0x2b5050: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b504c) {
            ctx->pc = 0x2B50BCu;
            goto label_2b50bc;
        }
    }
    ctx->pc = 0x2B5054u;
label_2b5054:
    // 0x2b5054: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b5054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2b5058:
    // 0x2b5058: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2b5058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2b505c:
    // 0x2b505c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b5060:
    if (ctx->pc == 0x2B5060u) {
        ctx->pc = 0x2B5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B505Cu;
        // 0x2b5060: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5064u;
        goto label_2b5064;
    }
    ctx->pc = 0x2B505Cu;
    {
        const bool branch_taken_0x2b505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B505Cu;
        // 0x2b5060: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b505c) {
            ctx->pc = 0x2B5080u;
            goto label_2b5080;
        }
    }
    ctx->pc = 0x2B5064u;
label_2b5064:
    // 0x2b5064: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b5068:
    // 0x2b5068: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_2b506c:
    if (ctx->pc == 0x2B506Cu) {
        ctx->pc = 0x2B506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5068u;
        // 0x2b506c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5070u;
        goto label_2b5070;
    }
    ctx->pc = 0x2B5068u;
    {
        const bool branch_taken_0x2b5068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5068u;
        // 0x2b506c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5068) {
            ctx->pc = 0x2B5090u;
            goto label_2b5090;
        }
    }
    ctx->pc = 0x2B5070u;
label_2b5070:
    // 0x2b5070: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b5074:
    if (ctx->pc == 0x2B5074u) {
        ctx->pc = 0x2B5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5070u;
        // 0x2b5074: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5078u;
        goto label_2b5078;
    }
    ctx->pc = 0x2B5070u;
    {
        const bool branch_taken_0x2b5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5070u;
        // 0x2b5074: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5070) {
            ctx->pc = 0x2B50C0u;
            goto label_2b50c0;
        }
    }
    ctx->pc = 0x2B5078u;
label_2b5078:
    // 0x2b5078: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b5078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b507c:
    // 0x2b507c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b5080:
    // 0x2b5080: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x2b5080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2b5084:
    // 0x2b5084: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_2b5088:
    if (ctx->pc == 0x2B5088u) {
        ctx->pc = 0x2B5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5084u;
        // 0x2b5088: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B508Cu;
        goto label_2b508c;
    }
    ctx->pc = 0x2B5084u;
    {
        const bool branch_taken_0x2b5084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5084u;
        // 0x2b5088: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5084) {
            ctx->pc = 0x2B50BCu;
            goto label_2b50bc;
        }
    }
    ctx->pc = 0x2B508Cu;
label_2b508c:
    // 0x2b508c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2b508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2b5090:
    // 0x2b5090: 0xc0a39c0  jal         func_28E700
label_2b5094:
    if (ctx->pc == 0x2B5094u) {
        ctx->pc = 0x2B5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5090u;
        // 0x2b5094: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5098u;
        goto label_2b5098;
    }
    ctx->pc = 0x2B5090u;
    SET_GPR_U32(ctx, 31, 0x2B5098u);
    ctx->pc = 0x2B5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5090u;
    // 0x2b5094: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E700u, 0x2B5090u, 0x2B5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5098u;
label_2b5098:
    // 0x2b5098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b509c:
    // 0x2b509c: 0x108000b1  beqz        $a0, . + 4 + (0xB1 << 2)
label_2b50a0:
    if (ctx->pc == 0x2B50A0u) {
        ctx->pc = 0x2B50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B509Cu;
        // 0x2b50a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50A4u;
        goto label_2b50a4;
    }
    ctx->pc = 0x2B509Cu;
    {
        const bool branch_taken_0x2b509c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B509Cu;
        // 0x2b50a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b509c) {
            ctx->pc = 0x2B5364u;
            goto label_2b5364;
        }
    }
    ctx->pc = 0x2B50A4u;
label_2b50a4:
    // 0x2b50a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b50a8:
    // 0x2b50a8: 0x546200af  bnel        $v1, $v0, . + 4 + (0xAF << 2)
label_2b50ac:
    if (ctx->pc == 0x2B50ACu) {
        ctx->pc = 0x2B50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50A8u;
        // 0x2b50ac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50B0u;
        goto label_2b50b0;
    }
    ctx->pc = 0x2B50A8u;
    {
        const bool branch_taken_0x2b50a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b50a8) {
            ctx->pc = 0x2B50ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B50A8u;
            // 0x2b50ac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5368u;
            goto label_2b5368;
        }
    }
    ctx->pc = 0x2B50B0u;
label_2b50b0:
    // 0x2b50b0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2b50b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2b50b4:
    // 0x2b50b4: 0x10e000ab  beqz        $a3, . + 4 + (0xAB << 2)
label_2b50b8:
    if (ctx->pc == 0x2B50B8u) {
        ctx->pc = 0x2B50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50B4u;
        // 0x2b50b8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50BCu;
        goto label_2b50bc;
    }
    ctx->pc = 0x2B50B4u;
    {
        const bool branch_taken_0x2b50b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50B4u;
        // 0x2b50b8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50b4) {
            ctx->pc = 0x2B5364u;
            goto label_2b5364;
        }
    }
    ctx->pc = 0x2B50BCu;
label_2b50bc:
    // 0x2b50bc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2b50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2b50c0:
    // 0x2b50c0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2b50c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b50c4:
    // 0x2b50c4: 0x9223010c  lbu         $v1, 0x10C($s1)
    ctx->pc = 0x2b50c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_2b50c8:
    // 0x2b50c8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b50c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2b50cc:
    // 0x2b50cc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2b50ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b50d0:
    // 0x2b50d0: 0xc0a8d8a  jal         func_2A3628
label_2b50d4:
    if (ctx->pc == 0x2B50D4u) {
        ctx->pc = 0x2B50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50D0u;
        // 0x2b50d4: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50D8u;
        goto label_2b50d8;
    }
    ctx->pc = 0x2B50D0u;
    SET_GPR_U32(ctx, 31, 0x2B50D8u);
    ctx->pc = 0x2B50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50D0u;
    // 0x2b50d4: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2B50D0u, 0x2B50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50D8u;
label_2b50d8:
    // 0x2b50d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b50d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b50dc:
    // 0x2b50dc: 0x37a50002  ori         $a1, $sp, 0x2
    ctx->pc = 0x2b50dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
label_2b50e0:
    // 0x2b50e0: 0xc0a8d02  jal         func_2A3408
label_2b50e4:
    if (ctx->pc == 0x2B50E4u) {
        ctx->pc = 0x2B50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50E0u;
        // 0x2b50e4: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B50E8u;
        goto label_2b50e8;
    }
    ctx->pc = 0x2B50E0u;
    SET_GPR_U32(ctx, 31, 0x2B50E8u);
    ctx->pc = 0x2B50E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50E0u;
    // 0x2b50e4: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2B50E0u, 0x2B50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50E8u;
label_2b50e8:
    // 0x2b50e8: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b50ec:
    // 0x2b50ec: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b50f0:
    // 0x2b50f0: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x2b50f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2b50f4:
    // 0x2b50f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b50f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b50f8:
    // 0x2b50f8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2b50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2b50fc:
    // 0x2b50fc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b5100:
    // 0x2b5100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5104:
    // 0x2b5104: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b5104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5108:
    // 0x2b5108: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b510c:
    // 0x2b510c: 0x28420301  slti        $v0, $v0, 0x301
    ctx->pc = 0x2b510cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)769) ? 1 : 0);
label_2b5110:
    // 0x2b5110: 0xc2900a  movz        $s2, $a2, $v0
    ctx->pc = 0x2b5110u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
label_2b5114:
    // 0x2b5114: 0xc0aa45a  jal         func_2A9168
label_2b5118:
    if (ctx->pc == 0x2B5118u) {
        ctx->pc = 0x2B5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5114u;
        // 0x2b5118: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B511Cu;
        goto label_2b511c;
    }
    ctx->pc = 0x2B5114u;
    SET_GPR_U32(ctx, 31, 0x2B511Cu);
    ctx->pc = 0x2B5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5114u;
    // 0x2b5118: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9168u, 0x2B5114u, 0x2B511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B511Cu;
label_2b511c:
    // 0x2b511c: 0xde240100  ld          $a0, 0x100($s1)
    ctx->pc = 0x2b511cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_2b5120:
    // 0x2b5120: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2b5120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2b5124:
    // 0x2b5124: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2b5124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2b5128:
    // 0x2b5128: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b512c:
    if (ctx->pc == 0x2B512Cu) {
        ctx->pc = 0x2B512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5128u;
        // 0x2b512c: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5130u;
        goto label_2b5130;
    }
    ctx->pc = 0x2B5128u;
    {
        const bool branch_taken_0x2b5128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5128u;
        // 0x2b512c: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5128) {
            ctx->pc = 0x2B5140u;
            goto label_2b5140;
        }
    }
    ctx->pc = 0x2B5130u;
label_2b5130:
    // 0x2b5130: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2b5130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2b5134:
    // 0x2b5134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b5138:
    // 0x2b5138: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2b5138u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b513c:
    // 0x2b513c: 0xde240100  ld          $a0, 0x100($s1)
    ctx->pc = 0x2b513cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_2b5140:
    // 0x2b5140: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b5140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2b5144:
    // 0x2b5144: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2b5144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2b5148:
    // 0x2b5148: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b514c:
    if (ctx->pc == 0x2B514Cu) {
        ctx->pc = 0x2B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5148u;
        // 0x2b514c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5150u;
        goto label_2b5150;
    }
    ctx->pc = 0x2B5148u;
    {
        const bool branch_taken_0x2b5148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5148u;
        // 0x2b514c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5148) {
            ctx->pc = 0x2B5154u;
            goto label_2b5154;
        }
    }
    ctx->pc = 0x2B5150u;
label_2b5150:
    // 0x2b5150: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2b5150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5154:
    // 0x2b5154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b5154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b5158:
    // 0x2b5158: 0x5c600005  bgtzl       $v1, . + 4 + (0x5 << 2)
label_2b515c:
    if (ctx->pc == 0x2B515Cu) {
        ctx->pc = 0x2B515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5158u;
        // 0x2b515c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5160u;
        goto label_2b5160;
    }
    ctx->pc = 0x2B5158u;
    {
        const bool branch_taken_0x2b5158 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2b5158) {
            ctx->pc = 0x2B515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5158u;
            // 0x2b515c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5170u;
            goto label_2b5170;
        }
    }
    ctx->pc = 0x2B5160u;
label_2b5160:
    // 0x2b5160: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5164:
    // 0x2b5164: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b5168:
    // 0x2b5168: 0x10000081  b           . + 4 + (0x81 << 2)
label_2b516c:
    if (ctx->pc == 0x2B516Cu) {
        ctx->pc = 0x2B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5168u;
        // 0x2b516c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5170u;
        goto label_2b5170;
    }
    ctx->pc = 0x2B5168u;
    {
        const bool branch_taken_0x2b5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5168u;
        // 0x2b516c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5168) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B5170u;
label_2b5170:
    // 0x2b5170: 0x28420301  slti        $v0, $v0, 0x301
    ctx->pc = 0x2b5170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)769) ? 1 : 0);
label_2b5174:
    // 0x2b5174: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2b5178:
    if (ctx->pc == 0x2B5178u) {
        ctx->pc = 0x2B5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5174u;
        // 0x2b5178: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B517Cu;
        goto label_2b517c;
    }
    ctx->pc = 0x2B5174u;
    {
        const bool branch_taken_0x2b5174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5174) {
            ctx->pc = 0x2B5178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5174u;
            // 0x2b5178: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B519Cu;
            goto label_2b519c;
        }
    }
    ctx->pc = 0x2B517Cu;
label_2b517c:
    // 0x2b517c: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x2b517cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_2b5180:
    // 0x2b5180: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2b5180u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5184:
    // 0x2b5184: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x2b5184u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_2b5188:
    // 0x2b5188: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x2b5188u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
label_2b518c:
    // 0x2b518c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b5190:
    // 0x2b5190: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2b5194:
    // 0x2b5194: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2b5194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2b5198:
    // 0x2b5198: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2b5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b519c:
    // 0x2b519c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b51a0:
    // 0x2b51a0: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2b51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b51a4:
    // 0x2b51a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b51a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b51a8:
    // 0x2b51a8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b51ac:
    // 0x2b51ac: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2b51acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b51b0:
    // 0x2b51b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b51b4:
    // 0x2b51b4: 0x40f809  jalr        $v0
label_2b51b8:
    if (ctx->pc == 0x2B51B8u) {
        ctx->pc = 0x2B51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51B4u;
        // 0x2b51b8: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51BCu;
        goto label_2b51bc;
    }
    ctx->pc = 0x2B51B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B51BCu);
        ctx->pc = 0x2B51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51B4u;
        // 0x2b51b8: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B51B4u, 0x2B51BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B51BCu;
label_2b51bc:
    // 0x2b51bc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b51c0:
    // 0x2b51c0: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_2b51c4:
    if (ctx->pc == 0x2B51C4u) {
        ctx->pc = 0x2B51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51C0u;
        // 0x2b51c4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51C8u;
        goto label_2b51c8;
    }
    ctx->pc = 0x2B51C0u;
    {
        const bool branch_taken_0x2b51c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51C0u;
        // 0x2b51c4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51c0) {
            ctx->pc = 0x2B53D4u;
            goto label_2b53d4;
        }
    }
    ctx->pc = 0x2B51C8u;
label_2b51c8:
    // 0x2b51c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b51c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b51cc:
    // 0x2b51cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b51ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b51d0:
    // 0x2b51d0: 0xc049cb6  jal         func_1272D8
label_2b51d4:
    if (ctx->pc == 0x2B51D4u) {
        ctx->pc = 0x2B51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D0u;
        // 0x2b51d4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51D8u;
        goto label_2b51d8;
    }
    ctx->pc = 0x2B51D0u;
    SET_GPR_U32(ctx, 31, 0x2B51D8u);
    ctx->pc = 0x2B51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51D0u;
    // 0x2b51d4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B51D0u, 0x2B51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B51D8u;
label_2b51d8:
    // 0x2b51d8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2b51dc:
    if (ctx->pc == 0x2B51DCu) {
        ctx->pc = 0x2B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D8u;
        // 0x2b51dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51E0u;
        goto label_2b51e0;
    }
    ctx->pc = 0x2B51D8u;
    {
        const bool branch_taken_0x2b51d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D8u;
        // 0x2b51dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51d8) {
            ctx->pc = 0x2B5384u;
            goto label_2b5384;
        }
    }
    ctx->pc = 0x2B51E0u;
label_2b51e0:
    // 0x2b51e0: 0x30a20016  andi        $v0, $a1, 0x16
    ctx->pc = 0x2b51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)22);
label_2b51e4:
    // 0x2b51e4: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_2b51e8:
    if (ctx->pc == 0x2B51E8u) {
        ctx->pc = 0x2B51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51E4u;
        // 0x2b51e8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51ECu;
        goto label_2b51ec;
    }
    ctx->pc = 0x2B51E4u;
    {
        const bool branch_taken_0x2b51e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51E4u;
        // 0x2b51e8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51e4) {
            ctx->pc = 0x2B5354u;
            goto label_2b5354;
        }
    }
    ctx->pc = 0x2B51ECu;
label_2b51ec:
    // 0x2b51ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2b51ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2b51f0:
    // 0x2b51f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b51f4:
    if (ctx->pc == 0x2B51F4u) {
        ctx->pc = 0x2B51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51F0u;
        // 0x2b51f4: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B51F8u;
        goto label_2b51f8;
    }
    ctx->pc = 0x2B51F0u;
    {
        const bool branch_taken_0x2b51f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51F0u;
        // 0x2b51f4: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51f0) {
            ctx->pc = 0x2B5204u;
            goto label_2b5204;
        }
    }
    ctx->pc = 0x2B51F8u;
label_2b51f8:
    // 0x2b51f8: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2b51fc:
    // 0x2b51fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b5200:
    if (ctx->pc == 0x2B5200u) {
        ctx->pc = 0x2B5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51FCu;
        // 0x2b5200: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5204u;
        goto label_2b5204;
    }
    ctx->pc = 0x2B51FCu;
    {
        const bool branch_taken_0x2b51fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51FCu;
        // 0x2b5200: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51fc) {
            ctx->pc = 0x2B520Cu;
            goto label_2b520c;
        }
    }
    ctx->pc = 0x2B5204u;
label_2b5204:
    // 0x2b5204: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2b5204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2b5208:
    // 0x2b5208: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b520c:
    // 0x2b520c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2b5210:
    if (ctx->pc == 0x2B5210u) {
        ctx->pc = 0x2B5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B520Cu;
        // 0x2b5210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5214u;
        goto label_2b5214;
    }
    ctx->pc = 0x2B520Cu;
    {
        const bool branch_taken_0x2b520c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B520Cu;
        // 0x2b5210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b520c) {
            ctx->pc = 0x2B5234u;
            goto label_2b5234;
        }
    }
    ctx->pc = 0x2B5214u;
label_2b5214:
    // 0x2b5214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5218:
    // 0x2b5218: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b5218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b521c:
    // 0x2b521c: 0xc0adb7e  jal         func_2B6DF8
label_2b5220:
    if (ctx->pc == 0x2B5220u) {
        ctx->pc = 0x2B5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B521Cu;
        // 0x2b5220: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5224u;
        goto label_2b5224;
    }
    ctx->pc = 0x2B521Cu;
    SET_GPR_U32(ctx, 31, 0x2B5224u);
    ctx->pc = 0x2B5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B521Cu;
    // 0x2b5220: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B521Cu, 0x2B5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5224u;
label_2b5224:
    // 0x2b5224: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5228:
    // 0x2b5228: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b5228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b522c:
    // 0x2b522c: 0x10000050  b           . + 4 + (0x50 << 2)
label_2b5230:
    if (ctx->pc == 0x2B5230u) {
        ctx->pc = 0x2B5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B522Cu;
        // 0x2b5230: 0x240600ee  addiu       $a2, $zero, 0xEE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5234u;
        goto label_2b5234;
    }
    ctx->pc = 0x2B522Cu;
    {
        const bool branch_taken_0x2b522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B522Cu;
        // 0x2b5230: 0x240600ee  addiu       $a2, $zero, 0xEE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b522c) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B5234u;
label_2b5234:
    // 0x2b5234: 0xc0a50d6  jal         func_294358
label_2b5238:
    if (ctx->pc == 0x2B5238u) {
        ctx->pc = 0x2B5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5234u;
        // 0x2b5238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B523Cu;
        goto label_2b523c;
    }
    ctx->pc = 0x2B5234u;
    SET_GPR_U32(ctx, 31, 0x2B523Cu);
    ctx->pc = 0x2B5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5234u;
    // 0x2b5238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294358u, 0x2B5234u, 0x2B523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B523Cu;
label_2b523c:
    // 0x2b523c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b523cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5240:
    // 0x2b5240: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_2b5244:
    if (ctx->pc == 0x2B5244u) {
        ctx->pc = 0x2B5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5240u;
        // 0x2b5244: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5248u;
        goto label_2b5248;
    }
    ctx->pc = 0x2B5240u;
    {
        const bool branch_taken_0x2b5240 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5240u;
        // 0x2b5244: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5240) {
            ctx->pc = 0x2B5254u;
            goto label_2b5254;
        }
    }
    ctx->pc = 0x2B5248u;
label_2b5248:
    // 0x2b5248: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b5248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b524c:
    // 0x2b524c: 0x10000048  b           . + 4 + (0x48 << 2)
label_2b5250:
    if (ctx->pc == 0x2B5250u) {
        ctx->pc = 0x2B5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B524Cu;
        // 0x2b5250: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5254u;
        goto label_2b5254;
    }
    ctx->pc = 0x2B524Cu;
    {
        const bool branch_taken_0x2b524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B524Cu;
        // 0x2b5250: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b524c) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B5254u;
label_2b5254:
    // 0x2b5254: 0xc0a508e  jal         func_294238
label_2b5258:
    if (ctx->pc == 0x2B5258u) {
        ctx->pc = 0x2B5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5254u;
        // 0x2b5258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B525Cu;
        goto label_2b525c;
    }
    ctx->pc = 0x2B5254u;
    SET_GPR_U32(ctx, 31, 0x2B525Cu);
    ctx->pc = 0x2B5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5254u;
    // 0x2b5258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294238u, 0x2B5254u, 0x2B525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B525Cu;
label_2b525c:
    // 0x2b525c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b5260:
    if (ctx->pc == 0x2B5260u) {
        ctx->pc = 0x2B5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B525Cu;
        // 0x2b5260: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5264u;
        goto label_2b5264;
    }
    ctx->pc = 0x2B525Cu;
    {
        const bool branch_taken_0x2b525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B525Cu;
        // 0x2b5260: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b525c) {
            ctx->pc = 0x2B5274u;
            goto label_2b5274;
        }
    }
    ctx->pc = 0x2B5264u;
label_2b5264:
    // 0x2b5264: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5268:
    // 0x2b5268: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b5268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b526c:
    // 0x2b526c: 0x10000040  b           . + 4 + (0x40 << 2)
label_2b5270:
    if (ctx->pc == 0x2B5270u) {
        ctx->pc = 0x2B5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B526Cu;
        // 0x2b5270: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5274u;
        goto label_2b5274;
    }
    ctx->pc = 0x2B526Cu;
    {
        const bool branch_taken_0x2b526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B526Cu;
        // 0x2b5270: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b526c) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B5274u;
label_2b5274:
    // 0x2b5274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5278:
    // 0x2b5278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b5278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b527c:
    // 0x2b527c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b527cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b5280:
    // 0x2b5280: 0xc0a503c  jal         func_2940F0
label_2b5284:
    if (ctx->pc == 0x2B5284u) {
        ctx->pc = 0x2B5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5280u;
        // 0x2b5284: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5288u;
        goto label_2b5288;
    }
    ctx->pc = 0x2B5280u;
    SET_GPR_U32(ctx, 31, 0x2B5288u);
    ctx->pc = 0x2B5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5280u;
    // 0x2b5284: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2940F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2940F0u, 0x2B5280u, 0x2B5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5288u;
label_2b5288:
    // 0x2b5288: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x2b5288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b528c:
    // 0x2b528c: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x2b528cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_2b5290:
    // 0x2b5290: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2b5290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b5294:
    // 0x2b5294: 0x2c63023  subu        $a2, $s6, $a2
    ctx->pc = 0x2b5294u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_2b5298:
    // 0x2b5298: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x2b5298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2b529c:
    // 0x2b529c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b52a0:
    // 0x2b52a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b52a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b52a4:
    // 0x2b52a4: 0xc0a50a6  jal         func_294298
label_2b52a8:
    if (ctx->pc == 0x2B52A8u) {
        ctx->pc = 0x2B52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52A4u;
        // 0x2b52a8: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B52ACu;
        goto label_2b52ac;
    }
    ctx->pc = 0x2B52A4u;
    SET_GPR_U32(ctx, 31, 0x2B52ACu);
    ctx->pc = 0x2B52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52A4u;
    // 0x2b52a8: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294298u, 0x2B52A4u, 0x2B52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52ACu;
label_2b52ac:
    // 0x2b52ac: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_2b52b0:
    if (ctx->pc == 0x2B52B0u) {
        ctx->pc = 0x2B52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52ACu;
        // 0x2b52b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B52B4u;
        goto label_2b52b4;
    }
    ctx->pc = 0x2B52ACu;
    {
        const bool branch_taken_0x2b52ac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2b52ac) {
            ctx->pc = 0x2B52B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B52ACu;
            // 0x2b52b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B52C4u;
            goto label_2b52c4;
        }
    }
    ctx->pc = 0x2B52B4u;
label_2b52b4:
    // 0x2b52b4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b52b8:
    // 0x2b52b8: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b52bc:
    // 0x2b52bc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2b52c0:
    if (ctx->pc == 0x2B52C0u) {
        ctx->pc = 0x2B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52BCu;
        // 0x2b52c0: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B52C4u;
        goto label_2b52c4;
    }
    ctx->pc = 0x2B52BCu;
    {
        const bool branch_taken_0x2b52bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52BCu;
        // 0x2b52c0: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52bc) {
            ctx->pc = 0x2B5370u;
            goto label_2b5370;
        }
    }
    ctx->pc = 0x2B52C4u;
label_2b52c4:
    // 0x2b52c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b52c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b52c8:
    // 0x2b52c8: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2b52c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b52cc:
    // 0x2b52cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b52ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b52d0:
    // 0x2b52d0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b52d4:
    // 0x2b52d4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2b52d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b52d8:
    // 0x2b52d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b52dc:
    // 0x2b52dc: 0x40f809  jalr        $v0
label_2b52e0:
    if (ctx->pc == 0x2B52E0u) {
        ctx->pc = 0x2B52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52DCu;
        // 0x2b52e0: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B52E4u;
        goto label_2b52e4;
    }
    ctx->pc = 0x2B52DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B52E4u);
        ctx->pc = 0x2B52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52DCu;
        // 0x2b52e0: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B52DCu, 0x2B52E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B52E4u;
label_2b52e4:
    // 0x2b52e4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2b52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2b52e8:
    // 0x2b52e8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2b52ec:
    if (ctx->pc == 0x2B52ECu) {
        ctx->pc = 0x2B52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52E8u;
        // 0x2b52ec: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B52F0u;
        goto label_2b52f0;
    }
    ctx->pc = 0x2B52E8u;
    {
        const bool branch_taken_0x2b52e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52E8u;
        // 0x2b52ec: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52e8) {
            ctx->pc = 0x2B53D4u;
            goto label_2b53d4;
        }
    }
    ctx->pc = 0x2B52F0u;
label_2b52f0:
    // 0x2b52f0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2b52f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b52f4:
    // 0x2b52f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b52f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b52f8:
    // 0x2b52f8: 0xc049cb6  jal         func_1272D8
label_2b52fc:
    if (ctx->pc == 0x2B52FCu) {
        ctx->pc = 0x2B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52F8u;
        // 0x2b52fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5300u;
        goto label_2b5300;
    }
    ctx->pc = 0x2B52F8u;
    SET_GPR_U32(ctx, 31, 0x2B5300u);
    ctx->pc = 0x2B52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52F8u;
    // 0x2b52fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B52F8u, 0x2B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5300u;
label_2b5300:
    // 0x2b5300: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b5300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b5304:
    // 0x2b5304: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b5304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5308:
    // 0x2b5308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b5308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b530c:
    // 0x2b530c: 0xc0a503c  jal         func_2940F0
label_2b5310:
    if (ctx->pc == 0x2B5310u) {
        ctx->pc = 0x2B5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B530Cu;
        // 0x2b5310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5314u;
        goto label_2b5314;
    }
    ctx->pc = 0x2B530Cu;
    SET_GPR_U32(ctx, 31, 0x2B5314u);
    ctx->pc = 0x2B5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B530Cu;
    // 0x2b5310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2940F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2940F0u, 0x2B530Cu, 0x2B5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5314u;
label_2b5314:
    // 0x2b5314: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b5318:
    // 0x2b5318: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x2b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2b531c:
    // 0x2b531c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2b531cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_2b5320:
    // 0x2b5320: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2b5320u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b5324:
    // 0x2b5324: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x2b5324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_2b5328:
    // 0x2b5328: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2b5328u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b532c:
    // 0x2b532c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b532cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b5330:
    // 0x2b5330: 0xc049c48  jal         func_127120
label_2b5334:
    if (ctx->pc == 0x2B5334u) {
        ctx->pc = 0x2B5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5330u;
        // 0x2b5334: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5338u;
        goto label_2b5338;
    }
    ctx->pc = 0x2B5330u;
    SET_GPR_U32(ctx, 31, 0x2B5338u);
    ctx->pc = 0x2B5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5330u;
    // 0x2b5334: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B5330u, 0x2B5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5338u;
label_2b5338:
    // 0x2b5338: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b533c:
    // 0x2b533c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b5340:
    // 0x2b5340: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2b5340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2b5344:
    // 0x2b5344: 0xc0a4ff2  jal         func_293FC8
label_2b5348:
    if (ctx->pc == 0x2B5348u) {
        ctx->pc = 0x2B5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5344u;
        // 0x2b5348: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B534Cu;
        goto label_2b534c;
    }
    ctx->pc = 0x2B5344u;
    SET_GPR_U32(ctx, 31, 0x2B534Cu);
    ctx->pc = 0x2B5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5344u;
    // 0x2b5348: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FC8u, 0x2B5344u, 0x2B534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B534Cu;
label_2b534c:
    // 0x2b534c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b5350:
    if (ctx->pc == 0x2B5350u) {
        ctx->pc = 0x2B5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B534Cu;
        // 0x2b5350: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5354u;
        goto label_2b5354;
    }
    ctx->pc = 0x2B534Cu;
    {
        const bool branch_taken_0x2b534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B534Cu;
        // 0x2b5350: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b534c) {
            ctx->pc = 0x2B5384u;
            goto label_2b5384;
        }
    }
    ctx->pc = 0x2B5354u;
label_2b5354:
    // 0x2b5354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5358:
    // 0x2b5358: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b5358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b535c:
    // 0x2b535c: 0xc0adb7e  jal         func_2B6DF8
label_2b5360:
    if (ctx->pc == 0x2B5360u) {
        ctx->pc = 0x2B5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B535Cu;
        // 0x2b5360: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5364u;
        goto label_2b5364;
    }
    ctx->pc = 0x2B535Cu;
    SET_GPR_U32(ctx, 31, 0x2B5364u);
    ctx->pc = 0x2B5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B535Cu;
    // 0x2b5360: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B535Cu, 0x2B5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5364u;
label_2b5364:
    // 0x2b5364: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5368:
    // 0x2b5368: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x2b5368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2b536c:
    // 0x2b536c: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2b536cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_2b5370:
    // 0x2b5370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5374:
    // 0x2b5374: 0xc0a5648  jal         func_295920
label_2b5378:
    if (ctx->pc == 0x2B5378u) {
        ctx->pc = 0x2B5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5374u;
        // 0x2b5378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B537Cu;
        goto label_2b537c;
    }
    ctx->pc = 0x2B5374u;
    SET_GPR_U32(ctx, 31, 0x2B537Cu);
    ctx->pc = 0x2B5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5374u;
    // 0x2b5378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5374u, 0x2B537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B537Cu;
label_2b537c:
    // 0x2b537c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b5380:
    if (ctx->pc == 0x2B5380u) {
        ctx->pc = 0x2B5384u;
        goto label_2b5384;
    }
    ctx->pc = 0x2B537Cu;
    {
        const bool branch_taken_0x2b537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b537c) {
            ctx->pc = 0x2B53D4u;
            goto label_2b53d4;
        }
    }
    ctx->pc = 0x2B5384u;
label_2b5384:
    // 0x2b5384: 0x24041181  addiu       $a0, $zero, 0x1181
    ctx->pc = 0x2b5384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4481));
label_2b5388:
    // 0x2b5388: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2b5388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b538c:
    // 0x2b538c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b5390:
    // 0x2b5390: 0x87a3003a  lh          $v1, 0x3A($sp)
    ctx->pc = 0x2b5390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 58)));
label_2b5394:
    // 0x2b5394: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2b5394u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b5398:
    // 0x2b5398: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2b5398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b539c:
    // 0x2b539c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b539cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2b53a0:
    // 0x2b53a0: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x2b53a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b53a4:
    // 0x2b53a4: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x2b53a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_2b53a8:
    // 0x2b53a8: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x2b53a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
label_2b53ac:
    // 0x2b53ac: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x2b53acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_2b53b0:
    // 0x2b53b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2b53b4:
    // 0x2b53b4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2b53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2b53b8:
    // 0x2b53b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2b53bc:
    // 0x2b53bc: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2b53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2b53c0:
    // 0x2b53c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b53c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b53c4:
    // 0x2b53c4: 0xc0adc0a  jal         func_2B7028
label_2b53c8:
    if (ctx->pc == 0x2B53C8u) {
        ctx->pc = 0x2B53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53C4u;
        // 0x2b53c8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B53CCu;
        goto label_2b53cc;
    }
    ctx->pc = 0x2B53C4u;
    SET_GPR_U32(ctx, 31, 0x2B53CCu);
    ctx->pc = 0x2B53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53C4u;
    // 0x2b53c8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7028u, 0x2B53C4u, 0x2B53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53CCu;
label_2b53cc:
    // 0x2b53cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b53d0:
    if (ctx->pc == 0x2B53D0u) {
        ctx->pc = 0x2B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53CCu;
        // 0x2b53d0: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B53D4u;
        goto label_2b53d4;
    }
    ctx->pc = 0x2B53CCu;
    {
        const bool branch_taken_0x2b53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53CCu;
        // 0x2b53d0: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53cc) {
            ctx->pc = 0x2B53ECu;
            goto label_2b53ec;
        }
    }
    ctx->pc = 0x2B53D4u;
label_2b53d4:
    // 0x2b53d4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2b53d8:
    if (ctx->pc == 0x2B53D8u) {
        ctx->pc = 0x2B53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53D4u;
        // 0x2b53d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B53DCu;
        goto label_2b53dc;
    }
    ctx->pc = 0x2B53D4u;
    {
        const bool branch_taken_0x2b53d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53D4u;
        // 0x2b53d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53d4) {
            ctx->pc = 0x2B53E8u;
            goto label_2b53e8;
        }
    }
    ctx->pc = 0x2B53DCu;
label_2b53dc:
    // 0x2b53dc: 0xc0a4ff2  jal         func_293FC8
label_2b53e0:
    if (ctx->pc == 0x2B53E0u) {
        ctx->pc = 0x2B53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53DCu;
        // 0x2b53e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B53E4u;
        goto label_2b53e4;
    }
    ctx->pc = 0x2B53DCu;
    SET_GPR_U32(ctx, 31, 0x2B53E4u);
    ctx->pc = 0x2B53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53DCu;
    // 0x2b53e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FC8u, 0x2B53DCu, 0x2B53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53E4u;
label_2b53e4:
    // 0x2b53e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b53e8:
    // 0x2b53e8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b53e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b53ec:
    // 0x2b53ec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2b53ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b53f0:
    // 0x2b53f0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2b53f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b53f4:
    // 0x2b53f4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2b53f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b53f8:
    // 0x2b53f8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2b53f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b53fc:
    // 0x2b53fc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2b53fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b5400:
    // 0x2b5400: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2b5400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5404:
    // 0x2b5404: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2b5404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b5408:
    // 0x2b5408: 0x3e00008  jr          $ra
label_2b540c:
    if (ctx->pc == 0x2B540Cu) {
        ctx->pc = 0x2B540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5408u;
        // 0x2b540c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5410u;
        goto label_fallthrough_0x2b5408;
    }
    ctx->pc = 0x2B5408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5408u;
        // 0x2b540c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b5408:
    ctx->pc = 0x2B5410u;
}
