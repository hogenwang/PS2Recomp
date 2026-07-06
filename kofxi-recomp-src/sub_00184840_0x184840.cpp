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

// Function: sub_00184840
// Address: 0x184840 - 0x184bb0
void sub_00184840_0x184840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184840_0x184840");
#endif

    switch (ctx->pc) {
        case 0x184840u: goto label_184840;
        case 0x184844u: goto label_184844;
        case 0x184848u: goto label_184848;
        case 0x18484cu: goto label_18484c;
        case 0x184850u: goto label_184850;
        case 0x184854u: goto label_184854;
        case 0x184858u: goto label_184858;
        case 0x18485cu: goto label_18485c;
        case 0x184860u: goto label_184860;
        case 0x184864u: goto label_184864;
        case 0x184868u: goto label_184868;
        case 0x18486cu: goto label_18486c;
        case 0x184870u: goto label_184870;
        case 0x184874u: goto label_184874;
        case 0x184878u: goto label_184878;
        case 0x18487cu: goto label_18487c;
        case 0x184880u: goto label_184880;
        case 0x184884u: goto label_184884;
        case 0x184888u: goto label_184888;
        case 0x18488cu: goto label_18488c;
        case 0x184890u: goto label_184890;
        case 0x184894u: goto label_184894;
        case 0x184898u: goto label_184898;
        case 0x18489cu: goto label_18489c;
        case 0x1848a0u: goto label_1848a0;
        case 0x1848a4u: goto label_1848a4;
        case 0x1848a8u: goto label_1848a8;
        case 0x1848acu: goto label_1848ac;
        case 0x1848b0u: goto label_1848b0;
        case 0x1848b4u: goto label_1848b4;
        case 0x1848b8u: goto label_1848b8;
        case 0x1848bcu: goto label_1848bc;
        case 0x1848c0u: goto label_1848c0;
        case 0x1848c4u: goto label_1848c4;
        case 0x1848c8u: goto label_1848c8;
        case 0x1848ccu: goto label_1848cc;
        case 0x1848d0u: goto label_1848d0;
        case 0x1848d4u: goto label_1848d4;
        case 0x1848d8u: goto label_1848d8;
        case 0x1848dcu: goto label_1848dc;
        case 0x1848e0u: goto label_1848e0;
        case 0x1848e4u: goto label_1848e4;
        case 0x1848e8u: goto label_1848e8;
        case 0x1848ecu: goto label_1848ec;
        case 0x1848f0u: goto label_1848f0;
        case 0x1848f4u: goto label_1848f4;
        case 0x1848f8u: goto label_1848f8;
        case 0x1848fcu: goto label_1848fc;
        case 0x184900u: goto label_184900;
        case 0x184904u: goto label_184904;
        case 0x184908u: goto label_184908;
        case 0x18490cu: goto label_18490c;
        case 0x184910u: goto label_184910;
        case 0x184914u: goto label_184914;
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        case 0x184940u: goto label_184940;
        case 0x184944u: goto label_184944;
        case 0x184948u: goto label_184948;
        case 0x18494cu: goto label_18494c;
        case 0x184950u: goto label_184950;
        case 0x184954u: goto label_184954;
        case 0x184958u: goto label_184958;
        case 0x18495cu: goto label_18495c;
        case 0x184960u: goto label_184960;
        case 0x184964u: goto label_184964;
        case 0x184968u: goto label_184968;
        case 0x18496cu: goto label_18496c;
        case 0x184970u: goto label_184970;
        case 0x184974u: goto label_184974;
        case 0x184978u: goto label_184978;
        case 0x18497cu: goto label_18497c;
        case 0x184980u: goto label_184980;
        case 0x184984u: goto label_184984;
        case 0x184988u: goto label_184988;
        case 0x18498cu: goto label_18498c;
        case 0x184990u: goto label_184990;
        case 0x184994u: goto label_184994;
        case 0x184998u: goto label_184998;
        case 0x18499cu: goto label_18499c;
        case 0x1849a0u: goto label_1849a0;
        case 0x1849a4u: goto label_1849a4;
        case 0x1849a8u: goto label_1849a8;
        case 0x1849acu: goto label_1849ac;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849b4u: goto label_1849b4;
        case 0x1849b8u: goto label_1849b8;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849c8u: goto label_1849c8;
        case 0x1849ccu: goto label_1849cc;
        case 0x1849d0u: goto label_1849d0;
        case 0x1849d4u: goto label_1849d4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849dcu: goto label_1849dc;
        case 0x1849e0u: goto label_1849e0;
        case 0x1849e4u: goto label_1849e4;
        case 0x1849e8u: goto label_1849e8;
        case 0x1849ecu: goto label_1849ec;
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        case 0x184b7cu: goto label_184b7c;
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        default: break;
    }

    ctx->pc = 0x184840u;

