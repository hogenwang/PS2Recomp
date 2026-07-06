#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5240
// Address: 0x1b5240 - 0x1b5668
void sub_001B5240_0x1b5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5240_0x1b5240");
#endif

    switch (ctx->pc) {
        case 0x1b5240u: goto label_1b5240;
        case 0x1b5244u: goto label_1b5244;
        case 0x1b5248u: goto label_1b5248;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b5254u: goto label_1b5254;
        case 0x1b5258u: goto label_1b5258;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5260u: goto label_1b5260;
        case 0x1b5264u: goto label_1b5264;
        case 0x1b5268u: goto label_1b5268;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        case 0x1b532cu: goto label_1b532c;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b535cu: goto label_1b535c;
        case 0x1b5360u: goto label_1b5360;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b5368u: goto label_1b5368;
        case 0x1b536cu: goto label_1b536c;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b5374u: goto label_1b5374;
        case 0x1b5378u: goto label_1b5378;
        case 0x1b537cu: goto label_1b537c;
        case 0x1b5380u: goto label_1b5380;
        case 0x1b5384u: goto label_1b5384;
        case 0x1b5388u: goto label_1b5388;
        case 0x1b538cu: goto label_1b538c;
        case 0x1b5390u: goto label_1b5390;
        case 0x1b5394u: goto label_1b5394;
        case 0x1b5398u: goto label_1b5398;
        case 0x1b539cu: goto label_1b539c;
        case 0x1b53a0u: goto label_1b53a0;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53a8u: goto label_1b53a8;
        case 0x1b53acu: goto label_1b53ac;
        case 0x1b53b0u: goto label_1b53b0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53c0u: goto label_1b53c0;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53c8u: goto label_1b53c8;
        case 0x1b53ccu: goto label_1b53cc;
        case 0x1b53d0u: goto label_1b53d0;
        case 0x1b53d4u: goto label_1b53d4;
        case 0x1b53d8u: goto label_1b53d8;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53e0u: goto label_1b53e0;
        case 0x1b53e4u: goto label_1b53e4;
        case 0x1b53e8u: goto label_1b53e8;
        case 0x1b53ecu: goto label_1b53ec;
        case 0x1b53f0u: goto label_1b53f0;
        case 0x1b53f4u: goto label_1b53f4;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b53fcu: goto label_1b53fc;
        case 0x1b5400u: goto label_1b5400;
        case 0x1b5404u: goto label_1b5404;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b540cu: goto label_1b540c;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b5418u: goto label_1b5418;
        case 0x1b541cu: goto label_1b541c;
        case 0x1b5420u: goto label_1b5420;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5428u: goto label_1b5428;
        case 0x1b542cu: goto label_1b542c;
        case 0x1b5430u: goto label_1b5430;
        case 0x1b5434u: goto label_1b5434;
        case 0x1b5438u: goto label_1b5438;
        case 0x1b543cu: goto label_1b543c;
        case 0x1b5440u: goto label_1b5440;
        case 0x1b5444u: goto label_1b5444;
        case 0x1b5448u: goto label_1b5448;
        case 0x1b544cu: goto label_1b544c;
        case 0x1b5450u: goto label_1b5450;
        case 0x1b5454u: goto label_1b5454;
        case 0x1b5458u: goto label_1b5458;
        case 0x1b545cu: goto label_1b545c;
        case 0x1b5460u: goto label_1b5460;
        case 0x1b5464u: goto label_1b5464;
        case 0x1b5468u: goto label_1b5468;
        case 0x1b546cu: goto label_1b546c;
        case 0x1b5470u: goto label_1b5470;
        case 0x1b5474u: goto label_1b5474;
        case 0x1b5478u: goto label_1b5478;
        case 0x1b547cu: goto label_1b547c;
        case 0x1b5480u: goto label_1b5480;
        case 0x1b5484u: goto label_1b5484;
        case 0x1b5488u: goto label_1b5488;
        case 0x1b548cu: goto label_1b548c;
        case 0x1b5490u: goto label_1b5490;
        case 0x1b5494u: goto label_1b5494;
        case 0x1b5498u: goto label_1b5498;
        case 0x1b549cu: goto label_1b549c;
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54a4u: goto label_1b54a4;
        case 0x1b54a8u: goto label_1b54a8;
        case 0x1b54acu: goto label_1b54ac;
        case 0x1b54b0u: goto label_1b54b0;
        case 0x1b54b4u: goto label_1b54b4;
        case 0x1b54b8u: goto label_1b54b8;
        case 0x1b54bcu: goto label_1b54bc;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54c8u: goto label_1b54c8;
        case 0x1b54ccu: goto label_1b54cc;
        case 0x1b54d0u: goto label_1b54d0;
        case 0x1b54d4u: goto label_1b54d4;
        case 0x1b54d8u: goto label_1b54d8;
        case 0x1b54dcu: goto label_1b54dc;
        case 0x1b54e0u: goto label_1b54e0;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54e8u: goto label_1b54e8;
        case 0x1b54ecu: goto label_1b54ec;
        case 0x1b54f0u: goto label_1b54f0;
        case 0x1b54f4u: goto label_1b54f4;
        case 0x1b54f8u: goto label_1b54f8;
        case 0x1b54fcu: goto label_1b54fc;
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5504u: goto label_1b5504;
        case 0x1b5508u: goto label_1b5508;
        case 0x1b550cu: goto label_1b550c;
        case 0x1b5510u: goto label_1b5510;
        case 0x1b5514u: goto label_1b5514;
        case 0x1b5518u: goto label_1b5518;
        case 0x1b551cu: goto label_1b551c;
        case 0x1b5520u: goto label_1b5520;
        case 0x1b5524u: goto label_1b5524;
        case 0x1b5528u: goto label_1b5528;
        case 0x1b552cu: goto label_1b552c;
        case 0x1b5530u: goto label_1b5530;
        case 0x1b5534u: goto label_1b5534;
        case 0x1b5538u: goto label_1b5538;
        case 0x1b553cu: goto label_1b553c;
        case 0x1b5540u: goto label_1b5540;
        case 0x1b5544u: goto label_1b5544;
        case 0x1b5548u: goto label_1b5548;
        case 0x1b554cu: goto label_1b554c;
        case 0x1b5550u: goto label_1b5550;
        case 0x1b5554u: goto label_1b5554;
        case 0x1b5558u: goto label_1b5558;
        case 0x1b555cu: goto label_1b555c;
        case 0x1b5560u: goto label_1b5560;
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5568u: goto label_1b5568;
        case 0x1b556cu: goto label_1b556c;
        case 0x1b5570u: goto label_1b5570;
        case 0x1b5574u: goto label_1b5574;
        case 0x1b5578u: goto label_1b5578;
        case 0x1b557cu: goto label_1b557c;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b5584u: goto label_1b5584;
        case 0x1b5588u: goto label_1b5588;
        case 0x1b558cu: goto label_1b558c;
        case 0x1b5590u: goto label_1b5590;
        case 0x1b5594u: goto label_1b5594;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b559cu: goto label_1b559c;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55a8u: goto label_1b55a8;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55b0u: goto label_1b55b0;
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c0u: goto label_1b55c0;
        case 0x1b55c4u: goto label_1b55c4;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d0u: goto label_1b55d0;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55d8u: goto label_1b55d8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b55e0u: goto label_1b55e0;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55ecu: goto label_1b55ec;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b55f4u: goto label_1b55f4;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b55fcu: goto label_1b55fc;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b5604u: goto label_1b5604;
        case 0x1b5608u: goto label_1b5608;
        case 0x1b560cu: goto label_1b560c;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5614u: goto label_1b5614;
        case 0x1b5618u: goto label_1b5618;
        case 0x1b561cu: goto label_1b561c;
        case 0x1b5620u: goto label_1b5620;
        case 0x1b5624u: goto label_1b5624;
        case 0x1b5628u: goto label_1b5628;
        case 0x1b562cu: goto label_1b562c;
        case 0x1b5630u: goto label_1b5630;
        case 0x1b5634u: goto label_1b5634;
        case 0x1b5638u: goto label_1b5638;
        case 0x1b563cu: goto label_1b563c;
        case 0x1b5640u: goto label_1b5640;
        case 0x1b5644u: goto label_1b5644;
        case 0x1b5648u: goto label_1b5648;
        case 0x1b564cu: goto label_1b564c;
        case 0x1b5650u: goto label_1b5650;
        case 0x1b5654u: goto label_1b5654;
        case 0x1b5658u: goto label_1b5658;
        case 0x1b565cu: goto label_1b565c;
        case 0x1b5660u: goto label_1b5660;
        case 0x1b5664u: goto label_1b5664;
        default: break;
    }

    ctx->pc = 0x1b5240u;

