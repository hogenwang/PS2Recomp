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

// Function: sub_001C1F30
// Address: 0x1c1f30 - 0x1c1fa0
void sub_001C1F30_0x1c1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1F30_0x1c1f30");
#endif

    switch (ctx->pc) {
        case 0x1c1f88u: goto label_1c1f88;
        default: break;
    }

    ctx->pc = 0x1c1f30u;

    // 0x1c1f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1f34: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1c1f38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c1f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c1f3c: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1c1f40: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x1c1f44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c1f48: 0x26105a00  addiu       $s0, $s0, 0x5A00
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    // 0x1c1f4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1f50: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1c1f54: 0x2464d910  addiu       $a0, $v1, -0x26F0
    ctx->pc = 0x1c1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957328));
    // 0x1c1f58: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1c1f5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1f60: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1c1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1c1f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f68: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1c1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1c1f6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c1f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f70: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1c1f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f74: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1c1f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1f78: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1f7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1f7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f80: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1C1F80u;
    SET_GPR_U32(ctx, 31, 0x1C1F88u);
    ctx->pc = 0x1C1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F80u;
    // 0x1c1f84: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1C1F80u, 0x1C1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F88u;
label_1c1f88:
    // 0x1c1f88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1f8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1f90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c1f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F94u;
        // 0x1c1f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1F9Cu;
    // 0x1c1f9c: 0x0  nop
    ctx->pc = 0x1c1f9cu;
    // NOP
}