label_184840:
    // 0x184840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_184844:
    // 0x184844: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x184844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_184848:
    // 0x184848: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x184848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18484c:
    // 0x18484c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x18484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_184850:
    // 0x184850: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_184854:
    // 0x184854: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x184854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_184858:
    // 0x184858: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18485c:
    // 0x18485c: 0x3c02fc3f  lui         $v0, 0xFC3F
    ctx->pc = 0x18485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64575 << 16));
label_184860:
    // 0x184860: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_184864:
    // 0x184864: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x184864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_184868:
    // 0x184868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18486c:
    // 0x18486c: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x18486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
label_184870:
    // 0x184870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184874:
    // 0x184874: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x184874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184878:
    // 0x184878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18487c:
    // 0x18487c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18487cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184880:
    // 0x184880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184884:
    // 0x184884: 0xa08000fc  sb          $zero, 0xFC($a0)
    ctx->pc = 0x184884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 0));
label_184888:
    // 0x184888: 0x8c86049c  lw          $a2, 0x49C($a0)
    ctx->pc = 0x184888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
label_18488c:
    // 0x18488c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x18488cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_184890:
    // 0x184890: 0xac85049c  sw          $a1, 0x49C($a0)
    ctx->pc = 0x184890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 5));
label_184894:
    // 0x184894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184898:
    // 0x184898: 0x8c880498  lw          $t0, 0x498($a0)
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
label_18489c:
    // 0x18489c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1848a0:
    // 0x1848a0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1848a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_1848a4:
    // 0x1848a4: 0xac870498  sw          $a3, 0x498($a0)
    ctx->pc = 0x1848a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 7));
label_1848a8:
    // 0x1848a8: 0x8c87049c  lw          $a3, 0x49C($a0)
    ctx->pc = 0x1848a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
label_1848ac:
    // 0x1848ac: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1848acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1848b0:
    // 0x1848b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1848b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1848b4:
    // 0x1848b4: 0xac83049c  sw          $v1, 0x49C($a0)
    ctx->pc = 0x1848b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 3));
label_1848b8:
    // 0x1848b8: 0xac82049c  sw          $v0, 0x49C($a0)
    ctx->pc = 0x1848b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 2));
label_1848bc:
    // 0x1848bc: 0xc04bbe8  jal         func_12EFA0
label_1848c0:
    if (ctx->pc == 0x1848C0u) {
        ctx->pc = 0x1848C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848BCu;
        // 0x1848c0: 0x26a4028c  addiu       $a0, $s5, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 652));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848C4u;
        goto label_1848c4;
    }
    ctx->pc = 0x1848BCu;
    SET_GPR_U32(ctx, 31, 0x1848C4u);
    ctx->pc = 0x1848C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848BCu;
    // 0x1848c0: 0x26a4028c  addiu       $a0, $s5, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x1848BCu, 0x1848C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848C4u;
label_1848c4:
    // 0x1848c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1848c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1848c8:
    // 0x1848c8: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x1848c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
label_1848cc:
    // 0x1848cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1848ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1848d0:
    // 0x1848d0: 0xa2a402ac  sb          $a0, 0x2AC($s5)
    ctx->pc = 0x1848d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 684), (uint8_t)GPR_U32(ctx, 4));
