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

// Function: sub_001EB570
// Address: 0x1eb570 - 0x1eb5a8
void sub_001EB570_0x1eb570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB570_0x1eb570");
#endif

    ctx->pc = 0x1eb570u;

    // 0x1eb570: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eb570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb574: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb578: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1eb57c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb580: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1eb580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb584: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB584u;
    {
        const bool branch_taken_0x1eb584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB584u;
        // 0x1eb588: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb584) {
            ctx->pc = 0x1EB59Cu;
            goto label_1eb59c;
        }
    }
    ctx->pc = 0x1EB58Cu;
    // 0x1eb58c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb590: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb594: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eb598: 0x8c621370  lw          $v0, 0x1370($v1)
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4976)));
label_1eb59c:
    // 0x1eb59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB5A4u;
    // 0x1eb5a4: 0x0  nop
    ctx->pc = 0x1eb5a4u;
    // NOP
    if (ctx->pc == 0x1eb5a4u) { ctx->pc = 0x1eb5a8u; }
}
