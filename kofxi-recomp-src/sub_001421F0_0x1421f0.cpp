#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001421F0
// Address: 0x1421f0 - 0x142270
void sub_001421F0_0x1421f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001421F0_0x1421f0");
#endif

    ctx->pc = 0x1421f0u;

    // 0x1421f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1421f4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1421f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1421f8: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x1421f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x1421fc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1421fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142200: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x142200u;
    {
        const bool branch_taken_0x142200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142200u;
            // 0x142204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142200) {
            ctx->pc = 0x142210u;
            goto label_142210;
        }
    }
    ctx->pc = 0x142208u;
    // 0x142208: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x142208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14220c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14220cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_142210:
    // 0x142210: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x142214: 0x8463db2e  lh          $v1, -0x24D2($v1)
    ctx->pc = 0x142214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957870)));
    // 0x142218: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x142218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14221c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14221Cu;
    {
        const bool branch_taken_0x14221c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14221c) {
            ctx->pc = 0x14222Cu;
            goto label_14222c;
        }
    }
    ctx->pc = 0x142224u;
    // 0x142224: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x142224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x142228: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14222c:
    // 0x14222c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x142230: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x142230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142234: 0x8463db30  lh          $v1, -0x24D0($v1)
    ctx->pc = 0x142234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x142238: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x142238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14223c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14223Cu;
    {
        const bool branch_taken_0x14223c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14223c) {
            ctx->pc = 0x14224Cu;
            goto label_14224c;
        }
    }
    ctx->pc = 0x142244u;
    // 0x142244: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x142244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x142248: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14224c:
    // 0x14224c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x142250: 0x8463db32  lh          $v1, -0x24CE($v1)
    ctx->pc = 0x142250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x142254: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x142254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x142258: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x142258u;
    {
        const bool branch_taken_0x142258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142258) {
            ctx->pc = 0x142268u;
            goto label_142268;
        }
    }
    ctx->pc = 0x142260u;
    // 0x142260: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x142260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x142264: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_142268:
    // 0x142268: 0x3e00008  jr          $ra
    ctx->pc = 0x142268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142270u;
    ctx->pc = 0x142270u;
}
