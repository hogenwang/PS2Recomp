#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D130
// Address: 0x20d130 - 0x20d320
void sub_0020D130_0x20d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D130_0x20d130");
#endif

    ctx->pc = 0x20d130u;

    // 0x20d130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d134: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20d138: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20d13c: 0x24663480  addiu       $a2, $v1, 0x3480
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13440));
    // 0x20d140: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20d144: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x20d144u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20d148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20d14c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x20d150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d154: 0xb683c  dsll32      $t5, $t3, 0
    ctx->pc = 0x20d154u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 0));
    // 0x20d158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d15c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20d15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d164: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20d168: 0x8c63a458  lw          $v1, -0x5BA8($v1)
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20d16c: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x20d16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x20d170: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20d174: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x20d178: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20d17c: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x20d17cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x20d180: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x20d180u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x20d184: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20d184u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20d188: 0x3c062007  lui         $a2, 0x2007
    ctx->pc = 0x20d188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8199 << 16));
    // 0x20d18c: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x20d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x20d190: 0x34c6d00d  ori         $a2, $a2, 0xD00D
    ctx->pc = 0x20d190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53261);
    // 0x20d194: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x20d194u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x20d198: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x20d198u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20d19c: 0xfc6d0018  sd          $t5, 0x18($v1)
    ctx->pc = 0x20d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 13));
    // 0x20d1a0: 0x3c065531  lui         $a2, 0x5531
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21809 << 16));
    // 0x20d1a4: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20d1a8: 0xcb5825  or          $t3, $a2, $t3
    ctx->pc = 0x20d1a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x20d1ac: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20d1b0: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x20d1b4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x20d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20d1b8: 0xfc6b0020  sd          $t3, 0x20($v1)
    ctx->pc = 0x20d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 11));
    // 0x20d1bc: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d1c0: 0xfc660028  sd          $a2, 0x28($v1)
    ctx->pc = 0x20d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 6));
    // 0x20d1c4: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20d1c8: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x20d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x20d1cc: 0x3c0640ab  lui         $a2, 0x40AB
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16555 << 16));
    // 0x20d1d0: 0xfc6d0038  sd          $t5, 0x38($v1)
    ctx->pc = 0x20d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 13));
    // 0x20d1d4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x20d1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x20d1d8: 0xfc6b0040  sd          $t3, 0x40($v1)
    ctx->pc = 0x20d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 11));
    // 0x20d1dc: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20d1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20d1e0: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x20d1e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20d1e4: 0xfc6c0048  sd          $t4, 0x48($v1)
    ctx->pc = 0x20d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 12));
    // 0x20d1e8: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x20d1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20d1ec: 0x86100  sll         $t4, $t0, 4
    ctx->pc = 0x20d1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x20d1f0: 0xcb5825  or          $t3, $a2, $t3
    ctx->pc = 0x20d1f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x20d1f4: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20d1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20d1f8: 0xfc6b0050  sd          $t3, 0x50($v1)
    ctx->pc = 0x20d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 11));
    // 0x20d1fc: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x20d200: 0xfc660058  sd          $a2, 0x58($v1)
    ctx->pc = 0x20d200u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 6));
    // 0x20d204: 0x75900  sll         $t3, $a3, 4
    ctx->pc = 0x20d204u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20d208: 0xac6b0060  sw          $t3, 0x60($v1)
    ctx->pc = 0x20d208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 11));
    // 0x20d20c: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x20d20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x20d210: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x20d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x20d214: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x20d214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x20d218: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20d21c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d220: 0x24896c00  addiu       $t1, $a0, 0x6C00
    ctx->pc = 0x20d220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x20d224: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x20d224u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20d228: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20d22c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20d230: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x20d234: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20d238: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20d23c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d240: 0x25077200  addiu       $a3, $t0, 0x7200
    ctx->pc = 0x20d240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 29184));
    // 0x20d244: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20d244u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20d248: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20d24c: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20d250: 0x8d0ba458  lw          $t3, -0x5BA8($t0)
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x20d254: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20d258: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20d25c: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20d260: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x20d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
    // 0x20d264: 0xad6c0064  sw          $t4, 0x64($t3)
    ctx->pc = 0x20d264u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 12));
    // 0x20d268: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20d268u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20d26c: 0x8d4aa458  lw          $t2, -0x5BA8($t2)
    ctx->pc = 0x20d26cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20d270: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20d270u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20d274: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20d278: 0xad400068  sw          $zero, 0x68($t2)
    ctx->pc = 0x20d278u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 0));
    // 0x20d27c: 0x8d15a458  lw          $s5, -0x5BA8($t0)
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x20d280: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20d284: 0xaea0006c  sw          $zero, 0x6C($s5)
    ctx->pc = 0x20d284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 0));
    // 0x20d288: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20d288u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20d28c: 0x8e94a458  lw          $s4, -0x5BA8($s4)
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943832)));
    // 0x20d290: 0xae890070  sw          $t1, 0x70($s4)
    ctx->pc = 0x20d290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 9));
    // 0x20d294: 0x8e69a458  lw          $t1, -0x5BA8($s3)
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943832)));
    // 0x20d298: 0xad270074  sw          $a3, 0x74($t1)
    ctx->pc = 0x20d298u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 7));
    // 0x20d29c: 0x8e47a458  lw          $a3, -0x5BA8($s2)
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943832)));
    // 0x20d2a0: 0xace00078  sw          $zero, 0x78($a3)
    ctx->pc = 0x20d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 0));
    // 0x20d2a4: 0x8e27a458  lw          $a3, -0x5BA8($s1)
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943832)));
    // 0x20d2a8: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x20d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x20d2ac: 0x8e07a458  lw          $a3, -0x5BA8($s0)
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943832)));
    // 0x20d2b0: 0xace60080  sw          $a2, 0x80($a3)
    ctx->pc = 0x20d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 6));
    // 0x20d2b4: 0x8f26a458  lw          $a2, -0x5BA8($t9)
    ctx->pc = 0x20d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943832)));
    // 0x20d2b8: 0xacc50084  sw          $a1, 0x84($a2)
    ctx->pc = 0x20d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
    // 0x20d2bc: 0x8f05a458  lw          $a1, -0x5BA8($t8)
    ctx->pc = 0x20d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943832)));
    // 0x20d2c0: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x20d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x20d2c4: 0x8de5a458  lw          $a1, -0x5BA8($t7)
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943832)));
    // 0x20d2c8: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x20d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x20d2cc: 0x8dc5a458  lw          $a1, -0x5BA8($t6)
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943832)));
    // 0x20d2d0: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x20d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x20d2d4: 0x8da4a458  lw          $a0, -0x5BA8($t5)
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943832)));
    // 0x20d2d8: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x20d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x20d2dc: 0x8d83a458  lw          $v1, -0x5BA8($t4)
    ctx->pc = 0x20d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943832)));
    // 0x20d2e0: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x20d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x20d2e4: 0x8d63a458  lw          $v1, -0x5BA8($t3)
    ctx->pc = 0x20d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943832)));
    // 0x20d2e8: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x20d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x20d2ec: 0x8d43a458  lw          $v1, -0x5BA8($t2)
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20d2f0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x20d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x20d2f4: 0xad03a458  sw          $v1, -0x5BA8($t0)
    ctx->pc = 0x20d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943832), GPR_U32(ctx, 3));
    // 0x20d2f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20d2f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d2fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20d2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20d300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d310: 0x3e00008  jr          $ra
    ctx->pc = 0x20D310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D310u;
            // 0x20d314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D318u;
    // 0x20d318: 0x0  nop
    ctx->pc = 0x20d318u;
    // NOP
    // 0x20d31c: 0x0  nop
    ctx->pc = 0x20d31cu;
    // NOP
    ctx->pc = 0x20d320u;
}
