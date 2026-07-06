#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A708
// Address: 0x24a708 - 0x24ab48
void sub_0024A708_0x24a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A708_0x24a708");
#endif

    switch (ctx->pc) {
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        case 0x24a7d0u: goto label_24a7d0;
        case 0x24a7d4u: goto label_24a7d4;
        case 0x24a7d8u: goto label_24a7d8;
        case 0x24a7dcu: goto label_24a7dc;
        case 0x24a7e0u: goto label_24a7e0;
        case 0x24a7e4u: goto label_24a7e4;
        case 0x24a7e8u: goto label_24a7e8;
        case 0x24a7ecu: goto label_24a7ec;
        case 0x24a7f0u: goto label_24a7f0;
        case 0x24a7f4u: goto label_24a7f4;
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a7fcu: goto label_24a7fc;
        case 0x24a800u: goto label_24a800;
        case 0x24a804u: goto label_24a804;
        case 0x24a808u: goto label_24a808;
        case 0x24a80cu: goto label_24a80c;
        case 0x24a810u: goto label_24a810;
        case 0x24a814u: goto label_24a814;
        case 0x24a818u: goto label_24a818;
        case 0x24a81cu: goto label_24a81c;
        case 0x24a820u: goto label_24a820;
        case 0x24a824u: goto label_24a824;
        case 0x24a828u: goto label_24a828;
        case 0x24a82cu: goto label_24a82c;
        case 0x24a830u: goto label_24a830;
        case 0x24a834u: goto label_24a834;
        case 0x24a838u: goto label_24a838;
        case 0x24a83cu: goto label_24a83c;
        case 0x24a840u: goto label_24a840;
        case 0x24a844u: goto label_24a844;
        case 0x24a848u: goto label_24a848;
        case 0x24a84cu: goto label_24a84c;
        case 0x24a850u: goto label_24a850;
        case 0x24a854u: goto label_24a854;
        case 0x24a858u: goto label_24a858;
        case 0x24a85cu: goto label_24a85c;
        case 0x24a860u: goto label_24a860;
        case 0x24a864u: goto label_24a864;
        case 0x24a868u: goto label_24a868;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a870u: goto label_24a870;
        case 0x24a874u: goto label_24a874;
        case 0x24a878u: goto label_24a878;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a880u: goto label_24a880;
        case 0x24a884u: goto label_24a884;
        case 0x24a888u: goto label_24a888;
        case 0x24a88cu: goto label_24a88c;
        case 0x24a890u: goto label_24a890;
        case 0x24a894u: goto label_24a894;
        case 0x24a898u: goto label_24a898;
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8a8u: goto label_24a8a8;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b0u: goto label_24a8b0;
        case 0x24a8b4u: goto label_24a8b4;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a8c0u: goto label_24a8c0;
        case 0x24a8c4u: goto label_24a8c4;
        case 0x24a8c8u: goto label_24a8c8;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a8d4u: goto label_24a8d4;
        case 0x24a8d8u: goto label_24a8d8;
        case 0x24a8dcu: goto label_24a8dc;
        case 0x24a8e0u: goto label_24a8e0;
        case 0x24a8e4u: goto label_24a8e4;
        case 0x24a8e8u: goto label_24a8e8;
        case 0x24a8ecu: goto label_24a8ec;
        case 0x24a8f0u: goto label_24a8f0;
        case 0x24a8f4u: goto label_24a8f4;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a900u: goto label_24a900;
        case 0x24a904u: goto label_24a904;
        case 0x24a908u: goto label_24a908;
        case 0x24a90cu: goto label_24a90c;
        case 0x24a910u: goto label_24a910;
        case 0x24a914u: goto label_24a914;
        case 0x24a918u: goto label_24a918;
        case 0x24a91cu: goto label_24a91c;
        case 0x24a920u: goto label_24a920;
        case 0x24a924u: goto label_24a924;
        case 0x24a928u: goto label_24a928;
        case 0x24a92cu: goto label_24a92c;
        case 0x24a930u: goto label_24a930;
        case 0x24a934u: goto label_24a934;
        case 0x24a938u: goto label_24a938;
        case 0x24a93cu: goto label_24a93c;
        case 0x24a940u: goto label_24a940;
        case 0x24a944u: goto label_24a944;
        case 0x24a948u: goto label_24a948;
        case 0x24a94cu: goto label_24a94c;
        case 0x24a950u: goto label_24a950;
        case 0x24a954u: goto label_24a954;
        case 0x24a958u: goto label_24a958;
        case 0x24a95cu: goto label_24a95c;
        case 0x24a960u: goto label_24a960;
        case 0x24a964u: goto label_24a964;
        case 0x24a968u: goto label_24a968;
        case 0x24a96cu: goto label_24a96c;
        case 0x24a970u: goto label_24a970;
        case 0x24a974u: goto label_24a974;
        case 0x24a978u: goto label_24a978;
        case 0x24a97cu: goto label_24a97c;
        case 0x24a980u: goto label_24a980;
        case 0x24a984u: goto label_24a984;
        case 0x24a988u: goto label_24a988;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a990u: goto label_24a990;
        case 0x24a994u: goto label_24a994;
        case 0x24a998u: goto label_24a998;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a0u: goto label_24a9a0;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9acu: goto label_24a9ac;
        case 0x24a9b0u: goto label_24a9b0;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24a9bcu: goto label_24a9bc;
        case 0x24a9c0u: goto label_24a9c0;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9ccu: goto label_24a9cc;
        case 0x24a9d0u: goto label_24a9d0;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9dcu: goto label_24a9dc;
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9e8u: goto label_24a9e8;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9f0u: goto label_24a9f0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa00u: goto label_24aa00;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa0cu: goto label_24aa0c;
        case 0x24aa10u: goto label_24aa10;
        case 0x24aa14u: goto label_24aa14;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa28u: goto label_24aa28;
        case 0x24aa2cu: goto label_24aa2c;
        case 0x24aa30u: goto label_24aa30;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa3cu: goto label_24aa3c;
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa44u: goto label_24aa44;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        case 0x24aac8u: goto label_24aac8;
        case 0x24aaccu: goto label_24aacc;
        case 0x24aad0u: goto label_24aad0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aad8u: goto label_24aad8;
        case 0x24aadcu: goto label_24aadc;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aae8u: goto label_24aae8;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf0u: goto label_24aaf0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24aafcu: goto label_24aafc;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab04u: goto label_24ab04;
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab18u: goto label_24ab18;
        case 0x24ab1cu: goto label_24ab1c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab2cu: goto label_24ab2c;
        case 0x24ab30u: goto label_24ab30;
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab3cu: goto label_24ab3c;
        case 0x24ab40u: goto label_24ab40;
        case 0x24ab44u: goto label_24ab44;
        default: break;
    }

    ctx->pc = 0x24a708u;

