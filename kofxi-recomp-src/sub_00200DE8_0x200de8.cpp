#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200DE8
// Address: 0x200de8 - 0x200e30
void sub_00200DE8_0x200de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DE8_0x200de8");
#endif

    switch (ctx->pc) {
        case 0x200df0u: goto label_200df0;
        case 0x200df8u: goto label_200df8;
        case 0x200e08u: goto label_200e08;
        case 0x200e18u: goto label_200e18;
        case 0x200e28u: goto label_200e28;
        default: break;
    }

    ctx->pc = 0x200de8u;

    // 0x200de8: 0x3e00008  jr          $ra
    ctx->pc = 0x200DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DE8u;
            // 0x200dec: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200DF0u;
label_200df0:
    // 0x200df0: 0x3e00008  jr          $ra
    ctx->pc = 0x200DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DF0u;
            // 0x200df4: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200DF8u;
label_200df8:
    // 0x200df8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x200dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x200DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DFCu;
            // 0x200e00: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E04u;
    // 0x200e04: 0x0  nop
    ctx->pc = 0x200e04u;
    // NOP
label_200e08:
    // 0x200e08: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x200e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x200E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E0Cu;
            // 0x200e10: 0xac450020  sw          $a1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E14u;
    // 0x200e14: 0x0  nop
    ctx->pc = 0x200e14u;
    // NOP
label_200e18:
    // 0x200e18: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x200e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x200e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x200E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E1Cu;
            // 0x200e20: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E24u;
    // 0x200e24: 0x0  nop
    ctx->pc = 0x200e24u;
    // NOP
label_200e28:
    // 0x200e28: 0x3e00008  jr          $ra
    ctx->pc = 0x200E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E28u;
            // 0x200e2c: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200E30u;
    ctx->pc = 0x200e30u;
}
