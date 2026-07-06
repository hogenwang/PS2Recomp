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

// Function: sub_002A65E8
// Address: 0x2a65e8 - 0x2a8508
void sub_002A65E8_0x2a65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65E8_0x2a65e8");
#endif

    switch (ctx->pc) {
        case 0x2a81f8u: goto label_2a81f8;
        case 0x2a8284u: goto label_2a8284;
        case 0x2a8298u: goto label_2a8298;
        case 0x2a8318u: goto label_2a8318;
        case 0x2a8348u: goto label_2a8348;
        case 0x2a83a0u: goto label_2a83a0;
        case 0x2a83d8u: goto label_2a83d8;
        case 0x2a8460u: goto label_2a8460;
        case 0x2a8478u: goto label_2a8478;
        case 0x2a84a8u: goto label_2a84a8;
        default: break;
    }

    ctx->pc = 0x2a65e8u;

    // 0x2a65e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a65ec: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x2a65ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a65f0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x2a65f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65f4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x2a65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a65f8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x2a65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a65fc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6600: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x2a6600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a6604: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6608: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2a6608u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a660c: 0xffc30018  sd          $v1, 0x18($fp)
    ctx->pc = 0x2a660cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 3));
    // 0x2a6610: 0xdfc20018  ld          $v0, 0x18($fp)
    ctx->pc = 0x2a6610u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6614: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a6614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a6618: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6618u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a661c: 0xdfc30018  ld          $v1, 0x18($fp)
    ctx->pc = 0x2a661cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6620: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2a6620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x2a6624: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a6624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a6628: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6628u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a662c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6630: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a6634: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2a6634u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6638: 0xffc30018  sd          $v1, 0x18($fp)
    ctx->pc = 0x2a6638u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 3));
    // 0x2a663c: 0xdfc20018  ld          $v0, 0x18($fp)
    ctx->pc = 0x2a663cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6640: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a6640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a6644: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6644u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6648: 0xdfc30018  ld          $v1, 0x18($fp)
    ctx->pc = 0x2a6648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a664c: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x2a664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x2a6650: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a6650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a6654: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6654u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6658: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a665c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a6660: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6660u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6664: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6668: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a6668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a666c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a666cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6670: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6674: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6674u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a667c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a667cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6680: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6684: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x2a6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x2a6688: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6688u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a668c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a668cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6690: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6694: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6694u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6698: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6698u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a669c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a66a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a66a4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a66a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a66a8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a66a8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a66ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a66b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a66b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a66b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a66b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a66bc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a66bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a66c0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a66c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a66c4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a66c8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a66c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a66cc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a66ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a66d0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a66d4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a66d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a66d8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a66d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a66dc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a66dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a66e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a66e4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a66e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a66e8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a66ec: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x2a66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x2a66f0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a66f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a66f4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a66f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a66f8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a66fc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a66fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6700: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6700u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6704: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6708: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6708u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a670c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a670cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6710: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6710u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6714: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6718: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6718u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a671c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6720: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6724: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6724u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6728: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6728u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a672c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a6730: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6730u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6734: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6734u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6738: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a673c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a673cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6740: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6744: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6744u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a674c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a674cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6750: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6754: 0x2462007a  addiu       $v0, $v1, 0x7A
    ctx->pc = 0x2a6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 122));
    // 0x2a6758: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a675c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a675cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6760: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6764: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6764u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6768: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6768u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a676c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6770: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6774: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6774u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6778: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6778u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a677c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a677cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6780: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6780u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6784: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6788: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a678c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a678cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6790: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6794: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a6794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a6798: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6798u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a679c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a679cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a67a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a67a4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a67a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a67a8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a67a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a67ac: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a67acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a67b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a67b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a67b4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a67b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a67b8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67bc: 0x24620078  addiu       $v0, $v1, 0x78
    ctx->pc = 0x2a67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2a67c0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a67c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a67c4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a67c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a67c8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a67cc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a67ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a67d0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a67d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a67d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a67d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a67d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a67dc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a67dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a67e0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a67e0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a67e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a67e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a67e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a67ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a67ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a67f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a67f4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a67f4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a67f8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a67f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a67fc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a6800: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6800u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6804: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6808: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a6808u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a680c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a680cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6810: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6810u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6814: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6814u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6818: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a681c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a681cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6820: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6824: 0x24620076  addiu       $v0, $v1, 0x76
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 118));
    // 0x2a6828: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6828u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a682c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a682cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6830: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6834: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6834u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6838: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6838u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a683c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a683cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6840: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6844: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6844u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6848: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6848u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a684c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a684cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6850: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6850u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6854: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6858: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a685c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a685cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6860: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6860u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6864: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a6864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a6868: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6868u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a686c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a686cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6870: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a6870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a6874: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6874u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6878: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a687c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a687cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6884: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6884u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6888: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a688c: 0x24620074  addiu       $v0, $v1, 0x74
    ctx->pc = 0x2a688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x2a6890: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6894: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6894u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6898: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a689c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a689cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68a0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a68a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a68a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a68a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a68ac: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a68acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68b0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a68b0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a68b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a68b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68b8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a68b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a68bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a68bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a68c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a68c4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a68c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a68c8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a68c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68cc: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a68d0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a68d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a68d4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a68d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68d8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a68dc: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a68dcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a68e0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a68e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68e4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a68e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a68e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a68e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a68ec: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a68ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a68f0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a68f4: 0x24620072  addiu       $v0, $v1, 0x72
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 114));
    // 0x2a68f8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a68f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a68fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a68fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6900: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6904: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6908: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a690c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6910: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6914: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6914u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6918: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6918u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a691c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a691cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6920: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6920u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6924: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6928: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a692c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a692cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6930: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6934: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a6938: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6938u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a693c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a693cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6940: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a6940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a6944: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6944u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6948: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6948u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a694c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a694cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6950: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6954: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6954u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6958: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a695c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x2a695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2a6960: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6960u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6964: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6964u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6968: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a696c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a696cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6970: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6970u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6974: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6978: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a697c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a697cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6980: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6980u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6984: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6988: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6988u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a698c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6990: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6994: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6994u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6998: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a699c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a69a0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a69a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a69a4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a69a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a69a8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a69ac: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a69acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a69b0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a69b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a69b4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a69b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a69b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a69b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a69bc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a69bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a69c0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a69c4: 0x2462006e  addiu       $v0, $v1, 0x6E
    ctx->pc = 0x2a69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x2a69c8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a69c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a69cc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a69ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a69d0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a69d4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a69d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a69d8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a69d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a69dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a69dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a69e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a69e4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a69e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a69e8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a69e8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a69ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a69ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69f0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a69f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a69f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a69f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a69f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a69fc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a69fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6a00: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6a04: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a6a08: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6a08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6a0c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6a10: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a6a14: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6a14u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6a18: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6a18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6a1c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6a1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6a24: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6a24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6a28: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6a2c: 0x2462006c  addiu       $v0, $v1, 0x6C
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x2a6a30: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6a30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6a34: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6a34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6a38: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6a3c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6a3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a40: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6a40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6a44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6a48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6a4c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6a4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a50: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6a50u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6a54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a58: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6a58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6a5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6a60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6a64: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6a64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6a68: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6a68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a6c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a6a70: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6a70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6a74: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a78: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a6a7c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6a80: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6a80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a84: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6a84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6a8c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6a90: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6a94: 0x2462006a  addiu       $v0, $v1, 0x6A
    ctx->pc = 0x2a6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 106));
    // 0x2a6a98: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6a98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6a9c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6a9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6aa0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6aa4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6aa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6aa8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6aa8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6aac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6ab0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6ab4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6ab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6ab8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6ab8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6abc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ac0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6ac0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6ac4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6ac8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6acc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6accu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6ad0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6ad4: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a6ad8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6adc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6adcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6ae0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a6ae4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6ae8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6aec: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6aecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6af0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6af4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6af4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6af8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6afc: 0x24620068  addiu       $v0, $v1, 0x68
    ctx->pc = 0x2a6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x2a6b00: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6b00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6b04: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6b04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6b08: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6b0c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6b0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b10: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6b10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6b14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6b18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6b1c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6b1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b20: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6b20u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6b24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b28: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6b28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6b2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6b30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6b34: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6b34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6b38: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6b38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b3c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a6b40: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6b40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6b44: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b48: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a6b4c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6b50: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6b50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b54: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6b54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6b5c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6b60: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6b64: 0x24620066  addiu       $v0, $v1, 0x66
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 102));
    // 0x2a6b68: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6b6c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6b6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6b70: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6b74: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6b74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6b78: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6b78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6b7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6b80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6b84: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6b84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6b88: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6b88u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6b8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b90: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6b90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6b94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6b98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6b9c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6ba0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6ba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6ba4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a6ba8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6bac: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6bacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6bb0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a6bb4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6bb8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6bbc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6bbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6bc4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6bc8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6bcc: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x2a6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a6bd0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6bd4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6bd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6bd8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6bdc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6bdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6be0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6be0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6be4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6be8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6bec: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6becu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6bf0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6bf0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6bf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bf8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6bf8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6bfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6c00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c04: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6c04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6c08: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6c08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6c0c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a6c10: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6c10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6c14: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6c14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6c18: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a6c1c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6c20: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6c20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6c24: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6c2c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6c30: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6c34: 0x24620062  addiu       $v0, $v1, 0x62
    ctx->pc = 0x2a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 98));
    // 0x2a6c38: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6c3c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6c3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6c40: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6c44: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6c44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6c48: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6c48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6c4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6c50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c54: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6c58: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6c58u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6c5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c60: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6c60u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6c64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6c68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c6c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6c70: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6c70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6c74: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a6c78: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6c78u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6c7c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6c7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6c80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a6c84: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6c84u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6c88: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6c8c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6c8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6c90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6c94: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6c94u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6c98: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6c9c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2a6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2a6ca0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6ca4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6ca4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6ca8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6cac: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6cacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6cb0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6cb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6cb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6cb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6cbc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6cc0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6cc0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6cc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cc8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6cc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6ccc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6cd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6cd4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6cd8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6cd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6cdc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a6ce0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6ce4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6ce8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a6cec: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6cecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6cf0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6cf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6cf4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6cf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6cf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6cfc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6d00: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6d04: 0x2462005e  addiu       $v0, $v1, 0x5E
    ctx->pc = 0x2a6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x2a6d08: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6d0c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6d0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6d10: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6d14: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6d14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d18: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6d18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6d1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6d20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6d24: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6d24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d28: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6d28u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6d2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d30: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6d30u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6d34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6d38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6d3c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6d40: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d44: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a6d48: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6d48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6d4c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6d4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d50: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a6d54: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6d54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6d58: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d5c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6d5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6d60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6d64: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6d64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6d68: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6d6c: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x2a6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x2a6d70: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6d74: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6d74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6d78: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6d7c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6d7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6d80: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6d80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6d84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6d88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6d8c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6d90: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6d90u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6d94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d98: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6d98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6d9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6da0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6da4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6da4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6da8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6dac: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a6db0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6db0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6db4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6db4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6db8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a6dbc: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6dc0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6dc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6dc4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6dc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6dc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6dcc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6dccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6dd0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6dd4: 0x2462005a  addiu       $v0, $v1, 0x5A
    ctx->pc = 0x2a6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 90));
    // 0x2a6dd8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6dd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6ddc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6ddcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6de0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6de4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6de4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6de8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6de8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6dec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6df0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6df4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6df4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6df8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6df8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6dfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e00: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6e00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6e04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6e08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6e0c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a6e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6e10: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6e10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6e14: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a6e18: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6e18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6e1c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6e20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a6e24: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6e24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6e28: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6e28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6e2c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6e2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6e34: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6e34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6e38: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6e3c: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x2a6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x2a6e40: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6e40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6e44: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6e44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6e48: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6e4c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6e4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6e50: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a6e50u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6e54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6e58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6e5c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6e5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6e60: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6e60u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6e64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e68: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6e68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6e6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6e70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6e74: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a6e74u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6e78: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6e7c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a6e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a6e80: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a6e84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6e84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a6e8c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6e94: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6e94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6e98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6e98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6e9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6ea0: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6ea4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6ea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6ea8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a6ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a6eac: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a6eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a6eb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6eb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6eb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a6eb8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6ec0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6ec4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6ec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6ec8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6ecc: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6eccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6ed0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a6ed0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6ed4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a6ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a6ed8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a6ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a6edc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ee0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a6ee4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6ee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6eec: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6eecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6ef0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6ef4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6ef8: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a6ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6efc: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6efcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6f00: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a6f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a6f04: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a6f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a6f08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a6f10: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6f18: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a6f18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6f1c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a6f1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6f20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6f24: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a6f24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6f28: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6f28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6f2c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a6f30: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6f30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6f34: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6f34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6f38: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a6f3c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a6f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6f40: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a6f40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6f44: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6f44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6f48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6f4c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6f50: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6f54: 0x24620056  addiu       $v0, $v1, 0x56
    ctx->pc = 0x2a6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
    // 0x2a6f58: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a6f58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6f5c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6f5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6f60: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6f64: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6f64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6f68: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a6f68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6f6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6f70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6f74: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6f74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6f78: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6f78u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6f7c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f80: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6f80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6f84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6f88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6f8c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a6f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6f90: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6f90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6f94: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a6f98: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a6f98u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6f9c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6f9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6fa0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a6fa4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a6fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6fa8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a6fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6fac: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a6facu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6fb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a6fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a6fb4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6fb8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6fbc: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x2a6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2a6fc0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a6fc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a6fc4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a6fc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6fc8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6fcc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6fd0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a6fd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a6fd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6fd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6fdc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a6fdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6fe0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a6fe0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a6fe4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a6fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fe8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a6fe8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6fec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6ff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6ff4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a6ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6ff8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a6ff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6ffc: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7000: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7000u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7004: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7008: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a700c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a700cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7010: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7010u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7014: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7018: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a701c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a701cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7020: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7024: 0x24620052  addiu       $v0, $v1, 0x52
    ctx->pc = 0x2a7024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
    // 0x2a7028: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a702c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a702cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7030: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7034: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7034u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7038: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7038u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a703c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7040: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7044: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7044u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7048: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7048u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a704c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a704cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7050: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7050u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7054: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a705c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a705cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7060: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7064: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7068: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7068u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a706c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a706cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7070: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7074: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7074u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7078: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a707c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a707cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7084: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7084u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7088: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a708c: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x2a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2a7090: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7090u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7094: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7094u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7098: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a709c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a709cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70a0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a70a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a70a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a70a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a70a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a70ac: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a70acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70b0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a70b0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a70b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a70b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70b8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a70b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a70bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a70bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a70c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a70c4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a70c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a70c8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a70c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70cc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a70d0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a70d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a70d4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a70d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70d8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a70dc: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a70dcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a70e0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a70e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70e4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a70e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a70e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a70ec: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a70ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a70f0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a70f4: 0x2462004e  addiu       $v0, $v1, 0x4E
    ctx->pc = 0x2a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 78));
    // 0x2a70f8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a70f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a70fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a70fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7100: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7104: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7104u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7108: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7108u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a710c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7110: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7114: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7114u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7118: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7118u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a711c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a711cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7120: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7120u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7124: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a712c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a712cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7130: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7130u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7134: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7138: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7138u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a713c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a713cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7140: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7144: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7144u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7148: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a714c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a714cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7150: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7154: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7154u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7158: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a715c: 0x2462004c  addiu       $v0, $v1, 0x4C
    ctx->pc = 0x2a715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x2a7160: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7164: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7164u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7168: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a716c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a716cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7170: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7170u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7174: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7178: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a717c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a717cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7180: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7180u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7184: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7188: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7188u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a718c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7194: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7194u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7198: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7198u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a719c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a719cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a71a0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a71a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a71a4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a71a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a71a8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a71ac: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a71acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a71b0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a71b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a71b4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a71b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a71b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a71bc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a71bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a71c0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a71c4: 0x2462004a  addiu       $v0, $v1, 0x4A
    ctx->pc = 0x2a71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 74));
    // 0x2a71c8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a71c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a71cc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a71ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a71d0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a71d4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a71d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a71d8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a71d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a71dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a71dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a71e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a71e4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a71e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a71e8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a71e8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a71ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a71ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71f0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a71f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a71f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a71f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a71f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a71fc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a71fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7200: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7204: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7208: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7208u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a720c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a720cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7210: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7214: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7214u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7218: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a721c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a721cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7224: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7224u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7228: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a722c: 0x24620048  addiu       $v0, $v1, 0x48
    ctx->pc = 0x2a722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2a7230: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7234: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7234u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7238: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a723c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a723cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7240: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7240u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7244: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7248: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a724c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a724cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7250: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7250u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7254: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7258: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7258u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a725c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7260: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7264: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7264u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7268: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7268u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a726c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7270: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7270u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7274: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7274u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7278: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a727c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a727cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7280: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7280u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7284: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7284u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7288: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a728c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a728cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7290: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7294: 0x24620046  addiu       $v0, $v1, 0x46
    ctx->pc = 0x2a7294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
    // 0x2a7298: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a729c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a729cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a72a0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a72a4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a72a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a72a8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a72a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a72ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a72acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a72b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a72b4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a72b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a72b8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a72b8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a72bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a72bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72c0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a72c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a72c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a72c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a72c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a72cc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a72ccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a72d0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a72d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a72d4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a72d8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a72d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a72dc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a72dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a72e0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a72e4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a72e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a72e8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a72e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a72ec: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a72ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a72f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a72f4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a72f4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a72f8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a72fc: 0x24620044  addiu       $v0, $v1, 0x44
    ctx->pc = 0x2a72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x2a7300: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7300u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7304: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7304u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7308: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a730c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a730cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7310: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7310u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7314: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7318: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a731c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a731cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7320: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7320u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7324: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7328: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7328u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a732c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7330: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7334: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7334u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7338: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7338u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a733c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7340: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7340u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7344: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7348: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a734c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a734cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7350: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7350u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7354: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7354u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a735c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a735cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7360: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7364: 0x24620042  addiu       $v0, $v1, 0x42
    ctx->pc = 0x2a7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 66));
    // 0x2a7368: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7368u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a736c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a736cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7370: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7374: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7374u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7378: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7378u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a737c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7380: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7384: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7388: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7388u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a738c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a738cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7390: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7390u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7394: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7398: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a739c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a739cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a73a0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a73a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a73a4: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a73a8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a73a8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a73ac: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a73acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a73b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a73b4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a73b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a73b8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a73b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a73bc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a73bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a73c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a73c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a73c4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a73c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a73c8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a73cc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2a73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2a73d0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a73d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a73d4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a73d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a73d8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a73dc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a73dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a73e0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a73e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a73e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a73e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a73e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a73ec: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a73ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a73f0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a73f0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a73f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a73f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73f8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a73f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a73fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a73fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7400: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7404: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7404u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7408: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7408u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a740c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a740cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7410: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7410u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7414: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7414u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7418: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a741c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a741cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7420: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7420u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7424: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7428: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a742c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a742cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7430: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7434: 0x2462003e  addiu       $v0, $v1, 0x3E
    ctx->pc = 0x2a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x2a7438: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a743c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a743cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7440: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7444: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7444u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7448: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7448u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a744c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7450: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7454: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7458: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7458u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a745c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a745cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7460: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7460u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7464: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7468: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7468u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a746c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a746cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7470: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7474: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7478: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7478u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a747c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a747cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7480: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7484: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7484u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7488: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a748c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a748cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7494: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7494u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7498: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a749c: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2a749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2a74a0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a74a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a74a4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a74a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a74a8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a74ac: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a74acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a74b0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a74b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a74b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a74b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a74b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a74bc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a74bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a74c0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a74c0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a74c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a74c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74c8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a74c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a74cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a74ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a74d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a74d4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a74d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a74d8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a74d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a74dc: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a74e0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a74e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a74e4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a74e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a74e8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a74ec: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a74ecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a74f0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a74f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a74f4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a74f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a74f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a74fc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a74fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7500: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7504: 0x2462003a  addiu       $v0, $v1, 0x3A
    ctx->pc = 0x2a7504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 58));
    // 0x2a7508: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7508u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a750c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a750cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7510: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7514: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7514u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7518: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7518u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a751c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7520: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7524: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7528: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7528u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a752c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a752cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7530: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7530u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7534: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7538: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a753c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a753cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7540: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7544: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7548: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7548u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a754c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a754cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7550: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7554: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7554u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7558: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a755c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a755cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7564: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7564u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7568: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a756c: 0x24620038  addiu       $v0, $v1, 0x38
    ctx->pc = 0x2a756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x2a7570: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7570u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7574: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7574u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7578: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a757c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a757cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7580: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7580u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7584: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7588: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a758c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a758cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7590: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7590u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7594: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7598: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7598u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a759c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a75a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a75a4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a75a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a75a8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a75a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a75ac: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a75acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a75b0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a75b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a75b4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a75b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a75b8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a75bc: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a75bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a75c0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a75c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a75c4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a75c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a75c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a75c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a75cc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a75ccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a75d0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a75d4: 0x24620036  addiu       $v0, $v1, 0x36
    ctx->pc = 0x2a75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x2a75d8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a75d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a75dc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a75dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a75e0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a75e4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a75e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a75e8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a75e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a75ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a75ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a75f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a75f4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a75f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a75f8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a75f8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a75fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a75fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7600: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7600u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7604: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7608: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a760c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a760cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7610: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7614: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7618: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7618u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a761c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a761cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7620: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7624: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7624u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7628: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7628u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a762c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a762cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7634: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7634u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7638: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a763c: 0x24620034  addiu       $v0, $v1, 0x34
    ctx->pc = 0x2a763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2a7640: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7640u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7644: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7644u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7648: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a764c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a764cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7650: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7650u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7654: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7658: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a765c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a765cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7660: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7660u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7664: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7668: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7668u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a766c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7670: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7674: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7674u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7678: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a767c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7680: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7680u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7684: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7688: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a768c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a768cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7690: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7694: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7694u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7698: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a769c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a769cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a76a0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a76a4: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x2a76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2a76a8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a76a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a76ac: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a76acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a76b0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a76b4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a76b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a76b8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a76b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a76bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a76bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a76c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a76c4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a76c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a76c8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a76c8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a76cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a76ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76d0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a76d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a76d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a76d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a76d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a76dc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a76dcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a76e0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a76e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a76e4: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a76e8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a76e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a76ec: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a76ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a76f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a76f4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a76f4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a76f8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a76f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a76fc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a76fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7704: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7704u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7708: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a770c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2a770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2a7710: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7710u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7714: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7714u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7718: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a771c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a771cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7720: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7720u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7724: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7728: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a772c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a772cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7730: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7730u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7734: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7738: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7738u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a773c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7740: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7744: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7744u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7748: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a774c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a774cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7750: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7750u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7754: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7758: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a775c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a775cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7760: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7760u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7764: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7764u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a776c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a776cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7770: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7774: 0x2462002e  addiu       $v0, $v1, 0x2E
    ctx->pc = 0x2a7774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
    // 0x2a7778: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7778u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a777c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a777cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7780: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7784: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7784u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7788: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7788u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a778c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7790: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7794: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7794u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7798: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7798u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a779c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a779cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77a0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a77a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a77a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a77a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a77a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a77ac: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a77acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a77b0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a77b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a77b4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a77b8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a77b8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a77bc: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a77bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a77c0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a77c4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a77c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a77c8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a77c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a77cc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a77ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a77d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a77d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a77d4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a77d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a77d8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a77dc: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x2a77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x2a77e0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a77e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a77e4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a77e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a77e8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a77ec: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a77ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a77f0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a77f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a77f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a77f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a77fc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7800: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7800u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7804: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7808: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7808u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a780c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a780cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7810: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7814: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7814u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7818: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a781c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7820: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7820u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7824: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7828: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a782c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a782cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7830: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7834: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7834u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a783c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a783cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7840: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7844: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x2a7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x2a7848: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7848u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a784c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a784cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7850: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7854: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7854u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7858: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7858u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a785c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a785cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7860: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7864: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7864u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7868: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7868u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a786c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a786cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7870: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7870u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7874: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a787c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a787cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7880: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7880u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7884: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7888: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7888u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a788c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a788cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7890: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7890u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7894: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7894u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7898: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a789c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a789cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a78a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a78a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a78a4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a78a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a78a8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a78ac: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x2a78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2a78b0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a78b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a78b4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a78b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a78b8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a78bc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a78bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a78c0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a78c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a78c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a78c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a78c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a78cc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a78ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a78d0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a78d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a78d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a78d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78d8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a78d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a78dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a78e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a78e4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a78e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a78e8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a78e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a78ec: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a78ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a78f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a78f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a78f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a78fc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7904: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7908: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a7908u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a790c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a790cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7910: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a7910u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7914: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7918: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a7918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a791c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a7920: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a7920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7924: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a7928: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a792c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7930: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7934: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a7934u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7938: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a7938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a793c: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a793cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7940: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7944: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a7944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a7948: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a794c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a794cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7950: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a7954: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a795c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a795cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7960: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a7960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7964: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a7964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7968: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a7968u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a796c: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a796cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7970: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2a7970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a7974: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2a7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a7978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a7978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a797c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a7980: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7988: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a798c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2a798cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7990: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a7990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7994: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7994u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7998: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a799c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a79a0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a79a0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a79a4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a79a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a79a8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a79ac: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a79acu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a79b0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a79b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a79b4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a79b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a79b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a79b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a79bc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a79bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a79c0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a79c4: 0x24620026  addiu       $v0, $v1, 0x26
    ctx->pc = 0x2a79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    // 0x2a79c8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a79c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a79cc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a79ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a79d0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a79d4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a79d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a79d8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a79d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a79dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a79dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a79e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a79e4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a79e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a79e8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a79e8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a79ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a79ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79f0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a79f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a79f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a79f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a79f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a79fc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a79fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7a00: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7a04: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7a08: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7a08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7a0c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7a10: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7a14: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7a14u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7a18: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7a18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7a1c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7a1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7a24: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7a24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7a28: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7a2c: 0x24620024  addiu       $v0, $v1, 0x24
    ctx->pc = 0x2a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2a7a30: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7a30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7a34: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7a34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7a38: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7a3c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7a3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a40: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7a40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7a44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7a48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7a4c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7a4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a50: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7a50u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7a54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a58: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7a58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7a5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7a60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7a64: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7a64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7a68: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7a68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a6c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7a70: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7a70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7a74: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a78: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a7a7c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a7a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7a80: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7a80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a84: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7a84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7a8c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7a90: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7a94: 0x24620022  addiu       $v0, $v1, 0x22
    ctx->pc = 0x2a7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
    // 0x2a7a98: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7a98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a9c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7a9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7aa0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7aa4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7aa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7aa8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7aa8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7aac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7ab0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7ab4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7ab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7ab8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7ab8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7abc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ac0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7ac0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ac4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7ac8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7acc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7accu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7ad0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7ad4: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7ad8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7adc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7adcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7ae0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7ae4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7ae8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7aec: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7aecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7af0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7af4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7af4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7af8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7afc: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a7b00: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7b00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7b04: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7b04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7b08: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7b0c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b10: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7b10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7b14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7b18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7b1c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7b1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b20: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7b20u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7b24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b28: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7b28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7b2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7b30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7b34: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7b34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7b38: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7b38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b3c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7b40: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7b40u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7b44: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b48: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a7b4c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a7b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7b50: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7b50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b54: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7b54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7b5c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7b60: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7b64: 0x2462001e  addiu       $v0, $v1, 0x1E
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2a7b68: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7b6c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7b6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7b70: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7b74: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7b74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7b78: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7b78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7b7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7b80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7b84: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7b84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7b88: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7b88u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7b8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b90: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7b90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7b94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7b98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7b9c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7ba0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7ba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ba4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7ba8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7bac: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7bacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7bb0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7bb4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7bb8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7bbc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7bbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7bc4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7bc8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7bcc: 0x2462001c  addiu       $v0, $v1, 0x1C
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2a7bd0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7bd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7bd4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7bd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7bd8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7bdc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7bdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7be0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7be0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7be4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7be8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7bec: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7becu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7bf0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7bf0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7bf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7bf8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7bfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7c00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7c04: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7c04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c08: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7c08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7c0c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7c10: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7c10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7c14: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7c14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7c18: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a7c1c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a7c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7c20: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7c20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7c24: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7c2c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c30: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7c34: 0x2462001a  addiu       $v0, $v1, 0x1A
    ctx->pc = 0x2a7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x2a7c38: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7c3c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7c3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7c40: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7c44: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7c44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7c48: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7c48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7c4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7c50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7c54: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7c58: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7c58u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7c5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c60: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7c60u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7c64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7c68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7c6c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c70: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7c70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7c74: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7c78: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7c78u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7c7c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7c7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7c80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7c84: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7c84u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7c88: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7c8c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7c8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7c90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7c94: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7c94u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7c98: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7c9c: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x2a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2a7ca0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7ca4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7ca4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7ca8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7cac: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7cacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7cb0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7cb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7cb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7cb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7cbc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7cbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7cc0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7cc0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7cc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7cc8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7cc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7ccc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7cd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7cd4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7cd8: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7cd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7cdc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7ce0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7ce4: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7ce8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a7cec: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a7cecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7cf0: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7cf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7cf4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7cf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7cf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7cfc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7d00: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7d04: 0x24620016  addiu       $v0, $v1, 0x16
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x2a7d08: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7d0c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7d0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7d10: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7d14: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7d14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d18: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7d18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7d1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7d20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7d24: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7d24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d28: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7d28u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7d2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d30: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7d30u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7d34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7d38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7d3c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7d40: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d44: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7d48: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7d48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7d4c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7d4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d50: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7d54: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7d54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7d58: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d5c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7d5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7d60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7d64: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7d64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7d68: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7d6c: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x2a7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2a7d70: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7d74: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7d74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7d78: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7d7c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7d7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7d80: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7d80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7d84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7d88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7d8c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7d90: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7d90u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7d94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d98: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7d98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7d9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7da0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7da4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7da4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7da8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7dac: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7db0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7db0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7db4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7db4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7db8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a7dbc: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a7dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7dc0: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7dc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7dc4: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7dc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7dc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7dcc: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7dccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7dd0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7dd4: 0x24620012  addiu       $v0, $v1, 0x12
    ctx->pc = 0x2a7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x2a7dd8: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7dd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7ddc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7ddcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7de0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7de4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7de4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7de8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7de8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7dec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7df0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7df4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7df4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7df8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7df8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7dfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e00: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7e00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7e04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7e08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7e0c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7e10: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7e10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7e14: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7e18: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7e18u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7e1c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7e20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7e24: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7e24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7e28: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7e28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7e2c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7e2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7e34: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7e34u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7e38: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7e3c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2a7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a7e40: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7e40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7e44: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7e44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7e48: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7e4c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e50: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7e50u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7e54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7e58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7e5c: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7e5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e60: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7e60u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7e64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e68: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7e68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7e6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7e70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7e74: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7e74u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7e78: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e7c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a7e80: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7e80u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7e84: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7e84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e88: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a7e8c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a7e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7e90: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a7e90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e94: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7e94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7e9c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7ea0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7ea4: 0x2462000e  addiu       $v0, $v1, 0xE
    ctx->pc = 0x2a7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2a7ea8: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7eac: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7eacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7eb0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7eb4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7eb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7eb8: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a7eb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7ebc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7ec0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7ec4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7ec4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ec8: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7ec8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7ecc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ed0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7ed0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7ed4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7ed8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7edc: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a7edcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7ee0: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7ee0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ee4: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a7ee8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7eec: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7eecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ef0: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a7ef4: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a7ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7ef8: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a7ef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7efc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7f04: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7f04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7f08: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7f0c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2a7f10: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a7f10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7f14: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7f14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7f18: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7f1c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7f1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f20: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a7f20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7f24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7f28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7f2c: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7f2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f30: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7f30u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7f34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f38: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7f38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7f3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7f40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7f44: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a7f44u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7f48: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7f48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f4c: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a7f50: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7f50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7f54: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7f54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f58: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a7f5c: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a7f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7f60: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a7f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f64: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7f64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7f68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7f6c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7f70: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7f74: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2a7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2a7f78: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a7f78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7f7c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7f7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7f80: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7f84: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7f84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7f88: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a7f88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7f8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7f90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7f94: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7f94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7f98: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a7f98u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a7f9c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fa0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7fa0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7fa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7fa8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7fac: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a7facu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7fb0: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7fb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7fb4: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a7fb8: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a7fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7fbc: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7fbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7fc0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a7fc4: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a7fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7fc8: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a7fc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7fcc: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a7fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7fd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a7fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a7fd4: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7fd8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7fdc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a7fe0: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a7fe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a7fe4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a7fe4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7fe8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7fec: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7fecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7ff0: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a7ff0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a7ff4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a7ff8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7ffc: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a7ffcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8000: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a8000u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a8004: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a8004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8008: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a8008u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a800c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8010: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8014: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a8014u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8018: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a8018u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a801c: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x2a801cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2a8020: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a8020u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8024: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a8024u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8028: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2a8028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a802c: 0xa7c30010  sh          $v1, 0x10($fp)
    ctx->pc = 0x2a802cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8030: 0x97c20010  lhu         $v0, 0x10($fp)
    ctx->pc = 0x2a8030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8034: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a8034u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a803c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a803cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8040: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a8040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8044: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x2a8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2a8048: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a8048u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a804c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a804cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8050: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a8050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8054: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a8054u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8058: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a8058u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a805c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a805cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8060: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8064: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a8064u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8068: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a8068u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a806c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a806cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8070: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a8070u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8074: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a8074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8078: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a807c: 0xa7c20010  sh          $v0, 0x10($fp)
    ctx->pc = 0x2a807cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8080: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a8080u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8084: 0x21b40  sll         $v1, $v0, 13
    ctx->pc = 0x2a8084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2a8088: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a8088u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a808c: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a808cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8090: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2a8094: 0xa7c3000e  sh          $v1, 0xE($fp)
    ctx->pc = 0x2a8094u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8098: 0x97c2000e  lhu         $v0, 0xE($fp)
    ctx->pc = 0x2a8098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a809c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a809cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a80a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a80a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a80a4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a80a4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a80a8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a80ac: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a80b0: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a80b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a80b4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a80b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a80b8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a80bc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a80bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a80c0: 0x97c4000a  lhu         $a0, 0xA($fp)
    ctx->pc = 0x2a80c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a80c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a80c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a80c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a80cc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a80ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a80d0: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a80d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a80d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a80d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a80d8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a80d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a80dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a80dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a80e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a80e4: 0xa7c2000e  sh          $v0, 0xE($fp)
    ctx->pc = 0x2a80e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a80e8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a80e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a80ec: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x2a80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x2a80f0: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a80f0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a80f4: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a80f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a80f8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2a80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2a80fc: 0xa7c3000c  sh          $v1, 0xC($fp)
    ctx->pc = 0x2a80fcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8100: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x2a8100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8104: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a8104u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8108: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a810c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a810cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8110: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x2a8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8114: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8118: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x2a8118u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a811c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a811cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8120: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8124: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a8124u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8128: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a8128u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a812c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8130: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8134: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a8134u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8138: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a8138u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a813c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a813cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8140: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a8140u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8144: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8148: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a814c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x2a814cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8150: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a8150u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8154: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x2a8154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x2a8158: 0xa7c30008  sh          $v1, 0x8($fp)
    ctx->pc = 0x2a8158u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a815c: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a815cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8160: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a8164: 0xa7c3000a  sh          $v1, 0xA($fp)
    ctx->pc = 0x2a8164u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8168: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x2a8168u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a816c: 0x97c30008  lhu         $v1, 0x8($fp)
    ctx->pc = 0x2a816cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8174: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a8174u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8178: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2a8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a817c: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a817cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a8180: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2a8180u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8184: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2a8184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8188: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a8188u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a818c: 0x97c4000e  lhu         $a0, 0xE($fp)
    ctx->pc = 0x2a818cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a8190: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a8190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a8194: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a8194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8198: 0x97c30010  lhu         $v1, 0x10($fp)
    ctx->pc = 0x2a8198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a819c: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x2a819cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2a81a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a81a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81a4: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a81a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a81a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a81a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a81ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a81b0: 0xa7c2000a  sh          $v0, 0xA($fp)
    ctx->pc = 0x2a81b0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a81b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a81b8: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x2a81b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2a81bc: 0x97c4000c  lhu         $a0, 0xC($fp)
    ctx->pc = 0x2a81bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a81c0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a81c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x2a81c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a81c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a81c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2a81c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2a81cc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a81d0: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a81d4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2a81d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2a81d8: 0x97c40010  lhu         $a0, 0x10($fp)
    ctx->pc = 0x2a81d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a81dc: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a81dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x2a81e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a81e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a81e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2a81e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2a81e8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2a81e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81ec: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x2a81ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a81f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A81F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81F0u;
        // 0x2a81f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A81F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A81F8u;
