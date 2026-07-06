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

// Function: sub_001DB4E8
// Address: 0x1db4e8 - 0x1db6b0
void sub_001DB4E8_0x1db4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB4E8_0x1db4e8");
#endif

    switch (ctx->pc) {
        case 0x1db4e8u: goto label_1db4e8;
        case 0x1db4ecu: goto label_1db4ec;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db4f4u: goto label_1db4f4;
        case 0x1db4f8u: goto label_1db4f8;
        case 0x1db4fcu: goto label_1db4fc;
        case 0x1db500u: goto label_1db500;
        case 0x1db504u: goto label_1db504;
        case 0x1db508u: goto label_1db508;
        case 0x1db50cu: goto label_1db50c;
        case 0x1db510u: goto label_1db510;
        case 0x1db514u: goto label_1db514;
        case 0x1db518u: goto label_1db518;
        case 0x1db51cu: goto label_1db51c;
        case 0x1db520u: goto label_1db520;
        case 0x1db524u: goto label_1db524;
        case 0x1db528u: goto label_1db528;
        case 0x1db52cu: goto label_1db52c;
        case 0x1db530u: goto label_1db530;
        case 0x1db534u: goto label_1db534;
        case 0x1db538u: goto label_1db538;
        case 0x1db53cu: goto label_1db53c;
        case 0x1db540u: goto label_1db540;
        case 0x1db544u: goto label_1db544;
        case 0x1db548u: goto label_1db548;
        case 0x1db54cu: goto label_1db54c;
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        default: break;
    }

    ctx->pc = 0x1db4e8u;

label_1db4e8:
    // 0x1db4e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1db4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1db4ec:
    // 0x1db4ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1db4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1db4f0:
    // 0x1db4f0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1db4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1db4f4:
    // 0x1db4f4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1db4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1db4f8:
    // 0x1db4f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db4f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db4fc:
    // 0x1db4fc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1db4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1db500:
    // 0x1db500: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1db500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db504:
    // 0x1db504: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1db504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1db508:
    // 0x1db508: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1db508u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db50c:
    // 0x1db50c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1db50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1db510:
    // 0x1db510: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1db510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1db514:
    // 0x1db514: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1db514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1db518:
    // 0x1db518: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1db518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1db51c:
    // 0x1db51c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1db51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1db520:
    // 0x1db520: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1db520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1db524:
    // 0x1db524: 0x8e7603d4  lw          $s6, 0x3D4($s3)
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 980)));
label_1db528:
    // 0x1db528: 0x10000002  b           . + 4 + (0x2 << 2)
label_1db52c:
    if (ctx->pc == 0x1DB52Cu) {
        ctx->pc = 0x1DB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB528u;
        // 0x1db52c: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB530u;
        goto label_1db530;
    }
    ctx->pc = 0x1DB528u;
    {
        const bool branch_taken_0x1db528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB528u;
        // 0x1db52c: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db528) {
            ctx->pc = 0x1DB534u;
            goto label_1db534;
        }
    }
    ctx->pc = 0x1DB530u;
label_1db530:
    // 0x1db530: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db534:
    // 0x1db534: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1db534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1db538:
    // 0x1db538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1db53c:
    if (ctx->pc == 0x1DB53Cu) {
        ctx->pc = 0x1DB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB538u;
        // 0x1db53c: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB540u;
        goto label_1db540;
    }
    ctx->pc = 0x1DB538u;
    {
        const bool branch_taken_0x1db538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB538u;
        // 0x1db53c: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db538) {
            ctx->pc = 0x1DB550u;
            goto label_1db550;
        }
    }
    ctx->pc = 0x1DB540u;
label_1db540:
    // 0x1db540: 0xc0762c0  jal         func_1D8B00
