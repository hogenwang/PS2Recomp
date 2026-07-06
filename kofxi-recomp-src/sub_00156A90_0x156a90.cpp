#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156A90
// Address: 0x156a90 - 0x15afac
void sub_00156A90_0x156a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A90_0x156a90");
#endif

    switch (ctx->pc) {
        case 0x156ae0u: goto label_156ae0;
        case 0x156af4u: goto label_156af4;
        case 0x156afcu: goto label_156afc;
        case 0x156b10u: goto label_156b10;
        case 0x156b20u: goto label_156b20;
        case 0x156b34u: goto label_156b34;
        case 0x156b3cu: goto label_156b3c;
        case 0x156b50u: goto label_156b50;
        case 0x156b60u: goto label_156b60;
        case 0x156b74u: goto label_156b74;
        case 0x156b7cu: goto label_156b7c;
        case 0x156b90u: goto label_156b90;
        case 0x156ba0u: goto label_156ba0;
        case 0x156bb4u: goto label_156bb4;
        case 0x156bbcu: goto label_156bbc;
        case 0x156bd0u: goto label_156bd0;
        case 0x156be0u: goto label_156be0;
        case 0x156bf8u: goto label_156bf8;
        case 0x156c10u: goto label_156c10;
        case 0x156c28u: goto label_156c28;
        case 0x156c40u: goto label_156c40;
        case 0x156c50u: goto label_156c50;
        case 0x156d20u: goto label_156d20;
        case 0x156d50u: goto label_156d50;
        case 0x156e24u: goto label_156e24;
        case 0x156e3cu: goto label_156e3c;
        case 0x156e6cu: goto label_156e6c;
        case 0x156ed4u: goto label_156ed4;
        case 0x156f48u: goto label_156f48;
        case 0x156fc0u: goto label_156fc0;
        case 0x157120u: goto label_157120;
        case 0x157180u: goto label_157180;
        case 0x15718cu: goto label_15718c;
        case 0x157198u: goto label_157198;
        case 0x1571d8u: goto label_1571d8;
        case 0x1571f0u: goto label_1571f0;
        case 0x157290u: goto label_157290;
        case 0x157340u: goto label_157340;
        case 0x157358u: goto label_157358;
        case 0x157424u: goto label_157424;
        case 0x157460u: goto label_157460;
        case 0x157480u: goto label_157480;
        case 0x157488u: goto label_157488;
        case 0x1574e0u: goto label_1574e0;
        case 0x157508u: goto label_157508;
        case 0x157548u: goto label_157548;
        case 0x157550u: goto label_157550;
        case 0x1575c4u: goto label_1575c4;
        case 0x1575d0u: goto label_1575d0;
        case 0x157660u: goto label_157660;
        case 0x1576f0u: goto label_1576f0;
        case 0x157708u: goto label_157708;
        case 0x15771cu: goto label_15771c;
        case 0x157728u: goto label_157728;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577f0u: goto label_1577f0;
        case 0x157848u: goto label_157848;
        case 0x157888u: goto label_157888;
        case 0x1578a0u: goto label_1578a0;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578c0u: goto label_1578c0;
        case 0x157930u: goto label_157930;
        case 0x157970u: goto label_157970;
        case 0x157980u: goto label_157980;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579ecu: goto label_1579ec;
        case 0x157a00u: goto label_157a00;
        case 0x157a20u: goto label_157a20;
        case 0x157a30u: goto label_157a30;
        case 0x157a50u: goto label_157a50;
        case 0x157b98u: goto label_157b98;
        case 0x157ba8u: goto label_157ba8;
        case 0x157be8u: goto label_157be8;
        case 0x157bf8u: goto label_157bf8;
        case 0x157c38u: goto label_157c38;
        case 0x157c88u: goto label_157c88;
        case 0x157c9cu: goto label_157c9c;
        case 0x157cbcu: goto label_157cbc;
        case 0x157d3cu: goto label_157d3c;
        case 0x157d58u: goto label_157d58;
        case 0x157d68u: goto label_157d68;
        case 0x157decu: goto label_157dec;
        case 0x157e14u: goto label_157e14;
        case 0x157e24u: goto label_157e24;
        case 0x157ed0u: goto label_157ed0;
        case 0x157f40u: goto label_157f40;
        case 0x157f88u: goto label_157f88;
        case 0x157fc4u: goto label_157fc4;
        case 0x157fd0u: goto label_157fd0;
        case 0x158078u: goto label_158078;
        case 0x15808cu: goto label_15808c;
        case 0x1580a8u: goto label_1580a8;
        case 0x1580e0u: goto label_1580e0;
        case 0x1580f4u: goto label_1580f4;
        case 0x158108u: goto label_158108;
        case 0x15811cu: goto label_15811c;
        case 0x158130u: goto label_158130;
        case 0x158144u: goto label_158144;
        case 0x158158u: goto label_158158;
        case 0x15816cu: goto label_15816c;
        case 0x158220u: goto label_158220;
        case 0x158280u: goto label_158280;
        case 0x158320u: goto label_158320;
        case 0x158480u: goto label_158480;
        case 0x1584e0u: goto label_1584e0;
        case 0x158530u: goto label_158530;
        case 0x1585b0u: goto label_1585b0;
        case 0x1585d0u: goto label_1585d0;
        case 0x1585ecu: goto label_1585ec;
        case 0x158610u: goto label_158610;
        case 0x158620u: goto label_158620;
        case 0x158660u: goto label_158660;
        case 0x1586b0u: goto label_1586b0;
        case 0x1586d4u: goto label_1586d4;
        case 0x158718u: goto label_158718;
        case 0x158768u: goto label_158768;
        case 0x158778u: goto label_158778;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587ccu: goto label_1587cc;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587e4u: goto label_1587e4;
        case 0x158800u: goto label_158800;
        case 0x158844u: goto label_158844;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588e0u: goto label_1588e0;
        case 0x158924u: goto label_158924;
        case 0x158948u: goto label_158948;
        case 0x158978u: goto label_158978;
        case 0x1589e0u: goto label_1589e0;
        case 0x1589f8u: goto label_1589f8;
        case 0x158a08u: goto label_158a08;
        case 0x158a24u: goto label_158a24;
        case 0x158a3cu: goto label_158a3c;
        case 0x158a50u: goto label_158a50;
        case 0x158a6cu: goto label_158a6c;
        case 0x158a84u: goto label_158a84;
        case 0x158a94u: goto label_158a94;
        case 0x158ab4u: goto label_158ab4;
        case 0x158accu: goto label_158acc;
        case 0x158adcu: goto label_158adc;
        case 0x158bf8u: goto label_158bf8;
        case 0x158c3cu: goto label_158c3c;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d78u: goto label_158d78;
        case 0x158dbcu: goto label_158dbc;
        case 0x158de0u: goto label_158de0;
        case 0x158df0u: goto label_158df0;
        case 0x158e30u: goto label_158e30;
        case 0x158e74u: goto label_158e74;
        case 0x158ea4u: goto label_158ea4;
        case 0x158ec0u: goto label_158ec0;
        case 0x158f34u: goto label_158f34;
        case 0x158f60u: goto label_158f60;
        case 0x158fb0u: goto label_158fb0;
        case 0x159000u: goto label_159000;
        case 0x159030u: goto label_159030;
        case 0x15907cu: goto label_15907c;
        case 0x1590acu: goto label_1590ac;
        case 0x1590d0u: goto label_1590d0;
        case 0x159138u: goto label_159138;
        case 0x159164u: goto label_159164;
        case 0x159190u: goto label_159190;
        case 0x1591dcu: goto label_1591dc;
        case 0x15920cu: goto label_15920c;
        case 0x159244u: goto label_159244;
        case 0x1592d0u: goto label_1592d0;
        case 0x1592e0u: goto label_1592e0;
        case 0x1592f0u: goto label_1592f0;
        case 0x15931cu: goto label_15931c;
        case 0x159350u: goto label_159350;
        case 0x159364u: goto label_159364;
        case 0x159380u: goto label_159380;
        case 0x1593ccu: goto label_1593cc;
        case 0x1593fcu: goto label_1593fc;
        case 0x159420u: goto label_159420;
        case 0x159494u: goto label_159494;
        case 0x1594c0u: goto label_1594c0;
        case 0x15951cu: goto label_15951c;
        case 0x15954cu: goto label_15954c;
        case 0x1595f4u: goto label_1595f4;
        case 0x159618u: goto label_159618;
        case 0x159628u: goto label_159628;
        case 0x15964cu: goto label_15964c;
        case 0x159688u: goto label_159688;
        case 0x1596a4u: goto label_1596a4;
        case 0x159710u: goto label_159710;
        case 0x15972cu: goto label_15972c;
        case 0x159740u: goto label_159740;
        case 0x159750u: goto label_159750;
        case 0x159790u: goto label_159790;
        case 0x1597ecu: goto label_1597ec;
        case 0x15981cu: goto label_15981c;
        case 0x159884u: goto label_159884;
        case 0x1598f8u: goto label_1598f8;
        case 0x159930u: goto label_159930;
        case 0x15997cu: goto label_15997c;
        case 0x1599acu: goto label_1599ac;
        case 0x1599d0u: goto label_1599d0;
        case 0x159a44u: goto label_159a44;
        case 0x159a70u: goto label_159a70;
        case 0x159abcu: goto label_159abc;
        case 0x159aecu: goto label_159aec;
        case 0x159b98u: goto label_159b98;
        case 0x159bfcu: goto label_159bfc;
        case 0x159c28u: goto label_159c28;
        case 0x159c50u: goto label_159c50;
        case 0x159c9cu: goto label_159c9c;
        case 0x159cccu: goto label_159ccc;
        case 0x159d14u: goto label_159d14;
        case 0x159d88u: goto label_159d88;
        case 0x159db0u: goto label_159db0;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e2cu: goto label_159e2c;
        case 0x159e50u: goto label_159e50;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ef0u: goto label_159ef0;
        case 0x159f38u: goto label_159f38;
        case 0x159f80u: goto label_159f80;
        case 0x159fa0u: goto label_159fa0;
        case 0x159fecu: goto label_159fec;
        case 0x15a06cu: goto label_15a06c;
        case 0x15a0a8u: goto label_15a0a8;
        case 0x15a0d8u: goto label_15a0d8;
        case 0x15a150u: goto label_15a150;
        case 0x15a19cu: goto label_15a19c;
        case 0x15a1ccu: goto label_15a1cc;
        case 0x15a1f8u: goto label_15a1f8;
        case 0x15a270u: goto label_15a270;
        case 0x15a284u: goto label_15a284;
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a300u: goto label_15a300;
        case 0x15a330u: goto label_15a330;
        case 0x15a358u: goto label_15a358;
        case 0x15a36cu: goto label_15a36c;
        case 0x15a380u: goto label_15a380;
        case 0x15a398u: goto label_15a398;
        case 0x15a410u: goto label_15a410;
        case 0x15a434u: goto label_15a434;
        case 0x15a458u: goto label_15a458;
        case 0x15a46cu: goto label_15a46c;
        case 0x15a480u: goto label_15a480;
        case 0x15a49cu: goto label_15a49c;
        case 0x15a514u: goto label_15a514;
        case 0x15a520u: goto label_15a520;
        case 0x15a530u: goto label_15a530;
        case 0x15a554u: goto label_15a554;
        case 0x15a564u: goto label_15a564;
        case 0x15a574u: goto label_15a574;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a614u: goto label_15a614;
        case 0x15a638u: goto label_15a638;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a748u: goto label_15a748;
        case 0x15a778u: goto label_15a778;
        case 0x15a7d0u: goto label_15a7d0;
        case 0x15a820u: goto label_15a820;
        case 0x15a850u: goto label_15a850;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8e0u: goto label_15a8e0;
        case 0x15a960u: goto label_15a960;
        case 0x15a970u: goto label_15a970;
        case 0x15a9c8u: goto label_15a9c8;
        case 0x15a9f8u: goto label_15a9f8;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa98u: goto label_15aa98;
        case 0x15aac0u: goto label_15aac0;
        case 0x15ab10u: goto label_15ab10;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab58u: goto label_15ab58;
        case 0x15ab60u: goto label_15ab60;
        case 0x15ab70u: goto label_15ab70;
        case 0x15ab90u: goto label_15ab90;
        case 0x15abbcu: goto label_15abbc;
        case 0x15abf0u: goto label_15abf0;
        case 0x15acd0u: goto label_15acd0;
        case 0x15ace0u: goto label_15ace0;
        case 0x15adc0u: goto label_15adc0;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae78u: goto label_15ae78;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aee8u: goto label_15aee8;
        case 0x15af04u: goto label_15af04;
        case 0x15af44u: goto label_15af44;
        case 0x15af58u: goto label_15af58;
        case 0x15af80u: goto label_15af80;
        default: break;
    }

    ctx->pc = 0x156a90u;

label_156a90:
    // 0x156a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156a94: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x156a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x156a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156a9c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x156a9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x156aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156aa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x156aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x156aa8: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x156AA8u;
    {
        const bool branch_taken_0x156aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x156AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AA8u;
            // 0x156aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aa8) {
            ctx->pc = 0x156B98u;
            goto label_156b98;
        }
    }
    ctx->pc = 0x156AB0u;
    // 0x156ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x156ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156ab4: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x156AB4u;
    {
        const bool branch_taken_0x156ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x156ab4) {
            ctx->pc = 0x156B58u;
            goto label_156b58;
        }
    }
    ctx->pc = 0x156ABCu;
    // 0x156abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156ac0: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x156B18u;
            goto label_156b18;
        }
    }
    ctx->pc = 0x156AC8u;
    // 0x156ac8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156AC8u;
    {
        const bool branch_taken_0x156ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ac8) {
            ctx->pc = 0x156AD8u;
            goto label_156ad8;
        }
    }
    ctx->pc = 0x156AD0u;
    // 0x156ad0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x156AD0u;
    {
        const bool branch_taken_0x156ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156AD0u;
            // 0x156ad4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ad0) {
            ctx->pc = 0x156BD4u;
            goto label_156bd4;
        }
    }
    ctx->pc = 0x156AD8u;
label_156ad8:
    // 0x156ad8: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x156AD8u;
    SET_GPR_U32(ctx, 31, 0x156AE0u);
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AE0u; }
        if (ctx->pc != 0x156AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AE0u; }
        if (ctx->pc != 0x156AE0u) { return; }
    }
    ctx->pc = 0x156AE0u;
label_156ae0:
    // 0x156ae0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ae8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x156ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x156aec: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x156AECu;
    SET_GPR_U32(ctx, 31, 0x156AF4u);
    ctx->pc = 0x156AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AECu;
            // 0x156af0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AF4u; }
        if (ctx->pc != 0x156AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AF4u; }
        if (ctx->pc != 0x156AF4u) { return; }
    }
    ctx->pc = 0x156AF4u;
label_156af4:
    // 0x156af4: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x156AF4u;
    SET_GPR_U32(ctx, 31, 0x156AFCu);
    ctx->pc = 0x156AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156AF4u;
            // 0x156af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AFCu; }
        if (ctx->pc != 0x156AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156AFCu; }
        if (ctx->pc != 0x156AFCu) { return; }
    }
    ctx->pc = 0x156AFCu;
label_156afc:
    // 0x156afc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x156b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x156b08: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x156B08u;
    SET_GPR_U32(ctx, 31, 0x156B10u);
    ctx->pc = 0x156B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B08u;
            // 0x156b0c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (runtime->hasFunction(0x18AE10u)) {
        auto targetFn = runtime->lookupFunction(0x18AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B10u; }
        if (ctx->pc != 0x156B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE10_0x18ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B10u; }
        if (ctx->pc != 0x156B10u) { return; }
    }
    ctx->pc = 0x156B10u;
label_156b10:
    // 0x156b10: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x156B10u;
    {
        const bool branch_taken_0x156b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b10) {
            ctx->pc = 0x156BD0u;
            goto label_156bd0;
        }
    }
    ctx->pc = 0x156B18u;
label_156b18:
    // 0x156b18: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x156B18u;
    SET_GPR_U32(ctx, 31, 0x156B20u);
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B20u; }
        if (ctx->pc != 0x156B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B20u; }
        if (ctx->pc != 0x156B20u) { return; }
    }
    ctx->pc = 0x156B20u;
label_156b20:
    // 0x156b20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b28: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x156b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x156b2c: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x156B2Cu;
    SET_GPR_U32(ctx, 31, 0x156B34u);
    ctx->pc = 0x156B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B2Cu;
            // 0x156b30: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B34u; }
        if (ctx->pc != 0x156B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B34u; }
        if (ctx->pc != 0x156B34u) { return; }
    }
    ctx->pc = 0x156B34u;
label_156b34:
    // 0x156b34: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x156B34u;
    SET_GPR_U32(ctx, 31, 0x156B3Cu);
    ctx->pc = 0x156B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B34u;
            // 0x156b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B3Cu; }
        if (ctx->pc != 0x156B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B3Cu; }
        if (ctx->pc != 0x156B3Cu) { return; }
    }
    ctx->pc = 0x156B3Cu;
label_156b3c:
    // 0x156b3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b44: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x156b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x156b48: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x156B48u;
    SET_GPR_U32(ctx, 31, 0x156B50u);
    ctx->pc = 0x156B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B48u;
            // 0x156b4c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (runtime->hasFunction(0x18AE10u)) {
        auto targetFn = runtime->lookupFunction(0x18AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B50u; }
        if (ctx->pc != 0x156B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE10_0x18ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B50u; }
        if (ctx->pc != 0x156B50u) { return; }
    }
    ctx->pc = 0x156B50u;
label_156b50:
    // 0x156b50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x156B50u;
    {
        const bool branch_taken_0x156b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b50) {
            ctx->pc = 0x156BD0u;
            goto label_156bd0;
        }
    }
    ctx->pc = 0x156B58u;
label_156b58:
    // 0x156b58: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x156B58u;
    SET_GPR_U32(ctx, 31, 0x156B60u);
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B60u; }
        if (ctx->pc != 0x156B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B60u; }
        if (ctx->pc != 0x156B60u) { return; }
    }
    ctx->pc = 0x156B60u;
label_156b60:
    // 0x156b60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b68: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x156b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x156b6c: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x156B6Cu;
    SET_GPR_U32(ctx, 31, 0x156B74u);
    ctx->pc = 0x156B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B6Cu;
            // 0x156b70: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B74u; }
        if (ctx->pc != 0x156B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B74u; }
        if (ctx->pc != 0x156B74u) { return; }
    }
    ctx->pc = 0x156B74u;
label_156b74:
    // 0x156b74: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x156B74u;
    SET_GPR_U32(ctx, 31, 0x156B7Cu);
    ctx->pc = 0x156B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B74u;
            // 0x156b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B7Cu; }
        if (ctx->pc != 0x156B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B7Cu; }
        if (ctx->pc != 0x156B7Cu) { return; }
    }
    ctx->pc = 0x156B7Cu;
label_156b7c:
    // 0x156b7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b84: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x156b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x156b88: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x156B88u;
    SET_GPR_U32(ctx, 31, 0x156B90u);
    ctx->pc = 0x156B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B88u;
            // 0x156b8c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (runtime->hasFunction(0x18AE10u)) {
        auto targetFn = runtime->lookupFunction(0x18AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B90u; }
        if (ctx->pc != 0x156B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE10_0x18ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B90u; }
        if (ctx->pc != 0x156B90u) { return; }
    }
    ctx->pc = 0x156B90u;
label_156b90:
    // 0x156b90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156B90u;
    {
        const bool branch_taken_0x156b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b90) {
            ctx->pc = 0x156BD0u;
            goto label_156bd0;
        }
    }
    ctx->pc = 0x156B98u;
label_156b98:
    // 0x156b98: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x156B98u;
    SET_GPR_U32(ctx, 31, 0x156BA0u);
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BA0u; }
        if (ctx->pc != 0x156BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BA0u; }
        if (ctx->pc != 0x156BA0u) { return; }
    }
    ctx->pc = 0x156BA0u;
label_156ba0:
    // 0x156ba0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ba8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x156ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x156bac: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x156BACu;
    SET_GPR_U32(ctx, 31, 0x156BB4u);
    ctx->pc = 0x156BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BACu;
            // 0x156bb0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BB4u; }
        if (ctx->pc != 0x156BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BB4u; }
        if (ctx->pc != 0x156BB4u) { return; }
    }
    ctx->pc = 0x156BB4u;
label_156bb4:
    // 0x156bb4: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x156BB4u;
    SET_GPR_U32(ctx, 31, 0x156BBCu);
    ctx->pc = 0x156BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BB4u;
            // 0x156bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BBCu; }
        if (ctx->pc != 0x156BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BBCu; }
        if (ctx->pc != 0x156BBCu) { return; }
    }
    ctx->pc = 0x156BBCu;
label_156bbc:
    // 0x156bbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bc4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x156bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x156bc8: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x156BC8u;
    SET_GPR_U32(ctx, 31, 0x156BD0u);
    ctx->pc = 0x156BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BC8u;
            // 0x156bcc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (runtime->hasFunction(0x18AE10u)) {
        auto targetFn = runtime->lookupFunction(0x18AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BD0u; }
        if (ctx->pc != 0x156BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE10_0x18ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156BD0u; }
        if (ctx->pc != 0x156BD0u) { return; }
    }
    ctx->pc = 0x156BD0u;
label_156bd0:
    // 0x156bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156bd4:
    // 0x156bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x156BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BD8u;
            // 0x156bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156BE0u;
label_156be0:
    // 0x156be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156be8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156bec: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x156bf0: 0xc055aa4  jal         func_156A90
    ctx->pc = 0x156BF0u;
    SET_GPR_U32(ctx, 31, 0x156BF8u);
    ctx->pc = 0x156BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156BF0u;
            // 0x156bf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A90u;
    goto label_156a90;
    ctx->pc = 0x156BF8u;
label_156bf8:
    // 0x156bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156c00: 0x3e00008  jr          $ra
    ctx->pc = 0x156C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C00u;
            // 0x156c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156C08u;
    // 0x156c08: 0x0  nop
    ctx->pc = 0x156c08u;
    // NOP
    // 0x156c0c: 0x0  nop
    ctx->pc = 0x156c0cu;
    // NOP
label_156c10:
    // 0x156c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156c18: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156c1c: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x156c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x156c20: 0xc055aa4  jal         func_156A90
    ctx->pc = 0x156C20u;
    SET_GPR_U32(ctx, 31, 0x156C28u);
    ctx->pc = 0x156C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C20u;
            // 0x156c24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A90u;
    goto label_156a90;
    ctx->pc = 0x156C28u;
label_156c28:
    // 0x156c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156c30: 0x3e00008  jr          $ra
    ctx->pc = 0x156C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C30u;
            // 0x156c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156C38u;
    // 0x156c38: 0x0  nop
    ctx->pc = 0x156c38u;
    // NOP
    // 0x156c3c: 0x0  nop
    ctx->pc = 0x156c3cu;
    // NOP
label_156c40:
    // 0x156c40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x156c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156c48: 0x3e00008  jr          $ra
    ctx->pc = 0x156C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C48u;
            // 0x156c4c: 0xa4a30266  sh          $v1, 0x266($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 614), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156C50u;
label_156c50:
    // 0x156c50: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x156c50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156c54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156c58: 0x50820019  beql        $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x156C58u;
    {
        const bool branch_taken_0x156c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x156c58) {
            ctx->pc = 0x156C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156C58u;
            // 0x156c5c: 0x8ca30270  lw          $v1, 0x270($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156CC0u;
            goto label_156cc0;
        }
    }
    ctx->pc = 0x156C60u;
    // 0x156c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156c64: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x156C64u;
    {
        const bool branch_taken_0x156c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156c64) {
            ctx->pc = 0x156C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156C64u;
            // 0x156c68: 0x8ca40270  lw          $a0, 0x270($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C7Cu;
            goto label_156c7c;
        }
    }
    ctx->pc = 0x156C6Cu;
    // 0x156c6c: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x156C6Cu;
    {
        const bool branch_taken_0x156c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c6c) {
            ctx->pc = 0x156C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156C6Cu;
            // 0x156c70: 0x94a20266  lhu         $v0, 0x266($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156CE0u;
            goto label_156ce0;
        }
    }
    ctx->pc = 0x156C74u;
    // 0x156c74: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x156C74u;
    {
        const bool branch_taken_0x156c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c74) {
            ctx->pc = 0x156CDCu;
            goto label_156cdc;
        }
    }
    ctx->pc = 0x156C7Cu;
label_156c7c:
    // 0x156c7c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x156c80: 0x34639200  ori         $v1, $v1, 0x9200
    ctx->pc = 0x156c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37376);
    // 0x156c84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x156c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x156c88: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156C88u;
    {
        const bool branch_taken_0x156c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c88) {
            ctx->pc = 0x156C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156C88u;
            // 0x156c8c: 0x8ca400dc  lw          $a0, 0xDC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C98u;
            goto label_156c98;
        }
    }
    ctx->pc = 0x156C90u;
    // 0x156c90: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x156C90u;
    {
        const bool branch_taken_0x156c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C90u;
            // 0x156c94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c90) {
            ctx->pc = 0x156D10u;
            goto label_156d10;
        }
    }
    ctx->pc = 0x156C98u;
label_156c98:
    // 0x156c98: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x156c9c: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x156c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
    // 0x156ca0: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x156ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x156ca4: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x156ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x156ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156cac: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156cb0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x156CB0u;
    {
        const bool branch_taken_0x156cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x156cb0) {
            ctx->pc = 0x156CDCu;
            goto label_156cdc;
        }
    }
    ctx->pc = 0x156CB8u;
    // 0x156cb8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x156CB8u;
    {
        const bool branch_taken_0x156cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156cb8) {
            ctx->pc = 0x156D10u;
            goto label_156d10;
        }
    }
    ctx->pc = 0x156CC0u;
label_156cc0:
    // 0x156cc0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x156cc4: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x156cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x156cc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156CCCu;
    {
        const bool branch_taken_0x156ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ccc) {
            ctx->pc = 0x156CDCu;
            goto label_156cdc;
        }
    }
    ctx->pc = 0x156CD4u;
    // 0x156cd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x156CD4u;
    {
        const bool branch_taken_0x156cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CD4u;
            // 0x156cd8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cd4) {
            ctx->pc = 0x156D10u;
            goto label_156d10;
        }
    }
    ctx->pc = 0x156CDCu;
label_156cdc:
    // 0x156cdc: 0x94a20266  lhu         $v0, 0x266($a1)
    ctx->pc = 0x156cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
label_156ce0:
    // 0x156ce0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x156CE0u;
    {
        const bool branch_taken_0x156ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ce0) {
            ctx->pc = 0x156CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156CE0u;
            // 0x156ce4: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156D08u;
            goto label_156d08;
        }
    }
    ctx->pc = 0x156CE8u;
    // 0x156ce8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156cec: 0xa4a20266  sh          $v0, 0x266($a1)
    ctx->pc = 0x156cecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x156cf0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x156cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156cf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156cf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x156cf8: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156CF8u;
    {
        const bool branch_taken_0x156cf8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x156cf8) {
            ctx->pc = 0x156CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156CF8u;
            // 0x156cfc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156D10u;
            goto label_156d10;
        }
    }
    ctx->pc = 0x156D00u;
    // 0x156d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156D00u;
    {
        const bool branch_taken_0x156d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D00u;
            // 0x156d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d00) {
            ctx->pc = 0x156D10u;
            goto label_156d10;
        }
    }
    ctx->pc = 0x156D08u;
label_156d08:
    // 0x156d08: 0xa4a20266  sh          $v0, 0x266($a1)
    ctx->pc = 0x156d08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x156d0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_156d10:
    // 0x156d10: 0x3e00008  jr          $ra
    ctx->pc = 0x156D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156D18u;
    // 0x156d18: 0x0  nop
    ctx->pc = 0x156d18u;
    // NOP
    // 0x156d1c: 0x0  nop
    ctx->pc = 0x156d1cu;
    // NOP
label_156d20:
    // 0x156d20: 0x94a20266  lhu         $v0, 0x266($a1)
    ctx->pc = 0x156d20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
    // 0x156d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156d28: 0xa4a20266  sh          $v0, 0x266($a1)
    ctx->pc = 0x156d28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x156d2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x156d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156d30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x156d34: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156D34u;
    {
        const bool branch_taken_0x156d34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x156d34) {
            ctx->pc = 0x156D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156D34u;
            // 0x156d38: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156D40u;
            goto label_156d40;
        }
    }
    ctx->pc = 0x156D3Cu;
    // 0x156d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156d40:
    // 0x156d40: 0x3e00008  jr          $ra
    ctx->pc = 0x156D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156D48u;
    // 0x156d48: 0x0  nop
    ctx->pc = 0x156d48u;
    // NOP
    // 0x156d4c: 0x0  nop
    ctx->pc = 0x156d4cu;
    // NOP
label_156d50:
    // 0x156d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156d54: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x156d5c: 0x24424098  addiu       $v0, $v0, 0x4098
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16536));
    // 0x156d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156d68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x156d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156d70: 0x8ca505dc  lw          $a1, 0x5DC($a1)
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x156d74: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x156d78: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x156d7c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x156d80: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x156d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x156d84: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x156d88: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x156d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156d90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156d94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x156d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x156d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156d9c: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156D9Cu;
    {
        const bool branch_taken_0x156d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x156d9c) {
            ctx->pc = 0x156DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156D9Cu;
            // 0x156da0: 0x96220292  lhu         $v0, 0x292($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 658)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DB8u;
            goto label_156db8;
        }
    }
    ctx->pc = 0x156DA4u;
    // 0x156da4: 0x964305e0  lhu         $v1, 0x5E0($s2)
    ctx->pc = 0x156da4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x156da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156dac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x156dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x156db0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x156DB0u;
    {
        const bool branch_taken_0x156db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DB0u;
            // 0x156db4: 0xa64305e0  sh          $v1, 0x5E0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156db0) {
            ctx->pc = 0x156FA8u;
            goto label_156fa8;
        }
    }
    ctx->pc = 0x156DB8u;
label_156db8:
    // 0x156db8: 0x924300f7  lbu         $v1, 0xF7($s2)
    ctx->pc = 0x156db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x156dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156dc0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156DC0u;
    {
        const bool branch_taken_0x156dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156dc0) {
            ctx->pc = 0x156DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DC0u;
            // 0x156dc4: 0x8e430270  lw          $v1, 0x270($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DD4u;
            goto label_156dd4;
        }
    }
    ctx->pc = 0x156DC8u;
    // 0x156dc8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x156dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x156dcc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x156DCCu;
    {
        const bool branch_taken_0x156dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DCCu;
            // 0x156dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156dcc) {
            ctx->pc = 0x156FA8u;
            goto label_156fa8;
        }
    }
    ctx->pc = 0x156DD4u;
label_156dd4:
    // 0x156dd4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x156dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x156dd8: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x156dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x156ddc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156de0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156DE0u;
    {
        const bool branch_taken_0x156de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156de0) {
            ctx->pc = 0x156DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DE0u;
            // 0x156de4: 0x96420266  lhu         $v0, 0x266($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156DF0u;
            goto label_156df0;
        }
    }
    ctx->pc = 0x156DE8u;
    // 0x156de8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x156DE8u;
    {
        const bool branch_taken_0x156de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DE8u;
            // 0x156dec: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156de8) {
            ctx->pc = 0x156FA8u;
            goto label_156fa8;
        }
    }
    ctx->pc = 0x156DF0u;
label_156df0:
    // 0x156df0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156df4: 0xa6420266  sh          $v0, 0x266($s2)
    ctx->pc = 0x156df4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x156df8: 0x96420266  lhu         $v0, 0x266($s2)
    ctx->pc = 0x156df8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x156dfc: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x156DFCu;
    {
        const bool branch_taken_0x156dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156dfc) {
            ctx->pc = 0x156E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156DFCu;
            // 0x156e00: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156FA8u;
            goto label_156fa8;
        }
    }
    ctx->pc = 0x156E04u;
    // 0x156e04: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x156e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x156e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e10: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x156e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e1c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x156E1Cu;
    SET_GPR_U32(ctx, 31, 0x156E24u);
    ctx->pc = 0x156E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E1Cu;
            // 0x156e20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E24u; }
        if (ctx->pc != 0x156E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E24u; }
        if (ctx->pc != 0x156E24u) { return; }
    }
    ctx->pc = 0x156E24u;
label_156e24:
    // 0x156e24: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x156E24u;
    {
        const bool branch_taken_0x156e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e24) {
            ctx->pc = 0x156FA4u;
            goto label_156fa4;
        }
    }
    ctx->pc = 0x156E2Cu;
    // 0x156e2c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156e30: 0x92440274  lbu         $a0, 0x274($s2)
    ctx->pc = 0x156e30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x156e34: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x156E34u;
    SET_GPR_U32(ctx, 31, 0x156E3Cu);
    ctx->pc = 0x156E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E34u;
            // 0x156e38: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E3Cu; }
        if (ctx->pc != 0x156E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E3Cu; }
        if (ctx->pc != 0x156E3Cu) { return; }
    }
    ctx->pc = 0x156E3Cu;
label_156e3c:
    // 0x156e3c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x156e40: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x156e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x156e44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x156e48: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x156e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x156e4c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x156e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x156e50: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x156e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x156e54: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x156e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x156e58: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x156e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x156e5c: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x156e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x156e60: 0x92420298  lbu         $v0, 0x298($s2)
    ctx->pc = 0x156e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x156e64: 0xc067c48  jal         func_19F120
    ctx->pc = 0x156E64u;
    SET_GPR_U32(ctx, 31, 0x156E6Cu);
    ctx->pc = 0x156E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E64u;
            // 0x156e68: 0xa2020298  sb          $v0, 0x298($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E6Cu; }
        if (ctx->pc != 0x156E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E6Cu; }
        if (ctx->pc != 0x156E6Cu) { return; }
    }
    ctx->pc = 0x156E6Cu;
label_156e6c:
    // 0x156e6c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x156e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x156e70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x156e74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156e78: 0x0  nop
    ctx->pc = 0x156e78u;
    // NOP
    // 0x156e7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e84: 0x0  nop
    ctx->pc = 0x156e84u;
    // NOP
    // 0x156e88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156e8c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x156E8Cu;
    {
        const bool branch_taken_0x156e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156e8c) {
            ctx->pc = 0x156E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156E8Cu;
            // 0x156e90: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x156EA4u;
            goto label_156ea4;
        }
    }
    ctx->pc = 0x156E94u;
    // 0x156e94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156e98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156e9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156E9Cu;
    {
        const bool branch_taken_0x156e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E9Cu;
            // 0x156ea0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e9c) {
            ctx->pc = 0x156EBCu;
            goto label_156ebc;
        }
    }
    ctx->pc = 0x156EA4u;
label_156ea4:
    // 0x156ea4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156ea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156eac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156eb0: 0x0  nop
    ctx->pc = 0x156eb0u;
    // NOP
    // 0x156eb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156eb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x156eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_156ebc:
    // 0x156ebc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x156ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156ec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x156ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x156ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ec8: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x156ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x156ecc: 0xc067c48  jal         func_19F120
    ctx->pc = 0x156ECCu;
    SET_GPR_U32(ctx, 31, 0x156ED4u);
    ctx->pc = 0x156ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156ECCu;
            // 0x156ed0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED4u; }
        if (ctx->pc != 0x156ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED4u; }
        if (ctx->pc != 0x156ED4u) { return; }
    }
    ctx->pc = 0x156ED4u;
label_156ed4:
    // 0x156ed4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x156ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x156ed8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x156edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156ee0: 0x0  nop
    ctx->pc = 0x156ee0u;
    // NOP
    // 0x156ee4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156eec: 0x0  nop
    ctx->pc = 0x156eecu;
    // NOP
    // 0x156ef0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156ef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156ef4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x156EF4u;
    {
        const bool branch_taken_0x156ef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156ef4) {
            ctx->pc = 0x156EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156EF4u;
            // 0x156ef8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x156F0Cu;
            goto label_156f0c;
        }
    }
    ctx->pc = 0x156EFCu;
    // 0x156efc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156f00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156f04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156F04u;
    {
        const bool branch_taken_0x156f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F04u;
            // 0x156f08: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f04) {
            ctx->pc = 0x156F24u;
            goto label_156f24;
        }
    }
    ctx->pc = 0x156F0Cu;
label_156f0c:
    // 0x156f0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156f10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156f14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156f18: 0x0  nop
    ctx->pc = 0x156f18u;
    // NOP
    // 0x156f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156f20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x156f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_156f24:
    // 0x156f24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x156f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x156f28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x156f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x156f2c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x156f30: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156f34: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x156f38: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x156f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x156f3c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x156f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x156f40: 0xc067c48  jal         func_19F120
    ctx->pc = 0x156F40u;
    SET_GPR_U32(ctx, 31, 0x156F48u);
    ctx->pc = 0x156F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F40u;
            // 0x156f44: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F48u; }
        if (ctx->pc != 0x156F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F48u; }
        if (ctx->pc != 0x156F48u) { return; }
    }
    ctx->pc = 0x156F48u;
label_156f48:
    // 0x156f48: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x156f4c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x156f50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156f54: 0x0  nop
    ctx->pc = 0x156f54u;
    // NOP
    // 0x156f58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156f60: 0x0  nop
    ctx->pc = 0x156f60u;
    // NOP
    // 0x156f64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156f68: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x156F68u;
    {
        const bool branch_taken_0x156f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156f68) {
            ctx->pc = 0x156F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156F68u;
            // 0x156f6c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x156F80u;
            goto label_156f80;
        }
    }
    ctx->pc = 0x156F70u;
    // 0x156f70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156f74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156f78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156F78u;
    {
        const bool branch_taken_0x156f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F78u;
            // 0x156f7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f78) {
            ctx->pc = 0x156F98u;
            goto label_156f98;
        }
    }
    ctx->pc = 0x156F80u;
label_156f80:
    // 0x156f80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156f84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x156f84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x156f88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x156f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x156f8c: 0x0  nop
    ctx->pc = 0x156f8cu;
    // NOP
    // 0x156f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156f94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_156f98:
    // 0x156f98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x156f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x156f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156fa0: 0xa6420266  sh          $v0, 0x266($s2)
    ctx->pc = 0x156fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 2));
label_156fa4:
    // 0x156fa4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_156fa8:
    // 0x156fa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x156fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x156FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FB8u;
            // 0x156fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156FC0u;
