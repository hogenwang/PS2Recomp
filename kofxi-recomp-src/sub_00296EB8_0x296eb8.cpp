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

// Function: sub_00296EB8
// Address: 0x296eb8 - 0x296f20
void sub_00296EB8_0x296eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296EB8_0x296eb8");
#endif

    switch (ctx->pc) {
        case 0x296ed8u: goto label_296ed8;
        case 0x296f04u: goto label_296f04;
        default: break;
    }

    ctx->pc = 0x296eb8u;

    // 0x296eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296ebc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296ec4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x296ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ed0: 0xc0a5b1a  jal         func_296C68
    ctx->pc = 0x296ED0u;
    SET_GPR_U32(ctx, 31, 0x296ED8u);
    ctx->pc = 0x296ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296ED0u;
    // 0x296ed4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C68u, 0x296ED0u, 0x296ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296ED8u;
label_296ed8:
    // 0x296ed8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x296ED8u;
    {
        const bool branch_taken_0x296ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296ed8) {
            ctx->pc = 0x296EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296ED8u;
            // 0x296edc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296EE8u;
            goto label_296ee8;
        }
    }
    ctx->pc = 0x296EE0u;
    // 0x296ee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x296EE0u;
    {
        const bool branch_taken_0x296ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EE0u;
        // 0x296ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ee0) {
            ctx->pc = 0x296F08u;
            goto label_296f08;
        }
    }
    ctx->pc = 0x296EE8u;
label_296ee8:
    // 0x296ee8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x296ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x296eec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x296eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x296ef0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296EF0u;
    {
        const bool branch_taken_0x296ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EF0u;
        // 0x296ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ef0) {
            ctx->pc = 0x296F08u;
            goto label_296f08;
        }
    }
    ctx->pc = 0x296EF8u;
    // 0x296ef8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x296ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x296efc: 0xc049c48  jal         func_127120
    ctx->pc = 0x296EFCu;
    SET_GPR_U32(ctx, 31, 0x296F04u);
    ctx->pc = 0x296F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EFCu;
    // 0x296f00: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x296EFCu, 0x296F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F04u;
label_296f04:
    // 0x296f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296f08:
    // 0x296f08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296f14: 0x3e00008  jr          $ra
    ctx->pc = 0x296F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F14u;
        // 0x296f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296F1Cu;
    // 0x296f1c: 0x0  nop
    ctx->pc = 0x296f1cu;
    // NOP
    if (ctx->pc == 0x296f1cu) { ctx->pc = 0x296f20u; }
}
