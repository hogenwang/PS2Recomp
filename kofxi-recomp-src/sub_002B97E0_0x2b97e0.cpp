#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B97E0
// Address: 0x2b97e0 - 0x2b98a0
void sub_002B97E0_0x2b97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97E0_0x2b97e0");
#endif

    switch (ctx->pc) {
        case 0x2b9828u: goto label_2b9828;
        case 0x2b9838u: goto label_2b9838;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9890u: goto label_2b9890;
        default: break;
    }

    ctx->pc = 0x2b97e0u;

    // 0x2b97e0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2b97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2b97e4: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B97E4u;
    {
        const bool branch_taken_0x2b97e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B97E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97E4u;
            // 0x2b97e8: 0x28820048  slti        $v0, $a0, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97e4) {
            ctx->pc = 0x2B9820u;
            goto label_2b9820;
        }
    }
    ctx->pc = 0x2B97ECu;
    // 0x2b97ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B97ECu;
    {
        const bool branch_taken_0x2b97ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97ECu;
            // 0x2b97f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97ec) {
            ctx->pc = 0x2B980Cu;
            goto label_2b980c;
        }
    }
    ctx->pc = 0x2B97F4u;
    // 0x2b97f4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B97F4u;
    {
        const bool branch_taken_0x2b97f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B97F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97F4u;
            // 0x2b97f8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97f4) {
            ctx->pc = 0x2B9820u;
            goto label_2b9820;
        }
    }
    ctx->pc = 0x2B97FCu;
    // 0x2b97fc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B97FCu;
    {
        const bool branch_taken_0x2b97fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97FCu;
            // 0x2b9800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97fc) {
            ctx->pc = 0x2B9820u;
            goto label_2b9820;
        }
    }
    ctx->pc = 0x2B9804u;
    // 0x2b9804: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9804u;
    {
        const bool branch_taken_0x2b9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9804) {
            ctx->pc = 0x2B982Cu;
            goto label_2b982c;
        }
    }
    ctx->pc = 0x2B980Cu;
label_2b980c:
    // 0x2b980c: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2b980cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2b9810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9810u;
    {
        const bool branch_taken_0x2b9810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9810u;
            // 0x2b9814: 0x28820077  slti        $v0, $a0, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)119) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9810) {
            ctx->pc = 0x2B9828u;
            goto label_2b9828;
        }
    }
    ctx->pc = 0x2B9818u;
    // 0x2b9818: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9818u;
    {
        const bool branch_taken_0x2b9818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9818u;
            // 0x2b981c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9818) {
            ctx->pc = 0x2B982Cu;
            goto label_2b982c;
        }
    }
    ctx->pc = 0x2B9820u;
label_2b9820:
    // 0x2b9820: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9820u;
            // 0x2b9824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9828u;
label_2b9828:
    // 0x2b9828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b982c:
    // 0x2b982c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B982Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9834u;
    // 0x2b9834: 0x0  nop
    ctx->pc = 0x2b9834u;
    // NOP
label_2b9838:
    // 0x2b9838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b983c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9840: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9844: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b9844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b9848: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b984c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2B984Cu;
    SET_GPR_U32(ctx, 31, 0x2B9854u);
    ctx->pc = 0x2B9850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B984Cu;
            // 0x2b9850: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9854u; }
        if (ctx->pc != 0x2B9854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9854u; }
        if (ctx->pc != 0x2B9854u) { return; }
    }
    ctx->pc = 0x2B9854u;
label_2b9854:
    // 0x2b9854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9858: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9858u;
            // 0x2b985c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9860u;
label_2b9860:
    // 0x2b9860: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9864: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b9868: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2b9868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2b986c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2b986cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2b9870: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x2b9870u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b9874: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x2b9874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b9878: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2b9878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2b987c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b9880: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9880u;
    {
        const bool branch_taken_0x2b9880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9880u;
            // 0x2b9884: 0x45202b  sltu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9880) {
            ctx->pc = 0x2B9890u;
            goto label_2b9890;
        }
    }
    ctx->pc = 0x2B9888u;
    // 0x2b9888: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9888u;
            // 0x2b988c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9890u;
label_2b9890:
    // 0x2b9890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9898: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9898u;
            // 0x2b989c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B98A0u;
    ctx->pc = 0x2b98a0u;
}
