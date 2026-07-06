#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031E590
// Address: 0x31e590 - 0x31e7f0
void sub_0031E590_0x31e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E590_0x31e590");
#endif

    switch (ctx->pc) {
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        case 0x31e5d8u: goto label_31e5d8;
        case 0x31e5dcu: goto label_31e5dc;
        case 0x31e5e0u: goto label_31e5e0;
        case 0x31e5e4u: goto label_31e5e4;
        case 0x31e5e8u: goto label_31e5e8;
        case 0x31e5ecu: goto label_31e5ec;
        case 0x31e5f0u: goto label_31e5f0;
        case 0x31e5f4u: goto label_31e5f4;
        case 0x31e5f8u: goto label_31e5f8;
        case 0x31e5fcu: goto label_31e5fc;
        case 0x31e600u: goto label_31e600;
        case 0x31e604u: goto label_31e604;
        case 0x31e608u: goto label_31e608;
        case 0x31e60cu: goto label_31e60c;
        case 0x31e610u: goto label_31e610;
        case 0x31e614u: goto label_31e614;
        case 0x31e618u: goto label_31e618;
        case 0x31e61cu: goto label_31e61c;
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        case 0x31e738u: goto label_31e738;
        case 0x31e73cu: goto label_31e73c;
        case 0x31e740u: goto label_31e740;
        case 0x31e744u: goto label_31e744;
        case 0x31e748u: goto label_31e748;
        case 0x31e74cu: goto label_31e74c;
        case 0x31e750u: goto label_31e750;
        case 0x31e754u: goto label_31e754;
        case 0x31e758u: goto label_31e758;
        case 0x31e75cu: goto label_31e75c;
        case 0x31e760u: goto label_31e760;
        case 0x31e764u: goto label_31e764;
        case 0x31e768u: goto label_31e768;
        case 0x31e76cu: goto label_31e76c;
        case 0x31e770u: goto label_31e770;
        case 0x31e774u: goto label_31e774;
        case 0x31e778u: goto label_31e778;
        case 0x31e77cu: goto label_31e77c;
        case 0x31e780u: goto label_31e780;
        case 0x31e784u: goto label_31e784;
        case 0x31e788u: goto label_31e788;
        case 0x31e78cu: goto label_31e78c;
        case 0x31e790u: goto label_31e790;
        case 0x31e794u: goto label_31e794;
        case 0x31e798u: goto label_31e798;
        case 0x31e79cu: goto label_31e79c;
        case 0x31e7a0u: goto label_31e7a0;
        case 0x31e7a4u: goto label_31e7a4;
        case 0x31e7a8u: goto label_31e7a8;
        case 0x31e7acu: goto label_31e7ac;
        case 0x31e7b0u: goto label_31e7b0;
        case 0x31e7b4u: goto label_31e7b4;
        case 0x31e7b8u: goto label_31e7b8;
        case 0x31e7bcu: goto label_31e7bc;
        case 0x31e7c0u: goto label_31e7c0;
        case 0x31e7c4u: goto label_31e7c4;
        case 0x31e7c8u: goto label_31e7c8;
        case 0x31e7ccu: goto label_31e7cc;
        case 0x31e7d0u: goto label_31e7d0;
        case 0x31e7d4u: goto label_31e7d4;
        case 0x31e7d8u: goto label_31e7d8;
        case 0x31e7dcu: goto label_31e7dc;
        case 0x31e7e0u: goto label_31e7e0;
        case 0x31e7e4u: goto label_31e7e4;
        case 0x31e7e8u: goto label_31e7e8;
        case 0x31e7ecu: goto label_31e7ec;
        default: break;
    }

    ctx->pc = 0x31e590u;

label_31e590:
    // 0x31e590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31e594:
    // 0x31e594: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x31e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
label_31e598:
    // 0x31e598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31e59c:
    // 0x31e59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31e5a0:
    // 0x31e5a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31e5a4:
    // 0x31e5a4: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x31e5a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
label_31e5a8:
    // 0x31e5a8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_31e5ac:
    if (ctx->pc == 0x31E5ACu) {
        ctx->pc = 0x31E5B0u;
        goto label_31e5b0;
    }
    ctx->pc = 0x31E5A8u;
    {
        const bool branch_taken_0x31e5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e5a8) {
            ctx->pc = 0x31E5C4u;
            goto label_31e5c4;
        }
    }
    ctx->pc = 0x31E5B0u;
label_31e5b0:
    // 0x31e5b0: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
