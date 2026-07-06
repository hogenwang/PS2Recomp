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

// Function: sub_00285560
// Address: 0x285560 - 0x285658
void sub_00285560_0x285560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285560_0x285560");
#endif

    switch (ctx->pc) {
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        case 0x285650u: goto label_285650;
        case 0x285654u: goto label_285654;
        default: break;
    }

    ctx->pc = 0x285560u;

label_285560:
    // 0x285560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x285560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_285564:
    // 0x285564: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x285564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_285568:
    // 0x285568: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x285568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28556c:
    // 0x28556c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28556cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285570:
    // 0x285570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_285574:
    // 0x285574: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x285574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285578:
    // 0x285578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28557c:
    // 0x28557c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28557cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_285580:
    // 0x285580: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x285580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_285584:
    // 0x285584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285588:
    // 0x285588: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28558c:
    if (ctx->pc == 0x28558Cu) {
        ctx->pc = 0x28558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285588u;
        // 0x28558c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285590u;
        goto label_285590;
    }
    ctx->pc = 0x285588u;
    {
        const bool branch_taken_0x285588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285588u;
        // 0x28558c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285588) {
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285590u;
label_285590:
    // 0x285590: 0x10000028  b           . + 4 + (0x28 << 2)
label_285594:
    if (ctx->pc == 0x285594u) {
        ctx->pc = 0x285594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285590u;
        // 0x285594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285598u;
        goto label_285598;
    }
    ctx->pc = 0x285590u;
    {
        const bool branch_taken_0x285590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285590u;
        // 0x285594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285590) {
            ctx->pc = 0x285634u;
            goto label_285634;
        }
    }
    ctx->pc = 0x285598u;
label_285598:
    // 0x285598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28559c:
    // 0x28559c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2855a0:
    if (ctx->pc == 0x2855A0u) {
        ctx->pc = 0x2855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28559Cu;
        // 0x2855a0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855A4u;
        goto label_2855a4;
    }
    ctx->pc = 0x28559Cu;
    {
        const bool branch_taken_0x28559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28559Cu;
        // 0x2855a0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28559c) {
            ctx->pc = 0x2855B4u;
            goto label_2855b4;
        }
    }
    ctx->pc = 0x2855A4u;
label_2855a4:
    // 0x2855a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2855a8:
    // 0x2855a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2855ac:
    if (ctx->pc == 0x2855ACu) {
        ctx->pc = 0x2855ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855A8u;
        // 0x2855ac: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855B0u;
        goto label_2855b0;
    }
    ctx->pc = 0x2855A8u;
    {
        const bool branch_taken_0x2855a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2855a8) {
            ctx->pc = 0x2855ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2855A8u;
            // 0x2855ac: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2855D0u;
            goto label_2855d0;
        }
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2855b4:
    // 0x2855b4: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2855b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2855b8:
    // 0x2855b8: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x2855b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2855bc:
    // 0x2855bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2855bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2855c0:
    // 0x2855c0: 0xc0a5648  jal         func_295920
label_2855c4:
    if (ctx->pc == 0x2855C4u) {
        ctx->pc = 0x2855C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855C0u;
        // 0x2855c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855C8u;
        goto label_2855c8;
    }
    ctx->pc = 0x2855C0u;
    SET_GPR_U32(ctx, 31, 0x2855C8u);
    ctx->pc = 0x2855C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855C0u;
    // 0x2855c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2855C0u, 0x2855C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855C8u;
label_2855c8:
    // 0x2855c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2855cc:
    if (ctx->pc == 0x2855CCu) {
        ctx->pc = 0x2855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855C8u;
        // 0x2855cc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855D0u;
        goto label_2855d0;
    }
    ctx->pc = 0x2855C8u;
    {
        const bool branch_taken_0x2855c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855C8u;
        // 0x2855cc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855c8) {
            ctx->pc = 0x285634u;
            goto label_285634;
        }
    }
    ctx->pc = 0x2855D0u;
