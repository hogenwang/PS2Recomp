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

// Function: sub_0029A708
// Address: 0x29a708 - 0x29a7c0
void sub_0029A708_0x29a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A708_0x29a708");
#endif

    switch (ctx->pc) {
        case 0x29a788u: goto label_29a788;
        case 0x29a7acu: goto label_29a7ac;
        default: break;
    }

    ctx->pc = 0x29a708u;

    // 0x29a708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a70c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29a70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a710: 0x2cc2008c  sltiu       $v0, $a2, 0x8C
    ctx->pc = 0x29a710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x29a714: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29A714u;
    {
        const bool branch_taken_0x29a714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A714u;
        // 0x29a718: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a714) {
            ctx->pc = 0x29A760u;
            goto label_29a760;
        }
    }
    ctx->pc = 0x29A71Cu;
    // 0x29a71c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x29A71Cu;
    {
        const bool branch_taken_0x29a71c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A71Cu;
        // 0x29a720: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a71c) {
            ctx->pc = 0x29A748u;
            goto label_29a748;
        }
    }
    ctx->pc = 0x29A724u;
    // 0x29a724: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x29a728: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x29a728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29a72c: 0x24a255a0  addiu       $v0, $a1, 0x55A0
    ctx->pc = 0x29a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a734: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x29a734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a738: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A738u;
    {
        const bool branch_taken_0x29a738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A738u;
        // 0x29a73c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a738) {
            ctx->pc = 0x29A750u;
            goto label_29a750;
        }
    }
    ctx->pc = 0x29A740u;
    // 0x29a740: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29A740u;
    {
        const bool branch_taken_0x29a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A740u;
        // 0x29a744: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a740) {
            ctx->pc = 0x29A798u;
            goto label_29a798;
        }
    }
    ctx->pc = 0x29A748u;
label_29a748:
    // 0x29a748: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x29a74c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x29a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_29a750:
    // 0x29a750: 0x24a355a0  addiu       $v1, $a1, 0x55A0
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a754: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x29a754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a758: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29A758u;
    {
        const bool branch_taken_0x29a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A758u;
        // 0x29a75c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a758) {
            ctx->pc = 0x29A7B0u;
            goto label_29a7b0;
        }
    }
    ctx->pc = 0x29A760u;
label_29a760:
    // 0x29a760: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29a764: 0x8c4467e8  lw          $a0, 0x67E8($v0)
    ctx->pc = 0x29a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29a768: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A768u;
    {
        const bool branch_taken_0x29a768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A768u;
        // 0x29a76c: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a768) {
            ctx->pc = 0x29A7ACu;
            goto label_29a7ac;
        }
    }
    ctx->pc = 0x29A770u;
    // 0x29a770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a774: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29a774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29a778: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a77c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29a780: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29A780u;
    SET_GPR_U32(ctx, 31, 0x29A788u);
    ctx->pc = 0x29A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A780u;
    // 0x29a784: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x29A780u, 0x29A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A788u;
label_29a788:
    // 0x29a788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A788u;
    {
        const bool branch_taken_0x29a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A788u;
        // 0x29a78c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a788) {
            ctx->pc = 0x29A798u;
            goto label_29a798;
        }
    }
    ctx->pc = 0x29A790u;
    // 0x29a790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29A790u;
    {
        const bool branch_taken_0x29a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A790u;
        // 0x29a794: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a790) {
            ctx->pc = 0x29A7B0u;
            goto label_29a7b0;
        }
    }
    ctx->pc = 0x29A798u;
label_29a798:
    // 0x29a798: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x29a79c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x29a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29a7a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7a4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29A7A4u;
    SET_GPR_U32(ctx, 31, 0x29A7ACu);
    ctx->pc = 0x29A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7A4u;
    // 0x29a7a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29A7A4u, 0x29A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7ACu;
label_29a7ac:
    // 0x29a7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a7b0:
    // 0x29a7b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7B4u;
        // 0x29a7b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A7BCu;
    // 0x29a7bc: 0x0  nop
    ctx->pc = 0x29a7bcu;
    // NOP
    if (ctx->pc == 0x29a7bcu) { ctx->pc = 0x29a7c0u; }
}
