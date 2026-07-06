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

// Function: sub_002B5410
// Address: 0x2b5410 - 0x2b55f0
void sub_002B5410_0x2b5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5410_0x2b5410");
#endif

    switch (ctx->pc) {
        case 0x2b5410u: goto label_2b5410;
        case 0x2b5414u: goto label_2b5414;
        case 0x2b5418u: goto label_2b5418;
        case 0x2b541cu: goto label_2b541c;
        case 0x2b5420u: goto label_2b5420;
        case 0x2b5424u: goto label_2b5424;
        case 0x2b5428u: goto label_2b5428;
        case 0x2b542cu: goto label_2b542c;
        case 0x2b5430u: goto label_2b5430;
        case 0x2b5434u: goto label_2b5434;
        case 0x2b5438u: goto label_2b5438;
        case 0x2b543cu: goto label_2b543c;
        case 0x2b5440u: goto label_2b5440;
        case 0x2b5444u: goto label_2b5444;
        case 0x2b5448u: goto label_2b5448;
        case 0x2b544cu: goto label_2b544c;
        case 0x2b5450u: goto label_2b5450;
        case 0x2b5454u: goto label_2b5454;
        case 0x2b5458u: goto label_2b5458;
        case 0x2b545cu: goto label_2b545c;
        case 0x2b5460u: goto label_2b5460;
        case 0x2b5464u: goto label_2b5464;
        case 0x2b5468u: goto label_2b5468;
        case 0x2b546cu: goto label_2b546c;
        case 0x2b5470u: goto label_2b5470;
        case 0x2b5474u: goto label_2b5474;
        case 0x2b5478u: goto label_2b5478;
        case 0x2b547cu: goto label_2b547c;
        case 0x2b5480u: goto label_2b5480;
        case 0x2b5484u: goto label_2b5484;
        case 0x2b5488u: goto label_2b5488;
        case 0x2b548cu: goto label_2b548c;
        case 0x2b5490u: goto label_2b5490;
        case 0x2b5494u: goto label_2b5494;
        case 0x2b5498u: goto label_2b5498;
        case 0x2b549cu: goto label_2b549c;
        case 0x2b54a0u: goto label_2b54a0;
        case 0x2b54a4u: goto label_2b54a4;
        case 0x2b54a8u: goto label_2b54a8;
        case 0x2b54acu: goto label_2b54ac;
        case 0x2b54b0u: goto label_2b54b0;
        case 0x2b54b4u: goto label_2b54b4;
        case 0x2b54b8u: goto label_2b54b8;
        case 0x2b54bcu: goto label_2b54bc;
        case 0x2b54c0u: goto label_2b54c0;
        case 0x2b54c4u: goto label_2b54c4;
        case 0x2b54c8u: goto label_2b54c8;
        case 0x2b54ccu: goto label_2b54cc;
        case 0x2b54d0u: goto label_2b54d0;
        case 0x2b54d4u: goto label_2b54d4;
        case 0x2b54d8u: goto label_2b54d8;
        case 0x2b54dcu: goto label_2b54dc;
        case 0x2b54e0u: goto label_2b54e0;
        case 0x2b54e4u: goto label_2b54e4;
        case 0x2b54e8u: goto label_2b54e8;
        case 0x2b54ecu: goto label_2b54ec;
        case 0x2b54f0u: goto label_2b54f0;
        case 0x2b54f4u: goto label_2b54f4;
        case 0x2b54f8u: goto label_2b54f8;
        case 0x2b54fcu: goto label_2b54fc;
        case 0x2b5500u: goto label_2b5500;
        case 0x2b5504u: goto label_2b5504;
        case 0x2b5508u: goto label_2b5508;
        case 0x2b550cu: goto label_2b550c;
        case 0x2b5510u: goto label_2b5510;
        case 0x2b5514u: goto label_2b5514;
        case 0x2b5518u: goto label_2b5518;
        case 0x2b551cu: goto label_2b551c;
        case 0x2b5520u: goto label_2b5520;
        case 0x2b5524u: goto label_2b5524;
        case 0x2b5528u: goto label_2b5528;
        case 0x2b552cu: goto label_2b552c;
        case 0x2b5530u: goto label_2b5530;
        case 0x2b5534u: goto label_2b5534;
        case 0x2b5538u: goto label_2b5538;
        case 0x2b553cu: goto label_2b553c;
        case 0x2b5540u: goto label_2b5540;
        case 0x2b5544u: goto label_2b5544;
        case 0x2b5548u: goto label_2b5548;
        case 0x2b554cu: goto label_2b554c;
        case 0x2b5550u: goto label_2b5550;
        case 0x2b5554u: goto label_2b5554;
        case 0x2b5558u: goto label_2b5558;
        case 0x2b555cu: goto label_2b555c;
        case 0x2b5560u: goto label_2b5560;
        case 0x2b5564u: goto label_2b5564;
        case 0x2b5568u: goto label_2b5568;
        case 0x2b556cu: goto label_2b556c;
        case 0x2b5570u: goto label_2b5570;
        case 0x2b5574u: goto label_2b5574;
        case 0x2b5578u: goto label_2b5578;
        case 0x2b557cu: goto label_2b557c;
        case 0x2b5580u: goto label_2b5580;
        case 0x2b5584u: goto label_2b5584;
        case 0x2b5588u: goto label_2b5588;
        case 0x2b558cu: goto label_2b558c;
        case 0x2b5590u: goto label_2b5590;
        case 0x2b5594u: goto label_2b5594;
        case 0x2b5598u: goto label_2b5598;
        case 0x2b559cu: goto label_2b559c;
        case 0x2b55a0u: goto label_2b55a0;
        case 0x2b55a4u: goto label_2b55a4;
        case 0x2b55a8u: goto label_2b55a8;
        case 0x2b55acu: goto label_2b55ac;
        case 0x2b55b0u: goto label_2b55b0;
        case 0x2b55b4u: goto label_2b55b4;
        case 0x2b55b8u: goto label_2b55b8;
        case 0x2b55bcu: goto label_2b55bc;
        case 0x2b55c0u: goto label_2b55c0;
        case 0x2b55c4u: goto label_2b55c4;
        case 0x2b55c8u: goto label_2b55c8;
        case 0x2b55ccu: goto label_2b55cc;
        case 0x2b55d0u: goto label_2b55d0;
        case 0x2b55d4u: goto label_2b55d4;
        case 0x2b55d8u: goto label_2b55d8;
        case 0x2b55dcu: goto label_2b55dc;
        case 0x2b55e0u: goto label_2b55e0;
        case 0x2b55e4u: goto label_2b55e4;
        case 0x2b55e8u: goto label_2b55e8;
        case 0x2b55ecu: goto label_2b55ec;
        default: break;
    }

    ctx->pc = 0x2b5410u;

