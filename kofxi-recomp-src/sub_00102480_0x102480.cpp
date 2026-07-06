#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102480
// Address: 0x102480 - 0x1024a8
void sub_00102480_0x102480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102480_0x102480");
#endif

    ctx->pc = 0x102480u;

    // 0x102480: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x102480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102484: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x102484u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x102488: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102488u;
    {
        const bool branch_taken_0x102488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102488u;
            // 0x10248c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102488) {
            ctx->pc = 0x1024A0u;
            goto label_1024a0;
        }
    }
    ctx->pc = 0x102490u;
    // 0x102490: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x102494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102498: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x102498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10249c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10249cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1024a0:
    // 0x1024a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1024A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024A0u;
            // 0x1024a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1024A8u;
    ctx->pc = 0x1024a8u;
}
