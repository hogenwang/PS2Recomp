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

// Function: sub_001E8B20
// Address: 0x1e8b20 - 0x1e8bc8
void sub_001E8B20_0x1e8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8B20_0x1e8b20");
#endif

    switch (ctx->pc) {
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b78u: goto label_1e8b78;
        default: break;
    }

    ctx->pc = 0x1e8b20u;

    // 0x1e8b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e8b30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8b38: 0x26222054  addiu       $v0, $s1, 0x2054
    ctx->pc = 0x1e8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8276));
    // 0x1e8b3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e8b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e8b40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8b44: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1e8b44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e8b48: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1e8b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e8b4c: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1E8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B54u);
    ctx->pc = 0x1E8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B4Cu;
    // 0x1e8b50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1E8B4Cu, 0x1E8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B54u;
label_1e8b54:
    // 0x1e8b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b58: 0x10530013  beq         $v0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8B58u;
    {
        const bool branch_taken_0x1e8b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B58u;
        // 0x1e8b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b58) {
            ctx->pc = 0x1E8BA8u;
            goto label_1e8ba8;
        }
    }
    ctx->pc = 0x1E8B60u;
    // 0x1e8b60: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1E8B60u;
    SET_GPR_U32(ctx, 31, 0x1E8B68u);
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1E8B60u, 0x1E8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B68u;
label_1e8b68:
    // 0x1e8b68: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E8B68u;
    {
        const bool branch_taken_0x1e8b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e8b68) {
            ctx->pc = 0x1E8B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8B68u;
            // 0x1e8b6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8BACu;
            goto label_1e8bac;
        }
    }
    ctx->pc = 0x1E8B70u;
    // 0x1e8b70: 0xc07a2f2  jal         func_1E8BC8
    ctx->pc = 0x1E8B70u;
    SET_GPR_U32(ctx, 31, 0x1E8B78u);
    ctx->pc = 0x1E8B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B70u;
    // 0x1e8b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8BC8u, 0x1E8B70u, 0x1E8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B78u;
label_1e8b78:
    // 0x1e8b78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8B78u;
    {
        const bool branch_taken_0x1e8b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B78u;
        // 0x1e8b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b78) {
            ctx->pc = 0x1E8BA8u;
            goto label_1e8ba8;
        }
    }
    ctx->pc = 0x1E8B80u;
    // 0x1e8b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e8b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e8b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8b94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e8b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8b98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8b9c: 0x807ad50  j           func_1EB540
    ctx->pc = 0x1E8B9Cu;
    ctx->pc = 0x1E8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B9Cu;
    // 0x1e8ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    sub_001EB540_0x1eb540(rdram, ctx, runtime); return;
    ctx->pc = 0x1E8BA4u;
    // 0x1e8ba4: 0x0  nop
    ctx->pc = 0x1e8ba4u;
    // NOP
label_1e8ba8:
    // 0x1e8ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8bac:
    // 0x1e8bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e8bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e8bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BBCu;
        // 0x1e8bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8BC4u;
    // 0x1e8bc4: 0x0  nop
    ctx->pc = 0x1e8bc4u;
    // NOP
    if (ctx->pc == 0x1e8bc4u) { ctx->pc = 0x1e8bc8u; }
}
