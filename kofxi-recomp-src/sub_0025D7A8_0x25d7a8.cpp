#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025D7A8
// Address: 0x25d7a8 - 0x25d970
void sub_0025D7A8_0x25d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D7A8_0x25d7a8");
#endif

    switch (ctx->pc) {
        case 0x25d7a8u: goto label_25d7a8;
        case 0x25d7acu: goto label_25d7ac;
        case 0x25d7b0u: goto label_25d7b0;
        case 0x25d7b4u: goto label_25d7b4;
        case 0x25d7b8u: goto label_25d7b8;
        case 0x25d7bcu: goto label_25d7bc;
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7c4u: goto label_25d7c4;
        case 0x25d7c8u: goto label_25d7c8;
        case 0x25d7ccu: goto label_25d7cc;
        case 0x25d7d0u: goto label_25d7d0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7d8u: goto label_25d7d8;
        case 0x25d7dcu: goto label_25d7dc;
        case 0x25d7e0u: goto label_25d7e0;
        case 0x25d7e4u: goto label_25d7e4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d7ecu: goto label_25d7ec;
        case 0x25d7f0u: goto label_25d7f0;
        case 0x25d7f4u: goto label_25d7f4;
        case 0x25d7f8u: goto label_25d7f8;
        case 0x25d7fcu: goto label_25d7fc;
        case 0x25d800u: goto label_25d800;
        case 0x25d804u: goto label_25d804;
        case 0x25d808u: goto label_25d808;
        case 0x25d80cu: goto label_25d80c;
        case 0x25d810u: goto label_25d810;
        case 0x25d814u: goto label_25d814;
        case 0x25d818u: goto label_25d818;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d820u: goto label_25d820;
        case 0x25d824u: goto label_25d824;
        case 0x25d828u: goto label_25d828;
        case 0x25d82cu: goto label_25d82c;
        case 0x25d830u: goto label_25d830;
        case 0x25d834u: goto label_25d834;
        case 0x25d838u: goto label_25d838;
        case 0x25d83cu: goto label_25d83c;
        case 0x25d840u: goto label_25d840;
        case 0x25d844u: goto label_25d844;
        case 0x25d848u: goto label_25d848;
        case 0x25d84cu: goto label_25d84c;
        case 0x25d850u: goto label_25d850;
        case 0x25d854u: goto label_25d854;
        case 0x25d858u: goto label_25d858;
        case 0x25d85cu: goto label_25d85c;
        case 0x25d860u: goto label_25d860;
        case 0x25d864u: goto label_25d864;
        case 0x25d868u: goto label_25d868;
        case 0x25d86cu: goto label_25d86c;
        case 0x25d870u: goto label_25d870;
        case 0x25d874u: goto label_25d874;
        case 0x25d878u: goto label_25d878;
        case 0x25d87cu: goto label_25d87c;
        case 0x25d880u: goto label_25d880;
        case 0x25d884u: goto label_25d884;
        case 0x25d888u: goto label_25d888;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d890u: goto label_25d890;
        case 0x25d894u: goto label_25d894;
        case 0x25d898u: goto label_25d898;
        case 0x25d89cu: goto label_25d89c;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8a4u: goto label_25d8a4;
        case 0x25d8a8u: goto label_25d8a8;
        case 0x25d8acu: goto label_25d8ac;
        case 0x25d8b0u: goto label_25d8b0;
        case 0x25d8b4u: goto label_25d8b4;
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d8bcu: goto label_25d8bc;
        case 0x25d8c0u: goto label_25d8c0;
        case 0x25d8c4u: goto label_25d8c4;
        case 0x25d8c8u: goto label_25d8c8;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d8d4u: goto label_25d8d4;
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d8e4u: goto label_25d8e4;
        case 0x25d8e8u: goto label_25d8e8;
        case 0x25d8ecu: goto label_25d8ec;
        case 0x25d8f0u: goto label_25d8f0;
        case 0x25d8f4u: goto label_25d8f4;
        case 0x25d8f8u: goto label_25d8f8;
        case 0x25d8fcu: goto label_25d8fc;
        case 0x25d900u: goto label_25d900;
        case 0x25d904u: goto label_25d904;
        case 0x25d908u: goto label_25d908;
        case 0x25d90cu: goto label_25d90c;
        case 0x25d910u: goto label_25d910;
        case 0x25d914u: goto label_25d914;
        case 0x25d918u: goto label_25d918;
        case 0x25d91cu: goto label_25d91c;
        case 0x25d920u: goto label_25d920;
        case 0x25d924u: goto label_25d924;
        case 0x25d928u: goto label_25d928;
        case 0x25d92cu: goto label_25d92c;
        case 0x25d930u: goto label_25d930;
        case 0x25d934u: goto label_25d934;
        case 0x25d938u: goto label_25d938;
        case 0x25d93cu: goto label_25d93c;
        case 0x25d940u: goto label_25d940;
        case 0x25d944u: goto label_25d944;
        case 0x25d948u: goto label_25d948;
        case 0x25d94cu: goto label_25d94c;
        case 0x25d950u: goto label_25d950;
        case 0x25d954u: goto label_25d954;
        case 0x25d958u: goto label_25d958;
        case 0x25d95cu: goto label_25d95c;
        case 0x25d960u: goto label_25d960;
        case 0x25d964u: goto label_25d964;
        case 0x25d968u: goto label_25d968;
        case 0x25d96cu: goto label_25d96c;
        default: break;
    }

    ctx->pc = 0x25d7a8u;

