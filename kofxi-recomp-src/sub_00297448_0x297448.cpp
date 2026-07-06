#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297448
// Address: 0x297448 - 0x297560
void sub_00297448_0x297448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297448_0x297448");
#endif

    switch (ctx->pc) {
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        case 0x297528u: goto label_297528;
        case 0x29752cu: goto label_29752c;
        case 0x297530u: goto label_297530;
        case 0x297534u: goto label_297534;
        case 0x297538u: goto label_297538;
        case 0x29753cu: goto label_29753c;
        case 0x297540u: goto label_297540;
        case 0x297544u: goto label_297544;
        case 0x297548u: goto label_297548;
        case 0x29754cu: goto label_29754c;
        case 0x297550u: goto label_297550;
        case 0x297554u: goto label_297554;
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        default: break;
    }

    ctx->pc = 0x297448u;

label_297448:
    // 0x297448: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x297448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29744c:
    // 0x29744c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_297450:
    if (ctx->pc == 0x297450u) {
        ctx->pc = 0x297454u;
        goto label_297454;
    }
    ctx->pc = 0x29744Cu;
    {
        const bool branch_taken_0x29744c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29744c) {
            ctx->pc = 0x297464u;
            goto label_297464;
        }
    }
    ctx->pc = 0x297454u;
label_297454:
    // 0x297454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x297454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297458:
    // 0x297458: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x297458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29745c:
    // 0x29745c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_297460:
    if (ctx->pc == 0x297460u) {
        ctx->pc = 0x297460u;
            // 0x297460: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x297464u;
        goto label_297464;
    }
    ctx->pc = 0x29745Cu;
    {
        const bool branch_taken_0x29745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29745c) {
            ctx->pc = 0x297460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29745Cu;
            // 0x297460: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29746Cu;
            goto label_29746c;
        }
    }
    ctx->pc = 0x297464u;
label_297464:
    // 0x297464: 0x3e00008  jr          $ra
label_297468:
    if (ctx->pc == 0x297468u) {
        ctx->pc = 0x297468u;
            // 0x297468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29746Cu;
        goto label_29746c;
    }
    ctx->pc = 0x297464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297464u;
            // 0x297468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29746Cu;
label_29746c:
    // 0x29746c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29746cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_297470:
    // 0x297470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297474:
    // 0x297474: 0x3e00008  jr          $ra
label_297478:
    if (ctx->pc == 0x297478u) {
        ctx->pc = 0x297478u;
            // 0x297478: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x29747Cu;
        goto label_29747c;
    }
    ctx->pc = 0x297474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297474u;
            // 0x297478: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29747Cu;
label_29747c:
    // 0x29747c: 0x0  nop
    ctx->pc = 0x29747cu;
    // NOP
label_297480:
    // 0x297480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_297484:
    // 0x297484: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x297484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_297488:
    // 0x297488: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x297488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_29748c:
    // 0x29748c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29748cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297490:
    // 0x297490: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x297490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_297494:
    // 0x297494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297498:
    // 0x297498: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x297498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29749c:
    // 0x29749c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2974a0:
    // 0x2974a0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2974a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2974a4:
    // 0x2974a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2974a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2974a8:
    // 0x2974a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2974a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2974ac:
    // 0x2974ac: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_2974b0:
    if (ctx->pc == 0x2974B0u) {
        ctx->pc = 0x2974B0u;
            // 0x2974b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2974B4u;
        goto label_2974b4;
    }
    ctx->pc = 0x2974ACu;
    {
        const bool branch_taken_0x2974ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974ACu;
            // 0x2974b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974ac) {
            ctx->pc = 0x29753Cu;
            goto label_29753c;
        }
    }
    ctx->pc = 0x2974B4u;
label_2974b4:
    // 0x2974b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2974b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2974b8:
    // 0x2974b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2974bc:
    if (ctx->pc == 0x2974BCu) {
        ctx->pc = 0x2974BCu;
            // 0x2974bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2974C0u;
        goto label_2974c0;
    }
    ctx->pc = 0x2974B8u;
    {
        const bool branch_taken_0x2974b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974B8u;
            // 0x2974bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974b8) {
            ctx->pc = 0x297538u;
            goto label_297538;
        }
    }
    ctx->pc = 0x2974C0u;
label_2974c0:
    // 0x2974c0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2974c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2974c4:
    // 0x2974c4: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
label_2974c8:
    if (ctx->pc == 0x2974C8u) {
        ctx->pc = 0x2974C8u;
            // 0x2974c8: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2974CCu;
        goto label_2974cc;
    }
    ctx->pc = 0x2974C4u;
    {
        const bool branch_taken_0x2974c4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2974C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974C4u;
            // 0x2974c8: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974c4) {
            ctx->pc = 0x297538u;
            goto label_297538;
        }
    }
    ctx->pc = 0x2974CCu;
