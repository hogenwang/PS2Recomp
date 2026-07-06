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

// Function: sub_003416C0
// Address: 0x3416c0 - 0x341720
void sub_003416C0_0x3416c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003416C0_0x3416c0");
#endif

    ctx->pc = 0x3416c0u;

    // 0x3416c0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3416c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3416c4: 0x8c65ea78  lw          $a1, -0x1588($v1)
    ctx->pc = 0x3416c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x3416c8: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3416C8u;
    {
        const bool branch_taken_0x3416c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3416c8) {
            ctx->pc = 0x3416CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3416C8u;
            // 0x3416cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3416E4u;
            goto label_3416e4;
        }
    }
    ctx->pc = 0x3416D0u;
    // 0x3416d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3416d4: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x3416d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
    // 0x3416d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3416d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3416dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3416DCu;
    {
        const bool branch_taken_0x3416dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3416E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416DCu;
        // 0x3416e0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3416dc) {
            ctx->pc = 0x34170Cu;
            goto label_34170c;
        }
    }
    ctx->pc = 0x3416E4u;
label_3416e4:
    // 0x3416e4: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3416E4u;
    {
        const bool branch_taken_0x3416e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3416e4) {
            ctx->pc = 0x3416E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3416E4u;
            // 0x3416e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3416F4u;
            goto label_3416f4;
        }
    }
    ctx->pc = 0x3416ECu;
    // 0x3416ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3416ECu;
    {
        const bool branch_taken_0x3416ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3416F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416ECu;
        // 0x3416f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3416ec) {
            ctx->pc = 0x34170Cu;
            goto label_34170c;
        }
    }
    ctx->pc = 0x3416F4u;
label_3416f4:
    // 0x3416f4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3416F4u;
    {
        const bool branch_taken_0x3416f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3416f4) {
            ctx->pc = 0x34170Cu;
            goto label_34170c;
        }
    }
    ctx->pc = 0x3416FCu;
    // 0x3416fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3416fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x341700: 0x2442ecb8  addiu       $v0, $v0, -0x1348
    ctx->pc = 0x341700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962360));
    // 0x341704: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x341704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x341708: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x341708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_34170c:
    // 0x34170c: 0x3e00008  jr          $ra
    ctx->pc = 0x34170Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34170Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341714u;
    // 0x341714: 0x0  nop
    ctx->pc = 0x341714u;
    // NOP
    // 0x341718: 0x0  nop
    ctx->pc = 0x341718u;
    // NOP
    // 0x34171c: 0x0  nop
    ctx->pc = 0x34171cu;
    // NOP
    if (ctx->pc == 0x34171cu) { ctx->pc = 0x341720u; }
}