label_1db544:
    if (ctx->pc == 0x1DB544u) {
        ctx->pc = 0x1DB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB540u;
        // 0x1db544: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB548u;
        goto label_1db548;
    }
    ctx->pc = 0x1DB540u;
    SET_GPR_U32(ctx, 31, 0x1DB548u);
    ctx->pc = 0x1DB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB540u;
    // 0x1db544: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DB540u, 0x1DB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB548u;
label_1db548:
    // 0x1db548: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_1db54c:
    if (ctx->pc == 0x1DB54Cu) {
        ctx->pc = 0x1DB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB548u;
        // 0x1db54c: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB550u;
        goto label_1db550;
    }
    ctx->pc = 0x1DB548u;
    {
        const bool branch_taken_0x1db548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB548u;
        // 0x1db54c: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db548) {
            ctx->pc = 0x1DB530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db530;
        }
    }
    ctx->pc = 0x1DB550u;
label_1db550:
    // 0x1db550: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db554:
    // 0x1db554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db558:
    // 0x1db558: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
label_1db55c:
    if (ctx->pc == 0x1DB55Cu) {
        ctx->pc = 0x1DB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB558u;
        // 0x1db55c: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB560u;
        goto label_1db560;
    }
    ctx->pc = 0x1DB558u;
    {
        const bool branch_taken_0x1db558 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB558u;
        // 0x1db55c: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db558) {
            ctx->pc = 0x1DB574u;
            goto label_1db574;
        }
    }
    ctx->pc = 0x1DB560u;
label_1db560:
    // 0x1db560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db564:
    // 0x1db564: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1db564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1db568:
    // 0x1db568: 0xc076dac  jal         func_1DB6B0
label_1db56c:
    if (ctx->pc == 0x1DB56Cu) {
        ctx->pc = 0x1DB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB568u;
        // 0x1db56c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB570u;
        goto label_1db570;
    }
    ctx->pc = 0x1DB568u;
    SET_GPR_U32(ctx, 31, 0x1DB570u);
    ctx->pc = 0x1DB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB568u;
    // 0x1db56c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB6B0u, 0x1DB568u, 0x1DB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB570u;
label_1db570:
    // 0x1db570: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1db570u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db574:
    // 0x1db574: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_1db578:
    // 0x1db578: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1db57c:
    // 0x1db57c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db580:
    // 0x1db580: 0x245403d0  addiu       $s4, $v0, 0x3D0
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
label_1db584:
    // 0x1db584: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_1db588:
    // 0x1db588: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1db58c:
    // 0x1db58c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_1db590:
    if (ctx->pc == 0x1DB590u) {
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB594u;
        goto label_1db594;
    }
    ctx->pc = 0x1DB58Cu;
    {
        const bool branch_taken_0x1db58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db58c) {
            ctx->pc = 0x1DB64Cu;
            goto label_1db64c;
        }
    }
    ctx->pc = 0x1DB594u;
label_1db594:
    // 0x1db594: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db598:
    // 0x1db598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db59c:
    // 0x1db59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db5a0:
    // 0x1db5a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1db5a4:
    // 0x1db5a4: 0x40f809  jalr        $v0
label_1db5a8:
    if (ctx->pc == 0x1DB5A8u) {
        ctx->pc = 0x1DB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5A4u;
        // 0x1db5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5ACu;
        goto label_1db5ac;
    }
    ctx->pc = 0x1DB5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB5ACu);
        ctx->pc = 0x1DB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5A4u;
        // 0x1db5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5A4u, 0x1DB5ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB5ACu;
label_1db5ac:
    // 0x1db5ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1db5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1db5b0:
    // 0x1db5b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1db5b4:
    // 0x1db5b4: 0xc049c48  jal         func_127120
label_1db5b8:
    if (ctx->pc == 0x1DB5B8u) {
        ctx->pc = 0x1DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B4u;
        // 0x1db5b8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5BCu;
        goto label_1db5bc;
    }
    ctx->pc = 0x1DB5B4u;
    SET_GPR_U32(ctx, 31, 0x1DB5BCu);
    ctx->pc = 0x1DB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5B4u;
    // 0x1db5b8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1DB5B4u, 0x1DB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5BCu;