label_25d7a8:
    // 0x25d7a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25d7ac:
    // 0x25d7ac: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_25d7b0:
    // 0x25d7b0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_25d7b4:
    // 0x25d7b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25d7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d7b8:
    // 0x25d7b8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x25d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_25d7bc:
    // 0x25d7bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25d7bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25d7c0:
    // 0x25d7c0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x25d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_25d7c4:
    // 0x25d7c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25d7c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25d7c8:
    // 0x25d7c8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_25d7cc:
    // 0x25d7cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25d7d0:
    // 0x25d7d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_25d7d4:
    // 0x25d7d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25d7d8:
    // 0x25d7d8: 0xc08c0ca  jal         func_230328
label_25d7dc:
    if (ctx->pc == 0x25D7DCu) {
        ctx->pc = 0x25D7DCu;
            // 0x25d7dc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->pc = 0x25D7E0u;
        goto label_25d7e0;
    }
    ctx->pc = 0x25D7D8u;
    SET_GPR_U32(ctx, 31, 0x25D7E0u);
    ctx->pc = 0x25D7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7D8u;
            // 0x25d7dc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (runtime->hasFunction(0x230328u)) {
        auto targetFn = runtime->lookupFunction(0x230328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7E0u; }
        if (ctx->pc != 0x25D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230328_0x230328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7E0u; }
        if (ctx->pc != 0x25D7E0u) { return; }
    }
    ctx->pc = 0x25D7E0u;
label_25d7e0:
    // 0x25d7e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25d7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d7e4:
    // 0x25d7e4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_25d7e8:
    if (ctx->pc == 0x25D7E8u) {
        ctx->pc = 0x25D7E8u;
            // 0x25d7e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D7ECu;
        goto label_25d7ec;
    }
    ctx->pc = 0x25D7E4u;
    {
        const bool branch_taken_0x25d7e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7E4u;
            // 0x25d7e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7e4) {
            ctx->pc = 0x25D7F4u;
            goto label_25d7f4;
        }
    }
    ctx->pc = 0x25D7ECu;
label_25d7ec:
    // 0x25d7ec: 0x10000053  b           . + 4 + (0x53 << 2)
