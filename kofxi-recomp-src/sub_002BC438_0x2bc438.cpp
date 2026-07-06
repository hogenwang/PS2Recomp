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

// Function: sub_002BC438
// Address: 0x2bc438 - 0x2bc4a8
void sub_002BC438_0x2bc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC438_0x2bc438");
#endif

    switch (ctx->pc) {
        case 0x2bc44cu: goto label_2bc44c;
        case 0x2bc468u: goto label_2bc468;
        case 0x2bc49cu: goto label_2bc49c;
        default: break;
    }

    ctx->pc = 0x2bc438u;

    // 0x2bc438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc43c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2bc43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc444: 0xc0af02c  jal         func_2BC0B0
    ctx->pc = 0x2BC444u;
    SET_GPR_U32(ctx, 31, 0x2BC44Cu);
    ctx->pc = 0x2BC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0B0u, 0x2BC444u, 0x2BC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC44Cu;
label_2bc44c:
    // 0x2bc44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc450: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC458u;
    // 0x2bc458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc460: 0xc0af02c  jal         func_2BC0B0
    ctx->pc = 0x2BC460u;
    SET_GPR_U32(ctx, 31, 0x2BC468u);
    ctx->pc = 0x2BC464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC460u;
    // 0x2bc464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0B0u, 0x2BC460u, 0x2BC468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC468u;
label_2bc468:
    // 0x2bc468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc46c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC46Cu;
        // 0x2bc470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC474u;
    // 0x2bc474: 0x0  nop
    ctx->pc = 0x2bc474u;
    // NOP
    // 0x2bc478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc480: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC480u;
    {
        const bool branch_taken_0x2bc480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc480) {
            ctx->pc = 0x2BC49Cu;
            goto label_2bc49c;
        }
    }
    ctx->pc = 0x2BC488u;
    // 0x2bc488: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bc488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc48c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC48Cu;
    {
        const bool branch_taken_0x2bc48c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC48Cu;
        // 0x2bc490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc48c) {
            ctx->pc = 0x2BC49Cu;
            goto label_2bc49c;
        }
    }
    ctx->pc = 0x2BC494u;
    // 0x2bc494: 0xc0af084  jal         func_2BC210
    ctx->pc = 0x2BC494u;
    SET_GPR_U32(ctx, 31, 0x2BC49Cu);
    ctx->pc = 0x2BC498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC494u;
    // 0x2bc498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC210u, 0x2BC494u, 0x2BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC49Cu;
label_2bc49c:
    // 0x2bc49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4A0u;
        // 0x2bc4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC4A8u;
}