label_156fc0:
    // 0x156fc0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x156fc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x156fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156fc8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156FC8u;
    {
        const bool branch_taken_0x156fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156fc8) {
            ctx->pc = 0x156FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156FC8u;
            // 0x156fcc: 0x8ca205dc  lw          $v0, 0x5DC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156FD8u;
            goto label_156fd8;
        }
    }
    ctx->pc = 0x156FD0u;
    // 0x156fd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x156FD0u;
    {
        const bool branch_taken_0x156fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FD0u;
            // 0x156fd4: 0x94a60266  lhu         $a2, 0x266($a1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fd0) {
            ctx->pc = 0x156FFCu;
            goto label_156ffc;
        }
    }
    ctx->pc = 0x156FD8u;
label_156fd8:
    // 0x156fd8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x156fdc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156fe0: 0x8c420498  lw          $v0, 0x498($v0)
    ctx->pc = 0x156fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
    // 0x156fe4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x156fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x156fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156FE8u;
    {
        const bool branch_taken_0x156fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156fe8) {
            ctx->pc = 0x156FF8u;
            goto label_156ff8;
        }
    }
    ctx->pc = 0x156FF0u;
    // 0x156ff0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x156FF0u;
    {
        const bool branch_taken_0x156ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FF0u;
            // 0x156ff4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ff0) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x156FF8u;
label_156ff8:
    // 0x156ff8: 0x94a60266  lhu         $a2, 0x266($a1)
    ctx->pc = 0x156ff8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
label_156ffc:
    // 0x156ffc: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x156FFCu;
    {
        const bool branch_taken_0x156ffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ffc) {
            ctx->pc = 0x157000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156FFCu;
            // 0x157000: 0x8ca300dc  lw          $v1, 0xDC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157040u;
            goto label_157040;
        }
    }
    ctx->pc = 0x157004u;
    // 0x157004: 0x8ca30270  lw          $v1, 0x270($a1)
    ctx->pc = 0x157004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x157008: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x15700c: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x157010: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157014: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157014u;
    {
        const bool branch_taken_0x157014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157014) {
            ctx->pc = 0x157018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157014u;
            // 0x157018: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157024u;
            goto label_157024;
        }
    }
    ctx->pc = 0x15701Cu;
    // 0x15701c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x15701Cu;
    {
        const bool branch_taken_0x15701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15701Cu;
            // 0x157020: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15701c) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x157024u;
label_157024:
    // 0x157024: 0xa4a20266  sh          $v0, 0x266($a1)
    ctx->pc = 0x157024u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x157028: 0x94a20266  lhu         $v0, 0x266($a1)
    ctx->pc = 0x157028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 614)));
    // 0x15702c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15702Cu;
    {
        const bool branch_taken_0x15702c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15702c) {
            ctx->pc = 0x15703Cu;
            goto label_15703c;
        }
    }
    ctx->pc = 0x157034u;
    // 0x157034: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x157034u;
    {
        const bool branch_taken_0x157034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157034u;
            // 0x157038: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157034) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x15703Cu;
label_15703c:
    // 0x15703c: 0x8ca300dc  lw          $v1, 0xDC($a1)
    ctx->pc = 0x15703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_157040:
    // 0x157040: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157044: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x157044u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157048: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x15704c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157050: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x157050u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157054: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x157054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x157058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15705c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157064: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x157064u;
    {
        const bool branch_taken_0x157064 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x157068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157064u;
            // 0x157068: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157064) {
            ctx->pc = 0x1570ECu;
            goto label_1570ec;
        }
    }
    ctx->pc = 0x15706Cu;
    // 0x15706c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15706Cu;
    {
        const bool branch_taken_0x15706c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x15706c) {
            ctx->pc = 0x157070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15706Cu;
            // 0x157070: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157080u;
            goto label_157080;
        }
    }
    ctx->pc = 0x157074u;
    // 0x157074: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x157074u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157078u;
    {
        const bool branch_taken_0x157078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157078u;
            // 0x15707c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157078) {
            ctx->pc = 0x157098u;
            goto label_157098;
        }
    }
    ctx->pc = 0x157080u;
label_157080:
    // 0x157080: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x157084: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15708c: 0x0  nop
    ctx->pc = 0x15708cu;
    // NOP
    // 0x157090: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157094: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157098:
    // 0x157098: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x15709c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1570a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1570a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1570a4: 0x0  nop
    ctx->pc = 0x1570a4u;
    // NOP
    // 0x1570a8: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1570a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1570ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1570acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1570b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1570b4: 0x0  nop
    ctx->pc = 0x1570b4u;
    // NOP
    // 0x1570b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1570b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1570bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1570bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1570c0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1570C0u;
    {
        const bool branch_taken_0x1570c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1570C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570C0u;
            // 0x1570c4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570c0) {
            ctx->pc = 0x1570ECu;
            goto label_1570ec;
        }
    }
    ctx->pc = 0x1570C8u;
    // 0x1570c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1570cc: 0xc440d9c0  lwc1        $f0, -0x2640($v0)
    ctx->pc = 0x1570ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1570d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1570d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1570D4u;
    {
        const bool branch_taken_0x1570d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1570D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570D4u;
            // 0x1570d8: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570d4) {
            ctx->pc = 0x1570E4u;
            goto label_1570e4;
        }
    }
    ctx->pc = 0x1570DCu;
    // 0x1570dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1570dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1570e0: 0xe441d9c0  swc1        $f1, -0x2640($v0)
    ctx->pc = 0x1570e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), bits); }
label_1570e4:
    // 0x1570e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1570E4u;
    {
        const bool branch_taken_0x1570e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570E4u;
            // 0x1570e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570e4) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x1570ECu;
label_1570ec:
    // 0x1570ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1570f0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1570f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1570f4: 0xc440d9c0  lwc1        $f0, -0x2640($v0)
    ctx->pc = 0x1570f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1570f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1570fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1570FCu;
    {
        const bool branch_taken_0x1570fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1570fc) {
            ctx->pc = 0x157100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1570FCu;
            // 0x157100: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x157104u;
    // 0x157104: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x157108: 0xe441d9c0  swc1        $f1, -0x2640($v0)
    ctx->pc = 0x157108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), bits); }
    // 0x15710c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_157110:
    // 0x157110: 0x3e00008  jr          $ra
    ctx->pc = 0x157110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157118u;
    // 0x157118: 0x0  nop
    ctx->pc = 0x157118u;
    // NOP
    // 0x15711c: 0x0  nop
    ctx->pc = 0x15711cu;
    // NOP
label_157120:
    // 0x157120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x157120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x157124: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x157124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x157128: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15712c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157130: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157134: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x157134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15713c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157144: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x157144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x157148: 0x8ca505dc  lw          $a1, 0x5DC($a1)
    ctx->pc = 0x157148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x15714c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x15714cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157150: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x157154: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x157154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x157158: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15715c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157160: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x157160u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x157164: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x157164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x157168: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157168u;
    {
        const bool branch_taken_0x157168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157168u;
            // 0x15716c: 0x8c920010  lw          $s2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157168) {
            ctx->pc = 0x15718Cu;
            goto label_15718c;
        }
    }
    ctx->pc = 0x157170u;
    // 0x157170: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x157174: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x157174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x157178: 0xc062784  jal         func_189E10
    ctx->pc = 0x157178u;
    SET_GPR_U32(ctx, 31, 0x157180u);
    ctx->pc = 0x15717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157178u;
            // 0x15717c: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (runtime->hasFunction(0x189E10u)) {
        auto targetFn = runtime->lookupFunction(0x189E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157180u; }
        if (ctx->pc != 0x157180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E10_0x189e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157180u; }
        if (ctx->pc != 0x157180u) { return; }
    }
    ctx->pc = 0x157180u;
label_157180:
    // 0x157180: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x157180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157184: 0xc05ccb0  jal         func_1732C0
    ctx->pc = 0x157184u;
    SET_GPR_U32(ctx, 31, 0x15718Cu);
    ctx->pc = 0x157188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157184u;
            // 0x157188: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    if (runtime->hasFunction(0x1732C0u)) {
        auto targetFn = runtime->lookupFunction(0x1732C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15718Cu; }
        if (ctx->pc != 0x15718Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001732C0_0x1732c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15718Cu; }
        if (ctx->pc != 0x15718Cu) { return; }
    }
    ctx->pc = 0x15718Cu;
label_15718c:
    // 0x15718c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15718cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157190: 0x32350080  andi        $s5, $s1, 0x80
    ctx->pc = 0x157190u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x157194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157198:
    // 0x157198: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x15719c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x15719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1571a0: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1571A0u;
    {
        const bool branch_taken_0x1571a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571a0) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1571A8u;
    // 0x1571a8: 0x2e61000d  sltiu       $at, $s3, 0xD
    ctx->pc = 0x1571a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1571ac: 0x1020009e  beqz        $at, . + 4 + (0x9E << 2)
    ctx->pc = 0x1571ACu;
    {
        const bool branch_taken_0x1571ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571ac) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1571B4u;
    // 0x1571b4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1571b8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1571b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1571bc: 0x2463d250  addiu       $v1, $v1, -0x2DB0
    ctx->pc = 0x1571bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955600));
    // 0x1571c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1571c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1571c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1571c8: 0x400008  jr          $v0
    ctx->pc = 0x1571C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1571D0u: goto label_1571d0;
            case 0x1571E8u: goto label_1571e8;
            case 0x157228u: goto label_157228;
            case 0x157240u: goto label_157240;
            case 0x157268u: goto label_157268;
            case 0x157280u: goto label_157280;
            case 0x1572A8u: goto label_1572a8;
            case 0x1572C0u: goto label_1572c0;
            case 0x1572ECu: goto label_1572ec;
            case 0x157334u: goto label_157334;
            case 0x157348u: goto label_157348;
            case 0x1573A8u: goto label_1573a8;
            case 0x1573D8u: goto label_1573d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1571D0u;
label_1571d0:
    // 0x1571d0: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1571D0u;
    SET_GPR_U32(ctx, 31, 0x1571D8u);
    ctx->pc = 0x1571D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1571D0u;
            // 0x1571d4: 0x26840268  addiu       $a0, $s4, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571D8u; }
        if (ctx->pc != 0x1571D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571D8u; }
        if (ctx->pc != 0x1571D8u) { return; }
    }
    ctx->pc = 0x1571D8u;
label_1571d8:
    // 0x1571d8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1571D8u;
    {
        const bool branch_taken_0x1571d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571d8) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1571E0u;
    // 0x1571e0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1571E0u;
    {
        const bool branch_taken_0x1571e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571E0u;
            // 0x1571e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571e0) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1571E8u;
label_1571e8:
    // 0x1571e8: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1571E8u;
    SET_GPR_U32(ctx, 31, 0x1571F0u);
    ctx->pc = 0x1571ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1571E8u;
            // 0x1571ec: 0x26840268  addiu       $a0, $s4, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571F0u; }
        if (ctx->pc != 0x1571F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571F0u; }
        if (ctx->pc != 0x1571F0u) { return; }
    }
    ctx->pc = 0x1571F0u;
label_1571f0:
    // 0x1571f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1571F0u;
    {
        const bool branch_taken_0x1571f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571f0) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1571F8u;
    // 0x1571f8: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x1571f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1571fc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1571fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x157200: 0x24634090  addiu       $v1, $v1, 0x4090
    ctx->pc = 0x157200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16528));
    // 0x157204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157208: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x157208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15720c: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15720cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x157210: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x157214: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x157214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x157218: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x157218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15721c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157220: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x157220u;
    {
        const bool branch_taken_0x157220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157220u;
            // 0x157224: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157220) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x157228u;
label_157228:
    // 0x157228: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x157228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x15722c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x157230: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x157230u;
    {
        const bool branch_taken_0x157230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157230) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157238u;
    // 0x157238: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x157238u;
    {
        const bool branch_taken_0x157238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157238u;
            // 0x15723c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157238) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x157240u;
label_157240:
    // 0x157240: 0x8e820270  lw          $v0, 0x270($s4)
    ctx->pc = 0x157240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x157244: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x157244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x157248: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x157248u;
    {
        const bool branch_taken_0x157248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157248) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157250u;
    // 0x157250: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x157254: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x157254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x157258: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x157258u;
    {
        const bool branch_taken_0x157258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157258) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157260u;
    // 0x157260: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x157260u;
    {
        const bool branch_taken_0x157260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157260u;
            // 0x157264: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157260) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x157268u;
label_157268:
    // 0x157268: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x15726c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x157270: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x157270u;
    {
        const bool branch_taken_0x157270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157270) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157278u;
    // 0x157278: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157278u;
            // 0x15727c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157278) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x157280u;
label_157280:
    // 0x157280: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x157280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x157284: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x157288: 0xc062810  jal         func_18A040
    ctx->pc = 0x157288u;
    SET_GPR_U32(ctx, 31, 0x157290u);
    ctx->pc = 0x15728Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157288u;
            // 0x15728c: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157290u; }
        if (ctx->pc != 0x157290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157290u; }
        if (ctx->pc != 0x157290u) { return; }
    }
    ctx->pc = 0x157290u;
label_157290:
    // 0x157290: 0x8c420494  lw          $v0, 0x494($v0)
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x157294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157298: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x157298u;
    {
        const bool branch_taken_0x157298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157298) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1572A0u;
    // 0x1572a0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1572A0u;
    {
        const bool branch_taken_0x1572a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572A0u;
            // 0x1572a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572a0) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1572A8u;
label_1572a8:
    // 0x1572a8: 0x92420281  lbu         $v0, 0x281($s2)
    ctx->pc = 0x1572a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 641)));
    // 0x1572ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1572acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1572b0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1572B0u;
    {
        const bool branch_taken_0x1572b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1572b0) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1572B8u;
    // 0x1572b8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1572B8u;
    {
        const bool branch_taken_0x1572b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572B8u;
            // 0x1572bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572b8) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1572C0u;
label_1572c0:
    // 0x1572c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1572c4: 0x8442da60  lh          $v0, -0x25A0($v0)
    ctx->pc = 0x1572c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957664)));
    // 0x1572c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1572C8u;
    {
        const bool branch_taken_0x1572c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572c8) {
            ctx->pc = 0x1572CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1572C8u;
            // 0x1572cc: 0x924204f0  lbu         $v0, 0x4F0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1572D8u;
            goto label_1572d8;
        }
    }
    ctx->pc = 0x1572D0u;
    // 0x1572d0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1572D0u;
    {
        const bool branch_taken_0x1572d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572D0u;
            // 0x1572d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572d0) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1572D8u;
label_1572d8:
    // 0x1572d8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1572d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1572dc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1572DCu;
    {
        const bool branch_taken_0x1572dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1572dc) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1572E4u;
    // 0x1572e4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1572E4u;
    {
        const bool branch_taken_0x1572e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572E4u;
            // 0x1572e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572e4) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1572ECu;
label_1572ec:
    // 0x1572ec: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x1572f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1572f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1572f4: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x1572f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x1572f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1572f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1572fc: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1572FCu;
    {
        const bool branch_taken_0x1572fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572fc) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157304u;
    // 0x157304: 0x96820266  lhu         $v0, 0x266($s4)
    ctx->pc = 0x157304u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 614)));
    // 0x157308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x157308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15730c: 0xa6820266  sh          $v0, 0x266($s4)
    ctx->pc = 0x15730cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x157310: 0x96820266  lhu         $v0, 0x266($s4)
    ctx->pc = 0x157310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 614)));
    // 0x157314: 0x1c400044  bgtz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x157314u;
    {
        const bool branch_taken_0x157314 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x157314) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x15731Cu;
    // 0x15731c: 0x8e840270  lw          $a0, 0x270($s4)
    ctx->pc = 0x15731cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x157320: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x157320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x157324: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x157328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15732c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15732Cu;
            // 0x157330: 0xae830270  sw          $v1, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15732c) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x157334u;
label_157334:
    // 0x157334: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x157334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157338: 0xc0591d0  jal         func_164740
    ctx->pc = 0x157338u;
    SET_GPR_U32(ctx, 31, 0x157340u);
    ctx->pc = 0x15733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157338u;
            // 0x15733c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (runtime->hasFunction(0x164740u)) {
        auto targetFn = runtime->lookupFunction(0x164740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157340u; }
        if (ctx->pc != 0x157340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157340u; }
        if (ctx->pc != 0x157340u) { return; }
    }
    ctx->pc = 0x157340u;
label_157340:
    // 0x157340: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x157340u;
    {
        const bool branch_taken_0x157340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157340) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157348u;
label_157348:
    // 0x157348: 0x8e900518  lw          $s0, 0x518($s4)
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x15734c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157350: 0xc0591d0  jal         func_164740
    ctx->pc = 0x157350u;
    SET_GPR_U32(ctx, 31, 0x157358u);
    ctx->pc = 0x157354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157350u;
            // 0x157354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (runtime->hasFunction(0x164740u)) {
        auto targetFn = runtime->lookupFunction(0x164740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157358u; }
        if (ctx->pc != 0x157358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157358u; }
        if (ctx->pc != 0x157358u) { return; }
    }
    ctx->pc = 0x157358u;
label_157358:
    // 0x157358: 0x960300ec  lhu         $v1, 0xEC($s0)
    ctx->pc = 0x157358u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x15735c: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x15735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x157360: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157360u;
    {
        const bool branch_taken_0x157360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157360) {
            ctx->pc = 0x157378u;
            goto label_157378;
        }
    }
    ctx->pc = 0x157368u;
    // 0x157368: 0x8e820270  lw          $v0, 0x270($s4)
    ctx->pc = 0x157368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x15736c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x15736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x157370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157370u;
    {
        const bool branch_taken_0x157370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157370u;
            // 0x157374: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157370) {
            ctx->pc = 0x157388u;
            goto label_157388;
        }
    }
    ctx->pc = 0x157378u;
label_157378:
    // 0x157378: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
    // 0x15737c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x15737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x157380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157384: 0xae820270  sw          $v0, 0x270($s4)
    ctx->pc = 0x157384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
label_157388:
    // 0x157388: 0x920204f0  lbu         $v0, 0x4F0($s0)
    ctx->pc = 0x157388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x15738c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x157390: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157390) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157398u;
    // 0x157398: 0x12a00023  beqz        $s5, . + 4 + (0x23 << 2)
    ctx->pc = 0x157398u;
    {
        const bool branch_taken_0x157398 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x157398) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1573A0u;
    // 0x1573a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1573A0u;
    {
        const bool branch_taken_0x1573a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573A0u;
            // 0x1573a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573a0) {
            ctx->pc = 0x15743Cu;
            goto label_15743c;
        }
    }
    ctx->pc = 0x1573A8u;
label_1573a8:
    // 0x1573a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1573ac: 0x868405ec  lh          $a0, 0x5EC($s4)
    ctx->pc = 0x1573acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1516)));
    // 0x1573b0: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x1573b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1573b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1573b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1573bc: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x1573bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1573c0: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x1573c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x1573c4: 0x868305ee  lh          $v1, 0x5EE($s4)
    ctx->pc = 0x1573c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1518)));
    // 0x1573c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1573c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1573cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1573CCu;
    {
        const bool branch_taken_0x1573cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573CCu;
            // 0x1573d0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573cc) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x1573D4u;
    // 0x1573d4: 0x0  nop
    ctx->pc = 0x1573d4u;
    // NOP
label_1573d8:
    // 0x1573d8: 0x8e830518  lw          $v1, 0x518($s4)
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x1573dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1573e0: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1573e4: 0x8c6300dc  lw          $v1, 0xDC($v1)
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1573e8: 0x3064000c  andi        $a0, $v1, 0xC
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1573ec: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1573f0: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x1573f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1573f4: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1573f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1573fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1573fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157400: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x157404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157408: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15740c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157410: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x157410u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x157414: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157414u;
    {
        const bool branch_taken_0x157414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x157414) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x15741Cu;
    // 0x15741c: 0xc05cc98  jal         func_173260
    ctx->pc = 0x15741Cu;
    SET_GPR_U32(ctx, 31, 0x157424u);
    ctx->pc = 0x157420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15741Cu;
            // 0x157420: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (runtime->hasFunction(0x173260u)) {
        auto targetFn = runtime->lookupFunction(0x173260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157424u; }
        if (ctx->pc != 0x157424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173260_0x173260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157424u; }
        if (ctx->pc != 0x157424u) { return; }
    }
    ctx->pc = 0x157424u;
label_157424:
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
label_157428:
    // 0x157428: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15742c: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x15742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x157430: 0x5440ff59  bnel        $v0, $zero, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x157430u;
    {
        const bool branch_taken_0x157430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157430) {
            ctx->pc = 0x157434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157430u;
            // 0x157434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157198;
        }
    }
    ctx->pc = 0x157438u;
    // 0x157438: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15743c:
    // 0x15743c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15743cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157440: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15744c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15744cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157458: 0x3e00008  jr          $ra
    ctx->pc = 0x157458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15745Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157458u;
            // 0x15745c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157460u;
label_157460:
    // 0x157460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157464: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x157464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x157468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15746c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15746cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157474: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x157474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x157478: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x157478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15747c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_157480:
    // 0x157480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157484: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x157484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_157488:
    // 0x157488: 0x8cc30078  lw          $v1, 0x78($a2)
    ctx->pc = 0x157488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x15748c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15748Cu;
    {
        const bool branch_taken_0x15748c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15748c) {
            ctx->pc = 0x1574B0u;
            goto label_1574b0;
        }
    }
    ctx->pc = 0x157494u;
    // 0x157494: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x157494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x157498: 0x8443db40  lh          $v1, -0x24C0($v0)
    ctx->pc = 0x157498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957888)));
    // 0x15749c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x15749cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1574a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1574a4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1574a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1574a8: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x1574a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1574ac: 0x0  nop
    ctx->pc = 0x1574acu;
    // NOP
label_1574b0:
    // 0x1574b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1574b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1574b4: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1574b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1574b8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1574B8u;
    {
        const bool branch_taken_0x1574b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1574BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574B8u;
            // 0x1574bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574b8) {
            ctx->pc = 0x157488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157488;
        }
    }
    ctx->pc = 0x1574C0u;
    // 0x1574c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1574c4: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x1574c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1574c8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1574C8u;
    {
        const bool branch_taken_0x1574c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1574CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574C8u;
            // 0x1574cc: 0x24e70248  addiu       $a3, $a3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574c8) {
            ctx->pc = 0x157480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157480;
        }
    }
    ctx->pc = 0x1574D0u;
    // 0x1574d0: 0x860205ec  lh          $v0, 0x5EC($s0)
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x1574d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574d8: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1574D8u;
    SET_GPR_U32(ctx, 31, 0x1574E0u);
    ctx->pc = 0x1574DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574D8u;
            // 0x1574dc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574E0u; }
        if (ctx->pc != 0x1574E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574E0u; }
        if (ctx->pc != 0x1574E0u) { return; }
    }
    ctx->pc = 0x1574E0u;
label_1574e0:
    // 0x1574e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1574e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1574e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1574e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1574e8: 0x0  nop
    ctx->pc = 0x1574e8u;
    // NOP
    // 0x1574ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1574ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1574f0: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x1574F0u;
    {
        const bool branch_taken_0x1574f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1574f0) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1574F8u;
    // 0x1574f8: 0x860205ec  lh          $v0, 0x5EC($s0)
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x1574fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157500: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x157500u;
    SET_GPR_U32(ctx, 31, 0x157508u);
    ctx->pc = 0x157504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157500u;
            // 0x157504: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157508u; }
        if (ctx->pc != 0x157508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157508u; }
        if (ctx->pc != 0x157508u) { return; }
    }
    ctx->pc = 0x157508u;
label_157508:
    // 0x157508: 0x860305ec  lh          $v1, 0x5EC($s0)
    ctx->pc = 0x157508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x15750c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x157510: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x157514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15751c: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x15751cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x157520: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x157520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x157524: 0x0  nop
    ctx->pc = 0x157524u;
    // NOP
    // 0x157528: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x157528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15752c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x15752cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x157530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157534: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x157538: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x157538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15753c: 0x0  nop
    ctx->pc = 0x15753cu;
    // NOP
    // 0x157540: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x157540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x157544: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x157544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_157548:
    // 0x157548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15754c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x15754cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_157550:
    // 0x157550: 0x8ce20078  lw          $v0, 0x78($a3)
    ctx->pc = 0x157550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x157554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157554u;
    {
        const bool branch_taken_0x157554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157554) {
            ctx->pc = 0x157570u;
            goto label_157570;
        }
    }
    ctx->pc = 0x15755Cu;
    // 0x15755c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157560: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x157560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157564: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x157564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157568: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x157568u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15756c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x15756cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_157570:
    // 0x157570: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157574: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x157574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157578: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x157578u;
    {
        const bool branch_taken_0x157578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157578u;
            // 0x15757c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157578) {
            ctx->pc = 0x157550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157550;
        }
    }
    ctx->pc = 0x157580u;
    // 0x157580: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x157584: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x157584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x157588: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x157588u;
    {
        const bool branch_taken_0x157588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157588u;
            // 0x15758c: 0x25080248  addiu       $t0, $t0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157588) {
            ctx->pc = 0x157548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157548;
        }
    }
    ctx->pc = 0x157590u;
    // 0x157590: 0x2403fe70  addiu       $v1, $zero, -0x190
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966896));
    // 0x157594: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x157594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x157598: 0xa443db30  sh          $v1, -0x24D0($v0)
    ctx->pc = 0x157598u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957872), (uint16_t)GPR_U32(ctx, 3));
    // 0x15759c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x15759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1575a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1575a4: 0xa443db32  sh          $v1, -0x24CE($v0)
    ctx->pc = 0x1575a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957874), (uint16_t)GPR_U32(ctx, 3));
    // 0x1575a8: 0x860205ec  lh          $v0, 0x5EC($s0)
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x1575ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1575acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1575b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1575B0u;
    {
        const bool branch_taken_0x1575b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575B0u;
            // 0x1575b4: 0xa60205ec  sh          $v0, 0x5EC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575b0) {
            ctx->pc = 0x157644u;
            goto label_157644;
        }
    }
    ctx->pc = 0x1575B8u;
label_1575b8:
    // 0x1575b8: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x1575bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1575bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575c0: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x1575c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
label_1575c4:
    // 0x1575c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1575c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575c8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1575c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575cc: 0x0  nop
    ctx->pc = 0x1575ccu;
    // NOP
label_1575d0:
    // 0x1575d0: 0x8ce20078  lw          $v0, 0x78($a3)
    ctx->pc = 0x1575d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x1575d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1575D4u;
    {
        const bool branch_taken_0x1575d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575d4) {
            ctx->pc = 0x1575F8u;
            goto label_1575f8;
        }
    }
    ctx->pc = 0x1575DCu;
    // 0x1575dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1575dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1575e0: 0x860305ec  lh          $v1, 0x5EC($s0)
    ctx->pc = 0x1575e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x1575e4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1575e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1575e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1575ec: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1575ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1575f0: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x1575f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1575f4: 0x0  nop
    ctx->pc = 0x1575f4u;
    // NOP
label_1575f8:
    // 0x1575f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1575fc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1575fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157600: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x157600u;
    {
        const bool branch_taken_0x157600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157600u;
            // 0x157604: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157600) {
            ctx->pc = 0x1575D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1575d0;
        }
    }
    ctx->pc = 0x157608u;
    // 0x157608: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x157608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15760c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x15760cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x157610: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x157610u;
    {
        const bool branch_taken_0x157610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157610u;
            // 0x157614: 0x25080248  addiu       $t0, $t0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157610) {
            ctx->pc = 0x1575C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1575c4;
        }
    }
    ctx->pc = 0x157618u;
    // 0x157618: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x157618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15761c: 0x2403fe70  addiu       $v1, $zero, -0x190
    ctx->pc = 0x15761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966896));
    // 0x157620: 0xa440db40  sh          $zero, -0x24C0($v0)
    ctx->pc = 0x157620u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957888), (uint16_t)GPR_U32(ctx, 0));
    // 0x157624: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x157624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x157628: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15762c: 0xa443db30  sh          $v1, -0x24D0($v0)
    ctx->pc = 0x15762cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957872), (uint16_t)GPR_U32(ctx, 3));
    // 0x157630: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x157630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x157634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157638: 0xa464db32  sh          $a0, -0x24CE($v1)
    ctx->pc = 0x157638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957874), (uint16_t)GPR_U32(ctx, 4));
    // 0x15763c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15763Cu;
    {
        const bool branch_taken_0x15763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15763Cu;
            // 0x157640: 0xa60005ec  sh          $zero, 0x5EC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1516), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15763c) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x157644u;
label_157644:
    // 0x157644: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x157644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_157648:
    // 0x157648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15764c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15764cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157650: 0x3e00008  jr          $ra
    ctx->pc = 0x157650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157650u;
            // 0x157654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157658u;
    // 0x157658: 0x0  nop
    ctx->pc = 0x157658u;
    // NOP
    // 0x15765c: 0x0  nop
    ctx->pc = 0x15765cu;
    // NOP
label_157660:
    // 0x157660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x157660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x157664: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x157664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x157668: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x157668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15766c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157678: 0x8ca405dc  lw          $a0, 0x5DC($a1)
    ctx->pc = 0x157678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x15767c: 0x8ca30270  lw          $v1, 0x270($a1)
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x157680: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157684: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157688: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x157688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15768c: 0xaca20270  sw          $v0, 0x270($a1)
    ctx->pc = 0x15768cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 624), GPR_U32(ctx, 2));
    // 0x157690: 0x8e220498  lw          $v0, 0x498($s1)
    ctx->pc = 0x157690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x157694: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x157694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x157698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157698u;
    {
        const bool branch_taken_0x157698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157698u;
            // 0x15769c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157698) {
            ctx->pc = 0x1576B0u;
            goto label_1576b0;
        }
    }
    ctx->pc = 0x1576A0u;
    // 0x1576a0: 0x96430266  lhu         $v1, 0x266($s2)
    ctx->pc = 0x1576a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x1576a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1576a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1576a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1576A8u;
    {
        const bool branch_taken_0x1576a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576A8u;
            // 0x1576ac: 0xa6420266  sh          $v0, 0x266($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576a8) {
            ctx->pc = 0x1576B8u;
            goto label_1576b8;
        }
    }
    ctx->pc = 0x1576B0u;
label_1576b0:
    // 0x1576b0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1576B0u;
    {
        const bool branch_taken_0x1576b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576B0u;
            // 0x1576b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b0) {
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1576B8u;
label_1576b8:
    // 0x1576b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1576b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1576bc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1576bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1576c0: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x1576c4: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x1576c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1576c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1576cc: 0x50200042  beql        $at, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1576CCu;
    {
        const bool branch_taken_0x1576cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576cc) {
            ctx->pc = 0x1576D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1576CCu;
            // 0x1576d0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1576D4u;
    // 0x1576d4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1576d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1576d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1576d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576dc: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x1576dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x1576e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1576e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576e8: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1576E8u;
    SET_GPR_U32(ctx, 31, 0x1576F0u);
    ctx->pc = 0x1576ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576E8u;
            // 0x1576ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F0u; }
        if (ctx->pc != 0x1576F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576F0u; }
        if (ctx->pc != 0x1576F0u) { return; }
    }
    ctx->pc = 0x1576F0u;
label_1576f0:
    // 0x1576f0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1576F0u;
    {
        const bool branch_taken_0x1576f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576f0) {
            ctx->pc = 0x1576F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1576F0u;
            // 0x1576f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1576F8u;
    // 0x1576f8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1576f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1576fc: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x1576fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x157700: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x157700u;
    SET_GPR_U32(ctx, 31, 0x157708u);
    ctx->pc = 0x157704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157700u;
            // 0x157704: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157708u; }
        if (ctx->pc != 0x157708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157708u; }
        if (ctx->pc != 0x157708u) { return; }
    }
    ctx->pc = 0x157708u;
label_157708:
    // 0x157708: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15770c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15770cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157710: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x157714: 0xc0c1404  jal         func_305010
    ctx->pc = 0x157714u;
    SET_GPR_U32(ctx, 31, 0x15771Cu);
    ctx->pc = 0x157718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157714u;
            // 0x157718: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15771Cu; }
        if (ctx->pc != 0x15771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15771Cu; }
        if (ctx->pc != 0x15771Cu) { return; }
    }
    ctx->pc = 0x15771Cu;
label_15771c:
    // 0x15771c: 0x96440274  lhu         $a0, 0x274($s2)
    ctx->pc = 0x15771cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x157720: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157720u;
    SET_GPR_U32(ctx, 31, 0x157728u);
    ctx->pc = 0x157724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157720u;
            // 0x157724: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157728u; }
        if (ctx->pc != 0x157728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157728u; }
        if (ctx->pc != 0x157728u) { return; }
    }
    ctx->pc = 0x157728u;
label_157728:
    // 0x157728: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x157728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15772c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x157730: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x157730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x157734: 0x2442ebb8  addiu       $v0, $v0, -0x1448
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962104));
    // 0x157738: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x157738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x15773c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x157740: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x157740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x157744: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x157744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x157748: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x157748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15774c: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x15774cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x157750: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x157750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x157754: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x157754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x157758: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x157758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15775c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15775Cu;
    {
        const bool branch_taken_0x15775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15775c) {
            ctx->pc = 0x157760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15775Cu;
            // 0x157760: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157774u;
            goto label_157774;
        }
    }
    ctx->pc = 0x157764u;
    // 0x157764: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x157764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x157768: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x157768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x15776c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15776Cu;
    {
        const bool branch_taken_0x15776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15776Cu;
            // 0x157770: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15776c) {
            ctx->pc = 0x15777Cu;
            goto label_15777c;
        }
    }
    ctx->pc = 0x157774u;
label_157774:
    // 0x157774: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x157774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x157778: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x157778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_15777c:
    // 0x15777c: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x15777cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x157780: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x157780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x157784: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x157784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x157788: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x157788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x15778c: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x15778cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x157790: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x157790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x157794: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x157794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x157798: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x15779c: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x15779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x1577a0: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x1577a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1577a4: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x1577a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1577a8: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1577a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1577ac: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x1577acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1577b0: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x1577B0u;
    SET_GPR_U32(ctx, 31, 0x1577B8u);
    ctx->pc = 0x1577B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577B0u;
            // 0x1577b4: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577B8u; }
        if (ctx->pc != 0x1577B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577B8u; }
        if (ctx->pc != 0x1577B8u) { return; }
    }
    ctx->pc = 0x1577B8u;
label_1577b8:
    // 0x1577b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1577b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1577bc: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1577c0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1577c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1577c4: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1577c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1577c8: 0x96420266  lhu         $v0, 0x266($s2)
    ctx->pc = 0x1577c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x1577cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1577d0: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x1577d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x1577d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1577d8:
    // 0x1577d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1577d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1577dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1577dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1577e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1577e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1577e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1577e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1577e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1577E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1577ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577E8u;
            // 0x1577ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1577F0u;
label_1577f0:
    // 0x1577f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1577f4: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1577f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1577f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1577f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1577fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1577fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157808: 0x8ca405dc  lw          $a0, 0x5DC($a1)
    ctx->pc = 0x157808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x15780c: 0x8ca30270  lw          $v1, 0x270($a1)
    ctx->pc = 0x15780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x157810: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157818: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x157818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15781c: 0xaca20270  sw          $v0, 0x270($a1)
    ctx->pc = 0x15781cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 624), GPR_U32(ctx, 2));
    // 0x157820: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x157824: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x157824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x157828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157828u;
    {
        const bool branch_taken_0x157828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157828u;
            // 0x15782c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157828) {
            ctx->pc = 0x157840u;
            goto label_157840;
        }
    }
    ctx->pc = 0x157830u;
    // 0x157830: 0x96430266  lhu         $v1, 0x266($s2)
    ctx->pc = 0x157830u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x157834: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x157838: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157838u;
    {
        const bool branch_taken_0x157838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157838u;
            // 0x15783c: 0xa6420266  sh          $v0, 0x266($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157838) {
            ctx->pc = 0x157850u;
            goto label_157850;
        }
    }
    ctx->pc = 0x157840u;
label_157840:
    // 0x157840: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x157840u;
    SET_GPR_U32(ctx, 31, 0x157848u);
    ctx->pc = 0x157844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157840u;
            // 0x157844: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157848u; }
        if (ctx->pc != 0x157848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157848u; }
        if (ctx->pc != 0x157848u) { return; }
    }
    ctx->pc = 0x157848u;
label_157848:
    // 0x157848: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x157848u;
    {
        const bool branch_taken_0x157848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157848u;
            // 0x15784c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157848) {
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x157850u;
label_157850:
    // 0x157850: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x157854: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x157858: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x15785c: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x157860: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x157860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x157864: 0x5020003a  beql        $at, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x157864u;
    {
        const bool branch_taken_0x157864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157864) {
            ctx->pc = 0x157868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157864u;
            // 0x157868: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x15786Cu;
    // 0x15786c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x157870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157874: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x157874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x157878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15787c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15787cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157880: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x157880u;
    SET_GPR_U32(ctx, 31, 0x157888u);
    ctx->pc = 0x157884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157880u;
            // 0x157884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157888u; }
        if (ctx->pc != 0x157888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157888u; }
        if (ctx->pc != 0x157888u) { return; }
    }
    ctx->pc = 0x157888u;
label_157888:
    // 0x157888: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x157888u;
    {
        const bool branch_taken_0x157888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157888) {
            ctx->pc = 0x15788Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157888u;
            // 0x15788c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x157890u;
    // 0x157890: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x157890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157894: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x157898: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x157898u;
    SET_GPR_U32(ctx, 31, 0x1578A0u);
    ctx->pc = 0x15789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157898u;
            // 0x15789c: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578A0u; }
        if (ctx->pc != 0x1578A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578A0u; }
        if (ctx->pc != 0x1578A0u) { return; }
    }
    ctx->pc = 0x1578A0u;
label_1578a0:
    // 0x1578a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1578a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1578a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578a8: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1578ac: 0xc0c1404  jal         func_305010
    ctx->pc = 0x1578ACu;
    SET_GPR_U32(ctx, 31, 0x1578B4u);
    ctx->pc = 0x1578B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578ACu;
            // 0x1578b0: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B4u; }
        if (ctx->pc != 0x1578B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578B4u; }
        if (ctx->pc != 0x1578B4u) { return; }
    }
    ctx->pc = 0x1578B4u;