label_2a81f8:
    // 0x2a81f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a81fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a81fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8200: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2a8200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2a8204: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2a8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2a8208: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a820c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2a820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2a8210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a8210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8214: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2a8214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2a8218: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a821c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A821Cu;
    {
        const bool branch_taken_0x2a821c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A821Cu;
        // 0x2a8220: 0xffb10090  sd          $s1, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a821c) {
            ctx->pc = 0x2A8234u;
            goto label_2a8234;
        }
    }
    ctx->pc = 0x2A8224u;
    // 0x2a8224: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x2a8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x2a8228: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a8228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a822c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A822Cu;
    {
        const bool branch_taken_0x2a822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A822Cu;
        // 0x2a8230: 0x244548c0  addiu       $a1, $v0, 0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a822c) {
            ctx->pc = 0x2A8240u;
            goto label_2a8240;
        }
    }
    ctx->pc = 0x2A8234u;
label_2a8234:
    // 0x2a8234: 0x2a030081  slti        $v1, $s0, 0x81
    ctx->pc = 0x2a8234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2a8238: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2a8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a823c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2a823cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2a8240:
    // 0x2a8240: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2a8244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a8244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8248: 0x48400a  movz        $t0, $v0, $t0
    ctx->pc = 0x2a8248u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x2a824c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8250: 0x25040007  addiu       $a0, $t0, 0x7
    ctx->pc = 0x2a8250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2a8254: 0x2502000e  addiu       $v0, $t0, 0xE
    ctx->pc = 0x2a8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 14));
    // 0x2a8258: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a8258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a825c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a825cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8260: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a8260u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a8264: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x2a8264u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a8268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a826c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2a826cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2a8270: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2a8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2a8274: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x2a8274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a8278: 0x473804  sllv        $a3, $a3, $v0
    ctx->pc = 0x2a8278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a827c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2A827Cu;
    SET_GPR_U32(ctx, 31, 0x2A8284u);
    ctx->pc = 0x2A8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A827Cu;
    // 0x2a8280: 0x79027  nor         $s2, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A827Cu, 0x2A8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8284u;
