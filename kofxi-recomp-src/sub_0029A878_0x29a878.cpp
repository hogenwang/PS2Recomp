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

// Function: sub_0029A878
// Address: 0x29a878 - 0x29a938
void sub_0029A878_0x29a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A878_0x29a878");
#endif

    switch (ctx->pc) {
        case 0x29a8fcu: goto label_29a8fc;
        case 0x29a924u: goto label_29a924;
        default: break;
    }

    ctx->pc = 0x29a878u;

    // 0x29a878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a87c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29a87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a880: 0x2cc2008c  sltiu       $v0, $a2, 0x8C
    ctx->pc = 0x29a880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x29a884: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29A884u;
    {
        const bool branch_taken_0x29a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A884u;
        // 0x29a888: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a884) {
            ctx->pc = 0x29A8D4u;
            goto label_29a8d4;
        }
    }
    ctx->pc = 0x29A88Cu;
    // 0x29a88c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x29A88Cu;
    {
        const bool branch_taken_0x29a88c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A88Cu;
        // 0x29a890: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a88c) {
            ctx->pc = 0x29A8B8u;
            goto label_29a8b8;
        }
    }
    ctx->pc = 0x29A894u;
    // 0x29a894: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x29a898: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x29a898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29a89c: 0x24a255a0  addiu       $v0, $a1, 0x55A0
    ctx->pc = 0x29a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a8a8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A8A8u;
    {
        const bool branch_taken_0x29a8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8A8u;
        // 0x29a8ac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8a8) {
            ctx->pc = 0x29A8C0u;
            goto label_29a8c0;
        }
    }
    ctx->pc = 0x29A8B0u;
    // 0x29a8b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29A8B0u;
    {
        const bool branch_taken_0x29a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8B0u;
        // 0x29a8b4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8b0) {
            ctx->pc = 0x29A910u;
            goto label_29a910;
        }
    }
    ctx->pc = 0x29A8B8u;
label_29a8b8:
    // 0x29a8b8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x29a8bc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x29a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_29a8c0:
    // 0x29a8c0: 0x24a355a0  addiu       $v1, $a1, 0x55A0
    ctx->pc = 0x29a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a8c4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x29a8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a8c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a8cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29A8CCu;
    {
        const bool branch_taken_0x29a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8CCu;
        // 0x29a8d0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8cc) {
            ctx->pc = 0x29A928u;
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A8D4u;
label_29a8d4:
    // 0x29a8d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29a8d8: 0x8c4467e8  lw          $a0, 0x67E8($v0)
    ctx->pc = 0x29a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29a8dc: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A8DCu;
    {
        const bool branch_taken_0x29a8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8DCu;
        // 0x29a8e0: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8dc) {
            ctx->pc = 0x29A924u;
            goto label_29a924;
        }
    }
    ctx->pc = 0x29A8E4u;
    // 0x29a8e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a8e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29a8ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8f0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29a8f4: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29A8F4u;
    SET_GPR_U32(ctx, 31, 0x29A8FCu);
    ctx->pc = 0x29A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8F4u;
    // 0x29a8f8: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x29A8F4u, 0x29A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8FCu;
label_29a8fc:
    // 0x29a8fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8FCu;
        // 0x29a900: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A910u;
            goto label_29a910;
        }
    }
    ctx->pc = 0x29A904u;
    // 0x29a904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29A908u;
    {
        const bool branch_taken_0x29a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A908u;
        // 0x29a90c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a908) {
            ctx->pc = 0x29A928u;
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A910u;
label_29a910:
    // 0x29a910: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x29a910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x29a914: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x29a914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29a918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a91c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29A91Cu;
    SET_GPR_U32(ctx, 31, 0x29A924u);
    ctx->pc = 0x29A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A91Cu;
    // 0x29a920: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29A91Cu, 0x29A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A924u;
label_29a924:
    // 0x29a924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a928:
    // 0x29a928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a92c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A92Cu;
        // 0x29a930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A934u;
    // 0x29a934: 0x0  nop
    ctx->pc = 0x29a934u;
    // NOP
    if (ctx->pc == 0x29a934u) { ctx->pc = 0x29a938u; }
}
