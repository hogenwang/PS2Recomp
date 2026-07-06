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

// Function: sub_001CE9D0
// Address: 0x1ce9d0 - 0x1cffb8
void sub_001CE9D0_0x1ce9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE9D0_0x1ce9d0");
#endif

    switch (ctx->pc) {
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1ce9f8u: goto label_1ce9f8;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea88u: goto label_1cea88;
        case 0x1cea98u: goto label_1cea98;
        default: break;
    }

    ctx->pc = 0x1ce9d0u;

    // 0x1ce9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ce9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ce9dc: 0xc073a70  jal         func_1CE9C0
    ctx->pc = 0x1CE9DCu;
    SET_GPR_U32(ctx, 31, 0x1CE9E4u);
    ctx->pc = 0x1CE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9DCu;
    // 0x1ce9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9C0u, 0x1CE9DCu, 0x1CE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9E4u;
label_1ce9e4:
    // 0x1ce9e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1ce9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1ce9e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ce9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9F0u;
        // 0x1ce9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE9F8u;
label_1ce9f8:
    // 0x1ce9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cea00: 0xc073a70  jal         func_1CE9C0
    ctx->pc = 0x1CEA00u;
    SET_GPR_U32(ctx, 31, 0x1CEA08u);
    ctx->pc = 0x1CE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9C0u, 0x1CEA00u, 0x1CEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA08u;
label_1cea08:
    // 0x1cea08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cea0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cea10: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA10u;
        // 0x1cea14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA18u;
    // 0x1cea18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA20u;
    // 0x1cea20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA28u;
    // 0x1cea28: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA30u;
    // 0x1cea30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA38u;
    // 0x1cea38: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA40u;
    // 0x1cea40: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1cea40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea44: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1cea44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea48: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1cea4c: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x1cea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1cea50: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1cea50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cea54: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cea58: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1cea58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1cea5c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1cea5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cea60: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1cea64: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1cea68: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x1cea68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1cea6c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cea70: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1cea74: 0x1860054d  blez        $v1, . + 4 + (0x54D << 2)
    ctx->pc = 0x1CEA74u;
    {
        const bool branch_taken_0x1cea74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA74u;
        // 0x1cea78: 0x8d2b0004  lw          $t3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea74) {
            ctx->pc = 0x1CFFACu;
            goto label_1cffac;
        }
    }
    ctx->pc = 0x1CEA7Cu;
    // 0x1cea7c: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x1cea7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea80: 0x56a80  sll         $t5, $a1, 10
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1cea84: 0x0  nop
    ctx->pc = 0x1cea84u;
    // NOP
