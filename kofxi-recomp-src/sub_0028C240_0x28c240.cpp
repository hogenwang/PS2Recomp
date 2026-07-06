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

// Function: sub_0028C240
// Address: 0x28c240 - 0x28c2b8
void sub_0028C240_0x28c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C240_0x28c240");
#endif

    switch (ctx->pc) {
        case 0x28c250u: goto label_28c250;
        case 0x28c258u: goto label_28c258;
        case 0x28c27cu: goto label_28c27c;
        default: break;
    }

    ctx->pc = 0x28c240u;

    // 0x28c240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28c244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c248: 0xc0a308c  jal         func_28C230
    ctx->pc = 0x28C248u;
    SET_GPR_U32(ctx, 31, 0x28C250u);
    ctx->pc = 0x28C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C230u, 0x28C248u, 0x28C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C250u;
label_28c250:
    // 0x28c250: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x28C250u;
    SET_GPR_U32(ctx, 31, 0x28C258u);
    ctx->pc = 0x28C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C250u;
    // 0x28c254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x28C250u, 0x28C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C258u;
label_28c258:
    // 0x28c258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c25c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C25Cu;
        // 0x28c260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C264u;
    // 0x28c264: 0x0  nop
    ctx->pc = 0x28c264u;
    // NOP
    // 0x28c268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28c274: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x28C274u;
    SET_GPR_U32(ctx, 31, 0x28C27Cu);
    ctx->pc = 0x28C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C274u;
    // 0x28c278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x28C274u, 0x28C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C27Cu;
label_28c27c:
    // 0x28c27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C27Cu;
    {
        const bool branch_taken_0x28c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c27c) {
            ctx->pc = 0x28C28Cu;
            goto label_28c28c;
        }
    }
    ctx->pc = 0x28C284u;
    // 0x28c284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C284u;
    {
        const bool branch_taken_0x28c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C284u;
        // 0x28c288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c284) {
            ctx->pc = 0x28C2A4u;
            goto label_28c2a4;
        }
    }
    ctx->pc = 0x28C28Cu;
label_28c28c:
    // 0x28c28c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c290: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x28c290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x28c294: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x28c294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x28c298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c29c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x28c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x28c2a0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_28c2a4:
    // 0x28c2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x28C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2ACu;
        // 0x28c2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C2B4u;
    // 0x28c2b4: 0x0  nop
    ctx->pc = 0x28c2b4u;
    // NOP
}
