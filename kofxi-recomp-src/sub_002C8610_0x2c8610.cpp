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

// Function: sub_002C8610
// Address: 0x2c8610 - 0x2c8760
void sub_002C8610_0x2c8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8610_0x2c8610");
#endif

    switch (ctx->pc) {
        case 0x2c8610u: goto label_2c8610;
        case 0x2c8614u: goto label_2c8614;
        case 0x2c8618u: goto label_2c8618;
        case 0x2c861cu: goto label_2c861c;
        case 0x2c8620u: goto label_2c8620;
        case 0x2c8624u: goto label_2c8624;
        case 0x2c8628u: goto label_2c8628;
        case 0x2c862cu: goto label_2c862c;
        case 0x2c8630u: goto label_2c8630;
        case 0x2c8634u: goto label_2c8634;
        case 0x2c8638u: goto label_2c8638;
        case 0x2c863cu: goto label_2c863c;
        case 0x2c8640u: goto label_2c8640;
        case 0x2c8644u: goto label_2c8644;
        case 0x2c8648u: goto label_2c8648;
        case 0x2c864cu: goto label_2c864c;
        case 0x2c8650u: goto label_2c8650;
        case 0x2c8654u: goto label_2c8654;
        case 0x2c8658u: goto label_2c8658;
        case 0x2c865cu: goto label_2c865c;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8664u: goto label_2c8664;
        case 0x2c8668u: goto label_2c8668;
        case 0x2c866cu: goto label_2c866c;
        case 0x2c8670u: goto label_2c8670;
        case 0x2c8674u: goto label_2c8674;
        case 0x2c8678u: goto label_2c8678;
        case 0x2c867cu: goto label_2c867c;
        case 0x2c8680u: goto label_2c8680;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c8688u: goto label_2c8688;
        case 0x2c868cu: goto label_2c868c;
        case 0x2c8690u: goto label_2c8690;
        case 0x2c8694u: goto label_2c8694;
        case 0x2c8698u: goto label_2c8698;
        case 0x2c869cu: goto label_2c869c;
        case 0x2c86a0u: goto label_2c86a0;
        case 0x2c86a4u: goto label_2c86a4;
        case 0x2c86a8u: goto label_2c86a8;
        case 0x2c86acu: goto label_2c86ac;
        case 0x2c86b0u: goto label_2c86b0;
        case 0x2c86b4u: goto label_2c86b4;
        case 0x2c86b8u: goto label_2c86b8;
        case 0x2c86bcu: goto label_2c86bc;
        case 0x2c86c0u: goto label_2c86c0;
        case 0x2c86c4u: goto label_2c86c4;
        case 0x2c86c8u: goto label_2c86c8;
        case 0x2c86ccu: goto label_2c86cc;
        case 0x2c86d0u: goto label_2c86d0;
        case 0x2c86d4u: goto label_2c86d4;
        case 0x2c86d8u: goto label_2c86d8;
        case 0x2c86dcu: goto label_2c86dc;
        case 0x2c86e0u: goto label_2c86e0;
        case 0x2c86e4u: goto label_2c86e4;
        case 0x2c86e8u: goto label_2c86e8;
        case 0x2c86ecu: goto label_2c86ec;
        case 0x2c86f0u: goto label_2c86f0;
        case 0x2c86f4u: goto label_2c86f4;
        case 0x2c86f8u: goto label_2c86f8;
        case 0x2c86fcu: goto label_2c86fc;
        case 0x2c8700u: goto label_2c8700;
        case 0x2c8704u: goto label_2c8704;
        case 0x2c8708u: goto label_2c8708;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8710u: goto label_2c8710;
        case 0x2c8714u: goto label_2c8714;
        case 0x2c8718u: goto label_2c8718;
        case 0x2c871cu: goto label_2c871c;
        case 0x2c8720u: goto label_2c8720;
        case 0x2c8724u: goto label_2c8724;
        case 0x2c8728u: goto label_2c8728;
        case 0x2c872cu: goto label_2c872c;
        case 0x2c8730u: goto label_2c8730;
        case 0x2c8734u: goto label_2c8734;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c873cu: goto label_2c873c;
        case 0x2c8740u: goto label_2c8740;
        case 0x2c8744u: goto label_2c8744;
        case 0x2c8748u: goto label_2c8748;
        case 0x2c874cu: goto label_2c874c;
        case 0x2c8750u: goto label_2c8750;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8758u: goto label_2c8758;
        case 0x2c875cu: goto label_2c875c;
        default: break;
    }

    ctx->pc = 0x2c8610u;

