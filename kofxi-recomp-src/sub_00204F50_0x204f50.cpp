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

// Function: sub_00204F50
// Address: 0x204f50 - 0x204fa0
void sub_00204F50_0x204f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204F50_0x204f50");
#endif

    switch (ctx->pc) {
        case 0x204f7cu: goto label_204f7c;
        case 0x204f8cu: goto label_204f8c;
        default: break;
    }

    ctx->pc = 0x204f50u;

    // 0x204f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204f54: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204f5c: 0x27a4001f  addiu       $a0, $sp, 0x1F
    ctx->pc = 0x204f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x204f60: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x204f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204f64: 0x27a5001e  addiu       $a1, $sp, 0x1E
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x204f68: 0x27a6001d  addiu       $a2, $sp, 0x1D
    ctx->pc = 0x204f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 29));
    // 0x204f6c: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x204f6cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x204f70: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x204f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x204f74: 0xc080e58  jal         func_203960
    ctx->pc = 0x204F74u;
    SET_GPR_U32(ctx, 31, 0x204F7Cu);
    ctx->pc = 0x204F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F74u;
    // 0x204f78: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203960u, 0x204F74u, 0x204F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F7Cu;
label_204f7c:
    // 0x204f7c: 0x93a5001e  lbu         $a1, 0x1E($sp)
    ctx->pc = 0x204f7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x204f80: 0x93a6001d  lbu         $a2, 0x1D($sp)
    ctx->pc = 0x204f80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x204f84: 0xc081348  jal         func_204D20
    ctx->pc = 0x204F84u;
    SET_GPR_U32(ctx, 31, 0x204F8Cu);
    ctx->pc = 0x204F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F84u;
    // 0x204f88: 0x93a4001f  lbu         $a0, 0x1F($sp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204D20u, 0x204F84u, 0x204F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F8Cu;
label_204f8c:
    // 0x204f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204f90: 0x3e00008  jr          $ra
    ctx->pc = 0x204F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F90u;
        // 0x204f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204F98u;
    // 0x204f98: 0x0  nop
    ctx->pc = 0x204f98u;
    // NOP
    // 0x204f9c: 0x0  nop
    ctx->pc = 0x204f9cu;
    // NOP
    if (ctx->pc == 0x204f9cu) { ctx->pc = 0x204fa0u; }
}
