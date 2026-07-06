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

// Function: sub_001D6608
// Address: 0x1d6608 - 0x1d67d0
void sub_001D6608_0x1d6608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6608_0x1d6608");
#endif

    switch (ctx->pc) {
        case 0x1d6608u: goto label_1d6608;
        case 0x1d660cu: goto label_1d660c;
        case 0x1d6610u: goto label_1d6610;
        case 0x1d6614u: goto label_1d6614;
        case 0x1d6618u: goto label_1d6618;
        case 0x1d661cu: goto label_1d661c;
        case 0x1d6620u: goto label_1d6620;
        case 0x1d6624u: goto label_1d6624;
        case 0x1d6628u: goto label_1d6628;
        case 0x1d662cu: goto label_1d662c;
        case 0x1d6630u: goto label_1d6630;
        case 0x1d6634u: goto label_1d6634;
        case 0x1d6638u: goto label_1d6638;
        case 0x1d663cu: goto label_1d663c;
        case 0x1d6640u: goto label_1d6640;
        case 0x1d6644u: goto label_1d6644;
        case 0x1d6648u: goto label_1d6648;
        case 0x1d664cu: goto label_1d664c;
        case 0x1d6650u: goto label_1d6650;
        case 0x1d6654u: goto label_1d6654;
        case 0x1d6658u: goto label_1d6658;
        case 0x1d665cu: goto label_1d665c;
        case 0x1d6660u: goto label_1d6660;
        case 0x1d6664u: goto label_1d6664;
        case 0x1d6668u: goto label_1d6668;
        case 0x1d666cu: goto label_1d666c;
        case 0x1d6670u: goto label_1d6670;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d6678u: goto label_1d6678;
        case 0x1d667cu: goto label_1d667c;
        case 0x1d6680u: goto label_1d6680;
        case 0x1d6684u: goto label_1d6684;
        case 0x1d6688u: goto label_1d6688;
        case 0x1d668cu: goto label_1d668c;
        case 0x1d6690u: goto label_1d6690;
        case 0x1d6694u: goto label_1d6694;
        case 0x1d6698u: goto label_1d6698;
        case 0x1d669cu: goto label_1d669c;
        case 0x1d66a0u: goto label_1d66a0;
        case 0x1d66a4u: goto label_1d66a4;
        case 0x1d66a8u: goto label_1d66a8;
        case 0x1d66acu: goto label_1d66ac;
        case 0x1d66b0u: goto label_1d66b0;
        case 0x1d66b4u: goto label_1d66b4;
        case 0x1d66b8u: goto label_1d66b8;
        case 0x1d66bcu: goto label_1d66bc;
        case 0x1d66c0u: goto label_1d66c0;
        case 0x1d66c4u: goto label_1d66c4;
        case 0x1d66c8u: goto label_1d66c8;
        case 0x1d66ccu: goto label_1d66cc;
        case 0x1d66d0u: goto label_1d66d0;
        case 0x1d66d4u: goto label_1d66d4;
        case 0x1d66d8u: goto label_1d66d8;
        case 0x1d66dcu: goto label_1d66dc;
        case 0x1d66e0u: goto label_1d66e0;
        case 0x1d66e4u: goto label_1d66e4;
        case 0x1d66e8u: goto label_1d66e8;
        case 0x1d66ecu: goto label_1d66ec;
        case 0x1d66f0u: goto label_1d66f0;
        case 0x1d66f4u: goto label_1d66f4;
        case 0x1d66f8u: goto label_1d66f8;
        case 0x1d66fcu: goto label_1d66fc;
        case 0x1d6700u: goto label_1d6700;
        case 0x1d6704u: goto label_1d6704;
        case 0x1d6708u: goto label_1d6708;
        case 0x1d670cu: goto label_1d670c;
        case 0x1d6710u: goto label_1d6710;
        case 0x1d6714u: goto label_1d6714;
        case 0x1d6718u: goto label_1d6718;
        case 0x1d671cu: goto label_1d671c;
        case 0x1d6720u: goto label_1d6720;
        case 0x1d6724u: goto label_1d6724;
        case 0x1d6728u: goto label_1d6728;
        case 0x1d672cu: goto label_1d672c;
        case 0x1d6730u: goto label_1d6730;
        case 0x1d6734u: goto label_1d6734;
        case 0x1d6738u: goto label_1d6738;
        case 0x1d673cu: goto label_1d673c;
        case 0x1d6740u: goto label_1d6740;
        case 0x1d6744u: goto label_1d6744;
        case 0x1d6748u: goto label_1d6748;
        case 0x1d674cu: goto label_1d674c;
        case 0x1d6750u: goto label_1d6750;
        case 0x1d6754u: goto label_1d6754;
        case 0x1d6758u: goto label_1d6758;
        case 0x1d675cu: goto label_1d675c;
        case 0x1d6760u: goto label_1d6760;
        case 0x1d6764u: goto label_1d6764;
        case 0x1d6768u: goto label_1d6768;
        case 0x1d676cu: goto label_1d676c;
        case 0x1d6770u: goto label_1d6770;
        case 0x1d6774u: goto label_1d6774;
        case 0x1d6778u: goto label_1d6778;
        case 0x1d677cu: goto label_1d677c;
        case 0x1d6780u: goto label_1d6780;
        case 0x1d6784u: goto label_1d6784;
        case 0x1d6788u: goto label_1d6788;
        case 0x1d678cu: goto label_1d678c;
        case 0x1d6790u: goto label_1d6790;
        case 0x1d6794u: goto label_1d6794;
        case 0x1d6798u: goto label_1d6798;
        case 0x1d679cu: goto label_1d679c;
        case 0x1d67a0u: goto label_1d67a0;
        case 0x1d67a4u: goto label_1d67a4;
        case 0x1d67a8u: goto label_1d67a8;
        case 0x1d67acu: goto label_1d67ac;
        case 0x1d67b0u: goto label_1d67b0;
        case 0x1d67b4u: goto label_1d67b4;
        case 0x1d67b8u: goto label_1d67b8;
        case 0x1d67bcu: goto label_1d67bc;
        case 0x1d67c0u: goto label_1d67c0;
        case 0x1d67c4u: goto label_1d67c4;
        case 0x1d67c8u: goto label_1d67c8;
        case 0x1d67ccu: goto label_1d67cc;
        default: break;
    }

    ctx->pc = 0x1d6608u;