label_2c8610:
    // 0x2c8610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c8614:
    // 0x2c8614: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8618:
    // 0x2c8618: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2c8618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c861c:
    // 0x2c861c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8620:
    // 0x2c8620: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8624:
    // 0x2c8624: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c8624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c8628:
    // 0x2c8628: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2c8628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c862c:
    // 0x2c862c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c8630:
    // 0x2c8630: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2c8630u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c8634:
    // 0x2c8634: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c8634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2c8638:
    // 0x2c8638: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2c8638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c863c:
    // 0x2c863c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2c8640:
    // 0x2c8640: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2c8640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8644:
    // 0x2c8644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8648:
    // 0x2c8648: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c864c:
    // 0x2c864c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c8650:
    // 0x2c8650: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c8650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2c8654:
    // 0x2c8654: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2c8654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2c8658:
    // 0x2c8658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c8658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c865c:
    // 0x2c865c: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_2c8660:
    if (ctx->pc == 0x2C8660u) {
        ctx->pc = 0x2C8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C865Cu;
        // 0x2c8660: 0x24050221  addiu       $a1, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8664u;
        goto label_2c8664;
    }
    ctx->pc = 0x2C865Cu;
    {
        const bool branch_taken_0x2c865c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C865Cu;
        // 0x2c8660: 0x24050221  addiu       $a1, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c865c) {
            ctx->pc = 0x2C8728u;
            goto label_2c8728;
        }
    }
    ctx->pc = 0x2C8664u;
label_2c8664:
    // 0x2c8664: 0x24140206  addiu       $s4, $zero, 0x206
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_2c8668:
    // 0x2c8668: 0x2413020b  addiu       $s3, $zero, 0x20B
    ctx->pc = 0x2c8668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_2c866c:
    // 0x2c866c: 0x24120207  addiu       $s2, $zero, 0x207
    ctx->pc = 0x2c866cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
label_2c8670:
    // 0x2c8670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c8670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8674:
    // 0x2c8674: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c8678:
    // 0x2c8678: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
label_2c867c:
    if (ctx->pc == 0x2C867Cu) {
        ctx->pc = 0x2C867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8678u;
        // 0x2c867c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8680u;
        goto label_2c8680;
    }
    ctx->pc = 0x2C8678u;
    {
        const bool branch_taken_0x2c8678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8678) {
            ctx->pc = 0x2C867Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8678u;
            // 0x2c867c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C871Cu;
            goto label_2c871c;
        }
    }
    ctx->pc = 0x2C8680u;
label_2c8680:
    // 0x2c8680: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c8684:
    // 0x2c8684: 0x545e0025  bnel        $v0, $fp, . + 4 + (0x25 << 2)
label_2c8688:
    if (ctx->pc == 0x2C8688u) {
        ctx->pc = 0x2C8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8684u;
        // 0x2c8688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C868Cu;
        goto label_2c868c;
    }
    ctx->pc = 0x2C8684u;
    {
        const bool branch_taken_0x2c8684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2c8684) {
            ctx->pc = 0x2C8688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8684u;
            // 0x2c8688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C871Cu;
            goto label_2c871c;
        }
    }
    ctx->pc = 0x2C868Cu;
label_2c868c:
    // 0x2c868c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2c868cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2c8690:
    // 0x2c8690: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
label_2c8694:
    if (ctx->pc == 0x2C8694u) {
        ctx->pc = 0x2C8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8690u;
        // 0x2c8694: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8698u;
        goto label_2c8698;
    }
    ctx->pc = 0x2C8690u;
    {
        const bool branch_taken_0x2c8690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8690) {
            ctx->pc = 0x2C8694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8690u;
            // 0x2c8694: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86B8u;
            goto label_2c86b8;
        }
    }
    ctx->pc = 0x2C8698u;
