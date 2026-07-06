#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B17C8
// Address: 0x2b17c8 - 0x2b1810
void sub_002B17C8_0x2b17c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B17C8_0x2b17c8");
#endif

    switch (ctx->pc) {
        case 0x2b17d8u: goto label_2b17d8;
        case 0x2b17e0u: goto label_2b17e0;
        case 0x2b17e8u: goto label_2b17e8;
        case 0x2b17f0u: goto label_2b17f0;
        case 0x2b1800u: goto label_2b1800;
        case 0x2b1808u: goto label_2b1808;
        default: break;
    }

    ctx->pc = 0x2b17c8u;

    // 0x2b17c8: 0xac8600c8  sw          $a2, 0xC8($a0)
    ctx->pc = 0x2b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 6));
    // 0x2b17cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17CCu;
            // 0x2b17d0: 0xac8500c4  sw          $a1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17D4u;
    // 0x2b17d4: 0x0  nop
    ctx->pc = 0x2b17d4u;
    // NOP
label_2b17d8:
    // 0x2b17d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17D8u;
            // 0x2b17dc: 0x8c8200c0  lw          $v0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17E0u;
label_2b17e0:
    // 0x2b17e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17E0u;
            // 0x2b17e4: 0x8c8200c4  lw          $v0, 0xC4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17E8u;
label_2b17e8:
    // 0x2b17e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17E8u;
            // 0x2b17ec: 0x8c8200c8  lw          $v0, 0xC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17F0u;
label_2b17f0:
    // 0x2b17f0: 0xac8600d0  sw          $a2, 0xD0($a0)
    ctx->pc = 0x2b17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 6));
    // 0x2b17f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B17F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B17F4u;
            // 0x2b17f8: 0xac8500cc  sw          $a1, 0xCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B17FCu;
    // 0x2b17fc: 0x0  nop
    ctx->pc = 0x2b17fcu;
    // NOP
label_2b1800:
    // 0x2b1800: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1800u;
            // 0x2b1804: 0x8c8200cc  lw          $v0, 0xCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1808u;
label_2b1808:
    // 0x2b1808: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1808u;
            // 0x2b180c: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1810u;
    ctx->pc = 0x2b1810u;
}
