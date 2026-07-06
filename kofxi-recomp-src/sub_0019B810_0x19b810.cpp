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

// Function: sub_0019B810
// Address: 0x19b810 - 0x19b8c0
void sub_0019B810_0x19b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B810_0x19b810");
#endif

    switch (ctx->pc) {
        case 0x19b884u: goto label_19b884;
        case 0x19b89cu: goto label_19b89c;
        default: break;
    }

    ctx->pc = 0x19b810u;

    // 0x19b810: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x19b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x19b814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b81c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x19b81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19b820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b82c: 0xffa500d8  sd          $a1, 0xD8($sp)
    ctx->pc = 0x19b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 5));
    // 0x19b830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b834: 0xffa600e0  sd          $a2, 0xE0($sp)
    ctx->pc = 0x19b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 6));
    // 0x19b838: 0xffa700e8  sd          $a3, 0xE8($sp)
    ctx->pc = 0x19b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 7));
    // 0x19b83c: 0xffa800f0  sd          $t0, 0xF0($sp)
    ctx->pc = 0x19b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 8));
    // 0x19b840: 0xffa900f8  sd          $t1, 0xF8($sp)
    ctx->pc = 0x19b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 9));
    // 0x19b844: 0xffaa0100  sd          $t2, 0x100($sp)
    ctx->pc = 0x19b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 10));
    // 0x19b848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B848u;
    {
        const bool branch_taken_0x19b848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B848u;
        // 0x19b84c: 0xffab0108  sd          $t3, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b848) {
            ctx->pc = 0x19B858u;
            goto label_19b858;
        }
    }
    ctx->pc = 0x19B850u;
    // 0x19b850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B850u;
    {
        const bool branch_taken_0x19b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B850u;
        // 0x19b854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b850) {
            ctx->pc = 0x19B864u;
            goto label_19b864;
        }
    }
    ctx->pc = 0x19B858u;
label_19b858:
    // 0x19b858: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b85c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b860: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19b864:
    // 0x19b864: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x19b868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b86c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b870: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x19b870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b874: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x19b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19b878: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19b87c: 0xc04b984  jal         func_12E610
    ctx->pc = 0x19B87Cu;
    SET_GPR_U32(ctx, 31, 0x19B884u);
    ctx->pc = 0x19B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B87Cu;
    // 0x19b880: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x19B87Cu, 0x19B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B884u;
label_19b884:
    // 0x19b884: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x19b884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x19b888: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b88c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19b88cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19b890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b894: 0xc0c7bd8  jal         func_31EF60
    ctx->pc = 0x19B894u;
    SET_GPR_U32(ctx, 31, 0x19B89Cu);
    ctx->pc = 0x19B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B894u;
    // 0x19b898: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF60u, 0x19B894u, 0x19B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B89Cu;
label_19b89c:
    // 0x19b89c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19b89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b8a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8B0u;
        // 0x19b8b4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8B8u;
    // 0x19b8b8: 0x0  nop
    ctx->pc = 0x19b8b8u;
    // NOP
    // 0x19b8bc: 0x0  nop
    ctx->pc = 0x19b8bcu;
    // NOP
    if (ctx->pc == 0x19b8bcu) { ctx->pc = 0x19b8c0u; }
}