label_25d7f0:
    if (ctx->pc == 0x25D7F0u) {
        ctx->pc = 0x25D7F0u;
            // 0x25d7f0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x25D7F4u;
        goto label_25d7f4;
    }
    ctx->pc = 0x25D7ECu;
    {
        const bool branch_taken_0x25d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7ECu;
            // 0x25d7f0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7ec) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D7F4u;
label_25d7f4:
    // 0x25d7f4: 0xc0973a6  jal         func_25CE98
label_25d7f8:
    if (ctx->pc == 0x25D7F8u) {
        ctx->pc = 0x25D7F8u;
            // 0x25d7f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D7FCu;
        goto label_25d7fc;
    }
    ctx->pc = 0x25D7F4u;
    SET_GPR_U32(ctx, 31, 0x25D7FCu);
    ctx->pc = 0x25D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7F4u;
            // 0x25d7f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (runtime->hasFunction(0x25CE98u)) {
        auto targetFn = runtime->lookupFunction(0x25CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7FCu; }
        if (ctx->pc != 0x25D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CE98_0x25ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7FCu; }
        if (ctx->pc != 0x25D7FCu) { return; }
    }
    ctx->pc = 0x25D7FCu;
label_25d7fc:
    // 0x25d7fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25d800:
    // 0x25d800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d804:
    // 0x25d804: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25d808:
    // 0x25d808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d80c:
    // 0x25d80c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x25d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_25d810:
    // 0x25d810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25d810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d814:
    // 0x25d814: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25d814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25d818:
    // 0x25d818: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x25d818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_25d81c:
    // 0x25d81c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x25d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_25d820:
    // 0x25d820: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_25d824:
    if (ctx->pc == 0x25D824u) {
        ctx->pc = 0x25D824u;
            // 0x25d824: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x25D828u;
        goto label_25d828;
    }
    ctx->pc = 0x25D820u;
    {
        const bool branch_taken_0x25d820 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x25D824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D820u;
            // 0x25d824: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d820) {
            ctx->pc = 0x25D858u;
            goto label_25d858;
        }
    }
    ctx->pc = 0x25D828u;
label_25d828:
    // 0x25d828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25d82c:
    // 0x25d82c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d830:
    // 0x25d830: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25d834:
    // 0x25d834: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x25d834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_25d838:
    // 0x25d838: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d83c:
    // 0x25d83c: 0x440003f  bltz        $v0, . + 4 + (0x3F << 2)
label_25d840:
    if (ctx->pc == 0x25D840u) {
        ctx->pc = 0x25D840u;
            // 0x25d840: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x25D844u;
        goto label_25d844;
    }
    ctx->pc = 0x25D83Cu;
    {
        const bool branch_taken_0x25d83c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D83Cu;
            // 0x25d840: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d83c) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D844u;
label_25d844:
    // 0x25d844: 0x460003d  bltz        $v1, . + 4 + (0x3D << 2)
label_25d848:
    if (ctx->pc == 0x25D848u) {
        ctx->pc = 0x25D848u;
            // 0x25d848: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x25D84Cu;
        goto label_25d84c;
    }
    ctx->pc = 0x25D844u;
    {
        const bool branch_taken_0x25d844 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D844u;
            // 0x25d848: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d844) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D84Cu;
label_25d84c:
    // 0x25d84c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x25d84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_25d850:
    // 0x25d850: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_25d854:
    if (ctx->pc == 0x25D854u) {
        ctx->pc = 0x25D854u;
            // 0x25d854: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x25D858u;
        goto label_25d858;
    }
    ctx->pc = 0x25D850u;
    {
        const bool branch_taken_0x25d850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D850u;
            // 0x25d854: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d850) {
            ctx->pc = 0x25D828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d828;
        }
    }
    ctx->pc = 0x25D858u;
label_25d858:
    // 0x25d858: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25d858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25d85c:
    // 0x25d85c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_25d860:
    if (ctx->pc == 0x25D860u) {
        ctx->pc = 0x25D860u;
            // 0x25d860: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25D864u;
        goto label_25d864;
    }
    ctx->pc = 0x25D85Cu;
    {
        const bool branch_taken_0x25d85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D85Cu;
            // 0x25d860: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d85c) {
            ctx->pc = 0x25D884u;
            goto label_25d884;
        }
    }
    ctx->pc = 0x25D864u;