label_2a8284:
    // 0x2a8284: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2a8284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8288: 0x29020080  slti        $v0, $t0, 0x80
    ctx->pc = 0x2a8288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a828c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A828Cu;
    {
        const bool branch_taken_0x2a828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A828Cu;
        // 0x2a8290: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a828c) {
            ctx->pc = 0x2A82DCu;
            goto label_2a82dc;
        }
    }
    ctx->pc = 0x2A8294u;
    // 0x2a8294: 0x0  nop
    ctx->pc = 0x2a8294u;
    // NOP
label_2a8298:
    // 0x2a8298: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x2a8298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a829c: 0x11d2021  addu        $a0, $t0, $sp
    ctx->pc = 0x2a829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x2a82a0: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2a82a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a82a4: 0x9083ffff  lbu         $v1, -0x1($a0)
    ctx->pc = 0x2a82a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x2a82a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a82a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a82ac: 0x24e6c960  addiu       $a2, $a3, -0x36A0
    ctx->pc = 0x2a82acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953312));
    // 0x2a82b0: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x2a82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2a82b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a82b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a82bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a82c0: 0x29040080  slti        $a0, $t0, 0x80
    ctx->pc = 0x2a82c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a82c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a82c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a82c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a82cc: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A82CCu;
    {
        const bool branch_taken_0x2a82cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82CCu;
        // 0x2a82d0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82cc) {
            ctx->pc = 0x2A8298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8298;
        }
    }
    ctx->pc = 0x2A82D4u;
    // 0x2a82d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A82D4u;
    {
        const bool branch_taken_0x2a82d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82D4u;
        // 0x2a82d8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82d4) {
            ctx->pc = 0x2A82E0u;
            goto label_2a82e0;
        }
    }
    ctx->pc = 0x2A82DCu;
