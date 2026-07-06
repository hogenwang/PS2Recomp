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

// Function: sub_00231C90
// Address: 0x231c90 - 0x231d28
void sub_00231C90_0x231c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C90_0x231c90");
#endif

    switch (ctx->pc) {
        case 0x231cfcu: goto label_231cfc;
        case 0x231d10u: goto label_231d10;
        default: break;
    }

    ctx->pc = 0x231c90u;

    // 0x231c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231c94: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231ca0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x231ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ca4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x231ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ca8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CA8u;
    {
        const bool branch_taken_0x231ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CA8u;
        // 0x231cac: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ca8) {
            ctx->pc = 0x231CBCu;
            goto label_231cbc;
        }
    }
    ctx->pc = 0x231CB0u;
    // 0x231cb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231cb4: 0x14e20017  bne         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x231CB4u;
    {
        const bool branch_taken_0x231cb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x231CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CB4u;
        // 0x231cb8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cb4) {
            ctx->pc = 0x231D14u;
            goto label_231d14;
        }
    }
    ctx->pc = 0x231CBCu;
label_231cbc:
    // 0x231cbc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x231CBCu;
    {
        const bool branch_taken_0x231cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231cbc) {
            ctx->pc = 0x231CFCu;
            goto label_231cfc;
        }
    }
    ctx->pc = 0x231CC4u;
    // 0x231cc4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CC4u;
    {
        const bool branch_taken_0x231cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x231cc4) {
            ctx->pc = 0x231CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CC4u;
            // 0x231cc8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CD8u;
            goto label_231cd8;
        }
    }
    ctx->pc = 0x231CCCu;
    // 0x231ccc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231cd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231CD0u;
    {
        const bool branch_taken_0x231cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD0u;
        // 0x231cd4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd0) {
            ctx->pc = 0x231CFCu;
            goto label_231cfc;
        }
    }
    ctx->pc = 0x231CD8u;
label_231cd8:
    // 0x231cd8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x231cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x231cdc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x231CDCu;
    {
        const bool branch_taken_0x231cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CDCu;
        // 0x231ce0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cdc) {
            ctx->pc = 0x231D14u;
            goto label_231d14;
        }
    }
    ctx->pc = 0x231CE4u;
    // 0x231ce4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231ce8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x231cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x231cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cf4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231CF4u;
    SET_GPR_U32(ctx, 31, 0x231CFCu);
    ctx->pc = 0x231CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CF4u;
    // 0x231cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231CF4u, 0x231CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CFCu;
label_231cfc:
    // 0x231cfc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CFCu;
    {
        const bool branch_taken_0x231cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CFCu;
        // 0x231d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cfc) {
            ctx->pc = 0x231D10u;
            goto label_231d10;
        }
    }
    ctx->pc = 0x231D04u;
    // 0x231d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d08: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231D08u;
    SET_GPR_U32(ctx, 31, 0x231D10u);
    ctx->pc = 0x231D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D08u;
    // 0x231d0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231D08u, 0x231D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D10u;
label_231d10:
    // 0x231d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231d14:
    // 0x231d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d20: 0x3e00008  jr          $ra
    ctx->pc = 0x231D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D20u;
        // 0x231d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D28u;
}
