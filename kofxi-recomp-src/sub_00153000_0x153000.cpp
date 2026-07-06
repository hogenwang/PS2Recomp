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

// Function: sub_00153000
// Address: 0x153000 - 0x1530c0
void sub_00153000_0x153000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153000_0x153000");
#endif

    switch (ctx->pc) {
        case 0x153020u: goto label_153020;
        default: break;
    }

    ctx->pc = 0x153000u;

    // 0x153000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15300c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153018: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x153018u;
    SET_GPR_U32(ctx, 31, 0x153020u);
    ctx->pc = 0x15301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153018u;
    // 0x15301c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x153018u, 0x153020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153020u;
label_153020:
    // 0x153020: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x153020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153024: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x153024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x153028: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x153028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15302c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x15302Cu;
    {
        const bool branch_taken_0x15302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15302c) {
            ctx->pc = 0x153030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15302Cu;
            // 0x153030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1530ACu;
            goto label_1530ac;
        }
    }
    ctx->pc = 0x153034u;
    // 0x153034: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x153034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x153038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15303c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x153040: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153044: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x153044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153048: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x153048u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15304c: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x15304cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x153050: 0x51b03  sra         $v1, $a1, 12
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 12));
    // 0x153054: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x153054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x153058: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x153058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15305c: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x15305cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x153060: 0x51a83  sra         $v1, $a1, 10
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 10));
    // 0x153064: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x153068: 0xa203000e  sb          $v1, 0xE($s0)
    ctx->pc = 0x153068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x15306c: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x15306cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x153070: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x153070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x153074: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x153078: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x153078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x15307c: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x15307cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x153080: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x153080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x153084: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x153084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x153088: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x153088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x15308c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x153090: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x153090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x153094: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x153094u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x153098: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x153098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x15309c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x1530a0: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x1530a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1530a4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1530a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1530a8: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x1530a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_1530ac:
    // 0x1530ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1530acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1530b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1530b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1530b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1530b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1530b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1530B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B8u;
        // 0x1530bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530C0u;
}
