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

// Function: sub_001E54D8
// Address: 0x1e54d8 - 0x1e5540
void sub_001E54D8_0x1e54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E54D8_0x1e54d8");
#endif

    switch (ctx->pc) {
        case 0x1e54ecu: goto label_1e54ec;
        case 0x1e5520u: goto label_1e5520;
        case 0x1e5528u: goto label_1e5528;
        default: break;
    }

    ctx->pc = 0x1e54d8u;

    // 0x1e54d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e54d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e54dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e54e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e54e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e54e4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E54E4u;
    SET_GPR_U32(ctx, 31, 0x1E54ECu);
    ctx->pc = 0x1E54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54E4u;
    // 0x1e54e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E54E4u, 0x1E54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54ECu;
label_1e54ec:
    // 0x1e54ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e54f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e54f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54f4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E54F4u;
    {
        const bool branch_taken_0x1e54f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54F4u;
        // 0x1e54f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54f4) {
            ctx->pc = 0x1E5518u;
            goto label_1e5518;
        }
    }
    ctx->pc = 0x1E54FCu;
    // 0x1e54fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e5504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5508: 0x2484e200  addiu       $a0, $a0, -0x1E00
    ctx->pc = 0x1e5508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959616));
    // 0x1e550c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E550Cu;
    ctx->pc = 0x1E5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E550Cu;
    // 0x1e5510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5514u;
    // 0x1e5514: 0x0  nop
    ctx->pc = 0x1e5514u;
    // NOP
label_1e5518:
    // 0x1e5518: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1E5518u;
    SET_GPR_U32(ctx, 31, 0x1E5520u);
    ctx->pc = 0x1E53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E53A0u, 0x1E5518u, 0x1E5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5520u;
label_1e5520:
    // 0x1e5520: 0xc079550  jal         func_1E5540
    ctx->pc = 0x1E5520u;
    SET_GPR_U32(ctx, 31, 0x1E5528u);
    ctx->pc = 0x1E5524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5520u;
    // 0x1e5524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5540u, 0x1E5520u, 0x1E5528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5528u;
label_1e5528:
    // 0x1e5528: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e552c: 0xae0204ec  sw          $v0, 0x4EC($s0)
    ctx->pc = 0x1e552cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 2));
    // 0x1e5530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e5530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5538: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5538u;
        // 0x1e553c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5540u;
}
