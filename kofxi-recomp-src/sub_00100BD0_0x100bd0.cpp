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

// Function: sub_00100BD0
// Address: 0x100bd0 - 0x100cd8
void sub_00100BD0_0x100bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100BD0_0x100bd0");
#endif

    ctx->pc = 0x100bd0u;

    // 0x100bd0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x100bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x100bd4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x100bd8: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x100bdc: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x100be0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x100be4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100be8: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x100be8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x100bec: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x100becu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bf0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x100bf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x100bf4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x100bf4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x100bf8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x100bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x100bfc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x100bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x100c00: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x100c00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c04: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x100c08: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x100c08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x100c0c: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x100c0cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100c10: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x100c10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x100c14: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x100c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x100c18: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x100c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x100c1c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x100c20: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x100c24: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x100c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x100c28: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x100c28u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x100c2c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x100c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x100c30: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x100c30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x100c34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x100c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x100c38: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x100c38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x100c3c: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x100c3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x100c40: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x100c40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x100c44: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x100c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x100c48: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x100c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100c4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x100c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c50: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x100c50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x100c54: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x100c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x100c58: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x100c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x100c5c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x100c5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x100c60: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x100c64: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x100c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x100c68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x100c6c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x100c6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x100c70: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x100c70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x100c74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x100c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x100c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100c7c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x100c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x100c80: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x100c80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x100c84: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x100c84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
    // 0x100c88: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x100c88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
    // 0x100c8c: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x100c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x100c90: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x100c90u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
    // 0x100c94: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x100c94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x100c98: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x100c98u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x100c9c: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x100c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x100ca0: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x100ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x100ca4: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100CA4u;
    {
        const bool branch_taken_0x100ca4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CA4u;
        // 0x100ca8: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ca4) {
            ctx->pc = 0x100CC4u;
            goto label_100cc4;
        }
    }
    ctx->pc = 0x100CACu;
    // 0x100cac: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x100cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x100cb0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x100cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x100cb4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x100cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x100cb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100CBCu;
    {
        const bool branch_taken_0x100cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CBCu;
        // 0x100cc0: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cbc) {
            ctx->pc = 0x100CC8u;
            goto label_100cc8;
        }
    }
    ctx->pc = 0x100CC4u;
label_100cc4:
    // 0x100cc4: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x100cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_100cc8:
    // 0x100cc8: 0xf  sync
    ctx->pc = 0x100cc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x100CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CCCu;
        // 0x100cd0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CD4u;
    // 0x100cd4: 0x0  nop
    ctx->pc = 0x100cd4u;
    // NOP
}