label_1578b4:
    // 0x1578b4: 0x96440274  lhu         $a0, 0x274($s2)
    ctx->pc = 0x1578b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x1578b8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x1578B8u;
    SET_GPR_U32(ctx, 31, 0x1578C0u);
    ctx->pc = 0x1578BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1578B8u;
            // 0x1578bc: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578C0u; }
        if (ctx->pc != 0x1578C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578C0u; }
        if (ctx->pc != 0x1578C0u) { return; }
    }
    ctx->pc = 0x1578C0u;
label_1578c0:
    // 0x1578c0: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x1578c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1578c4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1578c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1578c8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1578cc: 0x2484ebc0  addiu       $a0, $a0, -0x1440
    ctx->pc = 0x1578ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    // 0x1578d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1578d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1578d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1578d8: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x1578d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1578dc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1578dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1578e0: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1578e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1578e4: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1578e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1578e8: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x1578e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x1578ec: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x1578ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1578f0: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x1578f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x1578f4: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1578f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1578f8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1578f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1578fc: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1578fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x157900: 0x2484fc00  addiu       $a0, $a0, -0x400
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
    // 0x157904: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x157904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x157908: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x157908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x15790c: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x15790cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x157910: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x157910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x157914: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x157914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x157918: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x157918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15791c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15791cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x157920: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x157920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x157924: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x157924u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x157928: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x157928u;
    SET_GPR_U32(ctx, 31, 0x157930u);
    ctx->pc = 0x15792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157928u;
            // 0x15792c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157930u; }
        if (ctx->pc != 0x157930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157930u; }
        if (ctx->pc != 0x157930u) { return; }
    }
    ctx->pc = 0x157930u;
label_157930:
    // 0x157930: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x157930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x157934: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x157934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x157938: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x15793c: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x15793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x157940: 0x96420266  lhu         $v0, 0x266($s2)
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x157944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157948: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x157948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15794c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157950:
    // 0x157950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x157950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15795c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15795cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157960: 0x3e00008  jr          $ra
    ctx->pc = 0x157960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157960u;
            // 0x157964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157968u;
    // 0x157968: 0x0  nop
    ctx->pc = 0x157968u;
    // NOP
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
label_157970:
    // 0x157970: 0x3e00008  jr          $ra
    ctx->pc = 0x157970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157970u;
            // 0x157974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157978u;
    // 0x157978: 0x0  nop
    ctx->pc = 0x157978u;
    // NOP
    // 0x15797c: 0x0  nop
    ctx->pc = 0x15797cu;
    // NOP
label_157980:
    // 0x157980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x157980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x157984: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x157984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x157988: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x157988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15798c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x157990: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x157994: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15799c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1579a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1579a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1579a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1579a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1579a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1579a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1579ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1579acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1579b0: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1579B0u;
    {
        const bool branch_taken_0x1579b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579B0u;
            // 0x1579b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579b0) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x1579B8u;
    // 0x1579b8: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x1579b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1579bc: 0xc062804  jal         func_18A010
    ctx->pc = 0x1579BCu;
    SET_GPR_U32(ctx, 31, 0x1579C4u);
    ctx->pc = 0x1579C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579BCu;
            // 0x1579c0: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579C4u; }
        if (ctx->pc != 0x1579C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579C4u; }
        if (ctx->pc != 0x1579C4u) { return; }
    }
    ctx->pc = 0x1579C4u;
label_1579c4:
    // 0x1579c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1579c8: 0xae2205a0  sw          $v0, 0x5A0($s1)
    ctx->pc = 0x1579c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
    // 0x1579cc: 0x9222059c  lbu         $v0, 0x59C($s1)
    ctx->pc = 0x1579ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1436)));
    // 0x1579d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1579d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1579d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1579D4u;
    {
        const bool branch_taken_0x1579d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579d4) {
            ctx->pc = 0x157A18u;
            goto label_157a18;
        }
    }
    ctx->pc = 0x1579DCu;
    // 0x1579dc: 0x922205a8  lbu         $v0, 0x5A8($s1)
    ctx->pc = 0x1579dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
    // 0x1579e0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1579E0u;
    {
        const bool branch_taken_0x1579e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1579E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579E0u;
            // 0x1579e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579e0) {
            ctx->pc = 0x157A18u;
            goto label_157a18;
        }
    }
    ctx->pc = 0x1579E8u;
    // 0x1579e8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1579ec:
    // 0x1579ec: 0x868705b6  lh          $a3, 0x5B6($s4)
    ctx->pc = 0x1579ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1462)));
    // 0x1579f0: 0x968405ac  lhu         $a0, 0x5AC($s4)
    ctx->pc = 0x1579f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1452)));
    // 0x1579f4: 0x8e8505b0  lw          $a1, 0x5B0($s4)
    ctx->pc = 0x1579f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1456)));
    // 0x1579f8: 0xc05721c  jal         func_15C870
    ctx->pc = 0x1579F8u;
    SET_GPR_U32(ctx, 31, 0x157A00u);
    ctx->pc = 0x1579FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579F8u;
            // 0x1579fc: 0x868605b4  lh          $a2, 0x5B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A00u; }
        if (ctx->pc != 0x157A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A00u; }
        if (ctx->pc != 0x157A00u) { return; }
    }
    ctx->pc = 0x157A00u;
label_157a00:
    // 0x157a00: 0x922205a8  lbu         $v0, 0x5A8($s1)
    ctx->pc = 0x157a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
    // 0x157a04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x157a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x157a08: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x157a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157a0c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x157A0Cu;
    {
        const bool branch_taken_0x157a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A0Cu;
            // 0x157a10: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a0c) {
            ctx->pc = 0x1579ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1579ec;
        }
    }
    ctx->pc = 0x157A14u;
    // 0x157a14: 0x0  nop
    ctx->pc = 0x157a14u;
    // NOP
label_157a18:
    // 0x157a18: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x157A18u;
    SET_GPR_U32(ctx, 31, 0x157A20u);
    ctx->pc = 0x157A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A18u;
            // 0x157a1c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A20u; }
        if (ctx->pc != 0x157A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A20u; }
        if (ctx->pc != 0x157A20u) { return; }
    }
    ctx->pc = 0x157A20u;
label_157a20:
    // 0x157a20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a24: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x157a28: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157A28u;
    SET_GPR_U32(ctx, 31, 0x157A30u);
    ctx->pc = 0x157A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A28u;
            // 0x157a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A30u; }
        if (ctx->pc != 0x157A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A30u; }
        if (ctx->pc != 0x157A30u) { return; }
    }
    ctx->pc = 0x157A30u;
label_157a30:
    // 0x157a30: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x157a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x157a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a3c: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x157a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a48: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x157A48u;
    SET_GPR_U32(ctx, 31, 0x157A50u);
    ctx->pc = 0x157A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A48u;
            // 0x157a4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A50u; }
        if (ctx->pc != 0x157A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A50u; }
        if (ctx->pc != 0x157A50u) { return; }
    }
    ctx->pc = 0x157A50u;
label_157a50:
    // 0x157a50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x157a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a54: 0x5280012d  beql        $s4, $zero, . + 4 + (0x12D << 2)
    ctx->pc = 0x157A54u;
    {
        const bool branch_taken_0x157a54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a54) {
            ctx->pc = 0x157A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157A54u;
            // 0x157a58: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F0Cu;
            goto label_157f0c;
        }
    }
    ctx->pc = 0x157A5Cu;
    // 0x157a5c: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x157a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x157a60: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x157a64: 0x86560000  lh          $s6, 0x0($s2)
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x157a68: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x157a6c: 0x86570008  lh          $s7, 0x8($s2)
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x157a70: 0x9206008c  lbu         $a2, 0x8C($s0)
    ctx->pc = 0x157a70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x157a74: 0x92450010  lbu         $a1, 0x10($s2)
    ctx->pc = 0x157a74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x157a78: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x157a78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x157a7c: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x157a7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x157a80: 0x30c600fd  andi        $a2, $a2, 0xFD
    ctx->pc = 0x157a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)253);
    // 0x157a84: 0xa206008c  sb          $a2, 0x8C($s0)
    ctx->pc = 0x157a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 6));
    // 0x157a88: 0x9227008c  lbu         $a3, 0x8C($s1)
    ctx->pc = 0x157a88u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x157a8c: 0x9206008c  lbu         $a2, 0x8C($s0)
    ctx->pc = 0x157a8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x157a90: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x157a90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x157a94: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x157a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x157a98: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x157a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x157a9c: 0xa206008c  sb          $a2, 0x8C($s0)
    ctx->pc = 0x157a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 6));
    // 0x157aa0: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x157aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157aa4: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x157aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x157aa8: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x157aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x157aac: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x157ab0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x157ab4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x157ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x157ab8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x157ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x157abc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x157abcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x157ac0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x157ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x157ac4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x157ac4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157ac8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157AC8u;
    {
        const bool branch_taken_0x157ac8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x157ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AC8u;
            // 0x157acc: 0x30860003  andi        $a2, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ac8) {
            ctx->pc = 0x157ADCu;
            goto label_157adc;
        }
    }
    ctx->pc = 0x157AD0u;
    // 0x157ad0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x157AD0u;
    {
        const bool branch_taken_0x157ad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ad0) {
            ctx->pc = 0x157ADCu;
            goto label_157adc;
        }
    }
    ctx->pc = 0x157AD8u;
    // 0x157ad8: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x157ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_157adc:
    // 0x157adc: 0x50c00015  beql        $a2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x157ADCu;
    {
        const bool branch_taken_0x157adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x157adc) {
            ctx->pc = 0x157AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157ADCu;
            // 0x157ae0: 0x9204008c  lbu         $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157B34u;
            goto label_157b34;
        }
    }
    ctx->pc = 0x157AE4u;
    // 0x157ae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x157ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157ae8: 0x50c4000f  beql        $a2, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x157AE8u;
    {
        const bool branch_taken_0x157ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157ae8) {
            ctx->pc = 0x157AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157AE8u;
            // 0x157aec: 0x9204008c  lbu         $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157B28u;
            goto label_157b28;
        }
    }
    ctx->pc = 0x157AF0u;
    // 0x157af0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157af4: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157AF4u;
    {
        const bool branch_taken_0x157af4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157af4) {
            ctx->pc = 0x157AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157AF4u;
            // 0x157af8: 0x9204008c  lbu         $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157B10u;
            goto label_157b10;
        }
    }
    ctx->pc = 0x157AFCu;
    // 0x157afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b00: 0x50c4000f  beql        $a2, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x157B00u;
    {
        const bool branch_taken_0x157b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157b00) {
            ctx->pc = 0x157B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157B00u;
            // 0x157b04: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157B40u;
            goto label_157b40;
        }
    }
    ctx->pc = 0x157B08u;
    // 0x157b08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157B08u;
    {
        const bool branch_taken_0x157b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b08) {
            ctx->pc = 0x157B3Cu;
            goto label_157b3c;
        }
    }
    ctx->pc = 0x157B10u;
label_157b10:
    // 0x157b10: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x157b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x157b14: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x157b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x157b18: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x157b18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x157b1c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x157b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x157b20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157B20u;
    {
        const bool branch_taken_0x157b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B20u;
            // 0x157b24: 0xa204008c  sb          $a0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b20) {
            ctx->pc = 0x157B3Cu;
            goto label_157b3c;
        }
    }
    ctx->pc = 0x157B28u;
label_157b28:
    // 0x157b28: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x157b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x157b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157B2Cu;
    {
        const bool branch_taken_0x157b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B2Cu;
            // 0x157b30: 0xa204008c  sb          $a0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b2c) {
            ctx->pc = 0x157B3Cu;
            goto label_157b3c;
        }
    }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x157b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x157b38: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x157b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
label_157b3c:
    // 0x157b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x157b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_157b40:
    // 0x157b40: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x157b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157b44: 0x5048002a  beql        $v0, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x157B44u;
    {
        const bool branch_taken_0x157b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x157b44) {
            ctx->pc = 0x157B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157B44u;
            // 0x157b48: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157BF0u;
            goto label_157bf0;
        }
    }
    ctx->pc = 0x157B4Cu;
    // 0x157b4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157b50: 0x5047000a  beql        $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x157B50u;
    {
        const bool branch_taken_0x157b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x157b50) {
            ctx->pc = 0x157B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157B50u;
            // 0x157b54: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157B7Cu;
            goto label_157b7c;
        }
    }
    ctx->pc = 0x157B58u;
    // 0x157b58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157b5c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157B5Cu;
    {
        const bool branch_taken_0x157b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x157b5c) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157B64u;
    // 0x157b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b68: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x157B68u;
    {
        const bool branch_taken_0x157b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x157b68) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157B70u;
    // 0x157b70: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x157B70u;
    {
        const bool branch_taken_0x157b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B70u;
            // 0x157b74: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b70) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157B78u;
label_157b78:
    // 0x157b78: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x157b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_157b7c:
    // 0x157b7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157b80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x157b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x157b84: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157B84u;
    {
        const bool branch_taken_0x157b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157b84) {
            ctx->pc = 0x157B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157B84u;
            // 0x157b88: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157BA0u;
            goto label_157ba0;
        }
    }
    ctx->pc = 0x157B8Cu;
    // 0x157b8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157b90: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157B90u;
    SET_GPR_U32(ctx, 31, 0x157B98u);
    ctx->pc = 0x157B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B90u;
            // 0x157b94: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B98u; }
        if (ctx->pc != 0x157B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B98u; }
        if (ctx->pc != 0x157B98u) { return; }
    }
    ctx->pc = 0x157B98u;
label_157b98:
    // 0x157b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157B98u;
    {
        const bool branch_taken_0x157b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B98u;
            // 0x157b9c: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b98) {
            ctx->pc = 0x157BACu;
            goto label_157bac;
        }
    }
    ctx->pc = 0x157BA0u;
label_157ba0:
    // 0x157ba0: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157BA0u;
    SET_GPR_U32(ctx, 31, 0x157BA8u);
    ctx->pc = 0x157BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BA0u;
            // 0x157ba4: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BA8u; }
        if (ctx->pc != 0x157BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BA8u; }
        if (ctx->pc != 0x157BA8u) { return; }
    }
    ctx->pc = 0x157BA8u;
label_157ba8:
    // 0x157ba8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_157bac:
    // 0x157bac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157bb0: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x157bb4: 0x24090112  addiu       $t1, $zero, 0x112
    ctx->pc = 0x157bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x157bb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bbc: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x157bc0: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bc8: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x157bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157bcc: 0x2407010d  addiu       $a3, $zero, 0x10D
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    // 0x157bd0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x157bd4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x157bd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157bdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157be0: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157BE0u;
    SET_GPR_U32(ctx, 31, 0x157BE8u);
    ctx->pc = 0x157BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BE0u;
            // 0x157be4: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BE8u; }
        if (ctx->pc != 0x157BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BE8u; }
        if (ctx->pc != 0x157BE8u) { return; }
    }
    ctx->pc = 0x157BE8u;
label_157be8:
    // 0x157be8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x157BE8u;
    {
        const bool branch_taken_0x157be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BE8u;
            // 0x157bec: 0xa6160000  sh          $s6, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157be8) {
            ctx->pc = 0x157ED4u;
            goto label_157ed4;
        }
    }
    ctx->pc = 0x157BF0u;
label_157bf0:
    // 0x157bf0: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157BF0u;
    SET_GPR_U32(ctx, 31, 0x157BF8u);
    ctx->pc = 0x157BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BF0u;
            // 0x157bf4: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BF8u; }
        if (ctx->pc != 0x157BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BF8u; }
        if (ctx->pc != 0x157BF8u) { return; }
    }
    ctx->pc = 0x157BF8u;
label_157bf8:
    // 0x157bf8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x157bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157bfc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157c00: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x157c04: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x157c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x157c08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c0c: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x157c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x157c10: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c18: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x157c18u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157c1c: 0x2407010e  addiu       $a3, $zero, 0x10E
    ctx->pc = 0x157c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x157c20: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x157c24: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x157c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x157c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157c30: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157C30u;
    SET_GPR_U32(ctx, 31, 0x157C38u);
    ctx->pc = 0x157C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C30u;
            // 0x157c34: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C38u; }
        if (ctx->pc != 0x157C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C38u; }
        if (ctx->pc != 0x157C38u) { return; }
    }
    ctx->pc = 0x157C38u;
label_157c38:
    // 0x157c38: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x157C38u;
    {
        const bool branch_taken_0x157c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c38) {
            ctx->pc = 0x157ED0u;
            goto label_157ed0;
        }
    }
    ctx->pc = 0x157C40u;
label_157c40:
    // 0x157c40: 0x5048006d  beql        $v0, $t0, . + 4 + (0x6D << 2)
    ctx->pc = 0x157C40u;
    {
        const bool branch_taken_0x157c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x157c40) {
            ctx->pc = 0x157C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157C40u;
            // 0x157c44: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DF8u;
            goto label_157df8;
        }
    }
    ctx->pc = 0x157C48u;
    // 0x157c48: 0x1044006a  beq         $v0, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x157C48u;
    {
        const bool branch_taken_0x157c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x157c48) {
            ctx->pc = 0x157DF4u;
            goto label_157df4;
        }
    }
    ctx->pc = 0x157C50u;
    // 0x157c50: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x157C50u;
    {
        const bool branch_taken_0x157c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c50) {
            ctx->pc = 0x157DF4u;
            goto label_157df4;
        }
    }
    ctx->pc = 0x157C58u;
    // 0x157c58: 0x5047003a  beql        $v0, $a3, . + 4 + (0x3A << 2)
    ctx->pc = 0x157C58u;
    {
        const bool branch_taken_0x157c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x157c58) {
            ctx->pc = 0x157C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157C58u;
            // 0x157c5c: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D44u;
            goto label_157d44;
        }
    }
    ctx->pc = 0x157C60u;
    // 0x157c60: 0x50460003  beql        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C60u;
    {
        const bool branch_taken_0x157c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x157c60) {
            ctx->pc = 0x157C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157C60u;
            // 0x157c64: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157C70u;
            goto label_157c70;
        }
    }
    ctx->pc = 0x157C68u;
    // 0x157c68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x157C68u;
    {
        const bool branch_taken_0x157c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c68) {
            ctx->pc = 0x157ED0u;
            goto label_157ed0;
        }
    }
    ctx->pc = 0x157C70u;
label_157c70:
    // 0x157c70: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x157c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x157c74: 0x54470006  bnel        $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x157C74u;
    {
        const bool branch_taken_0x157c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x157c74) {
            ctx->pc = 0x157C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157C74u;
            // 0x157c78: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157C90u;
            goto label_157c90;
        }
    }
    ctx->pc = 0x157C7Cu;
    // 0x157c7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x157c80: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157C80u;
    SET_GPR_U32(ctx, 31, 0x157C88u);
    ctx->pc = 0x157C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C80u;
            // 0x157c84: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C88u; }
        if (ctx->pc != 0x157C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C88u; }
        if (ctx->pc != 0x157C88u) { return; }
    }
    ctx->pc = 0x157C88u;
label_157c88:
    // 0x157c88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157C88u;
    {
        const bool branch_taken_0x157c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C88u;
            // 0x157c8c: 0x16343c  dsll32      $a2, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c88) {
            ctx->pc = 0x157CA0u;
            goto label_157ca0;
        }
    }
    ctx->pc = 0x157C90u;
label_157c90:
    // 0x157c90: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x157c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x157c94: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157C94u;
    SET_GPR_U32(ctx, 31, 0x157C9Cu);
    ctx->pc = 0x157C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C94u;
            // 0x157c98: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C9Cu; }
        if (ctx->pc != 0x157C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C9Cu; }
        if (ctx->pc != 0x157C9Cu) { return; }
    }
    ctx->pc = 0x157C9Cu;
label_157c9c:
    // 0x157c9c: 0x16343c  dsll32      $a2, $s6, 16
    ctx->pc = 0x157c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 16));
label_157ca0:
    // 0x157ca0: 0x173c3c  dsll32      $a3, $s7, 16
    ctx->pc = 0x157ca0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << (32 + 16));
    // 0x157ca4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x157ca4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x157ca8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x157ca8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x157cac: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x157cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x157cb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cb4: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157CB4u;
    SET_GPR_U32(ctx, 31, 0x157CBCu);
    ctx->pc = 0x157CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157CB4u;
            // 0x157cb8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CBCu; }
        if (ctx->pc != 0x157CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CBCu; }
        if (ctx->pc != 0x157CBCu) { return; }
    }
    ctx->pc = 0x157CBCu;
label_157cbc:
    // 0x157cbc: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x157CBCu;
    {
        const bool branch_taken_0x157cbc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x157CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CBCu;
            // 0x157cc0: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cbc) {
            ctx->pc = 0x157CD0u;
            goto label_157cd0;
        }
    }
    ctx->pc = 0x157CC4u;
    // 0x157cc4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157CC4u;
    {
        const bool branch_taken_0x157cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cc4) {
            ctx->pc = 0x157CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CC4u;
            // 0x157cc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157CD4u;
            goto label_157cd4;
        }
    }
    ctx->pc = 0x157CCCu;
    // 0x157ccc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_157cd0:
    // 0x157cd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157cd4:
    // 0x157cd4: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157CD4u;
    {
        const bool branch_taken_0x157cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157cd4) {
            ctx->pc = 0x157CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CD4u;
            // 0x157cd8: 0x2415010b  addiu       $s5, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157CFCu;
            goto label_157cfc;
        }
    }
    ctx->pc = 0x157CDCu;
    // 0x157cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157ce0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157CE0u;
    {
        const bool branch_taken_0x157ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157ce0) {
            ctx->pc = 0x157CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CE0u;
            // 0x157ce4: 0x2415010b  addiu       $s5, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157CFCu;
            goto label_157cfc;
        }
    }
    ctx->pc = 0x157CE8u;
    // 0x157ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157cec: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157CECu;
    {
        const bool branch_taken_0x157cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157cec) {
            ctx->pc = 0x157CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CECu;
            // 0x157cf0: 0x2415010b  addiu       $s5, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157CFCu;
            goto label_157cfc;
        }
    }
    ctx->pc = 0x157CF4u;
    // 0x157cf4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x157CF4u;
    {
        const bool branch_taken_0x157cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cf4) {
            ctx->pc = 0x157CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CF4u;
            // 0x157cf8: 0x2415010a  addiu       $s5, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157CFCu;
            goto label_157cfc;
        }
    }
    ctx->pc = 0x157CFCu;
label_157cfc:
    // 0x157cfc: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157d00: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157d04: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x157d08: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x157d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x157d0c: 0x32a7ffff  andi        $a3, $s5, 0xFFFF
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x157d10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d14: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157d18: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x157d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x157d1c: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d24: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x157d28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x157d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157d34: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157D34u;
    SET_GPR_U32(ctx, 31, 0x157D3Cu);
    ctx->pc = 0x157D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D34u;
            // 0x157d38: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D3Cu; }
        if (ctx->pc != 0x157D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D3Cu; }
        if (ctx->pc != 0x157D3Cu) { return; }
    }
    ctx->pc = 0x157D3Cu;
label_157d3c:
    // 0x157d3c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x157D3Cu;
    {
        const bool branch_taken_0x157d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d3c) {
            ctx->pc = 0x157ED0u;
            goto label_157ed0;
        }
    }
    ctx->pc = 0x157D44u;
label_157d44:
    // 0x157d44: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x157d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x157d48: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x157D48u;
    {
        const bool branch_taken_0x157d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x157d48) {
            ctx->pc = 0x157D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D48u;
            // 0x157d4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D60u;
            goto label_157d60;
        }
    }
    ctx->pc = 0x157D50u;
    // 0x157d50: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157D50u;
    SET_GPR_U32(ctx, 31, 0x157D58u);
    ctx->pc = 0x157D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D50u;
            // 0x157d54: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D58u; }
        if (ctx->pc != 0x157D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D58u; }
        if (ctx->pc != 0x157D58u) { return; }
    }
    ctx->pc = 0x157D58u;
label_157d58:
    // 0x157d58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157D58u;
    {
        const bool branch_taken_0x157d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D58u;
            // 0x157d5c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d58) {
            ctx->pc = 0x157D6Cu;
            goto label_157d6c;
        }
    }
    ctx->pc = 0x157D60u;
label_157d60:
    // 0x157d60: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157D60u;
    SET_GPR_U32(ctx, 31, 0x157D68u);
    ctx->pc = 0x157D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D60u;
            // 0x157d64: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D68u; }
        if (ctx->pc != 0x157D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D68u; }
        if (ctx->pc != 0x157D68u) { return; }
    }
    ctx->pc = 0x157D68u;
label_157d68:
    // 0x157d68: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x157d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_157d6c:
    // 0x157d6c: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x157D6Cu;
    {
        const bool branch_taken_0x157d6c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x157d6c) {
            ctx->pc = 0x157D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D6Cu;
            // 0x157d70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D84u;
            goto label_157d84;
        }
    }
    ctx->pc = 0x157D74u;
    // 0x157d74: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157D74u;
    {
        const bool branch_taken_0x157d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d74) {
            ctx->pc = 0x157D80u;
            goto label_157d80;
        }
    }
    ctx->pc = 0x157D7Cu;
    // 0x157d7c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_157d80:
    // 0x157d80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157d84:
    // 0x157d84: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157D84u;
    {
        const bool branch_taken_0x157d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157d84) {
            ctx->pc = 0x157D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D84u;
            // 0x157d88: 0x2415012d  addiu       $s5, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DACu;
            goto label_157dac;
        }
    }
    ctx->pc = 0x157D8Cu;
    // 0x157d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157d90: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D90u;
    {
        const bool branch_taken_0x157d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157d90) {
            ctx->pc = 0x157D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D90u;
            // 0x157d94: 0x2415012d  addiu       $s5, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DACu;
            goto label_157dac;
        }
    }
    ctx->pc = 0x157D98u;
    // 0x157d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157d9c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D9Cu;
    {
        const bool branch_taken_0x157d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157d9c) {
            ctx->pc = 0x157DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D9Cu;
            // 0x157da0: 0x2415012d  addiu       $s5, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DACu;
            goto label_157dac;
        }
    }
    ctx->pc = 0x157DA4u;
    // 0x157da4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x157DA4u;
    {
        const bool branch_taken_0x157da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157da4) {
            ctx->pc = 0x157DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157DA4u;
            // 0x157da8: 0x2415012c  addiu       $s5, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DACu;
            goto label_157dac;
        }
    }
    ctx->pc = 0x157DACu;
label_157dac:
    // 0x157dac: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x157dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157db0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157db4: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x157db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x157db8: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x157db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x157dbc: 0x32a7ffff  andi        $a3, $s5, 0xFFFF
    ctx->pc = 0x157dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x157dc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157dc4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157dc8: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x157dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x157dcc: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x157dccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157dd4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x157dd8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x157ddc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157de4: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157DE4u;
    SET_GPR_U32(ctx, 31, 0x157DECu);
    ctx->pc = 0x157DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157DE4u;
            // 0x157de8: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DECu; }
        if (ctx->pc != 0x157DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DECu; }
        if (ctx->pc != 0x157DECu) { return; }
    }
    ctx->pc = 0x157DECu;
label_157dec:
    // 0x157dec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x157DECu;
    {
        const bool branch_taken_0x157dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dec) {
            ctx->pc = 0x157ED0u;
            goto label_157ed0;
        }
    }
    ctx->pc = 0x157DF4u;
label_157df4:
    // 0x157df4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x157df4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_157df8:
    // 0x157df8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157dfc: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x157dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x157e00: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E00u;
    {
        const bool branch_taken_0x157e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157e00) {
            ctx->pc = 0x157E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157E00u;
            // 0x157e04: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E1Cu;
            goto label_157e1c;
        }
    }
    ctx->pc = 0x157E08u;
    // 0x157e08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157e0c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157E0Cu;
    SET_GPR_U32(ctx, 31, 0x157E14u);
    ctx->pc = 0x157E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E0Cu;
            // 0x157e10: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E14u; }
        if (ctx->pc != 0x157E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E14u; }
        if (ctx->pc != 0x157E14u) { return; }
    }
    ctx->pc = 0x157E14u;
label_157e14:
    // 0x157e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157E14u;
    {
        const bool branch_taken_0x157e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E14u;
            // 0x157e18: 0x2e410008  sltiu       $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e14) {
            ctx->pc = 0x157E28u;
            goto label_157e28;
        }
    }
    ctx->pc = 0x157E1Cu;
label_157e1c:
    // 0x157e1c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157E1Cu;
    SET_GPR_U32(ctx, 31, 0x157E24u);
    ctx->pc = 0x157E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E1Cu;
            // 0x157e20: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E24u; }
        if (ctx->pc != 0x157E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E24u; }
        if (ctx->pc != 0x157E24u) { return; }
    }
    ctx->pc = 0x157E24u;
label_157e24:
    // 0x157e24: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x157e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_157e28:
    // 0x157e28: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x157E28u;
    {
        const bool branch_taken_0x157e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e28) {
            ctx->pc = 0x157E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157E28u;
            // 0x157e2c: 0x24150101  addiu       $s5, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E30u;
    // 0x157e30: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x157e34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x157e38: 0x2463d290  addiu       $v1, $v1, -0x2D70
    ctx->pc = 0x157e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955664));
    // 0x157e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157e40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x157e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157e44: 0x400008  jr          $v0
    ctx->pc = 0x157E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157E4Cu: goto label_157e4c;
            case 0x157E54u: goto label_157e54;
            case 0x157E5Cu: goto label_157e5c;
            case 0x157E64u: goto label_157e64;
            case 0x157E6Cu: goto label_157e6c;
            case 0x157E74u: goto label_157e74;
            case 0x157E7Cu: goto label_157e7c;
            case 0x157E84u: goto label_157e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157E4Cu;
label_157e4c:
    // 0x157e4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x157E4Cu;
    {
        const bool branch_taken_0x157e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E4Cu;
            // 0x157e50: 0x24150101  addiu       $s5, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e4c) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E54u;
label_157e54:
    // 0x157e54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x157E54u;
    {
        const bool branch_taken_0x157e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E54u;
            // 0x157e58: 0x24150103  addiu       $s5, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e54) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E5Cu;
label_157e5c:
    // 0x157e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E5Cu;
            // 0x157e60: 0x24150103  addiu       $s5, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E64u;
label_157e64:
    // 0x157e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157E64u;
    {
        const bool branch_taken_0x157e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E64u;
            // 0x157e68: 0x24150109  addiu       $s5, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e64) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E6Cu;
label_157e6c:
    // 0x157e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157E6Cu;
    {
        const bool branch_taken_0x157e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E6Cu;
            // 0x157e70: 0x24150105  addiu       $s5, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e6c) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E74u;
label_157e74:
    // 0x157e74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157E74u;
    {
        const bool branch_taken_0x157e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E74u;
            // 0x157e78: 0x24150107  addiu       $s5, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e74) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E7Cu;
label_157e7c:
    // 0x157e7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157E7Cu;
    {
        const bool branch_taken_0x157e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E7Cu;
            // 0x157e80: 0x24150107  addiu       $s5, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e7c) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E84u;
label_157e84:
    // 0x157e84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157E84u;
    {
        const bool branch_taken_0x157e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E84u;
            // 0x157e88: 0x24150109  addiu       $s5, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e84) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E8Cu;
    // 0x157e8c: 0x24150101  addiu       $s5, $zero, 0x101
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_157e90:
    // 0x157e90: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157e94: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157e98: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x157e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x157e9c: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x157e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x157ea0: 0x32a7ffff  andi        $a3, $s5, 0xFFFF
    ctx->pc = 0x157ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x157ea4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ea8: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157eac: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x157eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x157eb0: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157eb8: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x157eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x157ebc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x157ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157ec8: 0xc05721c  jal         func_15C870
    ctx->pc = 0x157EC8u;
    SET_GPR_U32(ctx, 31, 0x157ED0u);
    ctx->pc = 0x157ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157EC8u;
            // 0x157ecc: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157ED0u; }
        if (ctx->pc != 0x157ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157ED0u; }
        if (ctx->pc != 0x157ED0u) { return; }
    }
    ctx->pc = 0x157ED0u;
label_157ed0:
    // 0x157ed0: 0xa6160000  sh          $s6, 0x0($s0)
    ctx->pc = 0x157ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 22));
label_157ed4:
    // 0x157ed4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x157ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x157ed8: 0xa6170002  sh          $s7, 0x2($s0)
    ctx->pc = 0x157ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 23));
    // 0x157edc: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x157edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x157ee0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x157ee4: 0x2463e918  addiu       $v1, $v1, -0x16E8
    ctx->pc = 0x157ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961432));
    // 0x157ee8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x157ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x157eec: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x157eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x157ef0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x157ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x157ef4: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x157ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x157ef8: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x157ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x157efc: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x157efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x157f00: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x157f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x157f04: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x157f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x157f08: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_157f0c:
    // 0x157f0c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x157f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157f10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x157f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157f14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x157f14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157f18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157f1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157f24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157f30: 0x3e00008  jr          $ra
    ctx->pc = 0x157F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F30u;
            // 0x157f34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157F38u;
    // 0x157f38: 0x0  nop
    ctx->pc = 0x157f38u;
    // NOP
    // 0x157f3c: 0x0  nop
    ctx->pc = 0x157f3cu;
    // NOP
label_157f40:
    // 0x157f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x157f44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x157f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x157f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x157f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x157f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157f5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x157f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157f70: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x157f70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x157f74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x157f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f78: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x157f7c: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x157f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x157f80: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x157F80u;
    SET_GPR_U32(ctx, 31, 0x157F88u);
    ctx->pc = 0x157F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F80u;
            // 0x157f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F88u; }
        if (ctx->pc != 0x157F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F88u; }
        if (ctx->pc != 0x157F88u) { return; }
    }
    ctx->pc = 0x157F88u;
label_157f88:
    // 0x157f88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x157f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f8c: 0x5280008f  beql        $s4, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x157F8Cu;
    {
        const bool branch_taken_0x157f8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f8c) {
            ctx->pc = 0x157F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157F8Cu;
            // 0x157f90: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581CCu;
            goto label_1581cc;
        }
    }
    ctx->pc = 0x157F94u;
    // 0x157f94: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x157f94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x157f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157f9c: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x157f9cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157fa0: 0x86150008  lh          $s5, 0x8($s0)
    ctx->pc = 0x157fa0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x157fa4: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x157fa4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x157fa8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157FA8u;
    {
        const bool branch_taken_0x157fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x157FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157FA8u;
            // 0x157fac: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa8) {
            ctx->pc = 0x157FB8u;
            goto label_157fb8;
        }
    }
    ctx->pc = 0x157FB0u;
    // 0x157fb0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x157FB0u;
    {
        const bool branch_taken_0x157fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157FB0u;
            // 0x157fb4: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fb0) {
            ctx->pc = 0x15805Cu;
            goto label_15805c;
        }
    }
    ctx->pc = 0x157FB8u;
label_157fb8:
    // 0x157fb8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x157fbc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x157FBCu;
    SET_GPR_U32(ctx, 31, 0x157FC4u);
    ctx->pc = 0x157FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FBCu;
            // 0x157fc0: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FC4u; }
        if (ctx->pc != 0x157FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FC4u; }
        if (ctx->pc != 0x157FC4u) { return; }
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x24040135  addiu       $a0, $zero, 0x135
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x157fc8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FC8u;
            // 0x157fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FD0u; }
        if (ctx->pc != 0x157FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FD0u; }
        if (ctx->pc != 0x157FD0u) { return; }
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x157fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x157fd4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x157fd8: 0x2442408c  addiu       $v0, $v0, 0x408C
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16524));
    // 0x157fdc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x157fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x157fe0: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x157fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x157fe4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x157fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x157fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157fec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x157fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x157ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ff8: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x157FF8u;
    {
        const bool branch_taken_0x157ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ff8) {
            ctx->pc = 0x157FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157FF8u;
            // 0x157ffc: 0xa6510000  sh          $s1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158170u;
            goto label_158170;
        }
    }
    ctx->pc = 0x158000u;
    // 0x158000: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x158000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x158004: 0x9483060a  lhu         $v1, 0x60A($a0)
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1546)));
    // 0x158008: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x158008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x15800c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15800Cu;
    {
        const bool branch_taken_0x15800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15800c) {
            ctx->pc = 0x158010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15800Cu;
            // 0x158010: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158034u;
            goto label_158034;
        }
    }
    ctx->pc = 0x158014u;
    // 0x158014: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x158014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x158018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15801c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15801Cu;
    {
        const bool branch_taken_0x15801c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15801c) {
            ctx->pc = 0x158030u;
            goto label_158030;
        }
    }
    ctx->pc = 0x158024u;
    // 0x158024: 0x948205e0  lhu         $v0, 0x5E0($a0)
    ctx->pc = 0x158024u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1504)));
    // 0x158028: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x158028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15802c: 0xa48205e0  sh          $v0, 0x5E0($a0)
    ctx->pc = 0x15802cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1504), (uint16_t)GPR_U32(ctx, 2));
label_158030:
    // 0x158030: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_158034:
    // 0x158034: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158038: 0x2442408c  addiu       $v0, $v0, 0x408C
    ctx->pc = 0x158038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16524));
    // 0x15803c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158040: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x158040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158044: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x158044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x158048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15804c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158054: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x158054u;
    {
        const bool branch_taken_0x158054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158054u;
            // 0x158058: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158054) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x15805Cu;
label_15805c:
    // 0x15805c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158060: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x158060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x158064: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158064u;
    {
        const bool branch_taken_0x158064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x158064) {
            ctx->pc = 0x158068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158064u;
            // 0x158068: 0x2462000f  addiu       $v0, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158080u;
            goto label_158080;
        }
    }
    ctx->pc = 0x15806Cu;
    // 0x15806c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158070: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158070u;
    SET_GPR_U32(ctx, 31, 0x158078u);
    ctx->pc = 0x158074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158070u;
            // 0x158074: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158078u; }
        if (ctx->pc != 0x158078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158078u; }
        if (ctx->pc != 0x158078u) { return; }
    }
    ctx->pc = 0x158078u;
label_158078:
    // 0x158078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158078u;
    {
        const bool branch_taken_0x158078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158078u;
            // 0x15807c: 0x966300ea  lhu         $v1, 0xEA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158078) {
            ctx->pc = 0x158090u;
            goto label_158090;
        }
    }
    ctx->pc = 0x158080u;
