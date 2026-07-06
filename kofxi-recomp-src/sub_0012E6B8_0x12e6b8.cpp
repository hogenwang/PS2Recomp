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

// Function: sub_0012E6B8
// Address: 0x12e6b8 - 0x12e718
void sub_0012E6B8_0x12e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E6B8_0x12e6b8");
#endif

    switch (ctx->pc) {
        case 0x12e6e4u: goto label_12e6e4;
        default: break;
    }

    ctx->pc = 0x12e6b8u;

    // 0x12e6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e6bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e6cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6d0: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x12e6d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6d8: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x12e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x12e6dc: 0xc04348a  jal         func_10D228
    ctx->pc = 0x12E6DCu;
    SET_GPR_U32(ctx, 31, 0x12E6E4u);
    ctx->pc = 0x12E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6DCu;
    // 0x12e6e0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D228u, 0x12E6DCu, 0x12E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6E4u;
label_12e6e4:
    // 0x12e6e4: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x12e6e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6e8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e6ec: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E6ECu;
    {
        const bool branch_taken_0x12e6ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6ECu;
        // 0x12e6f0: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6ec) {
            ctx->pc = 0x12E700u;
            goto label_12e700;
        }
    }
    ctx->pc = 0x12E6F4u;
    // 0x12e6f4: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x12e6f8: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E6F8u;
    {
        const bool branch_taken_0x12e6f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6f8) {
            ctx->pc = 0x12E6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E6F8u;
            // 0x12e6fc: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E700u;
            goto label_12e700;
        }
    }
    ctx->pc = 0x12E700u;
label_12e700:
    // 0x12e700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e70c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E70Cu;
        // 0x12e710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E714u;
    // 0x12e714: 0x0  nop
    ctx->pc = 0x12e714u;
    // NOP
}
