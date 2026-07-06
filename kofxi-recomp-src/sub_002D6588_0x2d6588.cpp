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

// Function: sub_002D6588
// Address: 0x2d6588 - 0x2d65f0
void sub_002D6588_0x2d6588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6588_0x2d6588");
#endif

    switch (ctx->pc) {
        case 0x2d65b0u: goto label_2d65b0;
        case 0x2d65c4u: goto label_2d65c4;
        case 0x2d65ccu: goto label_2d65cc;
        case 0x2d65d4u: goto label_2d65d4;
        default: break;
    }

    ctx->pc = 0x2d6588u;

    // 0x2d6588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d658c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d659c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d65a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D65A0u;
    {
        const bool branch_taken_0x2d65a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65A0u;
        // 0x2d65a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65a0) {
            ctx->pc = 0x2D65D8u;
            goto label_2d65d8;
        }
    }
    ctx->pc = 0x2D65A8u;
    // 0x2d65a8: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x2D65A8u;
    SET_GPR_U32(ctx, 31, 0x2D65B0u);
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x2D65A8u, 0x2D65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65B0u;
label_2d65b0:
    // 0x2d65b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D65B0u;
    {
        const bool branch_taken_0x2d65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d65b0) {
            ctx->pc = 0x2D65B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D65B0u;
            // 0x2d65b4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D65D8u;
            goto label_2d65d8;
        }
    }
    ctx->pc = 0x2D65B8u;
    // 0x2d65b8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2d65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2d65bc: 0xc0b228a  jal         func_2C8A28
    ctx->pc = 0x2D65BCu;
    SET_GPR_U32(ctx, 31, 0x2D65C4u);
    ctx->pc = 0x2D65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65BCu;
    // 0x2d65c0: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A28u, 0x2D65BCu, 0x2D65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65C4u;
label_2d65c4:
    // 0x2d65c4: 0xc0b3dca  jal         func_2CF728
    ctx->pc = 0x2D65C4u;
    SET_GPR_U32(ctx, 31, 0x2D65CCu);
    ctx->pc = 0x2D65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65C4u;
    // 0x2d65c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF728u, 0x2D65C4u, 0x2D65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65CCu;
label_2d65cc:
    // 0x2d65cc: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D65CCu;
    SET_GPR_U32(ctx, 31, 0x2D65D4u);
    ctx->pc = 0x2D65D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65CCu;
    // 0x2d65d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D65CCu, 0x2D65D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65D4u;
label_2d65d4:
    // 0x2d65d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d65d8:
    // 0x2d65d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d65d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d65dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d65dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d65e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d65e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d65e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D65E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65E4u;
        // 0x2d65e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D65E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D65ECu;
    // 0x2d65ec: 0x0  nop
    ctx->pc = 0x2d65ecu;
    // NOP
}
