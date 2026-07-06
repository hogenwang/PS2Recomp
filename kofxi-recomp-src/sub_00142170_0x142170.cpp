#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142170
// Address: 0x142170 - 0x1421f0
void sub_00142170_0x142170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142170_0x142170");
#endif

    ctx->pc = 0x142170u;

    // 0x142170: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x142174: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x142174u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x142178: 0x8463f10c  lh          $v1, -0xEF4($v1)
    ctx->pc = 0x142178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963468)));
    // 0x14217c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x14217cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142180: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x142180u;
    {
        const bool branch_taken_0x142180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142180u;
            // 0x142184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142180) {
            ctx->pc = 0x142190u;
            goto label_142190;
        }
    }
    ctx->pc = 0x142188u;
    // 0x142188: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x142188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x14218c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_142190:
    // 0x142190: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x142190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x142194: 0x8463f10e  lh          $v1, -0xEF2($v1)
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963470)));
    // 0x142198: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x142198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14219c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14219Cu;
    {
        const bool branch_taken_0x14219c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14219c) {
            ctx->pc = 0x1421ACu;
            goto label_1421ac;
        }
    }
    ctx->pc = 0x1421A4u;
    // 0x1421a4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1421a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1421a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1421a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1421ac:
    // 0x1421ac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1421acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1421b0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1421b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1421b4: 0x8463f110  lh          $v1, -0xEF0($v1)
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963472)));
    // 0x1421b8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1421b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1421bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1421BCu;
    {
        const bool branch_taken_0x1421bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1421bc) {
            ctx->pc = 0x1421CCu;
            goto label_1421cc;
        }
    }
    ctx->pc = 0x1421C4u;
    // 0x1421c4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1421c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1421c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1421c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1421cc:
    // 0x1421cc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1421ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1421d0: 0x8463f112  lh          $v1, -0xEEE($v1)
    ctx->pc = 0x1421d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963474)));
    // 0x1421d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1421d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1421d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1421D8u;
    {
        const bool branch_taken_0x1421d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1421d8) {
            ctx->pc = 0x1421E8u;
            goto label_1421e8;
        }
    }
    ctx->pc = 0x1421E0u;
    // 0x1421e0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1421e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1421e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1421e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1421e8:
    // 0x1421e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1421E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1421F0u;
    ctx->pc = 0x1421f0u;
}