label_1cea88:
    // 0x1cea88: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1cea88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea8c: 0x18a00544  blez        $a1, . + 4 + (0x544 << 2)
    ctx->pc = 0x1CEA8Cu;
    {
        const bool branch_taken_0x1cea8c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1CEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA8Cu;
        // 0x1cea90: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea8c) {
            ctx->pc = 0x1CFFA0u;
            goto label_1cffa0;
        }
    }
    ctx->pc = 0x1CEA94u;
    // 0x1cea94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1cea94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cea98:
    // 0x1cea98: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cea98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cea9c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1ceaa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceaa4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceaa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceaac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ceaacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ceab0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1ceab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ceab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceab8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceabc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceac0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ceac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ceac4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1ceac4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ceac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceacc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cead0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cead4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cead4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cead8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cead8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ceadc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceae0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceae8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1ceae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1ceaec: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1ceaecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ceaf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceaf4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceaf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceafc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1ceafcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1ceb00: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1ceb00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1ceb04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb10: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1ceb10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1ceb14: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1ceb14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1ceb18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb24: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1ceb24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1ceb28: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1ceb28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1ceb2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb38: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1ceb38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1ceb3c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1ceb3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1ceb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb4c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1ceb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1ceb50: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1ceb50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1ceb54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb60: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1ceb60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1ceb64: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1ceb64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1ceb68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb74: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1ceb74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1ceb78: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1ceb78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1ceb7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb88: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1ceb88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1ceb8c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1ceb8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1ceb90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceb94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceb98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb9c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1ceb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1ceba0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1ceba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1ceba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceba8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cebac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebb0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cebb4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cebb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cebb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cebbc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cebc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebc4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cebc8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cebc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cebcc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cebd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cebd4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cebd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebdc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cebe0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cebe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cebe4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cebe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cebec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cebf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cebf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebf8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cebf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cebfc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cec00: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cec00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cec04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec10: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cec10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cec14: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cec14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cec18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec24: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cec24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cec28: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cec28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cec2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec38: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cec38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cec3c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cec3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cec40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec4c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cec50: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cec50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cec54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec60: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cec60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cec64: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cec64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cec68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec74: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cec74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cec78: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cec78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cec7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec88: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cec88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cec8c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cec8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cec90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cec94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cec98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec9c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1ceca0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1ceca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1ceca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceca8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cecac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecb0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cecb4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cecb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cecb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cecbc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cecc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecc4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cecc8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cecc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1ceccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cecccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cecd0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cecd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecd8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cecdc: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cecdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cece0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cece0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cece4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cece8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecec: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cececu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cecf0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cecf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cecf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cecf8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cecfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced00: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1ced00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1ced04: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1ced04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1ced08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced14: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1ced14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1ced18: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1ced18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ced1c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1ced20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced24: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced2c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1ced2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1ced30: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1ced30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ced34: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ced38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ced44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ced44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced48: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1ced48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ced4c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1ced4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1ced50: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1ced50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ced54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced60: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ced60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ced64: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1ced64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ced68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced74: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ced78: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1ced78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ced7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced88: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1ced88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1ced8c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1ced8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ced90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ced90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ced94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ced94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ced98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced9c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1ced9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1ceda0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1ceda0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1ceda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceda8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cedac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cedacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cedb0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cedb4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cedb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cedb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cedbc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cedc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cedc4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cedc8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cedc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cedcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cedd0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cedd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cedd8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1ceddc: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1ceddcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cede0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cede0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cede4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cede8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cedec: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cedecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cedf0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cedf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cedf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cedf8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cedfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee00: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cee00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cee04: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cee04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cee08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee14: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cee14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cee18: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cee18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cee1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee28: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cee28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cee2c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cee2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cee30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee3c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cee40: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cee40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cee44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee50: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cee50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cee54: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cee54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cee58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee64: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cee64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cee68: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cee68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cee6c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cee70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee7c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cee80: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cee80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cee84: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cee88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cee8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cee90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cee94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cee98: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cee9c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1ceea0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1ceea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ceea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceea8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceeac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceeb0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ceeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ceeb4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ceeb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceebc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceec4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ceec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ceec8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1ceec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ceecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceed0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceed4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceed8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1ceed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1ceedc: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1ceedcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ceee0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceee4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceee8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceeec: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1ceeecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1ceef0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1ceef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1ceef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceef8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceefc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef00: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cef00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cef04: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cef04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cef08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef14: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cef14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cef18: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cef18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cef1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef28: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cef28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cef2c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cef2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cef30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef3c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cef40: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cef40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cef44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef50: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cef50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cef54: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cef54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cef58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef64: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cef64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cef68: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cef68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cef6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef70: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef78: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cef78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cef7c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cef7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cef80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef84: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cef8c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cef90: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cef90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cef94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cef94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cef98: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cef9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cefa0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cefa4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cefa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cefa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cefac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cefb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cefb4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cefb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cefb8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cefb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cefbc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cefc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cefc4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cefc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cefcc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cefccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cefd0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cefd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cefd4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cefd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cefdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cefe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cefe4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cefe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cefe8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cefe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cefec: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cefecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1ceff0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1ceff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ceff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceff8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ceffc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf000: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf004: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf004u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf00c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf014: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf018: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf01c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf020: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf024: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf028: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf02c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf02cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf034: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf038: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf03c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf03cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf040: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf048: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf04c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf050: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf054: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf05c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf060: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf064: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf068: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf06c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf070: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf078: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf07c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf07cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf084: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf088: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf08c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf08cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf090: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf098: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf09c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0a0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf0a4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf0ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0b4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf0b8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf0b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf0bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf0c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf0c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0c8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf0cc: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf0d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf0d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0dc: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf0e0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf0e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf0e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf0e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf0ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0f0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf0f4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf0f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf0f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf0fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf104: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf108: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf10c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf114: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf11c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf11cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf120: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf124: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf12c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf134: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf138: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf13c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf13cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf140: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf148: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf14c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf150: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf154: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf15c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf164: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf168: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf16c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf170: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf174: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf178: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf17c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf184: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf188: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf18c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf18cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf190: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf198: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf19c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf1a0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf1a4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf1ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf1b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf1b4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf1b8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf1c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf1c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf1c8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf1cc: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf1d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf1d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf1dc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf1e0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf1e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf1ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf1f0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf1f4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf1fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf204: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf208: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf210: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf214: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf218: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf21c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf21cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf224: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf22c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf230: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf230u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf238: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf23c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf240: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf244: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf244u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf24c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf254: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf258: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf25c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf264: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf26c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf26cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf270: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf274: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf27c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf288: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf28c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf290: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf298: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf29c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf2a0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf2a4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf2a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf2a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf2ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf2b4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf2b8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf2b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf2bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf2c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf2c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf2c8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf2cc: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf2ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf2d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf2d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf2d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf2dc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf2e0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf2e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf2e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf2ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf2f0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf2f4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf2fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf300: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf304: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf308: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf310: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf318: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf31c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf31cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf324: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf328: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf32c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf330: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf338: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf33c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf340: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf344: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf34c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf354: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf358: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf35c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf360: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf368: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf36c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf36cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf370: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf374: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf378: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf37c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf380: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf388: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf38c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf390: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf394: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf39c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf3a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf3a4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf3a8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf3ac: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf3b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf3b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf3bc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf3c0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf3c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf3c4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf3c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf3cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf3d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf3d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf3d8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf3dc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf3e0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf3e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf3e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf3e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf3ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf3f0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf3f4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf3f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf3f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf3fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf404: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf408: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf40c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf410: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf418: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf41c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf41cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf424: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf42c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf430: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf438: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf43c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf440: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf444: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf44c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf454: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf458: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf458u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf45c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf460: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf468: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf46c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf46cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf474: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf47c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf480: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf488: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf48c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf490: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf494: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf49c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf4a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf4a4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf4a8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf4a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf4ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf4b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf4b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf4b8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf4bc: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf4bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf4c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf4c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf4cc: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf4d0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf4d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf4d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf4dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf4e0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf4e4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf4e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf4e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf4ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf4f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf4f4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf4f8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf4f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf4fc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf50c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf510: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf510u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf514: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf51c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf524: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf528: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf52c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf52cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf530: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf538: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf53c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf540: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf544: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf54c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf550: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf554: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf558: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf55c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf560: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf568: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf56c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf56cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf574: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf57c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf580: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf588: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf590: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf594: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf59c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf5a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf5a4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf5a8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf5a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf5ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf5b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf5b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf5b8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf5bc: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf5bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf5c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf5c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf5cc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf5d0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf5d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf5dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf5e0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf5e4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf5ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf5f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf5f4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf5f8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf5f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf5fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf600: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf608: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf60c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf60cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf614: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf61c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf620: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf628: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf62c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf630: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf634: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf63c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf644: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf648: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf64c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf654: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf65c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf65cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf660: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf664: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf66c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf674: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf678: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf67c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf67cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf680: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf680u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf688: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf690: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf694: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf69c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf6a4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf6a8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf6a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf6ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf6b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf6b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf6b8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf6bc: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf6bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf6c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf6c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf6c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf6cc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf6d0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf6d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf6dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf6e0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf6e4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf6e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf6ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf6f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf6f4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf6f8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf6fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf700: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf708: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf70c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf70cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf714: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf71c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf720: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf728: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf72c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf730: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf734: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf73c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf744: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf744u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf748: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf748u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf750: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf758: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf75c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf75cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf764: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf76c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf76cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf770: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf770u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf778: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf77c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf780: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf784: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf78c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf794: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf798: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf79c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf7a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf7a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf7a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf7ac: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf7acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf7b0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf7b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf7b4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf7b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf7bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf7c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf7c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf7c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf7cc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf7d0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf7d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf7d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf7d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf7dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf7e0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf7e4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf7e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf7e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf7ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf7f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf7f4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf7f8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf7f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf7fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf800: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf808: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf80c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf80cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf814: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf81c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf81cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf820: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf828: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf82c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf830: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf834: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf834u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf83c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf844: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf848: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf84c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf850: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf854: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf858: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf85c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf85cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf864: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf86c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf86cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf870: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf87c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf880: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf884: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf888: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf88c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf894: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf898: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf89c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf8a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf8a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8a8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf8ac: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf8acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cf8b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf8b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8bc: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cf8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cf8c0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cf8c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cf8c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf8c8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf8cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8d0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cf8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cf8d4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cf8d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cf8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf8dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf8e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8e4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cf8e8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cf8e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cf8ec: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cf8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cf8f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf8f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf8f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8fc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cf8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cf900: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cf900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf904: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cf908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf90c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf914: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf918: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cf918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf91c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cf91cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cf920: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cf920u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf928: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf92c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf930: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cf930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cf934: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cf934u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cf938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf93c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf940: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf944: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cf948: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cf948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cf94c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf950: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf958: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cf958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cf95c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cf95cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cf960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf964: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf96c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cf96cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cf970: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cf970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cf974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf978: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf980: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cf980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cf984: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cf984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cf988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf98c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf994: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cf994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cf998: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cf998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cf99c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf9a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9a8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cf9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cf9ac: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cf9acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cf9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf9b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9bc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cf9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cf9c0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cf9c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cf9c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9c8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9d0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cf9d4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cf9d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cf9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf9e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9e4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cf9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cf9e8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cf9ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf9f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cf9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cf9f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf9f8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cf9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cf9fc: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cf9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cfa00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa0c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cfa10: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cfa10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cfa14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa20: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cfa24: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cfa24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cfa28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa34: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cfa38: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cfa38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cfa3c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cfa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cfa40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa4c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cfa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cfa50: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cfa50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfa54: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cfa58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cfa64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa68: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cfa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cfa6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cfa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cfa70: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cfa70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfa74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa80: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cfa80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cfa84: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cfa84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cfa88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfa8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfa90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfa94: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cfa98: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cfa98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cfa9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfaa0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfaa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfaa8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cfaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cfaac: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cfaacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cfab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfab4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfabc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cfac0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cfac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cfac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfac8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfad0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cfad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cfad4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cfad4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cfad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfadc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfae0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfae4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cfae8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cfae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cfaec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfaf0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfaf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfaf8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cfafc: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cfafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cfb00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb0c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cfb10: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cfb10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cfb14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb20: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cfb24: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cfb24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cfb28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb34: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cfb34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cfb38: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cfb38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cfb3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb48: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cfb4c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cfb4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cfb50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb5c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cfb60: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cfb60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cfb64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb70: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cfb70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cfb74: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cfb74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cfb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb84: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cfb88: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cfb88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cfb8c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cfb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cfb90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfb94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfb98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfb9c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cfba0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cfba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfba4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cfba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfbac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfbb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cfbb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfbb8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cfbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cfbbc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cfbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cfbc0: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfbc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfbc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfbcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfbd0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cfbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cfbd4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cfbd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cfbd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfbdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfbe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfbe4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cfbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cfbe8: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cfbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfbf0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfbf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfbf8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cfbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cfbfc: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cfbfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cfc00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc0c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cfc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cfc10: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cfc10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cfc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc20: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cfc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cfc24: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cfc24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cfc28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc34: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cfc34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cfc38: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cfc38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cfc3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc48: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cfc4c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cfc4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cfc50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc5c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cfc60: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cfc60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cfc64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc70: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cfc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cfc74: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cfc74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cfc78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc84: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cfc88: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cfc88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cfc8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfc90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfc94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfc98: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cfc9c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cfc9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cfca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfca4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfcac: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cfcb0: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cfcb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cfcb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfcb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfcbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfcc0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cfcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cfcc4: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cfcc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cfcc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfccc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfcd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfcd4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cfcd8: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cfcd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cfcdc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cfcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cfce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfce4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfcec: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cfcf0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cfcf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfcf4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cfcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cfcf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfcfc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cfd04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cfd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd08: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cfd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cfd0c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cfd10: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cfd10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfd14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd20: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cfd20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cfd24: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cfd24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cfd28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd34: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cfd38: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cfd38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cfd3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd48: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cfd4c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cfd4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cfd50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd5c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cfd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cfd60: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cfd60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cfd64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd70: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cfd70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cfd74: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cfd74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cfd78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd84: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cfd88: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cfd88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cfd8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfd90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfd94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd98: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cfd9c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cfd9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cfda0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfda4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfda8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfdac: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cfdacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cfdb0: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cfdb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfdb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfdbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfdc0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cfdc4: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cfdc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cfdc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfdcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfdd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfdd4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cfdd8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cfdd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cfddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfde0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfde4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfde8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cfde8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cfdec: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cfdecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cfdf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfdf4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfdf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfdfc: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cfdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cfe00: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cfe00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cfe04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe10: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cfe14: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cfe14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cfe18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe24: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cfe24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cfe28: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cfe28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cfe2c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cfe30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe3c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cfe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cfe40: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1cfe40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfe44: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1cfe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cfe48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cfe54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe58: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cfe58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cfe5c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1cfe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1cfe60: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1cfe60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfe64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe70: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1cfe70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1cfe74: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1cfe74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cfe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe84: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cfe84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cfe88: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1cfe88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1cfe8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfe90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfe94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfe98: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1cfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1cfe9c: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1cfe9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1cfea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfea4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfeac: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1cfeacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1cfeb0: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1cfeb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cfeb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfeb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfec0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1cfec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1cfec4: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1cfec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1cfec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfecc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfed4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1cfed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1cfed8: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1cfed8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1cfedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfee0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfee8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1cfee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1cfeec: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1cfeecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1cfef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cfef4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cfef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfefc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1cfefcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1cff00: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1cff00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1cff04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff10: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1cff10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1cff14: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1cff14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1cff18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff24: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1cff24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1cff28: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1cff28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1cff2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff38: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1cff38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1cff3c: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1cff3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cff40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff4c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1cff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1cff50: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1cff50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1cff54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff60: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1cff60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1cff64: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1cff64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1cff68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff74: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1cff74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1cff78: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1cff78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1cff7c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1cff80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff84: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cff88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff8c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1cff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1cff90: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cff94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cff98: 0x1540fabf  bnez        $t2, . + 4 + (-0x541 << 2)
    ctx->pc = 0x1CFF98u;
    {
        const bool branch_taken_0x1cff98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF98u;
        // 0x1cff9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff98) {
            ctx->pc = 0x1CEA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cea98;
        }
    }
    ctx->pc = 0x1CFFA0u;
label_1cffa0:
    // 0x1cffa0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1cffa0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1cffa4: 0x1580fab8  bnez        $t4, . + 4 + (-0x548 << 2)
    ctx->pc = 0x1CFFA4u;
    {
        const bool branch_taken_0x1cffa4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFA4u;
        // 0x1cffa8: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffa4) {
            ctx->pc = 0x1CEA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cea88;
        }
    }
    ctx->pc = 0x1CFFACu;
label_1cffac:
    // 0x1cffac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFB4u;
    // 0x1cffb4: 0x0  nop
    ctx->pc = 0x1cffb4u;
    // NOP
}
