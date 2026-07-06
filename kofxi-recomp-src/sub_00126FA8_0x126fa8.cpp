#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126FA8
// Address: 0x126fa8 - 0x127088
void sub_00126FA8_0x126fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126FA8_0x126fa8");
#endif

    switch (ctx->pc) {
        case 0x127008u: goto label_127008;
        case 0x127064u: goto label_127064;
        case 0x127080u: goto label_127080;
        default: break;
    }

    ctx->pc = 0x126fa8u;

    // 0x126fa8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x126fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126fac: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x126FACu;
    {
        const bool branch_taken_0x126fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FACu;
            // 0x126fb0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fac) {
            ctx->pc = 0x127048u;
            goto label_127048;
        }
    }
    ctx->pc = 0x126FB4u;
    // 0x126fb4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x126fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x126fb8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x126FB8u;
    {
        const bool branch_taken_0x126fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FB8u;
            // 0x126fbc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fb8) {
            ctx->pc = 0x127048u;
            goto label_127048;
        }
    }
    ctx->pc = 0x126FC0u;
    // 0x126fc0: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x126fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x126fc4: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x126fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x126fc8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x126fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x126fcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x126fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x126fd0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x126fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x126fd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x126fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x126fd8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x126fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x126fdc: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x126fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x126fe0: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x126fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x126fe4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x126fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x126fe8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x126fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x126fec: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x126fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x126ff0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x126ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x126ff4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x126ff8: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x126ff8u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x126ffc: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x126ffcu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x127000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127004: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x127004u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_127008:
    // 0x127008: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x127008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12700c: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x12700cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x127010: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x127010u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x127014: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x127014u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x127018: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x127018u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12701c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12701cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x127020: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x127020u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x127024: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x127024u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x127028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12702c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12702Cu;
    {
        const bool branch_taken_0x12702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12702c) {
            ctx->pc = 0x127030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12702Cu;
            // 0x127030: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127048u;
            goto label_127048;
        }
    }
    ctx->pc = 0x127034u;
    // 0x127034: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x127034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x127038: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x127038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12703c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12703Cu;
    {
        const bool branch_taken_0x12703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12703Cu;
            // 0x127040: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12703c) {
            ctx->pc = 0x127008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127008;
        }
    }
    ctx->pc = 0x127044u;
    // 0x127044: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x127044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_127048:
    // 0x127048: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12704c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x127054: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127054u;
    {
        const bool branch_taken_0x127054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x127054) {
            ctx->pc = 0x127078u;
            goto label_127078;
        }
    }
    ctx->pc = 0x12705Cu;
    // 0x12705c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x127060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x127060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_127064:
    // 0x127064: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x127064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127068: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127068u;
    {
        const bool branch_taken_0x127068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127068u;
            // 0x12706c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127068) {
            ctx->pc = 0x127080u;
            goto label_127080;
        }
    }
    ctx->pc = 0x127070u;
    // 0x127070: 0x14c3fffc  bne         $a2, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127070u;
            // 0x127074: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127070) {
            ctx->pc = 0x127064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127064;
        }
    }
    ctx->pc = 0x127078u;
label_127078:
    // 0x127078: 0x3e00008  jr          $ra
    ctx->pc = 0x127078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127078u;
            // 0x12707c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127080u;
label_127080:
    // 0x127080: 0x3e00008  jr          $ra
    ctx->pc = 0x127080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127080u;
            // 0x127084: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127088u;
    ctx->pc = 0x127088u;
}