label_158080:
    // 0x158080: 0x26450268  addiu       $a1, $s2, 0x268
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
    // 0x158084: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158084u;
    SET_GPR_U32(ctx, 31, 0x15808Cu);
    ctx->pc = 0x158088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158084u;
            // 0x158088: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15808Cu; }
        if (ctx->pc != 0x15808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15808Cu; }
        if (ctx->pc != 0x15808Cu) { return; }
    }
    ctx->pc = 0x15808Cu;
label_15808c:
    // 0x15808c: 0x966300ea  lhu         $v1, 0xEA($s3)
    ctx->pc = 0x15808cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
label_158090:
    // 0x158090: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x158090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x158094: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158094u;
    {
        const bool branch_taken_0x158094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x158094) {
            ctx->pc = 0x158098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158094u;
            // 0x158098: 0x2e010008  sltiu       $at, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1580B0u;
            goto label_1580b0;
        }
    }
    ctx->pc = 0x15809Cu;
    // 0x15809c: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x15809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x1580a0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1580A0u;
    SET_GPR_U32(ctx, 31, 0x1580A8u);
    ctx->pc = 0x1580A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580A0u;
            // 0x1580a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A8u; }
        if (ctx->pc != 0x1580A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A8u; }
        if (ctx->pc != 0x1580A8u) { return; }
    }
    ctx->pc = 0x1580A8u;
label_1580a8:
    // 0x1580a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1580A8u;
    {
        const bool branch_taken_0x1580a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580a8) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1580B0u;
    {
        const bool branch_taken_0x1580b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580b0) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x1580B8u;
    // 0x1580b8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1580bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1580c0: 0x2463d2b0  addiu       $v1, $v1, -0x2D50
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955696));
    // 0x1580c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1580c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1580c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1580cc: 0x400008  jr          $v0
    ctx->pc = 0x1580CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1580D4u: goto label_1580d4;
            case 0x1580E8u: goto label_1580e8;
            case 0x1580FCu: goto label_1580fc;
            case 0x158110u: goto label_158110;
            case 0x158124u: goto label_158124;
            case 0x158138u: goto label_158138;
            case 0x15814Cu: goto label_15814c;
            case 0x158160u: goto label_158160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1580D4u;
label_1580d4:
    // 0x1580d4: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x1580d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x1580d8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1580D8u;
    SET_GPR_U32(ctx, 31, 0x1580E0u);
    ctx->pc = 0x1580DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580D8u;
            // 0x1580dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580E0u; }
        if (ctx->pc != 0x1580E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580E0u; }
        if (ctx->pc != 0x1580E0u) { return; }
    }
    ctx->pc = 0x1580E0u;
label_1580e0:
    // 0x1580e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1580E0u;
    {
        const bool branch_taken_0x1580e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580e0) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x1580E8u;
label_1580e8:
    // 0x1580e8: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x1580e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x1580ec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1580ECu;
    SET_GPR_U32(ctx, 31, 0x1580F4u);
    ctx->pc = 0x1580F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580ECu;
            // 0x1580f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580F4u; }
        if (ctx->pc != 0x1580F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580F4u; }
        if (ctx->pc != 0x1580F4u) { return; }
    }
    ctx->pc = 0x1580F4u;
label_1580f4:
    // 0x1580f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1580F4u;
    {
        const bool branch_taken_0x1580f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580f4) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x1580FCu;
label_1580fc:
    // 0x1580fc: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x158100: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158100u;
    SET_GPR_U32(ctx, 31, 0x158108u);
    ctx->pc = 0x158104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158100u;
            // 0x158104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158108u; }
        if (ctx->pc != 0x158108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158108u; }
        if (ctx->pc != 0x158108u) { return; }
    }
    ctx->pc = 0x158108u;
label_158108:
    // 0x158108: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x158108u;
    {
        const bool branch_taken_0x158108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158108) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x158110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x158114: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158114u;
    SET_GPR_U32(ctx, 31, 0x15811Cu);
    ctx->pc = 0x158118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158114u;
            // 0x158118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15811Cu; }
        if (ctx->pc != 0x15811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15811Cu; }
        if (ctx->pc != 0x15811Cu) { return; }
    }
    ctx->pc = 0x15811Cu;
label_15811c:
    // 0x15811c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15811Cu;
    {
        const bool branch_taken_0x15811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15811c) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x158124u;
label_158124:
    // 0x158124: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x158124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x158128: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158128u;
    SET_GPR_U32(ctx, 31, 0x158130u);
    ctx->pc = 0x15812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158128u;
            // 0x15812c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158130u; }
        if (ctx->pc != 0x158130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158130u; }
        if (ctx->pc != 0x158130u) { return; }
    }
    ctx->pc = 0x158130u;
label_158130:
    // 0x158130: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x158130u;
    {
        const bool branch_taken_0x158130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158130) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x158138u;
label_158138:
    // 0x158138: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x158138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x15813c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x15813Cu;
    SET_GPR_U32(ctx, 31, 0x158144u);
    ctx->pc = 0x158140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15813Cu;
            // 0x158140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158144u; }
        if (ctx->pc != 0x158144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158144u; }
        if (ctx->pc != 0x158144u) { return; }
    }
    ctx->pc = 0x158144u;
label_158144:
    // 0x158144: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x158144u;
    {
        const bool branch_taken_0x158144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158144) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x15814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x158150: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158150u;
    SET_GPR_U32(ctx, 31, 0x158158u);
    ctx->pc = 0x158154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158150u;
            // 0x158154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158158u; }
        if (ctx->pc != 0x158158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158158u; }
        if (ctx->pc != 0x158158u) { return; }
    }
    ctx->pc = 0x158158u;
label_158158:
    // 0x158158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158158u;
    {
        const bool branch_taken_0x158158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158158) {
            ctx->pc = 0x15816Cu;
            goto label_15816c;
        }
    }
    ctx->pc = 0x158160u;
label_158160:
    // 0x158160: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x158164: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158164u;
    SET_GPR_U32(ctx, 31, 0x15816Cu);
    ctx->pc = 0x158168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158164u;
            // 0x158168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15816Cu; }
        if (ctx->pc != 0x15816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15816Cu; }
        if (ctx->pc != 0x15816Cu) { return; }
    }
    ctx->pc = 0x15816Cu;
label_15816c:
    // 0x15816c: 0xa6510000  sh          $s1, 0x0($s2)
    ctx->pc = 0x15816cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 17));
label_158170:
    // 0x158170: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x158170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x158174: 0xa6550002  sh          $s5, 0x2($s2)
    ctx->pc = 0x158174u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x158178: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x158178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x15817c: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x158180: 0x2463e920  addiu       $v1, $v1, -0x16E0
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
    // 0x158184: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x158184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158188: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x158188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15818c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15818cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x158190: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x158190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
    // 0x158194: 0xae4400dc  sw          $a0, 0xDC($s2)
    ctx->pc = 0x158194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
    // 0x158198: 0xae4305e8  sw          $v1, 0x5E8($s2)
    ctx->pc = 0x158198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 3));
    // 0x15819c: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x15819cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1581a0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1581a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1581a4: 0xa243008c  sb          $v1, 0x8C($s2)
    ctx->pc = 0x1581a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1581a8: 0x9264008c  lbu         $a0, 0x8C($s3)
    ctx->pc = 0x1581a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1581ac: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x1581acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1581b0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1581b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1581b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1581b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1581b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1581b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1581bc: 0xa243008c  sb          $v1, 0x8C($s2)
    ctx->pc = 0x1581bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1581c0: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x1581c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x1581c4: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x1581c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1581c8: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x1581c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_1581cc:
    // 0x1581cc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1581d0: 0x2463408c  addiu       $v1, $v1, 0x408C
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16524));
    // 0x1581d4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1581d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581d8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x1581d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1581dc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1581dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1581e0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1581e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1581e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1581ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1581f0: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1581f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1581f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1581f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1581f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1581f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1581fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1581fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15820c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15820cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158210: 0x3e00008  jr          $ra
    ctx->pc = 0x158210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158210u;
            // 0x158214: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158218u;
    // 0x158218: 0x0  nop
    ctx->pc = 0x158218u;
    // NOP
    // 0x15821c: 0x0  nop
    ctx->pc = 0x15821cu;
    // NOP
label_158220:
    // 0x158220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x158224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x158228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15822c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158238: 0x90d10000  lbu         $s1, 0x0($a2)
    ctx->pc = 0x158238u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15823c: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x15823cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x158240: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x158240u;
    {
        const bool branch_taken_0x158240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158240u;
            // 0x158244: 0x8cb20010  lw          $s2, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158240) {
            ctx->pc = 0x158250u;
            goto label_158250;
        }
    }
    ctx->pc = 0x158248u;
    // 0x158248: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x158248u;
    {
        const bool branch_taken_0x158248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158248u;
            // 0x15824c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158248) {
            ctx->pc = 0x158458u;
            goto label_158458;
        }
    }
    ctx->pc = 0x158250u;
label_158250:
    // 0x158250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158254: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158254u;
    {
        const bool branch_taken_0x158254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x158254) {
            ctx->pc = 0x158258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158254u;
            // 0x158258: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158264u;
            goto label_158264;
        }
    }
    ctx->pc = 0x15825Cu;
    // 0x15825c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x15825Cu;
    {
        const bool branch_taken_0x15825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15825Cu;
            // 0x158260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15825c) {
            ctx->pc = 0x158458u;
            goto label_158458;
        }
    }
    ctx->pc = 0x158264u;
label_158264:
    // 0x158264: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x158264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x158268: 0x24c6c6f0  addiu       $a2, $a2, -0x3910
    ctx->pc = 0x158268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
    // 0x15826c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158278: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x158278u;
    SET_GPR_U32(ctx, 31, 0x158280u);
    ctx->pc = 0x15827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158278u;
            // 0x15827c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158280u; }
        if (ctx->pc != 0x158280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158280u; }
        if (ctx->pc != 0x158280u) { return; }
    }
    ctx->pc = 0x158280u;
label_158280:
    // 0x158280: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x158280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158284: 0x5260006a  beql        $s3, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x158284u;
    {
        const bool branch_taken_0x158284 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x158284) {
            ctx->pc = 0x158288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158284u;
            // 0x158288: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158430u;
            goto label_158430;
        }
    }
    ctx->pc = 0x15828Cu;
    // 0x15828c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x158290: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158294: 0x24424098  addiu       $v0, $v0, 0x4098
    ctx->pc = 0x158294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16536));
    // 0x158298: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15829c: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1582a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1582a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1582a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1582a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1582ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1582acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1582b4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1582B4u;
    {
        const bool branch_taken_0x1582b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582b4) {
            ctx->pc = 0x1582B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1582B4u;
            // 0x1582b8: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158318u;
            goto label_158318;
        }
    }
    ctx->pc = 0x1582BCu;
    // 0x1582bc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1582bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1582c0: 0x9483060a  lhu         $v1, 0x60A($a0)
    ctx->pc = 0x1582c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1546)));
    // 0x1582c4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1582c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1582c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x1582CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1582C8u;
            // 0x1582cc: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1582F0u;
            goto label_1582f0;
        }
    }
    ctx->pc = 0x1582D0u;
    // 0x1582d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1582d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1582d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1582d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1582d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1582D8u;
    {
        const bool branch_taken_0x1582d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1582d8) {
            ctx->pc = 0x1582ECu;
            goto label_1582ec;
        }
    }
    ctx->pc = 0x1582E0u;
    // 0x1582e0: 0x948205e0  lhu         $v0, 0x5E0($a0)
    ctx->pc = 0x1582e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1504)));
    // 0x1582e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1582e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1582e8: 0xa48205e0  sh          $v0, 0x5E0($a0)
    ctx->pc = 0x1582e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1504), (uint16_t)GPR_U32(ctx, 2));
label_1582ec:
    // 0x1582ec: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_1582f0:
    // 0x1582f0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1582f4: 0x24424098  addiu       $v0, $v0, 0x4098
    ctx->pc = 0x1582f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16536));
    // 0x1582f8: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1582f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1582fc: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158300: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x158304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15830c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158310: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x158310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x158314: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_158318:
    // 0x158318: 0xc067c48  jal         func_19F120
    ctx->pc = 0x158318u;
    SET_GPR_U32(ctx, 31, 0x158320u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158320u; }
        if (ctx->pc != 0x158320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158320u; }
        if (ctx->pc != 0x158320u) { return; }
    }
    ctx->pc = 0x158320u;
label_158320:
    // 0x158320: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x158324: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x158324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x158328: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x158328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15832c: 0x0  nop
    ctx->pc = 0x15832cu;
    // NOP
    // 0x158330: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x158330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158338: 0x0  nop
    ctx->pc = 0x158338u;
    // NOP
    // 0x15833c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15833cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158340: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x158340u;
    {
        const bool branch_taken_0x158340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158340) {
            ctx->pc = 0x158344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158340u;
            // 0x158344: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158358u;
            goto label_158358;
        }
    }
    ctx->pc = 0x158348u;
    // 0x158348: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15834c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15834cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158350u;
    {
        const bool branch_taken_0x158350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158350u;
            // 0x158354: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158350) {
            ctx->pc = 0x158370u;
            goto label_158370;
        }
    }
    ctx->pc = 0x158358u;
label_158358:
    // 0x158358: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15835c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15835cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x158360: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158364: 0x0  nop
    ctx->pc = 0x158364u;
    // NOP
    // 0x158368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x158368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15836c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_158370:
    // 0x158370: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x158370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x158374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x158374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15837c: 0xa6030266  sh          $v1, 0x266($s0)
    ctx->pc = 0x15837cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 3));
    // 0x158380: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x158380u;
    {
        const bool branch_taken_0x158380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x158384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158380u;
            // 0x158384: 0xa21100f7  sb          $s1, 0xF7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 247), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158380) {
            ctx->pc = 0x1583D0u;
            goto label_1583d0;
        }
    }
    ctx->pc = 0x158388u;
    // 0x158388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15838c: 0x52220011  beql        $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15838Cu;
    {
        const bool branch_taken_0x15838c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x15838c) {
            ctx->pc = 0x158390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15838Cu;
            // 0x158390: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1583D4u;
            goto label_1583d4;
        }
    }
    ctx->pc = 0x158394u;
    // 0x158394: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158398: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x158398u;
    {
        const bool branch_taken_0x158398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x158398) {
            ctx->pc = 0x15839Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158398u;
            // 0x15839c: 0x92030298  lbu         $v1, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1583BCu;
            goto label_1583bc;
        }
    }
    ctx->pc = 0x1583A0u;
    // 0x1583a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1583a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1583a4: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1583A4u;
    {
        const bool branch_taken_0x1583a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1583a4) {
            ctx->pc = 0x1583A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1583A4u;
            // 0x1583a8: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1583B4u;
            goto label_1583b4;
        }
    }
    ctx->pc = 0x1583ACu;
    // 0x1583ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1583ACu;
    {
        const bool branch_taken_0x1583ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583ac) {
            ctx->pc = 0x1583D0u;
            goto label_1583d0;
        }
    }
    ctx->pc = 0x1583B4u;
label_1583b4:
    // 0x1583b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1583B4u;
    {
        const bool branch_taken_0x1583b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583B4u;
            // 0x1583b8: 0xa6020274  sh          $v0, 0x274($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 628), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583b4) {
            ctx->pc = 0x1583D8u;
            goto label_1583d8;
        }
    }
    ctx->pc = 0x1583BCu;
label_1583bc:
    // 0x1583bc: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1583bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1583c0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1583c4: 0xa2030298  sb          $v1, 0x298($s0)
    ctx->pc = 0x1583c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 3));
    // 0x1583c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1583C8u;
    {
        const bool branch_taken_0x1583c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583C8u;
            // 0x1583cc: 0xa6020274  sh          $v0, 0x274($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 628), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583c8) {
            ctx->pc = 0x1583D8u;
            goto label_1583d8;
        }
    }
    ctx->pc = 0x1583D0u;
label_1583d0:
    // 0x1583d0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1583d4:
    // 0x1583d4: 0xa6020274  sh          $v0, 0x274($s0)
    ctx->pc = 0x1583d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 628), (uint16_t)GPR_U32(ctx, 2));
label_1583d8:
    // 0x1583d8: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x1583d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1583dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1583dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1583e0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1583e4: 0x2463e928  addiu       $v1, $v1, -0x16D8
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961448));
    // 0x1583e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1583e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1583ec: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x1583ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1583f0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1583f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1583f4: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1583f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1583f8: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x1583f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x1583fc: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x1583fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x158400: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158400u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x158404: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x158404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x158408: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15840c: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x15840cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x158410: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x158414: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x158414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x158418: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x158418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15841c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x158420: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158424: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x158424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x158428: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x158428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15842c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_158430:
    // 0x158430: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x158430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x158434: 0x24634098  addiu       $v1, $v1, 0x4098
    ctx->pc = 0x158434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16536));
    // 0x158438: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x158438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15843c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15843cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x158440: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x158440u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x158444: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x158444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x158448: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x158448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15844c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x158450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158454: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x158454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_158458:
    // 0x158458: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x158458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15845c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15845cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15846c: 0x3e00008  jr          $ra
    ctx->pc = 0x15846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15846Cu;
            // 0x158470: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158474u;
    // 0x158474: 0x0  nop
    ctx->pc = 0x158474u;
    // NOP
    // 0x158478: 0x0  nop
    ctx->pc = 0x158478u;
    // NOP
    // 0x15847c: 0x0  nop
    ctx->pc = 0x15847cu;
    // NOP
label_158480:
    // 0x158480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x158480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x158484: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x158484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x158488: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x158488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15848c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15848cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x158490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15849c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1584a0: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x1584a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x1584a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1584a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1584a8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1584A8u;
    {
        const bool branch_taken_0x1584a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584a8) {
            ctx->pc = 0x1584ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1584A8u;
            // 0x1584ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158590u;
            goto label_158590;
        }
    }
    ctx->pc = 0x1584B0u;
    // 0x1584b0: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1584b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1584b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584b8: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x1584b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1584bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1584bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584c0: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x1584c0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1584c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1584c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584c8: 0x90d00010  lbu         $s0, 0x10($a2)
    ctx->pc = 0x1584c8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1584cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1584ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1584d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584d4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1584d8: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1584D8u;
    SET_GPR_U32(ctx, 31, 0x1584E0u);
    ctx->pc = 0x1584DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584D8u;
            // 0x1584dc: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E0u; }
        if (ctx->pc != 0x1584E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E0u; }
        if (ctx->pc != 0x1584E0u) { return; }
    }
    ctx->pc = 0x1584E0u;
label_1584e0:
    // 0x1584e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1584e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584e4: 0x5280002a  beql        $s4, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1584E4u;
    {
        const bool branch_taken_0x1584e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584e4) {
            ctx->pc = 0x1584E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1584E4u;
            // 0x1584e8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158590u;
            goto label_158590;
        }
    }
    ctx->pc = 0x1584ECu;
    // 0x1584ec: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1584ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1584f0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1584f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1584f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1584f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1584f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1584F8u;
    {
        const bool branch_taken_0x1584f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1584FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584F8u;
            // 0x1584fc: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584f8) {
            ctx->pc = 0x15851Cu;
            goto label_15851c;
        }
    }
    ctx->pc = 0x158500u;
    // 0x158500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158504: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158504u;
    {
        const bool branch_taken_0x158504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158504) {
            ctx->pc = 0x158508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158504u;
            // 0x158508: 0x2462001a  addiu       $v0, $v1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158520u;
            goto label_158520;
        }
    }
    ctx->pc = 0x15850Cu;
    // 0x15850c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15850Cu;
    {
        const bool branch_taken_0x15850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15850c) {
            ctx->pc = 0x15851Cu;
            goto label_15851c;
        }
    }
    ctx->pc = 0x158514u;
    // 0x158514: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158514u;
    {
        const bool branch_taken_0x158514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158514u;
            // 0x158518: 0x6402001a  daddiu      $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158514) {
            ctx->pc = 0x158524u;
            goto label_158524;
        }
    }
    ctx->pc = 0x15851Cu;
label_15851c:
    // 0x15851c: 0x2462001a  addiu       $v0, $v1, 0x1A
    ctx->pc = 0x15851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
label_158520:
    // 0x158520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x158520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_158524:
    // 0x158524: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x158524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158528: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158528u;
    SET_GPR_U32(ctx, 31, 0x158530u);
    ctx->pc = 0x15852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158528u;
            // 0x15852c: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158530u; }
        if (ctx->pc != 0x158530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158530u; }
        if (ctx->pc != 0x158530u) { return; }
    }
    ctx->pc = 0x158530u;
label_158530:
    // 0x158530: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x158534: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x158534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x158538: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x158538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x15853c: 0x2463e930  addiu       $v1, $v1, -0x16D0
    ctx->pc = 0x15853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961456));
    // 0x158540: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x158540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158544: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x158544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x158548: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x158548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15854c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x158550: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x158550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x158554: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x158554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x158558: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15855c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x15855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x158560: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158564: 0x9264008c  lbu         $a0, 0x8C($s3)
    ctx->pc = 0x158564u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x158568: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158568u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15856c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x15856cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x158570: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x158570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x158574: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x158574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x158578: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15857c: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x15857cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x158580: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x158580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x158584: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x158584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x158588: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x158588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15858c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15858cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_158590:
    // 0x158590: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x158590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x158594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15859c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15859cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1585a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1585a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1585a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1585a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1585a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1585A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1585ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585A8u;
            // 0x1585ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1585B0u;
label_1585b0:
    // 0x1585b0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1585b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1585b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1585b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585b8: 0x84c40008  lh          $a0, 0x8($a2)
    ctx->pc = 0x1585b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1585bc: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x1585bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1585c0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1585c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1585c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1585c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1585C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1585CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585C8u;
            // 0x1585cc: 0xac6405a0  sw          $a0, 0x5A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1585D0u;
label_1585d0:
    // 0x1585d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1585d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1585d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1585d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1585d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1585dc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1585dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1585e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1585e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585e4: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1585E4u;
    SET_GPR_U32(ctx, 31, 0x1585ECu);
    ctx->pc = 0x1585E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585E4u;
            // 0x1585e8: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585ECu; }
        if (ctx->pc != 0x1585ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585ECu; }
        if (ctx->pc != 0x1585ECu) { return; }
    }
    ctx->pc = 0x1585ECu;
label_1585ec:
    // 0x1585ec: 0x8c430270  lw          $v1, 0x270($v0)
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1585f0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1585f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1585f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1585F4u;
    {
        const bool branch_taken_0x1585f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1585f4) {
            ctx->pc = 0x1585F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1585F4u;
            // 0x1585f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158614u;
            goto label_158614;
        }
    }
    ctx->pc = 0x1585FCu;
    // 0x1585fc: 0x9043059c  lbu         $v1, 0x59C($v0)
    ctx->pc = 0x1585fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x158600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158604: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x158604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
    // 0x158608: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x158608u;
    SET_GPR_U32(ctx, 31, 0x158610u);
    ctx->pc = 0x15860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158608u;
            // 0x15860c: 0xa043059c  sb          $v1, 0x59C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1436), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158610u; }
        if (ctx->pc != 0x158610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158610u; }
        if (ctx->pc != 0x158610u) { return; }
    }
    ctx->pc = 0x158610u;
label_158610:
    // 0x158610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158614:
    // 0x158614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158618: 0x3e00008  jr          $ra
    ctx->pc = 0x158618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158618u;
            // 0x15861c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158620u;
label_158620:
    // 0x158620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15862c: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x15862cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158630: 0x9202059c  lbu         $v0, 0x59C($s0)
    ctx->pc = 0x158630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x158634: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x158634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x158638: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x158638u;
    {
        const bool branch_taken_0x158638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158638) {
            ctx->pc = 0x15863Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158638u;
            // 0x15863c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15869Cu;
            goto label_15869c;
        }
    }
    ctx->pc = 0x158640u;
    // 0x158640: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x158640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158644: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x158644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x158648: 0x24c685d0  addiu       $a2, $a2, -0x7A30
    ctx->pc = 0x158648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936016));
    // 0x15864c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15864cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158658: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x158658u;
    SET_GPR_U32(ctx, 31, 0x158660u);
    ctx->pc = 0x15865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158658u;
            // 0x15865c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158660u; }
        if (ctx->pc != 0x158660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158660u; }
        if (ctx->pc != 0x158660u) { return; }
    }
    ctx->pc = 0x158660u;
label_158660:
    // 0x158660: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x158660u;
    {
        const bool branch_taken_0x158660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158660) {
            ctx->pc = 0x158664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158660u;
            // 0x158664: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1586A0u;
            goto label_1586a0;
        }
    }
    ctx->pc = 0x158668u;
    // 0x158668: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15866c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x158670: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x158674: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x158674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x158678: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x158678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15867c: 0xaca400dc  sw          $a0, 0xDC($a1)
    ctx->pc = 0x15867cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 4));
    // 0x158680: 0xaca300dc  sw          $v1, 0xDC($a1)
    ctx->pc = 0x158680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 3));
    // 0x158684: 0x9203059c  lbu         $v1, 0x59C($s0)
    ctx->pc = 0x158684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x158688: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x158688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x15868c: 0xa203059c  sb          $v1, 0x59C($s0)
    ctx->pc = 0x15868cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1436), (uint8_t)GPR_U32(ctx, 3));
    // 0x158690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158690u;
    {
        const bool branch_taken_0x158690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158690) {
            ctx->pc = 0x15869Cu;
            goto label_15869c;
        }
    }
    ctx->pc = 0x158698u;
    // 0x158698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15869c:
    // 0x15869c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1586a0:
    // 0x1586a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1586a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1586A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1586A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586A4u;
            // 0x1586a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1586ACu;
    // 0x1586ac: 0x0  nop
    ctx->pc = 0x1586acu;
    // NOP
label_1586b0:
    // 0x1586b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1586b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1586b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1586b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1586b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1586bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1586bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1586c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1586c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1586c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1586c8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1586c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1586cc: 0xc062804  jal         func_18A010
    ctx->pc = 0x1586CCu;
    SET_GPR_U32(ctx, 31, 0x1586D4u);
    ctx->pc = 0x1586D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586CCu;
            // 0x1586d0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586D4u; }
        if (ctx->pc != 0x1586D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586D4u; }
        if (ctx->pc != 0x1586D4u) { return; }
    }
    ctx->pc = 0x1586D4u;
label_1586d4:
    // 0x1586d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1586d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586d8: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x1586d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x1586dc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1586dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1586e0: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1586E0u;
    {
        const bool branch_taken_0x1586e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586e0) {
            ctx->pc = 0x1586E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1586E0u;
            // 0x1586e4: 0x8e0305a0  lw          $v1, 0x5A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158780u;
            goto label_158780;
        }
    }
    ctx->pc = 0x1586E8u;
    // 0x1586e8: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1586ec: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1586ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1586f0: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x1586f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x1586f4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1586f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1586f8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1586f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1586fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x158700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15870c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158710: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158710u;
    SET_GPR_U32(ctx, 31, 0x158718u);
    ctx->pc = 0x158714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158710u;
            // 0x158714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158718u; }
        if (ctx->pc != 0x158718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158718u; }
        if (ctx->pc != 0x158718u) { return; }
    }
    ctx->pc = 0x158718u;
label_158718:
    // 0x158718: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x158718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15871c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x158720: 0x24634088  addiu       $v1, $v1, 0x4088
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16520));
    // 0x158724: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x158724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x158728: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15872c: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x158730: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x158730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x158734: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x158734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x158738: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x158738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15873c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158740: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x158740u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158744: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x158744u;
    {
        const bool branch_taken_0x158744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158744) {
            ctx->pc = 0x158748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158744u;
            // 0x158748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158770u;
            goto label_158770;
        }
    }
    ctx->pc = 0x15874Cu;
    // 0x15874c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x158750: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158750u;
    {
        const bool branch_taken_0x158750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158750) {
            ctx->pc = 0x158754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158750u;
            // 0x158754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158760u;
            goto label_158760;
        }
    }
    ctx->pc = 0x158758u;
    // 0x158758: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x158758u;
    {
        const bool branch_taken_0x158758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158758u;
            // 0x15875c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158758) {
            ctx->pc = 0x1587DCu;
            goto label_1587dc;
        }
    }
    ctx->pc = 0x158760u;
label_158760:
    // 0x158760: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158760u;
    SET_GPR_U32(ctx, 31, 0x158768u);
    ctx->pc = 0x158764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158760u;
            // 0x158764: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158768u; }
        if (ctx->pc != 0x158768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158768u; }
        if (ctx->pc != 0x158768u) { return; }
    }
    ctx->pc = 0x158768u;
label_158768:
    // 0x158768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x158768u;
    {
        const bool branch_taken_0x158768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158768) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x158770u;
label_158770:
    // 0x158770: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x158770u;
    SET_GPR_U32(ctx, 31, 0x158778u);
    ctx->pc = 0x158774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158770u;
            // 0x158774: 0x24040113  addiu       $a0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158778u; }
        if (ctx->pc != 0x158778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158778u; }
        if (ctx->pc != 0x158778u) { return; }
    }
    ctx->pc = 0x158778u;
label_158778:
    // 0x158778: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x158778u;
    {
        const bool branch_taken_0x158778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158778) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x158780u;
label_158780:
    // 0x158780: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x158780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158784: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x158784) {
            ctx->pc = 0x158788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158784u;
            // 0x158788: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587C4u;
            goto label_1587c4;
        }
    }
    ctx->pc = 0x15878Cu;
    // 0x15878c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x158790: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158794: 0x24424084  addiu       $v0, $v0, 0x4084
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16516));
    // 0x158798: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15879c: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x15879cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1587a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1587a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1587a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1587a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1587a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1587ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1587acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1587b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1587b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1587b4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1587B4u;
    SET_GPR_U32(ctx, 31, 0x1587BCu);
    ctx->pc = 0x1587B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587B4u;
            // 0x1587b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587BCu; }
        if (ctx->pc != 0x1587BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587BCu; }
        if (ctx->pc != 0x1587BCu) { return; }
    }
    ctx->pc = 0x1587BCu;
label_1587bc:
    // 0x1587bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1587BCu;
    {
        const bool branch_taken_0x1587bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587bc) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x1587C4u;
label_1587c4:
    // 0x1587c4: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1587C4u;
    SET_GPR_U32(ctx, 31, 0x1587CCu);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587CCu; }
        if (ctx->pc != 0x1587CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587CCu; }
        if (ctx->pc != 0x1587CCu) { return; }
    }
    ctx->pc = 0x1587CCu;
label_1587cc:
    // 0x1587cc: 0x8e0405a0  lw          $a0, 0x5A0($s0)
    ctx->pc = 0x1587ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x1587d0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1587D0u;
    SET_GPR_U32(ctx, 31, 0x1587D8u);
    ctx->pc = 0x1587D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587D0u;
            // 0x1587d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D8u; }
        if (ctx->pc != 0x1587D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D8u; }
        if (ctx->pc != 0x1587D8u) { return; }
    }
    ctx->pc = 0x1587D8u;
label_1587d8:
    // 0x1587d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1587d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1587dc:
    // 0x1587dc: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x1587DCu;
    SET_GPR_U32(ctx, 31, 0x1587E4u);
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587E4u; }
        if (ctx->pc != 0x1587E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587E4u; }
        if (ctx->pc != 0x1587E4u) { return; }
    }
    ctx->pc = 0x1587E4u;
label_1587e4:
    // 0x1587e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1587e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1587e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1587e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1587ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1587f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1587f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1587F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1587F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587F4u;
            // 0x1587f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1587FCu;
    // 0x1587fc: 0x0  nop
    ctx->pc = 0x1587fcu;
    // NOP
label_158800:
    // 0x158800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158804: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x158804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15880c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15880cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158814: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15881c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15881cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158820: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x158820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158824: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158828: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15882c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15882cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x158830: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x158830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x158834: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x158834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15883c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15883Cu;
    SET_GPR_U32(ctx, 31, 0x158844u);
    ctx->pc = 0x158840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15883Cu;
            // 0x158840: 0x24c686b0  addiu       $a2, $a2, -0x7950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158844u; }
        if (ctx->pc != 0x158844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158844u; }
        if (ctx->pc != 0x158844u) { return; }
    }
    ctx->pc = 0x158844u;
label_158844:
    // 0x158844: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x158844u;
    {
        const bool branch_taken_0x158844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158844) {
            ctx->pc = 0x158848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158844u;
            // 0x158848: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158898u;
            goto label_158898;
        }
    }
    ctx->pc = 0x15884Cu;
    // 0x15884c: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x15884cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x158850: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x158854: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x158854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x158858: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15885c: 0x24634084  addiu       $v1, $v1, 0x4084
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16516));
    // 0x158860: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x158860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x158864: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x158864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x158868: 0xacc500dc  sw          $a1, 0xDC($a2)
    ctx->pc = 0x158868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 5));
    // 0x15886c: 0xacc400dc  sw          $a0, 0xDC($a2)
    ctx->pc = 0x15886cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 4));
    // 0x158870: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x158870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x158874: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x158874u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x158878: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x158878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15887c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x158880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x158884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158888: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x158888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x15888c: 0x8e2305a0  lw          $v1, 0x5A0($s1)
    ctx->pc = 0x15888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x158890: 0xacc305a0  sw          $v1, 0x5A0($a2)
    ctx->pc = 0x158890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1440), GPR_U32(ctx, 3));
    // 0x158894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158898:
    // 0x158898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15889c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15889cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1588a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1588A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588A0u;
            // 0x1588a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1588A8u;
    // 0x1588a8: 0x0  nop
    ctx->pc = 0x1588a8u;
    // NOP
    // 0x1588ac: 0x0  nop
    ctx->pc = 0x1588acu;
    // NOP
label_1588b0:
    // 0x1588b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1588b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1588b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1588b8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1588b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1588bc: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x1588bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1588c0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1588c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1588c8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1588C8u;
    SET_GPR_U32(ctx, 31, 0x1588D0u);
    ctx->pc = 0x1588CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1588C8u;
            // 0x1588cc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588D0u; }
        if (ctx->pc != 0x1588D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588D0u; }
        if (ctx->pc != 0x1588D0u) { return; }
    }
    ctx->pc = 0x1588D0u;
label_1588d0:
    // 0x1588d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1588d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1588d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1588d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1588D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588D8u;
            // 0x1588dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1588E0u;
label_1588e0:
    // 0x1588e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1588e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1588e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1588e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1588e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1588e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1588ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1588ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1588f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1588f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1588f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1588f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1588f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1588f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1588fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1588fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158900: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x158900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x158908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15890c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158914: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158918: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15891c: 0xc062804  jal         func_18A010
    ctx->pc = 0x15891Cu;
    SET_GPR_U32(ctx, 31, 0x158924u);
    ctx->pc = 0x158920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15891Cu;
            // 0x158920: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158924u; }
        if (ctx->pc != 0x158924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158924u; }
        if (ctx->pc != 0x158924u) { return; }
    }
    ctx->pc = 0x158924u;
label_158924:
    // 0x158924: 0x861e0000  lh          $fp, 0x0($s0)
    ctx->pc = 0x158924u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15892c: 0x27a500be  addiu       $a1, $sp, 0xBE
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 190));
    // 0x158930: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x158934: 0xa7be00be  sh          $fp, 0xBE($sp)
    ctx->pc = 0x158934u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 190), (uint16_t)GPR_U32(ctx, 30));
    // 0x158938: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15893c: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x15893cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x158940: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x158940u;
    SET_GPR_U32(ctx, 31, 0x158948u);
    ctx->pc = 0x158944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158940u;
            // 0x158944: 0xa7a200bc  sh          $v0, 0xBC($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158948u; }
        if (ctx->pc != 0x158948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158948u; }
        if (ctx->pc != 0x158948u) { return; }
    }
    ctx->pc = 0x158948u;
label_158948:
    // 0x158948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158948u;
    {
        const bool branch_taken_0x158948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158948) {
            ctx->pc = 0x158958u;
            goto label_158958;
        }
    }
    ctx->pc = 0x158950u;
    // 0x158950: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x158950u;
    {
        const bool branch_taken_0x158950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158950u;
            // 0x158954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158950) {
            ctx->pc = 0x158DF4u;
            goto label_158df4;
        }
    }
    ctx->pc = 0x158958u;
label_158958:
    // 0x158958: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15895c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158964: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x158968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15896c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15896cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158970: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x158970u;
    SET_GPR_U32(ctx, 31, 0x158978u);
    ctx->pc = 0x158974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158970u;
            // 0x158974: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158978u; }
        if (ctx->pc != 0x158978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158978u; }
        if (ctx->pc != 0x158978u) { return; }
    }
    ctx->pc = 0x158978u;
label_158978:
    // 0x158978: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15897c: 0x52a00119  beql        $s5, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x15897Cu;
    {
        const bool branch_taken_0x15897c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15897c) {
            ctx->pc = 0x158980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15897Cu;
            // 0x158980: 0x87a600a0  lh          $a2, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158DE4u;
            goto label_158de4;
        }
    }
    ctx->pc = 0x158984u;
    // 0x158984: 0x9242027e  lbu         $v0, 0x27E($s2)
    ctx->pc = 0x158984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 638)));
    // 0x158988: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15898c: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x15898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x158990: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x158990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x158994: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x158994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x158998: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x158998u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x15899c: 0x1203003f  beq         $s0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x15899Cu;
    {
        const bool branch_taken_0x15899c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1589A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15899Cu;
            // 0x1589a0: 0x8eb10010  lw          $s1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15899c) {
            ctx->pc = 0x158A9Cu;
            goto label_158a9c;
        }
    }
    ctx->pc = 0x1589A4u;
    // 0x1589a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1589a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1589a8: 0x5202002b  beql        $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1589A8u;
    {
        const bool branch_taken_0x1589a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1589a8) {
            ctx->pc = 0x1589ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589A8u;
            // 0x1589ac: 0x329600ff  andi        $s6, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158A58u;
            goto label_158a58;
        }
    }
    ctx->pc = 0x1589B0u;
    // 0x1589b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1589b4: 0x52020016  beql        $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1589B4u;
    {
        const bool branch_taken_0x1589b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1589b4) {
            ctx->pc = 0x1589B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589B4u;
            // 0x1589b8: 0x329600ff  andi        $s6, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158A10u;
            goto label_158a10;
        }
    }
    ctx->pc = 0x1589BCu;
    // 0x1589bc: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1589BCu;
    {
        const bool branch_taken_0x1589bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1589bc) {
            ctx->pc = 0x1589C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589BCu;
            // 0x1589c0: 0x329600ff  andi        $s6, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1589CCu;
            goto label_1589cc;
        }
    }
    ctx->pc = 0x1589C4u;
    // 0x1589c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1589C4u;
    {
        const bool branch_taken_0x1589c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589C4u;
            // 0x1589c8: 0x8e4500dc  lw          $a1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589c4) {
            ctx->pc = 0x158AE0u;
            goto label_158ae0;
        }
    }
    ctx->pc = 0x1589CCu;
