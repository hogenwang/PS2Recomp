#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034A7D0
// Address: 0x34a7d0 - 0x34a8a0
void sub_0034A7D0_0x34a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A7D0_0x34a7d0");
#endif

    switch (ctx->pc) {
        case 0x34a810u: goto label_34a810;
        case 0x34a82cu: goto label_34a82c;
        case 0x34a880u: goto label_34a880;
        default: break;
    }

    ctx->pc = 0x34a7d0u;

    // 0x34a7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a7d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a7d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a7dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a7e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34a7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a7e8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x34a7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34a7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a7f0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A7F0u;
    {
        const bool branch_taken_0x34a7f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A7F0u;
            // 0x34a7f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7f0) {
            ctx->pc = 0x34A850u;
            goto label_34a850;
        }
    }
    ctx->pc = 0x34A7F8u;
    // 0x34a7f8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x34a7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x34a7fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a800: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x34a800u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x34a804: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x34a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a80c: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x34a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_34a810:
    // 0x34a810: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34a814: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34a818: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x34a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34a81c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34a820: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x34a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x34a824: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A824u;
    SET_GPR_U32(ctx, 31, 0x34A82Cu);
    ctx->pc = 0x34A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A824u;
            // 0x34a828: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (runtime->hasFunction(0x3429B0u)) {
        auto targetFn = runtime->lookupFunction(0x3429B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A82Cu; }
        if (ctx->pc != 0x34A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003429B0_0x3429b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A82Cu; }
        if (ctx->pc != 0x34A82Cu) { return; }
    }
    ctx->pc = 0x34A82Cu;
label_34a82c:
    // 0x34a82c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A82Cu;
    {
        const bool branch_taken_0x34a82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a82c) {
            ctx->pc = 0x34A830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34A82Cu;
            // 0x34a830: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34A83Cu;
            goto label_34a83c;
        }
    }
    ctx->pc = 0x34A834u;
    // 0x34a834: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34A834u;
    {
        const bool branch_taken_0x34a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A834u;
            // 0x34a838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a834) {
            ctx->pc = 0x34A884u;
            goto label_34a884;
        }
    }
    ctx->pc = 0x34A83Cu;
label_34a83c:
    // 0x34a83c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x34a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x34a840: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x34a840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x34a844: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x34a844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34a848: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x34A848u;
    {
        const bool branch_taken_0x34a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A848u;
            // 0x34a84c: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a848) {
            ctx->pc = 0x34A810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a810;
        }
    }
    ctx->pc = 0x34A850u;
label_34a850:
    // 0x34a850: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x34a850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x34a854: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x34a854u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x34a858: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34a85c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34a860: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34a864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34a868: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34a868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34a86c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34a870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a874: 0x24849510  addiu       $a0, $a0, -0x6AF0
    ctx->pc = 0x34a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939920));
    // 0x34a878: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A878u;
    SET_GPR_U32(ctx, 31, 0x34A880u);
    ctx->pc = 0x34A87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34A878u;
            // 0x34a87c: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (runtime->hasFunction(0x3429B0u)) {
        auto targetFn = runtime->lookupFunction(0x3429B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A880u; }
        if (ctx->pc != 0x34A880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003429B0_0x3429b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34A880u; }
        if (ctx->pc != 0x34A880u) { return; }
    }
    ctx->pc = 0x34A880u;
label_34a880:
    // 0x34a880: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34a880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34a884:
    // 0x34a884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a898: 0x3e00008  jr          $ra
    ctx->pc = 0x34A898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34A898u;
            // 0x34a89c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34A8A0u;
    ctx->pc = 0x34a8a0u;
}
