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

// Function: sub_002F0DE0
// Address: 0x2f0de0 - 0x2f0e40
void sub_002F0DE0_0x2f0de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0DE0_0x2f0de0");
#endif

    switch (ctx->pc) {
        case 0x2f0e00u: goto label_2f0e00;
        default: break;
    }

    ctx->pc = 0x2f0de0u;

    // 0x2f0de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0dec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0df4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f0df8: 0xc0bc354  jal         func_2F0D50
    ctx->pc = 0x2F0DF8u;
    SET_GPR_U32(ctx, 31, 0x2F0E00u);
    ctx->pc = 0x2F0DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DF8u;
    // 0x2f0dfc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0D50u, 0x2F0DF8u, 0x2F0E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E00u;
label_2f0e00:
    // 0x2f0e00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0E00u;
    {
        const bool branch_taken_0x2f0e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E00u;
        // 0x2f0e04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e00) {
            ctx->pc = 0x2F0E24u;
            goto label_2f0e24;
        }
    }
    ctx->pc = 0x2F0E08u;
    // 0x2f0e08: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0E08u;
    {
        const bool branch_taken_0x2f0e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0e08) {
            ctx->pc = 0x2F0E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0E08u;
            // 0x2f0e0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0E10u;
            goto label_2f0e10;
        }
    }
    ctx->pc = 0x2F0E10u;
label_2f0e10:
    // 0x2f0e10: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2f0e10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0e14: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x2f0e14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f0e18: 0x4f7823  subu        $t7, $v0, $t7
    ctx->pc = 0x2f0e18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2f0e1c: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x2f0e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x2f0e20: 0x25c4fffc  addiu       $a0, $t6, -0x4
    ctx->pc = 0x2f0e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_2f0e24:
    // 0x2f0e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0e28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E34u;
        // 0x2f0e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0E3Cu;
    // 0x2f0e3c: 0x0  nop
    ctx->pc = 0x2f0e3cu;
    // NOP
    if (ctx->pc == 0x2f0e3cu) { ctx->pc = 0x2f0e40u; }
}
