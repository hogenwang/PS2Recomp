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

// Function: sub_001A8F20
// Address: 0x1a8f20 - 0x1a8f78
void sub_001A8F20_0x1a8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8F20_0x1a8f20");
#endif

    switch (ctx->pc) {
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f50u: goto label_1a8f50;
        case 0x1a8f60u: goto label_1a8f60;
        default: break;
    }

    ctx->pc = 0x1a8f20u;

    // 0x1a8f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8f2c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A8F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F34u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A8F2Cu, 0x1A8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F34u;
label_1a8f34:
    // 0x1a8f34: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8f38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8f3c: 0x8c70e150  lw          $s0, -0x1EB0($v1)
    ctx->pc = 0x1a8f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959440)));
    // 0x1a8f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8F40u;
    {
        const bool branch_taken_0x1a8f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F40u;
        // 0x1a8f44: 0xac64e150  sw          $a0, -0x1EB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f40) {
            ctx->pc = 0x1A8F50u;
            goto label_1a8f50;
        }
    }
    ctx->pc = 0x1A8F48u;
    // 0x1a8f48: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1A8F48u;
    SET_GPR_U32(ctx, 31, 0x1A8F50u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1A8F48u, 0x1A8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F50u;
label_1a8f50:
    // 0x1a8f50: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8F50u;
    {
        const bool branch_taken_0x1a8f50 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F50u;
        // 0x1a8f54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f50) {
            ctx->pc = 0x1A8F64u;
            goto label_1a8f64;
        }
    }
    ctx->pc = 0x1A8F58u;
    // 0x1a8f58: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1A8F58u;
    SET_GPR_U32(ctx, 31, 0x1A8F60u);
    ctx->pc = 0x1A8F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F58u;
    // 0x1a8f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1A8F58u, 0x1A8F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F60u;
label_1a8f60:
    // 0x1a8f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8f64:
    // 0x1a8f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F6Cu;
        // 0x1a8f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F74u;
    // 0x1a8f74: 0x0  nop
    ctx->pc = 0x1a8f74u;
    // NOP
    if (ctx->pc == 0x1a8f74u) { ctx->pc = 0x1a8f78u; }
}
