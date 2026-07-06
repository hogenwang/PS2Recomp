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

// Function: sub_001CE030
// Address: 0x1ce030 - 0x1ce0f0
void sub_001CE030_0x1ce030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE030_0x1ce030");
#endif

    switch (ctx->pc) {
        case 0x1ce050u: goto label_1ce050;
        case 0x1ce090u: goto label_1ce090;
        case 0x1ce0e0u: goto label_1ce0e0;
        default: break;
    }

    ctx->pc = 0x1ce030u;

    // 0x1ce030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce034: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1ce034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ce038: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE038u;
    {
        const bool branch_taken_0x1ce038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE038u;
        // 0x1ce03c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce038) {
            ctx->pc = 0x1CE058u;
            goto label_1ce058;
        }
    }
    ctx->pc = 0x1CE040u;
    // 0x1ce040: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce044: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE044u;
    {
        const bool branch_taken_0x1ce044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE044u;
        // 0x1ce048: 0x2484be60  addiu       $a0, $a0, -0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce044) {
            ctx->pc = 0x1CE0D8u;
            goto label_1ce0d8;
        }
    }
    ctx->pc = 0x1CE04Cu;
    // 0x1ce04c: 0x0  nop
    ctx->pc = 0x1ce04cu;
    // NOP
label_1ce050:
    // 0x1ce050: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE050u;
    {
        const bool branch_taken_0x1ce050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE050u;
        // 0x1ce054: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce050) {
            ctx->pc = 0x1CE0C4u;
            goto label_1ce0c4;
        }
    }
    ctx->pc = 0x1CE058u;
label_1ce058:
    // 0x1ce058: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ce05c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ce060: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ce064: 0x246abe88  addiu       $t2, $v1, -0x4178
    ctx->pc = 0x1ce064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950536));
    // 0x1ce068: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ce068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ce06c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ce06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce070: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1ce074: 0x24847d60  addiu       $a0, $a0, 0x7D60
    ctx->pc = 0x1ce074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32096));
    // 0x1ce078: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ce078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ce07c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce080: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE080u;
    {
        const bool branch_taken_0x1ce080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE080u;
        // 0x1ce084: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce080) {
            ctx->pc = 0x1CE0B4u;
            goto label_1ce0b4;
        }
    }
    ctx->pc = 0x1CE088u;
    // 0x1ce088: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ce088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ce08c: 0x0  nop
    ctx->pc = 0x1ce08cu;
    // NOP
label_1ce090:
    // 0x1ce090: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1ce090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1ce094: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x1ce094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ce098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE098u;
    {
        const bool branch_taken_0x1ce098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE098u;
        // 0x1ce09c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce098) {
            ctx->pc = 0x1CE0C4u;
            goto label_1ce0c4;
        }
    }
    ctx->pc = 0x1CE0A0u;
    // 0x1ce0a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce0a4: 0x0  nop
    ctx->pc = 0x1ce0a4u;
    // NOP
    // 0x1ce0a8: 0x0  nop
    ctx->pc = 0x1ce0a8u;
    // NOP
    // 0x1ce0ac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE0ACu;
            // 0x1ce0b0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce090;
        }
    }
    ctx->pc = 0x1CE0B4u;
label_1ce0b4:
    // 0x1ce0b4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ce0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ce0b8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1CE0B8u;
    {
        const bool branch_taken_0x1ce0b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0B8u;
        // 0x1ce0bc: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0b8) {
            ctx->pc = 0x1CE050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce050;
        }
    }
    ctx->pc = 0x1CE0C0u;
    // 0x1ce0c0: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x1ce0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_1ce0c4:
    // 0x1ce0c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce0c8: 0x55220006  bnel        $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE0C8u;
    {
        const bool branch_taken_0x1ce0c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce0c8) {
            ctx->pc = 0x1CE0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE0C8u;
            // 0x1ce0cc: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE0E4u;
            goto label_1ce0e4;
        }
    }
    ctx->pc = 0x1CE0D0u;
    // 0x1ce0d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ce0d4: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x1ce0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
label_1ce0d8:
    // 0x1ce0d8: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1CE0D8u;
    SET_GPR_U32(ctx, 31, 0x1CE0E0u);
    ctx->pc = 0x1CDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD20u, 0x1CE0D8u, 0x1CE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0E0u;
label_1ce0e0:
    // 0x1ce0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ce0e4:
    // 0x1ce0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0E8u;
        // 0x1ce0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE0F0u;
}