label_1b5240:
    // 0x1b5240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5244:
    // 0x1b5244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5248:
    // 0x1b5248: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b5248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1b524c:
    // 0x1b524c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b524cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5250:
    // 0x1b5250: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b5250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b5254:
    // 0x1b5254: 0x3406c800  ori         $a2, $zero, 0xC800
    ctx->pc = 0x1b5254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_1b5258:
    // 0x1b5258: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b525c:
    // 0x1b525c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b525cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5260:
    // 0x1b5260: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b5264:
    // 0x1b5264: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b5264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b5268:
    // 0x1b5268: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1b526c:
    // 0x1b526c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x1b526cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b5270:
    // 0x1b5270: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1b5274:
    // 0x1b5274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5278:
    // 0x1b5278: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b527c:
    // 0x1b527c: 0x40f809  jalr        $v0
label_1b5280:
    if (ctx->pc == 0x1B5280u) {
        ctx->pc = 0x1B5280u;
            // 0x1b5280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5284u;
        goto label_1b5284;
    }
    ctx->pc = 0x1B527Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5284u);
        ctx->pc = 0x1B5280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B527Cu;
            // 0x1b5280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5284u; }
            if (ctx->pc != 0x1B5284u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5284u;
label_1b5284:
    // 0x1b5284: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5288:
    // 0x1b5288: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_1b528c:
    if (ctx->pc == 0x1B528Cu) {
        ctx->pc = 0x1B528Cu;
            // 0x1b528c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5290u;
        goto label_1b5290;
    }
    ctx->pc = 0x1B5288u;
    {
        const bool branch_taken_0x1b5288 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5288u;
            // 0x1b528c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5288) {
            ctx->pc = 0x1B52D4u;
            goto label_1b52d4;
        }
    }
    ctx->pc = 0x1B5290u;
label_1b5290:
    // 0x1b5290: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5294:
    // 0x1b5294: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1b5294u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5298:
    // 0x1b5298: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1b529c:
    if (ctx->pc == 0x1B529Cu) {
        ctx->pc = 0x1B529Cu;
            // 0x1b529c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->pc = 0x1B52A0u;
        goto label_1b52a0;
    }
    ctx->pc = 0x1B5298u;
    {
        const bool branch_taken_0x1b5298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5298u;
            // 0x1b529c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5298) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B52A0u;
label_1b52a0:
    // 0x1b52a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b52a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b52a4:
    // 0x1b52a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b52a8:
    // 0x1b52a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b52ac:
    // 0x1b52ac: 0x0  nop
    ctx->pc = 0x1b52acu;
    // NOP
label_1b52b0:
    // 0x1b52b0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b52b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b52b4:
    // 0x1b52b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b52b8:
    if (ctx->pc == 0x1B52B8u) {
        ctx->pc = 0x1B52B8u;
            // 0x1b52b8: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x1B52BCu;
        goto label_1b52bc;
    }
    ctx->pc = 0x1B52B4u;
    {
        const bool branch_taken_0x1b52b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52B4u;
            // 0x1b52b8: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52b4) {
            ctx->pc = 0x1B52D4u;
            goto label_1b52d4;
        }
    }
    ctx->pc = 0x1B52BCu;