label_25d864:
    // 0x25d864: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x25d864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25d868:
    // 0x25d868: 0xc097928  jal         func_25E4A0
label_25d86c:
    if (ctx->pc == 0x25D86Cu) {
        ctx->pc = 0x25D86Cu;
            // 0x25d86c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25D870u;
        goto label_25d870;
    }
    ctx->pc = 0x25D868u;
    SET_GPR_U32(ctx, 31, 0x25D870u);
    ctx->pc = 0x25D86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D868u;
            // 0x25d86c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E4A0u;
    if (runtime->hasFunction(0x25E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D870u; }
        if (ctx->pc != 0x25D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E4A0_0x25e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D870u; }
        if (ctx->pc != 0x25D870u) { return; }
    }
    ctx->pc = 0x25D870u;
label_25d870:
    // 0x25d870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d874:
    // 0x25d874: 0x16000031  bnez        $s0, . + 4 + (0x31 << 2)
label_25d878:
    if (ctx->pc == 0x25D878u) {
        ctx->pc = 0x25D87Cu;
        goto label_25d87c;
    }
    ctx->pc = 0x25D874u;
    {
        const bool branch_taken_0x25d874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d874) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D87Cu;
label_25d87c:
    // 0x25d87c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25d880:
    if (ctx->pc == 0x25D880u) {
        ctx->pc = 0x25D880u;
            // 0x25d880: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x25D884u;
        goto label_25d884;
    }
    ctx->pc = 0x25D87Cu;
    {
        const bool branch_taken_0x25d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D87Cu;
            // 0x25d880: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d87c) {
            ctx->pc = 0x25D88Cu;
            goto label_25d88c;
        }
    }
    ctx->pc = 0x25D884u;
label_25d884:
    // 0x25d884: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25d884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25d888:
    // 0x25d888: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x25d888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25d88c:
    // 0x25d88c: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_25d890:
    if (ctx->pc == 0x25D890u) {
        ctx->pc = 0x25D890u;
            // 0x25d890: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x25D894u;
        goto label_25d894;
    }
    ctx->pc = 0x25D88Cu;
    {
        const bool branch_taken_0x25d88c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d88c) {
            ctx->pc = 0x25D890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25D88Cu;
            // 0x25d890: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25D8C4u;
            goto label_25d8c4;
        }
    }
    ctx->pc = 0x25D894u;
label_25d894:
    // 0x25d894: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x25d894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_25d898:
    // 0x25d898: 0x2cc2000c  sltiu       $v0, $a2, 0xC
    ctx->pc = 0x25d898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_25d89c:
    // 0x25d89c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_25d8a0:
    if (ctx->pc == 0x25D8A0u) {
        ctx->pc = 0x25D8A0u;
            // 0x25d8a0: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x25D8A4u;
        goto label_25d8a4;
    }
    ctx->pc = 0x25D89Cu;
    {
        const bool branch_taken_0x25d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D89Cu;
            // 0x25d8a0: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d89c) {
            ctx->pc = 0x25D928u;
            goto label_25d928;
        }
    }
    ctx->pc = 0x25D8A4u;
label_25d8a4:
    // 0x25d8a4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x25d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_25d8a8:
    // 0x25d8a8: 0xc097928  jal         func_25E4A0
label_25d8ac:
    if (ctx->pc == 0x25D8ACu) {
        ctx->pc = 0x25D8ACu;
            // 0x25d8ac: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x25D8B0u;
        goto label_25d8b0;
    }
    ctx->pc = 0x25D8A8u;
    SET_GPR_U32(ctx, 31, 0x25D8B0u);
    ctx->pc = 0x25D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8A8u;
            // 0x25d8ac: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E4A0u;
    if (runtime->hasFunction(0x25E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x25E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8B0u; }
        if (ctx->pc != 0x25D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E4A0_0x25e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D8B0u; }
        if (ctx->pc != 0x25D8B0u) { return; }
    }
    ctx->pc = 0x25D8B0u;
