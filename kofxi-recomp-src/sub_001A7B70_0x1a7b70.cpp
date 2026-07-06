#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7B70
// Address: 0x1a7b70 - 0x1a7d60
void sub_001A7B70_0x1a7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7B70_0x1a7b70");
#endif

    switch (ctx->pc) {
        case 0x1a7c74u: goto label_1a7c74;
        case 0x1a7c98u: goto label_1a7c98;
        default: break;
    }

    ctx->pc = 0x1a7b70u;

    // 0x1a7b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7b74: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7b7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7b84: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1a7b84u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b88: 0x7c60fcc0  sq          $zero, -0x340($v1)
    ctx->pc = 0x1a7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294966464), GPR_VEC(ctx, 0));
    // 0x1a7b8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a7b94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1a7b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b98: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a7b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7b9c: 0x3466034e  ori         $a2, $v1, 0x34E
    ctx->pc = 0x1a7b9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)846);
    // 0x1a7ba0: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ba4: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1a7ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a7ba8: 0xac66fcc0  sw          $a2, -0x340($v1)
    ctx->pc = 0x1a7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966464), GPR_U32(ctx, 6));
    // 0x1a7bac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a7bb0: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7bb4: 0x240e7200  addiu       $t6, $zero, 0x7200
    ctx->pc = 0x1a7bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
    // 0x1a7bb8: 0xfc65fcd0  sd          $a1, -0x330($v1)
    ctx->pc = 0x1a7bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966480), GPR_U64(ctx, 5));
    // 0x1a7bbc: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7bc0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1a7bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a7bc4: 0xfc64fcd8  sd          $a0, -0x328($v1)
    ctx->pc = 0x1a7bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966488), GPR_U64(ctx, 4));
    // 0x1a7bc8: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7bcc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1a7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1a7bd0: 0xfc60fce0  sd          $zero, -0x320($v1)
    ctx->pc = 0x1a7bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966496), GPR_U64(ctx, 0));
    // 0x1a7bd4: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7bd8: 0xfc65fce8  sd          $a1, -0x318($v1)
    ctx->pc = 0x1a7bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966504), GPR_U64(ctx, 5));
    // 0x1a7bdc: 0x34830006  ori         $v1, $a0, 0x6
    ctx->pc = 0x1a7bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x1a7be0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a7be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7be4: 0x3c036802  lui         $v1, 0x6802
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26626 << 16));
    // 0x1a7be8: 0x3464a300  ori         $a0, $v1, 0xA300
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41728);
    // 0x1a7bec: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1a7becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a7bf0: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7bf4: 0xfc65fcf0  sd          $a1, -0x310($v1)
    ctx->pc = 0x1a7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966512), GPR_U64(ctx, 5));
    // 0x1a7bf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1a7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a7bfc: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c00: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1a7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a7c04: 0xfc64fcf8  sd          $a0, -0x308($v1)
    ctx->pc = 0x1a7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966520), GPR_U64(ctx, 4));
    // 0x1a7c08: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c0c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a7c10: 0xfc65fd00  sd          $a1, -0x300($v1)
    ctx->pc = 0x1a7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966528), GPR_U64(ctx, 5));
    // 0x1a7c14: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a7c1c: 0xfc64fd08  sd          $a0, -0x2F8($v1)
    ctx->pc = 0x1a7c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966536), GPR_U64(ctx, 4));
    // 0x1a7c20: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c24: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a7c28: 0xfc65fd10  sd          $a1, -0x2F0($v1)
    ctx->pc = 0x1a7c28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966544), GPR_U64(ctx, 5));
    // 0x1a7c2c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c30: 0xfc64fd18  sd          $a0, -0x2E8($v1)
    ctx->pc = 0x1a7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966552), GPR_U64(ctx, 4));
    // 0x1a7c34: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x1a7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x1a7c38: 0x3404808c  ori         $a0, $zero, 0x808C
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32908);
    // 0x1a7c3c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1a7c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1a7c40: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a7c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7c44: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1a7c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a7c48: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c4c: 0xfc65fd20  sd          $a1, -0x2E0($v1)
    ctx->pc = 0x1a7c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294966560), GPR_U64(ctx, 5));
    // 0x1a7c50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1a7c54: 0x34853513  ori         $a1, $a0, 0x3513
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13587);
    // 0x1a7c58: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c5c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7c60: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x1a7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
    // 0x1a7c64: 0xfc85fd28  sd          $a1, -0x2D8($a0)
    ctx->pc = 0x1a7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294966568), GPR_U64(ctx, 5));
    // 0x1a7c68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7c6c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a7c70: 0x240b6c00  addiu       $t3, $zero, 0x6C00
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
label_1a7c74:
    // 0x1a7c74: 0x27040020  addiu       $a0, $t8, 0x20
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x1a7c78: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1a7c78u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c7c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a7c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a7c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c84: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a7c84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c88: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x1a7c88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c8c: 0x248afff8  addiu       $t2, $a0, -0x8
    ctx->pc = 0x1a7c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a7c90: 0x24897200  addiu       $t1, $a0, 0x7200
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x1a7c94: 0x0  nop
    ctx->pc = 0x1a7c94u;
    // NOP
