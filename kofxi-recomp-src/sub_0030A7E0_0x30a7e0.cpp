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

// Function: sub_0030A7E0
// Address: 0x30a7e0 - 0x30a910
void sub_0030A7E0_0x30a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A7E0_0x30a7e0");
#endif

    switch (ctx->pc) {
        case 0x30a80cu: goto label_30a80c;
        case 0x30a820u: goto label_30a820;
        case 0x30a868u: goto label_30a868;
        case 0x30a880u: goto label_30a880;
        case 0x30a8b0u: goto label_30a8b0;
        case 0x30a8c0u: goto label_30a8c0;
        case 0x30a8f0u: goto label_30a8f0;
        default: break;
    }

    ctx->pc = 0x30a7e0u;

    // 0x30a7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a7e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30a7e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a7ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a7f0: 0x3c1201d3  lui         $s2, 0x1D3
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)467 << 16));
    // 0x30a7f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a7f8: 0x3c1101d3  lui         $s1, 0x1D3
    ctx->pc = 0x30a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)467 << 16));
    // 0x30a7fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30a7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a800: 0x26524520  addiu       $s2, $s2, 0x4520
    ctx->pc = 0x30a800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17696));
    // 0x30a804: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30A804u;
    {
        const bool branch_taken_0x30a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A804u;
        // 0x30a808: 0x26313bc0  addiu       $s1, $s1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a804) {
            ctx->pc = 0x30A8C8u;
            goto label_30a8c8;
        }
    }
    ctx->pc = 0x30A80Cu;
label_30a80c:
    // 0x30a80c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30a810: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x30a810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30a814: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30a818: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A818u;
    {
        const bool branch_taken_0x30a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a818) {
            ctx->pc = 0x30A840u;
            goto label_30a840;
        }
    }
    ctx->pc = 0x30A820u;
label_30a820:
    // 0x30a820: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x30a820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x30a824: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30a828: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30a828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x30a82c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x30a82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30a830: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30a834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30A834u;
    {
        const bool branch_taken_0x30a834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a834) {
            ctx->pc = 0x30A820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a820;
        }
    }
    ctx->pc = 0x30A83Cu;
    // 0x30a83c: 0x0  nop
    ctx->pc = 0x30a83cu;
    // NOP
label_30a840:
    // 0x30a840: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30a844: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x30a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x30a848: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x30a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30a84c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A850u;
    {
        const bool branch_taken_0x30a850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a850) {
            ctx->pc = 0x30A870u;
            goto label_30a870;
        }
    }
    ctx->pc = 0x30A858u;
    // 0x30a858: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30A858u;
    {
        const bool branch_taken_0x30a858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a858) {
            ctx->pc = 0x30A888u;
            goto label_30a888;
        }
    }
    ctx->pc = 0x30A860u;
    // 0x30a860: 0xc069dfc  jal         func_1A77F0
    ctx->pc = 0x30A860u;
    SET_GPR_U32(ctx, 31, 0x30A868u);
    ctx->pc = 0x1A77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77F0u, 0x30A860u, 0x30A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A868u;
label_30a868:
    // 0x30a868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A868u;
    {
        const bool branch_taken_0x30a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A868u;
        // 0x30a86c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a868) {
            ctx->pc = 0x30A888u;
            goto label_30a888;
        }
    }
    ctx->pc = 0x30A870u;
label_30a870:
    // 0x30a870: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A870u;
    {
        const bool branch_taken_0x30a870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a870) {
            ctx->pc = 0x30A888u;
            goto label_30a888;
        }
    }
    ctx->pc = 0x30A878u;
    // 0x30a878: 0xc069e6c  jal         func_1A79B0
    ctx->pc = 0x30A878u;
    SET_GPR_U32(ctx, 31, 0x30A880u);
    ctx->pc = 0x1A79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A79B0u, 0x30A878u, 0x30A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A880u;
label_30a880:
    // 0x30a880: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30a880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a884: 0x0  nop
    ctx->pc = 0x30a884u;
    // NOP
label_30a888:
    // 0x30a888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30a88c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30a890: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30a894: 0xac4320c0  sw          $v1, 0x20C0($v0)
    ctx->pc = 0x30a894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 3));
    // 0x30a898: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x30a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a89c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x30a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x30a8a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A8A0u;
    {
        const bool branch_taken_0x30a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a8a0) {
            ctx->pc = 0x30A8B8u;
            goto label_30a8b8;
        }
    }
    ctx->pc = 0x30A8A8u;
    // 0x30a8a8: 0xc0c27b0  jal         func_309EC0
    ctx->pc = 0x30A8A8u;
    SET_GPR_U32(ctx, 31, 0x30A8B0u);
    ctx->pc = 0x309EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309EC0u, 0x30A8A8u, 0x30A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B0u;
label_30a8b0:
    // 0x30a8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30A8B0u;
    {
        const bool branch_taken_0x30a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a8b0) {
            ctx->pc = 0x30A8C0u;
            goto label_30a8c0;
        }
    }
    ctx->pc = 0x30A8B8u;
label_30a8b8:
    // 0x30a8b8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x30A8B8u;
    SET_GPR_U32(ctx, 31, 0x30A8C0u);
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x30A8B8u, 0x30A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8C0u;
label_30a8c0:
    // 0x30a8c0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x30a8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x30a8c4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30a8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30a8c8:
    // 0x30a8c8: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a8cc: 0x8c653bb0  lw          $a1, 0x3BB0($v1)
    ctx->pc = 0x30a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15280)));
    // 0x30a8d0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a8d4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x30a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30a8d8: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x30A8D8u;
    {
        const bool branch_taken_0x30a8d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8D8u;
        // 0x30a8dc: 0xac643bb0  sw          $a0, 0x3BB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8d8) {
            ctx->pc = 0x30A80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a80c;
        }
    }
    ctx->pc = 0x30A8E0u;
    // 0x30a8e0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A8E0u;
    {
        const bool branch_taken_0x30a8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a8e0) {
            ctx->pc = 0x30A8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A8E0u;
            // 0x30a8e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A8F4u;
            goto label_30a8f4;
        }
    }
    ctx->pc = 0x30A8E8u;
    // 0x30a8e8: 0xc069dfc  jal         func_1A77F0
    ctx->pc = 0x30A8E8u;
    SET_GPR_U32(ctx, 31, 0x30A8F0u);
    ctx->pc = 0x1A77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77F0u, 0x30A8E8u, 0x30A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8F0u;
label_30a8f0:
    // 0x30a8f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30a8f4:
    // 0x30a8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a900: 0x3e00008  jr          $ra
    ctx->pc = 0x30A900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A900u;
        // 0x30a904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A908u;
    // 0x30a908: 0x0  nop
    ctx->pc = 0x30a908u;
    // NOP
    // 0x30a90c: 0x0  nop
    ctx->pc = 0x30a90cu;
    // NOP
    if (ctx->pc == 0x30a90cu) { ctx->pc = 0x30a910u; }
}