label_24a708:
    // 0x24a708: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_24a70c:
    // 0x24a70c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x24a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_24a710:
    // 0x24a710: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x24a710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_24a714:
    // 0x24a714: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x24a714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a718:
    // 0x24a718: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_24a71c:
    // 0x24a71c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x24a71cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24a720:
    // 0x24a720: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_24a724:
    // 0x24a724: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_24a728:
    // 0x24a728: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24a728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a72c:
    // 0x24a72c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24a730:
    // 0x24a730: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x24a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_24a734:
    // 0x24a734: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24a734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24a738:
    // 0x24a738: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_24a73c:
    // 0x24a73c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_24a740:
    // 0x24a740: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_24a744:
    // 0x24a744: 0x8a150007  lwl         $s5, 0x7($s0)
    ctx->pc = 0x24a744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 21) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 21, (int32_t)merged); }
label_24a748:
    // 0x24a748: 0x9a150004  lwr         $s5, 0x4($s0)
    ctx->pc = 0x24a748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 21) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 21) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 21, merged64); }
label_24a74c:
    // 0x24a74c: 0xc08c682  jal         func_231A08
label_24a750:
    if (ctx->pc == 0x24A750u) {
        ctx->pc = 0x24A750u;
            // 0x24a750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A754u;
        goto label_24a754;
    }
    ctx->pc = 0x24A74Cu;
    SET_GPR_U32(ctx, 31, 0x24A754u);
    ctx->pc = 0x24A750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A74Cu;
            // 0x24a750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A754u; }
        if (ctx->pc != 0x24A754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A754u; }
        if (ctx->pc != 0x24A754u) { return; }
    }
    ctx->pc = 0x24A754u;
label_24a754:
    // 0x24a754: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24a754u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a758:
    // 0x24a758: 0x9223005d  lbu         $v1, 0x5D($s1)
    ctx->pc = 0x24a758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_24a75c:
    // 0x24a75c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24a760:
    // 0x24a760: 0x6a240063  ldl         $a0, 0x63($s1)
    ctx->pc = 0x24a760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24a764:
    // 0x24a764: 0x6e24005c  ldr         $a0, 0x5C($s1)
    ctx->pc = 0x24a764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_24a768:
    // 0x24a768: 0x6a25006b  ldl         $a1, 0x6B($s1)
    ctx->pc = 0x24a768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_24a76c:
    // 0x24a76c: 0x6e250064  ldr         $a1, 0x64($s1)
    ctx->pc = 0x24a76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_24a770:
    // 0x24a770: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x24a770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a774:
    // 0x24a774: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x24a774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a778:
    // 0x24a778: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x24a778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a77c:
    // 0x24a77c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_24a780:
    if (ctx->pc == 0x24A780u) {
        ctx->pc = 0x24A780u;
            // 0x24a780: 0xb7a50008  sdr         $a1, 0x8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = 0x24A784u;
        goto label_24a784;
    }
    ctx->pc = 0x24A77Cu;
    {
        const bool branch_taken_0x24a77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A77Cu;
            // 0x24a780: 0xb7a50008  sdr         $a1, 0x8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a77c) {
            ctx->pc = 0x24A7A4u;
            goto label_24a7a4;
        }
    }
    ctx->pc = 0x24A784u;
label_24a784:
    // 0x24a784: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_24a788:
    // 0x24a788: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a78c:
    if (ctx->pc == 0x24A78Cu) {
        ctx->pc = 0x24A78Cu;
            // 0x24a78c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x24A790u;
        goto label_24a790;
    }
    ctx->pc = 0x24A788u;
    {
        const bool branch_taken_0x24a788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A788u;
            // 0x24a78c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a788) {
            ctx->pc = 0x24A7A0u;
            goto label_24a7a0;
        }
    }
    ctx->pc = 0x24A790u;
label_24a790:
    // 0x24a790: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x24a790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_24a794:
    // 0x24a794: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x24a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_24a798:
    // 0x24a798: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_24a79c:
    // 0x24a79c: 0x0  nop
    ctx->pc = 0x24a79cu;
    // NOP
