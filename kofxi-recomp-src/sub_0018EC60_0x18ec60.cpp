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

// Function: sub_0018EC60
// Address: 0x18ec60 - 0x18efc0
void sub_0018EC60_0x18ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EC60_0x18ec60");
#endif

    switch (ctx->pc) {
        case 0x18ed98u: goto label_18ed98;
        default: break;
    }

    ctx->pc = 0x18ec60u;

    // 0x18ec60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x18ec64: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x18ec64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18ec68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18ec6c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18ec70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18ec74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18ec78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ec7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ec80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ec84: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18ec88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ec8c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18ec90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ec94: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18ec98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ec9c: 0x24a5bd58  addiu       $a1, $a1, -0x42A8
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950232));
    // 0x18eca0: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18eca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18eca8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ecac: 0x2484bdc8  addiu       $a0, $a0, -0x4238
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950344));
    // 0x18ecb0: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18ecb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ecb8: 0x24070500  addiu       $a3, $zero, 0x500
    ctx->pc = 0x18ecb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x18ecbc: 0x2463bd64  addiu       $v1, $v1, -0x429C
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950244));
    // 0x18ecc0: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x18ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18ecc4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x18ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x18ecc8: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18eccc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ecd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18ecd4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x18ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x18ecd8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x18ecd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ecdc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x18ecdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ece0: 0x132000ab  beqz        $t9, . + 4 + (0xAB << 2)
    ctx->pc = 0x18ECE0u;
    {
        const bool branch_taken_0x18ece0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECE0u;
        // 0x18ece4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ece0) {
            ctx->pc = 0x18EF90u;
            goto label_18ef90;
        }
    }
    ctx->pc = 0x18ECE8u;
    // 0x18ece8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ecec: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x18ececu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecf0: 0x2463bd50  addiu       $v1, $v1, -0x42B0
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x18ecf4: 0x68c021  addu        $t8, $v1, $t0
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18ecf8: 0x27030072  addiu       $v1, $t8, 0x72
    ctx->pc = 0x18ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 114));
    // 0x18ecfc: 0x270f0024  addiu       $t7, $t8, 0x24
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 36));
    // 0x18ed00: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x18ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x18ed04: 0x270e0020  addiu       $t6, $t8, 0x20
    ctx->pc = 0x18ed04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x18ed08: 0x2703000c  addiu       $v1, $t8, 0xC
    ctx->pc = 0x18ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x18ed0c: 0x270d0040  addiu       $t5, $t8, 0x40
    ctx->pc = 0x18ed0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x18ed10: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x18ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x18ed14: 0x270c0044  addiu       $t4, $t8, 0x44
    ctx->pc = 0x18ed14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 68));
    // 0x18ed18: 0x27030010  addiu       $v1, $t8, 0x10
    ctx->pc = 0x18ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x18ed1c: 0x270b0028  addiu       $t3, $t8, 0x28
    ctx->pc = 0x18ed1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 40));
    // 0x18ed20: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x18ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x18ed24: 0x270a002c  addiu       $t2, $t8, 0x2C
    ctx->pc = 0x18ed24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 44));
    // 0x18ed28: 0x27030074  addiu       $v1, $t8, 0x74
    ctx->pc = 0x18ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 116));
    // 0x18ed2c: 0x27090030  addiu       $t1, $t8, 0x30
    ctx->pc = 0x18ed2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
    // 0x18ed30: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x18ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x18ed34: 0x27080034  addiu       $t0, $t8, 0x34
    ctx->pc = 0x18ed34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 52));
    // 0x18ed38: 0x27030050  addiu       $v1, $t8, 0x50
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
    // 0x18ed3c: 0x27070038  addiu       $a3, $t8, 0x38
    ctx->pc = 0x18ed3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 56));
    // 0x18ed40: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x18ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x18ed44: 0x2706003c  addiu       $a2, $t8, 0x3C
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 60));
    // 0x18ed48: 0x27030048  addiu       $v1, $t8, 0x48
    ctx->pc = 0x18ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x18ed4c: 0x27050018  addiu       $a1, $t8, 0x18
    ctx->pc = 0x18ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 24));
    // 0x18ed50: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x18ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x18ed54: 0x2717001c  addiu       $s7, $t8, 0x1C
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), 28));
    // 0x18ed58: 0x27030054  addiu       $v1, $t8, 0x54
    ctx->pc = 0x18ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 84));
    // 0x18ed5c: 0x2712006c  addiu       $s2, $t8, 0x6C
    ctx->pc = 0x18ed5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 108));
    // 0x18ed60: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x18ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x18ed64: 0x2711006e  addiu       $s1, $t8, 0x6E
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), 110));
    // 0x18ed68: 0x2703004c  addiu       $v1, $t8, 0x4C
    ctx->pc = 0x18ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 76));
    // 0x18ed6c: 0x271e0070  addiu       $fp, $t8, 0x70
    ctx->pc = 0x18ed6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 24), 112));
    // 0x18ed70: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x18ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x18ed74: 0x27040004  addiu       $a0, $t8, 0x4
    ctx->pc = 0x18ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x18ed78: 0x27030058  addiu       $v1, $t8, 0x58
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 88));
    // 0x18ed7c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x18ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x18ed80: 0x2703005c  addiu       $v1, $t8, 0x5C
    ctx->pc = 0x18ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 92));
    // 0x18ed84: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x18ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x18ed88: 0x27030060  addiu       $v1, $t8, 0x60
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x18ed8c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x18ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x18ed90: 0x27030064  addiu       $v1, $t8, 0x64
    ctx->pc = 0x18ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 100));
    // 0x18ed94: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x18ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_18ed98:
    // 0x18ed98: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x18ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18ed9c: 0x3b23c  dsll32      $s6, $v1, 8
    ctx->pc = 0x18ed9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18eda0: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18eda4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18eda8: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x18eda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x18edac: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x18EDACu;
    {
        const bool branch_taken_0x18edac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDACu;
        // 0x18edb0: 0x16b23e  dsrl32      $s6, $s6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edac) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EDB4u;
    // 0x18edb4: 0x3a880  sll         $s5, $v1, 2
    ctx->pc = 0x18edb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18edb8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x18edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x18edbc: 0x2463e860  addiu       $v1, $v1, -0x17A0
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
    // 0x18edc0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x18edc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18edc8: 0x600008  jr          $v1
    ctx->pc = 0x18EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDD0u: goto label_18edd0;
            case 0x18EDE0u: goto label_18ede0;
            case 0x18EDF0u: goto label_18edf0;
            case 0x18EE00u: goto label_18ee00;
            case 0x18EE10u: goto label_18ee10;
            case 0x18EE20u: goto label_18ee20;
            case 0x18EE30u: goto label_18ee30;
            case 0x18EE40u: goto label_18ee40;
            case 0x18EE50u: goto label_18ee50;
            case 0x18EE60u: goto label_18ee60;
            case 0x18EE70u: goto label_18ee70;
            case 0x18EE80u: goto label_18ee80;
            case 0x18EE90u: goto label_18ee90;
            case 0x18EEE0u: goto label_18eee0;
            case 0x18EF00u: goto label_18ef00;
            case 0x18EF10u: goto label_18ef10;
            case 0x18EF20u: goto label_18ef20;
            case 0x18EF30u: goto label_18ef30;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF50u: goto label_18ef50;
            case 0x18EF60u: goto label_18ef60;
            case 0x18EF70u: goto label_18ef70;
            case 0x18EF80u: goto label_18ef80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EDC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18EDD0u;
label_18edd0:
    // 0x18edd0: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18edd4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x18EDD4u;
    {
        const bool branch_taken_0x18edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDD4u;
        // 0x18edd8: 0xade30000  sw          $v1, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edd4) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EDDCu;
    // 0x18eddc: 0x0  nop
    ctx->pc = 0x18eddcu;
    // NOP
label_18ede0:
    // 0x18ede0: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ede4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18EDE4u;
    {
        const bool branch_taken_0x18ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDE4u;
        // 0x18ede8: 0xadc30000  sw          $v1, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ede4) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EDECu;
    // 0x18edec: 0x0  nop
    ctx->pc = 0x18edecu;
    // NOP
label_18edf0:
    // 0x18edf0: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18edf4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x18EDF4u;
    {
        const bool branch_taken_0x18edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF4u;
        // 0x18edf8: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf4) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EDFCu;
    // 0x18edfc: 0x0  nop
    ctx->pc = 0x18edfcu;
    // NOP
label_18ee00:
    // 0x18ee00: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee04: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x18EE04u;
    {
        const bool branch_taken_0x18ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE04u;
        // 0x18ee08: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee04) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE0Cu;
    // 0x18ee0c: 0x0  nop
    ctx->pc = 0x18ee0cu;
    // NOP
label_18ee10:
    // 0x18ee10: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee14: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18EE14u;
    {
        const bool branch_taken_0x18ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE14u;
        // 0x18ee18: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee14) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE1Cu;
    // 0x18ee1c: 0x0  nop
    ctx->pc = 0x18ee1cu;
    // NOP
label_18ee20:
    // 0x18ee20: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee24: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x18EE24u;
    {
        const bool branch_taken_0x18ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE24u;
        // 0x18ee28: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee24) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE2Cu;
    // 0x18ee2c: 0x0  nop
    ctx->pc = 0x18ee2cu;
    // NOP
label_18ee30:
    // 0x18ee30: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee34: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x18EE34u;
    {
        const bool branch_taken_0x18ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE34u;
        // 0x18ee38: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee34) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE3Cu;
    // 0x18ee3c: 0x0  nop
    ctx->pc = 0x18ee3cu;
    // NOP
label_18ee40:
    // 0x18ee40: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee44: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x18EE44u;
    {
        const bool branch_taken_0x18ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE44u;
        // 0x18ee48: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee44) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE4Cu;
    // 0x18ee4c: 0x0  nop
    ctx->pc = 0x18ee4cu;
    // NOP
label_18ee50:
    // 0x18ee50: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee54: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x18EE54u;
    {
        const bool branch_taken_0x18ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE54u;
        // 0x18ee58: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee54) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE5Cu;
    // 0x18ee5c: 0x0  nop
    ctx->pc = 0x18ee5cu;
    // NOP
label_18ee60:
    // 0x18ee60: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee64: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x18EE64u;
    {
        const bool branch_taken_0x18ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE64u;
        // 0x18ee68: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee64) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE6Cu;
    // 0x18ee6c: 0x0  nop
    ctx->pc = 0x18ee6cu;
    // NOP
label_18ee70:
    // 0x18ee70: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee74: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x18EE74u;
    {
        const bool branch_taken_0x18ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE74u;
        // 0x18ee78: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee74) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE7Cu;
    // 0x18ee7c: 0x0  nop
    ctx->pc = 0x18ee7cu;
    // NOP
label_18ee80:
    // 0x18ee80: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee84: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18EE84u;
    {
        const bool branch_taken_0x18ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE84u;
        // 0x18ee88: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee84) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EE8Cu;
    // 0x18ee8c: 0x0  nop
    ctx->pc = 0x18ee8cu;
    // NOP
label_18ee90:
    // 0x18ee90: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ee94: 0x94750000  lhu         $s5, 0x0($v1)
    ctx->pc = 0x18ee94u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ee98: 0xa6550000  sh          $s5, 0x0($s2)
    ctx->pc = 0x18ee98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x18ee9c: 0x94750002  lhu         $s5, 0x2($v1)
    ctx->pc = 0x18ee9cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x18eea0: 0xa6350000  sh          $s5, 0x0($s1)
    ctx->pc = 0x18eea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x18eea4: 0x94750004  lhu         $s5, 0x4($v1)
    ctx->pc = 0x18eea4u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18eea8: 0xa7d50000  sh          $s5, 0x0($fp)
    ctx->pc = 0x18eea8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x18eeac: 0x94760006  lhu         $s6, 0x6($v1)
    ctx->pc = 0x18eeacu;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x18eeb0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x18eeb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18eeb4: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x18eeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x18eeb8: 0x94760008  lhu         $s6, 0x8($v1)
    ctx->pc = 0x18eeb8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18eebc: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x18eebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18eec0: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x18eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x18eec4: 0x9476000a  lhu         $s6, 0xA($v1)
    ctx->pc = 0x18eec4u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x18eec8: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x18eec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18eecc: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x18eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x18eed0: 0x9475000c  lhu         $s5, 0xC($v1)
    ctx->pc = 0x18eed0u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18eed4: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x18eed4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18eed8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18EED8u;
    {
        const bool branch_taken_0x18eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED8u;
        // 0x18eedc: 0xa4750000  sh          $s5, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eed8) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EEE0u;
label_18eee0:
    // 0x18eee0: 0x96550000  lhu         $s5, 0x0($s2)
    ctx->pc = 0x18eee0u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18eee4: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x18eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18eee8: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x18eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x18eeec: 0x96350000  lhu         $s5, 0x0($s1)
    ctx->pc = 0x18eeecu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eef0: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x18eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x18eef4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18EEF4u;
    {
        const bool branch_taken_0x18eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEF4u;
        // 0x18eef8: 0xaf030000  sw          $v1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eef4) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EEFCu;
    // 0x18eefc: 0x0  nop
    ctx->pc = 0x18eefcu;
    // NOP
label_18ef00:
    // 0x18ef00: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x18ef00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18ef04: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18EF08u;
    {
        const bool branch_taken_0x18ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF08u;
        // 0x18ef0c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef08) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF10u;
label_18ef10:
    // 0x18ef10: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x18ef10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18ef14: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18EF18u;
    {
        const bool branch_taken_0x18ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF18u;
        // 0x18ef1c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef18) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF20u;
label_18ef20:
    // 0x18ef20: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x18ef20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18ef24: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18EF28u;
    {
        const bool branch_taken_0x18ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF28u;
        // 0x18ef2c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef28) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF30u;
label_18ef30:
    // 0x18ef30: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x18ef30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18ef34: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18EF38u;
    {
        const bool branch_taken_0x18ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF38u;
        // 0x18ef3c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef38) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF40u;
label_18ef40:
    // 0x18ef40: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x18ef40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ef44: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18EF48u;
    {
        const bool branch_taken_0x18ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF48u;
        // 0x18ef4c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef48) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF50u;
label_18ef50:
    // 0x18ef50: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ef54: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18EF58u;
    {
        const bool branch_taken_0x18ef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF58u;
        // 0x18ef5c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef58) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF60u;
label_18ef60:
    // 0x18ef60: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x18ef60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18ef64: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EF68u;
    {
        const bool branch_taken_0x18ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF68u;
        // 0x18ef6c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef68) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF70u;
label_18ef70:
    // 0x18ef70: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x18ef70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18ef74: 0x216a821  addu        $s5, $s0, $s6
    ctx->pc = 0x18ef74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x18ef78: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x18ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x18ef7c: 0x0  nop
    ctx->pc = 0x18ef7cu;
    // NOP
label_18ef80:
    // 0x18ef80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18ef84: 0x299182b  sltu        $v1, $s4, $t9
    ctx->pc = 0x18ef84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x18ef88: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x18EF88u;
    {
        const bool branch_taken_0x18ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF88u;
        // 0x18ef8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef88) {
            ctx->pc = 0x18ED98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ed98;
        }
    }
    ctx->pc = 0x18EF90u;
label_18ef90:
    // 0x18ef90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18ef90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18ef94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18ef94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ef98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ef98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ef9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ef9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18efa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18efa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18efa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18efa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18efa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18efa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18efac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18efacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18efb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18efb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18efb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18EFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFB4u;
        // 0x18efb8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EFBCu;
    // 0x18efbc: 0x0  nop
    ctx->pc = 0x18efbcu;
    // NOP
}
