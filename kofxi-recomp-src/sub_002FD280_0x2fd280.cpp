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

// Function: sub_002FD280
// Address: 0x2fd280 - 0x2fd2c0
void sub_002FD280_0x2fd280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD280_0x2fd280");
#endif

    switch (ctx->pc) {
        case 0x2fd2a0u: goto label_2fd2a0;
        default: break;
    }

    ctx->pc = 0x2fd280u;

    // 0x2fd280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd284: 0x3c04009e  lui         $a0, 0x9E
    ctx->pc = 0x2fd284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)158 << 16));
    // 0x2fd288: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd290: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x2fd290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x2fd294: 0x24a5b250  addiu       $a1, $a1, -0x4DB0
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947408));
    // 0x2fd298: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD298u;
    SET_GPR_U32(ctx, 31, 0x2FD2A0u);
    ctx->pc = 0x2FD29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD298u;
    // 0x2fd29c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3015B0u, 0x2FD298u, 0x2FD2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2A0u;
label_2fd2a0:
    // 0x2fd2a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD2A0u;
    {
        const bool branch_taken_0x2fd2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd2a0) {
            ctx->pc = 0x2FD2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD2A0u;
            // 0x2fd2a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD2B0u;
            goto label_2fd2b0;
        }
    }
    ctx->pc = 0x2FD2A8u;
    // 0x2fd2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd2b0:
    // 0x2fd2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2B0u;
        // 0x2fd2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD2B8u;
    // 0x2fd2b8: 0x0  nop
    ctx->pc = 0x2fd2b8u;
    // NOP
    // 0x2fd2bc: 0x0  nop
    ctx->pc = 0x2fd2bcu;
    // NOP
    if (ctx->pc == 0x2fd2bcu) { ctx->pc = 0x2fd2c0u; }
}