label_24a7a0:
    // 0x24a7a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24a7a4:
    // 0x24a7a4: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x24a7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24a7a8:
    // 0x24a7a8: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x24a7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_24a7ac:
    // 0x24a7ac: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x24a7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24a7b0:
    // 0x24a7b0: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x24a7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24a7b4:
    // 0x24a7b4: 0xb2220063  sdl         $v0, 0x63($s1)
    ctx->pc = 0x24a7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a7b8:
    // 0x24a7b8: 0xb622005c  sdr         $v0, 0x5C($s1)
    ctx->pc = 0x24a7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a7bc:
    // 0x24a7bc: 0xb223006b  sdl         $v1, 0x6B($s1)
    ctx->pc = 0x24a7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a7c0:
    // 0x24a7c0: 0xb6230064  sdr         $v1, 0x64($s1)
    ctx->pc = 0x24a7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24a7c4:
    // 0x24a7c4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x24a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24a7c8:
    // 0x24a7c8: 0x241001fd  addiu       $s0, $zero, 0x1FD
    ctx->pc = 0x24a7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24a7cc:
    // 0x24a7cc: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x24a7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_24a7d0:
    // 0x24a7d0: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x24a7d0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_24a7d4:
    // 0x24a7d4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_24a7d8:
    if (ctx->pc == 0x24A7D8u) {
        ctx->pc = 0x24A7D8u;
            // 0x24a7d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24A7DCu;
        goto label_24a7dc;
    }
    ctx->pc = 0x24A7D4u;
    {
        const bool branch_taken_0x24a7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7d4) {
            ctx->pc = 0x24A7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A7D4u;
            // 0x24a7d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A7DCu;
            goto label_24a7dc;
        }
    }
    ctx->pc = 0x24A7DCu;
label_24a7dc:
    // 0x24a7dc: 0x8e641198  lw          $a0, 0x1198($s3)
    ctx->pc = 0x24a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4504)));
label_24a7e0:
    // 0x24a7e0: 0x1010  mfhi        $v0
    ctx->pc = 0x24a7e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_24a7e4:
    // 0x24a7e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a7e8:
    // 0x24a7e8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x24a7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a7ec:
    // 0x24a7ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24a7f0:
    // 0x24a7f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_24a7f4:
    if (ctx->pc == 0x24A7F4u) {
        ctx->pc = 0x24A7F4u;
            // 0x24a7f4: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x24A7F8u;
        goto label_24a7f8;
    }
    ctx->pc = 0x24A7F0u;
    {
        const bool branch_taken_0x24a7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A7F0u;
            // 0x24a7f4: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7f0) {
            ctx->pc = 0x24A818u;
            goto label_24a818;
        }
    }
    ctx->pc = 0x24A7F8u;
label_24a7f8:
    // 0x24a7f8: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x24a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24a7fc:
    // 0x24a7fc: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x24a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_24a800:
    // 0x24a800: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24a804:
    if (ctx->pc == 0x24A804u) {
        ctx->pc = 0x24A804u;
            // 0x24a804: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24A808u;
        goto label_24a808;
    }
    ctx->pc = 0x24A800u;
    {
        const bool branch_taken_0x24a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a800) {
            ctx->pc = 0x24A804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A800u;
            // 0x24a804: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A808u;
            goto label_24a808;
        }
    }
    ctx->pc = 0x24A808u;
label_24a808:
    // 0x24a808: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24a80c:
    // 0x24a80c: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x24a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_24a810:
    // 0x24a810: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x24a810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24a814:
    // 0x24a814: 0x0  nop
    ctx->pc = 0x24a814u;
    // NOP
label_24a818:
    // 0x24a818: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x24a818u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_24a81c:
    // 0x24a81c: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24a820:
    // 0x24a820: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24a824:
    if (ctx->pc == 0x24A824u) {
        ctx->pc = 0x24A824u;
            // 0x24a824: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24A828u;
        goto label_24a828;
    }
    ctx->pc = 0x24A820u;
    {
        const bool branch_taken_0x24a820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a820) {
            ctx->pc = 0x24A824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A820u;
            // 0x24a824: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A828u;
            goto label_24a828;
        }
    }
    ctx->pc = 0x24A828u;
label_24a828:
    // 0x24a828: 0x240501fd  addiu       $a1, $zero, 0x1FD
    ctx->pc = 0x24a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24a82c:
    // 0x24a82c: 0x8e641198  lw          $a0, 0x1198($s3)
    ctx->pc = 0x24a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4504)));
label_24a830:
    // 0x24a830: 0x1810  mfhi        $v1
    ctx->pc = 0x24a830u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24a834:
    // 0x24a834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a838:
    // 0x24a838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24a83c:
    // 0x24a83c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x24a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_24a840:
    // 0x24a840: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x24a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24a844:
    // 0x24a844: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x24a844u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_24a848:
    // 0x24a848: 0x1810  mfhi        $v1
    ctx->pc = 0x24a848u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24a84c:
    // 0x24a84c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a850:
    // 0x24a850: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24a854:
    // 0x24a854: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x24a854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
label_24a858:
    // 0x24a858: 0x8e8200cc  lw          $v0, 0xCC($s4)
    ctx->pc = 0x24a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_24a85c:
    // 0x24a85c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24a860:
    if (ctx->pc == 0x24A860u) {
        ctx->pc = 0x24A860u;
            // 0x24a860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A864u;
        goto label_24a864;
    }
    ctx->pc = 0x24A85Cu;
    {
        const bool branch_taken_0x24a85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A85Cu;
            // 0x24a860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a85c) {
            ctx->pc = 0x24A884u;
            goto label_24a884;
        }
    }
    ctx->pc = 0x24A864u;
label_24a864:
    // 0x24a864: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x24a864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_24a868:
    // 0x24a868: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x24a868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_24a86c:
    // 0x24a86c: 0x34a5690c  ori         $a1, $a1, 0x690C
    ctx->pc = 0x24a86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26892);
label_24a870:
    // 0x24a870: 0x40f809  jalr        $v0
label_24a874:
    if (ctx->pc == 0x24A874u) {
        ctx->pc = 0x24A874u;
            // 0x24a874: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A878u;
        goto label_24a878;
    }
    ctx->pc = 0x24A870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A878u);
        ctx->pc = 0x24A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A870u;
            // 0x24a874: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A878u; }
            if (ctx->pc != 0x24A878u) { return; }
        }
        }
    }
    ctx->pc = 0x24A878u;
label_24a878:
    // 0x24a878: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a87c:
    // 0x24a87c: 0x1640006c  bnez        $s2, . + 4 + (0x6C << 2)
