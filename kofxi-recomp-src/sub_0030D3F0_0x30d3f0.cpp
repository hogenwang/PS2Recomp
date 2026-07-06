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

// Function: sub_0030D3F0
// Address: 0x30d3f0 - 0x30d4a0
void sub_0030D3F0_0x30d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3F0_0x30d3f0");
#endif

    switch (ctx->pc) {
        case 0x30d410u: goto label_30d410;
        case 0x30d454u: goto label_30d454;
        case 0x30d46cu: goto label_30d46c;
        default: break;
    }

    ctx->pc = 0x30d3f0u;

    // 0x30d3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30d3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d400: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x30d400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x30d404: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x30D404u;
    {
        const bool branch_taken_0x30d404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D404u;
        // 0x30d408: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d404) {
            ctx->pc = 0x30D488u;
            goto label_30d488;
        }
    }
    ctx->pc = 0x30D40Cu;
    // 0x30d40c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x30d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30d410:
    // 0x30d410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d414: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30D414u;
    {
        const bool branch_taken_0x30d414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d414) {
            ctx->pc = 0x30D478u;
            goto label_30d478;
        }
    }
    ctx->pc = 0x30D41Cu;
    // 0x30d41c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x30d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d420: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30d424: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x30d424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x30d428: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x30d428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30d42c: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x30d42cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x30d430: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30D430u;
    {
        const bool branch_taken_0x30d430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d430) {
            ctx->pc = 0x30D478u;
            goto label_30d478;
        }
    }
    ctx->pc = 0x30D438u;
    // 0x30d438: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30d43c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d440: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D440u;
    {
        const bool branch_taken_0x30d440 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d440) {
            ctx->pc = 0x30D460u;
            goto label_30d460;
        }
    }
    ctx->pc = 0x30D448u;
    // 0x30d448: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x30d448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30d44c: 0xc0c34f4  jal         func_30D3D0
    ctx->pc = 0x30D44Cu;
    SET_GPR_U32(ctx, 31, 0x30D454u);
    ctx->pc = 0x30D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D44Cu;
    // 0x30d450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3D0u, 0x30D44Cu, 0x30D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D454u;
label_30d454:
    // 0x30d454: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D454u;
    {
        const bool branch_taken_0x30d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d454) {
            ctx->pc = 0x30D470u;
            goto label_30d470;
        }
    }
    ctx->pc = 0x30D45Cu;
    // 0x30d45c: 0x0  nop
    ctx->pc = 0x30d45cu;
    // NOP
label_30d460:
    // 0x30d460: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30d464: 0xc0c34e0  jal         func_30D380
    ctx->pc = 0x30D464u;
    SET_GPR_U32(ctx, 31, 0x30D46Cu);
    ctx->pc = 0x30D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D464u;
    // 0x30d468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D380u, 0x30D464u, 0x30D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D46Cu;
label_30d46c:
    // 0x30d46c: 0x0  nop
    ctx->pc = 0x30d46cu;
    // NOP
label_30d470:
    // 0x30d470: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d474: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x30d474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_30d478:
    // 0x30d478: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d47c: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30D47Cu;
    {
        const bool branch_taken_0x30d47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d47c) {
            ctx->pc = 0x30D480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D47Cu;
            // 0x30d480: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d410;
        }
    }
    ctx->pc = 0x30D484u;
    // 0x30d484: 0x0  nop
    ctx->pc = 0x30d484u;
    // NOP
label_30d488:
    // 0x30d488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d48c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d494: 0x3e00008  jr          $ra
    ctx->pc = 0x30D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D494u;
        // 0x30d498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D49Cu;
    // 0x30d49c: 0x0  nop
    ctx->pc = 0x30d49cu;
    // NOP
    if (ctx->pc == 0x30d49cu) { ctx->pc = 0x30d4a0u; }
}