label_1d6608:
    // 0x1d6608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d660c:
    // 0x1d660c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d6610:
    // 0x1d6610: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d6610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d6614:
    // 0x1d6614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d6618:
    // 0x1d6618: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d6618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d661c:
    // 0x1d661c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d6620:
    // 0x1d6620: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d6620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d6624:
    // 0x1d6624: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d6628:
    // 0x1d6628: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d6628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d662c:
    // 0x1d662c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d6630:
    // 0x1d6630: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d6630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d6634:
    // 0x1d6634: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1d6638:
    // 0x1d6638: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d6638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d663c:
    // 0x1d663c: 0xc07623a  jal         func_1D88E8
label_1d6640:
    if (ctx->pc == 0x1D6640u) {
        ctx->pc = 0x1D6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D663Cu;
        // 0x1d6640: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6644u;
        goto label_1d6644;
    }
    ctx->pc = 0x1D663Cu;
    SET_GPR_U32(ctx, 31, 0x1D6644u);
    ctx->pc = 0x1D6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D663Cu;
    // 0x1d6640: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D663Cu, 0x1D6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6644u;
label_1d6644:
    // 0x1d6644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6648:
    // 0x1d6648: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
label_1d664c:
    // 0x1d664c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d664cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6650:
    // 0x1d6650: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d6650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d6654:
    // 0x1d6654: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d6654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6658:
    // 0x1d6658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d665c:
    if (ctx->pc == 0x1D665Cu) {
        ctx->pc = 0x1D665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6658u;
        // 0x1d665c: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6660u;
        goto label_1d6660;
    }
    ctx->pc = 0x1D6658u;
    {
        const bool branch_taken_0x1d6658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6658u;
        // 0x1d665c: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6658) {
            ctx->pc = 0x1D6680u;
            goto label_1d6680;
        }
    }
    ctx->pc = 0x1D6660u;
label_1d6660:
    // 0x1d6660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6664:
    // 0x1d6664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d6668:
    // 0x1d6668: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d666c:
    // 0x1d666c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d666cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d6670:
    // 0x1d6670: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d6670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6674:
    // 0x1d6674: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d6678:
    // 0x1d6678: 0x80761c6  j           func_1D8718
