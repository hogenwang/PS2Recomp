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

// Function: sub_00202EE0
// Address: 0x202ee0 - 0x202f28
void sub_00202EE0_0x202ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202EE0_0x202ee0");
#endif

    switch (ctx->pc) {
        case 0x202f18u: goto label_202f18;
        default: break;
    }

    ctx->pc = 0x202ee0u;

    // 0x202ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202ee4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x202ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202EE8u;
    {
        const bool branch_taken_0x202ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE8u;
        // 0x202eec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ee8) {
            ctx->pc = 0x202EF8u;
            goto label_202ef8;
        }
    }
    ctx->pc = 0x202EF0u;
    // 0x202ef0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202EF0u;
    {
        const bool branch_taken_0x202ef0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x202ef0) {
            ctx->pc = 0x202F00u;
            goto label_202f00;
        }
    }
    ctx->pc = 0x202EF8u;
label_202ef8:
    // 0x202ef8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202EF8u;
    {
        const bool branch_taken_0x202ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF8u;
        // 0x202efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef8) {
            ctx->pc = 0x202F18u;
            goto label_202f18;
        }
    }
    ctx->pc = 0x202F00u;
label_202f00:
    // 0x202f00: 0x80430010  lb          $v1, 0x10($v0)
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x202f04: 0x80450011  lb          $a1, 0x11($v0)
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x202f08: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x202f08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x202f0c: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x202f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x202f10: 0xc048c54  jal         func_123150
    ctx->pc = 0x202F10u;
    SET_GPR_U32(ctx, 31, 0x202F18u);
    ctx->pc = 0x202F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F10u;
    // 0x202f14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x202F10u, 0x202F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F18u;
label_202f18:
    // 0x202f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x202F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F1Cu;
        // 0x202f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202F24u;
    // 0x202f24: 0x0  nop
    ctx->pc = 0x202f24u;
    // NOP
}
