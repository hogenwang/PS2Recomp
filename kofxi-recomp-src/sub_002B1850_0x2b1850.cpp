#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1850
// Address: 0x2b1850 - 0x2b1898
void sub_002B1850_0x2b1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1850_0x2b1850");
#endif

    switch (ctx->pc) {
        case 0x2b1870u: goto label_2b1870;
        default: break;
    }

    ctx->pc = 0x2b1850u;

    // 0x2b1850: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b1850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b1854: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b1854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b1858: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b1858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b185c: 0x8ca375f8  lw          $v1, 0x75F8($a1)
    ctx->pc = 0x2b185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30200)));
    // 0x2b1860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1864: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b1864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b1868: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1868u;
            // 0x2b186c: 0xaca375f8  sw          $v1, 0x75F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 30200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1870u;
label_2b1870:
    // 0x2b1870: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2b1874: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b1878: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b1878u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b187c: 0x8c6575f8  lw          $a1, 0x75F8($v1)
    ctx->pc = 0x2b187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30200)));
    // 0x2b1880: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2b1880u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2b1884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1888: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2b1888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2b188c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B188Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B188Cu;
            // 0x2b1890: 0xac6575f8  sw          $a1, 0x75F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1894u;
    // 0x2b1894: 0x0  nop
    ctx->pc = 0x2b1894u;
    // NOP
    ctx->pc = 0x2b1898u;
}
