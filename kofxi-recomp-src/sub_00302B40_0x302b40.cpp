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

// Function: sub_00302B40
// Address: 0x302b40 - 0x302ba0
void sub_00302B40_0x302b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302B40_0x302b40");
#endif

    switch (ctx->pc) {
        case 0x302b88u: goto label_302b88;
        default: break;
    }

    ctx->pc = 0x302b40u;

    // 0x302b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302b44: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302b4c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x302b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b50: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x302b50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302b54: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x302b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b58: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x302b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b5c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x302b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x302b60: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x302b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x302b64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302b68: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302b6c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302b70: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302b70u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302b74: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302b74u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302b78: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302b78u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302b7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b80: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302B80u;
    SET_GPR_U32(ctx, 31, 0x302B88u);
    ctx->pc = 0x302B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B80u;
    // 0x302b84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302B80u, 0x302B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B88u;
label_302b88:
    // 0x302b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x302B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B8Cu;
        // 0x302b90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302B94u;
    // 0x302b94: 0x0  nop
    ctx->pc = 0x302b94u;
    // NOP
    // 0x302b98: 0x0  nop
    ctx->pc = 0x302b98u;
    // NOP
    // 0x302b9c: 0x0  nop
    ctx->pc = 0x302b9cu;
    // NOP
    if (ctx->pc == 0x302b9cu) { ctx->pc = 0x302ba0u; }
}
