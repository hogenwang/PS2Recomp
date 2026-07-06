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

// Function: sub_0028CAD0
// Address: 0x28cad0 - 0x28cb28
void sub_0028CAD0_0x28cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CAD0_0x28cad0");
#endif

    switch (ctx->pc) {
        case 0x28cae0u: goto label_28cae0;
        case 0x28cb04u: goto label_28cb04;
        default: break;
    }

    ctx->pc = 0x28cad0u;

    // 0x28cad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cad8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28CAD8u;
    SET_GPR_U32(ctx, 31, 0x28CAE0u);
    ctx->pc = 0x28CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAD8u;
    // 0x28cadc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x28CAD8u, 0x28CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAE0u;
label_28cae0:
    // 0x28cae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28cae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cae4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28CAE4u;
    {
        const bool branch_taken_0x28cae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cae4) {
            ctx->pc = 0x28CAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CAE4u;
            // 0x28cae8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB0Cu;
            goto label_28cb0c;
        }
    }
    ctx->pc = 0x28CAECu;
    // 0x28caec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28caf0: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x28caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x28caf4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28caf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28caf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cafc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28CAFCu;
    SET_GPR_U32(ctx, 31, 0x28CB04u);
    ctx->pc = 0x28CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAFCu;
    // 0x28cb00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28CAFCu, 0x28CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB04u;
label_28cb04:
    // 0x28cb04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CB04u;
    {
        const bool branch_taken_0x28cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB04u;
        // 0x28cb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb04) {
            ctx->pc = 0x28CB18u;
            goto label_28cb18;
        }
    }
    ctx->pc = 0x28CB0Cu;
label_28cb0c:
    // 0x28cb0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28cb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb10: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x28cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x28cb14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_28cb18:
    // 0x28cb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB1Cu;
        // 0x28cb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB24u;
    // 0x28cb24: 0x0  nop
    ctx->pc = 0x28cb24u;
    // NOP
}