label_1848d4:
    // 0x1848d4: 0xa2a302b9  sb          $v1, 0x2B9($s5)
    ctx->pc = 0x1848d4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 697), (uint8_t)GPR_U32(ctx, 3));
label_1848d8:
    // 0x1848d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1848d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1848dc:
    // 0x1848dc: 0xa2a402d4  sb          $a0, 0x2D4($s5)
    ctx->pc = 0x1848dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 724), (uint8_t)GPR_U32(ctx, 4));
label_1848e0:
    // 0x1848e0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1848e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1848e4:
    // 0x1848e4: 0xa2a302e1  sb          $v1, 0x2E1($s5)
    ctx->pc = 0x1848e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 737), (uint8_t)GPR_U32(ctx, 3));
label_1848e8:
    // 0x1848e8: 0x26d662c0  addiu       $s6, $s6, 0x62C0
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 25280));
label_1848ec:
    // 0x1848ec: 0xa2a402fc  sb          $a0, 0x2FC($s5)
    ctx->pc = 0x1848ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 764), (uint8_t)GPR_U32(ctx, 4));
label_1848f0:
    // 0x1848f0: 0xa2a30309  sb          $v1, 0x309($s5)
    ctx->pc = 0x1848f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 777), (uint8_t)GPR_U32(ctx, 3));
label_1848f4:
    // 0x1848f4: 0x8ea300f8  lw          $v1, 0xF8($s5)
    ctx->pc = 0x1848f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_1848f8:
    // 0x1848f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1848f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1848fc:
    // 0x1848fc: 0x2848804  sllv        $s1, $a0, $s4
    ctx->pc = 0x1848fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_184900:
    // 0x184900: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x184900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_184904:
    // 0x184904: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_184908:
    if (ctx->pc == 0x184908u) {
        ctx->pc = 0x18490Cu;
        goto label_18490c;
    }
    ctx->pc = 0x184904u;
    {
        const bool branch_taken_0x184904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184904) {
            ctx->pc = 0x184B58u;
            goto label_184b58;
        }
    }
    ctx->pc = 0x18490Cu;
label_18490c:
    // 0x18490c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_184910:
    // 0x184910: 0xc061310  jal         func_184C40
label_184914:
    if (ctx->pc == 0x184914u) {
        ctx->pc = 0x184914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184910u;
        // 0x184914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184918u;
        goto label_184918;
    }
    ctx->pc = 0x184910u;
    SET_GPR_U32(ctx, 31, 0x184918u);
    ctx->pc = 0x184914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184910u;
    // 0x184914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184C40u, 0x184910u, 0x184918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184918u;
label_184918:
    // 0x184918: 0x96500100  lhu         $s0, 0x100($s2)
    ctx->pc = 0x184918u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_18491c:
    // 0x18491c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x18491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_184920:
    // 0x184920: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_184924:
    if (ctx->pc == 0x184924u) {
        ctx->pc = 0x184924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184920u;
        // 0x184924: 0xa6400102  sh          $zero, 0x102($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184928u;
        goto label_184928;
    }
    ctx->pc = 0x184920u;
    {
        const bool branch_taken_0x184920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184920u;
        // 0x184924: 0xa6400102  sh          $zero, 0x102($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184920) {
            ctx->pc = 0x184948u;
            goto label_184948;
        }
    }
    ctx->pc = 0x184928u;
label_184928:
    // 0x184928: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x184928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
label_18492c:
    // 0x18492c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x18492cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_184930:
    // 0x184930: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184934:
    if (ctx->pc == 0x184934u) {
        ctx->pc = 0x184938u;
        goto label_184938;
    }
    ctx->pc = 0x184930u;
    {
        const bool branch_taken_0x184930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184930) {
            ctx->pc = 0x184948u;
            goto label_184948;
        }
    }
    ctx->pc = 0x184938u;