label_2a82dc:
    // 0x2a82dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2a82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a82e0:
    // 0x2a82e0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2a82e4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a82e8: 0x24e6c960  addiu       $a2, $a3, -0x36A0
    ctx->pc = 0x2a82e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953312));
    // 0x2a82ec: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2a82ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a82f0: 0x714023  subu        $t0, $v1, $s1
    ctx->pc = 0x2a82f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a82f4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2a82f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a82f8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2a82f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2a82fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a8300: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a8300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8304: 0x500000e  bltz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A8304u;
    {
        const bool branch_taken_0x2a8304 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2A8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8304u;
        // 0x2a8308: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8304) {
            ctx->pc = 0x2A8340u;
            goto label_2a8340;
        }
    }
    ctx->pc = 0x2A830Cu;
    // 0x2a830c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2a830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2a8310: 0x11d2021  addu        $a0, $t0, $sp
    ctx->pc = 0x2a8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x2a8314: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2a8314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2a8318:
    // 0x2a8318: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a8318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a831c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2a831cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a8320: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2a8320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2a8324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a8328: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2a8328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2a832c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a8330: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a8330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8334: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a8334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8338: 0x501fff7  bgez        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A8338u;
    {
        const bool branch_taken_0x2a8338 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2A833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8338u;
        // 0x2a833c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8338) {
            ctx->pc = 0x2A8318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8318;
        }
    }
    ctx->pc = 0x2A8340u;
