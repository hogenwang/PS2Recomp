#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D67D0
// Address: 0x1d67d0 - 0x1d68d8
void sub_001D67D0_0x1d67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D67D0_0x1d67d0");
#endif

    switch (ctx->pc) {
        case 0x1d67d0u: goto label_1d67d0;
        case 0x1d67d4u: goto label_1d67d4;
        case 0x1d67d8u: goto label_1d67d8;
        case 0x1d67dcu: goto label_1d67dc;
        case 0x1d67e0u: goto label_1d67e0;
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d67e8u: goto label_1d67e8;
        case 0x1d67ecu: goto label_1d67ec;
        case 0x1d67f0u: goto label_1d67f0;
        case 0x1d67f4u: goto label_1d67f4;
        case 0x1d67f8u: goto label_1d67f8;
        case 0x1d67fcu: goto label_1d67fc;
        case 0x1d6800u: goto label_1d6800;
        case 0x1d6804u: goto label_1d6804;
        case 0x1d6808u: goto label_1d6808;
        case 0x1d680cu: goto label_1d680c;
        case 0x1d6810u: goto label_1d6810;
        case 0x1d6814u: goto label_1d6814;
        case 0x1d6818u: goto label_1d6818;
        case 0x1d681cu: goto label_1d681c;
        case 0x1d6820u: goto label_1d6820;
        case 0x1d6824u: goto label_1d6824;
        case 0x1d6828u: goto label_1d6828;
        case 0x1d682cu: goto label_1d682c;
        case 0x1d6830u: goto label_1d6830;
        case 0x1d6834u: goto label_1d6834;
        case 0x1d6838u: goto label_1d6838;
        case 0x1d683cu: goto label_1d683c;
        case 0x1d6840u: goto label_1d6840;
        case 0x1d6844u: goto label_1d6844;
        case 0x1d6848u: goto label_1d6848;
        case 0x1d684cu: goto label_1d684c;
        case 0x1d6850u: goto label_1d6850;
        case 0x1d6854u: goto label_1d6854;
        case 0x1d6858u: goto label_1d6858;
        case 0x1d685cu: goto label_1d685c;
        case 0x1d6860u: goto label_1d6860;
        case 0x1d6864u: goto label_1d6864;
        case 0x1d6868u: goto label_1d6868;
        case 0x1d686cu: goto label_1d686c;
        case 0x1d6870u: goto label_1d6870;
        case 0x1d6874u: goto label_1d6874;
        case 0x1d6878u: goto label_1d6878;
        case 0x1d687cu: goto label_1d687c;
        case 0x1d6880u: goto label_1d6880;
        case 0x1d6884u: goto label_1d6884;
        case 0x1d6888u: goto label_1d6888;
        case 0x1d688cu: goto label_1d688c;
        case 0x1d6890u: goto label_1d6890;
        case 0x1d6894u: goto label_1d6894;
        case 0x1d6898u: goto label_1d6898;
        case 0x1d689cu: goto label_1d689c;
        case 0x1d68a0u: goto label_1d68a0;
        case 0x1d68a4u: goto label_1d68a4;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b0u: goto label_1d68b0;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68b8u: goto label_1d68b8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c0u: goto label_1d68c0;
        case 0x1d68c4u: goto label_1d68c4;
        case 0x1d68c8u: goto label_1d68c8;
        case 0x1d68ccu: goto label_1d68cc;
        case 0x1d68d0u: goto label_1d68d0;
        case 0x1d68d4u: goto label_1d68d4;
        default: break;
    }

    ctx->pc = 0x1d67d0u;

label_1d67d0:
    // 0x1d67d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d67d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d67d4:
    // 0x1d67d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d67d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d67d8:
    // 0x1d67d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d67d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d67dc:
    // 0x1d67dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d67e0:
    // 0x1d67e0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d67e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d67e4:
    // 0x1d67e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d67e8:
    // 0x1d67e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d67e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d67ec:
    // 0x1d67ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d67f0:
    // 0x1d67f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d67f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d67f4:
    // 0x1d67f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d67f8:
    // 0x1d67f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d67f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d67fc:
    // 0x1d67fc: 0xc076086  jal         func_1D8218
label_1d6800:
    if (ctx->pc == 0x1D6800u) {
        ctx->pc = 0x1D6800u;
            // 0x1d6800: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1D6804u;
        goto label_1d6804;
    }
    ctx->pc = 0x1D67FCu;
    SET_GPR_U32(ctx, 31, 0x1D6804u);
    ctx->pc = 0x1D6800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67FCu;
            // 0x1d6800: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (runtime->hasFunction(0x1D8218u)) {
        auto targetFn = runtime->lookupFunction(0x1D8218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6804u; }
        if (ctx->pc != 0x1D6804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8218_0x1d8218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6804u; }
        if (ctx->pc != 0x1D6804u) { return; }
    }
    ctx->pc = 0x1D6804u;