label_24a880:
    if (ctx->pc == 0x24A880u) {
        ctx->pc = 0x24A884u;
        goto label_24a884;
    }
    ctx->pc = 0x24A87Cu;
    {
        const bool branch_taken_0x24a87c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a87c) {
            ctx->pc = 0x24AA30u;
            goto label_24aa30;
        }
    }
    ctx->pc = 0x24A884u;
label_24a884:
    // 0x24a884: 0xc08c698  jal         func_231A60
label_24a888:
    if (ctx->pc == 0x24A888u) {
        ctx->pc = 0x24A888u;
            // 0x24a888: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A88Cu;
        goto label_24a88c;
    }
    ctx->pc = 0x24A884u;
    SET_GPR_U32(ctx, 31, 0x24A88Cu);
    ctx->pc = 0x24A888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A884u;
            // 0x24a888: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A88Cu; }
        if (ctx->pc != 0x24A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A88Cu; }
        if (ctx->pc != 0x24A88Cu) { return; }
    }
    ctx->pc = 0x24A88Cu;
label_24a88c:
    // 0x24a88c: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_24a890:
    if (ctx->pc == 0x24A890u) {
        ctx->pc = 0x24A890u;
            // 0x24a890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A894u;
        goto label_24a894;
    }
    ctx->pc = 0x24A88Cu;
    {
        const bool branch_taken_0x24a88c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A88Cu;
            // 0x24a890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a88c) {
            ctx->pc = 0x24A8A8u;
            goto label_24a8a8;
        }
    }
    ctx->pc = 0x24A894u;
label_24a894:
    // 0x24a894: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x24a894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
label_24a898:
    // 0x24a898: 0xc0929a4  jal         func_24A690
label_24a89c:
    if (ctx->pc == 0x24A89Cu) {
        ctx->pc = 0x24A89Cu;
            // 0x24a89c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A8A0u;
        goto label_24a8a0;
    }
    ctx->pc = 0x24A898u;
    SET_GPR_U32(ctx, 31, 0x24A8A0u);
    ctx->pc = 0x24A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A898u;
            // 0x24a89c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A690u;
    if (runtime->hasFunction(0x24A690u)) {
        auto targetFn = runtime->lookupFunction(0x24A690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8A0u; }
        if (ctx->pc != 0x24A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A690_0x24a690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8A0u; }
        if (ctx->pc != 0x24A8A0u) { return; }
    }
    ctx->pc = 0x24A8A0u;
label_24a8a0:
    // 0x24a8a0: 0x2622005c  addiu       $v0, $s1, 0x5C
    ctx->pc = 0x24a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_24a8a4:
    // 0x24a8a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_24a8a8:
    // 0x24a8a8: 0xc08a254  jal         func_228950
label_24a8ac:
    if (ctx->pc == 0x24A8ACu) {
        ctx->pc = 0x24A8ACu;
            // 0x24a8ac: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x24A8B0u;
        goto label_24a8b0;
    }
    ctx->pc = 0x24A8A8u;
    SET_GPR_U32(ctx, 31, 0x24A8B0u);
    ctx->pc = 0x24A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8A8u;
            // 0x24a8ac: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8B0u; }
        if (ctx->pc != 0x24A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8B0u; }
        if (ctx->pc != 0x24A8B0u) { return; }
    }
    ctx->pc = 0x24A8B0u;
label_24a8b0:
    // 0x24a8b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a8b4:
    // 0x24a8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a8b8:
    // 0x24a8b8: 0xc08a254  jal         func_228950
label_24a8bc:
    if (ctx->pc == 0x24A8BCu) {
        ctx->pc = 0x24A8BCu;
            // 0x24a8bc: 0x2b28024  and         $s0, $s5, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & GPR_U64(ctx, 18));
        ctx->pc = 0x24A8C0u;
        goto label_24a8c0;
    }
    ctx->pc = 0x24A8B8u;
    SET_GPR_U32(ctx, 31, 0x24A8C0u);
    ctx->pc = 0x24A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8B8u;
            // 0x24a8bc: 0x2b28024  and         $s0, $s5, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8C0u; }
        if (ctx->pc != 0x24A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8C0u; }
        if (ctx->pc != 0x24A8C0u) { return; }
    }
    ctx->pc = 0x24A8C0u;
label_24a8c0:
    // 0x24a8c0: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_24a8c4:
    // 0x24a8c4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_24a8c8:
    if (ctx->pc == 0x24A8C8u) {
        ctx->pc = 0x24A8CCu;
        goto label_24a8cc;
    }
    ctx->pc = 0x24A8C4u;
    {
        const bool branch_taken_0x24a8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a8c4) {
            ctx->pc = 0x24A8E4u;
            goto label_24a8e4;
        }
    }
    ctx->pc = 0x24A8CCu;
label_24a8cc:
    // 0x24a8cc: 0xc08a254  jal         func_228950
label_24a8d0:
    if (ctx->pc == 0x24A8D0u) {
        ctx->pc = 0x24A8D0u;
            // 0x24a8d0: 0x3c04c000  lui         $a0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
        ctx->pc = 0x24A8D4u;
        goto label_24a8d4;
    }
    ctx->pc = 0x24A8CCu;
    SET_GPR_U32(ctx, 31, 0x24A8D4u);
    ctx->pc = 0x24A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8CCu;
            // 0x24a8d0: 0x3c04c000  lui         $a0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8D4u; }
        if (ctx->pc != 0x24A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8D4u; }
        if (ctx->pc != 0x24A8D4u) { return; }
    }
    ctx->pc = 0x24A8D4u;
label_24a8d4:
    // 0x24a8d4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x24a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_24a8d8:
    // 0x24a8d8: 0x10520002  beq         $v0, $s2, . + 4 + (0x2 << 2)
