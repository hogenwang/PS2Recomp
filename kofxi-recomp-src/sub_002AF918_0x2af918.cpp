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

// Function: sub_002AF918
// Address: 0x2af918 - 0x2af988
void sub_002AF918_0x2af918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF918_0x2af918");
#endif

    switch (ctx->pc) {
        case 0x2af92cu: goto label_2af92c;
        case 0x2af950u: goto label_2af950;
        case 0x2af964u: goto label_2af964;
        default: break;
    }

    ctx->pc = 0x2af918u;

    // 0x2af918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af924: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2AF924u;
    SET_GPR_U32(ctx, 31, 0x2AF92Cu);
    ctx->pc = 0x2AF928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF924u;
    // 0x2af928: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2AF924u, 0x2AF92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF92Cu;
label_2af92c:
    // 0x2af92c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af930: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF930u;
    {
        const bool branch_taken_0x2af930 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF930u;
        // 0x2af934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af930) {
            ctx->pc = 0x2AF958u;
            goto label_2af958;
        }
    }
    ctx->pc = 0x2AF938u;
    // 0x2af938: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2af938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af93c: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x2af93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2af940: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2af944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af948: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AF948u;
    SET_GPR_U32(ctx, 31, 0x2AF950u);
    ctx->pc = 0x2AF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF948u;
    // 0x2af94c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AF948u, 0x2AF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF950u;
label_2af950:
    // 0x2af950: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF950u;
    {
        const bool branch_taken_0x2af950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF950u;
        // 0x2af954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af950) {
            ctx->pc = 0x2AF978u;
            goto label_2af978;
        }
    }
    ctx->pc = 0x2AF958u;
label_2af958:
    // 0x2af958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af95c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AF95Cu;
    SET_GPR_U32(ctx, 31, 0x2AF964u);
    ctx->pc = 0x2AF960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF95Cu;
    // 0x2af960: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AF95Cu, 0x2AF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF964u;
label_2af964:
    // 0x2af964: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2af968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af96c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2af96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2af970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2af970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af974: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x2af974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
label_2af978:
    // 0x2af978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af980: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF980u;
        // 0x2af984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF988u;
}