label_184938:
    // 0x184938: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184938u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_18493c:
    // 0x18493c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x18493cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184940:
    // 0x184940: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x184940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_184944:
    // 0x184944: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184944u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184948:
    // 0x184948: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x184948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_18494c:
    // 0x18494c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_184950:
    if (ctx->pc == 0x184950u) {
        ctx->pc = 0x184954u;
        goto label_184954;
    }
    ctx->pc = 0x18494Cu;
    {
        const bool branch_taken_0x18494c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18494c) {
            ctx->pc = 0x1849F0u;
            goto label_1849f0;
        }
    }
    ctx->pc = 0x184954u;
label_184954:
    // 0x184954: 0x8ea50270  lw          $a1, 0x270($s5)
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
label_184958:
    // 0x184958: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_18495c:
    // 0x18495c: 0x30a40600  andi        $a0, $a1, 0x600
    ctx->pc = 0x18495cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1536);
label_184960:
    // 0x184960: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_184964:
    if (ctx->pc == 0x184964u) {
        ctx->pc = 0x184964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184960u;
        // 0x184964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184968u;
        goto label_184968;
    }
    ctx->pc = 0x184960u;
    {
        const bool branch_taken_0x184960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x184964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184960u;
        // 0x184964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184960) {
            ctx->pc = 0x184970u;
            goto label_184970;
        }
    }
    ctx->pc = 0x184968u;
label_184968:
    // 0x184968: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x184968u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_18496c:
    // 0x18496c: 0x0  nop
    ctx->pc = 0x18496cu;
    // NOP
label_184970:
    // 0x184970: 0x30a43000  andi        $a0, $a1, 0x3000
    ctx->pc = 0x184970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12288);
label_184974:
    // 0x184974: 0x24033000  addiu       $v1, $zero, 0x3000
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
label_184978:
    // 0x184978: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_18497c:
    if (ctx->pc == 0x18497Cu) {
        ctx->pc = 0x184980u;
        goto label_184980;
    }
    ctx->pc = 0x184978u;
    {
        const bool branch_taken_0x184978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184978) {
            ctx->pc = 0x184988u;
            goto label_184988;
        }
    }
    ctx->pc = 0x184980u;
label_184980:
    // 0x184980: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x184980u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_184984:
    // 0x184984: 0x0  nop
    ctx->pc = 0x184984u;
    // NOP
label_184988:
    // 0x184988: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x184988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_18498c:
    // 0x18498c: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x18498cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_184990:
    // 0x184990: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x184990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_184994:
    // 0x184994: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_184998:
    if (ctx->pc == 0x184998u) {
        ctx->pc = 0x18499Cu;
        goto label_18499c;
    }
    ctx->pc = 0x184994u;
    {
        const bool branch_taken_0x184994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x184994) {
            ctx->pc = 0x1849A0u;
            goto label_1849a0;
        }
    }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x18499cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1849a0:
    // 0x1849a0: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
label_1849a4:
    // 0x1849a4: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1849a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1849a8:
    // 0x1849a8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1849ac:
    if (ctx->pc == 0x1849ACu) {
        ctx->pc = 0x1849B0u;
        goto label_1849b0;
    }
    ctx->pc = 0x1849A8u;
    {
        const bool branch_taken_0x1849a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1849a8) {
            ctx->pc = 0x1849B8u;
            goto label_1849b8;
        }
    }
    ctx->pc = 0x1849B0u;
label_1849b0:
    // 0x1849b0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1849b0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1849b4:
    // 0x1849b4: 0x0  nop
    ctx->pc = 0x1849b4u;
    // NOP
label_1849b8:
    // 0x1849b8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_1849bc:
    if (ctx->pc == 0x1849BCu) {
        ctx->pc = 0x1849C0u;
        goto label_1849c0;
    }
    ctx->pc = 0x1849B8u;
    {
        const bool branch_taken_0x1849b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1849b8) {
            ctx->pc = 0x1849D0u;
            goto label_1849d0;
        }
    }
    ctx->pc = 0x1849C0u;