label_25d8b0:
    // 0x25d8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d8b4:
    // 0x25d8b4: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_25d8b8:
    if (ctx->pc == 0x25D8B8u) {
        ctx->pc = 0x25D8B8u;
            // 0x25d8b8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x25D8BCu;
        goto label_25d8bc;
    }
    ctx->pc = 0x25D8B4u;
    {
        const bool branch_taken_0x25d8b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8B4u;
            // 0x25d8b8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8b4) {
            ctx->pc = 0x25D92Cu;
            goto label_25d92c;
        }
    }
    ctx->pc = 0x25D8BCu;
label_25d8bc:
    // 0x25d8bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_25d8c0:
    if (ctx->pc == 0x25D8C0u) {
        ctx->pc = 0x25D8C0u;
            // 0x25d8c0: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->pc = 0x25D8C4u;
        goto label_25d8c4;
    }
    ctx->pc = 0x25D8BCu;
    {
        const bool branch_taken_0x25d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8BCu;
            // 0x25d8c0: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8bc) {
            ctx->pc = 0x25D8C8u;
            goto label_25d8c8;
        }
    }
    ctx->pc = 0x25D8C4u;
label_25d8c4:
    // 0x25d8c4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x25d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_25d8c8:
    // 0x25d8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d8cc:
    // 0x25d8cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_25d8d0:
    // 0x25d8d0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x25d8d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d8d4:
    // 0x25d8d4: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x25d8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25d8d8:
    // 0x25d8d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25d8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25d8dc:
    // 0x25d8dc: 0x8fb10010  lw          $s1, 0x10($sp)
    ctx->pc = 0x25d8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25d8e0:
    // 0x25d8e0: 0x40f809  jalr        $v0
label_25d8e4:
    if (ctx->pc == 0x25D8E4u) {
        ctx->pc = 0x25D8E4u;
            // 0x25d8e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D8E8u;
        goto label_25d8e8;
    }
    ctx->pc = 0x25D8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D8E8u);
        ctx->pc = 0x25D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8E0u;
            // 0x25d8e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25D8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25D8E8u; }
            if (ctx->pc != 0x25D8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x25D8E8u;
label_25d8e8:
    // 0x25d8e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d8ec:
    // 0x25d8ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_25d8f0:
    if (ctx->pc == 0x25D8F0u) {
        ctx->pc = 0x25D8F0u;
            // 0x25d8f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x25D8F4u;
        goto label_25d8f4;
    }
    ctx->pc = 0x25D8ECu;
    {
        const bool branch_taken_0x25d8ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8ECu;
            // 0x25d8f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8ec) {
            ctx->pc = 0x25D920u;
            goto label_25d920;
        }
    }
    ctx->pc = 0x25D8F4u;
label_25d8f4:
    // 0x25d8f4: 0x10710006  beq         $v1, $s1, . + 4 + (0x6 << 2)
label_25d8f8:
    if (ctx->pc == 0x25D8F8u) {
        ctx->pc = 0x25D8F8u;
            // 0x25d8f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x25D8FCu;
        goto label_25d8fc;
    }
    ctx->pc = 0x25D8F4u;
    {
        const bool branch_taken_0x25d8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x25D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8F4u;
            // 0x25d8f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8f4) {
            ctx->pc = 0x25D910u;
            goto label_25d910;
        }
    }
    ctx->pc = 0x25D8FCu;
label_25d8fc:
    // 0x25d8fc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_25d900:
    if (ctx->pc == 0x25D900u) {
        ctx->pc = 0x25D900u;
            // 0x25d900: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x25D904u;
        goto label_25d904;
    }
    ctx->pc = 0x25D8FCu;
    {
        const bool branch_taken_0x25d8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D8FCu;
            // 0x25d900: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8fc) {
            ctx->pc = 0x25D90Cu;
            goto label_25d90c;
        }
    }
    ctx->pc = 0x25D904u;
label_25d904:
    // 0x25d904: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_25d908:
    if (ctx->pc == 0x25D908u) {
        ctx->pc = 0x25D90Cu;
        goto label_25d90c;
    }
    ctx->pc = 0x25D904u;
    {
        const bool branch_taken_0x25d904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25d904) {
            ctx->pc = 0x25D910u;
            goto label_25d910;
        }
    }
    ctx->pc = 0x25D90Cu;