label_1b52bc:
    // 0x1b52bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b52c0:
    // 0x1b52c0: 0x0  nop
    ctx->pc = 0x1b52c0u;
    // NOP
label_1b52c4:
    // 0x1b52c4: 0x0  nop
    ctx->pc = 0x1b52c4u;
    // NOP
label_1b52c8:
    // 0x1b52c8: 0x0  nop
    ctx->pc = 0x1b52c8u;
    // NOP
label_1b52cc:
    // 0x1b52cc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_1b52d0:
    if (ctx->pc == 0x1B52D0u) {
        ctx->pc = 0x1B52D0u;
            // 0x1b52d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x1B52D4u;
        goto label_1b52d4;
    }
    ctx->pc = 0x1B52CCu;
    {
        const bool branch_taken_0x1b52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52cc) {
            ctx->pc = 0x1B52D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52CCu;
            // 0x1b52d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B52B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b52b0;
        }
    }
    ctx->pc = 0x1B52D4u;
label_1b52d4:
    // 0x1b52d4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1b52d8:
    // 0x1b52d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b52dc:
    // 0x1b52dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b52e0:
    // 0x1b52e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1b52e4:
    // 0x1b52e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b52e8:
    // 0x1b52e8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1b52ec:
    if (ctx->pc == 0x1B52ECu) {
        ctx->pc = 0x1B52ECu;
            // 0x1b52ec: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B52F0u;
        goto label_1b52f0;
    }
    ctx->pc = 0x1B52E8u;
    {
        const bool branch_taken_0x1b52e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B52ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52E8u;
            // 0x1b52ec: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52e8) {
            ctx->pc = 0x1B5338u;
            goto label_1b5338;
        }
    }
    ctx->pc = 0x1B52F0u;
label_1b52f0:
    // 0x1b52f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b52f4:
    // 0x1b52f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b52f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b52f8:
    // 0x1b52f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b52fc:
    // 0x1b52fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b5300:
    // 0x1b5300: 0x40f809  jalr        $v0
label_1b5304:
    if (ctx->pc == 0x1B5304u) {
        ctx->pc = 0x1B5304u;
            // 0x1b5304: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5308u;
        goto label_1b5308;
    }
    ctx->pc = 0x1B5300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5308u);
        ctx->pc = 0x1B5304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5300u;
            // 0x1b5304: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5308u; }
            if (ctx->pc != 0x1B5308u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5308u;
label_1b5308:
    // 0x1b5308: 0xc06ac60  jal         func_1AB180
label_1b530c:
    if (ctx->pc == 0x1B530Cu) {
        ctx->pc = 0x1B5310u;
        goto label_1b5310;
    }
    ctx->pc = 0x1B5308u;
    SET_GPR_U32(ctx, 31, 0x1B5310u);
    ctx->pc = 0x1AB180u;
    if (runtime->hasFunction(0x1AB180u)) {
        auto targetFn = runtime->lookupFunction(0x1AB180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5310u; }
        if (ctx->pc != 0x1B5310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB180_0x1ab180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5310u; }
        if (ctx->pc != 0x1B5310u) { return; }
    }
    ctx->pc = 0x1B5310u;
label_1b5310:
    // 0x1b5310: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_1b5314:
    if (ctx->pc == 0x1B5314u) {
        ctx->pc = 0x1B5314u;
            // 0x1b5314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B5318u;
        goto label_1b5318;
    }
    ctx->pc = 0x1B5310u;
    {
        const bool branch_taken_0x1b5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5310) {
            ctx->pc = 0x1B5314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5310u;
            // 0x1b5314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5524u;
            goto label_1b5524;
        }
    }
    ctx->pc = 0x1B5318u;
label_1b5318:
    // 0x1b5318: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b531c:
    // 0x1b531c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1b5320:
    // 0x1b5320: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
label_1b5324:
    // 0x1b5324: 0xc06ba28  jal         func_1AE8A0
label_1b5328:
    if (ctx->pc == 0x1B5328u) {
        ctx->pc = 0x1B5328u;
            // 0x1b5328: 0x24a57ee0  addiu       $a1, $a1, 0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32480));
        ctx->pc = 0x1B532Cu;
        goto label_1b532c;
    }
    ctx->pc = 0x1B5324u;
    SET_GPR_U32(ctx, 31, 0x1B532Cu);
    ctx->pc = 0x1B5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5324u;
            // 0x1b5328: 0x24a57ee0  addiu       $a1, $a1, 0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (runtime->hasFunction(0x1AE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B532Cu; }
        if (ctx->pc != 0x1B532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE8A0_0x1ae8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B532Cu; }
        if (ctx->pc != 0x1B532Cu) { return; }
    }
    ctx->pc = 0x1B532Cu;
label_1b532c:
    // 0x1b532c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1b5330:
    if (ctx->pc == 0x1B5330u) {
        ctx->pc = 0x1B5330u;
            // 0x1b5330: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B5334u;
        goto label_1b5334;
    }
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B532Cu;
            // 0x1b5330: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B5524u;
            goto label_1b5524;
        }
    }
    ctx->pc = 0x1B5334u;
label_1b5334:
    // 0x1b5334: 0x0  nop
    ctx->pc = 0x1b5334u;
    // NOP
label_1b5338:
    // 0x1b5338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b533c:
    // 0x1b533c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b533cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b5340:
    // 0x1b5340: 0xc07337e  jal         func_1CCDF8
label_1b5344:
    if (ctx->pc == 0x1B5344u) {
        ctx->pc = 0x1B5344u;
            // 0x1b5344: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5348u;
        goto label_1b5348;
    }
    ctx->pc = 0x1B5340u;
    SET_GPR_U32(ctx, 31, 0x1B5348u);
    ctx->pc = 0x1B5344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5340u;
            // 0x1b5344: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5348u; }
        if (ctx->pc != 0x1B5348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5348u; }
        if (ctx->pc != 0x1B5348u) { return; }
    }
    ctx->pc = 0x1B5348u;
