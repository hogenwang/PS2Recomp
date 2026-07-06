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

// Function: kofxiThreadRequestQueueHelpers
// Address: 0x10d878 - 0x10da38
void kofxiThreadRequestQueueHelpers_0x10d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadRequestQueueHelpers_0x10d878");
#endif

    switch (ctx->pc) {
        case 0x10d8a8u: goto label_10d8a8;
        case 0x10d8b0u: goto label_10d8b0;
        case 0x10d8c8u: goto label_10d8c8;
        case 0x10d8f0u: goto label_10d8f0;
        case 0x10d910u: goto label_10d910;
        case 0x10d930u: goto label_10d930;
        case 0x10d950u: goto label_10d950;
        case 0x10d9a0u: goto label_10d9a0;
        case 0x10d9a8u: goto label_10d9a8;
        case 0x10da00u: goto label_10da00;
        case 0x10da10u: goto label_10da10;
        case 0x10da20u: goto label_10da20;
        case 0x10da30u: goto label_10da30;
        default: break;
    }

    ctx->pc = 0x10d878u;

    // 0x10d878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d87c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d880: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d88c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d890: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d894: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d898: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D898u;
    {
        const bool branch_taken_0x10d898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d898) {
            ctx->pc = 0x10D8A8u;
            goto label_10d8a8;
        }
    }
    ctx->pc = 0x10D8A0u;
    // 0x10d8a0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D8A0u;
    SET_GPR_U32(ctx, 31, 0x10D8A8u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10D8A0u, 0x10D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8A8u;
label_10d8a8:
    // 0x10d8a8: 0xc043270  jal         func_10C9C0
    ctx->pc = 0x10D8A8u;
    SET_GPR_U32(ctx, 31, 0x10D8B0u);
    ctx->pc = 0x10D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8A8u;
    // 0x10d8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9C0u, 0x10D8A8u, 0x10D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8B0u;
label_10d8b0:
    // 0x10d8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8b4: 0xf  sync
    ctx->pc = 0x10d8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d8b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D8B8u;
    {
        const bool branch_taken_0x10d8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8B8u;
        // 0x10d8bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8b8) {
            ctx->pc = 0x10D8CCu;
            goto label_10d8cc;
        }
    }
    ctx->pc = 0x10D8C0u;
    // 0x10d8c0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D8C0u;
    SET_GPR_U32(ctx, 31, 0x10D8C8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10D8C0u, 0x10D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8C8u;
label_10d8c8:
    // 0x10d8c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d8cc:
    // 0x10d8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d8d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D8u;
        // 0x10d8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D8E0u;
    // 0x10d8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d8e8: 0xc043280  jal         func_10CA00
    ctx->pc = 0x10D8E8u;
    SET_GPR_U32(ctx, 31, 0x10D8F0u);
    ctx->pc = 0x10CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA00u, 0x10D8E8u, 0x10D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8F0u;
label_10d8f0:
    // 0x10d8f0: 0xf  sync
    ctx->pc = 0x10d8f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8F8u;
        // 0x10d8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D900u;
    // 0x10d900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d908: 0xc043284  jal         func_10CA10
    ctx->pc = 0x10D908u;
    SET_GPR_U32(ctx, 31, 0x10D910u);
    ctx->pc = 0x10CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA10u, 0x10D908u, 0x10D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D910u;
label_10d910:
    // 0x10d910: 0xf  sync
    ctx->pc = 0x10d910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d918: 0x3e00008  jr          $ra
    ctx->pc = 0x10D918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D918u;
        // 0x10d91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D920u;
    // 0x10d920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d928: 0xc043288  jal         func_10CA20
    ctx->pc = 0x10D928u;
    SET_GPR_U32(ctx, 31, 0x10D930u);
    ctx->pc = 0x10CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA20u, 0x10D928u, 0x10D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D930u;
label_10d930:
    // 0x10d930: 0xf  sync
    ctx->pc = 0x10d930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d938: 0x3e00008  jr          $ra
    ctx->pc = 0x10D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D938u;
        // 0x10d93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D940u;
    // 0x10d940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d948: 0xc04328c  jal         func_10CA30
    ctx->pc = 0x10D948u;
    SET_GPR_U32(ctx, 31, 0x10D950u);
    ctx->pc = 0x10CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA30u, 0x10D948u, 0x10D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D950u;
label_10d950:
    // 0x10d950: 0xf  sync
    ctx->pc = 0x10d950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d958: 0x3e00008  jr          $ra
    ctx->pc = 0x10D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D960u;
    // 0x10d960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d964: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d96c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10d970: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10d974: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x10d974u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x10d978: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d97c: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x10d97cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
    // 0x10d980: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10d984: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10d984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d98c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10d98cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d994: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x10d994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10d998: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10d99c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x10d99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_10d9a0:
    // 0x10d9a0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x10D9A0u;
    SET_GPR_U32(ctx, 31, 0x10D9A8u);
    ctx->pc = 0x10D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9A0u;
    // 0x10d9a4: 0x8ec45e80  lw          $a0, 0x5E80($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x10D9A0u, 0x10D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9A8u;
label_10d9a8:
    // 0x10d9a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d9ac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x10d9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x10d9b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x10d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10d9b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d9b8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x10d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x10d9bc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x10d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x10d9c0: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x10d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10d9c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10d9c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d9c8: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x10D9C8u;
    {
        const bool branch_taken_0x10d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x10D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9C8u;
        // 0x10d9cc: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9c8) {
            ctx->pc = 0x10DA08u;
            goto label_10da08;
        }
    }
    ctx->pc = 0x10D9D0u;
    // 0x10d9d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D9D0u;
    {
        const bool branch_taken_0x10d9d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D0u;
        // 0x10d9d4: 0x26a4a4e0  addiu       $a0, $s5, -0x5B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9d0) {
            ctx->pc = 0x10D9E8u;
            goto label_10d9e8;
        }
    }
    ctx->pc = 0x10D9D8u;
    // 0x10d9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D9D8u;
    {
        const bool branch_taken_0x10d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D8u;
        // 0x10d9dc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9d8) {
            ctx->pc = 0x10D9F8u;
            goto label_10d9f8;
        }
    }
    ctx->pc = 0x10D9E0u;
    // 0x10d9e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10D9E0u;
    {
        const bool branch_taken_0x10d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9e0) {
            ctx->pc = 0x10DA28u;
            goto label_10da28;
        }
    }
    ctx->pc = 0x10D9E8u;
