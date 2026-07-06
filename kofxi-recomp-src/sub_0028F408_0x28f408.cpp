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

// Function: sub_0028F408
// Address: 0x28f408 - 0x28f498
void sub_0028F408_0x28f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F408_0x28f408");
#endif

    switch (ctx->pc) {
        case 0x28f408u: goto label_28f408;
        case 0x28f40cu: goto label_28f40c;
        case 0x28f410u: goto label_28f410;
        case 0x28f414u: goto label_28f414;
        case 0x28f418u: goto label_28f418;
        case 0x28f41cu: goto label_28f41c;
        case 0x28f420u: goto label_28f420;
        case 0x28f424u: goto label_28f424;
        case 0x28f428u: goto label_28f428;
        case 0x28f42cu: goto label_28f42c;
        case 0x28f430u: goto label_28f430;
        case 0x28f434u: goto label_28f434;
        case 0x28f438u: goto label_28f438;
        case 0x28f43cu: goto label_28f43c;
        case 0x28f440u: goto label_28f440;
        case 0x28f444u: goto label_28f444;
        case 0x28f448u: goto label_28f448;
        case 0x28f44cu: goto label_28f44c;
        case 0x28f450u: goto label_28f450;
        case 0x28f454u: goto label_28f454;
        case 0x28f458u: goto label_28f458;
        case 0x28f45cu: goto label_28f45c;
        case 0x28f460u: goto label_28f460;
        case 0x28f464u: goto label_28f464;
        case 0x28f468u: goto label_28f468;
        case 0x28f46cu: goto label_28f46c;
        case 0x28f470u: goto label_28f470;
        case 0x28f474u: goto label_28f474;
        case 0x28f478u: goto label_28f478;
        case 0x28f47cu: goto label_28f47c;
        case 0x28f480u: goto label_28f480;
        case 0x28f484u: goto label_28f484;
        case 0x28f488u: goto label_28f488;
        case 0x28f48cu: goto label_28f48c;
        case 0x28f490u: goto label_28f490;
        case 0x28f494u: goto label_28f494;
        default: break;
    }

    ctx->pc = 0x28f408u;

label_28f408:
    // 0x28f408: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f40c:
    // 0x28f40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f410:
    // 0x28f410: 0x8c42468c  lw          $v0, 0x468C($v0)
    ctx->pc = 0x28f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18060)));
label_28f414:
    // 0x28f414: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f418:
    if (ctx->pc == 0x28F418u) {
        ctx->pc = 0x28F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F414u;
        // 0x28f418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F41Cu;
        goto label_28f41c;
    }
    ctx->pc = 0x28F414u;
    {
        const bool branch_taken_0x28f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F414u;
        // 0x28f418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f414) {
            ctx->pc = 0x28F43Cu;
            goto label_28f43c;
        }
    }
    ctx->pc = 0x28F41Cu;
label_28f41c:
    // 0x28f41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f420:
    // 0x28f420: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f424:
    // 0x28f424: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x28f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_28f428:
    // 0x28f428: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f42c:
    // 0x28f42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f430:
    // 0x28f430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f434:
    // 0x28f434: 0x80a5648  j           func_295920
label_28f438:
    if (ctx->pc == 0x28F438u) {
        ctx->pc = 0x28F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F434u;
        // 0x28f438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F43Cu;
        goto label_28f43c;
    }
    ctx->pc = 0x28F434u;
    ctx->pc = 0x28F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F434u;
    // 0x28f438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28F43Cu;
label_28f43c:
    // 0x28f43c: 0x40f809  jalr        $v0
label_28f440:
    if (ctx->pc == 0x28F440u) {
        ctx->pc = 0x28F444u;
        goto label_28f444;
    }
    ctx->pc = 0x28F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F43Cu, 0x28F444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F444u;
label_28f444:
    // 0x28f444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f448:
    // 0x28f448: 0x3e00008  jr          $ra
label_28f44c:
    if (ctx->pc == 0x28F44Cu) {
        ctx->pc = 0x28F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F448u;
        // 0x28f44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F450u;
        goto label_28f450;
    }
    ctx->pc = 0x28F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F448u;
        // 0x28f44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F450u;
label_28f450:
    // 0x28f450: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f454:
    // 0x28f454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f458:
    // 0x28f458: 0x8c424690  lw          $v0, 0x4690($v0)
    ctx->pc = 0x28f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18064)));
label_28f45c:
    // 0x28f45c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f460:
    if (ctx->pc == 0x28F460u) {
        ctx->pc = 0x28F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F45Cu;
        // 0x28f460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F464u;
        goto label_28f464;
    }
    ctx->pc = 0x28F45Cu;
    {
        const bool branch_taken_0x28f45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F45Cu;
        // 0x28f460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f45c) {
            ctx->pc = 0x28F484u;
            goto label_28f484;
        }
    }
    ctx->pc = 0x28F464u;
label_28f464:
    // 0x28f464: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f468:
    // 0x28f468: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x28f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_28f46c:
    // 0x28f46c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f470:
    // 0x28f470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f474:
    // 0x28f474: 0xc0a5648  jal         func_295920
label_28f478:
    if (ctx->pc == 0x28F478u) {
        ctx->pc = 0x28F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F474u;
        // 0x28f478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F47Cu;
        goto label_28f47c;
    }
    ctx->pc = 0x28F474u;
    SET_GPR_U32(ctx, 31, 0x28F47Cu);
    ctx->pc = 0x28F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F474u;
    // 0x28f478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F474u, 0x28F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F47Cu;
label_28f47c:
    // 0x28f47c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f480:
    if (ctx->pc == 0x28F480u) {
        ctx->pc = 0x28F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F47Cu;
        // 0x28f480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F484u;
        goto label_28f484;
    }
    ctx->pc = 0x28F47Cu;
    {
        const bool branch_taken_0x28f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F47Cu;
        // 0x28f480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f47c) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F484u;
label_28f484:
    // 0x28f484: 0x40f809  jalr        $v0
label_28f488:
    if (ctx->pc == 0x28F488u) {
        ctx->pc = 0x28F48Cu;
        goto label_28f48c;
    }
    ctx->pc = 0x28F484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F48Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F484u, 0x28F48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F48Cu;
label_28f48c:
    // 0x28f48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f490:
    // 0x28f490: 0x3e00008  jr          $ra
label_28f494:
    if (ctx->pc == 0x28F494u) {
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F490u;
        // 0x28f494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F498u;
        goto label_fallthrough_0x28f490;
    }
    ctx->pc = 0x28F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F490u;
        // 0x28f494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f490:
    ctx->pc = 0x28F498u;
}