label_1b5348:
    // 0x1b5348: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b534c:
    // 0x1b534c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b534cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b5350:
    // 0x1b5350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5354:
    // 0x1b5354: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b5358:
    // 0x1b5358: 0x40f809  jalr        $v0
label_1b535c:
    if (ctx->pc == 0x1B535Cu) {
        ctx->pc = 0x1B535Cu;
            // 0x1b535c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5360u;
        goto label_1b5360;
    }
    ctx->pc = 0x1B5358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5360u);
        ctx->pc = 0x1B535Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5358u;
            // 0x1b535c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5360u; }
            if (ctx->pc != 0x1B5360u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5360u;
label_1b5360:
    // 0x1b5360: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b5360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5364:
    // 0x1b5364: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1b5364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1b5368:
    // 0x1b5368: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1b536c:
    if (ctx->pc == 0x1B536Cu) {
        ctx->pc = 0x1B536Cu;
            // 0x1b536c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B5370u;
        goto label_1b5370;
    }
    ctx->pc = 0x1B5368u;
    {
        const bool branch_taken_0x1b5368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5368) {
            ctx->pc = 0x1B536Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5368u;
            // 0x1b536c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5398u;
            goto label_1b5398;
        }
    }
    ctx->pc = 0x1B5370u;
label_1b5370:
    // 0x1b5370: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b5370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5374:
    // 0x1b5374: 0xc06ade4  jal         func_1AB790
label_1b5378:
    if (ctx->pc == 0x1B5378u) {
        ctx->pc = 0x1B5378u;
            // 0x1b5378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B537Cu;
        goto label_1b537c;
    }
    ctx->pc = 0x1B5374u;
    SET_GPR_U32(ctx, 31, 0x1B537Cu);
    ctx->pc = 0x1B5378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5374u;
            // 0x1b5378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB790u;
    if (runtime->hasFunction(0x1AB790u)) {
        auto targetFn = runtime->lookupFunction(0x1AB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B537Cu; }
        if (ctx->pc != 0x1B537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B537Cu; }
        if (ctx->pc != 0x1B537Cu) { return; }
    }
    ctx->pc = 0x1B537Cu;
label_1b537c:
    // 0x1b537c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b537cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5380:
    // 0x1b5380: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b5384:
    if (ctx->pc == 0x1B5384u) {
        ctx->pc = 0x1B5384u;
            // 0x1b5384: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1B5388u;
        goto label_1b5388;
    }
    ctx->pc = 0x1B5380u;
    {
        const bool branch_taken_0x1b5380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5380u;
            // 0x1b5384: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5380) {
            ctx->pc = 0x1B5394u;
            goto label_1b5394;
        }
    }
    ctx->pc = 0x1B5388u;
label_1b5388:
    // 0x1b5388: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1b5388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b538c:
    // 0x1b538c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b5390:
    if (ctx->pc == 0x1B5390u) {
        ctx->pc = 0x1B5394u;
        goto label_1b5394;
    }
    ctx->pc = 0x1B538Cu;
    {
        const bool branch_taken_0x1b538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b538c) {
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B5394u;
label_1b5394:
    // 0x1b5394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5398:
    // 0x1b5398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b539c:
    // 0x1b539c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b53a0:
    // 0x1b53a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b53a4:
    // 0x1b53a4: 0x40f809  jalr        $v0
label_1b53a8:
    if (ctx->pc == 0x1B53A8u) {
        ctx->pc = 0x1B53A8u;
            // 0x1b53a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53ACu;
        goto label_1b53ac;
    }
    ctx->pc = 0x1B53A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B53ACu);
        ctx->pc = 0x1B53A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53A4u;
            // 0x1b53a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B53ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B53ACu; }
            if (ctx->pc != 0x1B53ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B53ACu;
label_1b53ac:
    // 0x1b53ac: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1b53b0:
    if (ctx->pc == 0x1B53B0u) {
        ctx->pc = 0x1B53B0u;
            // 0x1b53b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B53B4u;
        goto label_1b53b4;
    }
    ctx->pc = 0x1B53ACu;
    {
        const bool branch_taken_0x1b53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53ACu;
            // 0x1b53b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53ac) {
            ctx->pc = 0x1B552Cu;
            goto label_1b552c;
        }
    }
    ctx->pc = 0x1B53B4u;
label_1b53b4:
    // 0x1b53b4: 0x0  nop
    ctx->pc = 0x1b53b4u;
    // NOP
label_1b53b8:
    // 0x1b53b8: 0x623001b  bgezl       $s1, . + 4 + (0x1B << 2)
label_1b53bc:
    if (ctx->pc == 0x1B53BCu) {
        ctx->pc = 0x1B53BCu;
            // 0x1b53bc: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->pc = 0x1B53C0u;
        goto label_1b53c0;
    }
    ctx->pc = 0x1B53B8u;
    {
        const bool branch_taken_0x1b53b8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b53b8) {
            ctx->pc = 0x1B53BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53B8u;
            // 0x1b53bc: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5428u;
            goto label_1b5428;
        }
    }
    ctx->pc = 0x1B53C0u;
label_1b53c0:
    // 0x1b53c0: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
