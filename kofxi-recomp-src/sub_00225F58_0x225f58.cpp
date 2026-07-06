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

// Function: sub_00225F58
// Address: 0x225f58 - 0x225fd8
void sub_00225F58_0x225f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F58_0x225f58");
#endif

    switch (ctx->pc) {
        case 0x225fa0u: goto label_225fa0;
        case 0x225fb8u: goto label_225fb8;
        case 0x225fc4u: goto label_225fc4;
        default: break;
    }

    ctx->pc = 0x225f58u;

    // 0x225f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225f5c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225f64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x225f68: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x225f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x225f6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x225f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x225f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f74: 0x8deef1c4  lw          $t6, -0xE3C($t7)
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x225f78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x225f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f7c: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x225f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x225f80: 0x1d0702a  slt         $t6, $t6, $s0
    ctx->pc = 0x225f80u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x225f84: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x225f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x225f88: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x225f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x225f8c: 0x15c0000d  bnez        $t6, . + 4 + (0xD << 2)
    ctx->pc = 0x225F8Cu;
    {
        const bool branch_taken_0x225f8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x225F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F8Cu;
        // 0x225f90: 0xffab0038  sd          $t3, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f8c) {
            ctx->pc = 0x225FC4u;
            goto label_225fc4;
        }
    }
    ctx->pc = 0x225F94u;
    // 0x225f94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x225f98: 0xc043e52  jal         func_10F948
    ctx->pc = 0x225F98u;
    SET_GPR_U32(ctx, 31, 0x225FA0u);
    ctx->pc = 0x225F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F98u;
    // 0x225f9c: 0x24843788  addiu       $a0, $a0, 0x3788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x225F98u, 0x225FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FA0u;
label_225fa0:
    // 0x225fa0: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225fa4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x225fa8: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x225FA8u;
    {
        const bool branch_taken_0x225fa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FA8u;
        // 0x225fac: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fa8) {
            ctx->pc = 0x225FB8u;
            goto label_225fb8;
        }
    }
    ctx->pc = 0x225FB0u;
    // 0x225fb0: 0xc043e36  jal         func_10F8D8
    ctx->pc = 0x225FB0u;
    SET_GPR_U32(ctx, 31, 0x225FB8u);
    ctx->pc = 0x10F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8D8u, 0x225FB0u, 0x225FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB8u;
label_225fb8:
    // 0x225fb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x225fbc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x225FBCu;
    SET_GPR_U32(ctx, 31, 0x225FC4u);
    ctx->pc = 0x225FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FBCu;
    // 0x225fc0: 0x24843758  addiu       $a0, $a0, 0x3758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x225FBCu, 0x225FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FC4u;
label_225fc4:
    // 0x225fc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x225FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FD0u;
        // 0x225fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225FD8u;
}