label_31e5b4:
    // 0x31e5b4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e5b8:
    // 0x31e5b8: 0x8c8429e0  lw          $a0, 0x29E0($a0)
    ctx->pc = 0x31e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10720)));
label_31e5bc:
    // 0x31e5bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_31e5c0:
    if (ctx->pc == 0x31E5C0u) {
        ctx->pc = 0x31E5C0u;
            // 0x31e5c0: 0xac6429e8  sw          $a0, 0x29E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 4));
        ctx->pc = 0x31E5C4u;
        goto label_31e5c4;
    }
    ctx->pc = 0x31E5BCu;
    {
        const bool branch_taken_0x31e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5BCu;
            // 0x31e5c0: 0xac6429e8  sw          $a0, 0x29E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10728), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5bc) {
            ctx->pc = 0x31E5D4u;
            goto label_31e5d4;
        }
    }
    ctx->pc = 0x31E5C4u;
label_31e5c4:
    // 0x31e5c4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
label_31e5c8:
    // 0x31e5c8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e5cc:
    // 0x31e5cc: 0x8c8429e8  lw          $a0, 0x29E8($a0)
    ctx->pc = 0x31e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10728)));
label_31e5d0:
    // 0x31e5d0: 0xac6429e0  sw          $a0, 0x29E0($v1)
    ctx->pc = 0x31e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 4));
label_31e5d4:
    // 0x31e5d4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e5d8:
    // 0x31e5d8: 0x8c6429e0  lw          $a0, 0x29E0($v1)
    ctx->pc = 0x31e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
label_31e5dc:
    // 0x31e5dc: 0x5080007d  beql        $a0, $zero, . + 4 + (0x7D << 2)
label_31e5e0:
    if (ctx->pc == 0x31E5E0u) {
        ctx->pc = 0x31E5E0u;
            // 0x31e5e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x31E5E4u;
        goto label_31e5e4;
    }
    ctx->pc = 0x31E5DCu;
    {
        const bool branch_taken_0x31e5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5dc) {
            ctx->pc = 0x31E5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5DCu;
            // 0x31e5e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E7D4u;
            goto label_31e7d4;
        }
    }
    ctx->pc = 0x31E5E4u;
label_31e5e4:
    // 0x31e5e4: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
label_31e5e8:
    if (ctx->pc == 0x31E5E8u) {
        ctx->pc = 0x31E5E8u;
            // 0x31e5e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E5ECu;
        goto label_31e5ec;
    }
    ctx->pc = 0x31E5E4u;
    {
        const bool branch_taken_0x31e5e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x31E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5E4u;
            // 0x31e5e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5e4) {
            ctx->pc = 0x31E6E0u;
            goto label_31e6e0;
        }
    }
    ctx->pc = 0x31E5ECu;
label_31e5ec:
    // 0x31e5ec: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x31e5ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_31e5f0:
    // 0x31e5f0: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_31e5f4:
    if (ctx->pc == 0x31E5F4u) {
        ctx->pc = 0x31E5F4u;
            // 0x31e5f4: 0x2485fff8  addiu       $a1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x31E5F8u;
        goto label_31e5f8;
    }
    ctx->pc = 0x31E5F0u;
    {
        const bool branch_taken_0x31e5f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5F0u;
            // 0x31e5f4: 0x2485fff8  addiu       $a1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5f0) {
            ctx->pc = 0x31E680u;
            goto label_31e680;
        }
    }
    ctx->pc = 0x31E5F8u;
label_31e5f8:
    // 0x31e5f8: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_31e5fc:
    if (ctx->pc == 0x31E5FCu) {
        ctx->pc = 0x31E5FCu;
            // 0x31e5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E600u;
        goto label_31e600;
    }
    ctx->pc = 0x31E5F8u;
    {
        const bool branch_taken_0x31e5f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5F8u;
            // 0x31e5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5f8) {
            ctx->pc = 0x31E618u;
            goto label_31e618;
        }
    }
    ctx->pc = 0x31E600u;
label_31e600:
    // 0x31e600: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x31e600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_31e604:
    // 0x31e604: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x31e604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_31e608:
    // 0x31e608: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x31e608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_31e60c:
    // 0x31e60c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_31e610:
    if (ctx->pc == 0x31E610u) {
        ctx->pc = 0x31E614u;
        goto label_31e614;
    }
    ctx->pc = 0x31E60Cu;
    {
        const bool branch_taken_0x31e60c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e60c) {
            ctx->pc = 0x31E618u;
            goto label_31e618;
        }
    }
    ctx->pc = 0x31E614u;
