#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270EA0
// Address: 0x270ea0 - 0x271038
void sub_00270EA0_0x270ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270EA0_0x270ea0");
#endif

    switch (ctx->pc) {
        case 0x271008u: goto label_271008;
        case 0x27100cu: goto label_27100c;
        default: break;
    }

    ctx->pc = 0x270ea0u;

    // 0x270ea0: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x270ea4: 0x3c0e1f80  lui         $t6, 0x1F80
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8064 << 16));
    // 0x270ea8: 0xf7ef8  dsll        $t7, $t7, 27
    ctx->pc = 0x270ea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 27);
    // 0x270eac: 0xae7024  and         $t6, $a1, $t6
    ctx->pc = 0x270eacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x270eb0: 0xaf7824  and         $t7, $a1, $t7
    ctx->pc = 0x270eb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x270eb4: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
    // 0x270eb8: 0xf7a7a  dsrl        $t7, $t7, 9
    ctx->pc = 0x270eb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 9);
    // 0x270ebc: 0xe72fa  dsrl        $t6, $t6, 11
    ctx->pc = 0x270ebcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 11);
    // 0x270ec0: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x270ec0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x270ec4: 0x30ac0001  andi        $t4, $a1, 0x1
    ctx->pc = 0x270ec4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x270ec8: 0x553fa  dsrl        $t2, $a1, 15
    ctx->pc = 0x270ec8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) >> 15);
    // 0x270ecc: 0x35adf800  ori         $t5, $t5, 0xF800
    ctx->pc = 0x270eccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)63488);
    // 0x270ed0: 0xad6824  and         $t5, $a1, $t5
    ctx->pc = 0x270ed0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x270ed4: 0x547fa  dsrl        $t0, $a1, 31
    ctx->pc = 0x270ed4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) >> 31);
    // 0x270ed8: 0x30ab01f8  andi        $t3, $a1, 0x1F8
    ctx->pc = 0x270ed8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)504);
    // 0x270edc: 0x30a91f80  andi        $t1, $a1, 0x1F80
    ctx->pc = 0x270edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8064);
    // 0x270ee0: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x270ee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x270ee4: 0x30af001f  andi        $t7, $a1, 0x1F
    ctx->pc = 0x270ee4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x270ee8: 0xc65f8  dsll        $t4, $t4, 23
    ctx->pc = 0x270ee8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 23);
    // 0x270eec: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x270eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x270ef0: 0x94978  dsll        $t1, $t1, 5
    ctx->pc = 0x270ef0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 5);
    // 0x270ef4: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x270ef4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x270ef8: 0xd69f8  dsll        $t5, $t5, 7
    ctx->pc = 0x270ef8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 7);
    // 0x270efc: 0xb58f8  dsll        $t3, $t3, 3
    ctx->pc = 0x270efcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 3);
    // 0x270f00: 0x52b7a  dsrl        $a1, $a1, 13
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 13);
    // 0x270f04: 0x1695825  or          $t3, $t3, $t1
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x270f08: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x270f08u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x270f0c: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x270f0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x270f10: 0x30a50fc0  andi        $a1, $a1, 0xFC0
    ctx->pc = 0x270f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4032);
    // 0x270f14: 0x1ab6825  or          $t5, $t5, $t3
    ctx->pc = 0x270f14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x270f18: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x270f18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x270f1c: 0x1856025  or          $t4, $t4, $a1
    ctx->pc = 0x270f1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
    // 0x270f20: 0x1866026  xor         $t4, $t4, $a2
    ctx->pc = 0x270f20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 6));
    // 0x270f24: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x270f24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x270f28: 0x1a76826  xor         $t5, $t5, $a3
    ctx->pc = 0x270f28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 7));
    // 0x270f2c: 0xc5cba  dsrl        $t3, $t4, 18
    ctx->pc = 0x270f2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) >> 18);
    // 0x270f30: 0xc39ba  dsrl        $a3, $t4, 6
    ctx->pc = 0x270f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) >> 6);
    // 0x270f34: 0xd31ba  dsrl        $a2, $t5, 6
    ctx->pc = 0x270f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) >> 6);
    // 0x270f38: 0xd533a  dsrl        $t2, $t5, 12
    ctx->pc = 0x270f38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) >> 12);
    // 0x270f3c: 0xc4b3a  dsrl        $t1, $t4, 12
    ctx->pc = 0x270f3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) >> 12);
    // 0x270f40: 0xd44ba  dsrl        $t0, $t5, 18
    ctx->pc = 0x270f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) >> 18);
    // 0x270f44: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x270f44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x270f48: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x270f48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x270f4c: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x270f4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x270f50: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x270f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x270f54: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x270f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x270f58: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x270f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x270f5c: 0x31ad003f  andi        $t5, $t5, 0x3F
    ctx->pc = 0x270f5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)63);
    // 0x270f60: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x270f60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x270f64: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x270f64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x270f68: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x270f68u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x270f6c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x270f6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x270f70: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x270f70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x270f74: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x270f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x270f78: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x270f78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x270f7c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x270f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x270f80: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x270f80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x270f84: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x270f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x270f88: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x270f88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x270f8c: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x270f8cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x270f90: 0x25ef1bc8  addiu       $t7, $t7, 0x1BC8
    ctx->pc = 0x270f90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 7112));
    // 0x270f94: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x270f94u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x270f98: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x270f98u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x270f9c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x270f9cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x270fa0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x270fa0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x270fa4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x270fa4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x270fa8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x270fa8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x270fac: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x270facu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x270fb0: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x270fb4: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x270fb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x270fb8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x270fb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x270fbc: 0xdd6e0000  ld          $t6, 0x0($t3)
    ctx->pc = 0x270fbcu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x270fc0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x270fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x270fc4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x270fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x270fc8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x270fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x270fcc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x270fccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x270fd0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x270fd4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x270fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x270fd8: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x270fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x270fdc: 0xdd8b0600  ld          $t3, 0x600($t4)
    ctx->pc = 0x270fdcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 12), 1536)));
    // 0x270fe0: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x270fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x270fe4: 0x12f4821  addu        $t1, $t1, $t7
    ctx->pc = 0x270fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x270fe8: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x270fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x270fec: 0xdd450a00  ld          $a1, 0xA00($t2)
    ctx->pc = 0x270fecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 2560)));
    // 0x270ff0: 0x10f4021  addu        $t0, $t0, $t7
    ctx->pc = 0x270ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x270ff4: 0xdccc0c00  ld          $t4, 0xC00($a2)
    ctx->pc = 0x270ff4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x270ff8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x270ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x270ffc: 0xdcea0400  ld          $t2, 0x400($a3)
    ctx->pc = 0x270ffcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x271000: 0xddaf0e00  ld          $t7, 0xE00($t5)
    ctx->pc = 0x271000u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 3584)));
    // 0x271004: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x271004u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
label_271008:
    // 0x271008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27100c:
    // 0x27100c: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x27100cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x271010: 0xdd2d0200  ld          $t5, 0x200($t1)
    ctx->pc = 0x271010u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x271014: 0xdd0f0800  ld          $t7, 0x800($t0)
    ctx->pc = 0x271014u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x271018: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x271018u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x27101c: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x27101cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x271020: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x271020u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x271024: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x271024u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x271028: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x271028u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x27102c: 0x3e00008  jr          $ra
    ctx->pc = 0x27102Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27102Cu;
            // 0x271030: 0xfc8e0000  sd          $t6, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271034u;
    // 0x271034: 0x0  nop
    ctx->pc = 0x271034u;
    // NOP
    ctx->pc = 0x271038u;
}