label_24a8dc:
    if (ctx->pc == 0x24A8DCu) {
        ctx->pc = 0x24A8DCu;
            // 0x24a8dc: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->pc = 0x24A8E0u;
        goto label_24a8e0;
    }
    ctx->pc = 0x24A8D8u;
    {
        const bool branch_taken_0x24a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x24A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8D8u;
            // 0x24a8dc: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d8) {
            ctx->pc = 0x24A8E4u;
            goto label_24a8e4;
        }
    }
    ctx->pc = 0x24A8E0u;
label_24a8e0:
    // 0x24a8e0: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x24a8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_24a8e4:
    // 0x24a8e4: 0xc08a254  jal         func_228950
label_24a8e8:
    if (ctx->pc == 0x24A8E8u) {
        ctx->pc = 0x24A8ECu;
        goto label_24a8ec;
    }
    ctx->pc = 0x24A8E4u;
    SET_GPR_U32(ctx, 31, 0x24A8ECu);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8ECu; }
        if (ctx->pc != 0x24A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8ECu; }
        if (ctx->pc != 0x24A8ECu) { return; }
    }
    ctx->pc = 0x24A8ECu;
label_24a8ec:
    // 0x24a8ec: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x24a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_24a8f0:
    // 0x24a8f0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x24a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_24a8f4:
    // 0x24a8f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_24a8f8:
    if (ctx->pc == 0x24A8F8u) {
        ctx->pc = 0x24A8F8u;
            // 0x24a8f8: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x24A8FCu;
        goto label_24a8fc;
    }
    ctx->pc = 0x24A8F4u;
    {
        const bool branch_taken_0x24a8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8F4u;
            // 0x24a8f8: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8f4) {
            ctx->pc = 0x24A90Cu;
            goto label_24a90c;
        }
    }
    ctx->pc = 0x24A8FCu;
label_24a8fc:
    // 0x24a8fc: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x24a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_24a900:
    // 0x24a900: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24a900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a904:
    // 0x24a904: 0x10000003  b           . + 4 + (0x3 << 2)
label_24a908:
    if (ctx->pc == 0x24A908u) {
        ctx->pc = 0x24A908u;
            // 0x24a908: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x24A90Cu;
        goto label_24a90c;
    }
    ctx->pc = 0x24A904u;
    {
        const bool branch_taken_0x24a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A904u;
            // 0x24a908: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a904) {
            ctx->pc = 0x24A914u;
            goto label_24a914;
        }
    }
    ctx->pc = 0x24A90Cu;
label_24a90c:
    // 0x24a90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24a910:
    // 0x24a910: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x24a910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_24a914:
    // 0x24a914: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x24a914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_24a918:
    // 0x24a918: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x24a918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_24a91c:
    // 0x24a91c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x24a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_24a920:
    // 0x24a920: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_24a924:
    // 0x24a924: 0xc092566  jal         func_249598
label_24a928:
    if (ctx->pc == 0x24A928u) {
        ctx->pc = 0x24A928u;
            // 0x24a928: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x24A92Cu;
        goto label_24a92c;
    }
    ctx->pc = 0x24A924u;
    SET_GPR_U32(ctx, 31, 0x24A92Cu);
    ctx->pc = 0x24A928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A924u;
            // 0x24a928: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    if (runtime->hasFunction(0x249598u)) {
        auto targetFn = runtime->lookupFunction(0x249598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A92Cu; }
        if (ctx->pc != 0x24A92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249598_0x249598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A92Cu; }
        if (ctx->pc != 0x24A92Cu) { return; }
    }
    ctx->pc = 0x24A92Cu;
label_24a92c:
    // 0x24a92c: 0xc092590  jal         func_249640
label_24a930:
    if (ctx->pc == 0x24A930u) {
        ctx->pc = 0x24A934u;
        goto label_24a934;
    }
    ctx->pc = 0x24A92Cu;
    SET_GPR_U32(ctx, 31, 0x24A934u);
    ctx->pc = 0x249640u;
    if (runtime->hasFunction(0x249640u)) {
        auto targetFn = runtime->lookupFunction(0x249640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A934u; }
        if (ctx->pc != 0x24A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249640_0x249640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A934u; }
        if (ctx->pc != 0x24A934u) { return; }
    }
    ctx->pc = 0x24A934u;
label_24a934:
    // 0x24a934: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_24a938:
    // 0x24a938: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x24a938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_24a93c:
    // 0x24a93c: 0x96830030  lhu         $v1, 0x30($s4)
    ctx->pc = 0x24a93cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_24a940:
    // 0x24a940: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x24a940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_24a944:
    // 0x24a944: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24a948:
    if (ctx->pc == 0x24A948u) {
        ctx->pc = 0x24A948u;
            // 0x24a948: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x24A94Cu;
        goto label_24a94c;
    }
    ctx->pc = 0x24A944u;
    {
        const bool branch_taken_0x24a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A944u;
            // 0x24a948: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a944) {
            ctx->pc = 0x24A978u;
            goto label_24a978;
        }
    }
    ctx->pc = 0x24A94Cu;
label_24a94c:
    // 0x24a94c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x24a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_24a950:
    // 0x24a950: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x24a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_24a954:
    // 0x24a954: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x24a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_24a958:
    // 0x24a958: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x24a958u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_24a95c:
    // 0x24a95c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_24a960:
    // 0x24a960: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x24a960u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_24a964:
    // 0x24a964: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x24a964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_24a968:
    // 0x24a968: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24a968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_24a96c:
    // 0x24a96c: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x24a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_24a970:
    // 0x24a970: 0x1000000d  b           . + 4 + (0xD << 2)
label_24a974:
    if (ctx->pc == 0x24A974u) {
        ctx->pc = 0x24A974u;
            // 0x24a974: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x24A978u;
        goto label_24a978;
    }
    ctx->pc = 0x24A970u;
    {
        const bool branch_taken_0x24a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A970u;
            // 0x24a974: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a970) {
            ctx->pc = 0x24A9A8u;
            goto label_24a9a8;
        }
    }
    ctx->pc = 0x24A978u;