label_31e614:
    // 0x31e614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31e614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e618:
    // 0x31e618: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_31e61c:
    if (ctx->pc == 0x31E61Cu) {
        ctx->pc = 0x31E620u;
        goto label_31e620;
    }
    ctx->pc = 0x31E618u;
    {
        const bool branch_taken_0x31e618 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e618) {
            ctx->pc = 0x31E680u;
            goto label_31e680;
        }
    }
    ctx->pc = 0x31E620u;
label_31e620:
    // 0x31e620: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
label_31e624:
    // 0x31e624: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31e624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
label_31e628:
    // 0x31e628: 0x24e74df0  addiu       $a3, $a3, 0x4DF0
    ctx->pc = 0x31e628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19952));
label_31e62c:
    // 0x31e62c: 0x24c647b0  addiu       $a2, $a2, 0x47B0
    ctx->pc = 0x31e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18352));
label_31e630:
    // 0x31e630: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x31e630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_31e634:
    // 0x31e634: 0x24e40118  addiu       $a0, $a3, 0x118
    ctx->pc = 0x31e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 280));
label_31e638:
    // 0x31e638: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x31e638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_31e63c:
    // 0x31e63c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31e640:
    // 0x31e640: 0x24e40230  addiu       $a0, $a3, 0x230
    ctx->pc = 0x31e640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 560));
label_31e644:
    // 0x31e644: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x31e644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_31e648:
    // 0x31e648: 0x24e40348  addiu       $a0, $a3, 0x348
    ctx->pc = 0x31e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 840));
label_31e64c:
    // 0x31e64c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x31e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_31e650:
    // 0x31e650: 0x24e40460  addiu       $a0, $a3, 0x460
    ctx->pc = 0x31e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1120));
label_31e654:
    // 0x31e654: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x31e654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_31e658:
    // 0x31e658: 0x24e40578  addiu       $a0, $a3, 0x578
    ctx->pc = 0x31e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1400));
label_31e65c:
    // 0x31e65c: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x31e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_31e660:
    // 0x31e660: 0x24e40690  addiu       $a0, $a3, 0x690
    ctx->pc = 0x31e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1680));
label_31e664:
    // 0x31e664: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x31e664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
label_31e668:
    // 0x31e668: 0x24e407a8  addiu       $a0, $a3, 0x7A8
    ctx->pc = 0x31e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1960));
label_31e66c:
    // 0x31e66c: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x31e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
label_31e670:
    // 0x31e670: 0x24e708c0  addiu       $a3, $a3, 0x8C0
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2240));
label_31e674:
    // 0x31e674: 0x65202a  slt         $a0, $v1, $a1
    ctx->pc = 0x31e674u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_31e678:
    // 0x31e678: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
label_31e67c:
    if (ctx->pc == 0x31E67Cu) {
        ctx->pc = 0x31E67Cu;
            // 0x31e67c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x31E680u;
        goto label_31e680;
    }
    ctx->pc = 0x31E678u;
    {
        const bool branch_taken_0x31e678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E678u;
            // 0x31e67c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e678) {
            ctx->pc = 0x31E630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e630;
        }
    }
    ctx->pc = 0x31E680u;
label_31e680:
    // 0x31e680: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31e680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
label_31e684:
    // 0x31e684: 0x8c8929e0  lw          $t1, 0x29E0($a0)
    ctx->pc = 0x31e684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10720)));
label_31e688:
    // 0x31e688: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x31e688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_31e68c:
    // 0x31e68c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_31e690:
    if (ctx->pc == 0x31E690u) {
        ctx->pc = 0x31E694u;
        goto label_31e694;
    }
    ctx->pc = 0x31E68Cu;
    {
        const bool branch_taken_0x31e68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e68c) {
            ctx->pc = 0x31E6E0u;
            goto label_31e6e0;
        }
    }
    ctx->pc = 0x31E694u;
label_31e694:
    // 0x31e694: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x31e694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_31e698:
    // 0x31e698: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31e698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
label_31e69c:
    // 0x31e69c: 0x834023  subu        $t0, $a0, $v1
    ctx->pc = 0x31e69cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_31e6a0:
    // 0x31e6a0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31e6a4:
    // 0x31e6a4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
label_31e6a8:
    // 0x31e6a8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x31e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_31e6ac:
    // 0x31e6ac: 0x248447b0  addiu       $a0, $a0, 0x47B0
    ctx->pc = 0x31e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
label_31e6b0:
    // 0x31e6b0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31e6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_31e6b4:
    // 0x31e6b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x31e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31e6b8:
    // 0x31e6b8: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x31e6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
