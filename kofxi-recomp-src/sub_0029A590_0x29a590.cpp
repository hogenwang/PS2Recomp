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

// Function: sub_0029A590
// Address: 0x29a590 - 0x29a708
void sub_0029A590_0x29a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A590_0x29a590");
#endif

    switch (ctx->pc) {
        case 0x29a5c0u: goto label_29a5c0;
        case 0x29a5d0u: goto label_29a5d0;
        case 0x29a5f0u: goto label_29a5f0;
        case 0x29a614u: goto label_29a614;
        case 0x29a62cu: goto label_29a62c;
        case 0x29a644u: goto label_29a644;
        case 0x29a650u: goto label_29a650;
        case 0x29a674u: goto label_29a674;
        case 0x29a684u: goto label_29a684;
        case 0x29a6b8u: goto label_29a6b8;
        case 0x29a6ccu: goto label_29a6cc;
        case 0x29a6e4u: goto label_29a6e4;
        default: break;
    }

    ctx->pc = 0x29a590u;

    // 0x29a590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a594: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29a598: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x29a59c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29a5a0: 0x8e6267e8  lw          $v0, 0x67E8($s3)
    ctx->pc = 0x29a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26600)));
    // 0x29a5a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29a5ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29a5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29a5b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A5B0u;
    {
        const bool branch_taken_0x29a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5B0u;
        // 0x29a5b4: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5b0) {
            ctx->pc = 0x29A5C8u;
            goto label_29a5c8;
        }
    }
    ctx->pc = 0x29A5B8u;
    // 0x29a5b8: 0xc0a6914  jal         func_29A450
    ctx->pc = 0x29A5B8u;
    SET_GPR_U32(ctx, 31, 0x29A5C0u);
    ctx->pc = 0x29A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A450u, 0x29A5B8u, 0x29A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5C0u;
label_29a5c0:
    // 0x29a5c0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x29A5C0u;
    {
        const bool branch_taken_0x29a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5C0u;
        // 0x29a5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5c0) {
            ctx->pc = 0x29A6E8u;
            goto label_29a6e8;
        }
    }
    ctx->pc = 0x29A5C8u;
label_29a5c8:
    // 0x29a5c8: 0xc0a6bda  jal         func_29AF68
    ctx->pc = 0x29A5C8u;
    SET_GPR_U32(ctx, 31, 0x29A5D0u);
    ctx->pc = 0x29A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5C8u;
    // 0x29a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AF68u, 0x29A5C8u, 0x29A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5D0u;
label_29a5d0:
    // 0x29a5d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29a5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5d4: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x29A5D4u;
    {
        const bool branch_taken_0x29a5d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5D4u;
        // 0x29a5d8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5d4) {
            ctx->pc = 0x29A6ACu;
            goto label_29a6ac;
        }
    }
    ctx->pc = 0x29A5DCu;
    // 0x29a5dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29a5e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x29a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29a5e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x29a5e8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29A5E8u;
    SET_GPR_U32(ctx, 31, 0x29A5F0u);
    ctx->pc = 0x29A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5E8u;
    // 0x29a5ec: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29A5E8u, 0x29A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5F0u;
label_29a5f0:
    // 0x29a5f0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x29a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x29a5f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29a5f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A5F8u;
    {
        const bool branch_taken_0x29a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a5f8) {
            ctx->pc = 0x29A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A5F8u;
            // 0x29a5fc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A61Cu;
            goto label_29a61c;
        }
    }
    ctx->pc = 0x29A600u;
    // 0x29a600: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a604: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A604u;
    {
        const bool branch_taken_0x29a604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a604) {
            ctx->pc = 0x29A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A604u;
            // 0x29a608: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A61Cu;
            goto label_29a61c;
        }
    }
    ctx->pc = 0x29A60Cu;
    // 0x29a60c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29A60Cu;
    SET_GPR_U32(ctx, 31, 0x29A614u);
    ctx->pc = 0x29A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A60Cu;
    // 0x29a610: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29A60Cu, 0x29A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A614u;
label_29a614:
    // 0x29a614: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29a614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29a618: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29a61c:
    // 0x29a61c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A61Cu;
    {
        const bool branch_taken_0x29a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a61c) {
            ctx->pc = 0x29A620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A61Cu;
            // 0x29a620: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A634u;
            goto label_29a634;
        }
    }
    ctx->pc = 0x29A624u;
    // 0x29a624: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29A624u;
    SET_GPR_U32(ctx, 31, 0x29A62Cu);
    ctx->pc = 0x29A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A624u;
    // 0x29a628: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29A624u, 0x29A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A62Cu;