label_2c8698:
    // 0x2c8698: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c8698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c869c:
    // 0x2c869c: 0xc0b3d5a  jal         func_2CF568
label_2c86a0:
    if (ctx->pc == 0x2C86A0u) {
        ctx->pc = 0x2C86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C869Cu;
        // 0x2c86a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86A4u;
        goto label_2c86a4;
    }
    ctx->pc = 0x2C869Cu;
    SET_GPR_U32(ctx, 31, 0x2C86A4u);
    ctx->pc = 0x2C86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C869Cu;
    // 0x2c86a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF568u, 0x2C869Cu, 0x2C86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86A4u;
label_2c86a4:
    // 0x2c86a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c86a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c86a8:
    // 0x2c86a8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_2c86ac:
    if (ctx->pc == 0x2C86ACu) {
        ctx->pc = 0x2C86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86A8u;
        // 0x2c86ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86B0u;
        goto label_2c86b0;
    }
    ctx->pc = 0x2C86A8u;
    {
        const bool branch_taken_0x2c86a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c86a8) {
            ctx->pc = 0x2C86ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86A8u;
            // 0x2c86ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C86B8u;
            goto label_2c86b8;
        }
    }
    ctx->pc = 0x2C86B0u;
label_2c86b0:
    // 0x2c86b0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c86b4:
    if (ctx->pc == 0x2C86B4u) {
        ctx->pc = 0x2C86B8u;
        goto label_2c86b8;
    }
    ctx->pc = 0x2C86B0u;
    {
        const bool branch_taken_0x2c86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c86b0) {
            ctx->pc = 0x2C86E8u;
            goto label_2c86e8;
        }
    }
    ctx->pc = 0x2C86B8u;
label_2c86b8:
    // 0x2c86b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c86bc:
    // 0x2c86bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c86bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c86c0:
    // 0x2c86c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c86c4:
    // 0x2c86c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c86c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c86c8:
    // 0x2c86c8: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x2c86c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c86cc:
    // 0x2c86cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c86d0:
    // 0x2c86d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c86d4:
    // 0x2c86d4: 0x40f809  jalr        $v0
label_2c86d8:
    if (ctx->pc == 0x2C86D8u) {
        ctx->pc = 0x2C86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86D4u;
        // 0x2c86d8: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86DCu;
        goto label_2c86dc;
    }
    ctx->pc = 0x2C86D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C86DCu);
        ctx->pc = 0x2C86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86D4u;
        // 0x2c86d8: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C86D4u, 0x2C86DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C86DCu;
label_2c86dc:
    // 0x2c86dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c86dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c86e0:
    // 0x2c86e0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2c86e4:
    if (ctx->pc == 0x2C86E4u) {
        ctx->pc = 0x2C86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E0u;
        // 0x2c86e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86E8u;
        goto label_2c86e8;
    }
    ctx->pc = 0x2C86E0u;
    {
        const bool branch_taken_0x2c86e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c86e0) {
            ctx->pc = 0x2C86E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86E0u;
            // 0x2c86e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8708u;
            goto label_2c8708;
        }
    }
    ctx->pc = 0x2C86E8u;
label_2c86e8:
    // 0x2c86e8: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
label_2c86ec:
    if (ctx->pc == 0x2C86ECu) {
        ctx->pc = 0x2C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E8u;
        // 0x2c86ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86F0u;
        goto label_2c86f0;
    }
    ctx->pc = 0x2C86E8u;
    {
        const bool branch_taken_0x2c86e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E8u;
        // 0x2c86ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86e8) {
            ctx->pc = 0x2C872Cu;
            goto label_2c872c;
        }
    }
    ctx->pc = 0x2C86F0u;
label_2c86f0:
    // 0x2c86f0: 0x5073000f  beql        $v1, $s3, . + 4 + (0xF << 2)
