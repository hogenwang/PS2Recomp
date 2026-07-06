#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B760
// Address: 0x28b760 - 0x28b880
void sub_0028B760_0x28b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B760_0x28b760");
#endif

    switch (ctx->pc) {
        case 0x28b788u: goto label_28b788;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b818u: goto label_28b818;
        case 0x28b838u: goto label_28b838;
        case 0x28b840u: goto label_28b840;
        case 0x28b864u: goto label_28b864;
        default: break;
    }

    ctx->pc = 0x28b760u;

label_28b760:
    // 0x28b760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b764: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28b764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x28b768: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x28b768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b76c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x28b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x28b770: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x28b774: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28b778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b77c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28b780: 0xc0a1558  jal         func_285560
    ctx->pc = 0x28B780u;
    SET_GPR_U32(ctx, 31, 0x28B788u);
    ctx->pc = 0x28B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B780u;
            // 0x28b784: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B788u; }
        if (ctx->pc != 0x28B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B788u; }
        if (ctx->pc != 0x28B788u) { return; }
    }
    ctx->pc = 0x28B788u;
label_28b788:
    // 0x28b788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b78c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b790: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x28b790u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x28b794: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28b794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b798: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28b798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B79Cu;
            // 0x28b7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B7A4u;
    // 0x28b7a4: 0x0  nop
    ctx->pc = 0x28b7a4u;
    // NOP
label_28b7a8:
    // 0x28b7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b7ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b7b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28b7b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28b7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b7bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28b7c0: 0xc0a2e20  jal         func_28B880
    ctx->pc = 0x28B7C0u;
    SET_GPR_U32(ctx, 31, 0x28B7C8u);
    ctx->pc = 0x28B7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7C0u;
            // 0x28b7c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B880u;
    if (runtime->hasFunction(0x28B880u)) {
        auto targetFn = runtime->lookupFunction(0x28B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7C8u; }
        if (ctx->pc != 0x28B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B880_0x28b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7C8u; }
        if (ctx->pc != 0x28B7C8u) { return; }
    }
    ctx->pc = 0x28B7C8u;
label_28b7c8:
    // 0x28b7c8: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x28B7C8u;
    SET_GPR_U32(ctx, 31, 0x28B7D0u);
    ctx->pc = 0x28B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7C8u;
            // 0x28b7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (runtime->hasFunction(0x284F78u)) {
        auto targetFn = runtime->lookupFunction(0x284F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7D0u; }
        if (ctx->pc != 0x28B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F78_0x284f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7D0u; }
        if (ctx->pc != 0x28B7D0u) { return; }
    }
    ctx->pc = 0x28B7D0u;
label_28b7d0:
    // 0x28b7d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7d4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B7D4u;
    {
        const bool branch_taken_0x28b7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7D4u;
            // 0x28b7d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7d4) {
            ctx->pc = 0x28B7F8u;
            goto label_28b7f8;
        }
    }
    ctx->pc = 0x28B7DCu;
    // 0x28b7dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28b7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7e0: 0xc0a2dd8  jal         func_28B760
    ctx->pc = 0x28B7E0u;
    SET_GPR_U32(ctx, 31, 0x28B7E8u);
    ctx->pc = 0x28B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7E0u;
            // 0x28b7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B760u;
    goto label_28b760;
    ctx->pc = 0x28B7E8u;
label_28b7e8:
    // 0x28b7e8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B7E8u;
    {
        const bool branch_taken_0x28b7e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7E8u;
            // 0x28b7ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7e8) {
            ctx->pc = 0x28B7FCu;
            goto label_28b7fc;
        }
    }
    ctx->pc = 0x28B7F0u;
    // 0x28b7f0: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x28B7F0u;
    SET_GPR_U32(ctx, 31, 0x28B7F8u);
    ctx->pc = 0x28B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7F0u;
            // 0x28b7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (runtime->hasFunction(0x2850C0u)) {
        auto targetFn = runtime->lookupFunction(0x2850C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7F8u; }
        if (ctx->pc != 0x28B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002850C0_0x2850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7F8u; }
        if (ctx->pc != 0x28B7F8u) { return; }
    }
    ctx->pc = 0x28B7F8u;
label_28b7f8:
    // 0x28b7f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b7fc:
    // 0x28b7fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28b7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b800: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28b800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b804: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28b804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B80Cu;
            // 0x28b810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B814u;
    // 0x28b814: 0x0  nop
    ctx->pc = 0x28b814u;
    // NOP
label_28b818:
    // 0x28b818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b81c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b820: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28b824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28b824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b82c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28b830: 0xc0a2e20  jal         func_28B880
    ctx->pc = 0x28B830u;
    SET_GPR_U32(ctx, 31, 0x28B838u);
    ctx->pc = 0x28B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B830u;
            // 0x28b834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B880u;
    if (runtime->hasFunction(0x28B880u)) {
        auto targetFn = runtime->lookupFunction(0x28B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B838u; }
        if (ctx->pc != 0x28B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B880_0x28b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B838u; }
        if (ctx->pc != 0x28B838u) { return; }
    }
    ctx->pc = 0x28B838u;
label_28b838:
    // 0x28b838: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x28B838u;
    SET_GPR_U32(ctx, 31, 0x28B840u);
    ctx->pc = 0x28B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B838u;
            // 0x28b83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (runtime->hasFunction(0x284F78u)) {
        auto targetFn = runtime->lookupFunction(0x284F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B840u; }
        if (ctx->pc != 0x28B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F78_0x284f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B840u; }
        if (ctx->pc != 0x28B840u) { return; }
    }
    ctx->pc = 0x28B840u;
label_28b840:
    // 0x28b840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b844: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B844u;
    {
        const bool branch_taken_0x28b844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B844u;
            // 0x28b848: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b844) {
            ctx->pc = 0x28B854u;
            goto label_28b854;
        }
    }
    ctx->pc = 0x28B84Cu;
    // 0x28b84c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28B84Cu;
    {
        const bool branch_taken_0x28b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B84Cu;
            // 0x28b850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b84c) {
            ctx->pc = 0x28B868u;
            goto label_28b868;
        }
    }
    ctx->pc = 0x28B854u;
label_28b854:
    // 0x28b854: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28b854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b85c: 0xc0a1558  jal         func_285560
    ctx->pc = 0x28B85Cu;
    SET_GPR_U32(ctx, 31, 0x28B864u);
    ctx->pc = 0x28B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B85Cu;
            // 0x28b860: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B864u; }
        if (ctx->pc != 0x28B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B864u; }
        if (ctx->pc != 0x28B864u) { return; }
    }
    ctx->pc = 0x28B864u;
label_28b864:
    // 0x28b864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28b864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b868:
    // 0x28b868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28b868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b86c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28b86cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b870: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28b870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b878: 0x3e00008  jr          $ra
    ctx->pc = 0x28B878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B878u;
            // 0x28b87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B880u;
    ctx->pc = 0x28b880u;
}
