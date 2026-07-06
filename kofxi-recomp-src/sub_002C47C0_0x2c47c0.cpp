#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C47C0
// Address: 0x2c47c0 - 0x2c4990
void sub_002C47C0_0x2c47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C47C0_0x2c47c0");
#endif

    switch (ctx->pc) {
        case 0x2c480cu: goto label_2c480c;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c487cu: goto label_2c487c;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c4900u: goto label_2c4900;
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4980u: goto label_2c4980;
        default: break;
    }

    ctx->pc = 0x2c47c0u;

    // 0x2c47c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c47c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c47c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c47cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c47ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c47d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c47d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c47d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c47d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c47d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c47d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c47dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c47dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c47e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c47e4: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c47e8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c47ec: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c47f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C47F0u;
    {
        const bool branch_taken_0x2c47f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C47F0u;
            // 0x2c47f4: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f0) {
            ctx->pc = 0x2C4804u;
            goto label_2c4804;
        }
    }
    ctx->pc = 0x2C47F8u;
    // 0x2c47f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c47fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C47FCu;
    {
        const bool branch_taken_0x2c47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C47FCu;
            // 0x2c4800: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47fc) {
            ctx->pc = 0x2C4824u;
            goto label_2c4824;
        }
    }
    ctx->pc = 0x2C4804u;
label_2c4804:
    // 0x2c4804: 0xc0b1264  jal         func_2C4990
    ctx->pc = 0x2C4804u;
    SET_GPR_U32(ctx, 31, 0x2C480Cu);
    ctx->pc = 0x2C4990u;
    if (runtime->hasFunction(0x2C4990u)) {
        auto targetFn = runtime->lookupFunction(0x2C4990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C480Cu; }
        if (ctx->pc != 0x2C480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4990_0x2c4990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C480Cu; }
        if (ctx->pc != 0x2C480Cu) { return; }
    }
    ctx->pc = 0x2C480Cu;
label_2c480c:
    // 0x2c480c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c480cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4810: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4810u;
    {
        const bool branch_taken_0x2c4810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4810) {
            ctx->pc = 0x2C4814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4810u;
            // 0x2c4814: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4824u;
            goto label_2c4824;
        }
    }
    ctx->pc = 0x2C4818u;
    // 0x2c4818: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2c481c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C481Cu;
    {
        const bool branch_taken_0x2c481c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C481Cu;
            // 0x2c4820: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c481c) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4824u;
label_2c4824:
    // 0x2c4824: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c4824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4828u;
    {
        const bool branch_taken_0x2c4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4828u;
            // 0x2c482c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4828) {
            ctx->pc = 0x2C4840u;
            goto label_2c4840;
        }
    }
    ctx->pc = 0x2C4830u;
    // 0x2c4830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4834: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c4834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c4838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4838u;
    {
        const bool branch_taken_0x2c4838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4838u;
            // 0x2c483c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4838) {
            ctx->pc = 0x2C4844u;
            goto label_2c4844;
        }
    }
    ctx->pc = 0x2C4840u;
label_2c4840:
    // 0x2c4840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4844:
    // 0x2c4844: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c4844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c4848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c484c: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C484Cu;
    SET_GPR_U32(ctx, 31, 0x2C4854u);
    ctx->pc = 0x2C4850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C484Cu;
            // 0x2c4850: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    }
    ctx->pc = 0x2C4854u;
label_2c4854:
    // 0x2c4854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4854u;
    {
        const bool branch_taken_0x2c4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4854u;
            // 0x2c4858: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4854) {
            ctx->pc = 0x2C4868u;
            goto label_2c4868;
        }
    }
    ctx->pc = 0x2C485Cu;
    // 0x2c485c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2c485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2c4860: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2C4860u;
    {
        const bool branch_taken_0x2c4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4860u;
            // 0x2c4864: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4860) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4868u;
label_2c4868:
    // 0x2c4868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c486c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c486cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c4870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4874: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C4874u;
    SET_GPR_U32(ctx, 31, 0x2C487Cu);
    ctx->pc = 0x2C4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4874u;
            // 0x2c4878: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (runtime->hasFunction(0x2C25C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C25C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C487Cu; }
        if (ctx->pc != 0x2C487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C25C0_0x2c25c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C487Cu; }
        if (ctx->pc != 0x2C487Cu) { return; }
    }
    ctx->pc = 0x2C487Cu;
label_2c487c:
    // 0x2c487c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C487Cu;
    {
        const bool branch_taken_0x2c487c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C487Cu;
            // 0x2c4880: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c487c) {
            ctx->pc = 0x2C4890u;
            goto label_2c4890;
        }
    }
    ctx->pc = 0x2C4884u;
    // 0x2c4884: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x2c4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2c4888: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4888u;
    {
        const bool branch_taken_0x2c4888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C488Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4888u;
            // 0x2c488c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4888) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4890u;
label_2c4890:
    // 0x2c4890: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c4894: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c4894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c4898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c489c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c489cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c48a0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c48a4: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c48a8: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c48a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c48ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c48acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48b0: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x2C48B0u;
    SET_GPR_U32(ctx, 31, 0x2C48B8u);
    ctx->pc = 0x2C48B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48B0u;
            // 0x2c48b4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (runtime->hasFunction(0x27F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x27F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48B8u; }
        if (ctx->pc != 0x2C48B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F1D8_0x27f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48B8u; }
        if (ctx->pc != 0x2C48B8u) { return; }
    }
    ctx->pc = 0x2C48B8u;