label_24a978:
    // 0x24a978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24a97c:
    if (ctx->pc == 0x24A97Cu) {
        ctx->pc = 0x24A97Cu;
            // 0x24a97c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x24A980u;
        goto label_24a980;
    }
    ctx->pc = 0x24A978u;
    {
        const bool branch_taken_0x24a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A978u;
            // 0x24a97c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a978) {
            ctx->pc = 0x24A990u;
            goto label_24a990;
        }
    }
    ctx->pc = 0x24A980u;
label_24a980:
    // 0x24a980: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24a984:
    // 0x24a984: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x24a984u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24a988:
    // 0x24a988: 0x10000007  b           . + 4 + (0x7 << 2)
label_24a98c:
    if (ctx->pc == 0x24A98Cu) {
        ctx->pc = 0x24A98Cu;
            // 0x24a98c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x24A990u;
        goto label_24a990;
    }
    ctx->pc = 0x24A988u;
    {
        const bool branch_taken_0x24a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A988u;
            // 0x24a98c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a988) {
            ctx->pc = 0x24A9A8u;
            goto label_24a9a8;
        }
    }
    ctx->pc = 0x24A990u;
label_24a990:
    // 0x24a990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24a994:
    if (ctx->pc == 0x24A994u) {
        ctx->pc = 0x24A994u;
            // 0x24a994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24A998u;
        goto label_24a998;
    }
    ctx->pc = 0x24A990u;
    {
        const bool branch_taken_0x24a990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A990u;
            // 0x24a994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a990) {
            ctx->pc = 0x24A9A8u;
            goto label_24a9a8;
        }
    }
    ctx->pc = 0x24A998u;
label_24a998:
    // 0x24a998: 0x9223006d  lbu         $v1, 0x6D($s1)
    ctx->pc = 0x24a998u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
label_24a99c:
    // 0x24a99c: 0x1462005d  bne         $v1, $v0, . + 4 + (0x5D << 2)
label_24a9a0:
    if (ctx->pc == 0x24A9A0u) {
        ctx->pc = 0x24A9A0u;
            // 0x24a9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A9A4u;
        goto label_24a9a4;
    }
    ctx->pc = 0x24A99Cu;
    {
        const bool branch_taken_0x24a99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A99Cu;
            // 0x24a9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a99c) {
            ctx->pc = 0x24AB14u;
            goto label_24ab14;
        }
    }
    ctx->pc = 0x24A9A4u;
label_24a9a4:
    // 0x24a9a4: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24a9a8:
    // 0x24a9a8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x24a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24a9ac:
    // 0x24a9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a9b0:
    // 0x24a9b0: 0xc090f82  jal         func_243E08
label_24a9b4:
    if (ctx->pc == 0x24A9B4u) {
        ctx->pc = 0x24A9B4u;
            // 0x24a9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24A9B8u;
        goto label_24a9b8;
    }
    ctx->pc = 0x24A9B0u;
    SET_GPR_U32(ctx, 31, 0x24A9B8u);
    ctx->pc = 0x24A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9B0u;
            // 0x24a9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (runtime->hasFunction(0x243E08u)) {
        auto targetFn = runtime->lookupFunction(0x243E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9B8u; }
        if (ctx->pc != 0x24A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243E08_0x243e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9B8u; }
        if (ctx->pc != 0x24A9B8u) { return; }
    }
    ctx->pc = 0x24A9B8u;
label_24a9b8:
    // 0x24a9b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a9b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a9bc:
    // 0x24a9bc: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_24a9c0:
    if (ctx->pc == 0x24A9C0u) {
        ctx->pc = 0x24A9C0u;
            // 0x24a9c0: 0x86820030  lh          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->pc = 0x24A9C4u;
        goto label_24a9c4;
    }
    ctx->pc = 0x24A9BCu;
    {
        const bool branch_taken_0x24a9bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a9bc) {
            ctx->pc = 0x24A9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9BCu;
            // 0x24a9c0: 0x86820030  lh          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9C4u;
label_24a9c4:
    // 0x24a9c4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x24a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_24a9c8:
    // 0x24a9c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x24a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_24a9cc:
    // 0x24a9cc: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x24a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_24a9d0:
    // 0x24a9d0: 0x86820030  lh          $v0, 0x30($s4)
    ctx->pc = 0x24a9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_24a9d4:
    // 0x24a9d4: 0x3a430011  xori        $v1, $s2, 0x11
    ctx->pc = 0x24a9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17);
label_24a9d8:
    // 0x24a9d8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_24a9dc:
    // 0x24a9dc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_24a9e0:
    if (ctx->pc == 0x24A9E0u) {
        ctx->pc = 0x24A9E0u;
            // 0x24a9e0: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->pc = 0x24A9E4u;
        goto label_24a9e4;
    }
    ctx->pc = 0x24A9DCu;
    {
        const bool branch_taken_0x24a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9DCu;
            // 0x24a9e0: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9dc) {
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24A9E4u;
label_24a9e4:
    // 0x24a9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a9e8:
    // 0x24a9e8: 0xc092b56  jal         func_24AD58
label_24a9ec:
    if (ctx->pc == 0x24A9ECu) {
        ctx->pc = 0x24A9ECu;
            // 0x24a9ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A9F0u;
        goto label_24a9f0;
    }
    ctx->pc = 0x24A9E8u;
    SET_GPR_U32(ctx, 31, 0x24A9F0u);
    ctx->pc = 0x24A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9E8u;
            // 0x24a9ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AD58u;
    if (runtime->hasFunction(0x24AD58u)) {
        auto targetFn = runtime->lookupFunction(0x24AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9F0u; }
        if (ctx->pc != 0x24A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024AD58_0x24ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9F0u; }
        if (ctx->pc != 0x24A9F0u) { return; }
    }
    ctx->pc = 0x24A9F0u;
label_24a9f0:
    // 0x24a9f0: 0x86820030  lh          $v0, 0x30($s4)
    ctx->pc = 0x24a9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_24a9f4:
    // 0x24a9f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_24a9f8:
    // 0x24a9f8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_24a9fc:
    if (ctx->pc == 0x24A9FCu) {
        ctx->pc = 0x24A9FCu;
            // 0x24a9fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AA00u;
        goto label_24aa00;
    }
    ctx->pc = 0x24A9F8u;
    {
        const bool branch_taken_0x24a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9F8u;
            // 0x24a9fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9f8) {
            ctx->pc = 0x24AB14u;
            goto label_24ab14;
        }
    }
    ctx->pc = 0x24AA00u;