label_1849c0:
    // 0x1849c0: 0x86430104  lh          $v1, 0x104($s2)
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 260)));
label_1849c4:
    // 0x1849c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1849c8:
    // 0x1849c8: 0xa6430104  sh          $v1, 0x104($s2)
    ctx->pc = 0x1849c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 260), (uint16_t)GPR_U32(ctx, 3));
label_1849cc:
    // 0x1849cc: 0x0  nop
    ctx->pc = 0x1849ccu;
    // NOP
label_1849d0:
    // 0x1849d0: 0x86430104  lh          $v1, 0x104($s2)
    ctx->pc = 0x1849d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 260)));
label_1849d4:
    // 0x1849d4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_1849d8:
    if (ctx->pc == 0x1849D8u) {
        ctx->pc = 0x1849DCu;
        goto label_1849dc;
    }
    ctx->pc = 0x1849D4u;
    {
        const bool branch_taken_0x1849d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1849d4) {
            ctx->pc = 0x1849F0u;
            goto label_1849f0;
        }
    }
    ctx->pc = 0x1849DCu;
label_1849dc:
    // 0x1849dc: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x1849dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_1849e0:
    // 0x1849e0: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x1849e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_1849e4:
    // 0x1849e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1849e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1849e8:
    // 0x1849e8: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x1849e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_1849ec:
    // 0x1849ec: 0x0  nop
    ctx->pc = 0x1849ecu;
    // NOP
label_1849f0:
    // 0x1849f0: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x1849f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1849f4:
    // 0x1849f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1849f8:
    if (ctx->pc == 0x1849F8u) {
        ctx->pc = 0x1849FCu;
        goto label_1849fc;
    }
    ctx->pc = 0x1849F4u;
    {
        const bool branch_taken_0x1849f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849f4) {
            ctx->pc = 0x184A28u;
            goto label_184a28;
        }
    }
    ctx->pc = 0x1849FCu;
label_1849fc:
    // 0x1849fc: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x1849fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_184a00:
    // 0x184a00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_184a04:
    if (ctx->pc == 0x184A04u) {
        ctx->pc = 0x184A08u;
        goto label_184a08;
    }
    ctx->pc = 0x184A00u;
    {
        const bool branch_taken_0x184a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a00) {
            ctx->pc = 0x184A28u;
            goto label_184a28;
        }
    }
    ctx->pc = 0x184A08u;
label_184a08:
    // 0x184a08: 0x8ea30494  lw          $v1, 0x494($s5)
    ctx->pc = 0x184a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1172)));
label_184a0c:
    // 0x184a0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_184a10:
    // 0x184a10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184a14:
    if (ctx->pc == 0x184A14u) {
        ctx->pc = 0x184A18u;
        goto label_184a18;
    }
    ctx->pc = 0x184A10u;
    {
        const bool branch_taken_0x184a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a10) {
            ctx->pc = 0x184A28u;
            goto label_184a28;
        }
    }
    ctx->pc = 0x184A18u;
label_184a18:
    // 0x184a18: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184a18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184a1c:
    // 0x184a1c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184a1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184a20:
    // 0x184a20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x184a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_184a24:
    // 0x184a24: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184a24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184a28:
    // 0x184a28: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x184a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_184a2c:
    // 0x184a2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_184a30:
    if (ctx->pc == 0x184A30u) {
        ctx->pc = 0x184A34u;
        goto label_184a34;
    }
    ctx->pc = 0x184A2Cu;
    {
        const bool branch_taken_0x184a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a2c) {
            ctx->pc = 0x184A68u;
            goto label_184a68;
        }
    }
    ctx->pc = 0x184A34u;
label_184a34:
    // 0x184a34: 0x32030020  andi        $v1, $s0, 0x20
    ctx->pc = 0x184a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_184a38:
    // 0x184a38: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_184a3c:
    if (ctx->pc == 0x184A3Cu) {
        ctx->pc = 0x184A40u;
        goto label_184a40;
    }
    ctx->pc = 0x184A38u;
    {
        const bool branch_taken_0x184a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a38) {
            ctx->pc = 0x184A68u;
            goto label_184a68;
        }
    }
    ctx->pc = 0x184A40u;
