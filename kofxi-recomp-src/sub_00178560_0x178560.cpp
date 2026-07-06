#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178560
// Address: 0x178560 - 0x1785c0
void sub_00178560_0x178560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178560_0x178560");
#endif

    ctx->pc = 0x178560u;

    // 0x178560: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178564: 0x8c42a798  lw          $v0, -0x5868($v0)
    ctx->pc = 0x178564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944664)));
    // 0x178568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178568u;
    {
        const bool branch_taken_0x178568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178568) {
            ctx->pc = 0x17857Cu;
            goto label_17857c;
        }
    }
    ctx->pc = 0x178570u;
    // 0x178570: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178574: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x178574u;
    {
        const bool branch_taken_0x178574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178574u;
            // 0x178578: 0x8c42a7a0  lw          $v0, -0x5860($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178574) {
            ctx->pc = 0x1785B0u;
            goto label_1785b0;
        }
    }
    ctx->pc = 0x17857Cu;
label_17857c:
    // 0x17857c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x178580: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178584: 0x844237f8  lh          $v0, 0x37F8($v0)
    ctx->pc = 0x178584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14328)));
    // 0x178588: 0x8c64a7b0  lw          $a0, -0x5850($v1)
    ctx->pc = 0x178588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944688)));
    // 0x17858c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17858cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x178594: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x178594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178598: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x178598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17859c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17859Cu;
    {
        const bool branch_taken_0x17859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17859c) {
            ctx->pc = 0x1785A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17859Cu;
            // 0x1785a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1785B0u;
            goto label_1785b0;
        }
    }
    ctx->pc = 0x1785A4u;
    // 0x1785a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1785a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1785a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1785A8u;
    {
        const bool branch_taken_0x1785a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785A8u;
            // 0x1785ac: 0x8c42a7a0  lw          $v0, -0x5860($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785a8) {
            ctx->pc = 0x1785B0u;
            goto label_1785b0;
        }
    }
    ctx->pc = 0x1785B0u;
label_1785b0:
    // 0x1785b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1785B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1785B8u;
    // 0x1785b8: 0x0  nop
    ctx->pc = 0x1785b8u;
    // NOP
    // 0x1785bc: 0x0  nop
    ctx->pc = 0x1785bcu;
    // NOP
    ctx->pc = 0x1785c0u;
}
