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

// Function: sub_001C6518
// Address: 0x1c6518 - 0x1c6590
void sub_001C6518_0x1c6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6518_0x1c6518");
#endif

    switch (ctx->pc) {
        case 0x1c6530u: goto label_1c6530;
        case 0x1c6548u: goto label_1c6548;
        case 0x1c6564u: goto label_1c6564;
        case 0x1c6570u: goto label_1c6570;
        case 0x1c6578u: goto label_1c6578;
        default: break;
    }

    ctx->pc = 0x1c6518u;

    // 0x1c6518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c651c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C651Cu;
    {
        const bool branch_taken_0x1c651c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C651Cu;
        // 0x1c6520: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c651c) {
            ctx->pc = 0x1C6538u;
            goto label_1c6538;
        }
    }
    ctx->pc = 0x1C6524u;
    // 0x1c6524: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6528: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6528u;
    SET_GPR_U32(ctx, 31, 0x1C6530u);
    ctx->pc = 0x1C652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6528u;
    // 0x1c652c: 0x2484a788  addiu       $a0, $a0, -0x5878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C6528u, 0x1C6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6530u;
label_1c6530:
    // 0x1c6530: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6530u;
    {
        const bool branch_taken_0x1c6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6530u;
        // 0x1c6534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6530) {
            ctx->pc = 0x1C653Cu;
            goto label_1c653c;
        }
    }
    ctx->pc = 0x1C6538u;
label_1c6538:
    // 0x1c6538: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1c653c:
    // 0x1c653c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6540: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6540u;
        // 0x1c6544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6548u;
label_1c6548:
    // 0x1c6548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c654c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c655c: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C655Cu;
    SET_GPR_U32(ctx, 31, 0x1C6564u);
    ctx->pc = 0x1C6560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C655Cu;
    // 0x1c6560: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C655Cu, 0x1C6564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6564u;
label_1c6564:
    // 0x1c6564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6568: 0xc071964  jal         func_1C6590
    ctx->pc = 0x1C6568u;
    SET_GPR_U32(ctx, 31, 0x1C6570u);
    ctx->pc = 0x1C656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6568u;
    // 0x1c656c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6590u, 0x1C6568u, 0x1C6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6570u;
label_1c6570:
    // 0x1c6570: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6570u;
    SET_GPR_U32(ctx, 31, 0x1C6578u);
    ctx->pc = 0x1C6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6570u;
    // 0x1c6574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C6570u, 0x1C6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6578u;
label_1c6578:
    // 0x1c6578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c657c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c657cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6588: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6588u;
        // 0x1c658c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6590u;
}
