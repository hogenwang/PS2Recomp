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

// Function: sub_0012A088
// Address: 0x12a088 - 0x12a0f8
void sub_0012A088_0x12a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A088_0x12a088");
#endif

    switch (ctx->pc) {
        case 0x12a094u: goto label_12a094;
        case 0x12a0acu: goto label_12a0ac;
        default: break;
    }

    ctx->pc = 0x12a088u;

    // 0x12a088: 0x908c0000  lbu         $t4, 0x0($a0)
    ctx->pc = 0x12a088u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a08c: 0x11800017  beqz        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x12A08Cu;
    {
        const bool branch_taken_0x12a08c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A08Cu;
        // 0x12a090: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a08c) {
            ctx->pc = 0x12A0ECu;
            goto label_12a0ec;
        }
    }
    ctx->pc = 0x12A094u;
label_12a094:
    // 0x12a094: 0x90ae0000  lbu         $t6, 0x0($a1)
    ctx->pc = 0x12a094u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a098: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12a098u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a09c: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x12A09Cu;
    {
        const bool branch_taken_0x12a09c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A09Cu;
        // 0x12a0a0: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a09c) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A0A4u;
    // 0x12a0a4: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x12a0a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12a0a8: 0xc6603  sra         $t4, $t4, 24
    ctx->pc = 0x12a0a8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 24));
label_12a0ac:
    // 0x12a0ac: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x12a0acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x12a0b0: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12a0b4: 0x118f0006  beq         $t4, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A0B4u;
    {
        const bool branch_taken_0x12a0b4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x12A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0B4u;
        // 0x12a0b8: 0xe7e00  sll         $t7, $t6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0b4) {
            ctx->pc = 0x12A0D0u;
            goto label_12a0d0;
        }
    }
    ctx->pc = 0x12A0BCu;
    // 0x12a0bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12a0bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12a0c0: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x12a0c0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12a0c4: 0x15c0fff9  bnez        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12A0C4u;
    {
        const bool branch_taken_0x12a0c4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0C4u;
        // 0x12a0c8: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0c4) {
            ctx->pc = 0x12A0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a0ac;
        }
    }
    ctx->pc = 0x12A0CCu;
label_12a0cc:
    // 0x12a0cc: 0xe7e00  sll         $t7, $t6, 24
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_12a0d0:
    // 0x12a0d0: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12a0d0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12a0d4: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A0D4u;
    {
        const bool branch_taken_0x12a0d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a0d4) {
            ctx->pc = 0x12A0ECu;
            goto label_12a0ec;
        }
    }
    ctx->pc = 0x12A0DCu;
    // 0x12a0dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12a0e0: 0x908f0000  lbu         $t7, 0x0($a0)
    ctx->pc = 0x12a0e0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a0e4: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12A0E4u;
    {
        const bool branch_taken_0x12a0e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0E4u;
        // 0x12a0e8: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0e4) {
            ctx->pc = 0x12A094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a094;
        }
    }
    ctx->pc = 0x12A0ECu;
label_12a0ec:
    // 0x12a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0ECu;
        // 0x12a0f0: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A0F4u;
    // 0x12a0f4: 0x0  nop
    ctx->pc = 0x12a0f4u;
    // NOP
    if (ctx->pc == 0x12a0f4u) { ctx->pc = 0x12a0f8u; }
}