label_29a62c:
    // 0x29a62c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x29a630: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29a634:
    // 0x29a634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A634u;
    {
        const bool branch_taken_0x29a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A634u;
        // 0x29a638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a634) {
            ctx->pc = 0x29A64Cu;
            goto label_29a64c;
        }
    }
    ctx->pc = 0x29A63Cu;
    // 0x29a63c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29A63Cu;
    SET_GPR_U32(ctx, 31, 0x29A644u);
    ctx->pc = 0x29A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A63Cu;
    // 0x29a640: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29A63Cu, 0x29A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A644u;
label_29a644:
    // 0x29a644: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29a644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x29a648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a64c:
    // 0x29a64c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x29a64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29a650:
    // 0x29a650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a654: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29A654u;
    {
        const bool branch_taken_0x29a654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a654) {
            ctx->pc = 0x29A658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A654u;
            // 0x29a658: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A688u;
            goto label_29a688;
        }
    }
    ctx->pc = 0x29A65Cu;
    // 0x29a65c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x29a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x29a660: 0x8e6467e8  lw          $a0, 0x67E8($s3)
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26600)));
    // 0x29a664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a668: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x29a668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x29a66c: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x29A66Cu;
    SET_GPR_U32(ctx, 31, 0x29A674u);
    ctx->pc = 0x29A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A66Cu;
    // 0x29a670: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298770u, 0x29A66Cu, 0x29A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A674u;
label_29a674:
    // 0x29a674: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A674u;
    {
        const bool branch_taken_0x29a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a674) {
            ctx->pc = 0x29A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A674u;
            // 0x29a678: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A688u;
            goto label_29a688;
        }
    }
    ctx->pc = 0x29A67Cu;
    // 0x29a67c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29A67Cu;
    SET_GPR_U32(ctx, 31, 0x29A684u);
    ctx->pc = 0x29A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A67Cu;
    // 0x29a680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29A67Cu, 0x29A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A684u;
label_29a684:
    // 0x29a684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29a688:
    // 0x29a688: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x29a688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29a68c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29A68Cu;
    {
        const bool branch_taken_0x29a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A68Cu;
        // 0x29a690: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a68c) {
            ctx->pc = 0x29A650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a650;
        }
    }
    ctx->pc = 0x29A694u;
    // 0x29a694: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x29a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x29a698: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x29a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x29a69c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29a6a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x29a6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29a6a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29A6A4u;
    {
        const bool branch_taken_0x29a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6A4u;
        // 0x29a6a8: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6a4) {
            ctx->pc = 0x29A6E8u;
            goto label_29a6e8;
        }
    }
    ctx->pc = 0x29A6ACu;
label_29a6ac:
    // 0x29a6ac: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x29a6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6b0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29a6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a6b4: 0x0  nop
    ctx->pc = 0x29a6b4u;
    // NOP
label_29a6b8:
    // 0x29a6b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a6bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A6BCu;
    {
        const bool branch_taken_0x29a6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6BCu;
        // 0x29a6c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6bc) {
            ctx->pc = 0x29A6CCu;
            goto label_29a6cc;
        }
    }
    ctx->pc = 0x29A6C4u;
    // 0x29a6c4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29A6C4u;
    SET_GPR_U32(ctx, 31, 0x29A6CCu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29A6C4u, 0x29A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6CCu;
label_29a6cc:
    // 0x29a6cc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29A6CCu;
    {
        const bool branch_taken_0x29a6cc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x29A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6CCu;
        // 0x29a6d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6cc) {
            ctx->pc = 0x29A6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a6b8;
        }
    }
    ctx->pc = 0x29A6D4u;
    // 0x29a6d4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A6D4u;
    {
        const bool branch_taken_0x29a6d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6D4u;
        // 0x29a6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6d4) {
            ctx->pc = 0x29A6E8u;
            goto label_29a6e8;
        }
    }
    ctx->pc = 0x29A6DCu;
    // 0x29a6dc: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29A6DCu;
    SET_GPR_U32(ctx, 31, 0x29A6E4u);
    ctx->pc = 0x29A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A6DCu;
    // 0x29a6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29A6DCu, 0x29A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6E4u;
label_29a6e4:
    // 0x29a6e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a6e8:
    // 0x29a6e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29a6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a6ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29a6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a6f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29a6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a6f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29a6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a6f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29a6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6FCu;
        // 0x29a700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A704u;
    // 0x29a704: 0x0  nop
    ctx->pc = 0x29a704u;
    // NOP
}
