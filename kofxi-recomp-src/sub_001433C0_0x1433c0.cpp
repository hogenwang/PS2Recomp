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

// Function: sub_001433C0
// Address: 0x1433c0 - 0x143490
void sub_001433C0_0x1433c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001433C0_0x1433c0");
#endif

    ctx->pc = 0x1433c0u;

    // 0x1433c0: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x1433c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1433c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1433c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1433c8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1433C8u;
    {
        const bool branch_taken_0x1433c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433c8) {
            ctx->pc = 0x143428u;
            goto label_143428;
        }
    }
    ctx->pc = 0x1433D0u;
    // 0x1433d0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1433D0u;
    {
        const bool branch_taken_0x1433d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433d0) {
            ctx->pc = 0x143400u;
            goto label_143400;
        }
    }
    ctx->pc = 0x1433D8u;
    // 0x1433d8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1433d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1433dc: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1433dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1433e0: 0x8442f11e  lh          $v0, -0xEE2($v0)
    ctx->pc = 0x1433e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963486)));
    // 0x1433e4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1433e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1433e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1433ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1433ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1433f0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1433F0u;
    {
        const bool branch_taken_0x1433f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433f0) {
            ctx->pc = 0x1433F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433F0u;
            // 0x1433f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143484u;
            goto label_143484;
        }
    }
    ctx->pc = 0x1433F8u;
    // 0x1433f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1433F8u;
    {
        const bool branch_taken_0x1433f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433F8u;
        // 0x1433fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f8) {
            ctx->pc = 0x143484u;
            goto label_143484;
        }
    }
    ctx->pc = 0x143400u;
label_143400:
    // 0x143400: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x143404: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x143404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143408: 0x8442db1e  lh          $v0, -0x24E2($v0)
    ctx->pc = 0x143408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957854)));
    // 0x14340c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x14340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143410: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x143410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143414: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x143414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143418: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x143418u;
    {
        const bool branch_taken_0x143418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143418) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x143420u;
    // 0x143420: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x143420u;
    {
        const bool branch_taken_0x143420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143420u;
        // 0x143424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143420) {
            ctx->pc = 0x143484u;
            goto label_143484;
        }
    }
    ctx->pc = 0x143428u;
label_143428:
    // 0x143428: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x143428u;
    {
        const bool branch_taken_0x143428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143428) {
            ctx->pc = 0x143458u;
            goto label_143458;
        }
    }
    ctx->pc = 0x143430u;
    // 0x143430: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x143434: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x143434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143438: 0x8442f11c  lh          $v0, -0xEE4($v0)
    ctx->pc = 0x143438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963484)));
    // 0x14343c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x14343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143444: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x143444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143448: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x143448u;
    {
        const bool branch_taken_0x143448 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143448) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x143450u;
    // 0x143450: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143450u;
    {
        const bool branch_taken_0x143450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143450u;
        // 0x143454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143450) {
            ctx->pc = 0x143484u;
            goto label_143484;
        }
    }
    ctx->pc = 0x143458u;
label_143458:
    // 0x143458: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x143458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14345c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x14345cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143460: 0x8442db1c  lh          $v0, -0x24E4($v0)
    ctx->pc = 0x143460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957852)));
    // 0x143464: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x143464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14346c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x14346cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143470: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x143470u;
    {
        const bool branch_taken_0x143470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143470) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x143478u;
    // 0x143478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143478u;
    {
        const bool branch_taken_0x143478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143478u;
        // 0x14347c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143478) {
            ctx->pc = 0x143484u;
            goto label_143484;
        }
    }
    ctx->pc = 0x143480u;
label_143480:
    // 0x143480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143484:
    // 0x143484: 0x3e00008  jr          $ra
    ctx->pc = 0x143484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14348Cu;
    // 0x14348c: 0x0  nop
    ctx->pc = 0x14348cu;
    // NOP
}