label_2b5410:
    // 0x2b5410: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b5414:
    // 0x2b5414: 0x24031190  addiu       $v1, $zero, 0x1190
    ctx->pc = 0x2b5414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
label_2b5418:
    // 0x2b5418: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2b5418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2b541c:
    // 0x2b541c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b5420:
    // 0x2b5420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5424:
    // 0x2b5424: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2b5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2b5428:
    // 0x2b5428: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2b5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2b542c:
    // 0x2b542c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2b542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2b5430:
    // 0x2b5430: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2b5430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2b5434:
    // 0x2b5434: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2b5438:
    // 0x2b5438: 0x5443005f  bnel        $v0, $v1, . + 4 + (0x5F << 2)
label_2b543c:
    if (ctx->pc == 0x2B543Cu) {
        ctx->pc = 0x2B543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5438u;
        // 0x2b543c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5440u;
        goto label_2b5440;
    }
    ctx->pc = 0x2B5438u;
    {
        const bool branch_taken_0x2b5438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5438) {
            ctx->pc = 0x2B543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5438u;
            // 0x2b543c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B55B8u;
            goto label_2b55b8;
        }
    }
    ctx->pc = 0x2B5440u;
label_2b5440:
    // 0x2b5440: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2b5440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b5444:
    // 0x2b5444: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2b5444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b5448:
    // 0x2b5448: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2b544c:
    // 0x2b544c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2b544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b5450:
    // 0x2b5450: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b5450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b5454:
    // 0x2b5454: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2b5458:
    // 0x2b5458: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b5458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b545c:
    // 0x2b545c: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2b545cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b5460:
    // 0x2b5460: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x2b5460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2b5464:
    // 0x2b5464: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2b5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b5468:
    // 0x2b5468: 0x8d0500fc  lw          $a1, 0xFC($t0)
    ctx->pc = 0x2b5468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 252)));
label_2b546c:
    // 0x2b546c: 0x26140004  addiu       $s4, $s0, 0x4
    ctx->pc = 0x2b546cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b5470:
    // 0x2b5470: 0x40f809  jalr        $v0
