#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143850
// Address: 0x143850 - 0x143880
void sub_00143850_0x143850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143850_0x143850");
#endif

    ctx->pc = 0x143850u;

    // 0x143850: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x143850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x143854: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x143854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x143858: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143858u;
    {
        const bool branch_taken_0x143858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143858) {
            ctx->pc = 0x14385Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143858u;
            // 0x14385c: 0x90820438  lbu         $v0, 0x438($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143868u;
            goto label_143868;
        }
    }
    ctx->pc = 0x143860u;
    // 0x143860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143860u;
    {
        const bool branch_taken_0x143860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143860u;
            // 0x143864: 0xa48500f2  sh          $a1, 0xF2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143860) {
            ctx->pc = 0x143870u;
            goto label_143870;
        }
    }
    ctx->pc = 0x143868u;
label_143868:
    // 0x143868: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x143868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x14386c: 0xa0820438  sb          $v0, 0x438($a0)
    ctx->pc = 0x14386cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1080), (uint8_t)GPR_U32(ctx, 2));
label_143870:
    // 0x143870: 0x3e00008  jr          $ra
    ctx->pc = 0x143870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143870u;
            // 0x143874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143878u;
    // 0x143878: 0x0  nop
    ctx->pc = 0x143878u;
    // NOP
    // 0x14387c: 0x0  nop
    ctx->pc = 0x14387cu;
    // NOP
    ctx->pc = 0x143880u;
}
