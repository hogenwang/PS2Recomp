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

// Function: sub_0019B8C0
// Address: 0x19b8c0 - 0x19b970
void sub_0019B8C0_0x19b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B8C0_0x19b8c0");
#endif

    switch (ctx->pc) {
        case 0x19b938u: goto label_19b938;
        case 0x19b950u: goto label_19b950;
        default: break;
    }

    ctx->pc = 0x19b8c0u;

    // 0x19b8c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x19b8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b8c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b8cc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x19b8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19b8d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b8d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b8dc: 0xffa500d8  sd          $a1, 0xD8($sp)
    ctx->pc = 0x19b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 5));
    // 0x19b8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8e4: 0xffa600e0  sd          $a2, 0xE0($sp)
    ctx->pc = 0x19b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 6));
    // 0x19b8e8: 0xffa700e8  sd          $a3, 0xE8($sp)
    ctx->pc = 0x19b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 7));
    // 0x19b8ec: 0xffa800f0  sd          $t0, 0xF0($sp)
    ctx->pc = 0x19b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 8));
    // 0x19b8f0: 0xffa900f8  sd          $t1, 0xF8($sp)
    ctx->pc = 0x19b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 9));
    // 0x19b8f4: 0xffaa0100  sd          $t2, 0x100($sp)
    ctx->pc = 0x19b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 10));
    // 0x19b8f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B8F8u;
    {
        const bool branch_taken_0x19b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8F8u;
        // 0x19b8fc: 0xffab0108  sd          $t3, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8f8) {
            ctx->pc = 0x19B908u;
            goto label_19b908;
        }
    }
    ctx->pc = 0x19B900u;
    // 0x19b900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B900u;
    {
        const bool branch_taken_0x19b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B900u;
        // 0x19b904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b900) {
            ctx->pc = 0x19B914u;
            goto label_19b914;
        }
    }
    ctx->pc = 0x19B908u;
label_19b908:
    // 0x19b908: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b90c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b910: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19b910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19b914:
    // 0x19b914: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x19b918: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b91c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b920: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x19b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19b924: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x19b924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b928: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19b92c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x19b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19b930: 0xc04b984  jal         func_12E610
    ctx->pc = 0x19B930u;
    SET_GPR_U32(ctx, 31, 0x19B938u);
    ctx->pc = 0x19B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B930u;
    // 0x19b934: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x19B930u, 0x19B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B938u;
label_19b938:
    // 0x19b938: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x19b938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x19b93c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b940: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19b940u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19b944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19b944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b948: 0xc0c7bd8  jal         func_31EF60
    ctx->pc = 0x19B948u;
    SET_GPR_U32(ctx, 31, 0x19B950u);
    ctx->pc = 0x19B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B948u;
    // 0x19b94c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF60u, 0x19B948u, 0x19B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B950u;
label_19b950:
    // 0x19b950: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19b950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b964: 0x3e00008  jr          $ra
    ctx->pc = 0x19B964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B964u;
        // 0x19b968: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B96Cu;
    // 0x19b96c: 0x0  nop
    ctx->pc = 0x19b96cu;
    // NOP
    if (ctx->pc == 0x19b96cu) { ctx->pc = 0x19b970u; }
}