label_2a8340:
    // 0x2a8340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8344: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a8344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8348:
    // 0x2a8348: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2a834c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2a834cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2a8350: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2a8350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a8354: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2a8354u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8358: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a835c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2a835cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2a8360: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a8364: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a8364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a8368: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2a8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a836c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2a836cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2a8370: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2a8370u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8374: 0x29020080  slti        $v0, $t0, 0x80
    ctx->pc = 0x2a8374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a8378: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A8378u;
    {
        const bool branch_taken_0x2a8378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8378u;
        // 0x2a837c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8378) {
            ctx->pc = 0x2A8348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8348;
        }
    }
    ctx->pc = 0x2A8380u;
    // 0x2a8380: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2a8380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a8384: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2a8384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a8388: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2a8388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a838c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2a838cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8390: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2a8390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8394: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8394u;
        // 0x2a8398: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A839Cu;
    // 0x2a839c: 0x0  nop
    ctx->pc = 0x2a839cu;
    // NOP
label_2a83a0:
    // 0x2a83a0: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2a83a0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83a4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2a83a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83a8: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2a83a8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83ac: 0x11a00029  beqz        $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A83ACu;
    {
        const bool branch_taken_0x2a83ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83ACu;
        // 0x2a83b0: 0xe0702d  daddu       $t6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83ac) {
            ctx->pc = 0x2A8454u;
            goto label_2a8454;
        }
    }
    ctx->pc = 0x2A83B4u;
    // 0x2a83b4: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x2a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2a83b8: 0x270a0008  addiu       $t2, $t8, 0x8
    ctx->pc = 0x2a83b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x2a83bc: 0x8f0c0004  lw          $t4, 0x4($t8)
    ctx->pc = 0x2a83bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2a83c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a83c4: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x2a83c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a83c8: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2a83cc: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x2a83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2a83d0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2a83d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a83d4: 0x0  nop
    ctx->pc = 0x2a83d4u;
    // NOP
