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

// Function: sub_001ECDD0
// Address: 0x1ecdd0 - 0x1ece20
void sub_001ECDD0_0x1ecdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECDD0_0x1ecdd0");
#endif

    switch (ctx->pc) {
        case 0x1ecdf4u: goto label_1ecdf4;
        default: break;
    }

    ctx->pc = 0x1ecdd0u;

    // 0x1ecdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecdd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecddc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ecddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ecde0: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1ecde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1ecde4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECDE4u;
    {
        const bool branch_taken_0x1ecde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDE4u;
        // 0x1ecde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecde4) {
            ctx->pc = 0x1ECE0Cu;
            goto label_1ece0c;
        }
    }
    ctx->pc = 0x1ECDECu;
    // 0x1ecdec: 0xc07bed0  jal         func_1EFB40
    ctx->pc = 0x1ECDECu;
    SET_GPR_U32(ctx, 31, 0x1ECDF4u);
    ctx->pc = 0x1EFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFB40u, 0x1ECDECu, 0x1ECDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDF4u;
label_1ecdf4:
    // 0x1ecdf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECDF4u;
    {
        const bool branch_taken_0x1ecdf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ecdf4) {
            ctx->pc = 0x1ECDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECDF4u;
            // 0x1ecdf8: 0x8e023708  lw          $v0, 0x3708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECE08u;
            goto label_1ece08;
        }
    }
    ctx->pc = 0x1ECDFCu;
    // 0x1ecdfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECDFCu;
    {
        const bool branch_taken_0x1ecdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDFCu;
        // 0x1ece00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdfc) {
            ctx->pc = 0x1ECE0Cu;
            goto label_1ece0c;
        }
    }
    ctx->pc = 0x1ECE04u;
    // 0x1ece04: 0x0  nop
    ctx->pc = 0x1ece04u;
    // NOP
label_1ece08:
    // 0x1ece08: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ece08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ece0c:
    // 0x1ece0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ece10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ece14: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE14u;
        // 0x1ece18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE1Cu;
    // 0x1ece1c: 0x0  nop
    ctx->pc = 0x1ece1cu;
    // NOP
}