label_1589cc:
    // 0x1589cc: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x1589d0: 0x2c3001a  div         $zero, $s6, $v1
    ctx->pc = 0x1589d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1589d4: 0xb810  mfhi        $s7
    ctx->pc = 0x1589d4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x1589d8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x1589D8u;
    SET_GPR_U32(ctx, 31, 0x1589E0u);
    ctx->pc = 0x1589DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1589D8u;
            // 0x1589dc: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589E0u; }
        if (ctx->pc != 0x1589E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589E0u; }
        if (ctx->pc != 0x1589E0u) { return; }
    }
    ctx->pc = 0x1589E0u;
label_1589e0:
    // 0x1589e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1589e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1589e4: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1589E4u;
    {
        const bool branch_taken_0x1589e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1589e4) {
            ctx->pc = 0x1589E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1589E4u;
            // 0x1589e8: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158A00u;
            goto label_158a00;
        }
    }
    ctx->pc = 0x1589ECu;
    // 0x1589ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1589f0: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x1589F0u;
    SET_GPR_U32(ctx, 31, 0x1589F8u);
    ctx->pc = 0x1589F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1589F0u;
            // 0x1589f4: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589F8u; }
        if (ctx->pc != 0x1589F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589F8u; }
        if (ctx->pc != 0x1589F8u) { return; }
    }
    ctx->pc = 0x1589F8u;
label_1589f8:
    // 0x1589f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1589F8u;
    {
        const bool branch_taken_0x1589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1589f8) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A00u;
label_158a00:
    // 0x158a00: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A00u;
    SET_GPR_U32(ctx, 31, 0x158A08u);
    ctx->pc = 0x158A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A00u;
            // 0x158a04: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A08u; }
        if (ctx->pc != 0x158A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A08u; }
        if (ctx->pc != 0x158A08u) { return; }
    }
    ctx->pc = 0x158A08u;
label_158a08:
    // 0x158a08: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x158A08u;
    {
        const bool branch_taken_0x158a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a08) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A10u;
label_158a10:
    // 0x158a10: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x158a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x158a14: 0x2c3001a  div         $zero, $s6, $v1
    ctx->pc = 0x158a14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x158a18: 0xb810  mfhi        $s7
    ctx->pc = 0x158a18u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x158a1c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A1Cu;
    SET_GPR_U32(ctx, 31, 0x158A24u);
    ctx->pc = 0x158A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A1Cu;
            // 0x158a20: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A24u; }
        if (ctx->pc != 0x158A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A24u; }
        if (ctx->pc != 0x158A24u) { return; }
    }
    ctx->pc = 0x158A24u;
label_158a24:
    // 0x158a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158a28: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158A28u;
    {
        const bool branch_taken_0x158a28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x158a28) {
            ctx->pc = 0x158A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158A28u;
            // 0x158a2c: 0x26e20004  addiu       $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158A44u;
            goto label_158a44;
        }
    }
    ctx->pc = 0x158A30u;
    // 0x158a30: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x158a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158a34: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A34u;
    SET_GPR_U32(ctx, 31, 0x158A3Cu);
    ctx->pc = 0x158A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A34u;
            // 0x158a38: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A3Cu; }
        if (ctx->pc != 0x158A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A3Cu; }
        if (ctx->pc != 0x158A3Cu) { return; }
    }
    ctx->pc = 0x158A3Cu;
label_158a3c:
    // 0x158a3c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x158A3Cu;
    {
        const bool branch_taken_0x158a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a3c) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A44u;
label_158a44:
    // 0x158a44: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x158a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x158a48: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A48u;
    SET_GPR_U32(ctx, 31, 0x158A50u);
    ctx->pc = 0x158A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A48u;
            // 0x158a4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A50u; }
        if (ctx->pc != 0x158A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A50u; }
        if (ctx->pc != 0x158A50u) { return; }
    }
    ctx->pc = 0x158A50u;
label_158a50:
    // 0x158a50: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x158A50u;
    {
        const bool branch_taken_0x158a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a50) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A58u;
label_158a58:
    // 0x158a58: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x158a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x158a5c: 0x2c3001a  div         $zero, $s6, $v1
    ctx->pc = 0x158a5cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x158a60: 0xb810  mfhi        $s7
    ctx->pc = 0x158a60u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x158a64: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A64u;
    SET_GPR_U32(ctx, 31, 0x158A6Cu);
    ctx->pc = 0x158A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A64u;
            // 0x158a68: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A6Cu; }
        if (ctx->pc != 0x158A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A6Cu; }
        if (ctx->pc != 0x158A6Cu) { return; }
    }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158a70: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158A70u;
    {
        const bool branch_taken_0x158a70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x158a70) {
            ctx->pc = 0x158A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158A70u;
            // 0x158a74: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158A8Cu;
            goto label_158a8c;
        }
    }
    ctx->pc = 0x158A78u;
    // 0x158a78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158a7c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A7Cu;
    SET_GPR_U32(ctx, 31, 0x158A84u);
    ctx->pc = 0x158A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A7Cu;
            // 0x158a80: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A84u; }
        if (ctx->pc != 0x158A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A84u; }
        if (ctx->pc != 0x158A84u) { return; }
    }
    ctx->pc = 0x158A84u;
label_158a84:
    // 0x158a84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x158A84u;
    {
        const bool branch_taken_0x158a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a84) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A8Cu;
label_158a8c:
    // 0x158a8c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158A8Cu;
    SET_GPR_U32(ctx, 31, 0x158A94u);
    ctx->pc = 0x158A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A8Cu;
            // 0x158a90: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A94u; }
        if (ctx->pc != 0x158A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A94u; }
        if (ctx->pc != 0x158A94u) { return; }
    }
    ctx->pc = 0x158A94u;
label_158a94:
    // 0x158a94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158A94u;
    {
        const bool branch_taken_0x158a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a94) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158A9Cu;
label_158a9c:
    // 0x158a9c: 0x329600ff  andi        $s6, $s4, 0xFF
    ctx->pc = 0x158a9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x158aa0: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x158aa4: 0x2c3001a  div         $zero, $s6, $v1
    ctx->pc = 0x158aa4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x158aa8: 0xb810  mfhi        $s7
    ctx->pc = 0x158aa8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x158aac: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158AACu;
    SET_GPR_U32(ctx, 31, 0x158AB4u);
    ctx->pc = 0x158AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AACu;
            // 0x158ab0: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AB4u; }
        if (ctx->pc != 0x158AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AB4u; }
        if (ctx->pc != 0x158AB4u) { return; }
    }
    ctx->pc = 0x158AB4u;
label_158ab4:
    // 0x158ab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158ab8: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158AB8u;
    {
        const bool branch_taken_0x158ab8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x158ab8) {
            ctx->pc = 0x158ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158AB8u;
            // 0x158abc: 0x32e4ffff  andi        $a0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158AD4u;
            goto label_158ad4;
        }
    }
    ctx->pc = 0x158AC0u;
    // 0x158ac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158ac4: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158AC4u;
    SET_GPR_U32(ctx, 31, 0x158ACCu);
    ctx->pc = 0x158AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AC4u;
            // 0x158ac8: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ACCu; }
        if (ctx->pc != 0x158ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ACCu; }
        if (ctx->pc != 0x158ACCu) { return; }
    }
    ctx->pc = 0x158ACCu;
label_158acc:
    // 0x158acc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158ACCu;
    {
        const bool branch_taken_0x158acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158acc) {
            ctx->pc = 0x158ADCu;
            goto label_158adc;
        }
    }
    ctx->pc = 0x158AD4u;
label_158ad4:
    // 0x158ad4: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158AD4u;
    SET_GPR_U32(ctx, 31, 0x158ADCu);
    ctx->pc = 0x158AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AD4u;
            // 0x158ad8: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ADCu; }
        if (ctx->pc != 0x158ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ADCu; }
        if (ctx->pc != 0x158ADCu) { return; }
    }
    ctx->pc = 0x158ADCu;
label_158adc:
    // 0x158adc: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x158adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_158ae0:
    // 0x158ae0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x158ae4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x158ae8: 0x2463e960  addiu       $v1, $v1, -0x16A0
    ctx->pc = 0x158ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961504));
    // 0x158aec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x158aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158af0: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x158af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x158af4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x158af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x158af8: 0xae2500dc  sw          $a1, 0xDC($s1)
    ctx->pc = 0x158af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 5));
    // 0x158afc: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x158afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x158b00: 0xae2305e8  sw          $v1, 0x5E8($s1)
    ctx->pc = 0x158b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 3));
    // 0x158b04: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x158b04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x158b08: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x158b0c: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x158b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158b10: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x158b10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x158b14: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x158b14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x158b18: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x158b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x158b1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x158b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x158b20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x158b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x158b24: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x158b24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158b28: 0x87a300be  lh          $v1, 0xBE($sp)
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x158b2c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x158b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x158b30: 0x87a300bc  lh          $v1, 0xBC($sp)
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x158b34: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x158b34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x158b38: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x158b38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x158b3c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x158b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x158b40: 0x9242059c  lbu         $v0, 0x59C($s2)
    ctx->pc = 0x158b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1436)));
    // 0x158b44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158b48: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x158B48u;
    {
        const bool branch_taken_0x158b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b48) {
            ctx->pc = 0x158B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158B48u;
            // 0x158b4c: 0x328200ff  andi        $v0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158DC0u;
            goto label_158dc0;
        }
    }
    ctx->pc = 0x158B50u;
    // 0x158b50: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x158b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x158b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x158b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158b58: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x158b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x158b5c: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x158b5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x158b60: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x158B60u;
    {
        const bool branch_taken_0x158b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B60u;
            // 0x158b64: 0xae4305a0  sw          $v1, 0x5A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b60) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158B68u;
    // 0x158b68: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x158b6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158b70: 0x2463d2d0  addiu       $v1, $v1, -0x2D30
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955728));
    // 0x158b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158b78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158b7c: 0x400008  jr          $v0
    ctx->pc = 0x158B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158B84u: goto label_158b84;
            case 0x158C44u: goto label_158c44;
            case 0x158D04u: goto label_158d04;
            case 0x158DBCu: goto label_158dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158B84u;
label_158b84:
    // 0x158b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b88: 0x5202001d  beql        $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158B88u;
    {
        const bool branch_taken_0x158b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158b88) {
            ctx->pc = 0x158B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158B88u;
            // 0x158b8c: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158C00u;
            goto label_158c00;
        }
    }
    ctx->pc = 0x158B90u;
    // 0x158b90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158b94: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158B94u;
    {
        const bool branch_taken_0x158b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158b94) {
            ctx->pc = 0x158B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158B94u;
            // 0x158b98: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158BBCu;
            goto label_158bbc;
        }
    }
    ctx->pc = 0x158B9Cu;
    // 0x158b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158ba0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158BA0u;
    {
        const bool branch_taken_0x158ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158ba0) {
            ctx->pc = 0x158BB8u;
            goto label_158bb8;
        }
    }
    ctx->pc = 0x158BA8u;
    // 0x158ba8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158BA8u;
    {
        const bool branch_taken_0x158ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ba8) {
            ctx->pc = 0x158BB8u;
            goto label_158bb8;
        }
    }
    ctx->pc = 0x158BB0u;
    // 0x158bb0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x158BB0u;
    {
        const bool branch_taken_0x158bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bb0) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158BB8u;
label_158bb8:
    // 0x158bb8: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_158bbc:
    // 0x158bbc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158bc0: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158bc4: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158bc8: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158bcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158bd0: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158bd8: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158bdc: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x158be0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158be4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158be8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158bf0: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158BF0u;
    SET_GPR_U32(ctx, 31, 0x158BF8u);
    ctx->pc = 0x158BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158BF0u;
            // 0x158bf4: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BF8u; }
        if (ctx->pc != 0x158BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BF8u; }
        if (ctx->pc != 0x158BF8u) { return; }
    }
    ctx->pc = 0x158BF8u;
label_158bf8:
    // 0x158bf8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x158BF8u;
    {
        const bool branch_taken_0x158bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bf8) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158C00u;
label_158c00:
    // 0x158c00: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158c04: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158c08: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158c0c: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158c10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c14: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c1c: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158c20: 0x2407010a  addiu       $a3, $zero, 0x10A
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x158c24: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158c28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158c34: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158C34u;
    SET_GPR_U32(ctx, 31, 0x158C3Cu);
    ctx->pc = 0x158C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158C34u;
            // 0x158c38: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C3Cu; }
        if (ctx->pc != 0x158C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C3Cu; }
        if (ctx->pc != 0x158C3Cu) { return; }
    }
    ctx->pc = 0x158C3Cu;
label_158c3c:
    // 0x158c3c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x158C3Cu;
    {
        const bool branch_taken_0x158c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c3c) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158C44u;
label_158c44:
    // 0x158c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c48: 0x5202001d  beql        $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158C48u;
    {
        const bool branch_taken_0x158c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158c48) {
            ctx->pc = 0x158C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C48u;
            // 0x158c4c: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158CC0u;
            goto label_158cc0;
        }
    }
    ctx->pc = 0x158C50u;
    // 0x158c50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158c54: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C54u;
            // 0x158c58: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C5Cu;
    // 0x158c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158c60: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C60u;
    {
        const bool branch_taken_0x158c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158c60) {
            ctx->pc = 0x158C78u;
            goto label_158c78;
        }
    }
    ctx->pc = 0x158C68u;
    // 0x158c68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158C68u;
    {
        const bool branch_taken_0x158c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c68) {
            ctx->pc = 0x158C78u;
            goto label_158c78;
        }
    }
    ctx->pc = 0x158C70u;
    // 0x158c70: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x158C70u;
    {
        const bool branch_taken_0x158c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c70) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158C78u;
label_158c78:
    // 0x158c78: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x158c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_158c7c:
    // 0x158c7c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158c80: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158c84: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158c88: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158c8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c90: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c98: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158c9c: 0x24070103  addiu       $a3, $zero, 0x103
    ctx->pc = 0x158c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x158ca0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158ca4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158ca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158cb0: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158CB0u;
    SET_GPR_U32(ctx, 31, 0x158CB8u);
    ctx->pc = 0x158CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158CB0u;
            // 0x158cb4: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CB8u; }
        if (ctx->pc != 0x158CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CB8u; }
        if (ctx->pc != 0x158CB8u) { return; }
    }
    ctx->pc = 0x158CB8u;
label_158cb8:
    // 0x158cb8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x158CB8u;
    {
        const bool branch_taken_0x158cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cb8) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158CC0u;
label_158cc0:
    // 0x158cc0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158cc4: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158cc8: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158ccc: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158cd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158cd4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158cdc: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158ce0: 0x2407010b  addiu       $a3, $zero, 0x10B
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x158ce4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158ce8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158cf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158cf4: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158CF4u;
    SET_GPR_U32(ctx, 31, 0x158CFCu);
    ctx->pc = 0x158CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158CF4u;
            // 0x158cf8: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CFCu; }
        if (ctx->pc != 0x158CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CFCu; }
        if (ctx->pc != 0x158CFCu) { return; }
    }
    ctx->pc = 0x158CFCu;
label_158cfc:
    // 0x158cfc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x158CFCu;
    {
        const bool branch_taken_0x158cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cfc) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158D04u;
label_158d04:
    // 0x158d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158d08: 0x5202001d  beql        $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158D08u;
    {
        const bool branch_taken_0x158d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158d08) {
            ctx->pc = 0x158D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D08u;
            // 0x158d0c: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D80u;
            goto label_158d80;
        }
    }
    ctx->pc = 0x158D10u;
    // 0x158d10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158d14: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158D14u;
    {
        const bool branch_taken_0x158d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158d14) {
            ctx->pc = 0x158D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D14u;
            // 0x158d18: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158D1Cu;
    // 0x158d1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158d20: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158D20u;
    {
        const bool branch_taken_0x158d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x158d20) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158D28u;
    // 0x158d28: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158D28u;
    {
        const bool branch_taken_0x158d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d28) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158D30u;
    // 0x158d30: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x158D30u;
    {
        const bool branch_taken_0x158d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d30) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158D38u;
label_158d38:
    // 0x158d38: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_158d3c:
    // 0x158d3c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158d40: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158d44: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158d48: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158d4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d50: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d58: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158d58u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158d5c: 0x24070109  addiu       $a3, $zero, 0x109
    ctx->pc = 0x158d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x158d60: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158d64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158d70: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158D70u;
    SET_GPR_U32(ctx, 31, 0x158D78u);
    ctx->pc = 0x158D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158D70u;
            // 0x158d74: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D78u; }
        if (ctx->pc != 0x158D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D78u; }
        if (ctx->pc != 0x158D78u) { return; }
    }
    ctx->pc = 0x158D78u;
label_158d78:
    // 0x158d78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x158D78u;
    {
        const bool branch_taken_0x158d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d78) {
            ctx->pc = 0x158DBCu;
            goto label_158dbc;
        }
    }
    ctx->pc = 0x158D80u;
label_158d80:
    // 0x158d80: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x158d84: 0x24424088  addiu       $v0, $v0, 0x4088
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16520));
    // 0x158d88: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x158d8c: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x158d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d94: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x158d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x158d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d9c: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x158d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x158da0: 0x2407010b  addiu       $a3, $zero, 0x10B
    ctx->pc = 0x158da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x158da4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x158da8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x158dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158db4: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158DB4u;
    SET_GPR_U32(ctx, 31, 0x158DBCu);
    ctx->pc = 0x158DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158DB4u;
            // 0x158db8: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DBCu; }
        if (ctx->pc != 0x158DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DBCu; }
        if (ctx->pc != 0x158DBCu) { return; }
    }
    ctx->pc = 0x158DBCu;
label_158dbc:
    // 0x158dbc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x158dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_158dc0:
    // 0x158dc0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x158dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x158dc4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x158DC4u;
    {
        const bool branch_taken_0x158dc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dc4) {
            ctx->pc = 0x158DE0u;
            goto label_158de0;
        }
    }
    ctx->pc = 0x158DCCu;
    // 0x158dcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dd0: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x158dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dd8: 0xc05721c  jal         func_15C870
    ctx->pc = 0x158DD8u;
    SET_GPR_U32(ctx, 31, 0x158DE0u);
    ctx->pc = 0x158DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158DD8u;
            // 0x158ddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DE0u; }
        if (ctx->pc != 0x158DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DE0u; }
        if (ctx->pc != 0x158DE0u) { return; }
    }
    ctx->pc = 0x158DE0u;
label_158de0:
    // 0x158de0: 0x87a600a0  lh          $a2, 0xA0($sp)
    ctx->pc = 0x158de0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_158de4:
    // 0x158de4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x158de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158de8: 0xc057208  jal         func_15C820
    ctx->pc = 0x158DE8u;
    SET_GPR_U32(ctx, 31, 0x158DF0u);
    ctx->pc = 0x158DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158DE8u;
            // 0x158dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DF0u; }
        if (ctx->pc != 0x158DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DF0u; }
        if (ctx->pc != 0x158DF0u) { return; }
    }
    ctx->pc = 0x158DF0u;
label_158df0:
    // 0x158df0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x158df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_158df4:
    // 0x158df4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x158df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158df8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x158df8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158dfc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x158dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158e00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x158e00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158e04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x158e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158e08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x158e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x158E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E1Cu;
            // 0x158e20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158E24u;
    // 0x158e24: 0x0  nop
    ctx->pc = 0x158e24u;
    // NOP
    // 0x158e28: 0x0  nop
    ctx->pc = 0x158e28u;
    // NOP
    // 0x158e2c: 0x0  nop
    ctx->pc = 0x158e2cu;
    // NOP
label_158e30:
    // 0x158e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x158e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x158e34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x158e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x158e38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x158e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x158e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158e4c: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x158e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158e50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x158e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e54: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x158e54u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e5c: 0x27a5006e  addiu       $a1, $sp, 0x6E
    ctx->pc = 0x158e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
    // 0x158e60: 0xa7b3006e  sh          $s3, 0x6E($sp)
    ctx->pc = 0x158e60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 110), (uint16_t)GPR_U32(ctx, 19));
    // 0x158e64: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158e68: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x158e6c: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x158E6Cu;
    SET_GPR_U32(ctx, 31, 0x158E74u);
    ctx->pc = 0x158E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E6Cu;
            // 0x158e70: 0xa7b2006c  sh          $s2, 0x6C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 108), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E74u; }
        if (ctx->pc != 0x158E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E74u; }
        if (ctx->pc != 0x158E74u) { return; }
    }
    ctx->pc = 0x158E74u;
label_158e74:
    // 0x158e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158E74u;
    {
        const bool branch_taken_0x158e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e74) {
            ctx->pc = 0x158E84u;
            goto label_158e84;
        }
    }
    ctx->pc = 0x158E7Cu;
    // 0x158e7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x158E7Cu;
    {
        const bool branch_taken_0x158e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E7Cu;
            // 0x158e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e7c) {
            ctx->pc = 0x158F38u;
            goto label_158f38;
        }
    }
    ctx->pc = 0x158E84u;
label_158e84:
    // 0x158e84: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x158e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x158e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e90: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x158e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e9c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x158E9Cu;
    SET_GPR_U32(ctx, 31, 0x158EA4u);
    ctx->pc = 0x158EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E9Cu;
            // 0x158ea0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EA4u; }
        if (ctx->pc != 0x158EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EA4u; }
        if (ctx->pc != 0x158EA4u) { return; }
    }
    ctx->pc = 0x158EA4u;
label_158ea4:
    // 0x158ea4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x158ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ea8: 0x5280001f  beql        $s4, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x158EA8u;
    {
        const bool branch_taken_0x158ea8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ea8) {
            ctx->pc = 0x158EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158EA8u;
            // 0x158eac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F28u;
            goto label_158f28;
        }
    }
    ctx->pc = 0x158EB0u;
    // 0x158eb0: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x158eb4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158eb8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x158EB8u;
    SET_GPR_U32(ctx, 31, 0x158EC0u);
    ctx->pc = 0x158EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158EB8u;
            // 0x158ebc: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EC0u; }
        if (ctx->pc != 0x158EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EC0u; }
        if (ctx->pc != 0x158EC0u) { return; }
    }
    ctx->pc = 0x158EC0u;
label_158ec0:
    // 0x158ec0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x158ec4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x158ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x158ec8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x158ecc: 0x2463e968  addiu       $v1, $v1, -0x1698
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961512));
    // 0x158ed0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x158ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158ed4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x158ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x158ed8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x158ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x158edc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x158edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x158ee0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x158ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x158ee4: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x158ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x158ee8: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x158eec: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x158eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x158ef0: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158ef4: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x158ef4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x158ef8: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x158ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x158efc: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x158efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x158f00: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x158f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x158f04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x158f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x158f08: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x158f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x158f0c: 0x87a3006e  lh          $v1, 0x6E($sp)
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 110)));
    // 0x158f10: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x158f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x158f14: 0x87a3006c  lh          $v1, 0x6C($sp)
    ctx->pc = 0x158f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x158f18: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x158f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x158f1c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x158f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x158f20: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x158f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x158f24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158f28:
    // 0x158f28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x158f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f2c: 0xc057208  jal         func_15C820
    ctx->pc = 0x158F2Cu;
    SET_GPR_U32(ctx, 31, 0x158F34u);
    ctx->pc = 0x158F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158F2Cu;
            // 0x158f30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F34u; }
        if (ctx->pc != 0x158F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F34u; }
        if (ctx->pc != 0x158F34u) { return; }
    }
    ctx->pc = 0x158F34u;
label_158f34:
    // 0x158f34: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x158f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_158f38:
    // 0x158f38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x158f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x158f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158f50: 0x3e00008  jr          $ra
    ctx->pc = 0x158F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F50u;
            // 0x158f54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158F58u;
    // 0x158f58: 0x0  nop
    ctx->pc = 0x158f58u;
    // NOP
    // 0x158f5c: 0x0  nop
    ctx->pc = 0x158f5cu;
    // NOP
label_158f60:
    // 0x158f60: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x158F60u;
    {
        const bool branch_taken_0x158f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f60) {
            ctx->pc = 0x158F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F60u;
            // 0x158f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158FA0u;
            goto label_158fa0;
        }
    }
    ctx->pc = 0x158F68u;
    // 0x158f68: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158f6c: 0x90620319  lbu         $v0, 0x319($v1)
    ctx->pc = 0x158f6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 793)));
    // 0x158f70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x158f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x158f74: 0xa0620319  sb          $v0, 0x319($v1)
    ctx->pc = 0x158f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 793), (uint8_t)GPR_U32(ctx, 2));
    // 0x158f78: 0x90620323  lbu         $v0, 0x323($v1)
    ctx->pc = 0x158f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 803)));
    // 0x158f7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x158f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x158f80: 0xa0620323  sb          $v0, 0x323($v1)
    ctx->pc = 0x158f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 803), (uint8_t)GPR_U32(ctx, 2));
    // 0x158f84: 0x9062032d  lbu         $v0, 0x32D($v1)
    ctx->pc = 0x158f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 813)));
    // 0x158f88: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x158f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x158f8c: 0xa062032d  sb          $v0, 0x32D($v1)
    ctx->pc = 0x158f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 813), (uint8_t)GPR_U32(ctx, 2));
    // 0x158f90: 0x90620337  lbu         $v0, 0x337($v1)
    ctx->pc = 0x158f90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 823)));
    // 0x158f94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x158f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x158f98: 0xa0620337  sb          $v0, 0x337($v1)
    ctx->pc = 0x158f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 823), (uint8_t)GPR_U32(ctx, 2));
    // 0x158f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158fa0:
    // 0x158fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x158FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158FA8u;
    // 0x158fa8: 0x0  nop
    ctx->pc = 0x158fa8u;
    // NOP
    // 0x158fac: 0x0  nop
    ctx->pc = 0x158facu;
    // NOP
label_158fb0:
    // 0x158fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158fb4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x158FB4u;
    {
        const bool branch_taken_0x158fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FB4u;
            // 0x158fb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fb4) {
            ctx->pc = 0x159020u;
            goto label_159020;
        }
    }
    ctx->pc = 0x158FBCu;
    // 0x158fbc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x158fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158fc0: 0x90620319  lbu         $v0, 0x319($v1)
    ctx->pc = 0x158fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 793)));
    // 0x158fc4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158fc8: 0xa0620319  sb          $v0, 0x319($v1)
    ctx->pc = 0x158fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 793), (uint8_t)GPR_U32(ctx, 2));
    // 0x158fcc: 0x90620323  lbu         $v0, 0x323($v1)
    ctx->pc = 0x158fccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 803)));
    // 0x158fd0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158fd4: 0xa0620323  sb          $v0, 0x323($v1)
    ctx->pc = 0x158fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 803), (uint8_t)GPR_U32(ctx, 2));
    // 0x158fd8: 0x9062032d  lbu         $v0, 0x32D($v1)
    ctx->pc = 0x158fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 813)));
    // 0x158fdc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158fe0: 0xa062032d  sb          $v0, 0x32D($v1)
    ctx->pc = 0x158fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 813), (uint8_t)GPR_U32(ctx, 2));
    // 0x158fe4: 0x90620337  lbu         $v0, 0x337($v1)
    ctx->pc = 0x158fe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 823)));
    // 0x158fe8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158fec: 0xa0620337  sb          $v0, 0x337($v1)
    ctx->pc = 0x158fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 823), (uint8_t)GPR_U32(ctx, 2));
    // 0x158ff0: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x158ff4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x158ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x158ff8: 0xc062784  jal         func_189E10
    ctx->pc = 0x158FF8u;
    SET_GPR_U32(ctx, 31, 0x159000u);
    ctx->pc = 0x158FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158FF8u;
            // 0x158ffc: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (runtime->hasFunction(0x189E10u)) {
        auto targetFn = runtime->lookupFunction(0x189E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159000u; }
        if (ctx->pc != 0x159000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E10_0x189e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159000u; }
        if (ctx->pc != 0x159000u) { return; }
    }
    ctx->pc = 0x159000u;
label_159000:
    // 0x159000: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159004: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x159004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x159008: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x159008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15900c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x159010: 0x2442408c  addiu       $v0, $v0, 0x408C
    ctx->pc = 0x159010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16524));
    // 0x159014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x159018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15901c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15901cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_159020:
    // 0x159020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159028: 0x3e00008  jr          $ra
    ctx->pc = 0x159028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159028u;
            // 0x15902c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159030u;
label_159030:
    // 0x159030: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159034: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159038: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15903c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15904c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15904cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159054: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x159054u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15905c: 0x84d40000  lh          $s4, 0x0($a2)
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159064: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x159068: 0xa7b4007e  sh          $s4, 0x7E($sp)
    ctx->pc = 0x159068u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 20));
    // 0x15906c: 0x84d30008  lh          $s3, 0x8($a2)
    ctx->pc = 0x15906cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159070: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159074: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159074u;
    SET_GPR_U32(ctx, 31, 0x15907Cu);
    ctx->pc = 0x159078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159074u;
            // 0x159078: 0xa7b3007c  sh          $s3, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15907Cu; }
        if (ctx->pc != 0x15907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15907Cu; }
        if (ctx->pc != 0x15907Cu) { return; }
    }
    ctx->pc = 0x15907Cu;
label_15907c:
    // 0x15907c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15907Cu;
    {
        const bool branch_taken_0x15907c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15907c) {
            ctx->pc = 0x15908Cu;
            goto label_15908c;
        }
    }
    ctx->pc = 0x159084u;
    // 0x159084: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x159084u;
    {
        const bool branch_taken_0x159084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159084u;
            // 0x159088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159084) {
            ctx->pc = 0x159168u;
            goto label_159168;
        }
    }
    ctx->pc = 0x15908Cu;
label_15908c:
    // 0x15908c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159098: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15909c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15909cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590a4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1590A4u;
    SET_GPR_U32(ctx, 31, 0x1590ACu);
    ctx->pc = 0x1590A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1590A4u;
            // 0x1590a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590ACu; }
        if (ctx->pc != 0x1590ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590ACu; }
        if (ctx->pc != 0x1590ACu) { return; }
    }
    ctx->pc = 0x1590ACu;
label_1590ac:
    // 0x1590ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590b0: 0x52a00029  beql        $s5, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1590B0u;
    {
        const bool branch_taken_0x1590b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590b0) {
            ctx->pc = 0x1590B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B0u;
            // 0x1590b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159158u;
            goto label_159158;
        }
    }
    ctx->pc = 0x1590B8u;
    // 0x1590b8: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1590bc: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1590bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1590c0: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x1590c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1590c4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1590c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1590c8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x1590C8u;
    SET_GPR_U32(ctx, 31, 0x1590D0u);
    ctx->pc = 0x1590CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1590C8u;
            // 0x1590cc: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590D0u; }
        if (ctx->pc != 0x1590D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590D0u; }
        if (ctx->pc != 0x1590D0u) { return; }
    }
    ctx->pc = 0x1590D0u;
label_1590d0:
    // 0x1590d0: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x1590d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x1590d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1590d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1590d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1590dc: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x1590dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
    // 0x1590e0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1590e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1590e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1590e8: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x1590e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x1590ec: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x1590ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    // 0x1590f0: 0xae2205e8  sw          $v0, 0x5E8($s1)
    ctx->pc = 0x1590f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
    // 0x1590f4: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x1590f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1590f8: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x1590f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x1590fc: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x1590fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x159100: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x159100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x159104: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x159104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159108: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x159108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15910c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x159110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159114: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x159114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x159118: 0x9242059c  lbu         $v0, 0x59C($s2)
    ctx->pc = 0x159118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1436)));
    // 0x15911c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159120: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x159120u;
    {
        const bool branch_taken_0x159120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159120) {
            ctx->pc = 0x159124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159120u;
            // 0x159124: 0x87a3007e  lh          $v1, 0x7E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15913Cu;
            goto label_15913c;
        }
    }
    ctx->pc = 0x159128u;
    // 0x159128: 0x2602000b  addiu       $v0, $s0, 0xB
    ctx->pc = 0x159128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x15912c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15912cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159130: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x159130u;
    SET_GPR_U32(ctx, 31, 0x159138u);
    ctx->pc = 0x159134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159130u;
            // 0x159134: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159138u; }
        if (ctx->pc != 0x159138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159138u; }
        if (ctx->pc != 0x159138u) { return; }
    }
    ctx->pc = 0x159138u;
label_159138:
    // 0x159138: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x159138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_15913c:
    // 0x15913c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159140: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x159140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159144: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159148: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x159148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15914c: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x15914cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159150: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x159150u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159154: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x159154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159158:
    // 0x159158: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x159158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15915c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15915Cu;
    SET_GPR_U32(ctx, 31, 0x159164u);
    ctx->pc = 0x159160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15915Cu;
            // 0x159160: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159164u; }
        if (ctx->pc != 0x159164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159164u; }
        if (ctx->pc != 0x159164u) { return; }
    }
    ctx->pc = 0x159164u;
label_159164:
    // 0x159164: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x159164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159168:
    // 0x159168: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15916c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15916cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15917c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15917cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159184: 0x3e00008  jr          $ra
    ctx->pc = 0x159184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159184u;
            // 0x159188: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15918Cu;
    // 0x15918c: 0x0  nop
    ctx->pc = 0x15918cu;
    // NOP
label_159190:
    // 0x159190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15919c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1591a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1591a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1591a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1591a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1591a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1591a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1591ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1591acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1591b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591b4: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x1591b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1591b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1591b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591bc: 0x84d40000  lh          $s4, 0x0($a2)
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1591c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1591c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591c4: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x1591c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x1591c8: 0xa7b4007e  sh          $s4, 0x7E($sp)
    ctx->pc = 0x1591c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 20));
    // 0x1591cc: 0x84d30008  lh          $s3, 0x8($a2)
    ctx->pc = 0x1591ccu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1591d0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1591d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1591d4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x1591D4u;
    SET_GPR_U32(ctx, 31, 0x1591DCu);
    ctx->pc = 0x1591D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591D4u;
            // 0x1591d8: 0xa7b3007c  sh          $s3, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591DCu; }
        if (ctx->pc != 0x1591DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591DCu; }
        if (ctx->pc != 0x1591DCu) { return; }
    }
    ctx->pc = 0x1591DCu;
label_1591dc:
    // 0x1591dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1591DCu;
    {
        const bool branch_taken_0x1591dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1591dc) {
            ctx->pc = 0x1591ECu;
            goto label_1591ec;
        }
    }
    ctx->pc = 0x1591E4u;
    // 0x1591e4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1591E4u;
    {
        const bool branch_taken_0x1591e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1591E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591E4u;
            // 0x1591e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591e4) {
            ctx->pc = 0x159320u;
            goto label_159320;
        }
    }
    ctx->pc = 0x1591ECu;
label_1591ec:
    // 0x1591ec: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1591ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1591f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1591f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591f8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x1591f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x1591fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1591fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159204: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159204u;
    SET_GPR_U32(ctx, 31, 0x15920Cu);
    ctx->pc = 0x159208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159204u;
            // 0x159208: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15920Cu; }
        if (ctx->pc != 0x15920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15920Cu; }
        if (ctx->pc != 0x15920Cu) { return; }
    }
    ctx->pc = 0x15920Cu;
label_15920c:
    // 0x15920c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15920cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159210: 0x52a0003f  beql        $s5, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x159210u;
    {
        const bool branch_taken_0x159210 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x159210) {
            ctx->pc = 0x159214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159210u;
            // 0x159214: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159310u;
            goto label_159310;
        }
    }
    ctx->pc = 0x159218u;
    // 0x159218: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x159218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15921c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159220: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x159224: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x159228: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x159228u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15922c: 0x26250268  addiu       $a1, $s1, 0x268
    ctx->pc = 0x15922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    // 0x159230: 0x0  nop
    ctx->pc = 0x159230u;
    // NOP
    // 0x159234: 0x1010  mfhi        $v0
    ctx->pc = 0x159234u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x159238: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x159238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x15923c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15923Cu;
    SET_GPR_U32(ctx, 31, 0x159244u);
    ctx->pc = 0x159240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15923Cu;
            // 0x159240: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159244u; }
        if (ctx->pc != 0x159244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159244u; }
        if (ctx->pc != 0x159244u) { return; }
    }
    ctx->pc = 0x159244u;
label_159244:
    // 0x159244: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x159244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x159248: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x159248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15924c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x159250: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
    // 0x159254: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x159254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x159258: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x159258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15925c: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x15925cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x159260: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x159260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    // 0x159264: 0xae2205e8  sw          $v0, 0x5E8($s1)
    ctx->pc = 0x159264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
    // 0x159268: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x159268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15926c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x15926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x159270: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x159270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x159274: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x159274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x159278: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x159278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15927c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15927cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x159280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x159280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x159284: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159288: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x159288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x15928c: 0x9242059c  lbu         $v0, 0x59C($s2)
    ctx->pc = 0x15928cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1436)));
    // 0x159290: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x159290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159294: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x159294u;
    {
        const bool branch_taken_0x159294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159294) {
            ctx->pc = 0x159298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159294u;
            // 0x159298: 0x87a3007e  lh          $v1, 0x7E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1592F4u;
            goto label_1592f4;
        }
    }
    ctx->pc = 0x15929Cu;
    // 0x15929c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x15929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1592a0: 0x52020011  beql        $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1592A0u;
    {
        const bool branch_taken_0x1592a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1592a0) {
            ctx->pc = 0x1592A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592A0u;
            // 0x1592a4: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1592E8u;
            goto label_1592e8;
        }
    }
    ctx->pc = 0x1592A8u;
    // 0x1592a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1592a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1592ac: 0x5202000a  beql        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1592ACu;
    {
        const bool branch_taken_0x1592ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1592ac) {
            ctx->pc = 0x1592B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592ACu;
            // 0x1592b0: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1592D8u;
            goto label_1592d8;
        }
    }
    ctx->pc = 0x1592B4u;
    // 0x1592b4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1592b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1592b8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1592B8u;
    {
        const bool branch_taken_0x1592b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1592b8) {
            ctx->pc = 0x1592BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592B8u;
            // 0x1592bc: 0x2404011e  addiu       $a0, $zero, 0x11E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1592C8u;
            goto label_1592c8;
        }
    }
    ctx->pc = 0x1592C0u;
    // 0x1592c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1592C0u;
    {
        const bool branch_taken_0x1592c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592c0) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592C8u;