label_2855d0:
    // 0x2855d0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2855d4:
    if (ctx->pc == 0x2855D4u) {
        ctx->pc = 0x2855D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855D0u;
        // 0x2855d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855D8u;
        goto label_2855d8;
    }
    ctx->pc = 0x2855D0u;
    {
        const bool branch_taken_0x2855d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855D0u;
        // 0x2855d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855d0) {
            ctx->pc = 0x2855FCu;
            goto label_2855fc;
        }
    }
    ctx->pc = 0x2855D8u;
label_2855d8:
    // 0x2855d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2855dc:
    // 0x2855dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2855dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2855e0:
    // 0x2855e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2855e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2855e4:
    // 0x2855e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2855e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2855e8:
    // 0x2855e8: 0x220f809  jalr        $s1
label_2855ec:
    if (ctx->pc == 0x2855ECu) {
        ctx->pc = 0x2855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855E8u;
        // 0x2855ec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855F0u;
        goto label_2855f0;
    }
    ctx->pc = 0x2855E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x2855F0u);
        ctx->pc = 0x2855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855E8u;
        // 0x2855ec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2855E8u, 0x2855F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2855F0u;
label_2855f0:
    // 0x2855f0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2855f4:
    if (ctx->pc == 0x2855F4u) {
        ctx->pc = 0x2855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F0u;
        // 0x2855f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855F8u;
        goto label_2855f8;
    }
    ctx->pc = 0x2855F0u;
    {
        const bool branch_taken_0x2855f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F0u;
        // 0x2855f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855f0) {
            ctx->pc = 0x285638u;
            goto label_285638;
        }
    }
    ctx->pc = 0x2855F8u;
label_2855f8:
    // 0x2855f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2855fc:
    // 0x2855fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_285600:
    // 0x285600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285604:
    // 0x285604: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x285604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285608:
    // 0x285608: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x285608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28560c:
    // 0x28560c: 0x40f809  jalr        $v0
label_285610:
    if (ctx->pc == 0x285610u) {
        ctx->pc = 0x285610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28560Cu;
        // 0x285610: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285614u;
        goto label_285614;
    }
    ctx->pc = 0x28560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285614u);
        ctx->pc = 0x285610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28560Cu;
        // 0x285610: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28560Cu, 0x285614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285614u;
label_285614:
    // 0x285614: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_285618:
    if (ctx->pc == 0x285618u) {
        ctx->pc = 0x285618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285614u;
        // 0x285618: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28561Cu;
        goto label_28561c;
    }
    ctx->pc = 0x285614u;
    {
        const bool branch_taken_0x285614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285614u;
        // 0x285618: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285614) {
            ctx->pc = 0x285634u;
            goto label_285634;
        }
    }
    ctx->pc = 0x28561Cu;
label_28561c:
    // 0x28561c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285620:
    // 0x285620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285624:
    // 0x285624: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285628:
    // 0x285628: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x285628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28562c:
    // 0x28562c: 0x220f809  jalr        $s1
label_285630:
    if (ctx->pc == 0x285630u) {
        ctx->pc = 0x285630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28562Cu;
        // 0x285630: 0x24050086  addiu       $a1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285634u;
        goto label_285634;
    }
    ctx->pc = 0x28562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285634u);
        ctx->pc = 0x285630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28562Cu;
        // 0x285630: 0x24050086  addiu       $a1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28562Cu, 0x285634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285634u;
label_285634:
    // 0x285634: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x285634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_285638:
    // 0x285638: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x285638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28563c:
    // 0x28563c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28563cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285640:
    // 0x285640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285644:
    // 0x285644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285648:
    // 0x285648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28564c:
    // 0x28564c: 0x3e00008  jr          $ra
label_285650:
    if (ctx->pc == 0x285650u) {
        ctx->pc = 0x285650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28564Cu;
        // 0x285650: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285654u;
        goto label_285654;
    }
    ctx->pc = 0x28564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28564Cu;
        // 0x285650: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285654u;
label_285654:
    // 0x285654: 0x0  nop
    ctx->pc = 0x285654u;
    // NOP
}
