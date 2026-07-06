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

// Function: sub_0029CB20
// Address: 0x29cb20 - 0x29cba0
void sub_0029CB20_0x29cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CB20_0x29cb20");
#endif

    switch (ctx->pc) {
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb80u: goto label_29cb80;
        default: break;
    }

    ctx->pc = 0x29cb20u;

    // 0x29cb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29cb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29cb28: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29CB28u;
    SET_GPR_U32(ctx, 31, 0x29CB30u);
    ctx->pc = 0x29CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB28u;
    // 0x29cb2c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29CB28u, 0x29CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB30u;
label_29cb30:
    // 0x29cb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb34: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CB34u;
    {
        const bool branch_taken_0x29cb34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB34u;
        // 0x29cb38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb34) {
            ctx->pc = 0x29CB5Cu;
            goto label_29cb5c;
        }
    }
    ctx->pc = 0x29CB3Cu;
    // 0x29cb3c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29cb40: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x29cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x29cb44: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x29cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29cb48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cb48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb4c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29CB4Cu;
    SET_GPR_U32(ctx, 31, 0x29CB54u);
    ctx->pc = 0x29CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB4Cu;
    // 0x29cb50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29CB4Cu, 0x29CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB54u;
label_29cb54:
    // 0x29cb54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29CB54u;
    {
        const bool branch_taken_0x29cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB54u;
        // 0x29cb58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb54) {
            ctx->pc = 0x29CB74u;
            goto label_29cb74;
        }
    }
    ctx->pc = 0x29CB5Cu;
label_29cb5c:
    // 0x29cb5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29cb60: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x29cb64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29cb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb68: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x29cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x29cb6c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x29cb70: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_29cb74:
    // 0x29cb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29cb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cb78: 0x3e00008  jr          $ra
    ctx->pc = 0x29CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB78u;
        // 0x29cb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CB80u;
label_29cb80:
    // 0x29cb80: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x29cb84: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x29cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29cb88: 0x24e7c550  addiu       $a3, $a3, -0x3AB0
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952272));
    // 0x29cb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb90: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29cb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cb94: 0x80a8b46  j           func_2A2D18
    ctx->pc = 0x29CB94u;
    ctx->pc = 0x29CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB94u;
    // 0x29cb98: 0x240800ae  addiu       $t0, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    sub_002A2D18_0x2a2d18(rdram, ctx, runtime); return;
    ctx->pc = 0x29CB9Cu;
    // 0x29cb9c: 0x0  nop
    ctx->pc = 0x29cb9cu;
    // NOP
    if (ctx->pc == 0x29cb9cu) { ctx->pc = 0x29cba0u; }
}
