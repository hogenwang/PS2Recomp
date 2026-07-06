#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297560
// Address: 0x297560 - 0x297638
void sub_00297560_0x297560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297560_0x297560");
#endif

    switch (ctx->pc) {
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        case 0x2975e0u: goto label_2975e0;
        case 0x2975e4u: goto label_2975e4;
        case 0x2975e8u: goto label_2975e8;
        case 0x2975ecu: goto label_2975ec;
        case 0x2975f0u: goto label_2975f0;
        case 0x2975f4u: goto label_2975f4;
        case 0x2975f8u: goto label_2975f8;
        case 0x2975fcu: goto label_2975fc;
        case 0x297600u: goto label_297600;
        case 0x297604u: goto label_297604;
        case 0x297608u: goto label_297608;
        case 0x29760cu: goto label_29760c;
        case 0x297610u: goto label_297610;
        case 0x297614u: goto label_297614;
        case 0x297618u: goto label_297618;
        case 0x29761cu: goto label_29761c;
        case 0x297620u: goto label_297620;
        case 0x297624u: goto label_297624;
        case 0x297628u: goto label_297628;
        case 0x29762cu: goto label_29762c;
        case 0x297630u: goto label_297630;
        case 0x297634u: goto label_297634;
        default: break;
    }

    ctx->pc = 0x297560u;

label_297560:
    // 0x297560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_297564:
    // 0x297564: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_297568:
    // 0x297568: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29756c:
    // 0x29756c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29756cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297570:
    // 0x297570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_297574:
    // 0x297574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x297574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297578:
    // 0x297578: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x297578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_29757c:
    // 0x29757c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29757cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_297580:
    // 0x297580: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_297584:
    // 0x297584: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_297588:
    // 0x297588: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_29758c:
    if (ctx->pc == 0x29758Cu) {
        ctx->pc = 0x29758Cu;
            // 0x29758c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x297590u;
        goto label_297590;
    }
    ctx->pc = 0x297588u;
    {
        const bool branch_taken_0x297588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297588u;
            // 0x29758c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297588) {
            ctx->pc = 0x2975F8u;
            goto label_2975f8;
        }
    }
    ctx->pc = 0x297590u;
label_297590:
    // 0x297590: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x297590u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_297594:
    // 0x297594: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
label_297598:
    if (ctx->pc == 0x297598u) {
        ctx->pc = 0x297598u;
            // 0x297598: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29759Cu;
        goto label_29759c;
    }
    ctx->pc = 0x297594u;
    {
        const bool branch_taken_0x297594 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x297598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297594u;
            // 0x297598: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297594) {
            ctx->pc = 0x2975F8u;
            goto label_2975f8;
        }
    }
    ctx->pc = 0x29759Cu;
label_29759c:
    // 0x29759c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x29759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2975a0:
    // 0x2975a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2975a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2975a4:
    // 0x2975a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2975a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2975a8:
    // 0x2975a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2975ac:
    // 0x2975ac: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2975b0:
    if (ctx->pc == 0x2975B0u) {
        ctx->pc = 0x2975B0u;
            // 0x2975b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2975B4u;
        goto label_2975b4;
    }
    ctx->pc = 0x2975ACu;
    {
        const bool branch_taken_0x2975ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2975ac) {
            ctx->pc = 0x2975B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2975ACu;
            // 0x2975b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2975ECu;
            goto label_2975ec;
        }
    }
    ctx->pc = 0x2975B4u;
label_2975b4:
    // 0x2975b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2975b8:
    // 0x2975b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2975bc:
    if (ctx->pc == 0x2975BCu) {
        ctx->pc = 0x2975BCu;
            // 0x2975bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2975C0u;
        goto label_2975c0;
    }
    ctx->pc = 0x2975B8u;
    {
        const bool branch_taken_0x2975b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975B8u;
            // 0x2975bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975b8) {
            ctx->pc = 0x2975E8u;
            goto label_2975e8;
        }
    }
    ctx->pc = 0x2975C0u;
