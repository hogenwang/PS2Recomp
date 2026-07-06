#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A47C0
// Address: 0x2a47c0 - 0x2a65e8
void sub_002A47C0_0x2a47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A47C0_0x2a47c0");
#endif

    ctx->pc = 0x2a47c0u;

    // 0x2a47c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a47c4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x2a47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a47c8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x2a47c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47cc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x2a47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a47d0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x2a47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a47d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a47d8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x2a47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a47dc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a47e0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2a47e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a47e4: 0xffc30018  sd          $v1, 0x18($fp)
    ctx->pc = 0x2a47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 3));
    // 0x2a47e8: 0xdfc20018  ld          $v0, 0x18($fp)
    ctx->pc = 0x2a47e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a47ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a47ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a47f0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a47f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a47f4: 0xdfc30018  ld          $v1, 0x18($fp)
    ctx->pc = 0x2a47f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a47f8: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2a47f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x2a47fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a4800: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4800u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4804: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a4808: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a480c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2a480cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4810: 0xffc30018  sd          $v1, 0x18($fp)
    ctx->pc = 0x2a4810u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 3));
    // 0x2a4814: 0xdfc20018  ld          $v0, 0x18($fp)
    ctx->pc = 0x2a4814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a4818: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a4818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a481c: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a481cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4820: 0xdfc30018  ld          $v1, 0x18($fp)
    ctx->pc = 0x2a4820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a4824: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2a4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x2a4828: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a4828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a482c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a482cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4830: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2a4830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4834: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4834u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4838: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a483c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4840: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4840u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4844: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4848: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4848u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a484c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4850: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4850u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4854: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4854u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4858: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a485c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a485cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4860: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4868: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4868u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a486c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4870: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4870u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4874: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4878: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2a4878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a487c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a487cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4880: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4880u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4888: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4888u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a488c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a488cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4890: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a4890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4894: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4894u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4898: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a489c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a489cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a48a0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a48a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a48a4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a48a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a48a8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a48a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a48ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a48acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a48b0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a48b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a48b4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a48b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a48b8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a48b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a48bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a48bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a48c0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a48c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a48c4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a48c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a48c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a48c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48cc: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a48ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a48d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a48d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a48d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a48d8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a48d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a48dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a48e0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a48e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a48e4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a48e8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a48ec: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a48ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a48f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a48f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a48f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a48f8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a48f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a48fc: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a48fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4900: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a4900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4904: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4904u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4908: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4908u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a490c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a4910: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4910u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4914: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4918: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4918u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a491c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4920: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a4920u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4924: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4924u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4928: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a492c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4930: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4934: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4934u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4938: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4938u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a493c: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a493cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4940: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4948: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4948u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a494c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4950: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4950u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4954: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4958: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2a495c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a495cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4960: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4968: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4968u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a496c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a496cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4970: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a4970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a4974: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4974u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4978: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a497c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a4980: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4980u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4984: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4984u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4988: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a498c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4990: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a4990u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4994: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4998: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4998u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a499c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a49a0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a49a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a49a4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a49a4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a49a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a49a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49ac: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a49acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a49b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a49b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a49b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a49b8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a49b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a49bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a49c0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a49c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a49c4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a49c8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a49cc: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a49ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a49d0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a49d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a49d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a49d8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a49d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a49dc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a49dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a49e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a49e4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a49e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a49e8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a49e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a49ec: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a49f0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a49f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a49f4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a49f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a49f8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a49f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a49fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a49fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4a00: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a4a00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4a04: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4a08: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4a08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4a0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4a10: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4a14: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4a14u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4a18: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a1c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a4a1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4a20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4a28: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4a28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4a30: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4a30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4a34: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4a38: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2a4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2a4a3c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4a3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4a40: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4a40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4a48: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4a48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4a4c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a50: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4a54: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4a54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4a58: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4a58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a5c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a4a60: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4a60u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4a64: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4a64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a68: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4a68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4a70: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a4a70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4a74: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a78: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4a78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4a7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4a80: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4a80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4a84: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4a84u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4a88: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a8c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a4a8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4a90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4a98: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4a98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4a9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4aa0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4aa4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4aa8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2a4aac: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4aacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ab0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ab8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4abc: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4abcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4ac0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4ac4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4ac8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4ac8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4acc: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a4accu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a4ad0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4ad4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4ad4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4ad8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4ad8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4adc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4ae0: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a4ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4ae4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4ae4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4ae8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4ae8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4aec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4af0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4af0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4af4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4af4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4af8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4afc: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a4afcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4b00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4b08: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4b08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4b10: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4b10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b14: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4b18: 0x2462000e  addiu       $v0, $v1, 0xE
    ctx->pc = 0x2a4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2a4b1c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4b1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4b20: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4b20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4b28: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4b28u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b2c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4b2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a4b34: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4b34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b38: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4b38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b3c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a4b40: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4b40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b44: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b48: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4b48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4b4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4b50: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a4b50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4b54: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4b54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b58: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4b58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4b60: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4b60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4b64: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4b64u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4b68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4b68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b6c: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a4b6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4b70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4b78: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4b78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4b80: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4b80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b84: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4b88: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2a4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a4b8c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4b8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4b90: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4b90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4b98: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4b98u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4b9c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4b9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4ba0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a4ba4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4ba8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4ba8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4bac: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a4bb0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4bb4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4bb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4bb8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4bb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4bc0: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a4bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4bc4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4bc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4bc8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4bc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4bcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4bd0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4bd4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4bd4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4bd8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bdc: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4be0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4be8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4be8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4bec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4bf0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4bf4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4bf8: 0x24620012  addiu       $v0, $v1, 0x12
    ctx->pc = 0x2a4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x2a4bfc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4bfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4c00: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4c00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4c08: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4c08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c0c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4c0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4c10: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4c14: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4c14u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c18: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4c1c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a4c20: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4c20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c24: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4c24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4c28: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4c28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4c30: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a4c30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4c34: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4c34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4c38: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4c3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4c40: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4c40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4c44: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4c44u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4c48: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c4c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a4c4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4c50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4c58: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4c58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4c60: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4c60u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c64: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4c68: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2a4c6c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4c6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4c70: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4c70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4c78: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4c78u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c7c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4c7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4c80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4c84: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4c84u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c88: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4c8c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a4c90: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4c90u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4c94: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4c94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4c98: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4c98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4c9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4ca0: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a4ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4ca4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4ca8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4cac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4cb0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4cb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4cb4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4cb4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4cb8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cbc: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a4cbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4cc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4cc8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4cc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4cd0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4cd4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4cd8: 0x24620016  addiu       $v0, $v1, 0x16
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x2a4cdc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4cdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4ce0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4ce0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ce8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4cec: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4cecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4cf0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a4cf4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4cf8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4cf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4cfc: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a4d00: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4d00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d04: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4d04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4d08: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4d0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4d10: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a4d10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4d14: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4d14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4d18: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4d18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4d1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4d20: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4d20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4d24: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4d24u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4d28: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d2c: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a4d2cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4d30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4d38: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4d38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4d40: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4d40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d44: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4d48: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2a4d4c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4d4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4d50: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4d50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4d54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4d58: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4d58u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d5c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4d5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d60: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a4d64: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4d64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d68: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4d68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d6c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a4d70: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4d70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d74: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4d74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d78: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4d78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4d7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4d80: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a4d80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4d84: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4d84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d88: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4d88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4d8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4d90: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4d90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4d94: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4d94u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4d98: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4d98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d9c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a4d9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4da0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4da8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4da8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4db0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4db0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4db4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4db8: 0x2462001a  addiu       $v0, $v1, 0x1A
    ctx->pc = 0x2a4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x2a4dbc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4dbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4dc0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4dc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4dc8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4dcc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4dccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4dd0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4dd4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4dd8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4dd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4ddc: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a4de0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4de0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4de4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4de4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4de8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4de8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4df0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a4df0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4df4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4df4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4df8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4df8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4dfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4e00: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4e00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4e04: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4e04u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4e08: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e0c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a4e0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4e10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4e18: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4e18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4e20: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4e20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4e24: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4e28: 0x2462001c  addiu       $v0, $v1, 0x1C
    ctx->pc = 0x2a4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2a4e2c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4e2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4e30: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4e30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4e38: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4e38u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4e3c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4e3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4e44: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4e44u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4e48: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4e48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e4c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a4e50: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4e50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4e54: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4e54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e58: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4e58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4e5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4e60: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a4e60u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4e64: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4e64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e68: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4e6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4e70: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4e70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4e74: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4e74u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4e78: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e7c: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a4e7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4e80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4e88: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4e88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4e90: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4e90u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4e94: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4e98: 0x2462001e  addiu       $v0, $v1, 0x1E
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2a4e9c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4e9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4ea0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ea4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ea8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4eac: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4eacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4eb0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a4eb4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4eb8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4eb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ebc: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a4ec0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4ec4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4ec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ec8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4ec8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4ed0: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a4ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4ed4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a4ed4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ed8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4ed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4edc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4ee0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4ee0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ee4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4ee4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4ee8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4eec: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a4eecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4ef0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4ef8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4efc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4f00: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4f00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f04: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4f08: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2a4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a4f0c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4f0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4f10: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4f14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4f18: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4f18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f1c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4f1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4f20: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a4f24: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4f24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f28: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4f28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4f2c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a4f30: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a4f30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f34: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4f34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4f38: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4f40: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a4f40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4f44: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a4f44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4f48: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4f48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4f50: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4f50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4f54: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4f54u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4f58: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f5c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a4f5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4f60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4f68: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4f68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4f6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4f70: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4f70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f74: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4f78: 0x24620022  addiu       $v0, $v1, 0x22
    ctx->pc = 0x2a4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
    // 0x2a4f7c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4f7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4f80: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4f80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4f88: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4f88u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f8c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4f8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4f90: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a4f94: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a4f94u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4f98: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4f98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4f9c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a4fa0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a4fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4fa4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4fa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4fa8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a4fac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4fb0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a4fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4fb4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a4fb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4fb8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a4fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a4fbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4fc0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a4fc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a4fc4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a4fc4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a4fc8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a4fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fcc: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a4fccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4fd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a4fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4fd8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a4fd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a4fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4fe0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a4fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4fe4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a4fe8: 0x24620024  addiu       $v0, $v1, 0x24
    ctx->pc = 0x2a4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2a4fec: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a4fecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a4ff0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a4ff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4ff8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a4ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4ffc: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a4ffcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5000: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a5004: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5004u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5008: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5008u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a500c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5010: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5010u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5014: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5014u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5018: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a501c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5020: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5020u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5024: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5024u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5028: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a502c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5030: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5034: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5034u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5038: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a503c: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a503cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5040: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5048: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5048u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a504c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5050: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5050u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5054: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5058: 0x24620026  addiu       $v0, $v1, 0x26
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    // 0x2a505c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a505cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5060: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5068: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5068u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a506c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a506cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5070: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5074: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5074u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5078: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a507c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a507cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5080: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5080u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5084: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5084u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5088: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5088u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a508c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5090: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5090u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5094: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5094u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5098: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5098u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a509c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a50a0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a50a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a50a8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a50a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a50ac: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a50acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a50b0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2a50b0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2a50b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a50b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50b8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a50b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a50bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a50bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a50c0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a50c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a50c8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a50c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a50cc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a50ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50d0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a50d4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a50d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a50d8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a50d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50dc: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a50e0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a50e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a50e4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a50e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50e8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a50e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a50ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a50ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a50f0: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a50f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a50f4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a50f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a50f8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a50f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a50fc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a50fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5100: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5104: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5108: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a510c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5110: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5110u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5114: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5114u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a511c: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a511cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5120: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5120u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5124: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5128: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a512c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a512cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5130: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5134: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a513c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a513cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5140: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5148: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5148u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a514c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a514cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5150: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5154: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a515c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a515cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5160: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5168: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5168u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a516c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a516cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5174: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5174u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5178: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5178u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a517c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5180: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5184: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5188: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a518c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5194: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5194u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5198: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5198u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a519c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a51a0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a51a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a51a4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a51a8: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2a51ac: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a51acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a51b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a51b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a51b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a51b8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a51b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a51bc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a51bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a51c0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a51c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a51c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a51c8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a51c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a51cc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a51ccu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a51d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a51d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a51d4: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a51d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a51d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a51d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a51dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a51e0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a51e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a51e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a51e8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a51e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a51ec: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a51ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a51f0: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x2a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x2a51f4: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a51f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a51f8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a51f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a51fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5200: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5200u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5204: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5204u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5208: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a520c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a520cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5210: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5210u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5214: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5214u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5218: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5218u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a521c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a521cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5220: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5220u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5228: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5228u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a522c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a522cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5230: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5234: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5238: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a523c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a523cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5240: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5244: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5244u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5248: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a524c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5250: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5250u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5258: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5258u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a525c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5260: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x2a5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x2a5264: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5264u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5268: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5268u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a526c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5270: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5270u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5274: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5274u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5278: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a527c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a527cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5280: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5280u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5284: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5288: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5288u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a528c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a528cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5290: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5290u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5294: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5298: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5298u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a529c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a529cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a52a0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a52a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a52a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a52a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a52a8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a52a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a52ac: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a52acu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a52b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a52b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52b4: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a52b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a52b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a52b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a52bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a52c0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a52c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a52c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a52c8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a52cc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a52d0: 0x2462002e  addiu       $v0, $v1, 0x2E
    ctx->pc = 0x2a52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
    // 0x2a52d4: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a52d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a52d8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a52d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a52dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a52e0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a52e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a52e4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a52e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a52e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a52ec: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a52ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a52f0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a52f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a52f4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a52f8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a52f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a52fc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a52fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5300: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5300u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5308: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5308u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a530c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a530cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5310: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5310u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5318: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5318u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a531c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a531cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5320: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5324: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a5324u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5328: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a532c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5330: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5338: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5338u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a533c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5340: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2a5340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2a5344: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5344u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5348: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5348u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a534c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5350: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5350u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5354: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5354u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5358: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a535c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a535cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5360: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5360u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5364: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a5364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a5368: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5368u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a536c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a536cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5370: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5378: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a5378u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a537c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a537cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5380: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5380u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5388: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a538c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a538cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5390: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5394: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5394u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5398: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a539c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a53a0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a53a8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a53a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a53ac: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a53b0: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x2a53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2a53b4: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a53b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a53b8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a53b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a53bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a53c0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a53c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a53c4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a53c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a53c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a53cc: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a53ccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a53d0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a53d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53d4: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a53d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a53d8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a53d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a53dc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a53dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53e0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a53e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a53e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a53e8: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a53e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a53ec: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a53ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53f0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a53f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a53f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a53f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a53f8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a53f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a53fc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a53fcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5400: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5404: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5404u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5408: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a540c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5410: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5410u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5418: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5418u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a541c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5420: 0x24620034  addiu       $v0, $v1, 0x34
    ctx->pc = 0x2a5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2a5424: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5428: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5428u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a542c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5430: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5430u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5434: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5438: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a543c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a543cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5440: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5444: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5448: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5448u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a544c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a544cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5450: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5450u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5454: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5458: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5458u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a545c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a545cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5460: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5464: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5468: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5468u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a546c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a546cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5470: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5474: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a5474u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5478: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a547c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5480: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5480u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5488: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5488u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a548c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5490: 0x24620036  addiu       $v0, $v1, 0x36
    ctx->pc = 0x2a5490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x2a5494: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5498: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a549c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a54a0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a54a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a54a4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a54a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a54a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a54ac: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a54acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a54b0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a54b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a54b4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a54b8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a54b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a54bc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a54bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a54c0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a54c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a54c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a54c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a54c8: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a54c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a54cc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a54ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a54d0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a54d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a54d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a54d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a54d8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a54d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a54dc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a54dcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a54e0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a54e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54e4: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a54e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a54e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a54e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a54ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a54f0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a54f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a54f8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a54f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a54fc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5500: 0x24620038  addiu       $v0, $v1, 0x38
    ctx->pc = 0x2a5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x2a5504: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5504u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5508: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5508u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a550c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5510: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5510u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5514: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5518: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a551c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a551cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5520: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5524: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a5524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a5528: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5528u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a552c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a552cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5530: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5530u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5538: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a5538u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a553c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a553cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5540: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5540u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5548: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a554c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a554cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5550: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5554: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5554u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5558: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a555c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5560: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5560u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5568: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5568u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a556c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5570: 0x2462003a  addiu       $v0, $v1, 0x3A
    ctx->pc = 0x2a5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 58));
    // 0x2a5574: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5574u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5578: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a557c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5580: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5580u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5584: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5584u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5588: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a558c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a558cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5590: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5594: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5598: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5598u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a559c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a559cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a55a0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a55a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a55a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a55a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a55a8: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a55a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a55ac: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a55acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a55b0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a55b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a55b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a55b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a55b8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a55b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a55bc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a55bcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a55c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a55c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55c4: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a55c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a55c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a55c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a55cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a55d0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a55d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a55d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a55d8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a55d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a55dc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a55e0: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2a55e4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a55e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a55e8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a55e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a55ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a55f0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a55f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a55f4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a55f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a55f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a55fc: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a55fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5600: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5604: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5608: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5608u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a560c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a560cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5610: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5610u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5618: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5618u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a561c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a561cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5620: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5624: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5628: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a562c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a562cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5630: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5634: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a5634u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5638: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a563c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5640: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5640u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5644: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5648: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5648u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a564c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5650: 0x2462003e  addiu       $v0, $v1, 0x3E
    ctx->pc = 0x2a5650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x2a5654: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5654u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5658: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a565c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5660: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5660u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5664: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5668: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a566c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a566cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5670: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5674: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a5674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5678: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5678u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a567c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a567cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5680: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5680u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5688: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5688u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a568c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a568cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5690: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5698: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5698u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a569c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a569cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a56a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a56a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a56a4: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a56a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a56a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a56a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a56ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a56b0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a56b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a56b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a56b8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a56b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a56bc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a56c0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2a56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a56c4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a56c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a56c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a56c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a56cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a56d0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a56d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a56d4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a56d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a56d8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a56dc: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a56dcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a56e0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a56e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a56e4: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a56e8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a56e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a56ec: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a56ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a56f0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a56f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a56f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a56f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a56f8: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a56f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a56fc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a56fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5700: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5700u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5704: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5708: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a570c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a570cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5710: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5714: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5714u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5718: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a571c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5720: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5728: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5728u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a572c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5730: 0x24620042  addiu       $v0, $v1, 0x42
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 66));
    // 0x2a5734: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5738: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5738u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a573c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5740: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5740u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5744: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5744u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5748: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a574c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a574cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5750: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5754: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5758: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5758u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a575c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a575cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5760: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5760u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5768: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5768u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a576c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a576cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5770: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5774: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5778: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5778u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a577c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a577cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5780: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5784: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5784u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5788: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a578c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5790: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5790u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5798: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5798u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a579c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a57a0: 0x24620044  addiu       $v0, $v1, 0x44
    ctx->pc = 0x2a57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x2a57a4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a57a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a57a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a57a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a57ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a57acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a57b0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a57b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a57b4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a57b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a57b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a57bc: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a57bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a57c0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a57c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a57c4: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a57c8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a57c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a57cc: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a57ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a57d0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a57d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a57d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a57d8: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a57d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a57dc: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a57dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a57e0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a57e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a57e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a57e8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a57e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a57ec: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a57ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a57f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a57f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57f4: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a57f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a57f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a57f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a57fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5800: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5808: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5808u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a580c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5810: 0x24620046  addiu       $v0, $v1, 0x46
    ctx->pc = 0x2a5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
    // 0x2a5814: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5814u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5818: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a581c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5820: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5820u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5824: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5828: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a582c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a582cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5830: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5834: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a5834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5838: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5838u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a583c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a583cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5840: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5844: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5848: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5848u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a584c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a584cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5850: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5850u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5854: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5858: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5858u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a585c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a585cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5860: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5864: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a5864u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5868: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a586c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5870: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5870u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5878: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5878u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a587c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5880: 0x24620048  addiu       $v0, $v1, 0x48
    ctx->pc = 0x2a5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2a5884: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5884u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5888: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5888u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a588c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5890: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5890u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5894: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5894u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5898: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a589c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a589cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a58a0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a58a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a58a4: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a58a8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a58a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a58ac: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a58acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a58b0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a58b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a58b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a58b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a58b8: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a58b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a58bc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a58bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a58c0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a58c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a58c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a58c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a58c8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a58c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a58cc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a58ccu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a58d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a58d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58d4: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a58d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a58d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a58d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a58dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a58e0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a58e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a58e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a58e8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a58e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a58ec: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a58f0: 0x2462004a  addiu       $v0, $v1, 0x4A
    ctx->pc = 0x2a58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 74));
    // 0x2a58f4: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a58f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a58f8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a58f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a58fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5900: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5900u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5904: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5904u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5908: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a590c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a590cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5910: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5910u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5914: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5918: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5918u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a591c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a591cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5920: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5928: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5928u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a592c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a592cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5930: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5934: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5938: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5938u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a593c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a593cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5940: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5944: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5944u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5948: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a594c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5950: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5958: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5958u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a595c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5960: 0x2462004c  addiu       $v0, $v1, 0x4C
    ctx->pc = 0x2a5960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x2a5964: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5964u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5968: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a596c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5970: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5970u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5974: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5974u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5978: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a597c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a597cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5980: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5980u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5984: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5988: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5988u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a598c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a598cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5990: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5994: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5998: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5998u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a599c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a599cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a59a0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a59a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a59a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a59a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a59a8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a59a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a59ac: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a59acu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a59b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a59b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59b4: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a59b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a59b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a59b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a59bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a59c0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a59c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a59c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a59c8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a59c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a59cc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a59d0: 0x2462004e  addiu       $v0, $v1, 0x4E
    ctx->pc = 0x2a59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 78));
    // 0x2a59d4: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a59d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a59d8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a59d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a59dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a59e0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a59e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a59e4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a59e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a59e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a59ec: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a59ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a59f0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a59f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a59f4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a59f8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a59f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a59fc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a59fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5a00: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5a00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5a04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5a08: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5a08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5a0c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5a10: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5a18: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5a18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5a1c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5a1cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5a20: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a24: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a5a24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5a28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5a30: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5a30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5a38: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5a38u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5a3c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5a40: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x2a5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2a5a44: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5a44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5a48: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5a48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5a50: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5a50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5a54: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5a54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a58: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a5a5c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5a60: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5a60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a64: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a5a68: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5a68u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5a6c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5a6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a70: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5a70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5a74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5a78: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a5a78u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5a7c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5a7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a80: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5a80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5a88: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5a88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5a8c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5a8cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5a90: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a94: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5a94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5a98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5aa0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5aa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5aa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5aa8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5aac: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5ab0: 0x24620052  addiu       $v0, $v1, 0x52
    ctx->pc = 0x2a5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
    // 0x2a5ab4: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5ab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5ab8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5abc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5ac0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ac4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5ac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5ac8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a5acc: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5accu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ad0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5ad4: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5ad8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5adc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5adcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5ae0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5ae0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5ae4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5ae8: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5aec: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5aecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5af0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5af0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5af8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5af8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5afc: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5afcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5b00: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b04: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5b04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5b08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5b10: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5b10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5b18: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5b18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5b1c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5b20: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2a5b24: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5b24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5b28: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5b2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5b30: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5b30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5b34: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5b34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a5b3c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5b40: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5b40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b44: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5b48: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5b48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5b4c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5b4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b50: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5b50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5b58: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5b58u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5b5c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5b5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b60: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5b60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5b64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5b68: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5b6c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5b6cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5b70: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b74: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a5b74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5b78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5b80: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5b80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5b88: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5b88u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5b8c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5b90: 0x24620056  addiu       $v0, $v1, 0x56
    ctx->pc = 0x2a5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
    // 0x2a5b94: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5b94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5b98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5b98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5ba0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ba4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5ba4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5ba8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5bac: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5bacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5bb0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5bb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5bb4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5bb8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5bbc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5bbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5bc0: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5bc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5bc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5bc8: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5bcc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5bccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5bd0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5bd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5bd8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5bd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5be0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5be0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5be4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5be4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5be8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2a5be8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2a5bec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a5becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bf0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5bf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5bf8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5bf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5bfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5c00: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5c00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5c04: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5c04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5c08: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a5c0c: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5c10: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5c14: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a5c18: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5c18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5c1c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5c1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5c20: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5c20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5c28: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a5c28u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5c2c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5c30: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5c34: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c40: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5c48: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5c48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5c4c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5c50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5c54: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5c54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5c58: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5c58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5c5c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5c60: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5c64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c68: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c6c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5c74: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5c74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5c78: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5c80: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5c80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5c84: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5c88: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5c8c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5c90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c98: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5ca0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5ca4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5ca4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5cac: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5cacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5cb0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5cb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5cb4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a5cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a5cb8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a5cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a5cbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5cc4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5ccc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5cccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5cd0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5cd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5cd8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5cdc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5ce0: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x2a5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x2a5ce4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5ce4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5ce8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5ce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5cec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5cf0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5cf4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5cf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5cf8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5cfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5d00: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5d00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5d04: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5d04u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5d08: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d0c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5d0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5d10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5d18: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5d18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5d20: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5d20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5d24: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5d28: 0x2462005a  addiu       $v0, $v1, 0x5A
    ctx->pc = 0x2a5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 90));
    // 0x2a5d2c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5d2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5d30: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5d30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5d38: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5d38u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5d3c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5d3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a5d44: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5d44u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5d48: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5d48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d4c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5d50: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5d50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5d54: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d58: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5d58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5d5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5d60: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5d60u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5d64: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5d64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d68: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5d68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5d6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5d70: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5d74: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5d74u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5d78: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d7c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5d7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5d80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5d88: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5d88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5d90: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5d90u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5d94: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5d98: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x2a5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x2a5d9c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5da0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5da0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5da8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5da8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5dac: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5dacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5db0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a5db4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5db4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5db8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5db8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5dbc: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5dc0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5dc4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5dc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5dc8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5dcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5dd0: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5dd4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5dd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5dd8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5dd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5ddc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5de0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5de0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5de4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5de4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5de8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5dec: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a5decu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5df0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5df8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5df8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5e00: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5e00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e04: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5e08: 0x2462005e  addiu       $v0, $v1, 0x5E
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x2a5e0c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5e0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5e10: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5e10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5e14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5e18: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5e18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e1c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5e20: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5e24: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5e24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e28: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5e28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5e2c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5e30: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5e30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e34: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5e34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5e38: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5e38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5e40: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a5e40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5e44: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5e44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5e48: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5e48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5e50: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5e50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5e54: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5e54u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5e58: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e5c: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a5e5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5e60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5e68: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5e6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5e70: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5e70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e74: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5e78: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2a5e7c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5e7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5e80: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5e80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5e88: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5e88u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e8c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5e90: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a5e94: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5e94u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5e98: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5e98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5e9c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a5ea0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ea4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5ea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5ea8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5eac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5eb0: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a5eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5eb4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a5eb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5eb8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5eb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5ebc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5ec0: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5ec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5ec4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5ec4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5ec8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ecc: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a5eccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5ed0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5ed8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5ed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5edc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5ee0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ee4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5ee8: 0x24620062  addiu       $v0, $v1, 0x62
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 98));
    // 0x2a5eec: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5eecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5ef0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5ef8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5efc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5efcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f00: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a5f04: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5f04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f08: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f0c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a5f10: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a5f10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f14: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5f14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f18: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5f18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5f20: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a5f20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5f24: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a5f24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f28: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5f28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5f2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5f30: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5f30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f34: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5f34u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5f38: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f3c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a5f3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5f40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5f48: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5f48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5f4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5f50: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5f50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f54: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5f58: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x2a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a5f5c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5f5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5f60: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5f68: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5f68u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f6c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5f6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5f70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a5f74: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5f74u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f78: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5f78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5f7c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a5f80: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a5f80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5f84: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5f84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5f88: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5f88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5f90: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a5f90u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a5f94: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a5f94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5f98: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a5f98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a5f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5fa0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a5fa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a5fa4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a5fa4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a5fa8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a5fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5fac: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a5facu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5fb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a5fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a5fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5fb8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a5fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5fbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5fc0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5fc4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a5fc8: 0x24620066  addiu       $v0, $v1, 0x66
    ctx->pc = 0x2a5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 102));
    // 0x2a5fcc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a5fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a5fd0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a5fd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a5fd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5fd8: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a5fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5fdc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5fdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5fe0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5fe4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a5fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5fe8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5fe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5fec: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a5ff0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a5ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a5ff4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a5ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a5ff8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a5ff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a5ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6000: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6000u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6004: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6008: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6008u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a600c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6010: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6014: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6014u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6018: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a601c: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a601cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6020: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6028: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a602c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6030: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6030u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6034: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6038: 0x24620068  addiu       $v0, $v1, 0x68
    ctx->pc = 0x2a6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x2a603c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a603cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6040: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6048: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6048u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a604c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a604cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6050: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a6050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a6054: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6054u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6058: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a605c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a605cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a6060: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6060u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6064: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6064u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6068: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6068u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a606c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6070: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6070u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6074: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6074u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6078: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6078u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a607c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6080: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6080u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6084: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6084u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6088: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a608c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a608cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6090: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6098: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6098u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a609c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a60a0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a60a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a60a4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a60a8: 0x2462006a  addiu       $v0, $v1, 0x6A
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 106));
    // 0x2a60ac: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a60acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a60b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a60b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a60b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a60b8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a60b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a60bc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a60bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a60c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a60c4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a60c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a60c8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a60c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a60cc: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a60d0: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a60d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a60d4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a60d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a60d8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a60d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a60dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a60dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a60e0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a60e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a60e4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a60e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a60e8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a60e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a60ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a60f0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a60f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a60f4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a60f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a60f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a60f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60fc: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a60fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6100: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6108: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6108u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a610c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6110: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6110u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6114: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6118: 0x2462006c  addiu       $v0, $v1, 0x6C
    ctx->pc = 0x2a6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x2a611c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a611cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6120: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6120u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6128: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6128u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a612c: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a612cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6130: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a6130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6134: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6134u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6138: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a613c: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a6140: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6140u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6144: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6148: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a614c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6150: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6150u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6154: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6154u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6158: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a615c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6160: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6164: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6164u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6168: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a616c: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a616cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6170: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6178: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6178u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a617c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6180: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6180u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6184: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6188: 0x2462006e  addiu       $v0, $v1, 0x6E
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x2a618c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a618cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6190: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6198: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6198u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a619c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a619cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a61a0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a61a4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a61a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a61a8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a61a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a61ac: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a61acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a61b0: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a61b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a61b4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a61b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a61b8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a61b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a61bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a61bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a61c0: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a61c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a61c4: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a61c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a61c8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a61c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a61cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a61ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a61d0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a61d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a61d4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a61d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a61d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a61d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61dc: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a61dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a61e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a61e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a61e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a61e8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a61e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a61ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a61f0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a61f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a61f4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a61f8: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2a61fc: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a61fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6200: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6208: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6208u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a620c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a620cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6210: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a6210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a6214: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6214u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6218: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a621c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a621cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a6220: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6220u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6224: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6224u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6228: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6228u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a622c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6230: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6230u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6234: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6238: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a623c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6240: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6240u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6244: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6244u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6248: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a624c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a624cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6250: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6258: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6258u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a625c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6260: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6260u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6264: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6268: 0x24620072  addiu       $v0, $v1, 0x72
    ctx->pc = 0x2a6268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 114));
    // 0x2a626c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a626cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6270: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6278: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6278u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a627c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a627cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6280: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a6280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a6284: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6284u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6288: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6288u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a628c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a6290: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6290u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6294: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6298: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a629c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a62a0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a62a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a62a4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a62a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a62a8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a62a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a62ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a62acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a62b0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a62b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a62b4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a62b4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a62b8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a62b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62bc: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a62bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a62c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a62c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a62c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a62c8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a62c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a62cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a62d0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a62d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a62d4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a62d8: 0x24620074  addiu       $v0, $v1, 0x74
    ctx->pc = 0x2a62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x2a62dc: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a62dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a62e0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a62e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a62e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a62e8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a62e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a62ec: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a62ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a62f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a62f4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a62f4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a62f8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a62f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a62fc: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a6300: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6300u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6304: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6304u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6308: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6308u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a630c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6310: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6310u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6314: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6314u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6318: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6318u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a631c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6320: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6320u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6324: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6324u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6328: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a632c: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a632cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6330: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6338: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6338u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a633c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6340: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6340u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6344: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6348: 0x24620076  addiu       $v0, $v1, 0x76
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 118));
    // 0x2a634c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a634cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6350: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6350u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6358: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6358u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a635c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a635cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6360: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a6364: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6364u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6368: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6368u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a636c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a6370: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6370u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6374: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6374u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6378: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6378u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a637c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6380: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6380u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6384: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6384u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6388: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a638c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6390: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6390u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6394: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6394u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6398: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a639c: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a639cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a63a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a63a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a63a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a63a8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a63a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a63ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a63b0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a63b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a63b4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a63b8: 0x24620078  addiu       $v0, $v1, 0x78
    ctx->pc = 0x2a63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2a63bc: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a63bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a63c0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a63c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a63c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a63c8: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a63c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a63cc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a63ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a63d0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a63d4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a63d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a63d8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a63d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a63dc: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a63e0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a63e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a63e4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a63e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a63e8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a63e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a63ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a63ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a63f0: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a63f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a63f4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a63f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a63f8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a63f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a63fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a63fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6400: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6400u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6404: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6404u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6408: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a640c: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a640cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6410: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6418: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a641c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6420: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6420u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6424: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6428: 0x2462007a  addiu       $v0, $v1, 0x7A
    ctx->pc = 0x2a6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 122));
    // 0x2a642c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a642cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6430: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6430u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6438: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6438u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a643c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a643cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6440: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a6444: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6444u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6448: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6448u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a644c: 0x21bc2  srl         $v1, $v0, 15
    ctx->pc = 0x2a644cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2a6450: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6450u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6454: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6458: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6458u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a645c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6460: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6460u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6464: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6468: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6468u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a646c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6470: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6470u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6474: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6474u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6478: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a647c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a647cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6480: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6488: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6488u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a648c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6490: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6490u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6494: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6498: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x2a6498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x2a649c: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a649cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a64a0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a64a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a64a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a64a8: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a64a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a64ac: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a64acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a64b4: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a64b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a64b8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a64b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64bc: 0x21b82  srl         $v1, $v0, 14
    ctx->pc = 0x2a64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x2a64c0: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a64c0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a64c4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a64c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64c8: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a64c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a64cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a64ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a64d0: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a64d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a64d4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a64d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64d8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a64d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a64dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a64dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a64e0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a64e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64e4: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a64e4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a64e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a64e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64ec: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a64ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a64f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a64f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a64f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a64f8: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a64f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a64fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6500: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6500u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6504: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6508: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x2a650c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a650cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6510: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6518: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6518u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a651c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a651cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6520: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a6520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a6524: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6524u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6528: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a652c: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2a6530: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6530u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6534: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6534u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6538: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a653c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6540: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6540u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6544: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6548: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6548u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a654c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6550: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6550u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6558: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6558u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a655c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a655cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6560: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2a6560u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2a6564: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a6564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6568: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6568u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a656c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6570: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6570u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6578: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6578u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a657c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a657cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6580: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a6580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a6584: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6584u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6588: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6588u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a658c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x2a658cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x2a6590: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6590u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6594: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6594u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6598: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6598u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a659c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a65a0: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a65a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a65a4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a65a8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a65a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a65ac: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a65acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a65b0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a65b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x2a65b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a65b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2a65b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2a65bc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a65c0: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a65c4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a65c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a65c8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a65c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a65cc: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a65ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x2a65d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a65d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a65d4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2a65d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2a65d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2a65d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65dc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x2a65dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A65E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A65E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A65E0u;
            // 0x2a65e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A65E8u;
    ctx->pc = 0x2a65e8u;
}