label_1b53c4:
    // 0x1b53c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b53c8:
    if (ctx->pc == 0x1B53C8u) {
        ctx->pc = 0x1B53C8u;
            // 0x1b53c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53CCu;
        goto label_1b53cc;
    }
    ctx->pc = 0x1B53C4u;
    {
        const bool branch_taken_0x1b53c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53C4u;
            // 0x1b53c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53c4) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B53CCu;
label_1b53cc:
    // 0x1b53cc: 0xc06adbc  jal         func_1AB6F0
label_1b53d0:
    if (ctx->pc == 0x1B53D0u) {
        ctx->pc = 0x1B53D0u;
            // 0x1b53d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53D4u;
        goto label_1b53d4;
    }
    ctx->pc = 0x1B53CCu;
    SET_GPR_U32(ctx, 31, 0x1B53D4u);
    ctx->pc = 0x1B53D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53CCu;
            // 0x1b53d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6F0u;
    if (runtime->hasFunction(0x1AB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53D4u; }
        if (ctx->pc != 0x1B53D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB6F0_0x1ab6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53D4u; }
        if (ctx->pc != 0x1B53D4u) { return; }
    }
    ctx->pc = 0x1B53D4u;
label_1b53d4:
    // 0x1b53d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b53d8:
    if (ctx->pc == 0x1B53D8u) {
        ctx->pc = 0x1B53D8u;
            // 0x1b53d8: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->pc = 0x1B53DCu;
        goto label_1b53dc;
    }
    ctx->pc = 0x1B53D4u;
    {
        const bool branch_taken_0x1b53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53D4u;
            // 0x1b53d8: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53d4) {
            ctx->pc = 0x1B5428u;
            goto label_1b5428;
        }
    }
    ctx->pc = 0x1B53DCu;
label_1b53dc:
    // 0x1b53dc: 0x0  nop
    ctx->pc = 0x1b53dcu;
    // NOP
label_1b53e0:
    // 0x1b53e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b53e4:
    // 0x1b53e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b53e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b53e8:
    // 0x1b53e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b53ec:
    // 0x1b53ec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b53f0:
    // 0x1b53f0: 0x40f809  jalr        $v0
label_1b53f4:
    if (ctx->pc == 0x1B53F4u) {
        ctx->pc = 0x1B53F4u;
            // 0x1b53f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B53F8u;
        goto label_1b53f8;
    }
    ctx->pc = 0x1B53F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B53F8u);
        ctx->pc = 0x1B53F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53F0u;
            // 0x1b53f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B53F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B53F8u; }
            if (ctx->pc != 0x1B53F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0xc06ac60  jal         func_1AB180
label_1b53fc:
    if (ctx->pc == 0x1B53FCu) {
        ctx->pc = 0x1B5400u;
        goto label_1b5400;
    }
    ctx->pc = 0x1B53F8u;
    SET_GPR_U32(ctx, 31, 0x1B5400u);
    ctx->pc = 0x1AB180u;
    if (runtime->hasFunction(0x1AB180u)) {
        auto targetFn = runtime->lookupFunction(0x1AB180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5400u; }
        if (ctx->pc != 0x1B5400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB180_0x1ab180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5400u; }
        if (ctx->pc != 0x1B5400u) { return; }
    }
    ctx->pc = 0x1B5400u;
label_1b5400:
    // 0x1b5400: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_1b5404:
    if (ctx->pc == 0x1B5404u) {
        ctx->pc = 0x1B5404u;
            // 0x1b5404: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B5408u;
        goto label_1b5408;
    }
    ctx->pc = 0x1B5400u;
    {
        const bool branch_taken_0x1b5400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5400) {
            ctx->pc = 0x1B5404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5400u;
            // 0x1b5404: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5524u;
            goto label_1b5524;
        }
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b5408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b540c:
    // 0x1b540c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b540cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1b5410:
    // 0x1b5410: 0x24847f00  addiu       $a0, $a0, 0x7F00
    ctx->pc = 0x1b5410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32512));
label_1b5414:
    // 0x1b5414: 0xc06ba28  jal         func_1AE8A0
label_1b5418:
    if (ctx->pc == 0x1B5418u) {
        ctx->pc = 0x1B5418u;
            // 0x1b5418: 0x24a57f20  addiu       $a1, $a1, 0x7F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
        ctx->pc = 0x1B541Cu;
        goto label_1b541c;
    }
    ctx->pc = 0x1B5414u;
    SET_GPR_U32(ctx, 31, 0x1B541Cu);
    ctx->pc = 0x1B5418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5414u;
            // 0x1b5418: 0x24a57f20  addiu       $a1, $a1, 0x7F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (runtime->hasFunction(0x1AE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B541Cu; }
        if (ctx->pc != 0x1B541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE8A0_0x1ae8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B541Cu; }
        if (ctx->pc != 0x1B541Cu) { return; }
    }
    ctx->pc = 0x1B541Cu;
label_1b541c:
    // 0x1b541c: 0x10000041  b           . + 4 + (0x41 << 2)
label_1b5420:
    if (ctx->pc == 0x1B5420u) {
        ctx->pc = 0x1B5420u;
            // 0x1b5420: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B5424u;
        goto label_1b5424;
    }
    ctx->pc = 0x1B541Cu;
    {
        const bool branch_taken_0x1b541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B541Cu;
            // 0x1b5420: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b541c) {
            ctx->pc = 0x1B5524u;
            goto label_1b5524;
        }
    }
    ctx->pc = 0x1B5424u;
label_1b5424:
    // 0x1b5424: 0x0  nop
    ctx->pc = 0x1b5424u;
    // NOP
label_1b5428:
    // 0x1b5428: 0xc06ae4c  jal         func_1AB930
label_1b542c:
    if (ctx->pc == 0x1B542Cu) {
        ctx->pc = 0x1B542Cu;
            // 0x1b542c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5430u;
        goto label_1b5430;
    }
    ctx->pc = 0x1B5428u;
    SET_GPR_U32(ctx, 31, 0x1B5430u);
    ctx->pc = 0x1B542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5428u;
            // 0x1b542c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    }
    ctx->pc = 0x1B5430u;
label_1b5430:
    // 0x1b5430: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b5430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b5434:
    // 0x1b5434: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1b5438:
    if (ctx->pc == 0x1B5438u) {
        ctx->pc = 0x1B5438u;
            // 0x1b5438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B543Cu;
        goto label_1b543c;
    }
    ctx->pc = 0x1B5434u;
    {
        const bool branch_taken_0x1b5434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5434u;
            // 0x1b5438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5434) {
            ctx->pc = 0x1B5440u;
            goto label_1b5440;
        }
    }
    ctx->pc = 0x1B543Cu;
label_1b543c:
    // 0x1b543c: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x1b543cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b5440:
    // 0x1b5440: 0xc06ae4c  jal         func_1AB930
