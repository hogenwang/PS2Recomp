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

// Function: sub_00285438
// Address: 0x285438 - 0x285540
void sub_00285438_0x285438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285438_0x285438");
#endif

    switch (ctx->pc) {
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        default: break;
    }

    ctx->pc = 0x285438u;

label_285438:
    // 0x285438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28543c:
    // 0x28543c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_285440:
    // 0x285440: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_285444:
    // 0x285444: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x285444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285448:
    // 0x285448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28544c:
    // 0x28544c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28544cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285450:
    // 0x285450: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x285450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_285454:
    // 0x285454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285458:
    // 0x285458: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_28545c:
    if (ctx->pc == 0x28545Cu) {
        ctx->pc = 0x28545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285458u;
        // 0x28545c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285460u;
        goto label_285460;
    }
    ctx->pc = 0x285458u;
    {
        const bool branch_taken_0x285458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285458u;
        // 0x28545c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285458) {
            ctx->pc = 0x285478u;
            goto label_285478;
        }
    }
    ctx->pc = 0x285460u;
label_285460:
    // 0x285460: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285464:
    // 0x285464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_285468:
    if (ctx->pc == 0x285468u) {
        ctx->pc = 0x285468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285464u;
        // 0x285468: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28546Cu;
        goto label_28546c;
    }
    ctx->pc = 0x285464u;
    {
        const bool branch_taken_0x285464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285464u;
        // 0x285468: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285464) {
            ctx->pc = 0x28547Cu;
            goto label_28547c;
        }
    }
    ctx->pc = 0x28546Cu;
label_28546c:
    // 0x28546c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x28546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_285470:
    // 0x285470: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_285474:
    if (ctx->pc == 0x285474u) {
        ctx->pc = 0x285474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285470u;
        // 0x285474: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285478u;
        goto label_285478;
    }
    ctx->pc = 0x285470u;
    {
        const bool branch_taken_0x285470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285470) {
            ctx->pc = 0x285474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285470u;
            // 0x285474: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285488u;
            goto label_285488;
        }
    }
    ctx->pc = 0x285478u;
label_285478:
    // 0x285478: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x285478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_28547c:
    // 0x28547c: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_285480:
    // 0x285480: 0x10000013  b           . + 4 + (0x13 << 2)
label_285484:
    if (ctx->pc == 0x285484u) {
        ctx->pc = 0x285484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285480u;
        // 0x285484: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285488u;
        goto label_285488;
    }
    ctx->pc = 0x285480u;
    {
        const bool branch_taken_0x285480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285480u;
        // 0x285484: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285480) {
            ctx->pc = 0x2854D0u;
            goto label_2854d0;
        }
    }
    ctx->pc = 0x285488u;
label_285488:
    // 0x285488: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_28548c:
    if (ctx->pc == 0x28548Cu) {
        ctx->pc = 0x28548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285488u;
        // 0x28548c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285490u;
        goto label_285490;
    }
    ctx->pc = 0x285488u;
    {
        const bool branch_taken_0x285488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285488u;
        // 0x28548c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285488) {
            ctx->pc = 0x2854B8u;
            goto label_2854b8;
        }
    }
    ctx->pc = 0x285490u;
label_285490:
    // 0x285490: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x285490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_285494:
    // 0x285494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285498:
    // 0x285498: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28549c:
    // 0x28549c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28549cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2854a0:
    // 0x2854a0: 0x220f809  jalr        $s1
label_2854a4:
    if (ctx->pc == 0x2854A4u) {
        ctx->pc = 0x2854A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854A0u;
        // 0x2854a4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854A8u;
        goto label_2854a8;
    }
    ctx->pc = 0x2854A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x2854A8u);
        ctx->pc = 0x2854A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854A0u;
        // 0x2854a4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2854A0u, 0x2854A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2854A8u;
label_2854a8:
    // 0x2854a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2854a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2854ac:
    // 0x2854ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2854acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2854b0:
    // 0x2854b0: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2854b4:
    if (ctx->pc == 0x2854B4u) {
        ctx->pc = 0x2854B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854B0u;
        // 0x2854b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854B8u;
        goto label_2854b8;
    }
    ctx->pc = 0x2854B0u;
    {
        const bool branch_taken_0x2854b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2854B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854B0u;
        // 0x2854b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854b0) {
            ctx->pc = 0x285524u;
            goto label_285524;
        }
    }
    ctx->pc = 0x2854B8u;
