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

// Function: sub_001B85C8
// Address: 0x1b85c8 - 0x1b8650
void sub_001B85C8_0x1b85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B85C8_0x1b85c8");
#endif

    switch (ctx->pc) {
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b863cu: goto label_1b863c;
        default: break;
    }

    ctx->pc = 0x1b85c8u;

    // 0x1b85c8: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b85cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b85ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b85d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b85d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b85d8: 0xc06fe74  jal         func_1BF9D0
    ctx->pc = 0x1B85D8u;
    SET_GPR_U32(ctx, 31, 0x1B85E0u);
    ctx->pc = 0x1B85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85D8u;
    // 0x1b85dc: 0x248485b0  addiu       $a0, $a0, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF9D0u, 0x1B85D8u, 0x1B85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85E0u;
label_1b85e0:
    // 0x1b85e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b85e4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b85e8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b85ec: 0x24847fc8  addiu       $a0, $a0, 0x7FC8
    ctx->pc = 0x1b85ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32712));
    // 0x1b85f0: 0x24a570f8  addiu       $a1, $a1, 0x70F8
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28920));
    // 0x1b85f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b85f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85f8: 0x806f892  j           func_1BE248
    ctx->pc = 0x1B85F8u;
    ctx->pc = 0x1B85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85F8u;
    // 0x1b85fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    sub_001BE248_0x1be248(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8600u;
    // 0x1b8600: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b8604: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8604u;
        // 0x1b8608: 0x8c62c360  lw          $v0, -0x3CA0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951776)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B860Cu;
    // 0x1b860c: 0x0  nop
    ctx->pc = 0x1b860cu;
    // NOP
    // 0x1b8610: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b8614: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8614u;
        // 0x1b8618: 0xac44c360  sw          $a0, -0x3CA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B861Cu;
    // 0x1b861c: 0x0  nop
    ctx->pc = 0x1b861cu;
    // NOP
    // 0x1b8620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b862c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B862Cu;
    SET_GPR_U32(ctx, 31, 0x1B8634u);
    ctx->pc = 0x1B8630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B862Cu;
    // 0x1b8630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B862Cu, 0x1B8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8634u;
label_1b8634:
    // 0x1b8634: 0xc06e194  jal         func_1B8650
    ctx->pc = 0x1B8634u;
    SET_GPR_U32(ctx, 31, 0x1B863Cu);
    ctx->pc = 0x1B8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8634u;
    // 0x1b8638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8650u, 0x1B8634u, 0x1B863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B863Cu;
label_1b863c:
    // 0x1b863c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b863cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8644: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B8644u;
    ctx->pc = 0x1B8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8644u;
    // 0x1b8648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B864Cu;
    // 0x1b864c: 0x0  nop
    ctx->pc = 0x1b864cu;
    // NOP
    if (ctx->pc == 0x1b864cu) { ctx->pc = 0x1b8650u; }
}