label_1b5444:
    if (ctx->pc == 0x1B5444u) {
        ctx->pc = 0x1B5444u;
            // 0x1b5444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5448u;
        goto label_1b5448;
    }
    ctx->pc = 0x1B5440u;
    SET_GPR_U32(ctx, 31, 0x1B5448u);
    ctx->pc = 0x1B5444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5440u;
            // 0x1b5444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5448u; }
        if (ctx->pc != 0x1B5448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5448u; }
        if (ctx->pc != 0x1B5448u) { return; }
    }
    ctx->pc = 0x1B5448u;
label_1b5448:
    // 0x1b5448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b544c:
    // 0x1b544c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1b5450:
    if (ctx->pc == 0x1B5450u) {
        ctx->pc = 0x1B5450u;
            // 0x1b5450: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1B5454u;
        goto label_1b5454;
    }
    ctx->pc = 0x1B544Cu;
    {
        const bool branch_taken_0x1b544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B544Cu;
            // 0x1b5450: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b544c) {
            ctx->pc = 0x1B546Cu;
            goto label_1b546c;
        }
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5458:
    // 0x1b5458: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b5458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b545c:
    // 0x1b545c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1b545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_1b5460:
    // 0x1b5460: 0x28c20041  slti        $v0, $a2, 0x41
    ctx->pc = 0x1b5460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
label_1b5464:
    // 0x1b5464: 0xc049c48  jal         func_127120
label_1b5468:
    if (ctx->pc == 0x1B5468u) {
        ctx->pc = 0x1B5468u;
            // 0x1b5468: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->pc = 0x1B546Cu;
        goto label_1b546c;
    }
    ctx->pc = 0x1B5464u;
    SET_GPR_U32(ctx, 31, 0x1B546Cu);
    ctx->pc = 0x1B5468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5464u;
            // 0x1b5468: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B546Cu; }
        if (ctx->pc != 0x1B546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B546Cu; }
        if (ctx->pc != 0x1B546Cu) { return; }
    }
    ctx->pc = 0x1B546Cu;
label_1b546c:
    // 0x1b546c: 0xc06ae4c  jal         func_1AB930
label_1b5470:
    if (ctx->pc == 0x1B5470u) {
        ctx->pc = 0x1B5470u;
            // 0x1b5470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5474u;
        goto label_1b5474;
    }
    ctx->pc = 0x1B546Cu;
    SET_GPR_U32(ctx, 31, 0x1B5474u);
    ctx->pc = 0x1B5470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B546Cu;
            // 0x1b5470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5474u; }
        if (ctx->pc != 0x1B5474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB930_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5474u; }
        if (ctx->pc != 0x1B5474u) { return; }
    }
    ctx->pc = 0x1B5474u;
label_1b5474:
    // 0x1b5474: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5478:
    // 0x1b5478: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1b547c:
    // 0x1b547c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b547cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1b5480:
    // 0x1b5480: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b5484:
    if (ctx->pc == 0x1B5484u) {
        ctx->pc = 0x1B5484u;
            // 0x1b5484: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B5488u;
        goto label_1b5488;
    }
    ctx->pc = 0x1B5480u;
    {
        const bool branch_taken_0x1b5480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5480) {
            ctx->pc = 0x1B5484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5480u;
            // 0x1b5484: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B54A0u;
            goto label_1b54a0;
        }
    }
    ctx->pc = 0x1B5488u;
label_1b5488:
    // 0x1b5488: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b548c:
    // 0x1b548c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b5490:
    if (ctx->pc == 0x1B5490u) {
        ctx->pc = 0x1B5490u;
            // 0x1b5490: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1B5494u;
        goto label_1b5494;
    }
    ctx->pc = 0x1B548Cu;
    {
        const bool branch_taken_0x1b548c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B548Cu;
            // 0x1b5490: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b548c) {
            ctx->pc = 0x1B549Cu;
            goto label_1b549c;
        }
    }
    ctx->pc = 0x1B5494u;
label_1b5494:
    // 0x1b5494: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1b5498:
    if (ctx->pc == 0x1B5498u) {
        ctx->pc = 0x1B5498u;
            // 0x1b5498: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B549Cu;
        goto label_1b549c;
    }
    ctx->pc = 0x1B5494u;
    {
        const bool branch_taken_0x1b5494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5494u;
            // 0x1b5498: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5494) {
            ctx->pc = 0x1B54C0u;
            goto label_1b54c0;
        }
    }
    ctx->pc = 0x1B549Cu;
label_1b549c:
    // 0x1b549c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b54a0:
    // 0x1b54a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b54a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b54a4:
    // 0x1b54a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b54a8:
    // 0x1b54a8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b54ac:
    // 0x1b54ac: 0x40f809  jalr        $v0
label_1b54b0:
    if (ctx->pc == 0x1B54B0u) {
        ctx->pc = 0x1B54B0u;
            // 0x1b54b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B54B4u;
        goto label_1b54b4;
    }
    ctx->pc = 0x1B54ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B54B4u);
        ctx->pc = 0x1B54B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54ACu;
            // 0x1b54b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B54B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B54B4u; }
            if (ctx->pc != 0x1B54B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B54B4u;
label_1b54b4:
    // 0x1b54b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b54b8:
    if (ctx->pc == 0x1B54B8u) {
        ctx->pc = 0x1B54B8u;
            // 0x1b54b8: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->pc = 0x1B54BCu;
        goto label_1b54bc;
    }
    ctx->pc = 0x1B54B4u;
    {
        const bool branch_taken_0x1b54b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54B4u;
            // 0x1b54b8: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54b4) {
            ctx->pc = 0x1B5504u;
            goto label_1b5504;
        }
    }
    ctx->pc = 0x1B54BCu;
label_1b54bc:
    // 0x1b54bc: 0x0  nop
    ctx->pc = 0x1b54bcu;
    // NOP
