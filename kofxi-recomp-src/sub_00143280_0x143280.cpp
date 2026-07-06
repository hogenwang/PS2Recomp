#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143280
// Address: 0x143280 - 0x1432f0
void sub_00143280_0x143280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143280_0x143280");
#endif

    ctx->pc = 0x143280u;

    // 0x143280: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x143284: 0x4430018  bgezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x143284u;
    {
        const bool branch_taken_0x143284 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x143284) {
            ctx->pc = 0x143288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143284u;
            // 0x143288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1432E8u;
            goto label_1432e8;
        }
    }
    ctx->pc = 0x14328Cu;
    // 0x14328c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x14328Cu;
    {
        const bool branch_taken_0x14328c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14328c) {
            ctx->pc = 0x1432BCu;
            goto label_1432bc;
        }
    }
    ctx->pc = 0x143294u;
    // 0x143294: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x143298: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14329c: 0x8442f11a  lh          $v0, -0xEE6($v0)
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963482)));
    // 0x1432a0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1432a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1432a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1432a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1432a8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1432a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1432ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1432ACu;
    {
        const bool branch_taken_0x1432ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1432ac) {
            ctx->pc = 0x1432E4u;
            goto label_1432e4;
        }
    }
    ctx->pc = 0x1432B4u;
    // 0x1432b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1432B4u;
    {
        const bool branch_taken_0x1432b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432B4u;
            // 0x1432b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432b4) {
            ctx->pc = 0x1432E8u;
            goto label_1432e8;
        }
    }
    ctx->pc = 0x1432BCu;
label_1432bc:
    // 0x1432bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1432bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1432c0: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1432c4: 0x8442db1a  lh          $v0, -0x24E6($v0)
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957850)));
    // 0x1432c8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1432cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1432d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1432d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1432d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1432D4u;
    {
        const bool branch_taken_0x1432d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1432d4) {
            ctx->pc = 0x1432E4u;
            goto label_1432e4;
        }
    }
    ctx->pc = 0x1432DCu;
    // 0x1432dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1432DCu;
    {
        const bool branch_taken_0x1432dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432DCu;
            // 0x1432e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432dc) {
            ctx->pc = 0x1432E8u;
            goto label_1432e8;
        }
    }
    ctx->pc = 0x1432E4u;
label_1432e4:
    // 0x1432e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1432e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1432e8:
    // 0x1432e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1432E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1432F0u;
    ctx->pc = 0x1432f0u;
}
