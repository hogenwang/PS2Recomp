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

// Function: sub_002F8F50
// Address: 0x2f8f50 - 0x2f8fa0
void sub_002F8F50_0x2f8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8F50_0x2f8f50");
#endif

    switch (ctx->pc) {
        case 0x2f8f78u: goto label_2f8f78;
        default: break;
    }

    ctx->pc = 0x2f8f50u;

    // 0x2f8f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f8f54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8f58: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2f8f58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2f8f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8f60: 0x8e240648  lw          $a0, 0x648($s1)
    ctx->pc = 0x2f8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1608)));
    // 0x2f8f64: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f8f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8f68: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8F68u;
    {
        const bool branch_taken_0x2f8f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F68u;
        // 0x2f8f6c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f68) {
            ctx->pc = 0x2F8F78u;
            goto label_2f8f78;
        }
    }
    ctx->pc = 0x2F8F70u;
    // 0x2f8f70: 0xc04636c  jal         func_118DB0
    ctx->pc = 0x2F8F70u;
    SET_GPR_U32(ctx, 31, 0x2F8F78u);
    ctx->pc = 0x118DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DB0u, 0x2F8F70u, 0x2F8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F78u;
label_2f8f78:
    // 0x2f8f78: 0xae300648  sw          $s0, 0x648($s1)
    ctx->pc = 0x2f8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 16));
    // 0x2f8f7c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f8f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8f88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8f90: 0xac62064c  sw          $v0, 0x64C($v1)
    ctx->pc = 0x2f8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1612), GPR_U32(ctx, 2));
    // 0x2f8f94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F94u;
        // 0x2f8f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8F9Cu;
    // 0x2f8f9c: 0x0  nop
    ctx->pc = 0x2f8f9cu;
    // NOP
}
