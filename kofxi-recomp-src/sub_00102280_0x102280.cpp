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

// Function: sub_00102280
// Address: 0x102280 - 0x102388
void sub_00102280_0x102280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102280_0x102280");
#endif

    ctx->pc = 0x102280u;

    // 0x102280: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x102284: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x102288: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x102288u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x10228c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x102290: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x102294: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x102294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x102298: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x102298u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x10229c: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x10229cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1022a0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1022a4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1022a8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1022ac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1022acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1022b0: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x1022b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1022b4: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1022b8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1022b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1022bc: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x1022bcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1022c0: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x1022c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x1022c4: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x1022c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1022c8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1022c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1022cc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1022d0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1022d4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x1022d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1022d8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1022d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1022dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1022dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1022e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1022e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1022e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1022e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1022e8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1022ec: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x1022ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x1022f0: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x1022f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1022f4: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x1022f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1022f8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1022f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1022fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1022fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102300: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x102300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x102304: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x102304u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x102308: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x102308u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x10230c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x10230cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x102310: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x102314: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102318: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10231c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x10231cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x102320: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x102324: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x102324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x102328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10232c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x10232cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x102330: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x102330u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x102334: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x102334u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
    // 0x102338: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x102338u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
    // 0x10233c: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x10233cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x102340: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x102340u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
    // 0x102344: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x102344u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x102348: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x102348u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x10234c: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x10234cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x102350: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x102350u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x102354: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102354u;
    {
        const bool branch_taken_0x102354 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x102358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102354u;
        // 0x102358: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102354) {
            ctx->pc = 0x102374u;
            goto label_102374;
        }
    }
    ctx->pc = 0x10235Cu;
    // 0x10235c: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x102360: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x102360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x102364: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x102368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x102368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10236c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10236Cu;
    {
        const bool branch_taken_0x10236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10236Cu;
        // 0x102370: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10236c) {
            ctx->pc = 0x102378u;
            goto label_102378;
        }
    }
    ctx->pc = 0x102374u;
label_102374:
    // 0x102374: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x102374u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_102378:
    // 0x102378: 0xf  sync
    ctx->pc = 0x102378u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10237c: 0x3e00008  jr          $ra
    ctx->pc = 0x10237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10237Cu;
        // 0x102380: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102384u;
    // 0x102384: 0x0  nop
    ctx->pc = 0x102384u;
    // NOP
    if (ctx->pc == 0x102384u) { ctx->pc = 0x102388u; }
}
