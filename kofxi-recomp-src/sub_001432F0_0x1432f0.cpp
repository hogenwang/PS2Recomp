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

// Function: sub_001432F0
// Address: 0x1432f0 - 0x1433c0
void sub_001432F0_0x1432f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001432F0_0x1432f0");
#endif

    ctx->pc = 0x1432f0u;

    // 0x1432f0: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x1432f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1432f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1432f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1432f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1432F8u;
    {
        const bool branch_taken_0x1432f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432f8) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x143300u;
    // 0x143300: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x143300u;
    {
        const bool branch_taken_0x143300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143300) {
            ctx->pc = 0x143330u;
            goto label_143330;
        }
    }
    ctx->pc = 0x143308u;
    // 0x143308: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14330c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x14330cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143310: 0x8442f11c  lh          $v0, -0xEE4($v0)
    ctx->pc = 0x143310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963484)));
    // 0x143314: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14331c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x14331cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143320: 0x54200024  bnel        $at, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x143320u;
    {
        const bool branch_taken_0x143320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143320) {
            ctx->pc = 0x143324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143320u;
            // 0x143324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1433B4u;
            goto label_1433b4;
        }
    }
    ctx->pc = 0x143328u;
    // 0x143328: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x143328u;
    {
        const bool branch_taken_0x143328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143328u;
        // 0x14332c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143328) {
            ctx->pc = 0x1433B4u;
            goto label_1433b4;
        }
    }
    ctx->pc = 0x143330u;
label_143330:
    // 0x143330: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x143334: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143338: 0x8442db1c  lh          $v0, -0x24E4($v0)
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957852)));
    // 0x14333c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x14333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143344: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x143344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143348: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x143348u;
    {
        const bool branch_taken_0x143348 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143348) {
            ctx->pc = 0x1433B0u;
            goto label_1433b0;
        }
    }
    ctx->pc = 0x143350u;
    // 0x143350: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x143350u;
    {
        const bool branch_taken_0x143350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143350u;
        // 0x143354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143350) {
            ctx->pc = 0x1433B4u;
            goto label_1433b4;
        }
    }
    ctx->pc = 0x143358u;
label_143358:
    // 0x143358: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x143358u;
    {
        const bool branch_taken_0x143358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143358) {
            ctx->pc = 0x143388u;
            goto label_143388;
        }
    }
    ctx->pc = 0x143360u;
    // 0x143360: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x143364: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x143364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143368: 0x8442f11e  lh          $v0, -0xEE2($v0)
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963486)));
    // 0x14336c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x14336cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143370: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x143370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143374: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x143374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143378: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x143378u;
    {
        const bool branch_taken_0x143378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143378) {
            ctx->pc = 0x1433B0u;
            goto label_1433b0;
        }
    }
    ctx->pc = 0x143380u;
    // 0x143380: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143380u;
    {
        const bool branch_taken_0x143380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143380u;
        // 0x143384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143380) {
            ctx->pc = 0x1433B4u;
            goto label_1433b4;
        }
    }
    ctx->pc = 0x143388u;
label_143388:
    // 0x143388: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14338c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x14338cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143390: 0x8442db1e  lh          $v0, -0x24E2($v0)
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957854)));
    // 0x143394: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x143394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143398: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x143398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14339c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x14339cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1433a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1433A0u;
    {
        const bool branch_taken_0x1433a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433a0) {
            ctx->pc = 0x1433B0u;
            goto label_1433b0;
        }
    }
    ctx->pc = 0x1433A8u;
    // 0x1433a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1433A8u;
    {
        const bool branch_taken_0x1433a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433A8u;
        // 0x1433ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433a8) {
            ctx->pc = 0x1433B4u;
            goto label_1433b4;
        }
    }
    ctx->pc = 0x1433B0u;
label_1433b0:
    // 0x1433b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1433b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1433b4:
    // 0x1433b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1433B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1433BCu;
    // 0x1433bc: 0x0  nop
    ctx->pc = 0x1433bcu;
    // NOP
    if (ctx->pc == 0x1433bcu) { ctx->pc = 0x1433c0u; }
}
