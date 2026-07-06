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

// Function: sub_001BA1D8
// Address: 0x1ba1d8 - 0x1ba240
void sub_001BA1D8_0x1ba1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA1D8_0x1ba1d8");
#endif

    switch (ctx->pc) {
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba220u: goto label_1ba220;
        case 0x1ba228u: goto label_1ba228;
        default: break;
    }

    ctx->pc = 0x1ba1d8u;

    // 0x1ba1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba1e0: 0xc06d8f0  jal         func_1B63C0
    ctx->pc = 0x1BA1E0u;
    SET_GPR_U32(ctx, 31, 0x1BA1E8u);
    ctx->pc = 0x1BA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1E0u;
    // 0x1ba1e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B63C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B63C0u, 0x1BA1E0u, 0x1BA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1E8u;
label_1ba1e8:
    // 0x1ba1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1ECu;
        // 0x1ba1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA1F4u;
    // 0x1ba1f4: 0x0  nop
    ctx->pc = 0x1ba1f4u;
    // NOP
    // 0x1ba1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba20c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA20Cu;
    SET_GPR_U32(ctx, 31, 0x1BA214u);
    ctx->pc = 0x1BA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA20Cu;
    // 0x1ba210: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA20Cu, 0x1BA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA214u;
label_1ba214:
    // 0x1ba214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba218: 0xc06e890  jal         func_1BA240
    ctx->pc = 0x1BA218u;
    SET_GPR_U32(ctx, 31, 0x1BA220u);
    ctx->pc = 0x1BA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA218u;
    // 0x1ba21c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA240u, 0x1BA218u, 0x1BA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA220u;
label_1ba220:
    // 0x1ba220: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA220u;
    SET_GPR_U32(ctx, 31, 0x1BA228u);
    ctx->pc = 0x1BA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA220u;
    // 0x1ba224: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BA220u, 0x1BA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA228u;
label_1ba228:
    // 0x1ba228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba238: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA238u;
        // 0x1ba23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA240u;
}
