#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CACE0
// Address: 0x2cace0 - 0x2cad20
void sub_002CACE0_0x2cace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CACE0_0x2cace0");
#endif

    ctx->pc = 0x2cace0u;

    // 0x2cace0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cace4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2cace4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cace8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CACE8u;
    {
        const bool branch_taken_0x2cace8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACE8u;
        // 0x2cacec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cace8) {
            ctx->pc = 0x2CACFCu;
            goto label_2cacfc;
        }
    }
    ctx->pc = 0x2CACF0u;
    // 0x2cacf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cacf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CACF4u;
    {
        const bool branch_taken_0x2cacf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACF4u;
        // 0x2cacf8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacf4) {
            ctx->pc = 0x2CAD10u;
            goto label_2cad10;
        }
    }
    ctx->pc = 0x2CACFCu;
label_2cacfc:
    // 0x2cacfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cacfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cad00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD04u;
        // 0x2cad08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD0Cu;
    // 0x2cad0c: 0x0  nop
    ctx->pc = 0x2cad0cu;
    // NOP
label_2cad10:
    // 0x2cad10: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x2cad10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cad14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad18: 0x80b266e  j           func_2C99B8
    ctx->pc = 0x2CAD18u;
    ctx->pc = 0x2CAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD18u;
    // 0x2cad1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    sub_002C99B8_0x2c99b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CAD20u;
}