label_2a83d8:
    // 0x2a83d8: 0x1891021  addu        $v0, $t4, $t1
    ctx->pc = 0x2a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x2a83dc: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x2a83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2a83e0: 0x304c00ff  andi        $t4, $v0, 0xFF
    ctx->pc = 0x2a83e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a83e4: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x2a83e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a83e8: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x2a83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2a83ec: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x2a83ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2a83f0: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2a83f4: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2a83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2a83f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a83fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a83fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8400: 0x10a2821  addu        $a1, $t0, $t2
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2a8404: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x2a8404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8408: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x2a8408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a840c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a840cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2a8410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a8410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8414: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x2a8414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x2a8418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a841c: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2a841cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a8420: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a8424: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x2a8424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2a8428: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2a8428u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a842c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2a842cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2a8430: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2a8430u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2a8434: 0x65adffff  daddiu      $t5, $t5, -0x1
    ctx->pc = 0x2a8434u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x2a8438: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2a8438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2a843c: 0x15a0ffe6  bnez        $t5, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2A843Cu;
    {
        const bool branch_taken_0x2a843c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A843Cu;
        // 0x2a8440: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a843c) {
            ctx->pc = 0x2A83D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a83d8;
        }
    }
    ctx->pc = 0x2A8444u;
    // 0x2a8444: 0x2562ffff  addiu       $v0, $t3, -0x1
    ctx->pc = 0x2a8444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2a8448: 0xaf0c0004  sw          $t4, 0x4($t8)
    ctx->pc = 0x2a8448u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 12));
    // 0x2a844c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8450: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x2a8450u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_2a8454:
    // 0x2a8454: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A845Cu;
    // 0x2a845c: 0x0  nop
    ctx->pc = 0x2a845cu;
    // NOP