label_1592c8:
    // 0x1592c8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1592C8u;
    SET_GPR_U32(ctx, 31, 0x1592D0u);
    ctx->pc = 0x1592CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592C8u;
            // 0x1592cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592D0u; }
        if (ctx->pc != 0x1592D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592D0u; }
        if (ctx->pc != 0x1592D0u) { return; }
    }
    ctx->pc = 0x1592D0u;
label_1592d0:
    // 0x1592d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1592D0u;
    {
        const bool branch_taken_0x1592d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592d0) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592D8u;
label_1592d8:
    // 0x1592d8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1592D8u;
    SET_GPR_U32(ctx, 31, 0x1592E0u);
    ctx->pc = 0x1592DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592D8u;
            // 0x1592dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592E0u; }
        if (ctx->pc != 0x1592E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592E0u; }
        if (ctx->pc != 0x1592E0u) { return; }
    }
    ctx->pc = 0x1592E0u;
label_1592e0:
    // 0x1592e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1592E0u;
    {
        const bool branch_taken_0x1592e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592e0) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x1592E8u;
label_1592e8:
    // 0x1592e8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1592E8u;
    SET_GPR_U32(ctx, 31, 0x1592F0u);
    ctx->pc = 0x1592ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592E8u;
            // 0x1592ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592F0u; }
        if (ctx->pc != 0x1592F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592F0u; }
        if (ctx->pc != 0x1592F0u) { return; }
    }
    ctx->pc = 0x1592F0u;
label_1592f0:
    // 0x1592f0: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x1592f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_1592f4:
    // 0x1592f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1592f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1592f8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1592f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1592fc: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159300: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x159300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159304: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x159304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159308: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x159308u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15930c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159310:
    // 0x159310: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x159310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159314: 0xc057208  jal         func_15C820
    ctx->pc = 0x159314u;
    SET_GPR_U32(ctx, 31, 0x15931Cu);
    ctx->pc = 0x159318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159314u;
            // 0x159318: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15931Cu; }
        if (ctx->pc != 0x15931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15931Cu; }
        if (ctx->pc != 0x15931Cu) { return; }
    }
    ctx->pc = 0x15931Cu;
label_15931c:
    // 0x15931c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15931cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159320:
    // 0x159320: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159324: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159328: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15932c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15932cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15933c: 0x3e00008  jr          $ra
    ctx->pc = 0x15933Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15933Cu;
            // 0x159340: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159344u;
    // 0x159344: 0x0  nop
    ctx->pc = 0x159344u;
    // NOP
    // 0x159348: 0x0  nop
    ctx->pc = 0x159348u;
    // NOP
    // 0x15934c: 0x0  nop
    ctx->pc = 0x15934cu;
    // NOP
label_159350:
    // 0x159350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159354: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x159354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15935c: 0xc054a10  jal         func_152840
    ctx->pc = 0x15935Cu;
    SET_GPR_U32(ctx, 31, 0x159364u);
    ctx->pc = 0x159360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15935Cu;
            // 0x159360: 0x2444ffea  addiu       $a0, $v0, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152840u;
    if (runtime->hasFunction(0x152840u)) {
        auto targetFn = runtime->lookupFunction(0x152840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159364u; }
        if (ctx->pc != 0x159364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152840_0x152840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159364u; }
        if (ctx->pc != 0x159364u) { return; }
    }
    ctx->pc = 0x159364u;
label_159364:
    // 0x159364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15936c: 0x3e00008  jr          $ra
    ctx->pc = 0x15936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15936Cu;
            // 0x159370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159374u;
    // 0x159374: 0x0  nop
    ctx->pc = 0x159374u;
    // NOP
    // 0x159378: 0x0  nop
    ctx->pc = 0x159378u;
    // NOP
    // 0x15937c: 0x0  nop
    ctx->pc = 0x15937cu;
    // NOP
label_159380:
    // 0x159380: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15938c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159390: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159394: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15939c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1593a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1593a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1593a4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1593a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1593a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593ac: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1593b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1593b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b4: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x1593b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x1593b8: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x1593b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x1593bc: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1593c0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1593c4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x1593C4u;
    SET_GPR_U32(ctx, 31, 0x1593CCu);
    ctx->pc = 0x1593C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593C4u;
            // 0x1593c8: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593CCu; }
        if (ctx->pc != 0x1593CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593CCu; }
        if (ctx->pc != 0x1593CCu) { return; }
    }
    ctx->pc = 0x1593CCu;
label_1593cc:
    // 0x1593cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1593CCu;
    {
        const bool branch_taken_0x1593cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1593cc) {
            ctx->pc = 0x1593DCu;
            goto label_1593dc;
        }
    }
    ctx->pc = 0x1593D4u;
    // 0x1593d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1593D4u;
    {
        const bool branch_taken_0x1593d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593D4u;
            // 0x1593d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593d4) {
            ctx->pc = 0x159498u;
            goto label_159498;
        }
    }
    ctx->pc = 0x1593DCu;
label_1593dc:
    // 0x1593dc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1593e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1593e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1593e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593e8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x1593ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1593ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1593f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593f4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1593F4u;
    SET_GPR_U32(ctx, 31, 0x1593FCu);
    ctx->pc = 0x1593F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593F4u;
            // 0x1593f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593FCu; }
        if (ctx->pc != 0x1593FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593FCu; }
        if (ctx->pc != 0x1593FCu) { return; }
    }
    ctx->pc = 0x1593FCu;
label_1593fc:
    // 0x1593fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1593fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159400: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x159400u;
    {
        const bool branch_taken_0x159400 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x159400) {
            ctx->pc = 0x159404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159400u;
            // 0x159404: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159488u;
            goto label_159488;
        }
    }
    ctx->pc = 0x159408u;
    // 0x159408: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15940c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x159410: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x159414: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159418: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x159418u;
    SET_GPR_U32(ctx, 31, 0x159420u);
    ctx->pc = 0x15941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159418u;
            // 0x15941c: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159420u; }
        if (ctx->pc != 0x159420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159420u; }
        if (ctx->pc != 0x159420u) { return; }
    }
    ctx->pc = 0x159420u;
label_159420:
    // 0x159420: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x159420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x159424: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x159424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x159428: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x159428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15942c: 0x2463e980  addiu       $v1, $v1, -0x1680
    ctx->pc = 0x15942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961536));
    // 0x159430: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159434: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x159434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x159438: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x159438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15943c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15943cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x159440: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x159440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x159444: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x159444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x159448: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159448u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15944c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x15944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x159450: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159454: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x159454u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159458: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15945c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x15945cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x159460: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159464: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x159464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x159468: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15946c: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x15946cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x159470: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x159470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159474: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159478: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x159478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15947c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15947cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159480: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x159480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159484: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159488:
    // 0x159488: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x159488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15948c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15948Cu;
    SET_GPR_U32(ctx, 31, 0x159494u);
    ctx->pc = 0x159490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15948Cu;
            // 0x159490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159494u; }
        if (ctx->pc != 0x159494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159494u; }
        if (ctx->pc != 0x159494u) { return; }
    }
    ctx->pc = 0x159494u;
label_159494:
    // 0x159494: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159498:
    // 0x159498: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15949c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15949cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1594a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1594a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1594a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1594a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1594a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1594a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1594ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1594acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1594b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1594b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1594b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1594B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594B4u;
            // 0x1594b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1594BCu;
    // 0x1594bc: 0x0  nop
    ctx->pc = 0x1594bcu;
    // NOP
label_1594c0:
    // 0x1594c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1594c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1594c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1594c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1594c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1594c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1594cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1594ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1594d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1594d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1594d4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1594d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1594d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1594dc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1594dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1594e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1594e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1594e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1594e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1594e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1594ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1594f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1594f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1594f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1594f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1594f8: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1594fc: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x159500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159504: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
    // 0x159508: 0xa7b100ae  sh          $s1, 0xAE($sp)
    ctx->pc = 0x159508u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 17));
    // 0x15950c: 0x84d00008  lh          $s0, 0x8($a2)
    ctx->pc = 0x15950cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159510: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x159510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x159514: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159514u;
    SET_GPR_U32(ctx, 31, 0x15951Cu);
    ctx->pc = 0x159518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159514u;
            // 0x159518: 0xa7b000ac  sh          $s0, 0xAC($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15951Cu; }
        if (ctx->pc != 0x15951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15951Cu; }
        if (ctx->pc != 0x15951Cu) { return; }
    }
    ctx->pc = 0x15951Cu;
label_15951c:
    // 0x15951c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15951Cu;
    {
        const bool branch_taken_0x15951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15951c) {
            ctx->pc = 0x15952Cu;
            goto label_15952c;
        }
    }
    ctx->pc = 0x159524u;
    // 0x159524: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x159524u;
    {
        const bool branch_taken_0x159524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159524u;
            // 0x159528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159524) {
            ctx->pc = 0x159754u;
            goto label_159754;
        }
    }
    ctx->pc = 0x15952Cu;
label_15952c:
    // 0x15952c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15952cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159530: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159538: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15953c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15953cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159540: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159544: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159544u;
    SET_GPR_U32(ctx, 31, 0x15954Cu);
    ctx->pc = 0x159548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159544u;
            // 0x159548: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15954Cu; }
        if (ctx->pc != 0x15954Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15954Cu; }
        if (ctx->pc != 0x15954Cu) { return; }
    }
    ctx->pc = 0x15954Cu;
label_15954c:
    // 0x15954c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15954cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159550: 0x52a00033  beql        $s5, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x159550u;
    {
        const bool branch_taken_0x159550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x159550) {
            ctx->pc = 0x159554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159550u;
            // 0x159554: 0x33c400ff  andi        $a0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159620u;
            goto label_159620;
        }
    }
    ctx->pc = 0x159558u;
    // 0x159558: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x159558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15955c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15955cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x159560: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x159564: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x159564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x159568: 0x2484e988  addiu       $a0, $a0, -0x1678
    ctx->pc = 0x159568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961544));
    // 0x15956c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x15956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x159570: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x159570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x159574: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x159574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x159578: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x159578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15957c: 0xae4600dc  sw          $a2, 0xDC($s2)
    ctx->pc = 0x15957cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 6));
    // 0x159580: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x159580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
    // 0x159584: 0xae4405e8  sw          $a0, 0x5E8($s2)
    ctx->pc = 0x159584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 4));
    // 0x159588: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x159588u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15958c: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x15958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x159590: 0xa244008c  sb          $a0, 0x8C($s2)
    ctx->pc = 0x159590u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x159594: 0x9265008c  lbu         $a1, 0x8C($s3)
    ctx->pc = 0x159594u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x159598: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x159598u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15959c: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x15959cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1595a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1595a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1595a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1595a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1595a8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1595A8u;
    {
        const bool branch_taken_0x1595a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1595ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1595A8u;
            // 0x1595ac: 0xa244008c  sb          $a0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595a8) {
            ctx->pc = 0x159618u;
            goto label_159618;
        }
    }
    ctx->pc = 0x1595B0u;
    // 0x1595b0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1595b4: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1595B4u;
    {
        const bool branch_taken_0x1595b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1595b4) {
            ctx->pc = 0x1595B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1595B4u;
            // 0x1595b8: 0x9262059c  lbu         $v0, 0x59C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159600u;
            goto label_159600;
        }
    }
    ctx->pc = 0x1595BCu;
    // 0x1595bc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1595c0: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1595C0u;
    {
        const bool branch_taken_0x1595c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1595c0) {
            ctx->pc = 0x1595C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1595C0u;
            // 0x1595c4: 0x641e0016  daddiu      $fp, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15961Cu;
            goto label_15961c;
        }
    }
    ctx->pc = 0x1595C8u;
    // 0x1595c8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1595cc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1595CCu;
    {
        const bool branch_taken_0x1595cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1595cc) {
            ctx->pc = 0x1595D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1595CCu;
            // 0x1595d0: 0x9262059c  lbu         $v0, 0x59C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1595DCu;
            goto label_1595dc;
        }
    }
    ctx->pc = 0x1595D4u;
    // 0x1595d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1595D4u;
    {
        const bool branch_taken_0x1595d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1595d4) {
            ctx->pc = 0x15961Cu;
            goto label_15961c;
        }
    }
    ctx->pc = 0x1595DCu;
label_1595dc:
    // 0x1595dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1595dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1595e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1595E0u;
    {
        const bool branch_taken_0x1595e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1595e0) {
            ctx->pc = 0x1595F4u;
            goto label_1595f4;
        }
    }
    ctx->pc = 0x1595E8u;
    // 0x1595e8: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x1595ec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1595ECu;
    SET_GPR_U32(ctx, 31, 0x1595F4u);
    ctx->pc = 0x1595F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1595ECu;
            // 0x1595f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595F4u; }
        if (ctx->pc != 0x1595F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595F4u; }
        if (ctx->pc != 0x1595F4u) { return; }
    }
    ctx->pc = 0x1595F4u;
label_1595f4:
    // 0x1595f4: 0x641e0016  daddiu      $fp, $zero, 0x16
    ctx->pc = 0x1595f4u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
    // 0x1595f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1595F8u;
    {
        const bool branch_taken_0x1595f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1595f8) {
            ctx->pc = 0x15961Cu;
            goto label_15961c;
        }
    }
    ctx->pc = 0x159600u;
label_159600:
    // 0x159600: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x159600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159604: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x159604u;
    {
        const bool branch_taken_0x159604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159604) {
            ctx->pc = 0x159608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159604u;
            // 0x159608: 0x641e0017  daddiu      $fp, $zero, 0x17 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15961Cu;
            goto label_15961c;
        }
    }
    ctx->pc = 0x15960Cu;
    // 0x15960c: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x15960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x159610: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x159610u;
    SET_GPR_U32(ctx, 31, 0x159618u);
    ctx->pc = 0x159614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159610u;
            // 0x159614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159618u; }
        if (ctx->pc != 0x159618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159618u; }
        if (ctx->pc != 0x159618u) { return; }
    }
    ctx->pc = 0x159618u;
label_159618:
    // 0x159618: 0x641e0017  daddiu      $fp, $zero, 0x17
    ctx->pc = 0x159618u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
label_15961c:
    // 0x15961c: 0x33c400ff  andi        $a0, $fp, 0xFF
    ctx->pc = 0x15961cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_159620:
    // 0x159620: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x159620u;
    SET_GPR_U32(ctx, 31, 0x159628u);
    ctx->pc = 0x159624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159620u;
            // 0x159624: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159628u; }
        if (ctx->pc != 0x159628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159628u; }
        if (ctx->pc != 0x159628u) { return; }
    }
    ctx->pc = 0x159628u;
label_159628:
    // 0x159628: 0x87a300ae  lh          $v1, 0xAE($sp)
    ctx->pc = 0x159628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x15962c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x159630: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x159630u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159634: 0x87a300ac  lh          $v1, 0xAC($sp)
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x159638: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x159638u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15963c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x15963cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x159640: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x159640u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x159644: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x159644u;
    SET_GPR_U32(ctx, 31, 0x15964Cu);
    ctx->pc = 0x159648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159644u;
            // 0x159648: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15964Cu; }
        if (ctx->pc != 0x15964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15964Cu; }
        if (ctx->pc != 0x15964Cu) { return; }
    }
    ctx->pc = 0x15964Cu;
label_15964c:
    // 0x15964c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x15964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x159650: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x159650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159654: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x159654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x159658: 0x2842001d  slti        $v0, $v0, 0x1D
    ctx->pc = 0x159658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x15965c: 0xa64300f2  sh          $v1, 0xF2($s2)
    ctx->pc = 0x15965cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x159660: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159660u;
            // 0x159664: 0xa64005e0  sh          $zero, 0x5E0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159660) {
            ctx->pc = 0x159730u;
            goto label_159730;
        }
    }
    ctx->pc = 0x159668u;
    // 0x159668: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15966c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x15966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159674: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x159678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15967c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15967cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159680: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159680u;
    SET_GPR_U32(ctx, 31, 0x159688u);
    ctx->pc = 0x159684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159680u;
            // 0x159684: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159688u; }
        if (ctx->pc != 0x159688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159688u; }
        if (ctx->pc != 0x159688u) { return; }
    }
    ctx->pc = 0x159688u;
label_159688:
    // 0x159688: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15968c: 0x52800025  beql        $s4, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x15968Cu;
    {
        const bool branch_taken_0x15968c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15968c) {
            ctx->pc = 0x159690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15968Cu;
            // 0x159690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159724u;
            goto label_159724;
        }
    }
    ctx->pc = 0x159694u;
    // 0x159694: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x159698: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x159698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15969c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15969Cu;
    SET_GPR_U32(ctx, 31, 0x1596A4u);
    ctx->pc = 0x1596A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15969Cu;
            // 0x1596a0: 0x26450268  addiu       $a1, $s2, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596A4u; }
        if (ctx->pc != 0x1596A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596A4u; }
        if (ctx->pc != 0x1596A4u) { return; }
    }
    ctx->pc = 0x1596A4u;
label_1596a4:
    // 0x1596a4: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x1596a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1596a8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1596a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1596ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1596acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1596b0: 0x2463e988  addiu       $v1, $v1, -0x1678
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961544));
    // 0x1596b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1596b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1596b8: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x1596b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1596bc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1596bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1596c0: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x1596c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
    // 0x1596c4: 0xae4400dc  sw          $a0, 0xDC($s2)
    ctx->pc = 0x1596c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
    // 0x1596c8: 0xae4305e8  sw          $v1, 0x5E8($s2)
    ctx->pc = 0x1596c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1512), GPR_U32(ctx, 3));
    // 0x1596cc: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x1596ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1596d0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1596d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1596d4: 0xa243008c  sb          $v1, 0x8C($s2)
    ctx->pc = 0x1596d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1596d8: 0x9264008c  lbu         $a0, 0x8C($s3)
    ctx->pc = 0x1596d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1596dc: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x1596dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1596e0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1596e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1596e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1596e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1596e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1596ec: 0xa243008c  sb          $v1, 0x8C($s2)
    ctx->pc = 0x1596ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1596f0: 0x87a300ae  lh          $v1, 0xAE($sp)
    ctx->pc = 0x1596f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x1596f4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1596f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1596f8: 0x87a300ac  lh          $v1, 0xAC($sp)
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1596fc: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1596fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159700: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x159700u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x159704: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x159704u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x159708: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x159708u;
    SET_GPR_U32(ctx, 31, 0x159710u);
    ctx->pc = 0x15970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159708u;
            // 0x15970c: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159710u; }
        if (ctx->pc != 0x159710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159710u; }
        if (ctx->pc != 0x159710u) { return; }
    }
    ctx->pc = 0x159710u;
label_159710:
    // 0x159710: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x159710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x159714: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159718: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x159718u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15971c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15971Cu;
    {
        const bool branch_taken_0x15971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15971Cu;
            // 0x159720: 0xa64005e0  sh          $zero, 0x5E0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15971c) {
            ctx->pc = 0x159730u;
            goto label_159730;
        }
    }
    ctx->pc = 0x159724u;
label_159724:
    // 0x159724: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x159724u;
    SET_GPR_U32(ctx, 31, 0x15972Cu);
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15972Cu; }
        if (ctx->pc != 0x15972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15972Cu; }
        if (ctx->pc != 0x15972Cu) { return; }
    }
    ctx->pc = 0x15972Cu;
label_15972c:
    // 0x15972c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159730:
    // 0x159730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x159730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159738: 0xc057208  jal         func_15C820
    ctx->pc = 0x159738u;
    SET_GPR_U32(ctx, 31, 0x159740u);
    ctx->pc = 0x15973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159738u;
            // 0x15973c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159740u; }
        if (ctx->pc != 0x159740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159740u; }
        if (ctx->pc != 0x159740u) { return; }
    }
    ctx->pc = 0x159740u;
label_159740:
    // 0x159740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159748: 0xc057208  jal         func_15C820
    ctx->pc = 0x159748u;
    SET_GPR_U32(ctx, 31, 0x159750u);
    ctx->pc = 0x15974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159748u;
            // 0x15974c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159750u; }
        if (ctx->pc != 0x159750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159750u; }
        if (ctx->pc != 0x159750u) { return; }
    }
    ctx->pc = 0x159750u;
label_159750:
    // 0x159750: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x159750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159754:
    // 0x159754: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x159754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159758: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x159758u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15975c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15975cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159760: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x159760u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159764: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159768: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15976c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15976cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15977c: 0x3e00008  jr          $ra
    ctx->pc = 0x15977Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15977Cu;
            // 0x159780: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159784u;
    // 0x159784: 0x0  nop
    ctx->pc = 0x159784u;
    // NOP
    // 0x159788: 0x0  nop
    ctx->pc = 0x159788u;
    // NOP
    // 0x15978c: 0x0  nop
    ctx->pc = 0x15978cu;
    // NOP
label_159790:
    // 0x159790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159794: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x159794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x159798: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15979c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1597a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1597a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1597a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1597a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1597a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1597a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1597ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1597acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1597b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1597b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1597b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1597b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597b8: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x1597b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x1597bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1597bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1597c0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1597C0u;
    {
        const bool branch_taken_0x1597c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597C0u;
            // 0x1597c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597c0) {
            ctx->pc = 0x159900u;
            goto label_159900;
        }
    }
    ctx->pc = 0x1597C8u;
    // 0x1597c8: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1597cc: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x1597ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x1597d0: 0x84d40000  lh          $s4, 0x0($a2)
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1597d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1597d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597d8: 0xa7b4007e  sh          $s4, 0x7E($sp)
    ctx->pc = 0x1597d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 20));
    // 0x1597dc: 0x84d30008  lh          $s3, 0x8($a2)
    ctx->pc = 0x1597dcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1597e0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1597e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1597e4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x1597E4u;
    SET_GPR_U32(ctx, 31, 0x1597ECu);
    ctx->pc = 0x1597E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1597E4u;
            // 0x1597e8: 0xa7b3007c  sh          $s3, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597ECu; }
        if (ctx->pc != 0x1597ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597ECu; }
        if (ctx->pc != 0x1597ECu) { return; }
    }
    ctx->pc = 0x1597ECu;
label_1597ec:
    // 0x1597ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1597ECu;
    {
        const bool branch_taken_0x1597ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1597ec) {
            ctx->pc = 0x1597FCu;
            goto label_1597fc;
        }
    }
    ctx->pc = 0x1597F4u;
    // 0x1597f4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1597F4u;
    {
        const bool branch_taken_0x1597f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597F4u;
            // 0x1597f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f4) {
            ctx->pc = 0x159904u;
            goto label_159904;
        }
    }
    ctx->pc = 0x1597FCu;
label_1597fc:
    // 0x1597fc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1597fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159808: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15980c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15980cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159814: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159814u;
    SET_GPR_U32(ctx, 31, 0x15981Cu);
    ctx->pc = 0x159818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159814u;
            // 0x159818: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15981Cu; }
        if (ctx->pc != 0x15981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15981Cu; }
        if (ctx->pc != 0x15981Cu) { return; }
    }
    ctx->pc = 0x15981Cu;
label_15981c:
    // 0x15981c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15981cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159820: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x159820u;
    {
        const bool branch_taken_0x159820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x159820) {
            ctx->pc = 0x159824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159820u;
            // 0x159824: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1598ECu;
            goto label_1598ec;
        }
    }
    ctx->pc = 0x159828u;
    // 0x159828: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x159828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15982c: 0x2482ffe1  addiu       $v0, $a0, -0x1F
    ctx->pc = 0x15982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
    // 0x159830: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x159830u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x159834: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x159834u;
    {
        const bool branch_taken_0x159834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159834u;
            // 0x159838: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159834) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x15983Cu;
    // 0x15983c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x15983cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x159840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159844: 0x2463d300  addiu       $v1, $v1, -0x2D00
    ctx->pc = 0x159844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955776));
    // 0x159848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15984c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159850: 0x400008  jr          $v0
    ctx->pc = 0x159850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159858u: goto label_159858;
            case 0x159864u: goto label_159864;
            case 0x159870u: goto label_159870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159858u;
label_159858:
    // 0x159858: 0x2482fffb  addiu       $v0, $a0, -0x5
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x15985c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15985Cu;
    {
        const bool branch_taken_0x15985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15985Cu;
            // 0x159860: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15985c) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159864u;
label_159864:
    // 0x159864: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x159868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x159868u;
    {
        const bool branch_taken_0x159868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159868u;
            // 0x15986c: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159868) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159870u;
label_159870:
    // 0x159870: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x159874: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x159874u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_159878:
    // 0x159878: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x159878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15987c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15987Cu;
    SET_GPR_U32(ctx, 31, 0x159884u);
    ctx->pc = 0x159880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15987Cu;
            // 0x159880: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159884u; }
        if (ctx->pc != 0x159884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159884u; }
        if (ctx->pc != 0x159884u) { return; }
    }
    ctx->pc = 0x159884u;
label_159884:
    // 0x159884: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x159884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x159888: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x159888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x15988c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15988cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x159890: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x159890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
    // 0x159894: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159898: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x159898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15989c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15989cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1598a0: 0xae2500dc  sw          $a1, 0xDC($s1)
    ctx->pc = 0x1598a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 5));
    // 0x1598a4: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x1598a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x1598a8: 0xae2305e8  sw          $v1, 0x5E8($s1)
    ctx->pc = 0x1598a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 3));
    // 0x1598ac: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x1598acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1598b0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1598b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1598b4: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x1598b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1598b8: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x1598b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1598bc: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x1598bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1598c0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1598c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1598c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1598c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1598c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1598c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1598cc: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x1598ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1598d0: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x1598d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x1598d4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1598d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1598d8: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1598dc: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x1598dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1598e0: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x1598e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x1598e4: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1598e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1598e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1598e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1598ec:
    // 0x1598ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1598ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598f0: 0xc057208  jal         func_15C820
    ctx->pc = 0x1598F0u;
    SET_GPR_U32(ctx, 31, 0x1598F8u);
    ctx->pc = 0x1598F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1598F0u;
            // 0x1598f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598F8u; }
        if (ctx->pc != 0x1598F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598F8u; }
        if (ctx->pc != 0x1598F8u) { return; }
    }
    ctx->pc = 0x1598F8u;
label_1598f8:
    // 0x1598f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1598F8u;
    {
        const bool branch_taken_0x1598f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598F8u;
            // 0x1598fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f8) {
            ctx->pc = 0x159904u;
            goto label_159904;
        }
    }
    ctx->pc = 0x159900u;
label_159900:
    // 0x159900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159904:
    // 0x159904: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159908: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15990c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15990cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159910: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15991c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159920: 0x3e00008  jr          $ra
    ctx->pc = 0x159920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159920u;
            // 0x159924: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159928u;
    // 0x159928: 0x0  nop
    ctx->pc = 0x159928u;
    // NOP
    // 0x15992c: 0x0  nop
    ctx->pc = 0x15992cu;
    // NOP
label_159930:
    // 0x159930: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15993c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159940: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159944: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15994c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159954: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x159954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159958: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15995c: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15995cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159964: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x159964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x159968: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x159968u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x15996c: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15996cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159970: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159974: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159974u;
    SET_GPR_U32(ctx, 31, 0x15997Cu);
    ctx->pc = 0x159978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159974u;
            // 0x159978: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15997Cu; }
        if (ctx->pc != 0x15997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15997Cu; }
        if (ctx->pc != 0x15997Cu) { return; }
    }
    ctx->pc = 0x15997Cu;
label_15997c:
    // 0x15997c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15997Cu;
    {
        const bool branch_taken_0x15997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15997c) {
            ctx->pc = 0x15998Cu;
            goto label_15998c;
        }
    }
    ctx->pc = 0x159984u;
    // 0x159984: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x159984u;
    {
        const bool branch_taken_0x159984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159984u;
            // 0x159988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159984) {
            ctx->pc = 0x159A48u;
            goto label_159a48;
        }
    }
    ctx->pc = 0x15998Cu;
label_15998c:
    // 0x15998c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15998cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159998: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15999c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15999cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1599a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599a4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1599A4u;
    SET_GPR_U32(ctx, 31, 0x1599ACu);
    ctx->pc = 0x1599A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599A4u;
            // 0x1599a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599ACu; }
        if (ctx->pc != 0x1599ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599ACu; }
        if (ctx->pc != 0x1599ACu) { return; }
    }
    ctx->pc = 0x1599ACu;
label_1599ac:
    // 0x1599ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1599acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599b0: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1599B0u;
    {
        const bool branch_taken_0x1599b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1599b0) {
            ctx->pc = 0x1599B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1599B0u;
            // 0x1599b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159A38u;
            goto label_159a38;
        }
    }
    ctx->pc = 0x1599B8u;
    // 0x1599b8: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x1599b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1599bc: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1599bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1599c0: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x1599c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1599c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1599c8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x1599C8u;
    SET_GPR_U32(ctx, 31, 0x1599D0u);
    ctx->pc = 0x1599CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599C8u;
            // 0x1599cc: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599D0u; }
        if (ctx->pc != 0x1599D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599D0u; }
        if (ctx->pc != 0x1599D0u) { return; }
    }
    ctx->pc = 0x1599D0u;
label_1599d0:
    // 0x1599d0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x1599d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1599d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1599d8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1599dc: 0x2463e998  addiu       $v1, $v1, -0x1668
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961560));
    // 0x1599e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1599e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1599e4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x1599e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1599e8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1599e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1599ec: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1599ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1599f0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x1599f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x1599f4: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x1599f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x1599f8: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x1599f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1599fc: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1599fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x159a00: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159a04: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x159a04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159a08: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159a08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159a0c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x159a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x159a10: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159a14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x159a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x159a18: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159a1c: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x159a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x159a20: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x159a20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159a24: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159a28: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x159a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159a2c: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x159a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159a30: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x159a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159a34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159a38:
    // 0x159a38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x159a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a3c: 0xc057208  jal         func_15C820
    ctx->pc = 0x159A3Cu;
    SET_GPR_U32(ctx, 31, 0x159A44u);
    ctx->pc = 0x159A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A3Cu;
            // 0x159a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A44u; }
        if (ctx->pc != 0x159A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A44u; }
        if (ctx->pc != 0x159A44u) { return; }
    }
    ctx->pc = 0x159A44u;
label_159a44:
    // 0x159a44: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x159a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159a48:
    // 0x159a48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159a4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a64: 0x3e00008  jr          $ra
    ctx->pc = 0x159A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A64u;
            // 0x159a68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159A6Cu;
    // 0x159a6c: 0x0  nop
    ctx->pc = 0x159a6cu;
    // NOP
label_159a70:
    // 0x159a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159a74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159a78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159a7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159a80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159a88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159a94: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a9c: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x159a9cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159aa4: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x159aa8: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x159aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x159aac: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x159aacu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159ab0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x159ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159ab4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159AB4u;
    SET_GPR_U32(ctx, 31, 0x159ABCu);
    ctx->pc = 0x159AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159AB4u;
            // 0x159ab8: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ABCu; }
        if (ctx->pc != 0x159ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ABCu; }
        if (ctx->pc != 0x159ABCu) { return; }
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159ABCu;
    {
        const bool branch_taken_0x159abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159abc) {
            ctx->pc = 0x159ACCu;
            goto label_159acc;
        }
    }
    ctx->pc = 0x159AC4u;
    // 0x159ac4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159AC4u;
    {
        const bool branch_taken_0x159ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159AC4u;
            // 0x159ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ac4) {
            ctx->pc = 0x159C2Cu;
            goto label_159c2c;
        }
    }
    ctx->pc = 0x159ACCu;
label_159acc:
    // 0x159acc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ad8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x159adc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ae4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159AE4u;
    SET_GPR_U32(ctx, 31, 0x159AECu);
    ctx->pc = 0x159AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159AE4u;
            // 0x159ae8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AECu; }
        if (ctx->pc != 0x159AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AECu; }
        if (ctx->pc != 0x159AECu) { return; }
    }
    ctx->pc = 0x159AECu;
label_159aec:
    // 0x159aec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159af0: 0x5280004a  beql        $s4, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x159AF0u;
    {
        const bool branch_taken_0x159af0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x159af0) {
            ctx->pc = 0x159AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159AF0u;
            // 0x159af4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159C1Cu;
            goto label_159c1c;
        }
    }
    ctx->pc = 0x159AF8u;
    // 0x159af8: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x159afc: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x159afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x159b00: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x159B00u;
    {
        const bool branch_taken_0x159b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B00u;
            // 0x159b04: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b00) {
            ctx->pc = 0x159B7Cu;
            goto label_159b7c;
        }
    }
    ctx->pc = 0x159B08u;
    // 0x159b08: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x159b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x159b0c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x159B0Cu;
    {
        const bool branch_taken_0x159b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b0c) {
            ctx->pc = 0x159B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B0Cu;
            // 0x159b10: 0x2462ffd5  addiu       $v0, $v1, -0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967253));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159B68u;
            goto label_159b68;
        }
    }
    ctx->pc = 0x159B14u;
    // 0x159b14: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x159b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x159b18: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x159B18u;
    {
        const bool branch_taken_0x159b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b18) {
            ctx->pc = 0x159B64u;
            goto label_159b64;
        }
    }
    ctx->pc = 0x159B20u;
    // 0x159b20: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x159b24: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x159B24u;
    {
        const bool branch_taken_0x159b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b24) {
            ctx->pc = 0x159B64u;
            goto label_159b64;
        }
    }
    ctx->pc = 0x159B2Cu;
    // 0x159b2c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x159b30: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159B30u;
    {
        const bool branch_taken_0x159b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b30) {
            ctx->pc = 0x159B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B30u;
            // 0x159b34: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159B5Cu;
            goto label_159b5c;
        }
    }
    ctx->pc = 0x159B38u;
    // 0x159b38: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x159b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x159b3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159B3Cu;
    {
        const bool branch_taken_0x159b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b3c) {
            ctx->pc = 0x159B58u;
            goto label_159b58;
        }
    }
    ctx->pc = 0x159B44u;
    // 0x159b44: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x159b48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159B48u;
    {
        const bool branch_taken_0x159b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b48) {
            ctx->pc = 0x159B58u;
            goto label_159b58;
        }
    }
    ctx->pc = 0x159B50u;
    // 0x159b50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x159B50u;
    {
        const bool branch_taken_0x159b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B50u;
            // 0x159b54: 0x64040027  daddiu      $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)39);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b50) {
            ctx->pc = 0x159B8Cu;
            goto label_159b8c;
        }
    }
    ctx->pc = 0x159B58u;
label_159b58:
    // 0x159b58: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x159b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_159b5c:
    // 0x159b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159B5Cu;
    {
        const bool branch_taken_0x159b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B5Cu;
            // 0x159b60: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b5c) {
            ctx->pc = 0x159B8Cu;
            goto label_159b8c;
        }
    }
    ctx->pc = 0x159B64u;
label_159b64:
    // 0x159b64: 0x2462ffd5  addiu       $v0, $v1, -0x2B
    ctx->pc = 0x159b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967253));
label_159b68:
    // 0x159b68: 0x92030298  lbu         $v1, 0x298($s0)
    ctx->pc = 0x159b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x159b6c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159b70: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x159b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159B74u;
    {
        const bool branch_taken_0x159b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B74u;
            // 0x159b78: 0xa2020298  sb          $v0, 0x298($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b74) {
            ctx->pc = 0x159B8Cu;
            goto label_159b8c;
        }
    }
    ctx->pc = 0x159B7Cu;
label_159b7c:
    // 0x159b7c: 0x92020298  lbu         $v0, 0x298($s0)
    ctx->pc = 0x159b7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x159b80: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x159b84: 0xa2020298  sb          $v0, 0x298($s0)
    ctx->pc = 0x159b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 2));
    // 0x159b88: 0x64040027  daddiu      $a0, $zero, 0x27
    ctx->pc = 0x159b88u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)39);
label_159b8c:
    // 0x159b8c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159b90: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x159B90u;
    SET_GPR_U32(ctx, 31, 0x159B98u);
    ctx->pc = 0x159B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159B90u;
            // 0x159b94: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B98u; }
        if (ctx->pc != 0x159B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B98u; }
        if (ctx->pc != 0x159B98u) { return; }
    }
    ctx->pc = 0x159B98u;
label_159b98:
    // 0x159b98: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x159b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x159b9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x159ba0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x159ba4: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x159ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x159ba8: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x159ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x159bac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x159bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x159bb0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x159bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x159bb4: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x159bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x159bb8: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x159bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x159bbc: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x159bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159bc0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x159bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x159bc4: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x159bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x159bc8: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x159bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159bcc: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x159bccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159bd0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x159bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x159bd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x159bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x159bd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159bdc: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x159bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x159be0: 0x9222059c  lbu         $v0, 0x59C($s1)
    ctx->pc = 0x159be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1436)));
    // 0x159be4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x159be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159be8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x159BE8u;
    {
        const bool branch_taken_0x159be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159be8) {
            ctx->pc = 0x159BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BE8u;
            // 0x159bec: 0x87a3007e  lh          $v1, 0x7E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159C00u;
            goto label_159c00;
        }
    }
    ctx->pc = 0x159BF0u;
    // 0x159bf0: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x159bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x159bf4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x159BF4u;
    SET_GPR_U32(ctx, 31, 0x159BFCu);
    ctx->pc = 0x159BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159BF4u;
            // 0x159bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BFCu; }
        if (ctx->pc != 0x159BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BFCu; }
        if (ctx->pc != 0x159BFCu) { return; }
    }
    ctx->pc = 0x159BFCu;
label_159bfc:
    // 0x159bfc: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x159bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_159c00:
    // 0x159c00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159c04: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x159c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159c08: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159c0c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x159c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159c10: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x159c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159c14: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x159c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159c18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159c1c:
    // 0x159c1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x159c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c20: 0xc057208  jal         func_15C820
    ctx->pc = 0x159C20u;
    SET_GPR_U32(ctx, 31, 0x159C28u);
    ctx->pc = 0x159C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C20u;
            // 0x159c24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C28u; }
        if (ctx->pc != 0x159C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C28u; }
        if (ctx->pc != 0x159C28u) { return; }
    }
    ctx->pc = 0x159C28u;
