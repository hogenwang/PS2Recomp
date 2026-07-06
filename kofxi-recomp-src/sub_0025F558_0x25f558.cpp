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

// Function: sub_0025F558
// Address: 0x25f558 - 0x25f5d8
void sub_0025F558_0x25f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F558_0x25f558");
#endif

    switch (ctx->pc) {
        case 0x25f578u: goto label_25f578;
        case 0x25f58cu: goto label_25f58c;
        case 0x25f5a8u: goto label_25f5a8;
        case 0x25f5b0u: goto label_25f5b0;
        case 0x25f5bcu: goto label_25f5bc;
        default: break;
    }

    ctx->pc = 0x25f558u;

    // 0x25f558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25f564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f568: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f56c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25f570: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25F570u;
    SET_GPR_U32(ctx, 31, 0x25F578u);
    ctx->pc = 0x25F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F570u;
    // 0x25f574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25F570u, 0x25F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F578u;
label_25f578:
    // 0x25f578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f57c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x25F57Cu;
    {
        const bool branch_taken_0x25f57c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F57Cu;
        // 0x25f580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f57c) {
            ctx->pc = 0x25F5BCu;
            goto label_25f5bc;
        }
    }
    ctx->pc = 0x25F584u;
    // 0x25f584: 0xc09725c  jal         func_25C970
    ctx->pc = 0x25F584u;
    SET_GPR_U32(ctx, 31, 0x25F58Cu);
    ctx->pc = 0x25F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F584u;
    // 0x25f588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C970u, 0x25F584u, 0x25F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F58Cu;
label_25f58c:
    // 0x25f58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f590: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F590u;
    {
        const bool branch_taken_0x25f590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f590) {
            ctx->pc = 0x25F5A0u;
            goto label_25f5a0;
        }
    }
    ctx->pc = 0x25F598u;
    // 0x25f598: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F598u;
    {
        const bool branch_taken_0x25f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F598u;
        // 0x25f59c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f598) {
            ctx->pc = 0x25F5B0u;
            goto label_25f5b0;
        }
    }
    ctx->pc = 0x25F5A0u;
label_25f5a0:
    // 0x25f5a0: 0xc08b71c  jal         func_22DC70
    ctx->pc = 0x25F5A0u;
    SET_GPR_U32(ctx, 31, 0x25F5A8u);
    ctx->pc = 0x25F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5A0u;
    // 0x25f5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DC70u, 0x25F5A0u, 0x25F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5A8u;
label_25f5a8:
    // 0x25f5a8: 0xc09727c  jal         func_25C9F0
    ctx->pc = 0x25F5A8u;
    SET_GPR_U32(ctx, 31, 0x25F5B0u);
    ctx->pc = 0x25F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5A8u;
    // 0x25f5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C9F0u, 0x25F5A8u, 0x25F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5B0u;
label_25f5b0:
    // 0x25f5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5b4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F5B4u;
    SET_GPR_U32(ctx, 31, 0x25F5BCu);
    ctx->pc = 0x25F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5B4u;
    // 0x25f5b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F5B4u, 0x25F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5BCu;
label_25f5bc:
    // 0x25f5bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25f5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f5c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25f5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5CCu;
        // 0x25f5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F5D4u;
    // 0x25f5d4: 0x0  nop
    ctx->pc = 0x25f5d4u;
    // NOP
    if (ctx->pc == 0x25f5d4u) { ctx->pc = 0x25f5d8u; }
}
