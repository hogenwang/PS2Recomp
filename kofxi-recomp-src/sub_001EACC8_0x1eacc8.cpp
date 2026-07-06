#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EACC8
// Address: 0x1eacc8 - 0x1ead38
void sub_001EACC8_0x1eacc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EACC8_0x1eacc8");
#endif

    switch (ctx->pc) {
        case 0x1ead08u: goto label_1ead08;
        case 0x1ead20u: goto label_1ead20;
        default: break;
    }

    ctx->pc = 0x1eacc8u;

    // 0x1eacc8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eaccc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eacd0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eacd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eacd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1eacd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eacdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eacdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1eace0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eace4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eace8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eace8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eacec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1eacecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacf0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eacf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eacf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacf8: 0x26101390  addiu       $s0, $s0, 0x1390
    ctx->pc = 0x1eacf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5008));
    // 0x1eacfc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eacfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ead00: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EAD00u;
    SET_GPR_U32(ctx, 31, 0x1EAD08u);
    ctx->pc = 0x1EAD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD00u;
            // 0x1ead04: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD08u; }
        if (ctx->pc != 0x1EAD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD08u; }
        if (ctx->pc != 0x1EAD08u) { return; }
    }
    ctx->pc = 0x1EAD08u;
label_1ead08:
    // 0x1ead08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ead0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ead0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ead10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ead14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ead18: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EAD18u;
    SET_GPR_U32(ctx, 31, 0x1EAD20u);
    ctx->pc = 0x1EAD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD18u;
            // 0x1ead1c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD20u; }
        if (ctx->pc != 0x1EAD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD20u; }
        if (ctx->pc != 0x1EAD20u) { return; }
    }
    ctx->pc = 0x1EAD20u;
label_1ead20:
    // 0x1ead20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ead24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ead24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ead28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ead28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ead2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ead2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ead30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD30u;
            // 0x1ead34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAD38u;
    ctx->pc = 0x1ead38u;
}