label_1b54c0:
    // 0x1b54c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b54c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b54c4:
    // 0x1b54c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b54c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b54c8:
    // 0x1b54c8: 0xc07337e  jal         func_1CCDF8
label_1b54cc:
    if (ctx->pc == 0x1B54CCu) {
        ctx->pc = 0x1B54CCu;
            // 0x1b54cc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B54D0u;
        goto label_1b54d0;
    }
    ctx->pc = 0x1B54C8u;
    SET_GPR_U32(ctx, 31, 0x1B54D0u);
    ctx->pc = 0x1B54CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54C8u;
            // 0x1b54cc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54D0u; }
        if (ctx->pc != 0x1B54D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54D0u; }
        if (ctx->pc != 0x1B54D0u) { return; }
    }
    ctx->pc = 0x1B54D0u;
label_1b54d0:
    // 0x1b54d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b54d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b54d4:
    // 0x1b54d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b54d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b54d8:
    // 0x1b54d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b54dc:
    // 0x1b54dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b54e0:
    // 0x1b54e0: 0x40f809  jalr        $v0
label_1b54e4:
    if (ctx->pc == 0x1B54E4u) {
        ctx->pc = 0x1B54E4u;
            // 0x1b54e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B54E8u;
        goto label_1b54e8;
    }
    ctx->pc = 0x1B54E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B54E8u);
        ctx->pc = 0x1B54E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54E0u;
            // 0x1b54e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B54E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B54E8u; }
            if (ctx->pc != 0x1B54E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B54E8u;
label_1b54e8:
    // 0x1b54e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b54ec:
    // 0x1b54ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b54f0:
    // 0x1b54f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b54f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b54f4:
    // 0x1b54f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b54f8:
    // 0x1b54f8: 0x40f809  jalr        $v0
label_1b54fc:
    if (ctx->pc == 0x1B54FCu) {
        ctx->pc = 0x1B54FCu;
            // 0x1b54fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B5500u;
        goto label_1b5500;
    }
    ctx->pc = 0x1B54F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5500u);
        ctx->pc = 0x1B54FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54F8u;
            // 0x1b54fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5500u; }
            if (ctx->pc != 0x1B5500u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5500u;
label_1b5500:
    // 0x1b5500: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_1b5504:
    // 0x1b5504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b5508:
    if (ctx->pc == 0x1B5508u) {
        ctx->pc = 0x1B5508u;
            // 0x1b5508: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x1B550Cu;
        goto label_1b550c;
    }
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5504u;
            // 0x1b5508: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B5520u;
            goto label_1b5520;
        }
    }
    ctx->pc = 0x1B550Cu;
label_1b550c:
    // 0x1b550c: 0x8c42a944  lw          $v0, -0x56BC($v0)
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945092)));
label_1b5510:
    // 0x1b5510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b5514:
    if (ctx->pc == 0x1B5514u) {
        ctx->pc = 0x1B5514u;
            // 0x1b5514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5518u;
        goto label_1b5518;
    }
    ctx->pc = 0x1B5510u;
    {
        const bool branch_taken_0x1b5510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5510u;
            // 0x1b5514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5510) {
            ctx->pc = 0x1B5520u;
            goto label_1b5520;
        }
    }
    ctx->pc = 0x1B5518u;
label_1b5518:
    // 0x1b5518: 0x40f809  jalr        $v0
label_1b551c:
    if (ctx->pc == 0x1B551Cu) {
        ctx->pc = 0x1B551Cu;
            // 0x1b551c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x1B5520u;
        goto label_1b5520;
    }
    ctx->pc = 0x1B5518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5520u);
        ctx->pc = 0x1B551Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5518u;
            // 0x1b551c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5520u; }
            if (ctx->pc != 0x1B5520u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5520u;
label_1b5520:
    // 0x1b5520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5524:
    // 0x1b5524: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1b5524u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b5528:
    // 0x1b5528: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b552c:
    // 0x1b552c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5530:
    // 0x1b5530: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b5530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5534:
    // 0x1b5534: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5538:
    // 0x1b5538: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b5538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b553c:
    // 0x1b553c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b5540:
    // 0x1b5540: 0x3e00008  jr          $ra
label_1b5544:
    if (ctx->pc == 0x1B5544u) {
        ctx->pc = 0x1B5544u;
            // 0x1b5544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B5548u;
        goto label_1b5548;
    }
    ctx->pc = 0x1B5540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5540u;
            // 0x1b5544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5548u;
label_1b5548:
    // 0x1b5548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b554c:
    // 0x1b554c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b5550:
    // 0x1b5550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b5554:
    // 0x1b5554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b5558:
    // 0x1b5558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b555c:
    // 0x1b555c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b5560:
    // 0x1b5560: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b5560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5564:
    // 0x1b5564: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1b5568:
    // 0x1b5568: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1b5568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b556c:
    // 0x1b556c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1b5570:
    // 0x1b5570: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b5570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5574:
    // 0x1b5574: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1b5578:
    // 0x1b5578: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b5578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b557c:
    // 0x1b557c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1b5580:
    // 0x1b5580: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1b5580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1b5584:
    // 0x1b5584: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b5588:
    // 0x1b5588: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1b5588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b558c:
    // 0x1b558c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b5590:
    if (ctx->pc == 0x1B5590u) {
        ctx->pc = 0x1B5590u;
            // 0x1b5590: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x1B5594u;
        goto label_1b5594;
    }
    ctx->pc = 0x1B558Cu;
    {
        const bool branch_taken_0x1b558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B558Cu;
            // 0x1b5590: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b558c) {
            ctx->pc = 0x1B55B0u;
            goto label_1b55b0;
        }
    }
    ctx->pc = 0x1B5594u;
label_1b5594:
    // 0x1b5594: 0x0  nop
    ctx->pc = 0x1b5594u;
    // NOP
label_1b5598:
    // 0x1b5598: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b559c:
    // 0x1b559c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b559cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b55a0:
    // 0x1b55a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b55a4:
    // 0x1b55a4: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x1b55a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b55a8:
    // 0x1b55a8: 0x100f809  jalr        $t0
