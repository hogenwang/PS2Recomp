#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001664F0
// Address: 0x1664f0 - 0x166560
void sub_001664F0_0x1664f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001664F0_0x1664f0");
#endif

    switch (ctx->pc) {
        case 0x166518u: goto label_166518;
        case 0x16653cu: goto label_16653c;
        default: break;
    }

    ctx->pc = 0x1664f0u;

    // 0x1664f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1664f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1664f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1664f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1664f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1664f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1664fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1664fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166504: 0x908203c3  lbu         $v0, 0x3C3($a0)
    ctx->pc = 0x166504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 963)));
    // 0x166508: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166508u;
    {
        const bool branch_taken_0x166508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166508u;
            // 0x16650c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166508) {
            ctx->pc = 0x166524u;
            goto label_166524;
        }
    }
    ctx->pc = 0x166510u;
    // 0x166510: 0xc059958  jal         func_166560
    ctx->pc = 0x166510u;
    SET_GPR_U32(ctx, 31, 0x166518u);
    ctx->pc = 0x166514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166510u;
            // 0x166514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166560u;
    if (runtime->hasFunction(0x166560u)) {
        auto targetFn = runtime->lookupFunction(0x166560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166518u; }
        if (ctx->pc != 0x166518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166560_0x166560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166518u; }
        if (ctx->pc != 0x166518u) { return; }
    }
    ctx->pc = 0x166518u;
label_166518:
    // 0x166518: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x166518u;
    {
        const bool branch_taken_0x166518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166518) {
            ctx->pc = 0x16651Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166518u;
            // 0x16651c: 0x36100002  ori         $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166524u;
            goto label_166524;
        }
    }
    ctx->pc = 0x166520u;
    // 0x166520: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x166520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_166524:
    // 0x166524: 0x922203df  lbu         $v0, 0x3DF($s1)
    ctx->pc = 0x166524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 991)));
    // 0x166528: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x166528u;
    {
        const bool branch_taken_0x166528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166528) {
            ctx->pc = 0x16652Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166528u;
            // 0x16652c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16654Cu;
            goto label_16654c;
        }
    }
    ctx->pc = 0x166530u;
    // 0x166530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166534: 0xc059958  jal         func_166560
    ctx->pc = 0x166534u;
    SET_GPR_U32(ctx, 31, 0x16653Cu);
    ctx->pc = 0x166538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166534u;
            // 0x166538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166560u;
    if (runtime->hasFunction(0x166560u)) {
        auto targetFn = runtime->lookupFunction(0x166560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16653Cu; }
        if (ctx->pc != 0x16653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166560_0x166560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16653Cu; }
        if (ctx->pc != 0x16653Cu) { return; }
    }
    ctx->pc = 0x16653Cu;
label_16653c:
    // 0x16653c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x16653Cu;
    {
        const bool branch_taken_0x16653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16653c) {
            ctx->pc = 0x166540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16653Cu;
            // 0x166540: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166548u;
            goto label_166548;
        }
    }
    ctx->pc = 0x166544u;
    // 0x166544: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x166544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_166548:
    // 0x166548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x166548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16654c:
    // 0x16654c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166558: 0x3e00008  jr          $ra
    ctx->pc = 0x166558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166558u;
            // 0x16655c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166560u;
    ctx->pc = 0x166560u;
}