label_2975c0:
    // 0x2975c0: 0xc0a5d12  jal         func_297448
label_2975c4:
    if (ctx->pc == 0x2975C4u) {
        ctx->pc = 0x2975C4u;
            // 0x2975c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2975C8u;
        goto label_2975c8;
    }
    ctx->pc = 0x2975C0u;
    SET_GPR_U32(ctx, 31, 0x2975C8u);
    ctx->pc = 0x2975C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2975C0u;
            // 0x2975c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297448u;
    if (runtime->hasFunction(0x297448u)) {
        auto targetFn = runtime->lookupFunction(0x297448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975C8u; }
        if (ctx->pc != 0x2975C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297448_0x297448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975C8u; }
        if (ctx->pc != 0x2975C8u) { return; }
    }
    ctx->pc = 0x2975C8u;
label_2975c8:
    // 0x2975c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2975c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2975cc:
    // 0x2975cc: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2975d0:
    // 0x2975d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2975d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2975d4:
    // 0x2975d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2975d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2975d8:
    // 0x2975d8: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x2975d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2975dc:
    // 0x2975dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2975dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2975e0:
    // 0x2975e0: 0x40f809  jalr        $v0
label_2975e4:
    if (ctx->pc == 0x2975E4u) {
        ctx->pc = 0x2975E4u;
            // 0x2975e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2975E8u;
        goto label_2975e8;
    }
    ctx->pc = 0x2975E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2975E8u);
        ctx->pc = 0x2975E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975E0u;
            // 0x2975e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2975E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2975E8u; }
            if (ctx->pc != 0x2975E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2975ec:
    // 0x2975ec: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2975ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2975f0:
    // 0x2975f0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_2975f4:
    if (ctx->pc == 0x2975F4u) {
        ctx->pc = 0x2975F4u;
            // 0x2975f4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x2975F8u;
        goto label_2975f8;
    }
    ctx->pc = 0x2975F0u;
    {
        const bool branch_taken_0x2975f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2975f0) {
            ctx->pc = 0x2975F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2975F0u;
            // 0x2975f4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2975A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2975a0;
        }
    }
    ctx->pc = 0x2975F8u;
label_2975f8:
    // 0x2975f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2975f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2975fc:
    // 0x2975fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_297600:
    if (ctx->pc == 0x297600u) {
        ctx->pc = 0x297600u;
            // 0x297600: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x297604u;
        goto label_297604;
    }
    ctx->pc = 0x2975FCu;
    {
        const bool branch_taken_0x2975fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975FCu;
            // 0x297600: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975fc) {
            ctx->pc = 0x297614u;
            goto label_297614;
        }
    }
    ctx->pc = 0x297604u;
label_297604:
    // 0x297604: 0xc0af176  jal         func_2BC5D8
label_297608:
    if (ctx->pc == 0x297608u) {
        ctx->pc = 0x29760Cu;
        goto label_29760c;
    }
    ctx->pc = 0x297604u;
    SET_GPR_U32(ctx, 31, 0x29760Cu);
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29760Cu; }
        if (ctx->pc != 0x29760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29760Cu; }
        if (ctx->pc != 0x29760Cu) { return; }
    }
    ctx->pc = 0x29760Cu;
label_29760c:
    // 0x29760c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29760cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_297610:
    // 0x297610: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x297610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_297614:
    // 0x297614: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x297614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_297618:
    // 0x297618: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29761c:
    // 0x29761c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29761cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_297620:
    // 0x297620: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297624:
    // 0x297624: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297628:
    // 0x297628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29762c:
    // 0x29762c: 0x3e00008  jr          $ra
label_297630:
    if (ctx->pc == 0x297630u) {
        ctx->pc = 0x297630u;
            // 0x297630: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x297634u;
        goto label_297634;
    }
    ctx->pc = 0x29762Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29762Cu;
            // 0x297630: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297634u;
label_297634:
    // 0x297634: 0x0  nop
    ctx->pc = 0x297634u;
    // NOP
    ctx->pc = 0x297638u;
}
