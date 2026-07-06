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

// Function: sub_001E5C60
// Address: 0x1e5c60 - 0x1e5d18
void sub_001E5C60_0x1e5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5C60_0x1e5c60");
#endif

    switch (ctx->pc) {
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5cc8u: goto label_1e5cc8;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5cf8u: goto label_1e5cf8;
        default: break;
    }

    ctx->pc = 0x1e5c60u;

    // 0x1e5c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5c64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e5c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e5c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e5c74: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E5C74u;
    SET_GPR_U32(ctx, 31, 0x1E5C7Cu);
    ctx->pc = 0x1E5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C74u;
    // 0x1e5c78: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E90u, 0x1E5C74u, 0x1E5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C7Cu;
label_1e5c7c:
    // 0x1e5c7c: 0x8e0304e8  lw          $v1, 0x4E8($s0)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x1e5c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c8c: 0xae0604e4  sw          $a2, 0x4E4($s0)
    ctx->pc = 0x1e5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 6));
    // 0x1e5c90: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E5C90u;
    {
        const bool branch_taken_0x1e5c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C90u;
        // 0x1e5c94: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c90) {
            ctx->pc = 0x1E5CD0u;
            goto label_1e5cd0;
        }
    }
    ctx->pc = 0x1E5C98u;
    // 0x1e5c98: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5C98u;
    {
        const bool branch_taken_0x1e5c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C98u;
        // 0x1e5c9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c98) {
            ctx->pc = 0x1E5CB0u;
            goto label_1e5cb0;
        }
    }
    ctx->pc = 0x1E5CA0u;
    // 0x1e5ca0: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CA0u;
    {
        const bool branch_taken_0x1e5ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e5ca0) {
            ctx->pc = 0x1E5CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5CA0u;
            // 0x1e5ca4: 0x8e0503a8  lw          $a1, 0x3A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CC0u;
            goto label_1e5cc0;
        }
    }
    ctx->pc = 0x1E5CA8u;
    // 0x1e5ca8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E5CA8u;
    {
        const bool branch_taken_0x1e5ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CA8u;
        // 0x1e5cac: 0x8e020504  lw          $v0, 0x504($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ca8) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CB0u;
label_1e5cb0:
    // 0x1e5cb0: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E5CB0u;
    {
        const bool branch_taken_0x1e5cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5cb0) {
            ctx->pc = 0x1E5CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5CB0u;
            // 0x1e5cb4: 0x8e0503a8  lw          $a1, 0x3A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CE8u;
            goto label_1e5ce8;
        }
    }
    ctx->pc = 0x1E5CB8u;
    // 0x1e5cb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E5CB8u;
    {
        const bool branch_taken_0x1e5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CB8u;
        // 0x1e5cbc: 0x8e020504  lw          $v0, 0x504($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cb8) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CC0u;
label_1e5cc0:
    // 0x1e5cc0: 0xc079500  jal         func_1E5400
    ctx->pc = 0x1E5CC0u;
    SET_GPR_U32(ctx, 31, 0x1E5CC8u);
    ctx->pc = 0x1E5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CC0u;
    // 0x1e5cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5400u, 0x1E5CC0u, 0x1E5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CC8u;
label_1e5cc8:
    // 0x1e5cc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E5CC8u;
    {
        const bool branch_taken_0x1e5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC8u;
        // 0x1e5ccc: 0x8e020504  lw          $v0, 0x504($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cc8) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CD0u;
label_1e5cd0:
    // 0x1e5cd0: 0x8e0504f0  lw          $a1, 0x4F0($s0)
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x1e5cd4: 0xc07959c  jal         func_1E5670
    ctx->pc = 0x1E5CD4u;
    SET_GPR_U32(ctx, 31, 0x1E5CDCu);
    ctx->pc = 0x1E5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CD4u;
    // 0x1e5cd8: 0x8e0604f4  lw          $a2, 0x4F4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5670u, 0x1E5CD4u, 0x1E5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CDCu;
    {
        const bool branch_taken_0x1e5cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CDCu;
        // 0x1e5ce0: 0x8e020504  lw          $v0, 0x504($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cdc) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CE4u;
    // 0x1e5ce4: 0x0  nop
    ctx->pc = 0x1e5ce4u;
    // NOP
label_1e5ce8:
    // 0x1e5ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5cec: 0x8e0604f8  lw          $a2, 0x4F8($s0)
    ctx->pc = 0x1e5cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1272)));
    // 0x1e5cf0: 0xc0795ee  jal         func_1E57B8
    ctx->pc = 0x1E5CF0u;
    SET_GPR_U32(ctx, 31, 0x1E5CF8u);
    ctx->pc = 0x1E5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CF0u;
    // 0x1e5cf4: 0x8e0704fc  lw          $a3, 0x4FC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E57B8u, 0x1E5CF0u, 0x1E5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CF8u;
label_1e5cf8:
    // 0x1e5cf8: 0x8e020504  lw          $v0, 0x504($s0)
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_1e5cfc:
    // 0x1e5cfc: 0xae0004e4  sw          $zero, 0x4E4($s0)
    ctx->pc = 0x1e5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 0));
    // 0x1e5d00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5d08: 0xae020504  sw          $v0, 0x504($s0)
    ctx->pc = 0x1e5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 2));
    // 0x1e5d0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e5d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D10u;
        // 0x1e5d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5D18u;
}
