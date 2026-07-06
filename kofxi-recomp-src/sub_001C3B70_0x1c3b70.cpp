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

// Function: sub_001C3B70
// Address: 0x1c3b70 - 0x1c3c30
void sub_001C3B70_0x1c3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B70_0x1c3b70");
#endif

    switch (ctx->pc) {
        case 0x1c3ba0u: goto label_1c3ba0;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3bf4u: goto label_1c3bf4;
        case 0x1c3c04u: goto label_1c3c04;
        case 0x1c3c14u: goto label_1c3c14;
        default: break;
    }

    ctx->pc = 0x1c3b70u;

    // 0x1c3b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3b74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c3b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c3b78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c3b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c3b88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b8c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c3b98: 0xc04aeca  jal         func_12BB28
    ctx->pc = 0x1C3B98u;
    SET_GPR_U32(ctx, 31, 0x1C3BA0u);
    ctx->pc = 0x1C3B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B98u;
    // 0x1c3b9c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB28u, 0x1C3B98u, 0x1C3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BA0u;
label_1c3ba0:
    // 0x1c3ba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3ba4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c3ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c3bb0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3bb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3bb8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c3bb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3bbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3BBCu;
    {
        const bool branch_taken_0x1c3bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BBCu;
        // 0x1c3bc0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bbc) {
            ctx->pc = 0x1C3BC8u;
            goto label_1c3bc8;
        }
    }
    ctx->pc = 0x1C3BC4u;
    // 0x1c3bc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c3bc8:
    // 0x1c3bc8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3BC8u;
    {
        const bool branch_taken_0x1c3bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bc8) {
            ctx->pc = 0x1C3BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3BC8u;
            // 0x1c3bcc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3BE8u;
            goto label_1c3be8;
        }
    }
    ctx->pc = 0x1C3BD0u;
    // 0x1c3bd0: 0xc04aeca  jal         func_12BB28
    ctx->pc = 0x1C3BD0u;
    SET_GPR_U32(ctx, 31, 0x1C3BD8u);
    ctx->pc = 0x1C3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BD0u;
    // 0x1c3bd4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB28u, 0x1C3BD0u, 0x1C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3bdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c3be0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c3be4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c3be8:
    // 0x1c3be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bec: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3BECu;
    SET_GPR_U32(ctx, 31, 0x1C3BF4u);
    ctx->pc = 0x1C3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BECu;
    // 0x1c3bf0: 0x24849f90  addiu       $a0, $a0, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C3BECu, 0x1C3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BF4u;
label_1c3bf4:
    // 0x1c3bf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3bf8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3bfc: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3BFCu;
    SET_GPR_U32(ctx, 31, 0x1C3C04u);
    ctx->pc = 0x1C3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BFCu;
    // 0x1c3c00: 0x24849fa8  addiu       $a0, $a0, -0x6058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C3BFCu, 0x1C3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C04u;
label_1c3c04:
    // 0x1c3c04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3c08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3c0c: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C3C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C14u);
    ctx->pc = 0x1C3C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C0Cu;
    // 0x1c3c10: 0x24849fb8  addiu       $a0, $a0, -0x6048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C3C0Cu, 0x1C3C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C14u;
label_1c3c14:
    // 0x1c3c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c3c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c3c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c3c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3c24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C28u;
        // 0x1c3c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C30u;
}