label_1a7c98:
    // 0x1a7c98: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x1a7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x1a7c9c: 0xac6f0004  sw          $t7, 0x4($v1)
    ctx->pc = 0x1a7c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 15));
    // 0x1a7ca0: 0x27390040  addiu       $t9, $t9, 0x40
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
    // 0x1a7ca4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a7ca8: 0x192100  sll         $a0, $t9, 4
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x1a7cac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a7cb0: 0x2486fff8  addiu       $a2, $a0, -0x8
    ctx->pc = 0x1a7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a7cb4: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x1a7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x1a7cb8: 0x24856c00  addiu       $a1, $a0, 0x6C00
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x1a7cbc: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x1a7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x1a7cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a7cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a7cc4: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x1a7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
    // 0x1a7cc8: 0x2a24000a  slti        $a0, $s1, 0xA
    ctx->pc = 0x1a7cc8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a7ccc: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x1a7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
    // 0x1a7cd0: 0x25ad0400  addiu       $t5, $t5, 0x400
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1024));
    // 0x1a7cd4: 0xac6c0020  sw          $t4, 0x20($v1)
    ctx->pc = 0x1a7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 12));
    // 0x1a7cd8: 0xac6e0024  sw          $t6, 0x24($v1)
    ctx->pc = 0x1a7cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 14));
    // 0x1a7cdc: 0x258c0400  addiu       $t4, $t4, 0x400
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
    // 0x1a7ce0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1a7ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1a7ce4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1a7ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1a7ce8: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1a7ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1a7cec: 0xac6a0034  sw          $t2, 0x34($v1)
    ctx->pc = 0x1a7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 10));
    // 0x1a7cf0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a7cf4: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1a7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1a7cf8: 0xac680040  sw          $t0, 0x40($v1)
    ctx->pc = 0x1a7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 8));
    // 0x1a7cfc: 0xac680044  sw          $t0, 0x44($v1)
    ctx->pc = 0x1a7cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 8));
    // 0x1a7d00: 0xac680048  sw          $t0, 0x48($v1)
    ctx->pc = 0x1a7d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 8));
    // 0x1a7d04: 0xac67004c  sw          $a3, 0x4C($v1)
    ctx->pc = 0x1a7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 7));
    // 0x1a7d08: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x1a7d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
    // 0x1a7d0c: 0xac690054  sw          $t1, 0x54($v1)
    ctx->pc = 0x1a7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 9));
    // 0x1a7d10: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1a7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x1a7d14: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x1a7d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x1a7d18: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1A7D18u;
    {
        const bool branch_taken_0x1a7d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D18u;
            // 0x1a7d1c: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d18) {
            ctx->pc = 0x1A7C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7c98;
        }
    }
    ctx->pc = 0x1A7D20u;
    // 0x1a7d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a7d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a7d24: 0x25ef0200  addiu       $t7, $t7, 0x200
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
    // 0x1a7d28: 0x2a04000e  slti        $a0, $s0, 0xE
    ctx->pc = 0x1a7d28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1a7d2c: 0x25ce0200  addiu       $t6, $t6, 0x200
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 512));
    // 0x1a7d30: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1A7D30u;
    {
        const bool branch_taken_0x1a7d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D30u;
            // 0x1a7d34: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d30) {
            ctx->pc = 0x1A7C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7c74;
        }
    }
    ctx->pc = 0x1A7D38u;
    // 0x1a7d38: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7d3c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1a7d40: 0x7c6031b0  sq          $zero, 0x31B0($v1)
    ctx->pc = 0x1a7d40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 12720), GPR_VEC(ctx, 0));
    // 0x1a7d44: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7d48: 0xac6431b0  sw          $a0, 0x31B0($v1)
    ctx->pc = 0x1a7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12720), GPR_U32(ctx, 4));
    // 0x1a7d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D54u;
            // 0x1a7d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7D5Cu;
    // 0x1a7d5c: 0x0  nop
    ctx->pc = 0x1a7d5cu;
    // NOP
    ctx->pc = 0x1a7d60u;
}