label_2974cc:
    // 0x2974cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2974ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2974d0:
    // 0x2974d0: 0xc0a5d12  jal         func_297448
label_2974d4:
    if (ctx->pc == 0x2974D4u) {
        ctx->pc = 0x2974D4u;
            // 0x2974d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2974D8u;
        goto label_2974d8;
    }
    ctx->pc = 0x2974D0u;
    SET_GPR_U32(ctx, 31, 0x2974D8u);
    ctx->pc = 0x2974D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2974D0u;
            // 0x2974d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297448u;
    goto label_297448;
    ctx->pc = 0x2974D8u;
label_2974d8:
    // 0x2974d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2974d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2974dc:
    // 0x2974dc: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x2974dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2974e0:
    // 0x2974e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2974e4:
    if (ctx->pc == 0x2974E4u) {
        ctx->pc = 0x2974E4u;
            // 0x2974e4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2974E8u;
        goto label_2974e8;
    }
    ctx->pc = 0x2974E0u;
    {
        const bool branch_taken_0x2974e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974E0u;
            // 0x2974e4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974e0) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x2974E8u;
label_2974e8:
    // 0x2974e8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2974e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2974ec:
    // 0x2974ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2974ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2974f0:
    // 0x2974f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2974f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2974f4:
    // 0x2974f4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2974f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2974f8:
    // 0x2974f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2974fc:
    if (ctx->pc == 0x2974FCu) {
        ctx->pc = 0x2974FCu;
            // 0x2974fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297500u;
        goto label_297500;
    }
    ctx->pc = 0x2974F8u;
    {
        const bool branch_taken_0x2974f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974F8u;
            // 0x2974fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974f8) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x297500u;
label_297500:
    // 0x297500: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x297500u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_297504:
    // 0x297504: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x297504u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_297508:
    // 0x297508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x297508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29750c:
    // 0x29750c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29750cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_297510:
    // 0x297510: 0x60f809  jalr        $v1
label_297514:
    if (ctx->pc == 0x297514u) {
        ctx->pc = 0x297514u;
            // 0x297514: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297518u;
        goto label_297518;
    }
    ctx->pc = 0x297510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x297518u);
        ctx->pc = 0x297514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297510u;
            // 0x297514: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297518u; }
            if (ctx->pc != 0x297518u) { return; }
        }
        }
    }
    ctx->pc = 0x297518u;
label_297518:
    // 0x297518: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x297518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29751c:
    // 0x29751c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297520:
    // 0x297520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_297524:
    // 0x297524: 0xc0a5cd6  jal         func_297358
label_297528:
    if (ctx->pc == 0x297528u) {
        ctx->pc = 0x297528u;
            // 0x297528: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x29752Cu;
        goto label_29752c;
    }
    ctx->pc = 0x297524u;
    SET_GPR_U32(ctx, 31, 0x29752Cu);
    ctx->pc = 0x297528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297524u;
            // 0x297528: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297358u;
    if (runtime->hasFunction(0x297358u)) {
        auto targetFn = runtime->lookupFunction(0x297358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29752Cu; }
        if (ctx->pc != 0x29752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297358_0x297358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29752Cu; }
        if (ctx->pc != 0x29752Cu) { return; }
    }
    ctx->pc = 0x29752Cu;
label_29752c:
    // 0x29752c: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x29752cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_297530:
    // 0x297530: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_297534:
    if (ctx->pc == 0x297534u) {
        ctx->pc = 0x297534u;
            // 0x297534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297538u;
        goto label_297538;
    }
    ctx->pc = 0x297530u;
    {
        const bool branch_taken_0x297530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297530u;
            // 0x297534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297530) {
            ctx->pc = 0x2974D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2974d0;
        }
    }
    ctx->pc = 0x297538u;
label_297538:
    // 0x297538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29753c:
    // 0x29753c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_297540:
    // 0x297540: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x297540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_297544:
    // 0x297544: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x297544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_297548:
    // 0x297548: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x297548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29754c:
    // 0x29754c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29754cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_297550:
    // 0x297550: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297554:
    // 0x297554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297558:
    // 0x297558: 0x3e00008  jr          $ra
label_29755c:
    if (ctx->pc == 0x29755Cu) {
        ctx->pc = 0x29755Cu;
            // 0x29755c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x297560u;
        goto label_fallthrough_0x297558;
    }
    ctx->pc = 0x297558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297558u;
            // 0x29755c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x297558:
    ctx->pc = 0x297560u;
    ctx->pc = 0x297560u;
}