label_2c48b8:
    // 0x2c48b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C48B8u;
    {
        const bool branch_taken_0x2c48b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48B8u;
            // 0x2c48bc: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48b8) {
            ctx->pc = 0x2C48CCu;
            goto label_2c48cc;
        }
    }
    ctx->pc = 0x2C48C0u;
    // 0x2c48c0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2c48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2c48c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C48C4u;
    {
        const bool branch_taken_0x2c48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C48C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48C4u;
            // 0x2c48c8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48c4) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C48CCu;
label_2c48cc:
    // 0x2c48cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c48d0: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c48d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c48d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c48d8: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c48d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c48dc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c48dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c48e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c48e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C48E4u;
    {
        const bool branch_taken_0x2c48e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c48e4) {
            ctx->pc = 0x2C48F8u;
            goto label_2c48f8;
        }
    }
    ctx->pc = 0x2C48ECu;
    // 0x2c48ec: 0xc0a734a  jal         func_29CD28
    ctx->pc = 0x2C48ECu;
    SET_GPR_U32(ctx, 31, 0x2C48F4u);
    ctx->pc = 0x29CD28u;
    if (runtime->hasFunction(0x29CD28u)) {
        auto targetFn = runtime->lookupFunction(0x29CD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48F4u; }
        if (ctx->pc != 0x2C48F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CD28_0x29cd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48F4u; }
        if (ctx->pc != 0x2C48F4u) { return; }
    }
    ctx->pc = 0x2C48F4u;
label_2c48f4:
    // 0x2c48f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2c48f8:
    // 0x2c48f8: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C48F8u;
    SET_GPR_U32(ctx, 31, 0x2C4900u);
    ctx->pc = 0x2C48FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48F8u;
            // 0x2c48fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4900u; }
        if (ctx->pc != 0x2C4900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4900u; }
        if (ctx->pc != 0x2C4900u) { return; }
    }
    ctx->pc = 0x2C4900u;
label_2c4900:
    // 0x2c4900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4900u;
    {
        const bool branch_taken_0x2c4900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4900u;
            // 0x2c4904: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4900) {
            ctx->pc = 0x2C4914u;
            goto label_2c4914;
        }
    }
    ctx->pc = 0x2C4908u;
    // 0x2c4908: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2c490c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C490Cu;
    {
        const bool branch_taken_0x2c490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C490Cu;
            // 0x2c4910: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c490c) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4914u;
label_2c4914:
    // 0x2c4914: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4914u;
    {
        const bool branch_taken_0x2c4914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4914u;
            // 0x2c4918: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4914) {
            ctx->pc = 0x2C4920u;
            goto label_2c4920;
        }
    }
    ctx->pc = 0x2C491Cu;
    // 0x2c491c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c491cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c4920:
    // 0x2c4920: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C4920u;
    {
        const bool branch_taken_0x2c4920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4920u;
            // 0x2c4924: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4920) {
            ctx->pc = 0x2C4978u;
            goto label_2c4978;
        }
    }
    ctx->pc = 0x2C4928u;
label_2c4928:
    // 0x2c4928: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c492c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4930: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x2c4930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2c4934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4938: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C4938u;
    SET_GPR_U32(ctx, 31, 0x2C4940u);
    ctx->pc = 0x2C493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4938u;
            // 0x2c493c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4940u; }
        if (ctx->pc != 0x2C4940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4940u; }
        if (ctx->pc != 0x2C4940u) { return; }
    }
    ctx->pc = 0x2C4940u;
label_2c4940:
    // 0x2c4940: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4944: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c4948: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C4948u;
    SET_GPR_U32(ctx, 31, 0x2C4950u);
    ctx->pc = 0x2C494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4948u;
            // 0x2c494c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4950u; }
        if (ctx->pc != 0x2C4950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4950u; }
        if (ctx->pc != 0x2C4950u) { return; }
    }
    ctx->pc = 0x2C4950u;
label_2c4950:
    // 0x2c4950: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4950u;
    {
        const bool branch_taken_0x2c4950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4950u;
            // 0x2c4954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4950) {
            ctx->pc = 0x2C4978u;
            goto label_2c4978;
        }
    }
    ctx->pc = 0x2C4958u;
    // 0x2c4958: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4958u;
    {
        const bool branch_taken_0x2c4958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4958) {
            ctx->pc = 0x2C496Cu;
            goto label_2c496c;
        }
    }
    ctx->pc = 0x2C4960u;
    // 0x2c4960: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4964: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4964u;
    {
        const bool branch_taken_0x2c4964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4964u;
            // 0x2c4968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4964) {
            ctx->pc = 0x2C4978u;
            goto label_2c4978;
        }
    }
    ctx->pc = 0x2C496Cu;
label_2c496c:
    // 0x2c496c: 0xc0b1284  jal         func_2C4A10
    ctx->pc = 0x2C496Cu;
    SET_GPR_U32(ctx, 31, 0x2C4974u);
    ctx->pc = 0x2C4970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C496Cu;
            // 0x2c4970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A10u;
    if (runtime->hasFunction(0x2C4A10u)) {
        auto targetFn = runtime->lookupFunction(0x2C4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4974u; }
        if (ctx->pc != 0x2C4974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4A10_0x2c4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4974u; }
        if (ctx->pc != 0x2C4974u) { return; }
    }
    ctx->pc = 0x2C4974u;
label_2c4974:
    // 0x2c4974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4978:
    // 0x2c4978: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c4978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c497c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c497cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4980:
    // 0x2c4980: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c4980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4984: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c4984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4988: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4988u;
            // 0x2c498c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4990u;
    ctx->pc = 0x2c4990u;
}