label_31e6bc:
    // 0x31e6bc: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x31e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_31e6c0:
    // 0x31e6c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x31e6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_31e6c4:
    // 0x31e6c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31e6c8:
    // 0x31e6c8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x31e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_31e6cc:
    // 0x31e6cc: 0x69202a  slt         $a0, $v1, $t1
    ctx->pc = 0x31e6ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_31e6d0:
    // 0x31e6d0: 0x24c60118  addiu       $a2, $a2, 0x118
    ctx->pc = 0x31e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 280));
label_31e6d4:
    // 0x31e6d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_31e6d8:
    // 0x31e6d8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e6c4;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e6e4:
    // 0x31e6e4: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
label_31e6e8:
    // 0x31e6e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x31e6e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_31e6ec:
    // 0x31e6ec: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_31e6f0:
    if (ctx->pc == 0x31E6F0u) {
        ctx->pc = 0x31E6F4u;
        goto label_31e6f4;
    }
    ctx->pc = 0x31E6ECu;
    {
        const bool branch_taken_0x31e6ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6ec) {
            ctx->pc = 0x31E758u;
            goto label_31e758;
        }
    }
    ctx->pc = 0x31E6F4u;
label_31e6f4:
    // 0x31e6f4: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31e6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
label_31e6f8:
    // 0x31e6f8: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x31e6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31e6fc:
    // 0x31e6fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e700:
    // 0x31e700: 0x250847b0  addiu       $t0, $t0, 0x47B0
    ctx->pc = 0x31e700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18352));
label_31e704:
    // 0x31e704: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31e704u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e708:
    // 0x31e708: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
label_31e70c:
    if (ctx->pc == 0x31E70Cu) {
        ctx->pc = 0x31E70Cu;
            // 0x31e70c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E710u;
        goto label_31e710;
    }
    ctx->pc = 0x31E708u;
    {
        const bool branch_taken_0x31e708 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x31E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E708u;
            // 0x31e70c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e708) {
            ctx->pc = 0x31E750u;
            goto label_31e750;
        }
    }
    ctx->pc = 0x31E710u;
label_31e710:
    // 0x31e710: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x31e710u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31e714:
    // 0x31e714: 0x0  nop
    ctx->pc = 0x31e714u;
    // NOP
label_31e718:
    // 0x31e718: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x31e718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_31e71c:
    // 0x31e71c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x31e71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_31e720:
    // 0x31e720: 0x8ce30110  lw          $v1, 0x110($a3)
    ctx->pc = 0x31e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 272)));
label_31e724:
    // 0x31e724: 0x8cc50110  lw          $a1, 0x110($a2)
    ctx->pc = 0x31e724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
label_31e728:
    // 0x31e728: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x31e728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31e72c:
    // 0x31e72c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_31e730:
    if (ctx->pc == 0x31E730u) {
        ctx->pc = 0x31E734u;
        goto label_31e734;
    }
    ctx->pc = 0x31E72Cu;
    {
        const bool branch_taken_0x31e72c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e72c) {
            ctx->pc = 0x31E740u;
            goto label_31e740;
        }
    }
    ctx->pc = 0x31E734u;
label_31e734:
    // 0x31e734: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x31e734u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_31e738:
    // 0x31e738: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x31e738u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e73c:
    // 0x31e73c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x31e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_31e740:
    // 0x31e740: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31e740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_31e744:
    // 0x31e744: 0x149182a  slt         $v1, $t2, $t1
    ctx->pc = 0x31e744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_31e748:
    // 0x31e748: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_31e74c:
    if (ctx->pc == 0x31E74Cu) {
        ctx->pc = 0x31E74Cu;
            // 0x31e74c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->pc = 0x31E750u;
        goto label_31e750;
    }
    ctx->pc = 0x31E748u;
    {
        const bool branch_taken_0x31e748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E748u;
            // 0x31e74c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e748) {
            ctx->pc = 0x31E718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e718;
        }
    }
    ctx->pc = 0x31E750u;
label_31e750:
    // 0x31e750: 0x5580ffed  bnel        $t4, $zero, . + 4 + (-0x13 << 2)
label_31e754:
    if (ctx->pc == 0x31E754u) {
        ctx->pc = 0x31E754u;
            // 0x31e754: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E758u;
        goto label_31e758;
    }
    ctx->pc = 0x31E750u;
    {
        const bool branch_taken_0x31e750 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e750) {
            ctx->pc = 0x31E754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31E750u;
            // 0x31e754: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31E708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E758u;
label_31e758:
    // 0x31e758: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e75c:
    // 0x31e75c: 0xac6047a0  sw          $zero, 0x47A0($v1)
    ctx->pc = 0x31e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18336), GPR_U32(ctx, 0));