label_159c28:
    // 0x159c28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x159c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159c2c:
    // 0x159c2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159c30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c48: 0x3e00008  jr          $ra
    ctx->pc = 0x159C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C48u;
            // 0x159c4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159C50u;
label_159c50:
    // 0x159c50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159c54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159c58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159c5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159c60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159c60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159c74: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159c78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c7c: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c84: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x159c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x159c88: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x159c88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x159c8c: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x159c8cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159c90: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159c94: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159C94u;
    SET_GPR_U32(ctx, 31, 0x159C9Cu);
    ctx->pc = 0x159C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C94u;
            // 0x159c98: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C9Cu; }
        if (ctx->pc != 0x159C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C9Cu; }
        if (ctx->pc != 0x159C9Cu) { return; }
    }
    ctx->pc = 0x159C9Cu;
label_159c9c:
    // 0x159c9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159C9Cu;
    {
        const bool branch_taken_0x159c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159c9c) {
            ctx->pc = 0x159CACu;
            goto label_159cac;
        }
    }
    ctx->pc = 0x159CA4u;
    // 0x159ca4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x159CA4u;
    {
        const bool branch_taken_0x159ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CA4u;
            // 0x159ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ca4) {
            ctx->pc = 0x159D8Cu;
            goto label_159d8c;
        }
    }
    ctx->pc = 0x159CACu;
label_159cac:
    // 0x159cac: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cb8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x159cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159CC4u;
    SET_GPR_U32(ctx, 31, 0x159CCCu);
    ctx->pc = 0x159CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159CC4u;
            // 0x159cc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CCCu; }
        if (ctx->pc != 0x159CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CCCu; }
        if (ctx->pc != 0x159CCCu) { return; }
    }
    ctx->pc = 0x159CCCu;
label_159ccc:
    // 0x159ccc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cd0: 0x5280002a  beql        $s4, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x159CD0u;
    {
        const bool branch_taken_0x159cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x159cd0) {
            ctx->pc = 0x159CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159CD0u;
            // 0x159cd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159D7Cu;
            goto label_159d7c;
        }
    }
    ctx->pc = 0x159CD8u;
    // 0x159cd8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x159cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x159cdc: 0x28410052  slti        $at, $v0, 0x52
    ctx->pc = 0x159cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)82) ? 1 : 0);
    // 0x159ce0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x159CE0u;
    {
        const bool branch_taken_0x159ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CE0u;
            // 0x159ce4: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce0) {
            ctx->pc = 0x159CF4u;
            goto label_159cf4;
        }
    }
    ctx->pc = 0x159CE8u;
    // 0x159ce8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x159ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x159cec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159CECu;
    {
        const bool branch_taken_0x159cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CECu;
            // 0x159cf0: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cec) {
            ctx->pc = 0x159D08u;
            goto label_159d08;
        }
    }
    ctx->pc = 0x159CF4u;
label_159cf4:
    // 0x159cf4: 0x92030298  lbu         $v1, 0x298($s0)
    ctx->pc = 0x159cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x159cf8: 0x2442ffd7  addiu       $v0, $v0, -0x29
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967255));
    // 0x159cfc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159d00: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x159d04: 0xa2020298  sb          $v0, 0x298($s0)
    ctx->pc = 0x159d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 2));
label_159d08:
    // 0x159d08: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159d0c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x159D0Cu;
    SET_GPR_U32(ctx, 31, 0x159D14u);
    ctx->pc = 0x159D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D0Cu;
            // 0x159d10: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D14u; }
        if (ctx->pc != 0x159D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D14u; }
        if (ctx->pc != 0x159D14u) { return; }
    }
    ctx->pc = 0x159D14u;
label_159d14:
    // 0x159d14: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x159d18: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x159d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x159d1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x159d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x159d20: 0x2463e9a8  addiu       $v1, $v1, -0x1658
    ctx->pc = 0x159d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961576));
    // 0x159d24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159d28: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x159d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x159d2c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x159d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x159d30: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x159d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x159d34: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x159d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x159d38: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x159d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x159d3c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159d40: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x159d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x159d44: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159d48: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x159d48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159d4c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159d4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159d50: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x159d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x159d54: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159d58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x159d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x159d5c: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159d60: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x159d64: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x159d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159d68: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159d6c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x159d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159d70: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x159d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159d74: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x159d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159d78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159d7c:
    // 0x159d7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x159d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d80: 0xc057208  jal         func_15C820
    ctx->pc = 0x159D80u;
    SET_GPR_U32(ctx, 31, 0x159D88u);
    ctx->pc = 0x159D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D80u;
            // 0x159d84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D88u; }
        if (ctx->pc != 0x159D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D88u; }
        if (ctx->pc != 0x159D88u) { return; }
    }
    ctx->pc = 0x159D88u;
label_159d88:
    // 0x159d88: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x159d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159d8c:
    // 0x159d8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159d90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159d90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159d94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159d98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159d9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159da8: 0x3e00008  jr          $ra
    ctx->pc = 0x159DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159DA8u;
            // 0x159dac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159DB0u;
label_159db0:
    // 0x159db0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159db4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x159db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x159db8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159dbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159dc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x159dc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159dd4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159dd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ddc: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x159ddcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159de4: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x159de8: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x159de8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x159dec: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159df0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159df4: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x159DF4u;
    SET_GPR_U32(ctx, 31, 0x159DFCu);
    ctx->pc = 0x159DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159DF4u;
            // 0x159df8: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DFCu; }
        if (ctx->pc != 0x159DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DFCu; }
        if (ctx->pc != 0x159DFCu) { return; }
    }
    ctx->pc = 0x159DFCu;
label_159dfc:
    // 0x159dfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159DFCu;
    {
        const bool branch_taken_0x159dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159dfc) {
            ctx->pc = 0x159E0Cu;
            goto label_159e0c;
        }
    }
    ctx->pc = 0x159E04u;
    // 0x159e04: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x159E04u;
    {
        const bool branch_taken_0x159e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E04u;
            // 0x159e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e04) {
            ctx->pc = 0x159EC8u;
            goto label_159ec8;
        }
    }
    ctx->pc = 0x159E0Cu;
label_159e0c:
    // 0x159e0c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e18: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x159e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e24: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159E24u;
    SET_GPR_U32(ctx, 31, 0x159E2Cu);
    ctx->pc = 0x159E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E24u;
            // 0x159e28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E2Cu; }
        if (ctx->pc != 0x159E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E2Cu; }
        if (ctx->pc != 0x159E2Cu) { return; }
    }
    ctx->pc = 0x159E2Cu;
label_159e2c:
    // 0x159e2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e30: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x159E30u;
    {
        const bool branch_taken_0x159e30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x159e30) {
            ctx->pc = 0x159E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159E30u;
            // 0x159e34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159EB8u;
            goto label_159eb8;
        }
    }
    ctx->pc = 0x159E38u;
    // 0x159e38: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x159e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x159e3c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x159e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x159e40: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x159e44: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159e48: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x159E48u;
    SET_GPR_U32(ctx, 31, 0x159E50u);
    ctx->pc = 0x159E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E48u;
            // 0x159e4c: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E50u; }
        if (ctx->pc != 0x159E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E50u; }
        if (ctx->pc != 0x159E50u) { return; }
    }
    ctx->pc = 0x159E50u;
label_159e50:
    // 0x159e50: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x159e54: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x159e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x159e58: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x159e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x159e5c: 0x2463e9b0  addiu       $v1, $v1, -0x1650
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
    // 0x159e60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159e64: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x159e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x159e68: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x159e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x159e6c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x159e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x159e70: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x159e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x159e74: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x159e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x159e78: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159e7c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x159e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x159e80: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159e84: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x159e84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x159e88: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x159e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x159e8c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x159e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x159e90: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x159e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x159e94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x159e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x159e98: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x159e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x159e9c: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x159e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x159ea0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x159ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x159ea4: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x159ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159ea8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x159ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x159eac: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x159eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159eb0: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x159eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x159eb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159eb8:
    // 0x159eb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x159eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ebc: 0xc057208  jal         func_15C820
    ctx->pc = 0x159EBCu;
    SET_GPR_U32(ctx, 31, 0x159EC4u);
    ctx->pc = 0x159EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159EBCu;
            // 0x159ec0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EC4u; }
        if (ctx->pc != 0x159EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EC4u; }
        if (ctx->pc != 0x159EC4u) { return; }
    }
    ctx->pc = 0x159EC4u;
label_159ec4:
    // 0x159ec4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x159ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159ec8:
    // 0x159ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x159ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x159EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159EE4u;
            // 0x159ee8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159EECu;
    // 0x159eec: 0x0  nop
    ctx->pc = 0x159eecu;
    // NOP
label_159ef0:
    // 0x159ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159ef4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x159ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x159ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159f04: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x159f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x159f08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x159f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x159f0c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x159F0Cu;
    {
        const bool branch_taken_0x159f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f0c) {
            ctx->pc = 0x159F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F0Cu;
            // 0x159f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F8Cu;
            goto label_159f8c;
        }
    }
    ctx->pc = 0x159F14u;
    // 0x159f14: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159f18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f1c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f24: 0x24c6c6f0  addiu       $a2, $a2, -0x3910
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
    // 0x159f28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f30: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159F30u;
    SET_GPR_U32(ctx, 31, 0x159F38u);
    ctx->pc = 0x159F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F30u;
            // 0x159f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F38u; }
        if (ctx->pc != 0x159F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F38u; }
        if (ctx->pc != 0x159F38u) { return; }
    }
    ctx->pc = 0x159F38u;
label_159f38:
    // 0x159f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f3c: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x159F3Cu;
    {
        const bool branch_taken_0x159f3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f3c) {
            ctx->pc = 0x159F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F3Cu;
            // 0x159f40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F8Cu;
            goto label_159f8c;
        }
    }
    ctx->pc = 0x159F44u;
    // 0x159f44: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x159f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x159f48: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x159f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x159f4c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x159f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x159f50: 0x2463e9b8  addiu       $v1, $v1, -0x1648
    ctx->pc = 0x159f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961592));
    // 0x159f54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159f58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x159f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159f5c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x159f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x159f60: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x159f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x159f64: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x159f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x159f68: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x159f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x159f6c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x159f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x159f70: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x159f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x159f74: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x159f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x159f78: 0xc055a44  jal         func_156910
    ctx->pc = 0x159F78u;
    SET_GPR_U32(ctx, 31, 0x159F80u);
    ctx->pc = 0x159F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F78u;
            // 0x159f7c: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156910u;
    if (runtime->hasFunction(0x156910u)) {
        auto targetFn = runtime->lookupFunction(0x156910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F80u; }
        if (ctx->pc != 0x159F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156910_0x156910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F80u; }
        if (ctx->pc != 0x159F80u) { return; }
    }
    ctx->pc = 0x159F80u;
label_159f80:
    // 0x159f80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159f84: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x159f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x159f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x159f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159f8c:
    // 0x159f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159f98: 0x3e00008  jr          $ra
    ctx->pc = 0x159F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F98u;
            // 0x159f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159FA0u;
label_159fa0:
    // 0x159fa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x159fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x159fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159fbc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x159fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159fc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x159fc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x159fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159fd4: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x159fd4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159fd8: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x159fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159fdc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x159fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fe4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x159FE4u;
    SET_GPR_U32(ctx, 31, 0x159FECu);
    ctx->pc = 0x159FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159FE4u;
            // 0x159fe8: 0x24c6c6f0  addiu       $a2, $a2, -0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FECu; }
        if (ctx->pc != 0x159FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FECu; }
        if (ctx->pc != 0x159FECu) { return; }
    }
    ctx->pc = 0x159FECu;
label_159fec:
    // 0x159fec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x159fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ff0: 0x5240004c  beql        $s2, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x159FF0u;
    {
        const bool branch_taken_0x159ff0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ff0) {
            ctx->pc = 0x159FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159FF0u;
            // 0x159ff4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A124u;
            goto label_15a124;
        }
    }
    ctx->pc = 0x159FF8u;
    // 0x159ff8: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x159ffc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x159ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15a000: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x15a004: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x15a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x15a008: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x15a008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15a00c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15a00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15a010: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15a010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15a014: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15a014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15a018: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x15A018u;
    {
        const bool branch_taken_0x15a018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A018u;
            // 0x15a01c: 0xae0400dc  sw          $a0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a018) {
            ctx->pc = 0x15A0E0u;
            goto label_15a0e0;
        }
    }
    ctx->pc = 0x15A020u;
    // 0x15a020: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x15a024: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15A024u;
    {
        const bool branch_taken_0x15a024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a024) {
            ctx->pc = 0x15A028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A024u;
            // 0x15a028: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A094u;
            goto label_15a094;
        }
    }
    ctx->pc = 0x15A02Cu;
    // 0x15a02c: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x15a030: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15A030u;
    {
        const bool branch_taken_0x15a030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a030) {
            ctx->pc = 0x15A084u;
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A038u;
    // 0x15a038: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x15a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x15a03c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15A03Cu;
    {
        const bool branch_taken_0x15a03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a03c) {
            ctx->pc = 0x15A074u;
            goto label_15a074;
        }
    }
    ctx->pc = 0x15A044u;
    // 0x15a044: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x15a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x15a048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A048u;
    {
        const bool branch_taken_0x15a048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a048) {
            ctx->pc = 0x15A058u;
            goto label_15a058;
        }
    }
    ctx->pc = 0x15A050u;
    // 0x15a050: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15A050u;
    {
        const bool branch_taken_0x15a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A050u;
            // 0x15a054: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a050) {
            ctx->pc = 0x15A0F0u;
            goto label_15a0f0;
        }
    }
    ctx->pc = 0x15A058u;
label_15a058:
    // 0x15a058: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a05c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a060: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x15a064: 0xc055a44  jal         func_156910
    ctx->pc = 0x15A064u;
    SET_GPR_U32(ctx, 31, 0x15A06Cu);
    ctx->pc = 0x15A068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A064u;
            // 0x15a068: 0xae0205e8  sw          $v0, 0x5E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156910u;
    if (runtime->hasFunction(0x156910u)) {
        auto targetFn = runtime->lookupFunction(0x156910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A06Cu; }
        if (ctx->pc != 0x15A06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156910_0x156910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A06Cu; }
        if (ctx->pc != 0x15A06Cu) { return; }
    }
    ctx->pc = 0x15A06Cu;
label_15a06c:
    // 0x15a06c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15A06Cu;
    {
        const bool branch_taken_0x15a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A06Cu;
            // 0x15a070: 0x111c3c  dsll32      $v1, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a06c) {
            ctx->pc = 0x15A0FCu;
            goto label_15a0fc;
        }
    }
    ctx->pc = 0x15A074u;
label_15a074:
    // 0x15a074: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a078: 0x2442e9c8  addiu       $v0, $v0, -0x1638
    ctx->pc = 0x15a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961608));
    // 0x15a07c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15A07Cu;
    {
        const bool branch_taken_0x15a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A07Cu;
            // 0x15a080: 0xae0205e8  sw          $v0, 0x5E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a07c) {
            ctx->pc = 0x15A0F8u;
            goto label_15a0f8;
        }
    }
    ctx->pc = 0x15A084u;
label_15a084:
    // 0x15a084: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a088: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x15a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x15a08c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15A08Cu;
    {
        const bool branch_taken_0x15a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A08Cu;
            // 0x15a090: 0xae0205e8  sw          $v0, 0x5E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a08c) {
            ctx->pc = 0x15A0F8u;
            goto label_15a0f8;
        }
    }
    ctx->pc = 0x15A094u;
label_15a094:
    // 0x15a094: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a098: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x15a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x15a09c: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15a0a0: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x15A0A0u;
    SET_GPR_U32(ctx, 31, 0x15A0A8u);
    ctx->pc = 0x15A0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0A0u;
            // 0x15a0a4: 0x8c6400dc  lw          $a0, 0xDC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0A8u; }
        if (ctx->pc != 0x15A0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0A8u; }
        if (ctx->pc != 0x15A0A8u) { return; }
    }
    ctx->pc = 0x15A0A8u;
label_15a0a8:
    // 0x15a0a8: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x15a0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x15a0ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15a0acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15a0b0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A0B0u;
    {
        const bool branch_taken_0x15a0b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15A0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0B0u;
            // 0x15a0b4: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0b0) {
            ctx->pc = 0x15A0C0u;
            goto label_15a0c0;
        }
    }
    ctx->pc = 0x15A0B8u;
    // 0x15a0b8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15a0bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_15a0c0:
    // 0x15a0c0: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x15a0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15a0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0c8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x15a0c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x15a0cc: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x15a0d0: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15A0D0u;
    SET_GPR_U32(ctx, 31, 0x15A0D8u);
    ctx->pc = 0x15A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0D0u;
            // 0x15a0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0D8u; }
        if (ctx->pc != 0x15A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0D8u; }
        if (ctx->pc != 0x15A0D8u) { return; }
    }
    ctx->pc = 0x15A0D8u;
label_15a0d8:
    // 0x15a0d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15A0D8u;
    {
        const bool branch_taken_0x15a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a0d8) {
            ctx->pc = 0x15A0F8u;
            goto label_15a0f8;
        }
    }
    ctx->pc = 0x15A0E0u;
label_15a0e0:
    // 0x15a0e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a0e4: 0x2442e9d8  addiu       $v0, $v0, -0x1628
    ctx->pc = 0x15a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961624));
    // 0x15a0e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A0E8u;
    {
        const bool branch_taken_0x15a0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0E8u;
            // 0x15a0ec: 0xae0205e8  sw          $v0, 0x5E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0e8) {
            ctx->pc = 0x15A0F8u;
            goto label_15a0f8;
        }
    }
    ctx->pc = 0x15A0F0u;
label_15a0f0:
    // 0x15a0f0: 0x2442e9c8  addiu       $v0, $v0, -0x1638
    ctx->pc = 0x15a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961608));
    // 0x15a0f4: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
label_15a0f8:
    // 0x15a0f8: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x15a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_15a0fc:
    // 0x15a0fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a100: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15a100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a104: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15a104u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15a108: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x15a108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x15a10c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A10Cu;
    {
        const bool branch_taken_0x15a10c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A10Cu;
            // 0x15a110: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a10c) {
            ctx->pc = 0x15A11Cu;
            goto label_15a11c;
        }
    }
    ctx->pc = 0x15A114u;
    // 0x15a114: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a118: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15a118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15a11c:
    // 0x15a11c: 0xa6020266  sh          $v0, 0x266($s0)
    ctx->pc = 0x15a11cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a120: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15a120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a124:
    // 0x15a124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A13Cu;
            // 0x15a140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A144u;
    // 0x15a144: 0x0  nop
    ctx->pc = 0x15a144u;
    // NOP
    // 0x15a148: 0x0  nop
    ctx->pc = 0x15a148u;
    // NOP
    // 0x15a14c: 0x0  nop
    ctx->pc = 0x15a14cu;
    // NOP
label_15a150:
    // 0x15a150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15a154: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15a158: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a15c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a160: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15a160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a164: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a174: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15a174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a178: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a17c: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15a17cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a184: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x15a188: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x15a188u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x15a18c: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15a190: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15a190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15a194: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15A194u;
    SET_GPR_U32(ctx, 31, 0x15A19Cu);
    ctx->pc = 0x15A198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A194u;
            // 0x15a198: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A19Cu; }
        if (ctx->pc != 0x15A19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A19Cu; }
        if (ctx->pc != 0x15A19Cu) { return; }
    }
    ctx->pc = 0x15A19Cu;
label_15a19c:
    // 0x15a19c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A19Cu;
    {
        const bool branch_taken_0x15a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a19c) {
            ctx->pc = 0x15A1ACu;
            goto label_15a1ac;
        }
    }
    ctx->pc = 0x15A1A4u;
    // 0x15a1a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15A1A4u;
    {
        const bool branch_taken_0x15a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1A4u;
            // 0x15a1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1a4) {
            ctx->pc = 0x15A288u;
            goto label_15a288;
        }
    }
    ctx->pc = 0x15A1ACu;
label_15a1ac:
    // 0x15a1ac: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1b8: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a1c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1c4: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A1C4u;
    SET_GPR_U32(ctx, 31, 0x15A1CCu);
    ctx->pc = 0x15A1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1C4u;
            // 0x15a1c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1CCu; }
        if (ctx->pc != 0x15A1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1CCu; }
        if (ctx->pc != 0x15A1CCu) { return; }
    }
    ctx->pc = 0x15A1CCu;
label_15a1cc:
    // 0x15a1cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15a1ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1d0: 0x5280002d  beql        $s4, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x15A1D0u;
    {
        const bool branch_taken_0x15a1d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1d0) {
            ctx->pc = 0x15A1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1D0u;
            // 0x15a1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A288u;
            goto label_15a288;
        }
    }
    ctx->pc = 0x15A1D8u;
    // 0x15a1d8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15a1dc: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15a1e0: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x15a1e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15a1e8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x15a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x15a1ec: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15a1f0: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A1F0u;
    SET_GPR_U32(ctx, 31, 0x15A1F8u);
    ctx->pc = 0x15A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1F0u;
            // 0x15a1f4: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1F8u; }
        if (ctx->pc != 0x15A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1F8u; }
        if (ctx->pc != 0x15A1F8u) { return; }
    }
    ctx->pc = 0x15A1F8u;
label_15a1f8:
    // 0x15a1f8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a1fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15a200: 0x2442e9e0  addiu       $v0, $v0, -0x1620
    ctx->pc = 0x15a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x15a204: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a208: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15a208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15a20c: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x15a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15a210: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15a214: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15a214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15a218: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15a218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15a21c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15a220: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15a220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15a224: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a224u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a228: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x15a228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x15a22c: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a230: 0x9225008c  lbu         $a1, 0x8C($s1)
    ctx->pc = 0x15a230u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15a234: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a234u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a238: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x15a238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x15a23c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15a23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15a240: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a244: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a248: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15a248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a24c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15a24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a250: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x15a254: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15a254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a258: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15a25c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15a25cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a260: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15a260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a264: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15a264u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15a268: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15A268u;
    SET_GPR_U32(ctx, 31, 0x15A270u);
    ctx->pc = 0x15A26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A268u;
            // 0x15a26c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A270u; }
        if (ctx->pc != 0x15A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A270u; }
        if (ctx->pc != 0x15A270u) { return; }
    }
    ctx->pc = 0x15A270u;
label_15a270:
    // 0x15a270: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15a274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a278: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15a278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a27c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15A27Cu;
    SET_GPR_U32(ctx, 31, 0x15A284u);
    ctx->pc = 0x15A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A27Cu;
            // 0x15a280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A284u; }
        if (ctx->pc != 0x15A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A284u; }
        if (ctx->pc != 0x15A284u) { return; }
    }
    ctx->pc = 0x15A284u;
label_15a284:
    // 0x15a284: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15a288:
    // 0x15a288: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15a288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a28c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2A4u;
            // 0x15a2a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A2ACu;
    // 0x15a2ac: 0x0  nop
    ctx->pc = 0x15a2acu;
    // NOP
label_15a2b0:
    // 0x15a2b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15a2b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15a2b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15a2bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a2c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a2c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a2c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15a2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a2d8: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2e0: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15a2e0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a2e8: 0x27a5008e  addiu       $a1, $sp, 0x8E
    ctx->pc = 0x15a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
    // 0x15a2ec: 0xa7b3008e  sh          $s3, 0x8E($sp)
    ctx->pc = 0x15a2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 19));
    // 0x15a2f0: 0x84d60008  lh          $s6, 0x8($a2)
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15a2f4: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x15a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x15a2f8: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15A2F8u;
    SET_GPR_U32(ctx, 31, 0x15A300u);
    ctx->pc = 0x15A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2F8u;
            // 0x15a2fc: 0xa7b6008c  sh          $s6, 0x8C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 140), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A300u; }
        if (ctx->pc != 0x15A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A300u; }
        if (ctx->pc != 0x15A300u) { return; }
    }
    ctx->pc = 0x15A300u;
label_15a300:
    // 0x15a300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A300u;
    {
        const bool branch_taken_0x15a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a300) {
            ctx->pc = 0x15A310u;
            goto label_15a310;
        }
    }
    ctx->pc = 0x15A308u;
    // 0x15a308: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x15A308u;
    {
        const bool branch_taken_0x15a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A308u;
            // 0x15a30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a308) {
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A310u;
label_15a310:
    // 0x15a310: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a314: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a31c: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a328: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A328u;
    SET_GPR_U32(ctx, 31, 0x15A330u);
    ctx->pc = 0x15A32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A328u;
            // 0x15a32c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A330u; }
        if (ctx->pc != 0x15A330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A330u; }
        if (ctx->pc != 0x15A330u) { return; }
    }
    ctx->pc = 0x15A330u;
label_15a330:
    // 0x15a330: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15a330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a334: 0x52a00090  beql        $s5, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x15A334u;
    {
        const bool branch_taken_0x15a334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a334) {
            ctx->pc = 0x15A338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A334u;
            // 0x15a338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A33Cu;
    // 0x15a33c: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x15a33cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x15a340: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x15a344: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A344u;
    {
        const bool branch_taken_0x15a344 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A344u;
            // 0x15a348: 0x8eb00010  lw          $s0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a344) {
            ctx->pc = 0x15A360u;
            goto label_15a360;
        }
    }
    ctx->pc = 0x15A34Cu;
    // 0x15a34c: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x15a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x15a350: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A350u;
    SET_GPR_U32(ctx, 31, 0x15A358u);
    ctx->pc = 0x15A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A350u;
            // 0x15a354: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A358u; }
        if (ctx->pc != 0x15A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A358u; }
        if (ctx->pc != 0x15A358u) { return; }
    }
    ctx->pc = 0x15A358u;
label_15a358:
    // 0x15a358: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15A358u;
    {
        const bool branch_taken_0x15a358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a358) {
            ctx->pc = 0x15A398u;
            goto label_15a398;
        }
    }
    ctx->pc = 0x15A360u;
label_15a360:
    // 0x15a360: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15a364: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15A364u;
    SET_GPR_U32(ctx, 31, 0x15A36Cu);
    ctx->pc = 0x15A368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A364u;
            // 0x15a368: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A36Cu; }
        if (ctx->pc != 0x15A36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A36Cu; }
        if (ctx->pc != 0x15A36Cu) { return; }
    }
    ctx->pc = 0x15A36Cu;
label_15a36c:
    // 0x15a36c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15a370: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15a370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a374: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15a378: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15A378u;
    SET_GPR_U32(ctx, 31, 0x15A380u);
    ctx->pc = 0x15A37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A378u;
            // 0x15a37c: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A380u; }
        if (ctx->pc != 0x15A380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A380u; }
        if (ctx->pc != 0x15A380u) { return; }
    }
    ctx->pc = 0x15A380u;
label_15a380:
    // 0x15a380: 0x2623ffc6  addiu       $v1, $s1, -0x3A
    ctx->pc = 0x15a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967238));
    // 0x15a384: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15a388: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a390: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A390u;
    SET_GPR_U32(ctx, 31, 0x15A398u);
    ctx->pc = 0x15A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A390u;
            // 0x15a394: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A398u; }
        if (ctx->pc != 0x15A398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A398u; }
        if (ctx->pc != 0x15A398u) { return; }
    }
    ctx->pc = 0x15A398u;
label_15a398:
    // 0x15a398: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a39c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15a3a0: 0x2442e9e8  addiu       $v0, $v0, -0x1618
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
    // 0x15a3a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a3a8: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15a3ac: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15a3b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15a3b4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15a3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15a3b8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15a3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15a3bc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15a3c0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15a3c4: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a3c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a3c8: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x15a3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x15a3cc: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a3d0: 0x9245008c  lbu         $a1, 0x8C($s2)
    ctx->pc = 0x15a3d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15a3d4: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a3d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a3d8: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x15a3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x15a3dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15a3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15a3e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a3e4: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a3e8: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15a3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a3ec: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15a3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a3f0: 0x87a3008e  lh          $v1, 0x8E($sp)
    ctx->pc = 0x15a3f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x15a3f4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15a3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a3f8: 0x87a3008c  lh          $v1, 0x8C($sp)
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15a3fc: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15a3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a400: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15a400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a404: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15a404u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15a408: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15A408u;
    SET_GPR_U32(ctx, 31, 0x15A410u);
    ctx->pc = 0x15A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A408u;
            // 0x15a40c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A410u; }
        if (ctx->pc != 0x15A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A410u; }
        if (ctx->pc != 0x15A410u) { return; }
    }
    ctx->pc = 0x15A410u;
label_15a410:
    // 0x15a410: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15a410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15a414: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a420: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a428: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a42c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A42Cu;
    SET_GPR_U32(ctx, 31, 0x15A434u);
    ctx->pc = 0x15A430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A42Cu;
            // 0x15a430: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A434u; }
        if (ctx->pc != 0x15A434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A434u; }
        if (ctx->pc != 0x15A434u) { return; }
    }
    ctx->pc = 0x15A434u;
label_15a434:
    // 0x15a434: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15a434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a438: 0x5280003b  beql        $s4, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x15A438u;
    {
        const bool branch_taken_0x15a438 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a438) {
            ctx->pc = 0x15A43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A438u;
            // 0x15a43c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A528u;
            goto label_15a528;
        }
    }
    ctx->pc = 0x15A440u;
    // 0x15a440: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x15a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x15a444: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A444u;
    {
        const bool branch_taken_0x15a444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A444u;
            // 0x15a448: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a444) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A44Cu;
    // 0x15a44c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x15a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15a450: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A450u;
    SET_GPR_U32(ctx, 31, 0x15A458u);
    ctx->pc = 0x15A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A450u;
            // 0x15a454: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A458u; }
        if (ctx->pc != 0x15A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A458u; }
        if (ctx->pc != 0x15A458u) { return; }
    }
    ctx->pc = 0x15A458u;
label_15a458:
    // 0x15a458: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15A458u;
    {
        const bool branch_taken_0x15a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a458) {
            ctx->pc = 0x15A49Cu;
            goto label_15a49c;
        }
    }
    ctx->pc = 0x15A460u;
label_15a460:
    // 0x15a460: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15a464: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x15A464u;
    SET_GPR_U32(ctx, 31, 0x15A46Cu);
    ctx->pc = 0x15A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A464u;
            // 0x15a468: 0xa60400ea  sh          $a0, 0xEA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A46Cu; }
        if (ctx->pc != 0x15A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A46Cu; }
        if (ctx->pc != 0x15A46Cu) { return; }
    }
    ctx->pc = 0x15A46Cu;
label_15a46c:
    // 0x15a46c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15a470: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15a470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a474: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x15a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15a478: 0xc0c1404  jal         func_305010
    ctx->pc = 0x15A478u;
    SET_GPR_U32(ctx, 31, 0x15A480u);
    ctx->pc = 0x15A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A478u;
            // 0x15a47c: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A480u; }
        if (ctx->pc != 0x15A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A480u; }
        if (ctx->pc != 0x15A480u) { return; }
    }
    ctx->pc = 0x15A480u;
label_15a480:
    // 0x15a480: 0x2623ffc6  addiu       $v1, $s1, -0x3A
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967238));
    // 0x15a484: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15a488: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a494: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A494u;
    SET_GPR_U32(ctx, 31, 0x15A49Cu);
    ctx->pc = 0x15A498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A494u;
            // 0x15a498: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A49Cu; }
        if (ctx->pc != 0x15A49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A49Cu; }
        if (ctx->pc != 0x15A49Cu) { return; }
    }
    ctx->pc = 0x15A49Cu;
label_15a49c:
    // 0x15a49c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a4a0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15a4a4: 0x2442e9e8  addiu       $v0, $v0, -0x1618
    ctx->pc = 0x15a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
    // 0x15a4a8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15a4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a4ac: 0xae0205e8  sw          $v0, 0x5E8($s0)
    ctx->pc = 0x15a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 2));
    // 0x15a4b0: 0x8e4500dc  lw          $a1, 0xDC($s2)
    ctx->pc = 0x15a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15a4b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15a4b8: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15a4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15a4bc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15a4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15a4c0: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15a4c4: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15a4c8: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a4c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a4cc: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x15a4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x15a4d0: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a4d4: 0x9245008c  lbu         $a1, 0x8C($s2)
    ctx->pc = 0x15a4d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15a4d8: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x15a4d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15a4dc: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x15a4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x15a4e0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15a4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15a4e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a4e8: 0xa204008c  sb          $a0, 0x8C($s0)
    ctx->pc = 0x15a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x15a4ec: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15a4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a4f0: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15a4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a4f4: 0x87a3008e  lh          $v1, 0x8E($sp)
    ctx->pc = 0x15a4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x15a4f8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15a4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a4fc: 0x87a3008c  lh          $v1, 0x8C($sp)
    ctx->pc = 0x15a4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15a500: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15a500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a504: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15a504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a508: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15a508u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15a50c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15A50Cu;
    SET_GPR_U32(ctx, 31, 0x15A514u);
    ctx->pc = 0x15A510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A50Cu;
            // 0x15a510: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A514u; }
        if (ctx->pc != 0x15A514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A514u; }
        if (ctx->pc != 0x15A514u) { return; }
    }
    ctx->pc = 0x15A514u;
label_15a514:
    // 0x15a514: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15a514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15a518: 0xc055a44  jal         func_156910
    ctx->pc = 0x15A518u;
    SET_GPR_U32(ctx, 31, 0x15A520u);
    ctx->pc = 0x15A51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A518u;
            // 0x15a51c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156910u;
    if (runtime->hasFunction(0x156910u)) {
        auto targetFn = runtime->lookupFunction(0x156910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A520u; }
        if (ctx->pc != 0x15A520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156910_0x156910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A520u; }
        if (ctx->pc != 0x15A520u) { return; }
    }
    ctx->pc = 0x15A520u;
label_15a520:
    // 0x15a520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A520u;
    {
        const bool branch_taken_0x15a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A520u;
            // 0x15a524: 0x9242059c  lbu         $v0, 0x59C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a520) {
            ctx->pc = 0x15A538u;
            goto label_15a538;
        }
    }
    ctx->pc = 0x15A528u;
label_15a528:
    // 0x15a528: 0xc0592e0  jal         func_164B80
    ctx->pc = 0x15A528u;
    SET_GPR_U32(ctx, 31, 0x15A530u);
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A530u; }
        if (ctx->pc != 0x15A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A530u; }
        if (ctx->pc != 0x15A530u) { return; }
    }
    ctx->pc = 0x15A530u;
label_15a530:
    // 0x15a530: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15A530u;
    {
        const bool branch_taken_0x15a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A530u;
            // 0x15a534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a530) {
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A538u;
label_15a538:
    // 0x15a538: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15a53c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A53Cu;
    {
        const bool branch_taken_0x15a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a53c) {
            ctx->pc = 0x15A540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A53Cu;
            // 0x15a540: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A558u;
            goto label_15a558;
        }
    }
    ctx->pc = 0x15A544u;
    // 0x15a544: 0x2622ffe9  addiu       $v0, $s1, -0x17
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967273));
    // 0x15a548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a54c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x15A54Cu;
    SET_GPR_U32(ctx, 31, 0x15A554u);
    ctx->pc = 0x15A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A54Cu;
            // 0x15a550: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A554u; }
        if (ctx->pc != 0x15A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A554u; }
        if (ctx->pc != 0x15A554u) { return; }
    }
    ctx->pc = 0x15A554u;
label_15a554:
    // 0x15a554: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15a558:
    // 0x15a558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a55c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15A55Cu;
    SET_GPR_U32(ctx, 31, 0x15A564u);
    ctx->pc = 0x15A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A55Cu;
            // 0x15a560: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A564u; }
        if (ctx->pc != 0x15A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A564u; }
        if (ctx->pc != 0x15A564u) { return; }
    }
    ctx->pc = 0x15A564u;
label_15a564:
    // 0x15a564: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15a564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a568: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a56c: 0xc057208  jal         func_15C820
    ctx->pc = 0x15A56Cu;
    SET_GPR_U32(ctx, 31, 0x15A574u);
    ctx->pc = 0x15A570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A56Cu;
            // 0x15a570: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A574u; }
        if (ctx->pc != 0x15A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A574u; }
        if (ctx->pc != 0x15A574u) { return; }
    }
    ctx->pc = 0x15A574u;
label_15a574:
    // 0x15a574: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15a574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15a578:
    // 0x15a578: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a57c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15a57cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a580: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a584: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a58c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a598: 0x3e00008  jr          $ra
    ctx->pc = 0x15A598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A598u;
            // 0x15a59c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15a5a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15a5a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a5ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a5b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a5b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5bc: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a5c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5c4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a5c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5cc: 0x27a5005e  addiu       $a1, $sp, 0x5E
    ctx->pc = 0x15a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x15a5d0: 0xa7a2005e  sh          $v0, 0x5E($sp)
    ctx->pc = 0x15a5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a5d4: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x15a5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15a5d8: 0xa7a2005c  sh          $v0, 0x5C($sp)
    ctx->pc = 0x15a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a5dc: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15A5DCu;
    SET_GPR_U32(ctx, 31, 0x15A5E4u);
    ctx->pc = 0x15A5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5DCu;
            // 0x15a5e0: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5E4u; }
        if (ctx->pc != 0x15A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5E4u; }
        if (ctx->pc != 0x15A5E4u) { return; }
    }
    ctx->pc = 0x15A5E4u;
label_15a5e4:
    // 0x15a5e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A5E4u;
    {
        const bool branch_taken_0x15a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a5e4) {
            ctx->pc = 0x15A5F4u;
            goto label_15a5f4;
        }
    }
    ctx->pc = 0x15A5ECu;
    // 0x15a5ec: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x15A5ECu;
    {
        const bool branch_taken_0x15a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5ECu;
            // 0x15a5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5ec) {
            ctx->pc = 0x15A6D4u;
            goto label_15a6d4;
        }
    }
    ctx->pc = 0x15A5F4u;
label_15a5f4:
    // 0x15a5f4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a600: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a60c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A60Cu;
    SET_GPR_U32(ctx, 31, 0x15A614u);
    ctx->pc = 0x15A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A60Cu;
            // 0x15a610: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A614u; }
        if (ctx->pc != 0x15A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A614u; }
        if (ctx->pc != 0x15A614u) { return; }
    }
    ctx->pc = 0x15A614u;
