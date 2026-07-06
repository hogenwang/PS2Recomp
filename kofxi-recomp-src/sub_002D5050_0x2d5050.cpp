#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D5050
// Address: 0x2d5050 - 0x2d5398
void sub_002D5050_0x2d5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5050_0x2d5050");
#endif

    switch (ctx->pc) {
        case 0x2d5128u: goto label_2d5128;
        default: break;
    }

    ctx->pc = 0x2d5050u;

    // 0x2d5050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5054: 0x3c030f0f  lui         $v1, 0xF0F
    ctx->pc = 0x2d5054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
    // 0x2d5058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d505c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5060: 0x34630f0f  ori         $v1, $v1, 0xF0F
    ctx->pc = 0x2d5060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3855);
    // 0x2d5064: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x2d5068: 0x8ccd0004  lw          $t5, 0x4($a2)
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d506c: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x2d506cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x2d5070: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d5074: 0x3c063333  lui         $a2, 0x3333
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13107 << 16));
    // 0x2d5078: 0xd1102  srl         $v0, $t5, 4
    ctx->pc = 0x2d5078u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2d507c: 0x34c63333  ori         $a2, $a2, 0x3333
    ctx->pc = 0x2d507cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13107);
    // 0x2d5080: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d5084: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x2d5084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x2d5088: 0x435824  and         $t3, $v0, $v1
    ctx->pc = 0x2d5088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d508c: 0x35085555  ori         $t0, $t0, 0x5555
    ctx->pc = 0x2d508cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21845);
    // 0x2d5090: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x2d5090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2d5094: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d5094u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d5098: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d5098u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d509c: 0xe1402  srl         $v0, $t6, 16
    ctx->pc = 0x2d509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x2d50a0: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x2d50a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x2d50a4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2d50a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2d50a8: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x2d50a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d50ac: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2d50acu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50b0: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x2d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2d50b4: 0x1ab6826  xor         $t5, $t5, $t3
    ctx->pc = 0x2d50b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 11));
    // 0x2d50b8: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x2d50b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x2d50bc: 0xd1082  srl         $v0, $t5, 2
    ctx->pc = 0x2d50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 2));
    // 0x2d50c0: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d50c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d50c4: 0x252f85a0  addiu       $t7, $t1, -0x7A60
    ctx->pc = 0x2d50c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935968));
    // 0x2d50c8: 0x465824  and         $t3, $v0, $a2
    ctx->pc = 0x2d50c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2d50cc: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2d50ccu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50d0: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x2d50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2d50d4: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d50d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d50d8: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d50d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d50dc: 0xe1202  srl         $v0, $t6, 8
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2d50e0: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x2d50e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x2d50e4: 0x475824  and         $t3, $v0, $a3
    ctx->pc = 0x2d50e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2d50e8: 0xb1a00  sll         $v1, $t3, 8
    ctx->pc = 0x2d50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x2d50ec: 0x1ab6826  xor         $t5, $t5, $t3
    ctx->pc = 0x2d50ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 11));
    // 0x2d50f0: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x2d50f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x2d50f4: 0xd1042  srl         $v0, $t5, 1
    ctx->pc = 0x2d50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x2d50f8: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d50f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d50fc: 0x485824  and         $t3, $v0, $t0
    ctx->pc = 0x2d50fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2d5100: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2d5100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2d5104: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d5104u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d5108: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d5108u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d510c: 0xe27c2  srl         $a0, $t6, 31
    ctx->pc = 0x2d510cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x2d5110: 0xd17c2  srl         $v0, $t5, 31
    ctx->pc = 0x2d5110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x2d5114: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2d5118: 0xe6840  sll         $t5, $t6, 1
    ctx->pc = 0x2d5118u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x2d511c: 0x1627025  or          $t6, $t3, $v0
    ctx->pc = 0x2d511cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2d5120: 0x1a46825  or          $t5, $t5, $a0
    ctx->pc = 0x2d5120u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x2d5124: 0x0  nop
    ctx->pc = 0x2d5124u;
    // NOP
