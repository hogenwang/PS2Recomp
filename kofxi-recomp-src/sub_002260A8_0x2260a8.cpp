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

// Function: sub_002260A8
// Address: 0x2260a8 - 0x226128
void sub_002260A8_0x2260a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002260A8_0x2260a8");
#endif

    switch (ctx->pc) {
        case 0x2260e0u: goto label_2260e0;
        case 0x2260f8u: goto label_2260f8;
        default: break;
    }

    ctx->pc = 0x2260a8u;

    // 0x2260a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2260ac: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2260acu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2260b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2260b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2260b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2260b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2260b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2260bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2260bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2260C0u;
    {
        const bool branch_taken_0x2260c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260C0u;
        // 0x2260c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260c0) {
            ctx->pc = 0x226104u;
            goto label_226104;
        }
    }
    ctx->pc = 0x2260C8u;
    // 0x2260c8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2260C8u;
    {
        const bool branch_taken_0x2260c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260C8u;
        // 0x2260cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260c8) {
            ctx->pc = 0x2260ECu;
            goto label_2260ec;
        }
    }
    ctx->pc = 0x2260D0u;
    // 0x2260d0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2260d4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2260d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2260d8: 0x200702d  daddu       $t6, $s0, $zero
    ctx->pc = 0x2260d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260dc: 0x0  nop
    ctx->pc = 0x2260dcu;
    // NOP
label_2260e0:
    // 0x2260e0: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2260E0u;
    {
        const bool branch_taken_0x2260e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2260e0) {
            ctx->pc = 0x2260E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2260E0u;
            // 0x2260e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226108u;
            goto label_226108;
        }
    }
    ctx->pc = 0x2260E8u;
    // 0x2260e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2260ec:
    // 0x2260ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2260ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260f0: 0xc08981a  jal         func_226068
    ctx->pc = 0x2260F0u;
    SET_GPR_U32(ctx, 31, 0x2260F8u);
    ctx->pc = 0x2260F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260F0u;
    // 0x2260f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226068u, 0x2260F0u, 0x2260F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F8u;
label_2260f8:
    // 0x2260f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2260F8u;
    {
        const bool branch_taken_0x2260f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260F8u;
        // 0x2260fc: 0x200702d  daddu       $t6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260f8) {
            ctx->pc = 0x22611Cu;
            goto label_22611c;
        }
    }
    ctx->pc = 0x226100u;
    // 0x226100: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x226100u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226104:
    // 0x226104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226108:
    // 0x226108: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x226108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22610c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22610cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226114: 0x3e00008  jr          $ra
    ctx->pc = 0x226114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226114u;
        // 0x226118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22611Cu;
label_22611c:
    // 0x22611c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x22611Cu;
    {
        const bool branch_taken_0x22611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22611Cu;
        // 0x226120: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22611c) {
            ctx->pc = 0x2260E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2260e0;
        }
    }
    ctx->pc = 0x226124u;
    // 0x226124: 0x0  nop
    ctx->pc = 0x226124u;
    // NOP
}