label_2b5474:
    if (ctx->pc == 0x2B5474u) {
        ctx->pc = 0x2B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5470u;
        // 0x2b5474: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5478u;
        goto label_2b5478;
    }
    ctx->pc = 0x2B5470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5478u);
        ctx->pc = 0x2B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5470u;
        // 0x2b5474: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5470u, 0x2B5478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5478u;
label_2b5478:
    // 0x2b5478: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2b547c:
    if (ctx->pc == 0x2B547Cu) {
        ctx->pc = 0x2B547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5478u;
        // 0x2b547c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5480u;
        goto label_2b5480;
    }
    ctx->pc = 0x2B5478u;
    {
        const bool branch_taken_0x2b5478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5478u;
        // 0x2b547c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5478) {
            ctx->pc = 0x2B55C8u;
            goto label_2b55c8;
        }
    }
    ctx->pc = 0x2B5480u;
label_2b5480:
    // 0x2b5480: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b5484:
    // 0x2b5484: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_2b5488:
    if (ctx->pc == 0x2B5488u) {
        ctx->pc = 0x2B5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5484u;
        // 0x2b5488: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B548Cu;
        goto label_2b548c;
    }
    ctx->pc = 0x2B5484u;
    {
        const bool branch_taken_0x2b5484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5484u;
        // 0x2b5488: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5484) {
            ctx->pc = 0x2B54F4u;
            goto label_2b54f4;
        }
    }
    ctx->pc = 0x2B548Cu;
label_2b548c:
    // 0x2b548c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b5490:
    // 0x2b5490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5494:
    // 0x2b5494: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b5494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b5498:
    // 0x2b5498: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2b5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2b549c:
    // 0x2b549c: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_2b54a0:
    // 0x2b54a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2b54a4:
    // 0x2b54a4: 0x40f809  jalr        $v0
label_2b54a8:
    if (ctx->pc == 0x2B54A8u) {
        ctx->pc = 0x2B54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54A4u;
        // 0x2b54a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54ACu;
        goto label_2b54ac;
    }
    ctx->pc = 0x2B54A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B54ACu);
        ctx->pc = 0x2B54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54A4u;
        // 0x2b54a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B54A4u, 0x2B54ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B54ACu;
label_2b54ac:
    // 0x2b54ac: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2b54b0:
    if (ctx->pc == 0x2B54B0u) {
        ctx->pc = 0x2B54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54ACu;
        // 0x2b54b0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54B4u;
        goto label_2b54b4;
    }
    ctx->pc = 0x2B54ACu;
    {
        const bool branch_taken_0x2b54ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54ACu;
        // 0x2b54b0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54ac) {
            ctx->pc = 0x2B55C8u;
            goto label_2b55c8;
        }
    }
    ctx->pc = 0x2B54B4u;
label_2b54b4:
    // 0x2b54b4: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x2b54b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2b54b8:
    // 0x2b54b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b54b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b54bc:
    // 0x2b54bc: 0x26060006  addiu       $a2, $s0, 0x6
    ctx->pc = 0x2b54bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_2b54c0:
    // 0x2b54c0: 0xc0aa480  jal         func_2A9200
label_2b54c4:
    if (ctx->pc == 0x2B54C4u) {
        ctx->pc = 0x2B54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54C0u;
        // 0x2b54c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54C8u;
        goto label_2b54c8;
    }
    ctx->pc = 0x2B54C0u;
    SET_GPR_U32(ctx, 31, 0x2B54C8u);
    ctx->pc = 0x2B54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54C0u;
    // 0x2b54c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9200u, 0x2B54C0u, 0x2B54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54C8u;
label_2b54c8:
    // 0x2b54c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b54cc:
    // 0x2b54cc: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
label_2b54d0:
    if (ctx->pc == 0x2B54D0u) {
        ctx->pc = 0x2B54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54CCu;
        // 0x2b54d0: 0x41203  sra         $v0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54D4u;
        goto label_2b54d4;
    }
    ctx->pc = 0x2B54CCu;
    {
        const bool branch_taken_0x2b54cc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54CCu;
        // 0x2b54d0: 0x41203  sra         $v0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54cc) {
            ctx->pc = 0x2B54E4u;
            goto label_2b54e4;
        }
    }
    ctx->pc = 0x2B54D4u;
