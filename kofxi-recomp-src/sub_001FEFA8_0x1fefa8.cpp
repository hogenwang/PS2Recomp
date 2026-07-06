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

// Function: sub_001FEFA8
// Address: 0x1fefa8 - 0x1feff0
void sub_001FEFA8_0x1fefa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEFA8_0x1fefa8");
#endif

    switch (ctx->pc) {
        case 0x1fefbcu: goto label_1fefbc;
        default: break;
    }

    ctx->pc = 0x1fefa8u;

    // 0x1fefa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fefac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fefacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fefb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fefb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fefb4: 0xc07fbfc  jal         func_1FEFF0
    ctx->pc = 0x1FEFB4u;
    SET_GPR_U32(ctx, 31, 0x1FEFBCu);
    ctx->pc = 0x1FEFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFB4u;
    // 0x1fefb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFF0u, 0x1FEFB4u, 0x1FEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFBCu;
label_1fefbc:
    // 0x1fefbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEFBCu;
    {
        const bool branch_taken_0x1fefbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0x2404006b  addiu       $a0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefbc) {
            ctx->pc = 0x1FEFDCu;
            goto label_1fefdc;
        }
    }
    ctx->pc = 0x1FEFC4u;
    // 0x1fefc4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fefc8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFC8u;
    {
        const bool branch_taken_0x1fefc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FEFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC8u;
        // 0x1fefcc: 0x2843006e  slti        $v1, $v0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc8) {
            ctx->pc = 0x1FEFD8u;
            goto label_1fefd8;
        }
    }
    ctx->pc = 0x1FEFD0u;
    // 0x1fefd0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEFD0u;
    {
        const bool branch_taken_0x1fefd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD0u;
        // 0x1fefd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd0) {
            ctx->pc = 0x1FEFDCu;
            goto label_1fefdc;
        }
    }
    ctx->pc = 0x1FEFD8u;
label_1fefd8:
    // 0x1fefd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fefdc:
    // 0x1fefdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fefdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fefe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fefe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fefe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE4u;
        // 0x1fefe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEFECu;
    // 0x1fefec: 0x0  nop
    ctx->pc = 0x1fefecu;
    // NOP
    if (ctx->pc == 0x1fefecu) { ctx->pc = 0x1feff0u; }
}
