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

// Function: sub_001ABDC8
// Address: 0x1abdc8 - 0x1abe08
void sub_001ABDC8_0x1abdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABDC8_0x1abdc8");
#endif

    switch (ctx->pc) {
        case 0x1abdf0u: goto label_1abdf0;
        default: break;
    }

    ctx->pc = 0x1abdc8u;

    // 0x1abdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abdcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1abdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1abdd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abdd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abddc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1abde0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABDE0u;
    {
        const bool branch_taken_0x1abde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abde0) {
            ctx->pc = 0x1ABDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABDE0u;
            // 0x1abde4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABDFCu;
            goto label_1abdfc;
        }
    }
    ctx->pc = 0x1ABDE8u;
    // 0x1abde8: 0xc06f738  jal         func_1BDCE0
    ctx->pc = 0x1ABDE8u;
    SET_GPR_U32(ctx, 31, 0x1ABDF0u);
    ctx->pc = 0x1ABDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDE8u;
    // 0x1abdec: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE0u, 0x1ABDE8u, 0x1ABDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDF0u;
label_1abdf0:
    // 0x1abdf0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1abdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1abdf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1abdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1abdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abdfc:
    // 0x1abdfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abe00: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE00u;
        // 0x1abe04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE08u;
}