label_184a40:
    // 0x184a40: 0xc062804  jal         func_18A010
label_184a44:
    if (ctx->pc == 0x184A44u) {
        ctx->pc = 0x184A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A40u;
        // 0x184a44: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A48u;
        goto label_184a48;
    }
    ctx->pc = 0x184A40u;
    SET_GPR_U32(ctx, 31, 0x184A48u);
    ctx->pc = 0x184A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A40u;
    // 0x184a44: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x184A40u, 0x184A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A48u;
label_184a48:
    // 0x184a48: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x184a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
label_184a4c:
    // 0x184a4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_184a50:
    // 0x184a50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184a54:
    if (ctx->pc == 0x184A54u) {
        ctx->pc = 0x184A58u;
        goto label_184a58;
    }
    ctx->pc = 0x184A50u;
    {
        const bool branch_taken_0x184a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a50) {
            ctx->pc = 0x184A68u;
            goto label_184a68;
        }
    }
    ctx->pc = 0x184A58u;
label_184a58:
    // 0x184a58: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184a58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184a5c:
    // 0x184a5c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184a5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184a60:
    // 0x184a60: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x184a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_184a64:
    // 0x184a64: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184a64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184a68:
    // 0x184a68: 0x32030200  andi        $v1, $s0, 0x200
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_184a6c:
    // 0x184a6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_184a70:
    if (ctx->pc == 0x184A70u) {
        ctx->pc = 0x184A74u;
        goto label_184a74;
    }
    ctx->pc = 0x184A6Cu;
    {
        const bool branch_taken_0x184a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a6c) {
            ctx->pc = 0x184A98u;
            goto label_184a98;
        }
    }
    ctx->pc = 0x184A74u;
label_184a74:
    // 0x184a74: 0x8ea4048c  lw          $a0, 0x48C($s5)
    ctx->pc = 0x184a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
label_184a78:
    // 0x184a78: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x184a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_184a7c:
    // 0x184a7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_184a80:
    // 0x184a80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184a84:
    if (ctx->pc == 0x184A84u) {
        ctx->pc = 0x184A88u;
        goto label_184a88;
    }
    ctx->pc = 0x184A80u;
    {
        const bool branch_taken_0x184a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a80) {
            ctx->pc = 0x184A98u;
            goto label_184a98;
        }
    }
    ctx->pc = 0x184A88u;
label_184a88:
    // 0x184a88: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184a88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184a8c:
    // 0x184a8c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184a8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184a90:
    // 0x184a90: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x184a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_184a94:
    // 0x184a94: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184a94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184a98:
    // 0x184a98: 0x32030040  andi        $v1, $s0, 0x40
    ctx->pc = 0x184a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_184a9c:
    // 0x184a9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_184aa0:
    if (ctx->pc == 0x184AA0u) {
        ctx->pc = 0x184AA4u;
        goto label_184aa4;
    }
    ctx->pc = 0x184A9Cu;
    {
        const bool branch_taken_0x184a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a9c) {
            ctx->pc = 0x184AC8u;
            goto label_184ac8;
        }
    }
    ctx->pc = 0x184AA4u;
label_184aa4:
    // 0x184aa4: 0x92a304f0  lbu         $v1, 0x4F0($s5)
    ctx->pc = 0x184aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1264)));
label_184aa8:
    // 0x184aa8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x184aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_184aac:
    // 0x184aac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_184ab0:
    if (ctx->pc == 0x184AB0u) {
        ctx->pc = 0x184AB4u;
        goto label_184ab4;
    }
    ctx->pc = 0x184AACu;
    {
        const bool branch_taken_0x184aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184aac) {
            ctx->pc = 0x184AC8u;
            goto label_184ac8;
        }
    }
    ctx->pc = 0x184AB4u;