label_31e760:
    // 0x31e760: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e764:
    // 0x31e764: 0xac60479c  sw          $zero, 0x479C($v1)
    ctx->pc = 0x31e764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18332), GPR_U32(ctx, 0));
label_31e768:
    // 0x31e768: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e76c:
    // 0x31e76c: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x31e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
label_31e770:
    // 0x31e770: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e774:
    // 0x31e774: 0xac604794  sw          $zero, 0x4794($v1)
    ctx->pc = 0x31e774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18324), GPR_U32(ctx, 0));
label_31e778:
    // 0x31e778: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e77c:
    // 0x31e77c: 0xac604790  sw          $zero, 0x4790($v1)
    ctx->pc = 0x31e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18320), GPR_U32(ctx, 0));
label_31e780:
    // 0x31e780: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e784:
    // 0x31e784: 0xac604780  sw          $zero, 0x4780($v1)
    ctx->pc = 0x31e784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18304), GPR_U32(ctx, 0));
label_31e788:
    // 0x31e788: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e78c:
    // 0x31e78c: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
label_31e790:
    // 0x31e790: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_31e794:
    if (ctx->pc == 0x31E794u) {
        ctx->pc = 0x31E794u;
            // 0x31e794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31E798u;
        goto label_31e798;
    }
    ctx->pc = 0x31E790u;
    {
        const bool branch_taken_0x31e790 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E790u;
            // 0x31e794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e790) {
            ctx->pc = 0x31E7C8u;
            goto label_31e7c8;
        }
    }
    ctx->pc = 0x31E798u;
label_31e798:
    // 0x31e798: 0x3c1101da  lui         $s1, 0x1DA
    ctx->pc = 0x31e798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)474 << 16));
label_31e79c:
    // 0x31e79c: 0x263147b0  addiu       $s1, $s1, 0x47B0
    ctx->pc = 0x31e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18352));
label_31e7a0:
    // 0x31e7a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31e7a4:
    // 0x31e7a4: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x31e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_31e7a8:
    // 0x31e7a8: 0x40f809  jalr        $v0
label_31e7ac:
    if (ctx->pc == 0x31E7ACu) {
        ctx->pc = 0x31E7B0u;
        goto label_31e7b0;
    }
    ctx->pc = 0x31E7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E7B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31E7B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31E7B0u; }
            if (ctx->pc != 0x31E7B0u) { return; }
        }
        }
    }
    ctx->pc = 0x31E7B0u;
label_31e7b0:
    // 0x31e7b0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e7b4:
    // 0x31e7b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31e7b8:
    // 0x31e7b8: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
label_31e7bc:
    // 0x31e7bc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31e7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31e7c0:
    // 0x31e7c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_31e7c4:
    if (ctx->pc == 0x31E7C4u) {
        ctx->pc = 0x31E7C4u;
            // 0x31e7c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x31E7C8u;
        goto label_31e7c8;
    }
    ctx->pc = 0x31E7C0u;
    {
        const bool branch_taken_0x31e7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7C0u;
            // 0x31e7c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7c0) {
            ctx->pc = 0x31E7A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E7C8u;
label_31e7c8:
    // 0x31e7c8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
label_31e7cc:
    // 0x31e7cc: 0xac6029e0  sw          $zero, 0x29E0($v1)
    ctx->pc = 0x31e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 0));
label_31e7d0:
    // 0x31e7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31e7d4:
    // 0x31e7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e7d8:
    // 0x31e7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31e7dc:
    // 0x31e7dc: 0x3e00008  jr          $ra
label_31e7e0:
    if (ctx->pc == 0x31E7E0u) {
        ctx->pc = 0x31E7E0u;
            // 0x31e7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31E7E4u;
        goto label_31e7e4;
    }
    ctx->pc = 0x31E7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7DCu;
            // 0x31e7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E7E4u;
label_31e7e4:
    // 0x31e7e4: 0x0  nop
    ctx->pc = 0x31e7e4u;
    // NOP
label_31e7e8:
    // 0x31e7e8: 0x0  nop
    ctx->pc = 0x31e7e8u;
    // NOP
label_31e7ec:
    // 0x31e7ec: 0x0  nop
    ctx->pc = 0x31e7ecu;
    // NOP
    ctx->pc = 0x31e7f0u;
}
