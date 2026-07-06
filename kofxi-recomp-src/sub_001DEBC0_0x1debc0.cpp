#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEBC0
// Address: 0x1debc0 - 0x1dec10
void sub_001DEBC0_0x1debc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEBC0_0x1debc0");
#endif

    switch (ctx->pc) {
        case 0x1debf0u: goto label_1debf0;
        default: break;
    }

    ctx->pc = 0x1debc0u;

    // 0x1debc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1debc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEBC4u;
    {
        const bool branch_taken_0x1debc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBC4u;
            // 0x1debc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debc4) {
            ctx->pc = 0x1DEBF0u;
            goto label_1debf0;
        }
    }
    ctx->pc = 0x1DEBCCu;
    // 0x1debcc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1debccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1debd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DEBD0u;
    {
        const bool branch_taken_0x1debd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBD0u;
            // 0x1debd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debd0) {
            ctx->pc = 0x1DEC04u;
            goto label_1dec04;
        }
    }
    ctx->pc = 0x1DEBD8u;
    // 0x1debd8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1debdc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DEBDCu;
    {
        const bool branch_taken_0x1debdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debdc) {
            ctx->pc = 0x1DEBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBDCu;
            // 0x1debe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC00u;
            goto label_1dec00;
        }
    }
    ctx->pc = 0x1DEBE4u;
    // 0x1debe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBE4u;
            // 0x1debe8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEBECu;
    // 0x1debec: 0x0  nop
    ctx->pc = 0x1debecu;
    // NOP
label_1debf0:
    // 0x1debf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1debf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1debf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1debf8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1debf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1debfc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1debfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1dec00:
    // 0x1dec00: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1dec00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dec04:
    // 0x1dec04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEC0Cu;
    // 0x1dec0c: 0x0  nop
    ctx->pc = 0x1dec0cu;
    // NOP
    ctx->pc = 0x1dec10u;
}