label_184ab4:
    // 0x184ab4: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184ab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184ab8:
    // 0x184ab8: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184ab8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184abc:
    // 0x184abc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x184abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_184ac0:
    // 0x184ac0: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184ac4:
    // 0x184ac4: 0x0  nop
    ctx->pc = 0x184ac4u;
    // NOP
label_184ac8:
    // 0x184ac8: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x184ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_184acc:
    // 0x184acc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_184ad0:
    if (ctx->pc == 0x184AD0u) {
        ctx->pc = 0x184AD4u;
        goto label_184ad4;
    }
    ctx->pc = 0x184ACCu;
    {
        const bool branch_taken_0x184acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184acc) {
            ctx->pc = 0x184B00u;
            goto label_184b00;
        }
    }
    ctx->pc = 0x184AD4u;
label_184ad4:
    // 0x184ad4: 0xc062804  jal         func_18A010
label_184ad8:
    if (ctx->pc == 0x184AD8u) {
        ctx->pc = 0x184AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AD4u;
        // 0x184ad8: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184ADCu;
        goto label_184adc;
    }
    ctx->pc = 0x184AD4u;
    SET_GPR_U32(ctx, 31, 0x184ADCu);
    ctx->pc = 0x184AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AD4u;
    // 0x184ad8: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x184AD4u, 0x184ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184ADCu;
label_184adc:
    // 0x184adc: 0x904304f0  lbu         $v1, 0x4F0($v0)
    ctx->pc = 0x184adcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
label_184ae0:
    // 0x184ae0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x184ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_184ae4:
    // 0x184ae4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_184ae8:
    if (ctx->pc == 0x184AE8u) {
        ctx->pc = 0x184AECu;
        goto label_184aec;
    }
    ctx->pc = 0x184AE4u;
    {
        const bool branch_taken_0x184ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ae4) {
            ctx->pc = 0x184B00u;
            goto label_184b00;
        }
    }
    ctx->pc = 0x184AECu;
label_184aec:
    // 0x184aec: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184aecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184af0:
    // 0x184af0: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184af0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184af4:
    // 0x184af4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x184af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_184af8:
    // 0x184af8: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184af8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184afc:
    // 0x184afc: 0x0  nop
    ctx->pc = 0x184afcu;
    // NOP
label_184b00:
    // 0x184b00: 0x32030400  andi        $v1, $s0, 0x400
    ctx->pc = 0x184b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
label_184b04:
    // 0x184b04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_184b08:
    if (ctx->pc == 0x184B08u) {
        ctx->pc = 0x184B0Cu;
        goto label_184b0c;
    }
    ctx->pc = 0x184B04u;
    {
        const bool branch_taken_0x184b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b04) {
            ctx->pc = 0x184B38u;
            goto label_184b38;
        }
    }
    ctx->pc = 0x184B0Cu;
label_184b0c:
    // 0x184b0c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x184b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
label_184b10:
    // 0x184b10: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_184b14:
    // 0x184b14: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
label_184b18:
    // 0x184b18: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x184b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_184b1c:
    // 0x184b1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x184b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_184b20:
    // 0x184b20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_184b24:
    if (ctx->pc == 0x184B24u) {
        ctx->pc = 0x184B28u;
        goto label_184b28;
    }
    ctx->pc = 0x184B20u;
    {
        const bool branch_taken_0x184b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b20) {
            ctx->pc = 0x184B38u;
            goto label_184b38;
        }
    }
    ctx->pc = 0x184B28u;
label_184b28:
    // 0x184b28: 0x96430102  lhu         $v1, 0x102($s2)
    ctx->pc = 0x184b28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_184b2c:
    // 0x184b2c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x184b2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_184b30:
    // 0x184b30: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x184b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_184b34:
    // 0x184b34: 0xa6430102  sh          $v1, 0x102($s2)
    ctx->pc = 0x184b34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 258), (uint16_t)GPR_U32(ctx, 3));
label_184b38:
    // 0x184b38: 0x2711824  and         $v1, $s3, $s1
    ctx->pc = 0x184b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 17));
