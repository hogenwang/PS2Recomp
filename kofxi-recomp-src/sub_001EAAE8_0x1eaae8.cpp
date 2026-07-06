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

// Function: sub_001EAAE8
// Address: 0x1eaae8 - 0x1eab78
void sub_001EAAE8_0x1eaae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAAE8_0x1eaae8");
#endif

    switch (ctx->pc) {
        case 0x1eab10u: goto label_1eab10;
        default: break;
    }

    ctx->pc = 0x1eaae8u;

    // 0x1eaae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eaaec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eaaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1eaaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1eaaf4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x1eaaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1eaaf8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eaaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1eaafc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eab00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eab00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab04: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1eab04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eab08: 0xc07aade  jal         func_1EAB78
    ctx->pc = 0x1EAB08u;
    SET_GPR_U32(ctx, 31, 0x1EAB10u);
    ctx->pc = 0x1EAB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB08u;
    // 0x1eab0c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB78u, 0x1EAB08u, 0x1EAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB10u;
label_1eab10:
    // 0x1eab10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eab14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab18: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1eab18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1eab1c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAB1Cu;
    {
        const bool branch_taken_0x1eab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab1c) {
            ctx->pc = 0x1EAB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB1Cu;
            // 0x1eab20: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB3Cu;
            goto label_1eab3c;
        }
    }
    ctx->pc = 0x1EAB24u;
    // 0x1eab24: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1eab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eab28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eab2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1eab2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eab30: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EAB30u;
    {
        const bool branch_taken_0x1eab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab30) {
            ctx->pc = 0x1EAB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB30u;
            // 0x1eab34: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB68u;
            goto label_1eab68;
        }
    }
    ctx->pc = 0x1EAB38u;
    // 0x1eab38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1eab3c:
    // 0x1eab3c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1eab3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1eab40: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAB40u;
    {
        const bool branch_taken_0x1eab40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab40) {
            ctx->pc = 0x1EAB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB40u;
            // 0x1eab44: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB60u;
            goto label_1eab60;
        }
    }
    ctx->pc = 0x1EAB48u;
    // 0x1eab48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1eab4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eab50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1eab50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eab54: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAB54u;
    {
        const bool branch_taken_0x1eab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab54) {
            ctx->pc = 0x1EAB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB54u;
            // 0x1eab58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB68u;
            goto label_1eab68;
        }
    }
    ctx->pc = 0x1EAB5Cu;
    // 0x1eab5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1eab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1eab60:
    // 0x1eab60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1eab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1eab64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1eab64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eab68:
    // 0x1eab68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eab6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB6Cu;
        // 0x1eab70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAB74u;
    // 0x1eab74: 0x0  nop
    ctx->pc = 0x1eab74u;
    // NOP
    if (ctx->pc == 0x1eab74u) { ctx->pc = 0x1eab78u; }
}
