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

// Function: sub_001CB6B0
// Address: 0x1cb6b0 - 0x1cb780
void sub_001CB6B0_0x1cb6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB6B0_0x1cb6b0");
#endif

    switch (ctx->pc) {
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb76cu: goto label_1cb76c;
        default: break;
    }

    ctx->pc = 0x1cb6b0u;

    // 0x1cb6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6bc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB6BCu;
    {
        const bool branch_taken_0x1cb6bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6bc) {
            ctx->pc = 0x1CB6E8u;
            goto label_1cb6e8;
        }
    }
    ctx->pc = 0x1CB6C4u;
    // 0x1cb6c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb6c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb6d0: 0x2484ba28  addiu       $a0, $a0, -0x45D8
    ctx->pc = 0x1cb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949416));
    // 0x1cb6d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb6d8: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
    // 0x1cb6dc: 0x8072c9a  j           func_1CB268
    ctx->pc = 0x1CB6DCu;
    ctx->pc = 0x1CB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6DCu;
    // 0x1cb6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB6E4u;
    // 0x1cb6e4: 0x0  nop
    ctx->pc = 0x1cb6e4u;
    // NOP
label_1cb6e8:
    // 0x1cb6e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb6ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB6ECu;
    {
        const bool branch_taken_0x1cb6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6ECu;
        // 0x1cb6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6ec) {
            ctx->pc = 0x1CB718u;
            goto label_1cb718;
        }
    }
    ctx->pc = 0x1CB6F4u;
    // 0x1cb6f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb6f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb700: 0x2484ba38  addiu       $a0, $a0, -0x45C8
    ctx->pc = 0x1cb700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    // 0x1cb704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb708: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
    // 0x1cb70c: 0x8072c9a  j           func_1CB268
    ctx->pc = 0x1CB70Cu;
    ctx->pc = 0x1CB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB70Cu;
    // 0x1cb710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB714u;
    // 0x1cb714: 0x0  nop
    ctx->pc = 0x1cb714u;
    // NOP
label_1cb718:
    // 0x1cb718: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CB718u;
    SET_GPR_U32(ctx, 31, 0x1CB720u);
    ctx->pc = 0x1CB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB718u;
    // 0x1cb71c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CB718u, 0x1CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB720u;
label_1cb720:
    // 0x1cb720: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cb720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cb724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB72Cu;
        // 0x1cb730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB734u;
    // 0x1cb734: 0x0  nop
    ctx->pc = 0x1cb734u;
    // NOP
    // 0x1cb738: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB738u;
        // 0x1cb73c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB740u;
    // 0x1cb740: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x1cb740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x1cb744: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB744u;
        // 0x1cb748: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB74Cu;
    // 0x1cb74c: 0x0  nop
    ctx->pc = 0x1cb74cu;
    // NOP
    // 0x1cb750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb75c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB75Cu;
    SET_GPR_U32(ctx, 31, 0x1CB764u);
    ctx->pc = 0x1CB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB75Cu;
    // 0x1cb760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB75Cu, 0x1CB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB764u;
label_1cb764:
    // 0x1cb764: 0xc072de0  jal         func_1CB780
    ctx->pc = 0x1CB764u;
    SET_GPR_U32(ctx, 31, 0x1CB76Cu);
    ctx->pc = 0x1CB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB764u;
    // 0x1cb768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB780u, 0x1CB764u, 0x1CB76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB76Cu;
label_1cb76c:
    // 0x1cb76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb774: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CB774u;
    ctx->pc = 0x1CB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB774u;
    // 0x1cb778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB77Cu;
    // 0x1cb77c: 0x0  nop
    ctx->pc = 0x1cb77cu;
    // NOP
    if (ctx->pc == 0x1cb77cu) { ctx->pc = 0x1cb780u; }
}