label_2854b8:
    // 0x2854b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2854bc:
    // 0x2854bc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2854c0:
    if (ctx->pc == 0x2854C0u) {
        ctx->pc = 0x2854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854BCu;
        // 0x2854c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854C4u;
        goto label_2854c4;
    }
    ctx->pc = 0x2854BCu;
    {
        const bool branch_taken_0x2854bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2854bc) {
            ctx->pc = 0x2854C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854BCu;
            // 0x2854c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2854E4u;
            goto label_2854e4;
        }
    }
    ctx->pc = 0x2854C4u;
label_2854c4:
    // 0x2854c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2854c8:
    // 0x2854c8: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2854c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2854cc:
    // 0x2854cc: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x2854ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2854d0:
    // 0x2854d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2854d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2854d4:
    // 0x2854d4: 0xc0a5648  jal         func_295920
label_2854d8:
    if (ctx->pc == 0x2854D8u) {
        ctx->pc = 0x2854D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854D4u;
        // 0x2854d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854DCu;
        goto label_2854dc;
    }
    ctx->pc = 0x2854D4u;
    SET_GPR_U32(ctx, 31, 0x2854DCu);
    ctx->pc = 0x2854D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2854D4u;
    // 0x2854d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2854D4u, 0x2854DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854DCu;
label_2854dc:
    // 0x2854dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2854e0:
    if (ctx->pc == 0x2854E0u) {
        ctx->pc = 0x2854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854DCu;
        // 0x2854e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854E4u;
        goto label_2854e4;
    }
    ctx->pc = 0x2854DCu;
    {
        const bool branch_taken_0x2854dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854DCu;
        // 0x2854e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854dc) {
            ctx->pc = 0x285520u;
            goto label_285520;
        }
    }
    ctx->pc = 0x2854E4u;
label_2854e4:
    // 0x2854e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2854e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2854e8:
    // 0x2854e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2854e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2854ec:
    // 0x2854ec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2854ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2854f0:
    // 0x2854f0: 0x40f809  jalr        $v0
label_2854f4:
    if (ctx->pc == 0x2854F4u) {
        ctx->pc = 0x2854F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854F0u;
        // 0x2854f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854F8u;
        goto label_2854f8;
    }
    ctx->pc = 0x2854F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2854F8u);
        ctx->pc = 0x2854F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854F0u;
        // 0x2854f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2854F0u, 0x2854F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2854F8u;
label_2854f8:
    // 0x2854f8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2854fc:
    if (ctx->pc == 0x2854FCu) {
        ctx->pc = 0x2854FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854F8u;
        // 0x2854fc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285500u;
        goto label_285500;
    }
    ctx->pc = 0x2854F8u;
    {
        const bool branch_taken_0x2854f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854F8u;
        // 0x2854fc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854f8) {
            ctx->pc = 0x285520u;
            goto label_285520;
        }
    }
    ctx->pc = 0x285500u;
label_285500:
    // 0x285500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285504:
    // 0x285504: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285508:
    // 0x285508: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28550c:
    // 0x28550c: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x28550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_285510:
    // 0x285510: 0x220f809  jalr        $s1
label_285514:
    if (ctx->pc == 0x285514u) {
        ctx->pc = 0x285514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285510u;
        // 0x285514: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285518u;
        goto label_285518;
    }
    ctx->pc = 0x285510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285518u);
        ctx->pc = 0x285514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285510u;
        // 0x285514: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285510u, 0x285518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285518u;
label_285518:
    // 0x285518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x285518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_28551c:
    // 0x28551c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28551cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_285520:
    // 0x285520: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x285520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285524:
    // 0x285524: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285528:
    // 0x285528: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28552c:
    // 0x28552c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28552cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285530:
    // 0x285530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285534:
    // 0x285534: 0x3e00008  jr          $ra
label_285538:
    if (ctx->pc == 0x285538u) {
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28553Cu;
        goto label_28553c;
    }
    ctx->pc = 0x285534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28553Cu;
label_28553c:
    // 0x28553c: 0x0  nop
    ctx->pc = 0x28553cu;
    // NOP
}