label_1db5bc:
    // 0x1db5bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db5c0:
    // 0x1db5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db5c4:
    // 0x1db5c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db5c8:
    // 0x1db5c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db5cc:
    // 0x1db5cc: 0x40f809  jalr        $v0
label_1db5d0:
    if (ctx->pc == 0x1DB5D0u) {
        ctx->pc = 0x1DB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5CCu;
        // 0x1db5d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5D4u;
        goto label_1db5d4;
    }
    ctx->pc = 0x1DB5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB5D4u);
        ctx->pc = 0x1DB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5CCu;
        // 0x1db5d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5CCu, 0x1DB5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB5D4u;
label_1db5d4:
    // 0x1db5d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1db5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1db5d8:
    // 0x1db5d8: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1db5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1db5dc:
    // 0x1db5dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1db5e0:
    if (ctx->pc == 0x1DB5E0u) {
        ctx->pc = 0x1DB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5DCu;
        // 0x1db5e0: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5E4u;
        goto label_1db5e4;
    }
    ctx->pc = 0x1DB5DCu;
    {
        const bool branch_taken_0x1db5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5DCu;
        // 0x1db5e0: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5dc) {
            ctx->pc = 0x1DB634u;
            goto label_1db634;
        }
    }
    ctx->pc = 0x1DB5E4u;
label_1db5e4:
    // 0x1db5e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db5e8:
    // 0x1db5e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1db5ec:
    // 0x1db5ec: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1db5f0:
    // 0x1db5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db5f4:
    // 0x1db5f4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1db5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1db5f8:
    // 0x1db5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db5fc:
    // 0x1db5fc: 0x40f809  jalr        $v0
label_1db600:
    if (ctx->pc == 0x1DB600u) {
        ctx->pc = 0x1DB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5FCu;
        // 0x1db600: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB604u;
        goto label_1db604;
    }
    ctx->pc = 0x1DB5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB604u);
        ctx->pc = 0x1DB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5FCu;
        // 0x1db600: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5FCu, 0x1DB604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB604u;
label_1db604:
    // 0x1db604: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1db608:
    // 0x1db608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1db60c:
    // 0x1db60c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1db610:
    // 0x1db610: 0xc049c48  jal         func_127120
label_1db614:
    if (ctx->pc == 0x1DB614u) {
        ctx->pc = 0x1DB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB610u;
        // 0x1db614: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB618u;
        goto label_1db618;
    }
    ctx->pc = 0x1DB610u;
    SET_GPR_U32(ctx, 31, 0x1DB618u);
    ctx->pc = 0x1DB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB610u;
    // 0x1db614: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1DB610u, 0x1DB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB618u;
label_1db618:
    // 0x1db618: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db61c:
    // 0x1db61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db620:
    // 0x1db620: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1db620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db624:
    // 0x1db624: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db628:
    // 0x1db628: 0x40f809  jalr        $v0
label_1db62c:
    if (ctx->pc == 0x1DB62Cu) {
        ctx->pc = 0x1DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB628u;
        // 0x1db62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB630u;
        goto label_1db630;
    }
    ctx->pc = 0x1DB628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB630u);
        ctx->pc = 0x1DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB628u;
        // 0x1db62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB628u, 0x1DB630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB630u;
label_1db630:
    // 0x1db630: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1db630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_1db634:
    // 0x1db634: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1db638:
    // 0x1db638: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1db63c:
    if (ctx->pc == 0x1DB63Cu) {
        ctx->pc = 0x1DB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB638u;
        // 0x1db63c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB640u;
        goto label_1db640;
    }
    ctx->pc = 0x1DB638u;
    {
        const bool branch_taken_0x1db638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db638) {
            ctx->pc = 0x1DB63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB638u;
            // 0x1db63c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB650u;
            goto label_1db650;
        }
    }
    ctx->pc = 0x1DB640u;