label_2b54d4:
    // 0x2b54d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b54d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b54d8:
    // 0x2b54d8: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x2b54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2b54dc:
    // 0x2b54dc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b54e0:
    if (ctx->pc == 0x2B54E0u) {
        ctx->pc = 0x2B54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54DCu;
        // 0x2b54e0: 0x24060804  addiu       $a2, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54E4u;
        goto label_2b54e4;
    }
    ctx->pc = 0x2B54DCu;
    {
        const bool branch_taken_0x2b54dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54DCu;
        // 0x2b54e0: 0x24060804  addiu       $a2, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54dc) {
            ctx->pc = 0x2B5554u;
            goto label_2b5554;
        }
    }
    ctx->pc = 0x2B54E4u;
label_2b54e4:
    // 0x2b54e4: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x2b54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2b54e8:
    // 0x2b54e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2b54e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_2b54ec:
    // 0x2b54ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2b54f0:
    if (ctx->pc == 0x2B54F0u) {
        ctx->pc = 0x2B54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54ECu;
        // 0x2b54f0: 0xa2840001  sb          $a0, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54F4u;
        goto label_2b54f4;
    }
    ctx->pc = 0x2B54ECu;
    {
        const bool branch_taken_0x2b54ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54ECu;
        // 0x2b54f0: 0xa2840001  sb          $a0, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54ec) {
            ctx->pc = 0x2B5568u;
            goto label_2b5568;
        }
    }
    ctx->pc = 0x2B54F4u;
label_2b54f4:
    // 0x2b54f4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2b54f8:
    if (ctx->pc == 0x2B54F8u) {
        ctx->pc = 0x2B54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54F4u;
        // 0x2b54f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54FCu;
        goto label_2b54fc;
    }
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54F4u;
        // 0x2b54f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B554Cu;
            goto label_2b554c;
        }
    }
    ctx->pc = 0x2B54FCu;
label_2b54fc:
    // 0x2b54fc: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2b5500:
    // 0x2b5500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b5504:
    // 0x2b5504: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2b5504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5508:
    // 0x2b5508: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2b5508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b550c:
    // 0x2b550c: 0x26070006  addiu       $a3, $s0, 0x6
    ctx->pc = 0x2b550cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_2b5510:
    // 0x2b5510: 0xc0a51ac  jal         func_2946B0
label_2b5514:
    if (ctx->pc == 0x2B5514u) {
        ctx->pc = 0x2B5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5510u;
        // 0x2b5514: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5518u;
        goto label_2b5518;
    }
    ctx->pc = 0x2B5510u;
    SET_GPR_U32(ctx, 31, 0x2B5518u);
    ctx->pc = 0x2B5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5510u;
    // 0x2b5514: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2946B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946B0u, 0x2B5510u, 0x2B5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5518u;
label_2b5518:
    // 0x2b5518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b551c:
    if (ctx->pc == 0x2B551Cu) {
        ctx->pc = 0x2B551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5518u;
        // 0x2b551c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5520u;
        goto label_2b5520;
    }
    ctx->pc = 0x2B5518u;
    {
        const bool branch_taken_0x2b5518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5518u;
        // 0x2b551c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5518) {
            ctx->pc = 0x2B5530u;
            goto label_2b5530;
        }
    }
    ctx->pc = 0x2B5520u;
label_2b5520:
    // 0x2b5520: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5524:
    // 0x2b5524: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x2b5524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2b5528:
    // 0x2b5528: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b552c:
    if (ctx->pc == 0x2B552Cu) {
        ctx->pc = 0x2B552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5528u;
        // 0x2b552c: 0x2406080a  addiu       $a2, $zero, 0x80A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2058));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5530u;
        goto label_2b5530;
    }
    ctx->pc = 0x2B5528u;
    {
        const bool branch_taken_0x2b5528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5528u;
        // 0x2b552c: 0x2406080a  addiu       $a2, $zero, 0x80A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2058));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5528) {
            ctx->pc = 0x2B5554u;
            goto label_2b5554;
        }
    }
    ctx->pc = 0x2B5530u;
label_2b5530:
    // 0x2b5530: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b5530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2b5534:
    // 0x2b5534: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2b5534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_2b5538:
    // 0x2b5538: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x2b5538u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_2b553c:
    // 0x2b553c: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x2b553cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
label_2b5540:
    // 0x2b5540: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b5540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b5544:
    // 0x2b5544: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b5548:
    if (ctx->pc == 0x2B5548u) {
        ctx->pc = 0x2B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5544u;
        // 0x2b5548: 0x24430002  addiu       $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B554Cu;
        goto label_2b554c;
    }
    ctx->pc = 0x2B5544u;
    {
        const bool branch_taken_0x2b5544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5544u;
        // 0x2b5548: 0x24430002  addiu       $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5544) {
            ctx->pc = 0x2B5568u;
            goto label_2b5568;
        }
    }
    ctx->pc = 0x2B554Cu;
