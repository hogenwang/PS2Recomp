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

// Function: sub_00227BC0
// Address: 0x227bc0 - 0x227c00
void sub_00227BC0_0x227bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227BC0_0x227bc0");
#endif

    switch (ctx->pc) {
        case 0x227bd0u: goto label_227bd0;
        default: break;
    }

    ctx->pc = 0x227bc0u;

    // 0x227bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227bc8: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227BC8u;
    SET_GPR_U32(ctx, 31, 0x227BD0u);
    ctx->pc = 0x227D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D30u, 0x227BC8u, 0x227BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BD0u;
label_227bd0:
    // 0x227bd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227BD0u;
    {
        const bool branch_taken_0x227bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD0u;
        // 0x227bd4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bd0) {
            ctx->pc = 0x227BECu;
            goto label_227bec;
        }
    }
    ctx->pc = 0x227BD8u;
    // 0x227bd8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227bdc: 0x8dedf200  lw          $t5, -0xE00($t7)
    ctx->pc = 0x227bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227be0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x227be4: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x227be4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x227be8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x227be8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_227bec:
    // 0x227bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227bf0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x227bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x227BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BF4u;
        // 0x227bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BFCu;
    // 0x227bfc: 0x0  nop
    ctx->pc = 0x227bfcu;
    // NOP
    if (ctx->pc == 0x227bfcu) { ctx->pc = 0x227c00u; }
}
