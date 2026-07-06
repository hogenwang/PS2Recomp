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

// Function: sub_0010C168
// Address: 0x10c168 - 0x10c1c0
void sub_0010C168_0x10c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C168_0x10c168");
#endif

    switch (ctx->pc) {
        case 0x10c1a0u: goto label_10c1a0;
        case 0x10c1b0u: goto label_10c1b0;
        default: break;
    }

    ctx->pc = 0x10c168u;

    // 0x10c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c16c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c170: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x10c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x10c174: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10C174u;
    {
        const bool branch_taken_0x10c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c174) {
            ctx->pc = 0x10C1A8u;
            goto label_10c1a8;
        }
    }
    ctx->pc = 0x10C17Cu;
    // 0x10c17c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C17Cu;
    {
        const bool branch_taken_0x10c17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c17c) {
            ctx->pc = 0x10C1A8u;
            goto label_10c1a8;
        }
    }
    ctx->pc = 0x10C184u;
    // 0x10c184: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10c188: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C188u;
    {
        const bool branch_taken_0x10c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C188u;
        // 0x10c18c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c188) {
            ctx->pc = 0x10C1A8u;
            goto label_10c1a8;
        }
    }
    ctx->pc = 0x10C190u;
    // 0x10c190: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10c190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10c194: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c198: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10C198u;
    SET_GPR_U32(ctx, 31, 0x10C1A0u);
    ctx->pc = 0x10C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C198u;
    // 0x10c19c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A810u, 0x10C198u, 0x10C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1A0u;
label_10c1a0:
    // 0x10c1a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C1A0u;
    {
        const bool branch_taken_0x10c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1A0u;
        // 0x10c1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1a0) {
            ctx->pc = 0x10C1B4u;
            goto label_10c1b4;
        }
    }
    ctx->pc = 0x10C1A8u;
label_10c1a8:
    // 0x10c1a8: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10C1A8u;
    SET_GPR_U32(ctx, 31, 0x10C1B0u);
    ctx->pc = 0x10C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1A8u;
    // 0x10c1ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFF0u, 0x10C1A8u, 0x10C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1B0u;
label_10c1b0:
    // 0x10c1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c1b4:
    // 0x10c1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1B4u;
        // 0x10c1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C1BCu;
    // 0x10c1bc: 0x0  nop
    ctx->pc = 0x10c1bcu;
    // NOP
}
