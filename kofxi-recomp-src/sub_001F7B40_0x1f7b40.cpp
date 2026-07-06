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

// Function: sub_001F7B40
// Address: 0x1f7b40 - 0x1f7be0
void sub_001F7B40_0x1f7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7B40_0x1f7b40");
#endif

    switch (ctx->pc) {
        case 0x1f7bb8u: goto label_1f7bb8;
        case 0x1f7bc8u: goto label_1f7bc8;
        default: break;
    }

    ctx->pc = 0x1f7b40u;

    // 0x1f7b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7b44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7b58: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f7b5c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7B5Cu;
    {
        const bool branch_taken_0x1f7b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B5Cu;
        // 0x1f7b60: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b5c) {
            ctx->pc = 0x1F7BA8u;
            goto label_1f7ba8;
        }
    }
    ctx->pc = 0x1F7B64u;
    // 0x1f7b64: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1f7b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7b68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7B68u;
    {
        const bool branch_taken_0x1f7b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B68u;
        // 0x1f7b6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b68) {
            ctx->pc = 0x1F7B88u;
            goto label_1f7b88;
        }
    }
    ctx->pc = 0x1F7B70u;
    // 0x1f7b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7b74: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7B74u;
    {
        const bool branch_taken_0x1f7b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B74u;
        // 0x1f7b78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b74) {
            ctx->pc = 0x1F7BA0u;
            goto label_1f7ba0;
        }
    }
    ctx->pc = 0x1F7B7Cu;
    // 0x1f7b7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7B7Cu;
    {
        const bool branch_taken_0x1f7b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B7Cu;
        // 0x1f7b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b7c) {
            ctx->pc = 0x1F7BD0u;
            goto label_1f7bd0;
        }
    }
    ctx->pc = 0x1F7B84u;
    // 0x1f7b84: 0x0  nop
    ctx->pc = 0x1f7b84u;
    // NOP
label_1f7b88:
    // 0x1f7b88: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7B88u;
    {
        const bool branch_taken_0x1f7b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B88u;
        // 0x1f7b8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b88) {
            ctx->pc = 0x1F7BB0u;
            goto label_1f7bb0;
        }
    }
    ctx->pc = 0x1F7B90u;
    // 0x1f7b90: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7B90u;
    {
        const bool branch_taken_0x1f7b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B90u;
        // 0x1f7b94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b90) {
            ctx->pc = 0x1F7BB0u;
            goto label_1f7bb0;
        }
    }
    ctx->pc = 0x1F7B98u;
    // 0x1f7b98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F7B98u;
    {
        const bool branch_taken_0x1f7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B98u;
        // 0x1f7b9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b98) {
            ctx->pc = 0x1F7BD0u;
            goto label_1f7bd0;
        }
    }
    ctx->pc = 0x1F7BA0u;
label_1f7ba0:
    // 0x1f7ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7BA0u;
    {
        const bool branch_taken_0x1f7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA0u;
        // 0x1f7ba4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ba0) {
            ctx->pc = 0x1F7BC8u;
            goto label_1f7bc8;
        }
    }
    ctx->pc = 0x1F7BA8u;
label_1f7ba8:
    // 0x1f7ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7BA8u;
    {
        const bool branch_taken_0x1f7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA8u;
        // 0x1f7bac: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ba8) {
            ctx->pc = 0x1F7BC8u;
            goto label_1f7bc8;
        }
    }
    ctx->pc = 0x1F7BB0u;
label_1f7bb0:
    // 0x1f7bb0: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x1F7BB0u;
    SET_GPR_U32(ctx, 31, 0x1F7BB8u);
    ctx->pc = 0x1F7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BB0u;
    // 0x1f7bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x1F7BB0u, 0x1F7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7BB8u;
    {
        const bool branch_taken_0x1f7bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB8u;
        // 0x1f7bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bb8) {
            ctx->pc = 0x1F7BC8u;
            goto label_1f7bc8;
        }
    }
    ctx->pc = 0x1F7BC0u;
    // 0x1f7bc0: 0xc07e32a  jal         func_1F8CA8
    ctx->pc = 0x1F7BC0u;
    SET_GPR_U32(ctx, 31, 0x1F7BC8u);
    ctx->pc = 0x1F7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BC0u;
    // 0x1f7bc4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8CA8u, 0x1F7BC0u, 0x1F7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BC8u;
label_1f7bc8:
    // 0x1f7bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f7bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7bd0:
    // 0x1f7bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD8u;
        // 0x1f7bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BE0u;
}