label_1d667c:
    if (ctx->pc == 0x1D667Cu) {
        ctx->pc = 0x1D667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6678u;
        // 0x1d667c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6680u;
        goto label_1d6680;
    }
    ctx->pc = 0x1D6678u;
    ctx->pc = 0x1D667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6678u;
    // 0x1d667c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D6678u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D6680u;
label_1d6680:
    // 0x1d6680: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_1d6684:
    // 0x1d6684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6688:
    // 0x1d6688: 0x40f809  jalr        $v0
label_1d668c:
    if (ctx->pc == 0x1D668Cu) {
        ctx->pc = 0x1D668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6688u;
        // 0x1d668c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6690u;
        goto label_1d6690;
    }
    ctx->pc = 0x1D6688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6690u);
        ctx->pc = 0x1D668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6688u;
        // 0x1d668c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6688u, 0x1D6690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6690u;
label_1d6690:
    // 0x1d6690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6694:
    // 0x1d6694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d6698:
    // 0x1d6698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d669c:
    // 0x1d669c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d669cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d66a0:
    // 0x1d66a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d66a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d66a4:
    // 0x1d66a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d66a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d66a8:
    // 0x1d66a8: 0x3e00008  jr          $ra
label_1d66ac:
    if (ctx->pc == 0x1D66ACu) {
        ctx->pc = 0x1D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66A8u;
        // 0x1d66ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D66B0u;
        goto label_1d66b0;
    }
    ctx->pc = 0x1D66A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66A8u;
        // 0x1d66ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66B0u;
label_1d66b0:
    // 0x1d66b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d66b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d66b4:
    // 0x1d66b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1d66b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1d66b8:
    // 0x1d66b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d66b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1d66bc:
    // 0x1d66bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d66bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d66c0:
    // 0x1d66c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1d66c4:
    // 0x1d66c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d66c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d66c8:
    // 0x1d66c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d66c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1d66cc:
    // 0x1d66cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d66ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d66d0:
    // 0x1d66d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d66d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1d66d4:
    // 0x1d66d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d66d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d66d8:
    // 0x1d66d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1d66dc:
    // 0x1d66dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d66dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d66e0:
    // 0x1d66e0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1d66e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d66e4:
    // 0x1d66e4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1d66e8:
    if (ctx->pc == 0x1D66E8u) {
        ctx->pc = 0x1D66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66E4u;
        // 0x1d66e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D66ECu;
        goto label_1d66ec;
    }
    ctx->pc = 0x1D66E4u;
    {
        const bool branch_taken_0x1d66e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d66e4) {
            ctx->pc = 0x1D66E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D66E4u;
            // 0x1d66e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6734u;
            goto label_1d6734;
        }
    }
    ctx->pc = 0x1D66ECu;
label_1d66ec:
    // 0x1d66ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d66ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d66f0:
    // 0x1d66f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d66f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d66f4:
    // 0x1d66f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d66f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d66f8:
    // 0x1d66f8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1d66f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d66fc:
    // 0x1d66fc: 0xc0759f4  jal         func_1D67D0
label_1d6700:
    if (ctx->pc == 0x1D6700u) {
        ctx->pc = 0x1D6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66FCu;
        // 0x1d6700: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6704u;
        goto label_1d6704;
    }
    ctx->pc = 0x1D66FCu;
    SET_GPR_U32(ctx, 31, 0x1D6704u);
    ctx->pc = 0x1D6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66FCu;
    // 0x1d6700: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67D0u, 0x1D66FCu, 0x1D6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6704u;
label_1d6704:
    // 0x1d6704: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d6708:
    // 0x1d6708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d6708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d670c:
    // 0x1d670c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d6710:
    // 0x1d6710: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1d6710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d6714:
    // 0x1d6714: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1d6714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1d6718:
    // 0x1d6718: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d671c:
    // 0x1d671c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1d671cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1d6720:
    // 0x1d6720: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1d6720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1d6724:
    // 0x1d6724: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d6724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_1d6728:
    // 0x1d6728: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1d672c:
    if (ctx->pc == 0x1D672Cu) {
        ctx->pc = 0x1D672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6728u;
        // 0x1d672c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6730u;
        goto label_1d6730;
    }
    ctx->pc = 0x1D6728u;
    {
        const bool branch_taken_0x1d6728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6728u;
        // 0x1d672c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6728) {
            ctx->pc = 0x1D66E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d66e0;
        }
    }
    ctx->pc = 0x1D6730u;
