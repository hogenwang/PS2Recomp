#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D3F0
// Address: 0x23d3f0 - 0x23d448
void sub_0023D3F0_0x23d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D3F0_0x23d3f0");
#endif

    switch (ctx->pc) {
        case 0x23d408u: goto label_23d408;
        case 0x23d430u: goto label_23d430;
        default: break;
    }

    ctx->pc = 0x23d3f0u;

    // 0x23d3f0: 0x8c87029c  lw          $a3, 0x29C($a0)
    ctx->pc = 0x23d3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x23d3f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x23d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x23d3f8: 0x2446fe90  addiu       $a2, $v0, -0x170
    ctx->pc = 0x23d3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
    // 0x23d3fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d400: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d404: 0x0  nop
    ctx->pc = 0x23d404u;
    // NOP
label_23d408:
    // 0x23d408: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x23d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x23d40c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D40Cu;
            // 0x23d410: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D430u;
            goto label_23d430;
        }
    }
    ctx->pc = 0x23D414u;
    // 0x23d414: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23d418: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x23d418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x23d41c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23d420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D420u;
    {
        const bool branch_taken_0x23d420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D420u;
            // 0x23d424: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d420) {
            ctx->pc = 0x23D434u;
            goto label_23d434;
        }
    }
    ctx->pc = 0x23D428u;
    // 0x23d428: 0x3e00008  jr          $ra
    ctx->pc = 0x23D428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D428u;
            // 0x23d42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D430u;
label_23d430:
    // 0x23d430: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_23d434:
    // 0x23d434: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x23d434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23d438: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23D438u;
    {
        const bool branch_taken_0x23d438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D438u;
            // 0x23d43c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d438) {
            ctx->pc = 0x23D408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d408;
        }
    }
    ctx->pc = 0x23D440u;
    // 0x23d440: 0x3e00008  jr          $ra
    ctx->pc = 0x23D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D440u;
            // 0x23d444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D448u;
    ctx->pc = 0x23d448u;
}