label_2b554c:
    // 0x2b554c: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x2b554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2b5550:
    // 0x2b5550: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2b5550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_2b5554:
    // 0x2b5554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5558:
    // 0x2b5558: 0xc0a5648  jal         func_295920
label_2b555c:
    if (ctx->pc == 0x2B555Cu) {
        ctx->pc = 0x2B555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5558u;
        // 0x2b555c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5560u;
        goto label_2b5560;
    }
    ctx->pc = 0x2B5558u;
    SET_GPR_U32(ctx, 31, 0x2B5560u);
    ctx->pc = 0x2B555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5558u;
    // 0x2b555c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5558u, 0x2B5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5560u;
label_2b5560:
    // 0x2b5560: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2b5564:
    if (ctx->pc == 0x2B5564u) {
        ctx->pc = 0x2B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5560u;
        // 0x2b5564: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5568u;
        goto label_2b5568;
    }
    ctx->pc = 0x2B5560u;
    {
        const bool branch_taken_0x2b5560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5560u;
        // 0x2b5564: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5560) {
            ctx->pc = 0x2B55CCu;
            goto label_2b55cc;
        }
    }
    ctx->pc = 0x2B5568u;
label_2b5568:
    // 0x2b5568: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b556c:
    // 0x2b556c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x2b556cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
label_2b5570:
    // 0x2b5570: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2b5570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b5574:
    // 0x2b5574: 0x32a3a  dsrl        $a1, $v1, 8
    ctx->pc = 0x2b5574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 8);
label_2b5578:
    // 0x2b5578: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2b5578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b557c:
    // 0x2b557c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b557cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b5580:
    // 0x2b5580: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2b5580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2b5584:
    // 0x2b5584: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5588:
    // 0x2b5588: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b5588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b558c:
    // 0x2b558c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2b558cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2b5590:
    // 0x2b5590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b5594:
    // 0x2b5594: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b5594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2b5598:
    // 0x2b5598: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b5598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2b559c:
    // 0x2b559c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2b559cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_2b55a0:
    // 0x2b55a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2b55a4:
    // 0x2b55a4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2b55a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b55a8:
    // 0x2b55a8: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x2b55a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
label_2b55ac:
    // 0x2b55ac: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x2b55acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_2b55b0:
    // 0x2b55b0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2b55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2b55b4:
    // 0x2b55b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b55b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b55b8:
    // 0x2b55b8: 0xc0adc0a  jal         func_2B7028
label_2b55bc:
    if (ctx->pc == 0x2B55BCu) {
        ctx->pc = 0x2B55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55B8u;
        // 0x2b55bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55C0u;
        goto label_2b55c0;
    }
    ctx->pc = 0x2B55B8u;
    SET_GPR_U32(ctx, 31, 0x2B55C0u);
    ctx->pc = 0x2B55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55B8u;
    // 0x2b55bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7028u, 0x2B55B8u, 0x2B55C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55C0u;
label_2b55c0:
    // 0x2b55c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b55c4:
    if (ctx->pc == 0x2B55C4u) {
        ctx->pc = 0x2B55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55C0u;
        // 0x2b55c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55C8u;
        goto label_2b55c8;
    }
    ctx->pc = 0x2B55C0u;
    {
        const bool branch_taken_0x2b55c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55C0u;
        // 0x2b55c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55c0) {
            ctx->pc = 0x2B55D0u;
            goto label_2b55d0;
        }
    }
    ctx->pc = 0x2B55C8u;
label_2b55c8:
    // 0x2b55c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b55cc:
    // 0x2b55cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b55ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b55d0:
    // 0x2b55d0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2b55d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b55d4:
    // 0x2b55d4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2b55d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b55d8:
    // 0x2b55d8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2b55d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b55dc:
    // 0x2b55dc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2b55dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b55e0:
    // 0x2b55e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2b55e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b55e4:
    // 0x2b55e4: 0x3e00008  jr          $ra
label_2b55e8:
    if (ctx->pc == 0x2B55E8u) {
        ctx->pc = 0x2B55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E4u;
        // 0x2b55e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55ECu;
        goto label_2b55ec;
    }
    ctx->pc = 0x2B55E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E4u;
        // 0x2b55e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B55E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B55ECu;
label_2b55ec:
    // 0x2b55ec: 0x0  nop
    ctx->pc = 0x2b55ecu;
    // NOP
}
