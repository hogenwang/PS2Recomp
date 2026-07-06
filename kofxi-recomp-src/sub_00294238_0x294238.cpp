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

// Function: sub_00294238
// Address: 0x294238 - 0x294298
void sub_00294238_0x294238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294238_0x294238");
#endif

    switch (ctx->pc) {
        case 0x294274u: goto label_294274;
        case 0x294280u: goto label_294280;
        default: break;
    }

    ctx->pc = 0x294238u;

    // 0x294238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29423c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294248: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x294248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29424c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x29424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x294250: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x294250u;
    {
        const bool branch_taken_0x294250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294250u;
        // 0x294254: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294250) {
            ctx->pc = 0x294278u;
            goto label_294278;
        }
    }
    ctx->pc = 0x294258u;
    // 0x294258: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x294258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x29425c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x29425cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x294260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294264: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x294264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x294268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29426c: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x29426Cu;
    SET_GPR_U32(ctx, 31, 0x294274u);
    ctx->pc = 0x294270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29426Cu;
    // 0x294270: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x29426Cu, 0x294274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294274u;
label_294274:
    // 0x294274: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_294278:
    // 0x294278: 0xc0a814c  jal         func_2A0530
    ctx->pc = 0x294278u;
    SET_GPR_U32(ctx, 31, 0x294280u);
    ctx->pc = 0x29427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294278u;
    // 0x29427c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0530u, 0x294278u, 0x294280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294280u;
label_294280:
    // 0x294280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294284: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x294284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x294288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29428c: 0x3e00008  jr          $ra
    ctx->pc = 0x29428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29428Cu;
        // 0x294290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294294u;
    // 0x294294: 0x0  nop
    ctx->pc = 0x294294u;
    // NOP
}