label_24aa00:
    // 0x24aa00: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x24aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_24aa04:
    // 0x24aa04: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_24aa08:
    if (ctx->pc == 0x24AA08u) {
        ctx->pc = 0x24AA08u;
            // 0x24aa08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AA0Cu;
        goto label_24aa0c;
    }
    ctx->pc = 0x24AA04u;
    {
        const bool branch_taken_0x24aa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA04u;
            // 0x24aa08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa04) {
            ctx->pc = 0x24AB14u;
            goto label_24ab14;
        }
    }
    ctx->pc = 0x24AA0Cu;
label_24aa0c:
    // 0x24aa0c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_24aa10:
    // 0x24aa10: 0xc08a254  jal         func_228950
label_24aa14:
    if (ctx->pc == 0x24AA14u) {
        ctx->pc = 0x24AA14u;
            // 0x24aa14: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x24AA18u;
        goto label_24aa18;
    }
    ctx->pc = 0x24AA10u;
    SET_GPR_U32(ctx, 31, 0x24AA18u);
    ctx->pc = 0x24AA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA10u;
            // 0x24aa14: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA18u; }
        if (ctx->pc != 0x24AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA18u; }
        if (ctx->pc != 0x24AA18u) { return; }
    }
    ctx->pc = 0x24AA18u;
label_24aa18:
    // 0x24aa18: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x24aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_24aa1c:
    // 0x24aa1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24aa20:
    // 0x24aa20: 0xc092bbe  jal         func_24AEF8
label_24aa24:
    if (ctx->pc == 0x24AA24u) {
        ctx->pc = 0x24AA24u;
            // 0x24aa24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24AA28u;
        goto label_24aa28;
    }
    ctx->pc = 0x24AA20u;
    SET_GPR_U32(ctx, 31, 0x24AA28u);
    ctx->pc = 0x24AA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA20u;
            // 0x24aa24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AEF8u;
    if (runtime->hasFunction(0x24AEF8u)) {
        auto targetFn = runtime->lookupFunction(0x24AEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA28u; }
        if (ctx->pc != 0x24AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024AEF8_0x24aef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA28u; }
        if (ctx->pc != 0x24AA28u) { return; }
    }
    ctx->pc = 0x24AA28u;
label_24aa28:
    // 0x24aa28: 0x10000039  b           . + 4 + (0x39 << 2)
label_24aa2c:
    if (ctx->pc == 0x24AA2Cu) {
        ctx->pc = 0x24AA2Cu;
            // 0x24aa2c: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x24AA30u;
        goto label_24aa30;
    }
    ctx->pc = 0x24AA28u;
    {
        const bool branch_taken_0x24aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA28u;
            // 0x24aa2c: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa28) {
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24AA30u;
label_24aa30:
    // 0x24aa30: 0xc08c698  jal         func_231A60
label_24aa34:
    if (ctx->pc == 0x24AA34u) {
        ctx->pc = 0x24AA34u;
            // 0x24aa34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AA38u;
        goto label_24aa38;
    }
    ctx->pc = 0x24AA30u;
    SET_GPR_U32(ctx, 31, 0x24AA38u);
    ctx->pc = 0x24AA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA30u;
            // 0x24aa34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA38u; }
        if (ctx->pc != 0x24AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA38u; }
        if (ctx->pc != 0x24AA38u) { return; }
    }
    ctx->pc = 0x24AA38u;
label_24aa38:
    // 0x24aa38: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_24aa3c:
    // 0x24aa3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24aa40:
    if (ctx->pc == 0x24AA40u) {
        ctx->pc = 0x24AA40u;
            // 0x24aa40: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x24AA44u;
        goto label_24aa44;
    }
    ctx->pc = 0x24AA3Cu;
    {
        const bool branch_taken_0x24aa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA3Cu;
            // 0x24aa40: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa3c) {
            ctx->pc = 0x24AA50u;
            goto label_24aa50;
        }
    }
    ctx->pc = 0x24AA44u;
label_24aa44:
    // 0x24aa44: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x24aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_24aa48:
    // 0x24aa48: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x24aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_24aa4c:
    // 0x24aa4c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_24aa50:
    // 0x24aa50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24aa54:
    // 0x24aa54: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x24aa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24aa58:
    // 0x24aa58: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x24aa58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_24aa5c:
    // 0x24aa5c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x24aa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24aa60:
    // 0x24aa60: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x24aa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24aa64:
    // 0x24aa64: 0xb2220063  sdl         $v0, 0x63($s1)
    ctx->pc = 0x24aa64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24aa68:
    // 0x24aa68: 0xb622005c  sdr         $v0, 0x5C($s1)
    ctx->pc = 0x24aa68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24aa6c:
    // 0x24aa6c: 0xb223006b  sdl         $v1, 0x6B($s1)
    ctx->pc = 0x24aa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24aa70:
    // 0x24aa70: 0xb6230064  sdr         $v1, 0x64($s1)
    ctx->pc = 0x24aa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24aa74:
    // 0x24aa74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24aa78:
    // 0x24aa78: 0x9222005d  lbu         $v0, 0x5D($s1)
    ctx->pc = 0x24aa78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_24aa7c:
    // 0x24aa7c: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