label_2d5128:
    // 0x2d5128: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x2d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2d512c: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x2d512cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x2d5130: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x2d5130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2d5134: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x2d5134u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x2d5138: 0x1a25826  xor         $t3, $t5, $v0
    ctx->pc = 0x2d5138u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 2));
    // 0x2d513c: 0x8f090004  lw          $t1, 0x4($t8)
    ctx->pc = 0x2d513cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2d5140: 0xb1902  srl         $v1, $t3, 4
    ctx->pc = 0x2d5140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2d5144: 0xb1700  sll         $v0, $t3, 28
    ctx->pc = 0x2d5144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x2d5148: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x2d5148u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d514c: 0x1a46026  xor         $t4, $t5, $a0
    ctx->pc = 0x2d514cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 4));
    // 0x2d5150: 0x3162003f  andi        $v0, $t3, 0x3F
    ctx->pc = 0x2d5150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d5154: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2d5154u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2d5158: 0x3163003f  andi        $v1, $t3, 0x3F
    ctx->pc = 0x2d5158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d515c: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2d515cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2d5160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d5160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d5164: 0x3164003f  andi        $a0, $t3, 0x3F
    ctx->pc = 0x2d5164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d5168: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2d5168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2d516c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5170: 0x8c470100  lw          $a3, 0x100($v0)
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2d5174: 0xb3182  srl         $a2, $t3, 6
    ctx->pc = 0x2d5174u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 11), 6));
    // 0x2d5178: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2d5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2d517c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5180: 0x8c620300  lw          $v0, 0x300($v1)
    ctx->pc = 0x2d5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x2d5184: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2d5184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2d5188: 0x3185003f  andi        $a1, $t4, 0x3F
    ctx->pc = 0x2d5188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d518c: 0xc6202  srl         $t4, $t4, 8
    ctx->pc = 0x2d518cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2d5190: 0x30c600fc  andi        $a2, $a2, 0xFC
    ctx->pc = 0x2d5190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)252);
    // 0x2d5194: 0x8c880500  lw          $t0, 0x500($a0)
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x2d5198: 0x1c77026  xor         $t6, $t6, $a3
    ctx->pc = 0x2d5198u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 7));
    // 0x2d519c: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x2d519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x2d51a0: 0x3183003f  andi        $v1, $t4, 0x3F
    ctx->pc = 0x2d51a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d51a4: 0xc6202  srl         $t4, $t4, 8
    ctx->pc = 0x2d51a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2d51a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d51ac: 0x8cc70700  lw          $a3, 0x700($a2)
    ctx->pc = 0x2d51acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1792)));
    // 0x2d51b0: 0x1c27026  xor         $t6, $t6, $v0
    ctx->pc = 0x2d51b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 2));
    // 0x2d51b4: 0x3182003f  andi        $v0, $t4, 0x3F
    ctx->pc = 0x2d51b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d51b8: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x2d51b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x2d51bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d51c0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d51c4: 0xc2182  srl         $a0, $t4, 6
    ctx->pc = 0x2d51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 6));
    // 0x2d51c8: 0x1c87026  xor         $t6, $t6, $t0
    ctx->pc = 0x2d51c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 8));
    // 0x2d51cc: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2d51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2d51d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d51d4: 0x8c650200  lw          $a1, 0x200($v1)
    ctx->pc = 0x2d51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x2d51d8: 0x1c77026  xor         $t6, $t6, $a3
    ctx->pc = 0x2d51d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 7));
    // 0x2d51dc: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2d51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2d51e0: 0x308400fc  andi        $a0, $a0, 0xFC
    ctx->pc = 0x2d51e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)252);
    // 0x2d51e4: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x2d51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x2d51e8: 0x1c67026  xor         $t6, $t6, $a2
    ctx->pc = 0x2d51e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 6));
    // 0x2d51ec: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2d51f0: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x2d51f4: 0x1c57026  xor         $t6, $t6, $a1
    ctx->pc = 0x2d51f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 5));
    // 0x2d51f8: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x2d51f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x2d51fc: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x2d51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2d5200: 0x1c27026  xor         $t6, $t6, $v0
    ctx->pc = 0x2d5200u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 2));
    // 0x2d5204: 0x2b2a0020  slti        $t2, $t9, 0x20
    ctx->pc = 0x2d5204u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2d5208: 0x1c95826  xor         $t3, $t6, $t1
    ctx->pc = 0x2d5208u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 9));
    // 0x2d520c: 0x1c46026  xor         $t4, $t6, $a0
    ctx->pc = 0x2d520cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 4));
    // 0x2d5210: 0xb1902  srl         $v1, $t3, 4
    ctx->pc = 0x2d5210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2d5214: 0xb1700  sll         $v0, $t3, 28
    ctx->pc = 0x2d5214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x2d5218: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x2d5218u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d521c: 0x3185003f  andi        $a1, $t4, 0x3F
    ctx->pc = 0x2d521cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d5220: 0x3162003f  andi        $v0, $t3, 0x3F
    ctx->pc = 0x2d5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d5224: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2d5224u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2d5228: 0x3163003f  andi        $v1, $t3, 0x3F
    ctx->pc = 0x2d5228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d522c: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x2d522cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2d5230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d5230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d5234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5238: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2d5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2d523c: 0x3164003f  andi        $a0, $t3, 0x3F
    ctx->pc = 0x2d523cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2d5240: 0x8c460100  lw          $a2, 0x100($v0)
    ctx->pc = 0x2d5240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2d5244: 0xb1182  srl         $v0, $t3, 6
    ctx->pc = 0x2d5244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 6));
    // 0x2d5248: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2d5248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2d524c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d524cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5250: 0x8c680300  lw          $t0, 0x300($v1)
    ctx->pc = 0x2d5250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x2d5254: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2d5258: 0xc6202  srl         $t4, $t4, 8
    ctx->pc = 0x2d5258u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2d525c: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x2d525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x2d5260: 0x1a66826  xor         $t5, $t5, $a2
    ctx->pc = 0x2d5260u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 6));
    // 0x2d5264: 0x8c890500  lw          $t1, 0x500($a0)
    ctx->pc = 0x2d5264u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x2d5268: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2d526c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5270: 0x3184003f  andi        $a0, $t4, 0x3F
    ctx->pc = 0x2d5270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d5274: 0xc6202  srl         $t4, $t4, 8
    ctx->pc = 0x2d5274u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2d5278: 0x8c470700  lw          $a3, 0x700($v0)
    ctx->pc = 0x2d5278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x2d527c: 0xc1182  srl         $v0, $t4, 6
    ctx->pc = 0x2d527cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 6));
    // 0x2d5280: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x2d5280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x2d5284: 0x1a86826  xor         $t5, $t5, $t0
    ctx->pc = 0x2d5284u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 8));
    // 0x2d5288: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d5288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d528c: 0x3183003f  andi        $v1, $t4, 0x3F
    ctx->pc = 0x2d528cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2d5290: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d5290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5294: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2d5294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2d5298: 0x1a96826  xor         $t5, $t5, $t1
    ctx->pc = 0x2d5298u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 9));
    // 0x2d529c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d529cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52a0: 0x8c850200  lw          $a1, 0x200($a0)
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x2d52a4: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2d52a8: 0x1a76826  xor         $t5, $t5, $a3
    ctx->pc = 0x2d52a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 7));
    // 0x2d52ac: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x2d52acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x2d52b0: 0x8c640400  lw          $a0, 0x400($v1)
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x2d52b4: 0x1a66826  xor         $t5, $t5, $a2
    ctx->pc = 0x2d52b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 6));
    // 0x2d52b8: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2d52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2d52bc: 0x1a56826  xor         $t5, $t5, $a1
    ctx->pc = 0x2d52bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 5));
    // 0x2d52c0: 0x8c430600  lw          $v1, 0x600($v0)
    ctx->pc = 0x2d52c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x2d52c4: 0x1a46826  xor         $t5, $t5, $a0
    ctx->pc = 0x2d52c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 4));
    // 0x2d52c8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x2d52cc: 0x1540ff96  bnez        $t2, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2D52CCu;
    {
        const bool branch_taken_0x2d52cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D52D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D52CCu;
            // 0x2d52d0: 0x1a36826  xor         $t5, $t5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d52cc) {
            ctx->pc = 0x2D5128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D52D4u;
    // 0x2d52d4: 0xd1842  srl         $v1, $t5, 1
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x2d52d8: 0xd17c0  sll         $v0, $t5, 31
    ctx->pc = 0x2d52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 31));
    // 0x2d52dc: 0x436825  or          $t5, $v0, $v1
    ctx->pc = 0x2d52dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d52e0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2d52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2d52e4: 0xe2842  srl         $a1, $t6, 1
    ctx->pc = 0x2d52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x2d52e8: 0xe27c0  sll         $a0, $t6, 31
    ctx->pc = 0x2d52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 31));
    // 0x2d52ec: 0x857025  or          $t6, $a0, $a1
    ctx->pc = 0x2d52ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2d52f0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2d52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2d52f4: 0xd1842  srl         $v1, $t5, 1
    ctx->pc = 0x2d52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x2d52f8: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x2d52f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x2d52fc: 0x6e1826  xor         $v1, $v1, $t6
    ctx->pc = 0x2d52fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 14));
    // 0x2d5300: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x2d5300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x2d5304: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x2d5304u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d5308: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2d5308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2d530c: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d530cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d5310: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d5310u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d5314: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x2d5314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x2d5318: 0xe1202  srl         $v0, $t6, 8
    ctx->pc = 0x2d5318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2d531c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2d531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2d5320: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x2d5320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x2d5324: 0x445824  and         $t3, $v0, $a0
    ctx->pc = 0x2d5324u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d5328: 0xb2200  sll         $a0, $t3, 8
    ctx->pc = 0x2d5328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x2d532c: 0x1ab6826  xor         $t5, $t5, $t3
    ctx->pc = 0x2d532cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 11));
    // 0x2d5330: 0x1c47026  xor         $t6, $t6, $a0
    ctx->pc = 0x2d5330u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 4));
    // 0x2d5334: 0x3c040f0f  lui         $a0, 0xF0F
    ctx->pc = 0x2d5334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3855 << 16));
    // 0x2d5338: 0xd1082  srl         $v0, $t5, 2
    ctx->pc = 0x2d5338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 2));
    // 0x2d533c: 0x34840f0f  ori         $a0, $a0, 0xF0F
    ctx->pc = 0x2d533cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3855);
    // 0x2d5340: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d5340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d5344: 0x435824  and         $t3, $v0, $v1
    ctx->pc = 0x2d5344u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d5348: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x2d5348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2d534c: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d534cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d5350: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d5350u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d5354: 0xe1402  srl         $v0, $t6, 16
    ctx->pc = 0x2d5354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x2d5358: 0x4d1026  xor         $v0, $v0, $t5
    ctx->pc = 0x2d5358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 13));
    // 0x2d535c: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x2d535cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5360: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x2d5360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2d5364: 0x1ab6826  xor         $t5, $t5, $t3
    ctx->pc = 0x2d5364u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 11));
    // 0x2d5368: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x2d5368u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x2d536c: 0xd1102  srl         $v0, $t5, 4
    ctx->pc = 0x2d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2d5370: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d5370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d5374: 0x445824  and         $t3, $v0, $a0
    ctx->pc = 0x2d5374u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d5378: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x2d5378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2d537c: 0x1cb7026  xor         $t6, $t6, $t3
    ctx->pc = 0x2d537cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 11));
    // 0x2d5380: 0x1a36826  xor         $t5, $t5, $v1
    ctx->pc = 0x2d5380u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x2d5384: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x2d5384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x2d5388: 0xae0d0004  sw          $t5, 0x4($s0)
    ctx->pc = 0x2d5388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 13));
    // 0x2d538c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d538cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5390: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5390u;
            // 0x2d5394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5398u;
    ctx->pc = 0x2d5398u;
}