label_1db640:
    // 0x1db640: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1db640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1db644:
    // 0x1db644: 0x60f809  jalr        $v1
label_1db648:
    if (ctx->pc == 0x1DB648u) {
        ctx->pc = 0x1DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB644u;
        // 0x1db648: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB64Cu;
        goto label_1db64c;
    }
    ctx->pc = 0x1DB644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB64Cu);
        ctx->pc = 0x1DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB644u;
        // 0x1db648: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB644u, 0x1DB64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB64Cu;
label_1db64c:
    // 0x1db64c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db650:
    // 0x1db650: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
label_1db654:
    if (ctx->pc == 0x1DB654u) {
        ctx->pc = 0x1DB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB650u;
        // 0x1db654: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB658u;
        goto label_1db658;
    }
    ctx->pc = 0x1DB650u;
    {
        const bool branch_taken_0x1db650 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB650u;
        // 0x1db654: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db650) {
            ctx->pc = 0x1DB67Cu;
            goto label_1db67c;
        }
    }
    ctx->pc = 0x1DB658u;
label_1db658:
    // 0x1db658: 0x8e640408  lw          $a0, 0x408($s3)
    ctx->pc = 0x1db658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1032)));
label_1db65c:
    // 0x1db65c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1db660:
    if (ctx->pc == 0x1DB660u) {
        ctx->pc = 0x1DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB65Cu;
        // 0x1db660: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB664u;
        goto label_1db664;
    }
    ctx->pc = 0x1DB65Cu;
    {
        const bool branch_taken_0x1db65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB65Cu;
        // 0x1db660: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db65c) {
            ctx->pc = 0x1DB67Cu;
            goto label_1db67c;
        }
    }
    ctx->pc = 0x1DB664u;
label_1db664:
    // 0x1db664: 0x8e66040c  lw          $a2, 0x40C($s3)
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1036)));
label_1db668:
    // 0x1db668: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x1db668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1db66c:
    // 0x1db66c: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x1db66cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_1db670:
    // 0x1db670: 0xc049c48  jal         func_127120
label_1db674:
    if (ctx->pc == 0x1DB674u) {
        ctx->pc = 0x1DB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB670u;
        // 0x1db674: 0xae660410  sw          $a2, 0x410($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1040), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB678u;
        goto label_1db678;
    }
    ctx->pc = 0x1DB670u;
    SET_GPR_U32(ctx, 31, 0x1DB678u);
    ctx->pc = 0x1DB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB670u;
    // 0x1db674: 0xae660410  sw          $a2, 0x410($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1040), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1DB670u, 0x1DB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB678u;
label_1db678:
    // 0x1db678: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1db678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1db67c:
    // 0x1db67c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1db67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db680:
    // 0x1db680: 0x2fe100a  movz        $v0, $s7, $fp
    ctx->pc = 0x1db680u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_1db684:
    // 0x1db684: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1db684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1db688:
    // 0x1db688: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1db688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db68c:
    // 0x1db68c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1db68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1db690:
    // 0x1db690: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1db690u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1db694:
    // 0x1db694: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1db694u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1db698:
    // 0x1db698: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1db698u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1db69c:
    // 0x1db69c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1db6a0:
    // 0x1db6a0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1db6a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1db6a4:
    // 0x1db6a4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1db6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1db6a8:
    // 0x1db6a8: 0x3e00008  jr          $ra
label_1db6ac:
    if (ctx->pc == 0x1DB6ACu) {
        ctx->pc = 0x1DB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6A8u;
        // 0x1db6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6B0u;
        goto label_fallthrough_0x1db6a8;
    }
    ctx->pc = 0x1DB6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6A8u;
        // 0x1db6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db6a8:
    ctx->pc = 0x1DB6B0u;
}