label_1b55ac:
    if (ctx->pc == 0x1B55ACu) {
        ctx->pc = 0x1B55ACu;
            // 0x1b55ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B55B0u;
        goto label_1b55b0;
    }
    ctx->pc = 0x1B55A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1B55B0u);
        ctx->pc = 0x1B55ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55A8u;
            // 0x1b55ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B55B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B55B0u; }
            if (ctx->pc != 0x1B55B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B55B0u;
label_1b55b0:
    // 0x1b55b0: 0xc06ae50  jal         func_1AB940
label_1b55b4:
    if (ctx->pc == 0x1B55B4u) {
        ctx->pc = 0x1B55B4u;
            // 0x1b55b4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1B55B8u;
        goto label_1b55b8;
    }
    ctx->pc = 0x1B55B0u;
    SET_GPR_U32(ctx, 31, 0x1B55B8u);
    ctx->pc = 0x1B55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55B0u;
            // 0x1b55b4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB940u;
    if (runtime->hasFunction(0x1AB940u)) {
        auto targetFn = runtime->lookupFunction(0x1AB940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55B8u; }
        if (ctx->pc != 0x1B55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB940_0x1ab940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55B8u; }
        if (ctx->pc != 0x1B55B8u) { return; }
    }
    ctx->pc = 0x1B55B8u;
label_1b55b8:
    // 0x1b55b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b55b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b55bc:
    // 0x1b55bc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b55bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b55c0:
    // 0x1b55c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b55c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b55c4:
    // 0x1b55c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b55c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b55c8:
    // 0x1b55c8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1b55cc:
    // 0x1b55cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1b55d0:
    if (ctx->pc == 0x1B55D0u) {
        ctx->pc = 0x1B55D0u;
            // 0x1b55d0: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x1B55D4u;
        goto label_1b55d4;
    }
    ctx->pc = 0x1B55CCu;
    {
        const bool branch_taken_0x1b55cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B55D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55CCu;
            // 0x1b55d0: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55cc) {
            ctx->pc = 0x1B5598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5598;
        }
    }
    ctx->pc = 0x1B55D4u;
label_1b55d4:
    // 0x1b55d4: 0xc072fec  jal         func_1CBFB0
label_1b55d8:
    if (ctx->pc == 0x1B55D8u) {
        ctx->pc = 0x1B55D8u;
            // 0x1b55d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B55DCu;
        goto label_1b55dc;
    }
    ctx->pc = 0x1B55D4u;
    SET_GPR_U32(ctx, 31, 0x1B55DCu);
    ctx->pc = 0x1B55D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55D4u;
            // 0x1b55d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (runtime->hasFunction(0x1CBFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55DCu; }
        if (ctx->pc != 0x1B55DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBFB0_0x1cbfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55DCu; }
        if (ctx->pc != 0x1B55DCu) { return; }
    }
    ctx->pc = 0x1B55DCu;
label_1b55dc:
    // 0x1b55dc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1b55e0:
    // 0x1b55e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b55e4:
    // 0x1b55e4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b55e8:
    // 0x1b55e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b55e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b55ec:
    // 0x1b55ec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1b55ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1b55f0:
    // 0x1b55f0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1b55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1b55f4:
    // 0x1b55f4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1b55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1b55f8:
    // 0x1b55f8: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x1b55f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1b55fc:
    // 0x1b55fc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1b55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1b5600:
    // 0x1b5600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5604:
    // 0x1b5604: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1b5608:
    // 0x1b5608: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1b5608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b560c:
    // 0x1b560c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1b560cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1b5610:
    // 0x1b5610: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x1b5610u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_1b5614:
    // 0x1b5614: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b5618:
    // 0x1b5618: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_1b561c:
    if (ctx->pc == 0x1B561Cu) {
        ctx->pc = 0x1B561Cu;
            // 0x1b561c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->pc = 0x1B5620u;
        goto label_1b5620;
    }
    ctx->pc = 0x1B5618u;
    {
        const bool branch_taken_0x1b5618 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b5618) {
            ctx->pc = 0x1B561Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5618u;
            // 0x1b561c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5630u;
            goto label_1b5630;
        }
    }
    ctx->pc = 0x1B5620u;
label_1b5620:
    // 0x1b5620: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1b5624:
    // 0x1b5624: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b5628:
    if (ctx->pc == 0x1B5628u) {
        ctx->pc = 0x1B5628u;
            // 0x1b5628: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B562Cu;
        goto label_1b562c;
    }
    ctx->pc = 0x1B5624u;
    {
        const bool branch_taken_0x1b5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5624u;
            // 0x1b5628: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5624) {
            ctx->pc = 0x1B5634u;
            goto label_1b5634;
        }
    }
    ctx->pc = 0x1B562Cu;
label_1b562c:
    // 0x1b562c: 0x0  nop
    ctx->pc = 0x1b562cu;
    // NOP
label_1b5630:
    // 0x1b5630: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5634:
    // 0x1b5634: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1b5634u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1b5638:
    // 0x1b5638: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1b5638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b563c:
    // 0x1b563c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b563cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5640:
    // 0x1b5640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b5644:
    // 0x1b5644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5648:
    // 0x1b5648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b564c:
    // 0x1b564c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b564cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5650:
    // 0x1b5650: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b5650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5654:
    // 0x1b5654: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b5654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5658:
    // 0x1b5658: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b5658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b565c:
    // 0x1b565c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5660:
    // 0x1b5660: 0x806ae4a  j           func_1AB928
label_1b5664:
    if (ctx->pc == 0x1B5664u) {
        ctx->pc = 0x1B5664u;
            // 0x1b5664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B5668u;
        goto label_fallthrough_0x1b5660;
    }
    ctx->pc = 0x1B5660u;
    ctx->pc = 0x1B5664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5660u;
            // 0x1b5664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB928u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x1b5660:
    ctx->pc = 0x1B5668u;
    ctx->pc = 0x1b5668u;
}
