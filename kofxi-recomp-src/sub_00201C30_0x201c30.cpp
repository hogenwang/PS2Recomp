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

// Function: sub_00201C30
// Address: 0x201c30 - 0x201c98
void sub_00201C30_0x201c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C30_0x201c30");
#endif

    switch (ctx->pc) {
        case 0x201c6cu: goto label_201c6c;
        case 0x201c78u: goto label_201c78;
        default: break;
    }

    ctx->pc = 0x201c30u;

    // 0x201c30: 0x3e00008  jr          $ra
    ctx->pc = 0x201C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C30u;
        // 0x201c34: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C38u;
    // 0x201c38: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x201c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x201c3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201c40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201c48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x201c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c5c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x201c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x201c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201c64: 0xc080726  jal         func_201C98
    ctx->pc = 0x201C64u;
    SET_GPR_U32(ctx, 31, 0x201C6Cu);
    ctx->pc = 0x201C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C64u;
    // 0x201c68: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C98u, 0x201C64u, 0x201C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C6Cu;
label_201c6c:
    // 0x201c6c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x201c70: 0xc080726  jal         func_201C98
    ctx->pc = 0x201C70u;
    SET_GPR_U32(ctx, 31, 0x201C78u);
    ctx->pc = 0x201C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C70u;
    // 0x201c74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C98u, 0x201C70u, 0x201C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C78u;
label_201c78:
    // 0x201c78: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x201c7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201c8c: 0x8080726  j           func_201C98
    ctx->pc = 0x201C8Cu;
    ctx->pc = 0x201C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C8Cu;
    // 0x201c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C98u;
    sub_00201C98_0x201c98(rdram, ctx, runtime); return;
    ctx->pc = 0x201C94u;
    // 0x201c94: 0x0  nop
    ctx->pc = 0x201c94u;
    // NOP
    if (ctx->pc == 0x201c94u) { ctx->pc = 0x201c98u; }
}