label_24aa80:
    if (ctx->pc == 0x24AA80u) {
        ctx->pc = 0x24AA80u;
            // 0x24aa80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AA84u;
        goto label_24aa84;
    }
    ctx->pc = 0x24AA7Cu;
    {
        const bool branch_taken_0x24aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA7Cu;
            // 0x24aa80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa7c) {
            ctx->pc = 0x24AB14u;
            goto label_24ab14;
        }
    }
    ctx->pc = 0x24AA84u;
label_24aa84:
    // 0x24aa84: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24aa88:
    // 0x24aa88: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x24aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24aa8c:
    // 0x24aa8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24aa90:
    if (ctx->pc == 0x24AA90u) {
        ctx->pc = 0x24AA90u;
            // 0x24aa90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24AA94u;
        goto label_24aa94;
    }
    ctx->pc = 0x24AA8Cu;
    {
        const bool branch_taken_0x24aa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa8c) {
            ctx->pc = 0x24AA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA8Cu;
            // 0x24aa90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AA94u;
            goto label_24aa94;
        }
    }
    ctx->pc = 0x24AA94u;
label_24aa94:
    // 0x24aa94: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x24aa94u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_24aa98:
    // 0x24aa98: 0x8e641198  lw          $a0, 0x1198($s3)
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4504)));
label_24aa9c:
    // 0x24aa9c: 0x1810  mfhi        $v1
    ctx->pc = 0x24aa9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24aaa0:
    // 0x24aaa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24aaa4:
    // 0x24aaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24aaa8:
    // 0x24aaa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24aaac:
    // 0x24aaac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24aab0:
    if (ctx->pc == 0x24AAB0u) {
        ctx->pc = 0x24AAB0u;
            // 0x24aab0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x24AAB4u;
        goto label_24aab4;
    }
    ctx->pc = 0x24AAACu;
    {
        const bool branch_taken_0x24aaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAACu;
            // 0x24aab0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaac) {
            ctx->pc = 0x24AAD0u;
            goto label_24aad0;
        }
    }
    ctx->pc = 0x24AAB4u;
label_24aab4:
    // 0x24aab4: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24aab8:
    // 0x24aab8: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_24aabc:
    // 0x24aabc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24aac0:
    if (ctx->pc == 0x24AAC0u) {
        ctx->pc = 0x24AAC0u;
            // 0x24aac0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24AAC4u;
        goto label_24aac4;
    }
    ctx->pc = 0x24AABCu;
    {
        const bool branch_taken_0x24aabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aabc) {
            ctx->pc = 0x24AAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24AABCu;
            // 0x24aac0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AAC4u;
            goto label_24aac4;
        }
    }
    ctx->pc = 0x24AAC4u;
label_24aac4:
    // 0x24aac4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24aac8:
    // 0x24aac8: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x24aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_24aacc:
    // 0x24aacc: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x24aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24aad0:
    // 0x24aad0: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x24aad0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_24aad4:
    // 0x24aad4: 0x240201fd  addiu       $v0, $zero, 0x1FD
    ctx->pc = 0x24aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24aad8:
    // 0x24aad8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24aadc:
    if (ctx->pc == 0x24AADCu) {
        ctx->pc = 0x24AADCu;
            // 0x24aadc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x24AAE0u;
        goto label_24aae0;
    }
    ctx->pc = 0x24AAD8u;
    {
        const bool branch_taken_0x24aad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aad8) {
            ctx->pc = 0x24AADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAD8u;
            // 0x24aadc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AAE0u;
            goto label_24aae0;
        }
    }
    ctx->pc = 0x24AAE0u;
label_24aae0:
    // 0x24aae0: 0x240501fd  addiu       $a1, $zero, 0x1FD
    ctx->pc = 0x24aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
label_24aae4:
    // 0x24aae4: 0x8e641198  lw          $a0, 0x1198($s3)
    ctx->pc = 0x24aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4504)));
label_24aae8:
    // 0x24aae8: 0x1810  mfhi        $v1
    ctx->pc = 0x24aae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24aaec:
    // 0x24aaec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24aaf0:
    // 0x24aaf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24aaf4:
    // 0x24aaf4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x24aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_24aaf8:
    // 0x24aaf8: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x24aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_24aafc:
    // 0x24aafc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x24aafcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_24ab00:
    // 0x24ab00: 0x1810  mfhi        $v1
    ctx->pc = 0x24ab00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24ab04:
    // 0x24ab04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24ab08:
    // 0x24ab08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24ab0c:
    // 0x24ab0c: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x24ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
label_24ab10:
    // 0x24ab10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24ab10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ab14:
    // 0x24ab14: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x24ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24ab18:
    // 0x24ab18: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x24ab18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24ab1c:
    // 0x24ab1c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24ab1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ab20:
    // 0x24ab20: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24ab20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ab24:
    // 0x24ab24: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24ab24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24ab28:
    // 0x24ab28: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24ab28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24ab2c:
    // 0x24ab2c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24ab2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24ab30:
    // 0x24ab30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24ab30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ab34:
    // 0x24ab34: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24ab34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24ab38:
    // 0x24ab38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24ab38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ab3c:
    // 0x24ab3c: 0x3e00008  jr          $ra
label_24ab40:
    if (ctx->pc == 0x24AB40u) {
        ctx->pc = 0x24AB40u;
            // 0x24ab40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x24AB44u;
        goto label_24ab44;
    }
    ctx->pc = 0x24AB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB3Cu;
            // 0x24ab40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24AB44u;
label_24ab44:
    // 0x24ab44: 0x0  nop
    ctx->pc = 0x24ab44u;
    // NOP
    ctx->pc = 0x24ab48u;
}