label_184b3c:
    // 0x184b3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_184b40:
    if (ctx->pc == 0x184B40u) {
        ctx->pc = 0x184B44u;
        goto label_184b44;
    }
    ctx->pc = 0x184B3Cu;
    {
        const bool branch_taken_0x184b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184b3c) {
            ctx->pc = 0x184B58u;
            goto label_184b58;
        }
    }
    ctx->pc = 0x184B44u;
label_184b44:
    // 0x184b44: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x184b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_184b48:
    // 0x184b48: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x184b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_184b4c:
    // 0x184b4c: 0x40f809  jalr        $v0
label_184b50:
    if (ctx->pc == 0x184B50u) {
        ctx->pc = 0x184B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B4Cu;
        // 0x184b50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B54u;
        goto label_184b54;
    }
    ctx->pc = 0x184B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184B54u);
        ctx->pc = 0x184B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B4Cu;
        // 0x184b50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B4Cu, 0x184B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184B54u;
label_184b54:
    // 0x184b54: 0x0  nop
    ctx->pc = 0x184b54u;
    // NOP
label_184b58:
    // 0x184b58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x184b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_184b5c:
    // 0x184b5c: 0x2a830020  slti        $v1, $s4, 0x20
    ctx->pc = 0x184b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
label_184b60:
    // 0x184b60: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_184b64:
    // 0x184b64: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
label_184b68:
    if (ctx->pc == 0x184B68u) {
        ctx->pc = 0x184B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B64u;
        // 0x184b68: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B6Cu;
        goto label_184b6c;
    }
    ctx->pc = 0x184B64u;
    {
        const bool branch_taken_0x184b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B64u;
        // 0x184b68: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b64) {
            ctx->pc = 0x1848F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1848f4;
        }
    }
    ctx->pc = 0x184B6Cu;
label_184b6c:
    // 0x184b6c: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_184b70:
    if (ctx->pc == 0x184B70u) {
        ctx->pc = 0x184B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B6Cu;
        // 0x184b70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B74u;
        goto label_184b74;
    }
    ctx->pc = 0x184B6Cu;
    {
        const bool branch_taken_0x184b6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b6c) {
            ctx->pc = 0x184B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184B6Cu;
            // 0x184b70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184B84u;
            goto label_184b84;
        }
    }
    ctx->pc = 0x184B74u;
label_184b74:
    // 0x184b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x184b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_184b78:
    // 0x184b78: 0xc0612ec  jal         func_184BB0
label_184b7c:
    if (ctx->pc == 0x184B7Cu) {
        ctx->pc = 0x184B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B78u;
        // 0x184b7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B80u;
        goto label_184b80;
    }
    ctx->pc = 0x184B78u;
    SET_GPR_U32(ctx, 31, 0x184B80u);
    ctx->pc = 0x184B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B78u;
    // 0x184b7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184BB0u, 0x184B78u, 0x184B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B80u;
label_184b80:
    // 0x184b80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x184b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_184b84:
    // 0x184b84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x184b84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184b88:
    // 0x184b88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x184b88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184b8c:
    // 0x184b8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_184b90:
    // 0x184b90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184b94:
    // 0x184b94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184b98:
    // 0x184b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184b9c:
    // 0x184b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184ba0:
    // 0x184ba0: 0x3e00008  jr          $ra
label_184ba4:
    if (ctx->pc == 0x184BA4u) {
        ctx->pc = 0x184BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA0u;
        // 0x184ba4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BA8u;
        goto label_184ba8;
    }
    ctx->pc = 0x184BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA0u;
        // 0x184ba4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184BA8u;
label_184ba8:
    // 0x184ba8: 0x0  nop
    ctx->pc = 0x184ba8u;
    // NOP
label_184bac:
    // 0x184bac: 0x0  nop
    ctx->pc = 0x184bacu;
    // NOP
    if (ctx->pc == 0x184bacu) { ctx->pc = 0x184bb0u; }
}
