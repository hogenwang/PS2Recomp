#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00311C00
// Address: 0x311c00 - 0x311e90
void sub_00311C00_0x311c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311C00_0x311c00");
#endif

    ctx->pc = 0x311c00u;

    // 0x311c00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x311c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x311c04: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x311c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x311c08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x311c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x311c0c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x311c10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x311c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x311c14: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x311c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x311c18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x311c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x311c1c: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x311c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x311c20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x311c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x311c24: 0x24c63480  addiu       $a2, $a2, 0x3480
    ctx->pc = 0x311c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13440));
    // 0x311c28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x311c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x311c2c: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x311c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x311c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x311c34: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x311c34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x311c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x311c3c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x311c44: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x311c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x311c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x311c4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x311c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x311c50: 0x8c63d950  lw          $v1, -0x26B0($v1)
    ctx->pc = 0x311c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x311c54: 0xc94825  or          $t1, $a2, $t1
    ctx->pc = 0x311c54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x311c58: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x311c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x311c5c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x311c5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x311c60: 0x3c1701d5  lui         $s7, 0x1D5
    ctx->pc = 0x311c60u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)469 << 16));
    // 0x311c64: 0x3c1501d5  lui         $s5, 0x1D5
    ctx->pc = 0x311c64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)469 << 16));
    // 0x311c68: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x311c68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x311c6c: 0x3c1401d5  lui         $s4, 0x1D5
    ctx->pc = 0x311c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)469 << 16));
    // 0x311c70: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x311c70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x311c74: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x311c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x311c78: 0x3c062007  lui         $a2, 0x2007
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8199 << 16));
    // 0x311c7c: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x311c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x311c80: 0x34c6100e  ori         $a2, $a2, 0x100E
    ctx->pc = 0x311c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4110);
    // 0x311c84: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x311c84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x311c88: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x311c88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x311c8c: 0x3c092141  lui         $t1, 0x2141
    ctx->pc = 0x311c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8513 << 16));
    // 0x311c90: 0x12a5025  or          $t2, $t1, $t2
    ctx->pc = 0x311c90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x311c94: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x311c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x311c98: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x311c98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x311c9c: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x311c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x311ca0: 0xfc6a0020  sd          $t2, 0x20($v1)
    ctx->pc = 0x311ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 10));
    // 0x311ca4: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x311ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x311ca8: 0xfc660028  sd          $a2, 0x28($v1)
    ctx->pc = 0x311ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 6));
    // 0x311cac: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x311cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311cb0: 0x3c0660ab  lui         $a2, 0x60AB
    ctx->pc = 0x311cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24747 << 16));
    // 0x311cb4: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x311cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x311cb8: 0xfc690038  sd          $t1, 0x38($v1)
    ctx->pc = 0x311cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 9));
    // 0x311cbc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x311cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x311cc0: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x311cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x311cc4: 0xfc6b0040  sd          $t3, 0x40($v1)
    ctx->pc = 0x311cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 11));
    // 0x311cc8: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x311cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x311ccc: 0x45900  sll         $t3, $a0, 4
    ctx->pc = 0x311cccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x311cd0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x311cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x311cd4: 0xfc6a0048  sd          $t2, 0x48($v1)
    ctx->pc = 0x311cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 10));
    // 0x311cd8: 0xfc660050  sd          $a2, 0x50($v1)
    ctx->pc = 0x311cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 6));
    // 0x311cdc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x311cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x311ce0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x311ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x311ce4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x311ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x311ce8: 0x34c63413  ori         $a2, $a2, 0x3413
    ctx->pc = 0x311ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13331);
    // 0x311cec: 0x74900  sll         $t1, $a3, 4
    ctx->pc = 0x311cecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x311cf0: 0xfc660058  sd          $a2, 0x58($v1)
    ctx->pc = 0x311cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 6));
    // 0x311cf4: 0x257e6c00  addiu       $fp, $t3, 0x6C00
    ctx->pc = 0x311cf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x311cf8: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x311cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x311cfc: 0xac690060  sw          $t1, 0x60($v1)
    ctx->pc = 0x311cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 9));
    // 0x311d00: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x311d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x311d04: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x311d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x311d08: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x311d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x311d0c: 0x3c0601d5  lui         $a2, 0x1D5
    ctx->pc = 0x311d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)469 << 16));
    // 0x311d10: 0x25030018  addiu       $v1, $t0, 0x18
    ctx->pc = 0x311d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x311d14: 0x3c0a01d5  lui         $t2, 0x1D5
    ctx->pc = 0x311d14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)469 << 16));
    // 0x311d18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x311d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311d1c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x311d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x311d20: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x311d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x311d24: 0x3c1301d5  lui         $s3, 0x1D5
    ctx->pc = 0x311d24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)469 << 16));
    // 0x311d28: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311d2c: 0x3c1201d5  lui         $s2, 0x1D5
    ctx->pc = 0x311d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)469 << 16));
    // 0x311d30: 0x8c68d950  lw          $t0, -0x26B0($v1)
    ctx->pc = 0x311d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x311d34: 0x3c1101d5  lui         $s1, 0x1D5
    ctx->pc = 0x311d34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)469 << 16));
    // 0x311d38: 0x3c1001d5  lui         $s0, 0x1D5
    ctx->pc = 0x311d38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)469 << 16));
    // 0x311d3c: 0x3c1901d5  lui         $t9, 0x1D5
    ctx->pc = 0x311d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)469 << 16));
    // 0x311d40: 0x3c1801d5  lui         $t8, 0x1D5
    ctx->pc = 0x311d40u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)469 << 16));
    // 0x311d44: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x311d44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x311d48: 0xad090064  sw          $t1, 0x64($t0)
    ctx->pc = 0x311d48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 9));
    // 0x311d4c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311d50: 0x8c6cd950  lw          $t4, -0x26B0($v1)
    ctx->pc = 0x311d50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x311d54: 0x3c0901d5  lui         $t1, 0x1D5
    ctx->pc = 0x311d54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)469 << 16));
    // 0x311d58: 0x3c0801d5  lui         $t0, 0x1D5
    ctx->pc = 0x311d58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)469 << 16));
    // 0x311d5c: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x311d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x311d60: 0x3c0d01d5  lui         $t5, 0x1D5
    ctx->pc = 0x311d60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)469 << 16));
    // 0x311d64: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x311d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x311d68: 0xad800068  sw          $zero, 0x68($t4)
    ctx->pc = 0x311d68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 104), GPR_U32(ctx, 0));
    // 0x311d6c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311d70: 0x8ccbd950  lw          $t3, -0x26B0($a2)
    ctx->pc = 0x311d70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294957392)));
    // 0x311d74: 0x3c0c01d5  lui         $t4, 0x1D5
    ctx->pc = 0x311d74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)469 << 16));
    // 0x311d78: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x311d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x311d7c: 0xad60006c  sw          $zero, 0x6C($t3)
    ctx->pc = 0x311d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 108), GPR_U32(ctx, 0));
    // 0x311d80: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x311d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x311d84: 0x8d4ad950  lw          $t2, -0x26B0($t2)
    ctx->pc = 0x311d84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294957392)));
    // 0x311d88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x311d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x311d8c: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x311d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x311d90: 0x24b67200  addiu       $s6, $a1, 0x7200
    ctx->pc = 0x311d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 29184));
    // 0x311d94: 0x3c0b01d5  lui         $t3, 0x1D5
    ctx->pc = 0x311d94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)469 << 16));
    // 0x311d98: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x311d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x311d9c: 0xad450070  sw          $a1, 0x70($t2)
    ctx->pc = 0x311d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 5));
    // 0x311da0: 0x8d25d950  lw          $a1, -0x26B0($t1)
    ctx->pc = 0x311da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294957392)));
    // 0x311da4: 0x3c0a01d5  lui         $t2, 0x1D5
    ctx->pc = 0x311da4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)469 << 16));
    // 0x311da8: 0xaca70074  sw          $a3, 0x74($a1)
    ctx->pc = 0x311da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 7));
    // 0x311dac: 0x3c0901d5  lui         $t1, 0x1D5
    ctx->pc = 0x311dacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)469 << 16));
    // 0x311db0: 0x8d05d950  lw          $a1, -0x26B0($t0)
    ctx->pc = 0x311db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294957392)));
    // 0x311db4: 0xaca70078  sw          $a3, 0x78($a1)
    ctx->pc = 0x311db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 7));
    // 0x311db8: 0x3c0801d5  lui         $t0, 0x1D5
    ctx->pc = 0x311db8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)469 << 16));
    // 0x311dbc: 0x8c63d950  lw          $v1, -0x26B0($v1)
    ctx->pc = 0x311dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x311dc0: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x311dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x311dc4: 0xac67007c  sw          $a3, 0x7C($v1)
    ctx->pc = 0x311dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 7));
    // 0x311dc8: 0x8ee3d950  lw          $v1, -0x26B0($s7)
    ctx->pc = 0x311dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294957392)));
    // 0x311dcc: 0xac7e0080  sw          $fp, 0x80($v1)
    ctx->pc = 0x311dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 30));
    // 0x311dd0: 0x8ea3d950  lw          $v1, -0x26B0($s5)
    ctx->pc = 0x311dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294957392)));
    // 0x311dd4: 0xac660084  sw          $a2, 0x84($v1)
    ctx->pc = 0x311dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 6));
    // 0x311dd8: 0x8e83d950  lw          $v1, -0x26B0($s4)
    ctx->pc = 0x311dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294957392)));
    // 0x311ddc: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x311ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x311de0: 0x8e63d950  lw          $v1, -0x26B0($s3)
    ctx->pc = 0x311de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294957392)));
    // 0x311de4: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x311de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x311de8: 0x8e46d950  lw          $a2, -0x26B0($s2)
    ctx->pc = 0x311de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294957392)));
    // 0x311dec: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x311decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x311df0: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x311df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
    // 0x311df4: 0x8e26d950  lw          $a2, -0x26B0($s1)
    ctx->pc = 0x311df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957392)));
    // 0x311df8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x311df8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x311dfc: 0xacc30094  sw          $v1, 0x94($a2)
    ctx->pc = 0x311dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 3));
    // 0x311e00: 0x8e03d950  lw          $v1, -0x26B0($s0)
    ctx->pc = 0x311e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294957392)));
    // 0x311e04: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x311e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x311e08: 0x8f23d950  lw          $v1, -0x26B0($t9)
    ctx->pc = 0x311e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294957392)));
    // 0x311e0c: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x311e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x311e10: 0x8f06d950  lw          $a2, -0x26B0($t8)
    ctx->pc = 0x311e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294957392)));
    // 0x311e14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x311e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x311e18: 0xacc300a0  sw          $v1, 0xA0($a2)
    ctx->pc = 0x311e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 3));
    // 0x311e1c: 0x8de3d950  lw          $v1, -0x26B0($t7)
    ctx->pc = 0x311e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294957392)));
    // 0x311e20: 0xac6700a4  sw          $a3, 0xA4($v1)
    ctx->pc = 0x311e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 7));
    // 0x311e24: 0x8dc3d950  lw          $v1, -0x26B0($t6)
    ctx->pc = 0x311e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294957392)));
    // 0x311e28: 0xac6700a8  sw          $a3, 0xA8($v1)
    ctx->pc = 0x311e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 7));
    // 0x311e2c: 0x8da3d950  lw          $v1, -0x26B0($t5)
    ctx->pc = 0x311e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294957392)));
    // 0x311e30: 0xac6700ac  sw          $a3, 0xAC($v1)
    ctx->pc = 0x311e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 7));
    // 0x311e34: 0x8d83d950  lw          $v1, -0x26B0($t4)
    ctx->pc = 0x311e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294957392)));
    // 0x311e38: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x311e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x311e3c: 0x8d63d950  lw          $v1, -0x26B0($t3)
    ctx->pc = 0x311e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294957392)));
    // 0x311e40: 0xac7600b4  sw          $s6, 0xB4($v1)
    ctx->pc = 0x311e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 22));
    // 0x311e44: 0x8d43d950  lw          $v1, -0x26B0($t2)
    ctx->pc = 0x311e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294957392)));
    // 0x311e48: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x311e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x311e4c: 0x8d23d950  lw          $v1, -0x26B0($t1)
    ctx->pc = 0x311e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294957392)));
    // 0x311e50: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x311e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x311e54: 0x8d03d950  lw          $v1, -0x26B0($t0)
    ctx->pc = 0x311e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294957392)));
    // 0x311e58: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x311e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x311e5c: 0xaca3d950  sw          $v1, -0x26B0($a1)
    ctx->pc = 0x311e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294957392), GPR_U32(ctx, 3));
    // 0x311e60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x311e60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311e64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x311e64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311e68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x311e68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311e6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x311e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x311e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311e84: 0x3e00008  jr          $ra
    ctx->pc = 0x311E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311E84u;
            // 0x311e88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311E8Cu;
    // 0x311e8c: 0x0  nop
    ctx->pc = 0x311e8cu;
    // NOP
    ctx->pc = 0x311e90u;
}