label_1d6730:
    // 0x1d6730: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d6734:
    // 0x1d6734: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1d6738:
    // 0x1d6738: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d6738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d673c:
    // 0x1d673c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1d6740:
    if (ctx->pc == 0x1D6740u) {
        ctx->pc = 0x1D6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D673Cu;
        // 0x1d6740: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6744u;
        goto label_1d6744;
    }
    ctx->pc = 0x1D673Cu;
    {
        const bool branch_taken_0x1d673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D673Cu;
        // 0x1d6740: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d673c) {
            ctx->pc = 0x1D67A8u;
            goto label_1d67a8;
        }
    }
    ctx->pc = 0x1D6744u;
label_1d6744:
    // 0x1d6744: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d6748:
    // 0x1d6748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d674c:
    if (ctx->pc == 0x1D674Cu) {
        ctx->pc = 0x1D674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6748u;
        // 0x1d674c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6750u;
        goto label_1d6750;
    }
    ctx->pc = 0x1D6748u;
    {
        const bool branch_taken_0x1d6748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6748u;
        // 0x1d674c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6748) {
            ctx->pc = 0x1D6760u;
            goto label_1d6760;
        }
    }
    ctx->pc = 0x1D6750u;
label_1d6750:
    // 0x1d6750: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d6750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1d6754:
    // 0x1d6754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6758:
    // 0x1d6758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d675c:
    // 0x1d675c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1d675cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1d6760:
    // 0x1d6760: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d6764:
    // 0x1d6764: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d6768:
    // 0x1d6768: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x1d6768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1d676c:
    // 0x1d676c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x1d676cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1d6770:
    // 0x1d6770: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1d6770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1d6774:
    // 0x1d6774: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1d6774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1d6778:
    // 0x1d6778: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x1d6778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1d677c:
    // 0x1d677c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x1d677cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1d6780:
    // 0x1d6780: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1d6780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1d6784:
    // 0x1d6784: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1d6784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1d6788:
    // 0x1d6788: 0xb043004f  sdl         $v1, 0x4F($v0)
    ctx->pc = 0x1d6788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d678c:
    // 0x1d678c: 0xb4430048  sdr         $v1, 0x48($v0)
    ctx->pc = 0x1d678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d6790:
    // 0x1d6790: 0xb0450057  sdl         $a1, 0x57($v0)
    ctx->pc = 0x1d6790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d6794:
    // 0x1d6794: 0xb4450050  sdr         $a1, 0x50($v0)
    ctx->pc = 0x1d6794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d6798:
    // 0x1d6798: 0xb046005f  sdl         $a2, 0x5F($v0)
    ctx->pc = 0x1d6798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d679c:
    // 0x1d679c: 0xb4460058  sdr         $a2, 0x58($v0)
    ctx->pc = 0x1d679cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d67a0:
    // 0x1d67a0: 0xb0470067  sdl         $a3, 0x67($v0)
    ctx->pc = 0x1d67a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d67a4:
    // 0x1d67a4: 0xb4470060  sdr         $a3, 0x60($v0)
    ctx->pc = 0x1d67a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d67a8:
    // 0x1d67a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d67a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d67ac:
    // 0x1d67ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d67acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d67b0:
    // 0x1d67b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d67b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d67b4:
    // 0x1d67b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d67b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d67b8:
    // 0x1d67b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d67b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d67bc:
    // 0x1d67bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d67bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d67c0:
    // 0x1d67c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d67c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d67c4:
    // 0x1d67c4: 0x3e00008  jr          $ra
label_1d67c8:
    if (ctx->pc == 0x1D67C8u) {
        ctx->pc = 0x1D67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67C4u;
        // 0x1d67c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D67CCu;
        goto label_1d67cc;
    }
    ctx->pc = 0x1D67C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67C4u;
        // 0x1d67c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67CCu;
label_1d67cc:
    // 0x1d67cc: 0x0  nop
    ctx->pc = 0x1d67ccu;
    // NOP
    if (ctx->pc == 0x1d67ccu) { ctx->pc = 0x1d67d0u; }
}