label_2a8460:
    // 0x2a8460: 0x248b0008  addiu       $t3, $a0, 0x8
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2a8464: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a8464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a8468: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a8468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a846c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8470: 0x24840404  addiu       $a0, $a0, 0x404
    ctx->pc = 0x2a8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1028));
    // 0x2a8474: 0x0  nop
    ctx->pc = 0x2a8474u;
    // NOP
label_2a8478:
    // 0x2a8478: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2a8478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2a847c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2a8480: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2a8480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a8484: 0x0  nop
    ctx->pc = 0x2a8484u;
    // NOP
    // 0x2a8488: 0x0  nop
    ctx->pc = 0x2a8488u;
    // NOP
    // 0x2a848c: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A848Cu;
    {
        const bool branch_taken_0x2a848c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x2a848c) {
            ctx->pc = 0x2A8478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8478;
        }
    }
    ctx->pc = 0x2A8494u;
    // 0x2a8494: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a849c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2a849cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a84a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a84a4: 0x0  nop
    ctx->pc = 0x2a84a4u;
    // NOP
label_2a84a8:
    // 0x2a84a8: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x2a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2a84ac: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2a84acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a84b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a84b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a84b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a84b8: 0x1251826  xor         $v1, $t1, $a1
    ctx->pc = 0x2a84b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
    // 0x2a84bc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2a84bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a84c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a84c4: 0x3480a  movz        $t1, $zero, $v1
    ctx->pc = 0x2a84c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x2a84c8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a84cc: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x2a84ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a84d0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a84d4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2a84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a84d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a84dc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2a84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2a84e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2a84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a84e4: 0x501fff0  bgez        $t0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A84E4u;
    {
        const bool branch_taken_0x2a84e4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2A84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84E4u;
        // 0x2a84e8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84e4) {
            ctx->pc = 0x2A84A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a84a8;
        }
    }
    ctx->pc = 0x2A84ECu;
    // 0x2a84ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A84ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A84ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A84F4u;
    // 0x2a84f4: 0x0  nop
    ctx->pc = 0x2a84f4u;
    // NOP
    // 0x2a84f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a84fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A84FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84FCu;
        // 0x2a8500: 0x2442ca88  addiu       $v0, $v0, -0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A84FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8504u;
    // 0x2a8504: 0x0  nop
    ctx->pc = 0x2a8504u;
    // NOP
}