label_25d90c:
    // 0x25d90c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25d90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d910:
    // 0x25d910: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_25d914:
    if (ctx->pc == 0x25D914u) {
        ctx->pc = 0x25D914u;
            // 0x25d914: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x25D918u;
        goto label_25d918;
    }
    ctx->pc = 0x25D910u;
    {
        const bool branch_taken_0x25d910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D910u;
            // 0x25d914: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d910) {
            ctx->pc = 0x25D92Cu;
            goto label_25d92c;
        }
    }
    ctx->pc = 0x25D918u;
label_25d918:
    // 0x25d918: 0x10000002  b           . + 4 + (0x2 << 2)
label_25d91c:
    if (ctx->pc == 0x25D91Cu) {
        ctx->pc = 0x25D91Cu;
            // 0x25d91c: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->pc = 0x25D920u;
        goto label_25d920;
    }
    ctx->pc = 0x25D918u;
    {
        const bool branch_taken_0x25d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D918u;
            // 0x25d91c: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d918) {
            ctx->pc = 0x25D924u;
            goto label_25d924;
        }
    }
    ctx->pc = 0x25D920u;
label_25d920:
    // 0x25d920: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x25d920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_25d924:
    // 0x25d924: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x25d924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_25d928:
    // 0x25d928: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_25d92c:
    // 0x25d92c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_25d930:
    if (ctx->pc == 0x25D930u) {
        ctx->pc = 0x25D934u;
        goto label_25d934;
    }
    ctx->pc = 0x25D92Cu;
    {
        const bool branch_taken_0x25d92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d92c) {
            ctx->pc = 0x25D93Cu;
            goto label_25d93c;
        }
    }
    ctx->pc = 0x25D934u;
label_25d934:
    // 0x25d934: 0xc08a9d6  jal         func_22A758
label_25d938:
    if (ctx->pc == 0x25D938u) {
        ctx->pc = 0x25D93Cu;
        goto label_25d93c;
    }
    ctx->pc = 0x25D934u;
    SET_GPR_U32(ctx, 31, 0x25D93Cu);
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D93Cu; }
        if (ctx->pc != 0x25D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D93Cu; }
        if (ctx->pc != 0x25D93Cu) { return; }
    }
    ctx->pc = 0x25D93Cu;
label_25d93c:
    // 0x25d93c: 0xc0973ac  jal         func_25CEB0
label_25d940:
    if (ctx->pc == 0x25D940u) {
        ctx->pc = 0x25D940u;
            // 0x25d940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25D944u;
        goto label_25d944;
    }
    ctx->pc = 0x25D93Cu;
    SET_GPR_U32(ctx, 31, 0x25D944u);
    ctx->pc = 0x25D940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D93Cu;
            // 0x25d940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D944u; }
        if (ctx->pc != 0x25D944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D944u; }
        if (ctx->pc != 0x25D944u) { return; }
    }
    ctx->pc = 0x25D944u;
label_25d944:
    // 0x25d944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d948:
    // 0x25d948: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25d948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25d94c:
    // 0x25d94c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x25d94cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25d950:
    // 0x25d950: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25d950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25d954:
    // 0x25d954: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25d954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25d958:
    // 0x25d958: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25d958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25d95c:
    // 0x25d95c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x25d95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25d960:
    // 0x25d960: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25d960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25d964:
    // 0x25d964: 0x3e00008  jr          $ra
label_25d968:
    if (ctx->pc == 0x25D968u) {
        ctx->pc = 0x25D968u;
            // 0x25d968: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x25D96Cu;
        goto label_25d96c;
    }
    ctx->pc = 0x25D964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D964u;
            // 0x25d968: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D96Cu;
label_25d96c:
    // 0x25d96c: 0x0  nop
    ctx->pc = 0x25d96cu;
    // NOP
    ctx->pc = 0x25d970u;
}
