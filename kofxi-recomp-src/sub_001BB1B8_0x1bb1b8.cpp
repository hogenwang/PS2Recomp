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

// Function: sub_001BB1B8
// Address: 0x1bb1b8 - 0x1bb218
void sub_001BB1B8_0x1bb1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB1B8_0x1bb1b8");
#endif

    switch (ctx->pc) {
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb204u: goto label_1bb204;
        default: break;
    }

    ctx->pc = 0x1bb1b8u;

    // 0x1bb1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb1bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB1BCu;
    {
        const bool branch_taken_0x1bb1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1BCu;
        // 0x1bb1c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1bc) {
            ctx->pc = 0x1BB1D8u;
            goto label_1bb1d8;
        }
    }
    ctx->pc = 0x1BB1C4u;
    // 0x1bb1c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bb1c8: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BB1C8u;
    SET_GPR_U32(ctx, 31, 0x1BB1D0u);
    ctx->pc = 0x1BB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1C8u;
    // 0x1bb1cc: 0x248486c8  addiu       $a0, $a0, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BB1C8u, 0x1BB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1D0u;
label_1bb1d0:
    // 0x1bb1d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB1D0u;
    {
        const bool branch_taken_0x1bb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1D0u;
        // 0x1bb1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1d0) {
            ctx->pc = 0x1BB1DCu;
            goto label_1bb1dc;
        }
    }
    ctx->pc = 0x1BB1D8u;
label_1bb1d8:
    // 0x1bb1d8: 0x80820072  lb          $v0, 0x72($a0)
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_1bb1dc:
    // 0x1bb1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1E0u;
        // 0x1bb1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB1E8u;
    // 0x1bb1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb1f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb1f4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB1F4u;
    SET_GPR_U32(ctx, 31, 0x1BB1FCu);
    ctx->pc = 0x1BB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1F4u;
    // 0x1bb1f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB1F4u, 0x1BB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1FCu;
label_1bb1fc:
    // 0x1bb1fc: 0xc06ec86  jal         func_1BB218
    ctx->pc = 0x1BB1FCu;
    SET_GPR_U32(ctx, 31, 0x1BB204u);
    ctx->pc = 0x1BB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1FCu;
    // 0x1bb200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB218u, 0x1BB1FCu, 0x1BB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB204u;
label_1bb204:
    // 0x1bb204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb20c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB20Cu;
    ctx->pc = 0x1BB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB20Cu;
    // 0x1bb210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB214u;
    // 0x1bb214: 0x0  nop
    ctx->pc = 0x1bb214u;
    // NOP
    if (ctx->pc == 0x1bb214u) { ctx->pc = 0x1bb218u; }
}
