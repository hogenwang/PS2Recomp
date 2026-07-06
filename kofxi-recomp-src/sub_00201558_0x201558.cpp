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

// Function: sub_00201558
// Address: 0x201558 - 0x2015c8
void sub_00201558_0x201558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201558_0x201558");
#endif

    switch (ctx->pc) {
        case 0x20157cu: goto label_20157c;
        case 0x20158cu: goto label_20158c;
        case 0x201594u: goto label_201594;
        case 0x20159cu: goto label_20159c;
        case 0x2015a4u: goto label_2015a4;
        default: break;
    }

    ctx->pc = 0x201558u;

    // 0x201558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20155c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x201560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201564: 0x245018f0  addiu       $s0, $v0, 0x18F0
    ctx->pc = 0x201564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x201568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20156c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20156Cu;
    {
        const bool branch_taken_0x20156c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x201570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20156Cu;
        // 0x201570: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20156c) {
            ctx->pc = 0x2015B8u;
            goto label_2015b8;
        }
    }
    ctx->pc = 0x201574u;
    // 0x201574: 0xc080572  jal         func_2015C8
    ctx->pc = 0x201574u;
    SET_GPR_U32(ctx, 31, 0x20157Cu);
    ctx->pc = 0x2015C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015C8u, 0x201574u, 0x20157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20157Cu;
label_20157c:
    // 0x20157c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20157cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x201580: 0x24639ba8  addiu       $v1, $v1, -0x6458
    ctx->pc = 0x201580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941608));
    // 0x201584: 0xc080576  jal         func_2015D8
    ctx->pc = 0x201584u;
    SET_GPR_U32(ctx, 31, 0x20158Cu);
    ctx->pc = 0x201588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201584u;
    // 0x201588: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015D8u, 0x201584u, 0x20158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20158Cu;
label_20158c:
    // 0x20158c: 0xc080788  jal         func_201E20
    ctx->pc = 0x20158Cu;
    SET_GPR_U32(ctx, 31, 0x201594u);
    ctx->pc = 0x201E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E20u, 0x20158Cu, 0x201594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201594u;
label_201594:
    // 0x201594: 0xc080794  jal         func_201E50
    ctx->pc = 0x201594u;
    SET_GPR_U32(ctx, 31, 0x20159Cu);
    ctx->pc = 0x201E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E50u, 0x201594u, 0x20159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20159Cu;
label_20159c:
    // 0x20159c: 0xc080144  jal         func_200510
    ctx->pc = 0x20159Cu;
    SET_GPR_U32(ctx, 31, 0x2015A4u);
    ctx->pc = 0x200510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200510u, 0x20159Cu, 0x2015A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015A4u;
label_2015a4:
    // 0x2015a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2015a8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2015a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2015ac: 0xac6018f4  sw          $zero, 0x18F4($v1)
    ctx->pc = 0x2015acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6388), GPR_U32(ctx, 0));
    // 0x2015b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2015b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2015b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2015b8:
    // 0x2015b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2015b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2015bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2015bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2015c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2015C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015C0u;
        // 0x2015c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2015C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2015C8u;
}
