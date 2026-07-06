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

// Function: sub_001259A8
// Address: 0x1259a8 - 0x125a00
void sub_001259A8_0x1259a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001259A8_0x1259a8");
#endif

    switch (ctx->pc) {
        case 0x1259d0u: goto label_1259d0;
        default: break;
    }

    ctx->pc = 0x1259a8u;

    // 0x1259a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1259a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1259ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1259acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1259b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1259b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1259b4: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x1259b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1259b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1259bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1259bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259c0: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x1259c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x1259c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1259c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259c8: 0xc043506  jal         func_10D418
    ctx->pc = 0x1259C8u;
    SET_GPR_U32(ctx, 31, 0x1259D0u);
    ctx->pc = 0x1259CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259C8u;
    // 0x1259cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D418u, 0x1259C8u, 0x1259D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259D0u;
label_1259d0:
    // 0x1259d0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1259d4: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1259D4u;
    {
        const bool branch_taken_0x1259d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1259d4) {
            ctx->pc = 0x1259D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1259D4u;
            // 0x1259d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1259ECu;
            goto label_1259ec;
        }
    }
    ctx->pc = 0x1259DCu;
    // 0x1259dc: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x1259e0: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1259E0u;
    {
        const bool branch_taken_0x1259e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1259e0) {
            ctx->pc = 0x1259E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1259E0u;
            // 0x1259e4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1259E8u;
            goto label_1259e8;
        }
    }
    ctx->pc = 0x1259E8u;
label_1259e8:
    // 0x1259e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1259e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1259ec:
    // 0x1259ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1259ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1259f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1259f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1259f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1259F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1259F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259F4u;
        // 0x1259f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1259FCu;
    // 0x1259fc: 0x0  nop
    ctx->pc = 0x1259fcu;
    // NOP
}
