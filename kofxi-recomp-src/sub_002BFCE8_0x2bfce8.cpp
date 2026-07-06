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

// Function: sub_002BFCE8
// Address: 0x2bfce8 - 0x2bfd28
void sub_002BFCE8_0x2bfce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFCE8_0x2bfce8");
#endif

    switch (ctx->pc) {
        case 0x2bfd18u: goto label_2bfd18;
        default: break;
    }

    ctx->pc = 0x2bfce8u;

    // 0x2bfce8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bfcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfcf0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bfcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bfcf4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFCF4u;
    {
        const bool branch_taken_0x2bfcf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCF4u;
        // 0x2bfcf8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfcf4) {
            ctx->pc = 0x2BFD10u;
            goto label_2bfd10;
        }
    }
    ctx->pc = 0x2BFCFCu;
    // 0x2bfcfc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfd00: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bfd04: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2bfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2bfd08: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2bfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2bfd0c: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2bfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_2bfd10:
    // 0x2bfd10: 0xc0a6246  jal         func_298918
    ctx->pc = 0x2BFD10u;
    SET_GPR_U32(ctx, 31, 0x2BFD18u);
    ctx->pc = 0x2BFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD10u;
    // 0x2bfd14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x2BFD10u, 0x2BFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD18u;
label_2bfd18:
    // 0x2bfd18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bfd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD1Cu;
        // 0x2bfd20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFD24u;
    // 0x2bfd24: 0x0  nop
    ctx->pc = 0x2bfd24u;
    // NOP
    if (ctx->pc == 0x2bfd24u) { ctx->pc = 0x2bfd28u; }
}
