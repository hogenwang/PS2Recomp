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

// Function: sub_002965F8
// Address: 0x2965f8 - 0x2966e8
void sub_002965F8_0x2965f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002965F8_0x2965f8");
#endif

    switch (ctx->pc) {
        case 0x296684u: goto label_296684;
        case 0x2966acu: goto label_2966ac;
        case 0x2966c0u: goto label_2966c0;
        default: break;
    }

    ctx->pc = 0x2965f8u;

    // 0x2965f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2965f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2965fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2965fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296600: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x296600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x296604: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x296604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296608: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x296608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29660c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29660cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296610: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296614: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x296614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296618: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29661c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29661cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296620: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x296620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x296624: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x296624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29662c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x29662Cu;
    {
        const bool branch_taken_0x29662c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29662Cu;
        // 0x296630: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29662c) {
            ctx->pc = 0x2966C4u;
            goto label_2966c4;
        }
    }
    ctx->pc = 0x296634u;
    // 0x296634: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x296634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x296638: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29663c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x29663cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x296640: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x296640u;
    {
        const bool branch_taken_0x296640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296640) {
            ctx->pc = 0x296644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296640u;
            // 0x296644: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29669Cu;
            goto label_29669c;
        }
    }
    ctx->pc = 0x296648u;
    // 0x296648: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29664c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29664Cu;
    {
        const bool branch_taken_0x29664c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29664c) {
            ctx->pc = 0x296650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29664Cu;
            // 0x296650: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x296654u;
            goto label_296654;
        }
    }
    ctx->pc = 0x296654u;
label_296654:
    // 0x296654: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x296658: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x296658u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29665c: 0x1810  mfhi        $v1
    ctx->pc = 0x29665cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x296660: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x296660u;
    {
        const bool branch_taken_0x296660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296660u;
        // 0x296664: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296660) {
            ctx->pc = 0x29669Cu;
            goto label_29669c;
        }
    }
    ctx->pc = 0x296668u;
    // 0x296668: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x296668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29666c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29666Cu;
    {
        const bool branch_taken_0x29666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29666Cu;
        // 0x296670: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29666c) {
            ctx->pc = 0x296690u;
            goto label_296690;
        }
    }
    ctx->pc = 0x296674u;
    // 0x296674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x296674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296678: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x29667c: 0xc049c48  jal         func_127120
    ctx->pc = 0x29667Cu;
    SET_GPR_U32(ctx, 31, 0x296684u);
    ctx->pc = 0x296680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29667Cu;
    // 0x296680: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x29667Cu, 0x296684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296684u;
label_296684:
    // 0x296684: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x296684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x296688: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x296688u;
    {
        const bool branch_taken_0x296688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296688u;
        // 0x29668c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296688) {
            ctx->pc = 0x2966C4u;
            goto label_2966c4;
        }
    }
    ctx->pc = 0x296690u;
label_296690:
    // 0x296690: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x296690u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296694: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x296694u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x296698: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x296698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29669c:
    // 0x29669c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2966a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a4: 0xc0a5928  jal         func_2964A0
    ctx->pc = 0x2966A4u;
    SET_GPR_U32(ctx, 31, 0x2966ACu);
    ctx->pc = 0x2966A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966A4u;
    // 0x2966a8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2964A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2964A0u, 0x2966A4u, 0x2966ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966ACu;
label_2966ac:
    // 0x2966ac: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2966ACu;
    {
        const bool branch_taken_0x2966ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966ACu;
        // 0x2966b0: 0x2712821  addu        $a1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966ac) {
            ctx->pc = 0x2966C4u;
            goto label_2966c4;
        }
    }
    ctx->pc = 0x2966B4u;
    // 0x2966b4: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x2966b8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2966B8u;
    SET_GPR_U32(ctx, 31, 0x2966C0u);
    ctx->pc = 0x2966BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966B8u;
    // 0x2966bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2966B8u, 0x2966C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966C0u;
label_2966c0:
    // 0x2966c0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x2966c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_2966c4:
    // 0x2966c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2966c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2966c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2966c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2966cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2966ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2966d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2966d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2966d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2966d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2966d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2966dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2966dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2966e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2966E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966E0u;
        // 0x2966e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2966E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2966E8u;
}