label_1d6804:
    // 0x1d6804: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d6804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6808:
    // 0x1d6808: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d680c:
    // 0x1d680c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d680cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d6810:
    // 0x1d6810: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_1d6814:
    if (ctx->pc == 0x1D6814u) {
        ctx->pc = 0x1D6814u;
            // 0x1d6814: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6818u;
        goto label_1d6818;
    }
    ctx->pc = 0x1D6810u;
    {
        const bool branch_taken_0x1d6810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6810u;
            // 0x1d6814: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6810) {
            ctx->pc = 0x1D6868u;
            goto label_1d6868;
        }
    }
    ctx->pc = 0x1D6818u;
label_1d6818:
    // 0x1d6818: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d6818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d681c:
    // 0x1d681c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d6820:
    if (ctx->pc == 0x1D6820u) {
        ctx->pc = 0x1D6820u;
            // 0x1d6820: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1D6824u;
        goto label_1d6824;
    }
    ctx->pc = 0x1D681Cu;
    {
        const bool branch_taken_0x1d681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D681Cu;
            // 0x1d6820: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d681c) {
            ctx->pc = 0x1D6838u;
            goto label_1d6838;
        }
    }
    ctx->pc = 0x1D6824u;
label_1d6824:
    // 0x1d6824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d6824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1d6828:
    // 0x1d6828: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1d682c:
    if (ctx->pc == 0x1D682Cu) {
        ctx->pc = 0x1D682Cu;
            // 0x1d682c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6830u;
        goto label_1d6830;
    }
    ctx->pc = 0x1D6828u;
    {
        const bool branch_taken_0x1d6828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6828u;
            // 0x1d682c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6828) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D6830u;
label_1d6830:
    // 0x1d6830: 0x10000023  b           . + 4 + (0x23 << 2)
label_1d6834:
    if (ctx->pc == 0x1D6834u) {
        ctx->pc = 0x1D6834u;
            // 0x1d6834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D6838u;
        goto label_1d6838;
    }
    ctx->pc = 0x1D6830u;
    {
        const bool branch_taken_0x1d6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6830u;
            // 0x1d6834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6830) {
            ctx->pc = 0x1D68C0u;
            goto label_1d68c0;
        }
    }
    ctx->pc = 0x1D6838u;
label_1d6838:
    // 0x1d6838: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1d683c:
    if (ctx->pc == 0x1D683Cu) {
        ctx->pc = 0x1D683Cu;
            // 0x1d683c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6840u;
        goto label_1d6840;
    }
    ctx->pc = 0x1D6838u;
    {
        const bool branch_taken_0x1d6838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6838u;
            // 0x1d683c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6838) {
            ctx->pc = 0x1D6888u;
            goto label_1d6888;
        }
    }
    ctx->pc = 0x1D6840u;
label_1d6840:
    // 0x1d6840: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d6844:
    if (ctx->pc == 0x1D6844u) {
        ctx->pc = 0x1D6844u;
            // 0x1d6844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D6848u;
        goto label_1d6848;
    }
    ctx->pc = 0x1D6840u;
    {
        const bool branch_taken_0x1d6840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6840u;
            // 0x1d6844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6840) {
            ctx->pc = 0x1D68C0u;
            goto label_1d68c0;
        }
    }
    ctx->pc = 0x1D6848u;
label_1d6848:
    // 0x1d6848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d684c:
    // 0x1d684c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d684cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6850:
    // 0x1d6850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d6850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6854:
    // 0x1d6854: 0xc075a36  jal         func_1D68D8
label_1d6858:
    if (ctx->pc == 0x1D6858u) {
        ctx->pc = 0x1D6858u;
            // 0x1d6858: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D685Cu;
        goto label_1d685c;
    }
    ctx->pc = 0x1D6854u;
    SET_GPR_U32(ctx, 31, 0x1D685Cu);
    ctx->pc = 0x1D6858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6854u;
            // 0x1d6858: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D68D8u;
    if (runtime->hasFunction(0x1D68D8u)) {
        auto targetFn = runtime->lookupFunction(0x1D68D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D685Cu; }
        if (ctx->pc != 0x1D685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D68D8_0x1d68d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D685Cu; }
        if (ctx->pc != 0x1D685Cu) { return; }
    }
    ctx->pc = 0x1D685Cu;
label_1d685c:
    // 0x1d685c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d6860:
    if (ctx->pc == 0x1D6860u) {
        ctx->pc = 0x1D6860u;
            // 0x1d6860: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6864u;
        goto label_1d6864;
    }
    ctx->pc = 0x1D685Cu;
    {
        const bool branch_taken_0x1d685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D685Cu;
            // 0x1d6860: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d685c) {
            ctx->pc = 0x1D68BCu;
            goto label_1d68bc;
        }
    }
    ctx->pc = 0x1D6864u;
