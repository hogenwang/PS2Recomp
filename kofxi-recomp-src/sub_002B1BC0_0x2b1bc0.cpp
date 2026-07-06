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

// Function: sub_002B1BC0
// Address: 0x2b1bc0 - 0x2b1c48
void sub_002B1BC0_0x2b1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1BC0_0x2b1bc0");
#endif

    switch (ctx->pc) {
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c34u: goto label_2b1c34;
        default: break;
    }

    ctx->pc = 0x2b1bc0u;

    // 0x2b1bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b1bc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b1bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b1bd4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1BD4u;
    {
        const bool branch_taken_0x2b1bd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BD4u;
        // 0x2b1bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bd4) {
            ctx->pc = 0x2B1BECu;
            goto label_2b1bec;
        }
    }
    ctx->pc = 0x2B1BDCu;
    // 0x2b1bdc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1be0: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x2b1be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x2b1be4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B1BE4u;
    {
        const bool branch_taken_0x2b1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BE4u;
        // 0x2b1be8: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1be4) {
            ctx->pc = 0x2B1C14u;
            goto label_2b1c14;
        }
    }
    ctx->pc = 0x2B1BECu;
label_2b1bec:
    // 0x2b1bec: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2b1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2b1bf0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B1BF0u;
    {
        const bool branch_taken_0x2b1bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BF0u;
        // 0x2b1bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1bf0) {
            ctx->pc = 0x2B1C2Cu;
            goto label_2b1c2c;
        }
    }
    ctx->pc = 0x2B1BF8u;
    // 0x2b1bf8: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B1BF8u;
    SET_GPR_U32(ctx, 31, 0x2B1C00u);
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2B1BF8u, 0x2B1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C00u;
label_2b1c00:
    // 0x2b1c00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1C00u;
    {
        const bool branch_taken_0x2b1c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1c00) {
            ctx->pc = 0x2B1C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1C00u;
            // 0x2b1c04: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1C28u;
            goto label_2b1c28;
        }
    }
    ctx->pc = 0x2B1C08u;
    // 0x2b1c08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1c0c: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x2b1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x2b1c10: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b1c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b1c14:
    // 0x2b1c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c18: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1C18u;
    SET_GPR_U32(ctx, 31, 0x2B1C20u);
    ctx->pc = 0x2B1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C18u;
    // 0x2b1c1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B1C18u, 0x2B1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C20u;
label_2b1c20:
    // 0x2b1c20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1C20u;
    {
        const bool branch_taken_0x2b1c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C20u;
        // 0x2b1c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c20) {
            ctx->pc = 0x2B1C34u;
            goto label_2b1c34;
        }
    }
    ctx->pc = 0x2B1C28u;
label_2b1c28:
    // 0x2b1c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c2c:
    // 0x2b1c2c: 0xc0ac712  jal         func_2B1C48
    ctx->pc = 0x2B1C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C34u);
    ctx->pc = 0x2B1C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C2Cu;
    // 0x2b1c30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C48u, 0x2B1C2Cu, 0x2B1C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C34u;
label_2b1c34:
    // 0x2b1c34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1c38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C40u;
        // 0x2b1c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C48u;
}
