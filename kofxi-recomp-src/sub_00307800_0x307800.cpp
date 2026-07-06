#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307800
// Address: 0x307800 - 0x307870
void sub_00307800_0x307800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307800_0x307800");
#endif

    ctx->pc = 0x307800u;

    // 0x307800: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x307800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307804: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x307808: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x307808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x30780c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x30780Cu;
    {
        const bool branch_taken_0x30780c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x307810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30780Cu;
            // 0x307810: 0xa0651d48  sb          $a1, 0x1D48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7496), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30780c) {
            ctx->pc = 0x307828u;
            goto label_307828;
        }
    }
    ctx->pc = 0x307814u;
    // 0x307814: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x307814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x307818: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x30781c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x307820: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x307820u;
    {
        const bool branch_taken_0x307820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307820u;
            // 0x307824: 0xa0641d48  sb          $a0, 0x1D48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7496), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307820) {
            ctx->pc = 0x307860u;
            goto label_307860;
        }
    }
    ctx->pc = 0x307828u;
label_307828:
    // 0x307828: 0x288300c0  slti        $v1, $a0, 0xC0
    ctx->pc = 0x307828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x30782c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30782Cu;
    {
        const bool branch_taken_0x30782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30782c) {
            ctx->pc = 0x307830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30782Cu;
            // 0x307830: 0x288300a0  slti        $v1, $a0, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)160) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x307840u;
            goto label_307840;
        }
    }
    ctx->pc = 0x307834u;
    // 0x307834: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x307838: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x307838u;
    {
        const bool branch_taken_0x307838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307838u;
            // 0x30783c: 0xa0601d48  sb          $zero, 0x1D48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7496), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307838) {
            ctx->pc = 0x307860u;
            goto label_307860;
        }
    }
    ctx->pc = 0x307840u;
label_307840:
    // 0x307840: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307840u;
    {
        const bool branch_taken_0x307840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307840) {
            ctx->pc = 0x307860u;
            goto label_307860;
        }
    }
    ctx->pc = 0x307848u;
    // 0x307848: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x307848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x30784c: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x30784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x307850: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x307854: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x307854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x307858: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30785c: 0xa0641d48  sb          $a0, 0x1D48($v1)
    ctx->pc = 0x30785cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7496), (uint8_t)GPR_U32(ctx, 4));
label_307860:
    // 0x307860: 0x3e00008  jr          $ra
    ctx->pc = 0x307860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307868u;
    // 0x307868: 0x0  nop
    ctx->pc = 0x307868u;
    // NOP
    // 0x30786c: 0x0  nop
    ctx->pc = 0x30786cu;
    // NOP
    ctx->pc = 0x307870u;
}
