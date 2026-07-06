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

// Function: sub_00225E50
// Address: 0x225e50 - 0x225ed8
void sub_00225E50_0x225e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225E50_0x225e50");
#endif

    switch (ctx->pc) {
        case 0x225ea0u: goto label_225ea0;
        case 0x225eb8u: goto label_225eb8;
        case 0x225ec4u: goto label_225ec4;
        default: break;
    }

    ctx->pc = 0x225e50u;

    // 0x225e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225e54: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225e54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225e58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225e5c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x225e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x225e60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x225e64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x225e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e68: 0xadc7f1c0  sw          $a3, -0xE40($t6)
    ctx->pc = 0x225e68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963648), GPR_U32(ctx, 7));
    // 0x225e6c: 0x8dedf1c4  lw          $t5, -0xE3C($t7)
    ctx->pc = 0x225e6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x225e70: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x225e70u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e74: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x225e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
    // 0x225e78: 0xffa90018  sd          $t1, 0x18($sp)
    ctx->pc = 0x225e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 9));
    // 0x225e7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x225e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e80: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x225e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x225e84: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x225e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e88: 0x29ad0003  slti        $t5, $t5, 0x3
    ctx->pc = 0x225e88u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x225e8c: 0x15a0000d  bnez        $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x225E8Cu;
    {
        const bool branch_taken_0x225e8c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E8Cu;
        // 0x225e90: 0xffab0028  sd          $t3, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e8c) {
            ctx->pc = 0x225EC4u;
            goto label_225ec4;
        }
    }
    ctx->pc = 0x225E94u;
    // 0x225e94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x225e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x225e98: 0xc043e52  jal         func_10F948
    ctx->pc = 0x225E98u;
    SET_GPR_U32(ctx, 31, 0x225EA0u);
    ctx->pc = 0x225E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E98u;
    // 0x225e9c: 0x24843748  addiu       $a0, $a0, 0x3748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x225E98u, 0x225EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EA0u;
label_225ea0:
    // 0x225ea0: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225ea4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x225ea8: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x225EA8u;
    {
        const bool branch_taken_0x225ea8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EA8u;
        // 0x225eac: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ea8) {
            ctx->pc = 0x225EB8u;
            goto label_225eb8;
        }
    }
    ctx->pc = 0x225EB0u;
    // 0x225eb0: 0xc043e36  jal         func_10F8D8
    ctx->pc = 0x225EB0u;
    SET_GPR_U32(ctx, 31, 0x225EB8u);
    ctx->pc = 0x10F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8D8u, 0x225EB0u, 0x225EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB8u;
label_225eb8:
    // 0x225eb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x225eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x225ebc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x225EBCu;
    SET_GPR_U32(ctx, 31, 0x225EC4u);
    ctx->pc = 0x225EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EBCu;
    // 0x225ec0: 0x24843758  addiu       $a0, $a0, 0x3758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x225EBCu, 0x225EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC4u;
label_225ec4:
    // 0x225ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x225ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ED0u;
        // 0x225ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225ED8u;
}
