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

// Function: sub_00152220
// Address: 0x152220 - 0x152290
void sub_00152220_0x152220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152220_0x152220");
#endif

    switch (ctx->pc) {
        case 0x152270u: goto label_152270;
        case 0x152278u: goto label_152278;
        default: break;
    }

    ctx->pc = 0x152220u;

    // 0x152220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152224: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15222c: 0x8c63f0f8  lw          $v1, -0xF08($v1)
    ctx->pc = 0x15222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963448)));
    // 0x152230: 0x2c610040  sltiu       $at, $v1, 0x40
    ctx->pc = 0x152230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x152234: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152234u;
    {
        const bool branch_taken_0x152234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152234) {
            ctx->pc = 0x152238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152234u;
            // 0x152238: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152260u;
            goto label_152260;
        }
    }
    ctx->pc = 0x15223Cu;
    // 0x15223c: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x15223cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152240: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152244: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x152244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x152248: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15224c: 0x24c6eff0  addiu       $a2, $a2, -0x1010
    ctx->pc = 0x15224cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963184));
    // 0x152250: 0xac65f0f8  sw          $a1, -0xF08($v1)
    ctx->pc = 0x152250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963448), GPR_U32(ctx, 5));
    // 0x152254: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x152258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152258u;
    {
        const bool branch_taken_0x152258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152258u;
        // 0x15225c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152258) {
            ctx->pc = 0x152278u;
            goto label_152278;
        }
    }
    ctx->pc = 0x152260u;
label_152260:
    // 0x152260: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x152260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x152264: 0x24a5d100  addiu       $a1, $a1, -0x2F00
    ctx->pc = 0x152264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
    // 0x152268: 0xc067d44  jal         func_19F510
    ctx->pc = 0x152268u;
    SET_GPR_U32(ctx, 31, 0x152270u);
    ctx->pc = 0x15226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152268u;
    // 0x15226c: 0x3444000f  ori         $a0, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F510u, 0x152268u, 0x152270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152270u;
label_152270:
    // 0x152270: 0xc068158  jal         func_1A0560
    ctx->pc = 0x152270u;
    SET_GPR_U32(ctx, 31, 0x152278u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x152270u, 0x152278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152278u;
label_152278:
    // 0x152278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15227c: 0x3e00008  jr          $ra
    ctx->pc = 0x15227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15227Cu;
        // 0x152280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152284u;
    // 0x152284: 0x0  nop
    ctx->pc = 0x152284u;
    // NOP
    // 0x152288: 0x0  nop
    ctx->pc = 0x152288u;
    // NOP
    // 0x15228c: 0x0  nop
    ctx->pc = 0x15228cu;
    // NOP
    if (ctx->pc == 0x15228cu) { ctx->pc = 0x152290u; }
}
