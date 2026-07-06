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

// Function: sub_001023F8
// Address: 0x1023f8 - 0x102480
void sub_001023F8_0x1023f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001023F8_0x1023f8");
#endif

    switch (ctx->pc) {
        case 0x102438u: goto label_102438;
        case 0x102448u: goto label_102448;
        case 0x102450u: goto label_102450;
        default: break;
    }

    ctx->pc = 0x1023f8u;

    // 0x1023f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1023f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1023fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1023fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102400: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102404: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x102404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10240c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10240cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102410: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102414: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x102414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x102418: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x102418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10241c: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x10241cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x102420: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x102420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102424: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x102424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102428: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x102428u;
    {
        const bool branch_taken_0x102428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102428u;
        // 0x10242c: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102428) {
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102430u;
    // 0x102430: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x102430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x102434: 0x0  nop
    ctx->pc = 0x102434u;
    // NOP
label_102438:
    // 0x102438: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102438u;
    {
        const bool branch_taken_0x102438 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x102438) {
            ctx->pc = 0x102450u;
            goto label_102450;
        }
    }
    ctx->pc = 0x102440u;
    // 0x102440: 0xc043e52  jal         func_10F948
    ctx->pc = 0x102440u;
    SET_GPR_U32(ctx, 31, 0x102448u);
    ctx->pc = 0x102444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102440u;
    // 0x102444: 0x26649ec0  addiu       $a0, $s3, -0x6140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x102440u, 0x102448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102448u;
label_102448:
    // 0x102448: 0xc040ac8  jal         func_102B20
    ctx->pc = 0x102448u;
    SET_GPR_U32(ctx, 31, 0x102450u);
    ctx->pc = 0x10244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102448u;
    // 0x10244c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B20u, 0x102448u, 0x102450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102450u;
label_102450:
    // 0x102450: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x102450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102454: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x102454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102458: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102458u;
    {
        const bool branch_taken_0x102458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102458u;
        // 0x10245c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102458) {
            ctx->pc = 0x102438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102438;
        }
    }
    ctx->pc = 0x102460u;
label_102460:
    // 0x102460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x102460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102464: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x102464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102468: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10246c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10246cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102474: 0x3e00008  jr          $ra
    ctx->pc = 0x102474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102474u;
        // 0x102478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10247Cu;
    // 0x10247c: 0x0  nop
    ctx->pc = 0x10247cu;
    // NOP
    if (ctx->pc == 0x10247cu) { ctx->pc = 0x102480u; }
}