label_15a614:
    // 0x15a614: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a618: 0x5260002e  beql        $s3, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x15A618u;
    {
        const bool branch_taken_0x15a618 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a618) {
            ctx->pc = 0x15A61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A618u;
            // 0x15a61c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A6D4u;
            goto label_15a6d4;
        }
    }
    ctx->pc = 0x15A620u;
    // 0x15a620: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x15a620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15a624: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15a628: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x15a62c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15a62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a630: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A630u;
    SET_GPR_U32(ctx, 31, 0x15A638u);
    ctx->pc = 0x15A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A630u;
            // 0x15a634: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A638u; }
        if (ctx->pc != 0x15A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A638u; }
        if (ctx->pc != 0x15A638u) { return; }
    }
    ctx->pc = 0x15A638u;
label_15a638:
    // 0x15a638: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x15a63c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x15a640: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15a644: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x15a644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x15a648: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15a64c: 0xae2400dc  sw          $a0, 0xDC($s1)
    ctx->pc = 0x15a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 4));
    // 0x15a650: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x15a650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    // 0x15a654: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x15a654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15a658: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x15a658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x15a65c: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x15a65cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15a660: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x15a660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x15a664: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x15a664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15a668: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x15a668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x15a66c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15a66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15a670: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15a674: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A674u;
    {
        const bool branch_taken_0x15a674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A674u;
            // 0x15a678: 0xa223008c  sb          $v1, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a674) {
            ctx->pc = 0x15A684u;
            goto label_15a684;
        }
    }
    ctx->pc = 0x15A67Cu;
    // 0x15a67c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A67Cu;
    {
        const bool branch_taken_0x15a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A67Cu;
            // 0x15a680: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a67c) {
            ctx->pc = 0x15A694u;
            goto label_15a694;
        }
    }
    ctx->pc = 0x15A684u;
label_15a684:
    // 0x15a684: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15a688: 0x2442e9f8  addiu       $v0, $v0, -0x1608
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961656));
    // 0x15a68c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A68Cu;
    {
        const bool branch_taken_0x15a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A68Cu;
            // 0x15a690: 0xae2205e8  sw          $v0, 0x5E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a68c) {
            ctx->pc = 0x15A69Cu;
            goto label_15a69c;
        }
    }
    ctx->pc = 0x15A694u;
label_15a694:
    // 0x15a694: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x15a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x15a698: 0xae2205e8  sw          $v0, 0x5E8($s1)
    ctx->pc = 0x15a698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
label_15a69c:
    // 0x15a69c: 0x87a4005e  lh          $a0, 0x5E($sp)
    ctx->pc = 0x15a69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x15a6a0: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x15a6a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15a6a8: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x15a6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x15a6ac: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x15a6acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a6b0: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x15a6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a6b4: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x15a6b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15a6b8: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15A6B8u;
    SET_GPR_U32(ctx, 31, 0x15A6C0u);
    ctx->pc = 0x15A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6B8u;
            // 0x15a6bc: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C0u; }
        if (ctx->pc != 0x15A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C0u; }
        if (ctx->pc != 0x15A6C0u) { return; }
    }
    ctx->pc = 0x15A6C0u;
label_15a6c0:
    // 0x15a6c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x15a6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15a6c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15a6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a6c8: 0xa62200f2  sh          $v0, 0xF2($s1)
    ctx->pc = 0x15a6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a6cc: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x15a6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a6d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15a6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a6d4:
    // 0x15a6d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6E8u;
            // 0x15a6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A6F0u;
label_15a6f0:
    // 0x15a6f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15a6f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15a6f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a6fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a700: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15a700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a714: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15a714u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a718: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A718u;
    {
        const bool branch_taken_0x15a718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A718u;
            // 0x15a71c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a718) {
            ctx->pc = 0x15A728u;
            goto label_15a728;
        }
    }
    ctx->pc = 0x15A720u;
    // 0x15a720: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x15A720u;
    {
        const bool branch_taken_0x15a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A720u;
            // 0x15a724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a720) {
            ctx->pc = 0x15A824u;
            goto label_15a824;
        }
    }
    ctx->pc = 0x15A728u;
label_15a728:
    // 0x15a728: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a730: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x15a734: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x15a734u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x15a738: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15a73c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15a740: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15A740u;
    SET_GPR_U32(ctx, 31, 0x15A748u);
    ctx->pc = 0x15A744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A740u;
            // 0x15a744: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A748u; }
        if (ctx->pc != 0x15A748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A748u; }
        if (ctx->pc != 0x15A748u) { return; }
    }
    ctx->pc = 0x15A748u;
label_15a748:
    // 0x15a748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A748u;
    {
        const bool branch_taken_0x15a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a748) {
            ctx->pc = 0x15A758u;
            goto label_15a758;
        }
    }
    ctx->pc = 0x15A750u;
    // 0x15a750: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15A750u;
    {
        const bool branch_taken_0x15a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A750u;
            // 0x15a754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a750) {
            ctx->pc = 0x15A824u;
            goto label_15a824;
        }
    }
    ctx->pc = 0x15A758u;
label_15a758:
    // 0x15a758: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a764: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a76c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a76cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a770: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A770u;
    SET_GPR_U32(ctx, 31, 0x15A778u);
    ctx->pc = 0x15A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A770u;
            // 0x15a774: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A778u; }
        if (ctx->pc != 0x15A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A778u; }
        if (ctx->pc != 0x15A778u) { return; }
    }
    ctx->pc = 0x15A778u;
label_15a778:
    // 0x15a778: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15a778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a77c: 0x52800025  beql        $s4, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x15A77Cu;
    {
        const bool branch_taken_0x15a77c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a77c) {
            ctx->pc = 0x15A780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A77Cu;
            // 0x15a780: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A814u;
            goto label_15a814;
        }
    }
    ctx->pc = 0x15A784u;
    // 0x15a784: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15a788: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x15a788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15a78c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x15a790: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15a790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a794: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x15a794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15a798: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A798u;
    {
        const bool branch_taken_0x15a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A798u;
            // 0x15a79c: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a798) {
            ctx->pc = 0x15A7ACu;
            goto label_15a7ac;
        }
    }
    ctx->pc = 0x15A7A0u;
    // 0x15a7a0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x15a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x15a7a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15A7A4u;
    {
        const bool branch_taken_0x15a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7A4u;
            // 0x15a7a8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7a4) {
            ctx->pc = 0x15A7C4u;
            goto label_15a7c4;
        }
    }
    ctx->pc = 0x15A7ACu;
label_15a7ac:
    // 0x15a7ac: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x15a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15a7b0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x15a7b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A7B4u;
    {
        const bool branch_taken_0x15a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a7b4) {
            ctx->pc = 0x15A7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7B4u;
            // 0x15a7b8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A7C8u;
            goto label_15a7c8;
        }
    }
    ctx->pc = 0x15A7BCu;
    // 0x15a7bc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15a7c0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15a7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a7c4:
    // 0x15a7c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15a7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15a7c8:
    // 0x15a7c8: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15A7C8u;
    SET_GPR_U32(ctx, 31, 0x15A7D0u);
    ctx->pc = 0x15A7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7C8u;
            // 0x15a7cc: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7D0u; }
        if (ctx->pc != 0x15A7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7D0u; }
        if (ctx->pc != 0x15A7D0u) { return; }
    }
    ctx->pc = 0x15A7D0u;
label_15a7d0:
    // 0x15a7d0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15a7d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x15a7d8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15a7dc: 0x2463ea08  addiu       $v1, $v1, -0x15F8
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961672));
    // 0x15a7e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a7e4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15a7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15a7e8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15a7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15a7ec: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15a7f0: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15a7f4: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x15a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x15a7f8: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x15a7fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15a7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a800: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15a804: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15a804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a808: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15a808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a80c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15a80cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a810: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a814:
    // 0x15a814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15a814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a818: 0xc057208  jal         func_15C820
    ctx->pc = 0x15A818u;
    SET_GPR_U32(ctx, 31, 0x15A820u);
    ctx->pc = 0x15A81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A818u;
            // 0x15a81c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A820u; }
        if (ctx->pc != 0x15A820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A820u; }
        if (ctx->pc != 0x15A820u) { return; }
    }
    ctx->pc = 0x15A820u;
label_15a820:
    // 0x15a820: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15a820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15a824:
    // 0x15a824: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a82c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a840: 0x3e00008  jr          $ra
    ctx->pc = 0x15A840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A840u;
            // 0x15a844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A848u;
    // 0x15a848: 0x0  nop
    ctx->pc = 0x15a848u;
    // NOP
    // 0x15a84c: 0x0  nop
    ctx->pc = 0x15a84cu;
    // NOP
label_15a850:
    // 0x15a850: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a854: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15a858: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x15a858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x15a85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a860: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x15a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15a864: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x15a864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x15a868: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x15a868u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x15a86c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15a870: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a874: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15a874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15a878: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a87c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15a880: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a884: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x15a884u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a88c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A88Cu;
            // 0x15a890: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A894u;
    // 0x15a894: 0x0  nop
    ctx->pc = 0x15a894u;
    // NOP
    // 0x15a898: 0x0  nop
    ctx->pc = 0x15a898u;
    // NOP
    // 0x15a89c: 0x0  nop
    ctx->pc = 0x15a89cu;
    // NOP
label_15a8a0:
    // 0x15a8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15a8ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a8b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15a8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a8c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8c8: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a8cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15a8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8d0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a8d4: 0x24c6c6f0  addiu       $a2, $a2, -0x3910
    ctx->pc = 0x15a8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952688));
    // 0x15a8d8: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A8D8u;
    SET_GPR_U32(ctx, 31, 0x15A8E0u);
    ctx->pc = 0x15A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8D8u;
            // 0x15a8dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8E0u; }
        if (ctx->pc != 0x15A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8E0u; }
        if (ctx->pc != 0x15A8E0u) { return; }
    }
    ctx->pc = 0x15A8E0u;
label_15a8e0:
    // 0x15a8e0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x15A8E0u;
    {
        const bool branch_taken_0x15a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8e0) {
            ctx->pc = 0x15A8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8E0u;
            // 0x15a8e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A944u;
            goto label_15a944;
        }
    }
    ctx->pc = 0x15A8E8u;
    // 0x15a8e8: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x15a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15a8ec: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x15a8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x15a8f0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x15a8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15a8f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15a8f8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x15a8fc: 0x2463ffbf  addiu       $v1, $v1, -0x41
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x15a900: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x15a900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x15a904: 0x2484ea10  addiu       $a0, $a0, -0x15F0
    ctx->pc = 0x15a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961680));
    // 0x15a908: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15a908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15a90c: 0xace600dc  sw          $a2, 0xDC($a3)
    ctx->pc = 0x15a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 6));
    // 0x15a910: 0xace500dc  sw          $a1, 0xDC($a3)
    ctx->pc = 0x15a910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 5));
    // 0x15a914: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A914u;
    {
        const bool branch_taken_0x15a914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A914u;
            // 0x15a918: 0xace405e8  sw          $a0, 0x5E8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a914) {
            ctx->pc = 0x15A924u;
            goto label_15a924;
        }
    }
    ctx->pc = 0x15A91Cu;
    // 0x15a91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15A91Cu;
    {
        const bool branch_taken_0x15a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A91Cu;
            // 0x15a920: 0x24030258  addiu       $v1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a91c) {
            ctx->pc = 0x15A930u;
            goto label_15a930;
        }
    }
    ctx->pc = 0x15A924u;
label_15a924:
    // 0x15a924: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x15a924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A928u;
    {
        const bool branch_taken_0x15a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A928u;
            // 0x15a92c: 0xa4e30266  sh          $v1, 0x266($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 614), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a928) {
            ctx->pc = 0x15A934u;
            goto label_15a934;
        }
    }
    ctx->pc = 0x15A930u;
label_15a930:
    // 0x15a930: 0xa4e30266  sh          $v1, 0x266($a3)
    ctx->pc = 0x15a930u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 614), (uint16_t)GPR_U32(ctx, 3));
label_15a934:
    // 0x15a934: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a938: 0xa4e300f2  sh          $v1, 0xF2($a3)
    ctx->pc = 0x15a938u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a93c: 0xa4e005e0  sh          $zero, 0x5E0($a3)
    ctx->pc = 0x15a93cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15a944:
    // 0x15a944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a950: 0x3e00008  jr          $ra
    ctx->pc = 0x15A950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A950u;
            // 0x15a954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A958u;
    // 0x15a958: 0x0  nop
    ctx->pc = 0x15a958u;
    // NOP
    // 0x15a95c: 0x0  nop
    ctx->pc = 0x15a95cu;
    // NOP
label_15a960:
    // 0x15a960: 0x3e00008  jr          $ra
    ctx->pc = 0x15A960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A968u;
    // 0x15a968: 0x0  nop
    ctx->pc = 0x15a968u;
    // NOP
    // 0x15a96c: 0x0  nop
    ctx->pc = 0x15a96cu;
    // NOP
label_15a970:
    // 0x15a970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15a974: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15a978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a97c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a980: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a984: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a994: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15a998: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A998u;
    {
        const bool branch_taken_0x15a998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A998u;
            // 0x15a99c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a998) {
            ctx->pc = 0x15A9A8u;
            goto label_15a9a8;
        }
    }
    ctx->pc = 0x15A9A0u;
    // 0x15a9a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x15A9A0u;
    {
        const bool branch_taken_0x15a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9A0u;
            // 0x15a9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9a0) {
            ctx->pc = 0x15AA9Cu;
            goto label_15aa9c;
        }
    }
    ctx->pc = 0x15A9A8u;
label_15a9a8:
    // 0x15a9a8: 0x84d30000  lh          $s3, 0x0($a2)
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b0: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x15a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x15a9b4: 0xa7b3007e  sh          $s3, 0x7E($sp)
    ctx->pc = 0x15a9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 19));
    // 0x15a9b8: 0x84d20008  lh          $s2, 0x8($a2)
    ctx->pc = 0x15a9b8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15a9bc: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15a9c0: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x15A9C0u;
    SET_GPR_U32(ctx, 31, 0x15A9C8u);
    ctx->pc = 0x15A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9C0u;
            // 0x15a9c4: 0xa7b2007c  sh          $s2, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (runtime->hasFunction(0x1563D0u)) {
        auto targetFn = runtime->lookupFunction(0x1563D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9C8u; }
        if (ctx->pc != 0x15A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001563D0_0x1563d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9C8u; }
        if (ctx->pc != 0x15A9C8u) { return; }
    }
    ctx->pc = 0x15A9C8u;
label_15a9c8:
    // 0x15a9c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A9C8u;
    {
        const bool branch_taken_0x15a9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a9c8) {
            ctx->pc = 0x15A9D8u;
            goto label_15a9d8;
        }
    }
    ctx->pc = 0x15A9D0u;
    // 0x15a9d0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x15A9D0u;
    {
        const bool branch_taken_0x15a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9D0u;
            // 0x15a9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9d0) {
            ctx->pc = 0x15AA9Cu;
            goto label_15aa9c;
        }
    }
    ctx->pc = 0x15A9D8u;
label_15a9d8:
    // 0x15a9d8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15a9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9e4: 0x24c6c600  addiu       $a2, $a2, -0x3A00
    ctx->pc = 0x15a9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
    // 0x15a9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9f0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15A9F0u;
    SET_GPR_U32(ctx, 31, 0x15A9F8u);
    ctx->pc = 0x15A9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9F0u;
            // 0x15a9f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F8u; }
        if (ctx->pc != 0x15A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F8u; }
        if (ctx->pc != 0x15A9F8u) { return; }
    }
    ctx->pc = 0x15A9F8u;
label_15a9f8:
    // 0x15a9f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15a9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9fc: 0x52800023  beql        $s4, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x15A9FCu;
    {
        const bool branch_taken_0x15a9fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9fc) {
            ctx->pc = 0x15AA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9FCu;
            // 0x15aa00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA8Cu;
            goto label_15aa8c;
        }
    }
    ctx->pc = 0x15AA04u;
    // 0x15aa04: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15aa08: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x15aa08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15aa0c: 0x2442ffb5  addiu       $v0, $v0, -0x4B
    ctx->pc = 0x15aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967221));
    // 0x15aa10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15aa14: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x15aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x15aa18: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x15aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x15aa1c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15AA1Cu;
    SET_GPR_U32(ctx, 31, 0x15AA24u);
    ctx->pc = 0x15AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA1Cu;
            // 0x15aa20: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA24u; }
        if (ctx->pc != 0x15AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA24u; }
        if (ctx->pc != 0x15AA24u) { return; }
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x15aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15aa28: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x15aa2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x15aa30: 0x2463ea18  addiu       $v1, $v1, -0x15E8
    ctx->pc = 0x15aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961688));
    // 0x15aa34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15aa38: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15aa38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15aa3c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15aa3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15aa40: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15aa44: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x15aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x15aa48: 0xae0305e8  sw          $v1, 0x5E8($s0)
    ctx->pc = 0x15aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 3));
    // 0x15aa4c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x15aa4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15aa50: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x15aa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x15aa54: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x15aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15aa58: 0x9224008c  lbu         $a0, 0x8C($s1)
    ctx->pc = 0x15aa58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x15aa5c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x15aa5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x15aa60: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x15aa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x15aa64: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15aa64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15aa68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15aa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15aa6c: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x15aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x15aa70: 0x87a3007e  lh          $v1, 0x7E($sp)
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x15aa74: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15aa74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15aa78: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15aa7c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15aa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15aa80: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x15aa80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x15aa84: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15aa84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15aa88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15aa8c:
    // 0x15aa8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15aa8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa90: 0xc057208  jal         func_15C820
    ctx->pc = 0x15AA90u;
    SET_GPR_U32(ctx, 31, 0x15AA98u);
    ctx->pc = 0x15AA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA90u;
            // 0x15aa94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA98u; }
        if (ctx->pc != 0x15AA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA98u; }
        if (ctx->pc != 0x15AA98u) { return; }
    }
    ctx->pc = 0x15AA98u;
label_15aa98:
    // 0x15aa98: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15aa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15aa9c:
    // 0x15aa9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15aa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15aaa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15aaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15aaa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15aaa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15aaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15aaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15aaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x15AAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAB8u;
            // 0x15aabc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AAC0u;
label_15aac0:
    // 0x15aac0: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x15AAC0u;
    {
        const bool branch_taken_0x15aac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac0) {
            ctx->pc = 0x15AAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAC0u;
            // 0x15aac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AB00u;
            goto label_15ab00;
        }
    }
    ctx->pc = 0x15AAC8u;
    // 0x15aac8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x15aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15aacc: 0x90620319  lbu         $v0, 0x319($v1)
    ctx->pc = 0x15aaccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 793)));
    // 0x15aad0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x15aad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x15aad4: 0xa0620319  sb          $v0, 0x319($v1)
    ctx->pc = 0x15aad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 793), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aad8: 0x90620323  lbu         $v0, 0x323($v1)
    ctx->pc = 0x15aad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 803)));
    // 0x15aadc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x15aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x15aae0: 0xa0620323  sb          $v0, 0x323($v1)
    ctx->pc = 0x15aae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 803), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aae4: 0x9062032d  lbu         $v0, 0x32D($v1)
    ctx->pc = 0x15aae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 813)));
    // 0x15aae8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x15aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x15aaec: 0xa062032d  sb          $v0, 0x32D($v1)
    ctx->pc = 0x15aaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 813), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aaf0: 0x90620337  lbu         $v0, 0x337($v1)
    ctx->pc = 0x15aaf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 823)));
    // 0x15aaf4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x15aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x15aaf8: 0xa0620337  sb          $v0, 0x337($v1)
    ctx->pc = 0x15aaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 823), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aafc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15aafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ab00:
    // 0x15ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AB08u;
    // 0x15ab08: 0x0  nop
    ctx->pc = 0x15ab08u;
    // NOP
    // 0x15ab0c: 0x0  nop
    ctx->pc = 0x15ab0cu;
    // NOP
label_15ab10:
    // 0x15ab10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15ab14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15ab18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ab1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ab20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ab24: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x15ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ab28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB28u;
    {
        const bool branch_taken_0x15ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB28u;
            // 0x15ab2c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab28) {
            ctx->pc = 0x15AB38u;
            goto label_15ab38;
        }
    }
    ctx->pc = 0x15AB30u;
    // 0x15ab30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15AB30u;
    {
        const bool branch_taken_0x15ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB30u;
            // 0x15ab34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab30) {
            ctx->pc = 0x15AB74u;
            goto label_15ab74;
        }
    }
    ctx->pc = 0x15AB38u;
label_15ab38:
    // 0x15ab38: 0xc062804  jal         func_18A010
    ctx->pc = 0x15AB38u;
    SET_GPR_U32(ctx, 31, 0x15AB40u);
    ctx->pc = 0x15AB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB38u;
            // 0x15ab3c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB40u; }
        if (ctx->pc != 0x15AB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB40u; }
        if (ctx->pc != 0x15AB40u) { return; }
    }
    ctx->pc = 0x15AB40u;
label_15ab40:
    // 0x15ab40: 0x86310008  lh          $s1, 0x8($s1)
    ctx->pc = 0x15ab40u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15ab44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ab44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab48: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x15ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x15ab4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ab50: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x15AB50u;
    SET_GPR_U32(ctx, 31, 0x15AB58u);
    ctx->pc = 0x15AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB50u;
            // 0x15ab54: 0x26260002  addiu       $a2, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB58u; }
        if (ctx->pc != 0x15AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB58u; }
        if (ctx->pc != 0x15AB58u) { return; }
    }
    ctx->pc = 0x15AB58u;
label_15ab58:
    // 0x15ab58: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x15AB58u;
    SET_GPR_U32(ctx, 31, 0x15AB60u);
    ctx->pc = 0x15AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB58u;
            // 0x15ab5c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB60u; }
        if (ctx->pc != 0x15AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB60u; }
        if (ctx->pc != 0x15AB60u) { return; }
    }
    ctx->pc = 0x15AB60u;
label_15ab60:
    // 0x15ab60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab68: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15AB68u;
    SET_GPR_U32(ctx, 31, 0x15AB70u);
    ctx->pc = 0x15AB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB68u;
            // 0x15ab6c: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB70u; }
        if (ctx->pc != 0x15AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB70u; }
        if (ctx->pc != 0x15AB70u) { return; }
    }
    ctx->pc = 0x15AB70u;
label_15ab70:
    // 0x15ab70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15ab70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ab74:
    // 0x15ab74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ab78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ab78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ab7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ab7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ab80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB84u;
            // 0x15ab88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AB8Cu;
    // 0x15ab8c: 0x0  nop
    ctx->pc = 0x15ab8cu;
    // NOP
label_15ab90:
    // 0x15ab90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ab94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ab98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ab9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aba0: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15aba4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ABA4u;
    {
        const bool branch_taken_0x15aba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABA4u;
            // 0x15aba8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aba4) {
            ctx->pc = 0x15ABB4u;
            goto label_15abb4;
        }
    }
    ctx->pc = 0x15ABACu;
    // 0x15abac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15ABACu;
    {
        const bool branch_taken_0x15abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABACu;
            // 0x15abb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abac) {
            ctx->pc = 0x15ABD4u;
            goto label_15abd4;
        }
    }
    ctx->pc = 0x15ABB4u;
label_15abb4:
    // 0x15abb4: 0xc062804  jal         func_18A010
    ctx->pc = 0x15ABB4u;
    SET_GPR_U32(ctx, 31, 0x15ABBCu);
    ctx->pc = 0x15ABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABB4u;
            // 0x15abb8: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABBCu; }
        if (ctx->pc != 0x15ABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ABBCu; }
        if (ctx->pc != 0x15ABBCu) { return; }
    }
    ctx->pc = 0x15ABBCu;
label_15abbc:
    // 0x15abbc: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x15abbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15abc0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15abc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15abc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15abcc: 0xa60404f8  sh          $a0, 0x4F8($s0)
    ctx->pc = 0x15abccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1272), (uint16_t)GPR_U32(ctx, 4));
    // 0x15abd0: 0xa60304f6  sh          $v1, 0x4F6($s0)
    ctx->pc = 0x15abd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1270), (uint16_t)GPR_U32(ctx, 3));
label_15abd4:
    // 0x15abd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15abd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15abd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15abdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABE0u;
            // 0x15abe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ABE8u;
    // 0x15abe8: 0x0  nop
    ctx->pc = 0x15abe8u;
    // NOP
    // 0x15abec: 0x0  nop
    ctx->pc = 0x15abecu;
    // NOP
label_15abf0:
    // 0x15abf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15abf4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x15abf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15abfc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15ac00: 0x90c3fff8  lbu         $v1, -0x8($a2)
    ctx->pc = 0x15ac00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x15ac04: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x15ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ac08: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x15ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x15ac0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ac10: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15ac10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x15ac14: 0xa043ef50  sb          $v1, -0x10B0($v0)
    ctx->pc = 0x15ac14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963024), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ac18: 0x90e2008c  lbu         $v0, 0x8C($a3)
    ctx->pc = 0x15ac18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x15ac1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ac20: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15AC20u;
    {
        const bool branch_taken_0x15ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac20) {
            ctx->pc = 0x15AC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC20u;
            // 0x15ac24: 0x84c30000  lh          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC48u;
            goto label_15ac48;
        }
    }
    ctx->pc = 0x15AC28u;
    // 0x15ac28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ac2c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ac30: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x15ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15ac34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ac34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ac38: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15ac3c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15ac3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x15ac40: 0xa043ef50  sb          $v1, -0x10B0($v0)
    ctx->pc = 0x15ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963024), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ac44: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_15ac48:
    // 0x15ac48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15ac4c: 0xa043db4e  sb          $v1, -0x24B2($v0)
    ctx->pc = 0x15ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957902), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ac50: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15ac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15ac54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15ac54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15ac58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC58u;
    {
        const bool branch_taken_0x15ac58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC58u;
            // 0x15ac5c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac58) {
            ctx->pc = 0x15AC68u;
            goto label_15ac68;
        }
    }
    ctx->pc = 0x15AC60u;
    // 0x15ac60: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ac64: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15ac64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15ac68:
    // 0x15ac68: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x15ac6c: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ac70: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15ac70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15ac74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15ac78: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x15ac78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x15ac7c: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x15ac80: 0xa043db4e  sb          $v1, -0x24B2($v0)
    ctx->pc = 0x15ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957902), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ac84: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15ac88: 0x8ce200dc  lw          $v0, 0xDC($a3)
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
    // 0x15ac8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15ac90: 0x2463dcb4  addiu       $v1, $v1, -0x234C
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958260));
    // 0x15ac94: 0x3048000c  andi        $t0, $v0, 0xC
    ctx->pc = 0x15ac94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x15ac98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ac98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac9c: 0x84882  srl         $t1, $t0, 2
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 2));
    // 0x15aca0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x15aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x15aca4: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x15aca8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x15aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x15acac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x15acacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15acb0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15acb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15acb8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15acbc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15acc0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15acc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15acc8: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15ACC8u;
    SET_GPR_U32(ctx, 31, 0x15ACD0u);
    ctx->pc = 0x15ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACC8u;
            // 0x15accc: 0xa04a0000  sb          $t2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACD0u; }
        if (ctx->pc != 0x15ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACD0u; }
        if (ctx->pc != 0x15ACD0u) { return; }
    }
    ctx->pc = 0x15ACD0u;
label_15acd0:
    // 0x15acd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15acd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acd8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACD8u;
            // 0x15acdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ACE0u;
label_15ace0:
    // 0x15ace0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x15ace0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ace4: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ace8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ACE8u;
    {
        const bool branch_taken_0x15ace8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACE8u;
            // 0x15acec: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ace8) {
            ctx->pc = 0x15ACF8u;
            goto label_15acf8;
        }
    }
    ctx->pc = 0x15ACF0u;
    // 0x15acf0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15acf4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15acf8:
    // 0x15acf8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x15acf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15acfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15acfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15ad00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ad04: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15AD04u;
    {
        const bool branch_taken_0x15ad04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ad04) {
            ctx->pc = 0x15AD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD04u;
            // 0x15ad08: 0x9082008c  lbu         $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AD74u;
            goto label_15ad74;
        }
    }
    ctx->pc = 0x15AD0Cu;
    // 0x15ad0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad10: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15AD10u;
    {
        const bool branch_taken_0x15ad10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ad10) {
            ctx->pc = 0x15AD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD10u;
            // 0x15ad14: 0x9082008c  lbu         $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AD3Cu;
            goto label_15ad3c;
        }
    }
    ctx->pc = 0x15AD18u;
    // 0x15ad18: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AD18u;
    {
        const bool branch_taken_0x15ad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad18) {
            ctx->pc = 0x15AD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD18u;
            // 0x15ad1c: 0x84830000  lh          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AD28u;
            goto label_15ad28;
        }
    }
    ctx->pc = 0x15AD20u;
    // 0x15ad20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15AD20u;
    {
        const bool branch_taken_0x15ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad20) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD28u;
label_15ad28:
    // 0x15ad28: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ad2c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x15ad30: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ad34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15AD34u;
    {
        const bool branch_taken_0x15ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD34u;
            // 0x15ad38: 0xa4434510  sh          $v1, 0x4510($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 17680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad34) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD3Cu;
label_15ad3c:
    // 0x15ad3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ad40: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AD40u;
    {
        const bool branch_taken_0x15ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad40) {
            ctx->pc = 0x15AD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD40u;
            // 0x15ad44: 0x84830000  lh          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AD60u;
            goto label_15ad60;
        }
    }
    ctx->pc = 0x15AD48u;
    // 0x15ad48: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x15ad48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ad4c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ad50: 0x240405e0  addiu       $a0, $zero, 0x5E0
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1504));
    // 0x15ad54: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ad58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15AD58u;
    {
        const bool branch_taken_0x15ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD58u;
            // 0x15ad5c: 0xa4434510  sh          $v1, 0x4510($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 17680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad58) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD60u;
label_15ad60:
    // 0x15ad60: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ad64: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x15ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ad68: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ad6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15AD6Cu;
    {
        const bool branch_taken_0x15ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD6Cu;
            // 0x15ad70: 0xa4434510  sh          $v1, 0x4510($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 17680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad6c) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ad78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AD78u;
    {
        const bool branch_taken_0x15ad78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad78) {
            ctx->pc = 0x15AD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD78u;
            // 0x15ad7c: 0x84830000  lh          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AD98u;
            goto label_15ad98;
        }
    }
    ctx->pc = 0x15AD80u;
    // 0x15ad80: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ad84: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ad88: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x15ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ad8c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ad90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15AD90u;
    {
        const bool branch_taken_0x15ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD90u;
            // 0x15ad94: 0xa4434510  sh          $v1, 0x4510($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 17680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad90) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD98u;
label_15ad98:
    // 0x15ad98: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ad9c: 0x240405e0  addiu       $a0, $zero, 0x5E0
    ctx->pc = 0x15ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1504));
    // 0x15ada0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ada4: 0xa4434510  sh          $v1, 0x4510($v0)
    ctx->pc = 0x15ada4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17680), (uint16_t)GPR_U32(ctx, 3));
label_15ada8:
    // 0x15ada8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15adac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ADB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADB0u;
            // 0x15adb4: 0xa4604508  sh          $zero, 0x4508($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 17672), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ADB8u;
    // 0x15adb8: 0x0  nop
    ctx->pc = 0x15adb8u;
    // NOP
    // 0x15adbc: 0x0  nop
    ctx->pc = 0x15adbcu;
    // NOP
label_15adc0:
    // 0x15adc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15adc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15adc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15adcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15add0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15add4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15add8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15addc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ade0: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ade4: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15ade8: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15ade8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15adec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15adecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adf0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15adf4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15adf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15adf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adfc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15adfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae00: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15AE00u;
    SET_GPR_U32(ctx, 31, 0x15AE08u);
    ctx->pc = 0x15AE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE00u;
            // 0x15ae04: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE08u; }
        if (ctx->pc != 0x15AE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE08u; }
        if (ctx->pc != 0x15AE08u) { return; }
    }
    ctx->pc = 0x15AE08u;
label_15ae08:
    // 0x15ae08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15ae08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae0c: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15AE0Cu;
    {
        const bool branch_taken_0x15ae0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae0c) {
            ctx->pc = 0x15AE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE0Cu;
            // 0x15ae10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AE7Cu;
            goto label_15ae7c;
        }
    }
    ctx->pc = 0x15AE14u;
    // 0x15ae14: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x15ae14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15ae18: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x15ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x15ae1c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15AE1Cu;
    SET_GPR_U32(ctx, 31, 0x15AE24u);
    ctx->pc = 0x15AE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE1Cu;
            // 0x15ae20: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE24u; }
        if (ctx->pc != 0x15AE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE24u; }
        if (ctx->pc != 0x15AE24u) { return; }
    }
    ctx->pc = 0x15AE24u;
label_15ae24:
    // 0x15ae24: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x15ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15ae28: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15ae2c: 0x2484eba0  addiu       $a0, $a0, -0x1460
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962080));
    // 0x15ae30: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15ae30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15ae34: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ae38: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15ae38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15ae3c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15ae40: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15ae40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15ae44: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15ae48: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15ae4c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15ae4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15ae50: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15ae50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ae54: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15ae54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ae58: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15ae58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15ae5c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15AE5Cu;
    SET_GPR_U32(ctx, 31, 0x15AE64u);
    ctx->pc = 0x15AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE5Cu;
            // 0x15ae60: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE64u; }
        if (ctx->pc != 0x15AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE64u; }
        if (ctx->pc != 0x15AE64u) { return; }
    }
    ctx->pc = 0x15AE64u;
label_15ae64:
    // 0x15ae64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15ae68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ae68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ae6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae70: 0xc057208  jal         func_15C820
    ctx->pc = 0x15AE70u;
    SET_GPR_U32(ctx, 31, 0x15AE78u);
    ctx->pc = 0x15AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE70u;
            // 0x15ae74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE78u; }
        if (ctx->pc != 0x15AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE78u; }
        if (ctx->pc != 0x15AE78u) { return; }
    }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15ae78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ae7c:
    // 0x15ae7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15ae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ae80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ae80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ae84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ae84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ae88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ae88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ae8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ae8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ae90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ae90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ae94: 0x3e00008  jr          $ra
    ctx->pc = 0x15AE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE94u;
            // 0x15ae98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AE9Cu;
    // 0x15ae9c: 0x0  nop
    ctx->pc = 0x15ae9cu;
    // NOP
label_15aea0:
    // 0x15aea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15aea4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15aea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aea8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15aeac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15aeb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15aeb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15aeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15aeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15aebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aec0: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15aec4: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x15aec4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15aec8: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15aec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15aecc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x15aeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aed0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15aed4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15aed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aedc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15aedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aee0: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x15AEE0u;
    SET_GPR_U32(ctx, 31, 0x15AEE8u);
    ctx->pc = 0x15AEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEE0u;
            // 0x15aee4: 0x24c6c600  addiu       $a2, $a2, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (runtime->hasFunction(0x164AA0u)) {
        auto targetFn = runtime->lookupFunction(0x164AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEE8u; }
        if (ctx->pc != 0x15AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AA0_0x164aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEE8u; }
        if (ctx->pc != 0x15AEE8u) { return; }
    }
    ctx->pc = 0x15AEE8u;
label_15aee8:
    // 0x15aee8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15aee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aeec: 0x5260001b  beql        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15AEECu;
    {
        const bool branch_taken_0x15aeec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aeec) {
            ctx->pc = 0x15AEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEECu;
            // 0x15aef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AF5Cu;
            goto label_15af5c;
        }
    }
    ctx->pc = 0x15AEF4u;
    // 0x15aef4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15aef8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x15aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x15aefc: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15AEFCu;
    SET_GPR_U32(ctx, 31, 0x15AF04u);
    ctx->pc = 0x15AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEFCu;
            // 0x15af00: 0x26050268  addiu       $a1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF04u; }
        if (ctx->pc != 0x15AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF04u; }
        if (ctx->pc != 0x15AF04u) { return; }
    }
    ctx->pc = 0x15AF04u;
label_15af04:
    // 0x15af04: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x15af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x15af08: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15af08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15af0c: 0x2484eba8  addiu       $a0, $a0, -0x1458
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962088));
    // 0x15af10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15af14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15af18: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x15af18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x15af1c: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15af20: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x15af20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x15af24: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x15af24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x15af28: 0xae0405e8  sw          $a0, 0x5E8($s0)
    ctx->pc = 0x15af28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 4));
    // 0x15af2c: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x15af2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x15af30: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x15af30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x15af34: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x15af34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af38: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x15af38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15af3c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x15AF3Cu;
    SET_GPR_U32(ctx, 31, 0x15AF44u);
    ctx->pc = 0x15AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF3Cu;
            // 0x15af40: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF44u; }
        if (ctx->pc != 0x15AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF44u; }
        if (ctx->pc != 0x15AF44u) { return; }
    }
    ctx->pc = 0x15AF44u;
label_15af44:
    // 0x15af44: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15af44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15af48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15af4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af50: 0xc057208  jal         func_15C820
    ctx->pc = 0x15AF50u;
    SET_GPR_U32(ctx, 31, 0x15AF58u);
    ctx->pc = 0x15AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF50u;
            // 0x15af54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF58u; }
        if (ctx->pc != 0x15AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C820_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF58u; }
        if (ctx->pc != 0x15AF58u) { return; }
    }
    ctx->pc = 0x15AF58u;
label_15af58:
    // 0x15af58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15af5c:
    // 0x15af5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15af5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15af60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15af60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15af64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15af64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15af68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15af68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15af6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15af6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15af70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15af70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15af74: 0x3e00008  jr          $ra
    ctx->pc = 0x15AF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF74u;
            // 0x15af78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AF7Cu;
    // 0x15af7c: 0x0  nop
    ctx->pc = 0x15af7cu;
    // NOP
label_15af80:
    // 0x15af80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15af84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15af8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15af90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15af90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15af94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15af94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15af98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15af9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15afa0: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15afa4: 0x84d10008  lh          $s1, 0x8($a2)
    ctx->pc = 0x15afa4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15afa8: 0x8cb40010  lw          $s4, 0x10($a1)
    ctx->pc = 0x15afa8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->pc = 0x15afacu;
}
