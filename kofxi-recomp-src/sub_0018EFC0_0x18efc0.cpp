#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018EFC0
// Address: 0x18efc0 - 0x18f1f0
void sub_0018EFC0_0x18efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EFC0_0x18efc0");
#endif

    switch (ctx->pc) {
        case 0x18f0f4u: goto label_18f0f4;
        case 0x18f118u: goto label_18f118;
        case 0x18f150u: goto label_18f150;
        case 0x18f164u: goto label_18f164;
        default: break;
    }

    ctx->pc = 0x18efc0u;

    // 0x18efc0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x18efc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18efc8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18efcc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18efccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18efd0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18efd4: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18efd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18efdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18efe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18efe4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x18efe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efe8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18efec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18eff0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18eff4: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x18eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x18eff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18effc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18effcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f004: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18f004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x18f008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f00c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18f00cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f014: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18f014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18f018: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x18f018u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f01c: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x18f020: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x18f020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x18f024: 0x2508bdbe  addiu       $t0, $t0, -0x4242
    ctx->pc = 0x18f024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950334));
    // 0x18f028: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18f02c: 0x24e7bdc2  addiu       $a3, $a3, -0x423E
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950338));
    // 0x18f030: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18f034: 0x24c6bd60  addiu       $a2, $a2, -0x42A0
    ctx->pc = 0x18f034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950240));
    // 0x18f038: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x18f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18f03c: 0x24a5bdbc  addiu       $a1, $a1, -0x4244
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950332));
    // 0x18f040: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18f044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f048: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18f04c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18f050: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f054: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x18f054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18f058: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x18f058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x18f05c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x18f05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18f060: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x18f060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18f064: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18f064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18f068: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18f06c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x18f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x18f070: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x18f070u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18f074: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x18f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18f078: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x18f078u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f07c: 0x44102  srl         $t0, $a0, 4
    ctx->pc = 0x18f07cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x18f080: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18f084: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x18f084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x18f088: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x18f088u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18f08c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18f090: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x18f090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18f094: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x18f094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f098: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18f09c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x18f0a0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x18f0a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f0a4: 0x18800040  blez        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x18F0A4u;
    {
        const bool branch_taken_0x18f0a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0A4u;
            // 0x18f0a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0a4) {
            ctx->pc = 0x18F1A8u;
            goto label_18f1a8;
        }
    }
    ctx->pc = 0x18F0ACu;
    // 0x18f0ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f0b0: 0x2484bd50  addiu       $a0, $a0, -0x42B0
    ctx->pc = 0x18f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950224));
    // 0x18f0b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f0b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x18f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x18f0bc: 0x2476006e  addiu       $s6, $v1, 0x6E
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x18f0c0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x18f0c4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x18f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x18f0c8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x18f0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18f0cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18f0d0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x18f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x18f0d4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x18f0d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18f0d8: 0x247e000c  addiu       $fp, $v1, 0xC
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x18f0dc: 0x24630072  addiu       $v1, $v1, 0x72
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 114));
    // 0x18f0e0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x18f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x18f0e4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x18f0e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18f0e8: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x18f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x18f0ec: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x18f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x18f0f0: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x18f0f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_18f0f4:
    // 0x18f0f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18f0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0f8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x18f0f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18f0fc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18f100: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x18f100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18f104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f108: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18f108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18f10c: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x18F10Cu;
    {
        const bool branch_taken_0x18f10c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F10Cu;
            // 0x18f110: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f10c) {
            ctx->pc = 0x18F190u;
            goto label_18f190;
        }
    }
    ctx->pc = 0x18F114u;
    // 0x18f114: 0x0  nop
    ctx->pc = 0x18f114u;
    // NOP
label_18f118:
    // 0x18f118: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18f11c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x18f11cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f120: 0x2651818  mult        $v1, $s3, $a1
    ctx->pc = 0x18f120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18f124: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18f128: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x18f128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18f12c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x18F12Cu;
    {
        const bool branch_taken_0x18f12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f12c) {
            ctx->pc = 0x18F190u;
            goto label_18f190;
        }
    }
    ctx->pc = 0x18F134u;
    // 0x18f134: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x18f134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18f138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f13c: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x18f13cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18f140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f144: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f148: 0xc067cd4  jal         func_19F350
    ctx->pc = 0x18F148u;
    SET_GPR_U32(ctx, 31, 0x18F150u);
    ctx->pc = 0x18F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F148u;
            // 0x18f14c: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F350u;
    if (runtime->hasFunction(0x19F350u)) {
        auto targetFn = runtime->lookupFunction(0x19F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F150u; }
        if (ctx->pc != 0x18F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F350_0x19f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F150u; }
        if (ctx->pc != 0x18F150u) { return; }
    }
    ctx->pc = 0x18F150u;
label_18f150:
    // 0x18f150: 0x2f13021  addu        $a2, $s7, $s1
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x18f154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f158: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18f158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f15c: 0xc067cd8  jal         func_19F360
    ctx->pc = 0x18F15Cu;
    SET_GPR_U32(ctx, 31, 0x18F164u);
    ctx->pc = 0x18F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F15Cu;
            // 0x18f160: 0x3c074080  lui         $a3, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F360u;
    if (runtime->hasFunction(0x19F360u)) {
        auto targetFn = runtime->lookupFunction(0x19F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F164u; }
        if (ctx->pc != 0x18F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F360_0x19f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F164u; }
        if (ctx->pc != 0x18F164u) { return; }
    }
    ctx->pc = 0x18F164u;
label_18f164:
    // 0x18f164: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18f168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18f16c: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x18f16cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18f170: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x18f174: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x18f174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x18f178: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18f178u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f17c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18f180: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x18f180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18f184: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x18F184u;
    {
        const bool branch_taken_0x18f184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F184u;
            // 0x18f188: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f184) {
            ctx->pc = 0x18F118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f118;
        }
    }
    ctx->pc = 0x18F18Cu;
    // 0x18f18c: 0x0  nop
    ctx->pc = 0x18f18cu;
    // NOP
label_18f190:
    // 0x18f190: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18f194: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18f198: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18f198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f19c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x18f19cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18f1a0: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x18F1A0u;
    {
        const bool branch_taken_0x18f1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f1a0) {
            ctx->pc = 0x18F1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1A0u;
            // 0x18f1a4: 0x96c50000  lhu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F0F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f0f4;
        }
    }
    ctx->pc = 0x18F1A8u;
label_18f1a8:
    // 0x18f1a8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18f1ac: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x18f1acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1b0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x18f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x18f1b4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x18f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18f1b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18f1bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18f1bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18f1c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18f1c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f1c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18f1c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f1c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f1cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f1d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1E0u;
            // 0x18f1e4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F1E8u;
    // 0x18f1e8: 0x0  nop
    ctx->pc = 0x18f1e8u;
    // NOP
    // 0x18f1ec: 0x0  nop
    ctx->pc = 0x18f1ecu;
    // NOP
    ctx->pc = 0x18f1f0u;
}