label_2c86f4:
    if (ctx->pc == 0x2C86F4u) {
        ctx->pc = 0x2C86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F0u;
        // 0x2c86f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C86F8u;
        goto label_2c86f8;
    }
    ctx->pc = 0x2C86F0u;
    {
        const bool branch_taken_0x2c86f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c86f0) {
            ctx->pc = 0x2C86F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C86F0u;
            // 0x2c86f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8730u;
            goto label_2c8730;
        }
    }
    ctx->pc = 0x2C86F8u;
label_2c86f8:
    // 0x2c86f8: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
label_2c86fc:
    if (ctx->pc == 0x2C86FCu) {
        ctx->pc = 0x2C86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F8u;
        // 0x2c86fc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8700u;
        goto label_2c8700;
    }
    ctx->pc = 0x2C86F8u;
    {
        const bool branch_taken_0x2c86f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86F8u;
        // 0x2c86fc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86f8) {
            ctx->pc = 0x2C8718u;
            goto label_2c8718;
        }
    }
    ctx->pc = 0x2C8700u;
label_2c8700:
    // 0x2c8700: 0x1000000b  b           . + 4 + (0xB << 2)
label_2c8704:
    if (ctx->pc == 0x2C8704u) {
        ctx->pc = 0x2C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8700u;
        // 0x2c8704: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8708u;
        goto label_2c8708;
    }
    ctx->pc = 0x2C8700u;
    {
        const bool branch_taken_0x2c8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8700u;
        // 0x2c8704: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8700) {
            ctx->pc = 0x2C8730u;
            goto label_2c8730;
        }
    }
    ctx->pc = 0x2C8708u;
label_2c8708:
    // 0x2c8708: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2c8708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c870c:
    // 0x2c870c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2c8710:
    if (ctx->pc == 0x2C8710u) {
        ctx->pc = 0x2C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C870Cu;
        // 0x2c8710: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8714u;
        goto label_2c8714;
    }
    ctx->pc = 0x2C870Cu;
    {
        const bool branch_taken_0x2c870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C870Cu;
        // 0x2c8710: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c870c) {
            ctx->pc = 0x2C872Cu;
            goto label_2c872c;
        }
    }
    ctx->pc = 0x2C8714u;
label_2c8714:
    // 0x2c8714: 0x0  nop
    ctx->pc = 0x2c8714u;
    // NOP
label_2c8718:
    // 0x2c8718: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c8718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c871c:
    // 0x2c871c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8720:
    // 0x2c8720: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_2c8724:
    if (ctx->pc == 0x2C8724u) {
        ctx->pc = 0x2C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8720u;
        // 0x2c8724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8728u;
        goto label_2c8728;
    }
    ctx->pc = 0x2C8720u;
    {
        const bool branch_taken_0x2c8720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8720u;
        // 0x2c8724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8720) {
            ctx->pc = 0x2C8670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8670;
        }
    }
    ctx->pc = 0x2C8728u;
label_2c8728:
    // 0x2c8728: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c8728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c872c:
    // 0x2c872c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c872cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8730:
    // 0x2c8730: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8734:
    // 0x2c8734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8738:
    // 0x2c8738: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c8738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c873c:
    // 0x2c873c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c873cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8740:
    // 0x2c8740: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c8740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c8744:
    // 0x2c8744: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c8744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8748:
    // 0x2c8748: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c8748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c874c:
    // 0x2c874c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c874cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8750:
    // 0x2c8750: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c8750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2c8754:
    // 0x2c8754: 0x3e00008  jr          $ra
label_2c8758:
    if (ctx->pc == 0x2C8758u) {
        ctx->pc = 0x2C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8754u;
        // 0x2c8758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C875Cu;
        goto label_2c875c;
    }
    ctx->pc = 0x2C8754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8754u;
        // 0x2c8758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C875Cu;
label_2c875c:
    // 0x2c875c: 0x0  nop
    ctx->pc = 0x2c875cu;
    // NOP
    if (ctx->pc == 0x2c875cu) { ctx->pc = 0x2c8760u; }
}