label_10d9e8:
    // 0x10d9e8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x10D9E8u;
    {
        const bool branch_taken_0x10d9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9E8u;
        // 0x10d9ec: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9e8) {
            ctx->pc = 0x10DA18u;
            goto label_10da18;
        }
    }
    ctx->pc = 0x10D9F0u;
    // 0x10d9f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10D9F0u;
    {
        const bool branch_taken_0x10d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9f0) {
            ctx->pc = 0x10DA28u;
            goto label_10da28;
        }
    }
    ctx->pc = 0x10D9F8u;
label_10d9f8:
    // 0x10d9f8: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x10D9F8u;
    SET_GPR_U32(ctx, 31, 0x10DA00u);
    ctx->pc = 0x10D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9F8u;
    // 0x10d9fc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x10D9F8u, 0x10DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA00u;
label_10da00:
    // 0x10da00: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x10DA00u;
    {
        const bool branch_taken_0x10da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da00) {
            ctx->pc = 0x10D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9a0;
        }
    }
    ctx->pc = 0x10DA08u;
label_10da08:
    // 0x10da08: 0xc0432c4  jal         func_10CB10
    ctx->pc = 0x10DA08u;
    SET_GPR_U32(ctx, 31, 0x10DA10u);
    ctx->pc = 0x10DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA08u;
    // 0x10da0c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB10u, 0x10DA08u, 0x10DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x10DA10u;
    {
        const bool branch_taken_0x10da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da10) {
            ctx->pc = 0x10D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9a0;
        }
    }
    ctx->pc = 0x10DA18u;
label_10da18:
    // 0x10da18: 0xc0432f4  jal         func_10CBD0
    ctx->pc = 0x10DA18u;
    SET_GPR_U32(ctx, 31, 0x10DA20u);
    ctx->pc = 0x10DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA18u;
    // 0x10da1c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBD0u, 0x10DA18u, 0x10DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA20u;
label_10da20:
    // 0x10da20: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x10DA20u;
    {
        const bool branch_taken_0x10da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da20) {
            ctx->pc = 0x10D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9a0;
        }
    }
    ctx->pc = 0x10DA28u;
label_10da28:
    // 0x10da28: 0xc043e72  jal         func_10F9C8
    ctx->pc = 0x10DA28u;
    SET_GPR_U32(ctx, 31, 0x10DA30u);
    ctx->pc = 0x10F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9C8u, 0x10DA28u, 0x10DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA30u;
label_10da30:
    // 0x10da30: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x10DA30u;
    {
        const bool branch_taken_0x10da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da30) {
            ctx->pc = 0x10D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9a0;
        }
    }
    ctx->pc = 0x10DA38u;
}
