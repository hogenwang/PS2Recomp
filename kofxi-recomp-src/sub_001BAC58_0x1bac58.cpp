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

// Function: sub_001BAC58
// Address: 0x1bac58 - 0x1bacb8
void sub_001BAC58_0x1bac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC58_0x1bac58");
#endif

    switch (ctx->pc) {
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1baca4u: goto label_1baca4;
        default: break;
    }

    ctx->pc = 0x1bac58u;

    // 0x1bac58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac5c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAC5Cu;
    {
        const bool branch_taken_0x1bac5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC5Cu;
        // 0x1bac60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac5c) {
            ctx->pc = 0x1BAC78u;
            goto label_1bac78;
        }
    }
    ctx->pc = 0x1BAC64u;
    // 0x1bac64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bac68: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BAC68u;
    SET_GPR_U32(ctx, 31, 0x1BAC70u);
    ctx->pc = 0x1BAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC68u;
    // 0x1bac6c: 0x24848540  addiu       $a0, $a0, -0x7AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BAC68u, 0x1BAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC70u;
label_1bac70:
    // 0x1bac70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAC70u;
    {
        const bool branch_taken_0x1bac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC70u;
        // 0x1bac74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac70) {
            ctx->pc = 0x1BAC7Cu;
            goto label_1bac7c;
        }
    }
    ctx->pc = 0x1BAC78u;
label_1bac78:
    // 0x1bac78: 0x84820060  lh          $v0, 0x60($a0)
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_1bac7c:
    // 0x1bac7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bac80: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC80u;
        // 0x1bac84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAC88u;
    // 0x1bac88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bac90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bac94: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAC94u;
    SET_GPR_U32(ctx, 31, 0x1BAC9Cu);
    ctx->pc = 0x1BAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC94u;
    // 0x1bac98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAC94u, 0x1BAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC9Cu;
label_1bac9c:
    // 0x1bac9c: 0xc06eb2e  jal         func_1BACB8
    ctx->pc = 0x1BAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1BACA4u);
    ctx->pc = 0x1BACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC9Cu;
    // 0x1baca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACB8u, 0x1BAC9Cu, 0x1BACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACA4u;
label_1baca4:
    // 0x1baca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1baca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bacac: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BACACu;
    ctx->pc = 0x1BACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACACu;
    // 0x1bacb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BACB4u;
    // 0x1bacb4: 0x0  nop
    ctx->pc = 0x1bacb4u;
    // NOP
    if (ctx->pc == 0x1bacb4u) { ctx->pc = 0x1bacb8u; }
}