label_1d6864:
    // 0x1d6864: 0x0  nop
    ctx->pc = 0x1d6864u;
    // NOP
label_1d6868:
    // 0x1d6868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d686c:
    // 0x1d686c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6870:
    // 0x1d6870: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d6870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6874:
    // 0x1d6874: 0xc075b50  jal         func_1D6D40
label_1d6878:
    if (ctx->pc == 0x1D6878u) {
        ctx->pc = 0x1D6878u;
            // 0x1d6878: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D687Cu;
        goto label_1d687c;
    }
    ctx->pc = 0x1D6874u;
    SET_GPR_U32(ctx, 31, 0x1D687Cu);
    ctx->pc = 0x1D6878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6874u;
            // 0x1d6878: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D40u;
    if (runtime->hasFunction(0x1D6D40u)) {
        auto targetFn = runtime->lookupFunction(0x1D6D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D687Cu; }
        if (ctx->pc != 0x1D687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6D40_0x1d6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D687Cu; }
        if (ctx->pc != 0x1D687Cu) { return; }
    }
    ctx->pc = 0x1D687Cu;
label_1d687c:
    // 0x1d687c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d6880:
    if (ctx->pc == 0x1D6880u) {
        ctx->pc = 0x1D6880u;
            // 0x1d6880: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6884u;
        goto label_1d6884;
    }
    ctx->pc = 0x1D687Cu;
    {
        const bool branch_taken_0x1d687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D687Cu;
            // 0x1d6880: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d687c) {
            ctx->pc = 0x1D68BCu;
            goto label_1d68bc;
        }
    }
    ctx->pc = 0x1D6884u;
label_1d6884:
    // 0x1d6884: 0x0  nop
    ctx->pc = 0x1d6884u;
    // NOP
label_1d6888:
    // 0x1d6888: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x1d6888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d688c:
    // 0x1d688c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6890:
    // 0x1d6890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d6890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6894:
    // 0x1d6894: 0xc075d6c  jal         func_1D75B0
label_1d6898:
    if (ctx->pc == 0x1D6898u) {
        ctx->pc = 0x1D6898u;
            // 0x1d6898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D689Cu;
        goto label_1d689c;
    }
    ctx->pc = 0x1D6894u;
    SET_GPR_U32(ctx, 31, 0x1D689Cu);
    ctx->pc = 0x1D6898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6894u;
            // 0x1d6898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D75B0u;
    if (runtime->hasFunction(0x1D75B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D75B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D689Cu; }
        if (ctx->pc != 0x1D689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D75B0_0x1d75b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D689Cu; }
        if (ctx->pc != 0x1D689Cu) { return; }
    }
    ctx->pc = 0x1D689Cu;
label_1d689c:
    // 0x1d689c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x1d689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_1d68a0:
    // 0x1d68a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1d68a4:
    if (ctx->pc == 0x1D68A4u) {
        ctx->pc = 0x1D68A4u;
            // 0x1d68a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D68A8u;
        goto label_1d68a8;
    }
    ctx->pc = 0x1D68A0u;
    {
        const bool branch_taken_0x1d68a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d68a0) {
            ctx->pc = 0x1D68A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68A0u;
            // 0x1d68a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D68BCu;
            goto label_1d68bc;
        }
    }
    ctx->pc = 0x1D68A8u;
label_1d68a8:
    // 0x1d68a8: 0xde2600a8  ld          $a2, 0xA8($s1)
    ctx->pc = 0x1d68a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 168)));
label_1d68ac:
    // 0x1d68ac: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x1d68acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_1d68b0:
    // 0x1d68b0: 0x40f809  jalr        $v0
label_1d68b4:
    if (ctx->pc == 0x1D68B4u) {
        ctx->pc = 0x1D68B4u;
            // 0x1d68b4: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->pc = 0x1D68B8u;
        goto label_1d68b8;
    }
    ctx->pc = 0x1D68B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D68B8u);
        ctx->pc = 0x1D68B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68B0u;
            // 0x1d68b4: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D68B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D68B8u; }
            if (ctx->pc != 0x1D68B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D68B8u;
label_1d68b8:
    // 0x1d68b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d68b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d68bc:
    // 0x1d68bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d68bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d68c0:
    // 0x1d68c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d68c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d68c4:
    // 0x1d68c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d68c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d68c8:
    // 0x1d68c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d68c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d68cc:
    // 0x1d68cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d68ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d68d0:
    // 0x1d68d0: 0x3e00008  jr          $ra
label_1d68d4:
    if (ctx->pc == 0x1D68D4u) {
        ctx->pc = 0x1D68D4u;
            // 0x1d68d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D68D8u;
        goto label_fallthrough_0x1d68d0;
    }
    ctx->pc = 0x1D68D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68D0u;
            // 0x1d68d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d68d0:
    ctx->pc = 0x1D68D8u;
    ctx->pc = 0x1d68d8u;
}
