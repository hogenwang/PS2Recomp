#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F8D0
// Address: 0x25f8d0 - 0x25faf8
void sub_0025F8D0_0x25f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F8D0_0x25f8d0");
#endif

    switch (ctx->pc) {
        case 0x25f8d0u: goto label_25f8d0;
        case 0x25f8d4u: goto label_25f8d4;
        case 0x25f8d8u: goto label_25f8d8;
        case 0x25f8dcu: goto label_25f8dc;
        case 0x25f8e0u: goto label_25f8e0;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8e8u: goto label_25f8e8;
        case 0x25f8ecu: goto label_25f8ec;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f8f4u: goto label_25f8f4;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f8fcu: goto label_25f8fc;
        case 0x25f900u: goto label_25f900;
        case 0x25f904u: goto label_25f904;
        case 0x25f908u: goto label_25f908;
        case 0x25f90cu: goto label_25f90c;
        case 0x25f910u: goto label_25f910;
        case 0x25f914u: goto label_25f914;
        case 0x25f918u: goto label_25f918;
        case 0x25f91cu: goto label_25f91c;
        case 0x25f920u: goto label_25f920;
        case 0x25f924u: goto label_25f924;
        case 0x25f928u: goto label_25f928;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f930u: goto label_25f930;
        case 0x25f934u: goto label_25f934;
        case 0x25f938u: goto label_25f938;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f940u: goto label_25f940;
        case 0x25f944u: goto label_25f944;
        case 0x25f948u: goto label_25f948;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f950u: goto label_25f950;
        case 0x25f954u: goto label_25f954;
        case 0x25f958u: goto label_25f958;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f960u: goto label_25f960;
        case 0x25f964u: goto label_25f964;
        case 0x25f968u: goto label_25f968;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f970u: goto label_25f970;
        case 0x25f974u: goto label_25f974;
        case 0x25f978u: goto label_25f978;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f980u: goto label_25f980;
        case 0x25f984u: goto label_25f984;
        case 0x25f988u: goto label_25f988;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f990u: goto label_25f990;
        case 0x25f994u: goto label_25f994;
        case 0x25f998u: goto label_25f998;
        case 0x25f99cu: goto label_25f99c;
        case 0x25f9a0u: goto label_25f9a0;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9a8u: goto label_25f9a8;
        case 0x25f9acu: goto label_25f9ac;
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        default: break;
    }

    ctx->pc = 0x25f8d0u;

label_25f8d0:
    // 0x25f8d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25f8d4:
    // 0x25f8d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25f8d8:
    // 0x25f8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25f8dc:
    // 0x25f8dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25f8e0:
    // 0x25f8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f8e4:
    // 0x25f8e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_25f8e8:
    // 0x25f8e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_25f8ec:
    // 0x25f8ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25f8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25f8f0:
    // 0x25f8f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25f8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_25f8f4:
    // 0x25f8f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25f8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f8f8:
    // 0x25f8f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_25f8fc:
    // 0x25f8fc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25f900:
    // 0x25f900: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_25f904:
    // 0x25f904: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x25f904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_25f908:
    // 0x25f908: 0xac4317e8  sw          $v1, 0x17E8($v0)
    ctx->pc = 0x25f908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6120), GPR_U32(ctx, 3));
label_25f90c:
    // 0x25f90c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25f90cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25f910:
    // 0x25f910: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x25f910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25f914:
    // 0x25f914: 0x248417f0  addiu       $a0, $a0, 0x17F0
    ctx->pc = 0x25f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6128));
label_25f918:
    // 0x25f918: 0xc049cb6  jal         func_1272D8
label_25f91c:
    if (ctx->pc == 0x25F91Cu) {
        ctx->pc = 0x25F91Cu;
            // 0x25f91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F920u;
        goto label_25f920;
    }
    ctx->pc = 0x25F918u;
    SET_GPR_U32(ctx, 31, 0x25F920u);
    ctx->pc = 0x25F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F918u;
            // 0x25f91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F920u; }
        if (ctx->pc != 0x25F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F920u; }
        if (ctx->pc != 0x25F920u) { return; }
    }
    ctx->pc = 0x25F920u;
label_25f920:
    // 0x25f920: 0xc099634  jal         func_2658D0
label_25f924:
    if (ctx->pc == 0x25F924u) {
        ctx->pc = 0x25F928u;
        goto label_25f928;
    }
    ctx->pc = 0x25F920u;
    SET_GPR_U32(ctx, 31, 0x25F928u);
    ctx->pc = 0x2658D0u;
    if (runtime->hasFunction(0x2658D0u)) {
        auto targetFn = runtime->lookupFunction(0x2658D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F928u; }
        if (ctx->pc != 0x25F928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002658D0_0x2658d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F928u; }
        if (ctx->pc != 0x25F928u) { return; }
    }
    ctx->pc = 0x25F928u;
label_25f928:
    // 0x25f928: 0xc09a3c6  jal         func_268F18
label_25f92c:
    if (ctx->pc == 0x25F92Cu) {
        ctx->pc = 0x25F930u;
        goto label_25f930;
    }
    ctx->pc = 0x25F928u;
    SET_GPR_U32(ctx, 31, 0x25F930u);
    ctx->pc = 0x268F18u;
    if (runtime->hasFunction(0x268F18u)) {
        auto targetFn = runtime->lookupFunction(0x268F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F930u; }
        if (ctx->pc != 0x25F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268F18_0x268f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F930u; }
        if (ctx->pc != 0x25F930u) { return; }
    }
    ctx->pc = 0x25F930u;
label_25f930:
    // 0x25f930: 0xc09859e  jal         func_261678
label_25f934:
    if (ctx->pc == 0x25F934u) {
        ctx->pc = 0x25F938u;
        goto label_25f938;
    }
    ctx->pc = 0x25F930u;
    SET_GPR_U32(ctx, 31, 0x25F938u);
    ctx->pc = 0x261678u;
    if (runtime->hasFunction(0x261678u)) {
        auto targetFn = runtime->lookupFunction(0x261678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F938u; }
        if (ctx->pc != 0x25F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261678_0x261678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F938u; }
        if (ctx->pc != 0x25F938u) { return; }
    }
    ctx->pc = 0x25F938u;
label_25f938:
    // 0x25f938: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_25f93c:
    if (ctx->pc == 0x25F93Cu) {
        ctx->pc = 0x25F93Cu;
            // 0x25f93c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x25F940u;
        goto label_25f940;
    }
    ctx->pc = 0x25F938u;
    {
        const bool branch_taken_0x25f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F938u;
            // 0x25f93c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f938) {
            ctx->pc = 0x25F960u;
            goto label_25f960;
        }
    }
    ctx->pc = 0x25F940u;
label_25f940:
    // 0x25f940: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_25f944:
    // 0x25f944: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x25f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
label_25f948:
    // 0x25f948: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x25f948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_25f94c:
    // 0x25f94c: 0x902823  subu        $a1, $a0, $s0
    ctx->pc = 0x25f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_25f950:
    // 0x25f950: 0xc08a562  jal         func_229588
label_25f954:
    if (ctx->pc == 0x25F954u) {
        ctx->pc = 0x25F954u;
            // 0x25f954: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->pc = 0x25F958u;
        goto label_25f958;
    }
    ctx->pc = 0x25F950u;
    SET_GPR_U32(ctx, 31, 0x25F958u);
    ctx->pc = 0x25F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F950u;
            // 0x25f954: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229588u;
    if (runtime->hasFunction(0x229588u)) {
        auto targetFn = runtime->lookupFunction(0x229588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F958u; }
        if (ctx->pc != 0x25F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229588_0x229588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F958u; }
        if (ctx->pc != 0x25F958u) { return; }
    }
    ctx->pc = 0x25F958u;
label_25f958:
    // 0x25f958: 0x440005d  bltz        $v0, . + 4 + (0x5D << 2)
label_25f95c:
    if (ctx->pc == 0x25F95Cu) {
        ctx->pc = 0x25F95Cu;
            // 0x25f95c: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25F960u;
        goto label_25f960;
    }
    ctx->pc = 0x25F958u;
    {
        const bool branch_taken_0x25f958 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F958u;
            // 0x25f95c: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f958) {
            ctx->pc = 0x25FAD0u;
            goto label_25fad0;
        }
    }
    ctx->pc = 0x25F960u;
label_25f960:
    // 0x25f960: 0xc046016  jal         func_118058
label_25f964:
    if (ctx->pc == 0x25F964u) {
        ctx->pc = 0x25F968u;
        goto label_25f968;
    }
    ctx->pc = 0x25F960u;
    SET_GPR_U32(ctx, 31, 0x25F968u);
    ctx->pc = 0x118058u;
    if (runtime->hasFunction(0x118058u)) {
        auto targetFn = runtime->lookupFunction(0x118058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F968u; }
        if (ctx->pc != 0x25F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118058_0x118058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F968u; }
        if (ctx->pc != 0x25F968u) { return; }
    }
    ctx->pc = 0x25F968u;
label_25f968:
    // 0x25f968: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x25f968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_25f96c:
    // 0x25f96c: 0xc08b62c  jal         func_22D8B0
label_25f970:
    if (ctx->pc == 0x25F970u) {
        ctx->pc = 0x25F970u;
            // 0x25f970: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x25F974u;
        goto label_25f974;
    }
    ctx->pc = 0x25F96Cu;
    SET_GPR_U32(ctx, 31, 0x25F974u);
    ctx->pc = 0x25F970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F96Cu;
            // 0x25f970: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D8B0u;
    if (runtime->hasFunction(0x22D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F974u; }
        if (ctx->pc != 0x25F974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D8B0_0x22d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F974u; }
        if (ctx->pc != 0x25F974u) { return; }
    }
    ctx->pc = 0x25F974u;
label_25f974:
    // 0x25f974: 0xc08a8a4  jal         func_22A290
label_25f978:
    if (ctx->pc == 0x25F978u) {
        ctx->pc = 0x25F97Cu;
        goto label_25f97c;
    }
    ctx->pc = 0x25F974u;
    SET_GPR_U32(ctx, 31, 0x25F97Cu);
    ctx->pc = 0x22A290u;
    if (runtime->hasFunction(0x22A290u)) {
        auto targetFn = runtime->lookupFunction(0x22A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F97Cu; }
        if (ctx->pc != 0x25F97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A290_0x22a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F97Cu; }
        if (ctx->pc != 0x25F97Cu) { return; }
    }
    ctx->pc = 0x25F97Cu;
label_25f97c:
    // 0x25f97c: 0xc097ee2  jal         func_25FB88
label_25f980:
    if (ctx->pc == 0x25F980u) {
        ctx->pc = 0x25F984u;
        goto label_25f984;
    }
    ctx->pc = 0x25F97Cu;
    SET_GPR_U32(ctx, 31, 0x25F984u);
    ctx->pc = 0x25FB88u;
    if (runtime->hasFunction(0x25FB88u)) {
        auto targetFn = runtime->lookupFunction(0x25FB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F984u; }
        if (ctx->pc != 0x25F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FB88_0x25fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F984u; }
        if (ctx->pc != 0x25F984u) { return; }
    }
    ctx->pc = 0x25F984u;
label_25f984:
    // 0x25f984: 0x4400050  bltz        $v0, . + 4 + (0x50 << 2)
label_25f988:
    if (ctx->pc == 0x25F988u) {
        ctx->pc = 0x25F988u;
            // 0x25f988: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25F98Cu;
        goto label_25f98c;
    }
    ctx->pc = 0x25F984u;
    {
        const bool branch_taken_0x25f984 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F984u;
            // 0x25f988: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f984) {
            ctx->pc = 0x25FAC8u;
            goto label_25fac8;
        }
    }
    ctx->pc = 0x25F98Cu;
label_25f98c:
    // 0x25f98c: 0xc08a026  jal         func_228098
label_25f990:
    if (ctx->pc == 0x25F990u) {
        ctx->pc = 0x25F994u;
        goto label_25f994;
    }
    ctx->pc = 0x25F98Cu;
    SET_GPR_U32(ctx, 31, 0x25F994u);
    ctx->pc = 0x228098u;
    if (runtime->hasFunction(0x228098u)) {
        auto targetFn = runtime->lookupFunction(0x228098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F994u; }
        if (ctx->pc != 0x25F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228098_0x228098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F994u; }
        if (ctx->pc != 0x25F994u) { return; }
    }
    ctx->pc = 0x25F994u;
label_25f994:
    // 0x25f994: 0x440004a  bltz        $v0, . + 4 + (0x4A << 2)
label_25f998:
    if (ctx->pc == 0x25F998u) {
        ctx->pc = 0x25F99Cu;
        goto label_25f99c;
    }
    ctx->pc = 0x25F994u;
    {
        const bool branch_taken_0x25f994 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25f994) {
            ctx->pc = 0x25FAC0u;
            goto label_25fac0;
        }
    }
    ctx->pc = 0x25F99Cu;
label_25f99c:
    // 0x25f99c: 0xc08b630  jal         func_22D8C0
label_25f9a0:
    if (ctx->pc == 0x25F9A0u) {
        ctx->pc = 0x25F9A4u;
        goto label_25f9a4;
    }
    ctx->pc = 0x25F99Cu;
    SET_GPR_U32(ctx, 31, 0x25F9A4u);
    ctx->pc = 0x22D8C0u;
    if (runtime->hasFunction(0x22D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x22D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9A4u; }
        if (ctx->pc != 0x25F9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D8C0_0x22d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9A4u; }
        if (ctx->pc != 0x25F9A4u) { return; }
    }
    ctx->pc = 0x25F9A4u;
label_25f9a4:
    // 0x25f9a4: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
label_25f9a8:
    if (ctx->pc == 0x25F9A8u) {
        ctx->pc = 0x25F9ACu;
        goto label_25f9ac;
    }
    ctx->pc = 0x25F9A4u;
    {
        const bool branch_taken_0x25f9a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25f9a4) {
            ctx->pc = 0x25FAB8u;
            goto label_25fab8;
        }
    }
    ctx->pc = 0x25F9ACu;
label_25f9ac:
    // 0x25f9ac: 0xc08c65c  jal         func_231970
label_25f9b0:
    if (ctx->pc == 0x25F9B0u) {
        ctx->pc = 0x25F9B0u;
            // 0x25f9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F9B4u;
        goto label_25f9b4;
    }
    ctx->pc = 0x25F9ACu;
    SET_GPR_U32(ctx, 31, 0x25F9B4u);
    ctx->pc = 0x25F9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9ACu;
            // 0x25f9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231970u;
    if (runtime->hasFunction(0x231970u)) {
        auto targetFn = runtime->lookupFunction(0x231970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9B4u; }
        if (ctx->pc != 0x25F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231970_0x231970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9B4u; }
        if (ctx->pc != 0x25F9B4u) { return; }
    }
    ctx->pc = 0x25F9B4u;
label_25f9b4:
    // 0x25f9b4: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
label_25f9b8:
    if (ctx->pc == 0x25F9B8u) {
        ctx->pc = 0x25F9B8u;
            // 0x25f9b8: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25F9BCu;
        goto label_25f9bc;
    }
    ctx->pc = 0x25F9B4u;
    {
        const bool branch_taken_0x25f9b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9B4u;
            // 0x25f9b8: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9b4) {
            ctx->pc = 0x25FAB0u;
            goto label_25fab0;
        }
    }
    ctx->pc = 0x25F9BCu;
label_25f9bc:
    // 0x25f9bc: 0xc08b766  jal         func_22DD98
label_25f9c0:
    if (ctx->pc == 0x25F9C0u) {
        ctx->pc = 0x25F9C4u;
        goto label_25f9c4;
    }
    ctx->pc = 0x25F9BCu;
    SET_GPR_U32(ctx, 31, 0x25F9C4u);
    ctx->pc = 0x22DD98u;
    if (runtime->hasFunction(0x22DD98u)) {
        auto targetFn = runtime->lookupFunction(0x22DD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9C4u; }
        if (ctx->pc != 0x25F9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DD98_0x22dd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9C4u; }
        if (ctx->pc != 0x25F9C4u) { return; }
    }
    ctx->pc = 0x25F9C4u;
label_25f9c4:
    // 0x25f9c4: 0xc09722e  jal         func_25C8B8
label_25f9c8:
    if (ctx->pc == 0x25F9C8u) {
        ctx->pc = 0x25F9CCu;
        goto label_25f9cc;
    }
    ctx->pc = 0x25F9C4u;
    SET_GPR_U32(ctx, 31, 0x25F9CCu);
    ctx->pc = 0x25C8B8u;
    if (runtime->hasFunction(0x25C8B8u)) {
        auto targetFn = runtime->lookupFunction(0x25C8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9CCu; }
        if (ctx->pc != 0x25F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C8B8_0x25c8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9CCu; }
        if (ctx->pc != 0x25F9CCu) { return; }
    }
    ctx->pc = 0x25F9CCu;
label_25f9cc:
    // 0x25f9cc: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_25f9d0:
    if (ctx->pc == 0x25F9D0u) {
        ctx->pc = 0x25F9D4u;
        goto label_25f9d4;
    }
    ctx->pc = 0x25F9CCu;
    {
        const bool branch_taken_0x25f9cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25f9cc) {
            ctx->pc = 0x25FAA8u;
            goto label_25faa8;
        }
    }
    ctx->pc = 0x25F9D4u;
label_25f9d4:
    // 0x25f9d4: 0xc08d0d8  jal         func_234360
label_25f9d8:
    if (ctx->pc == 0x25F9D8u) {
        ctx->pc = 0x25F9DCu;
        goto label_25f9dc;
    }
    ctx->pc = 0x25F9D4u;
    SET_GPR_U32(ctx, 31, 0x25F9DCu);
    ctx->pc = 0x234360u;
    if (runtime->hasFunction(0x234360u)) {
        auto targetFn = runtime->lookupFunction(0x234360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9DCu; }
        if (ctx->pc != 0x25F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234360_0x234360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9DCu; }
        if (ctx->pc != 0x25F9DCu) { return; }
    }
    ctx->pc = 0x25F9DCu;
label_25f9dc:
    // 0x25f9dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25f9e0:
    // 0x25f9e0: 0x8c431778  lw          $v1, 0x1778($v0)
    ctx->pc = 0x25f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6008)));
label_25f9e4:
    // 0x25f9e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_25f9e8:
    if (ctx->pc == 0x25F9E8u) {
        ctx->pc = 0x25F9E8u;
            // 0x25f9e8: 0x24501778  addiu       $s0, $v0, 0x1778 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6008));
        ctx->pc = 0x25F9ECu;
        goto label_25f9ec;
    }
    ctx->pc = 0x25F9E4u;
    {
        const bool branch_taken_0x25f9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9E4u;
            // 0x25f9e8: 0x24501778  addiu       $s0, $v0, 0x1778 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9e4) {
            ctx->pc = 0x25FA08u;
            goto label_25fa08;
        }
    }
    ctx->pc = 0x25F9ECu;
label_25f9ec:
    // 0x25f9ec: 0x0  nop
    ctx->pc = 0x25f9ecu;
    // NOP
label_25f9f0:
    // 0x25f9f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25f9f4:
    // 0x25f9f4: 0x60f809  jalr        $v1
label_25f9f8:
    if (ctx->pc == 0x25F9F8u) {
        ctx->pc = 0x25F9F8u;
            // 0x25f9f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x25F9FCu;
        goto label_25f9fc;
    }
    ctx->pc = 0x25F9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25F9FCu);
        ctx->pc = 0x25F9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9F4u;
            // 0x25f9f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F9FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F9FCu; }
            if (ctx->pc != 0x25F9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x25F9FCu;
label_25f9fc:
    // 0x25f9fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25fa00:
    // 0x25fa00: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_25fa04:
    if (ctx->pc == 0x25FA04u) {
        ctx->pc = 0x25FA04u;
            // 0x25fa04: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FA08u;
        goto label_25fa08;
    }
    ctx->pc = 0x25FA00u;
    {
        const bool branch_taken_0x25fa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA00u;
            // 0x25fa04: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa00) {
            ctx->pc = 0x25F9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f9f0;
        }
    }
    ctx->pc = 0x25FA08u;
label_25fa08:
    // 0x25fa08: 0xc08a0cc  jal         func_228330
label_25fa0c:
    if (ctx->pc == 0x25FA0Cu) {
        ctx->pc = 0x25FA10u;
        goto label_25fa10;
    }
    ctx->pc = 0x25FA08u;
    SET_GPR_U32(ctx, 31, 0x25FA10u);
    ctx->pc = 0x228330u;
    if (runtime->hasFunction(0x228330u)) {
        auto targetFn = runtime->lookupFunction(0x228330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA10u; }
        if (ctx->pc != 0x25FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228330_0x228330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA10u; }
        if (ctx->pc != 0x25FA10u) { return; }
    }
    ctx->pc = 0x25FA10u;
label_25fa10:
    // 0x25fa10: 0xc097f80  jal         func_25FE00
label_25fa14:
    if (ctx->pc == 0x25FA14u) {
        ctx->pc = 0x25FA18u;
        goto label_25fa18;
    }
    ctx->pc = 0x25FA10u;
    SET_GPR_U32(ctx, 31, 0x25FA18u);
    ctx->pc = 0x25FE00u;
    if (runtime->hasFunction(0x25FE00u)) {
        auto targetFn = runtime->lookupFunction(0x25FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA18u; }
        if (ctx->pc != 0x25FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FE00_0x25fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA18u; }
        if (ctx->pc != 0x25FA18u) { return; }
    }
    ctx->pc = 0x25FA18u;
label_25fa18:
    // 0x25fa18: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
label_25fa1c:
    if (ctx->pc == 0x25FA1Cu) {
        ctx->pc = 0x25FA1Cu;
            // 0x25fa1c: 0x2410fffd  addiu       $s0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x25FA20u;
        goto label_25fa20;
    }
    ctx->pc = 0x25FA18u;
    {
        const bool branch_taken_0x25fa18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA18u;
            // 0x25fa1c: 0x2410fffd  addiu       $s0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa18) {
            ctx->pc = 0x25FAA0u;
            goto label_25faa0;
        }
    }
    ctx->pc = 0x25FA20u;
label_25fa20:
    // 0x25fa20: 0xc097db8  jal         func_25F6E0
label_25fa24:
    if (ctx->pc == 0x25FA24u) {
        ctx->pc = 0x25FA28u;
        goto label_25fa28;
    }
    ctx->pc = 0x25FA20u;
    SET_GPR_U32(ctx, 31, 0x25FA28u);
    ctx->pc = 0x25F6E0u;
    if (runtime->hasFunction(0x25F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x25F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA28u; }
        if (ctx->pc != 0x25FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F6E0_0x25f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA28u; }
        if (ctx->pc != 0x25FA28u) { return; }
    }
    ctx->pc = 0x25FA28u;
label_25fa28:
    // 0x25fa28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa2c:
    // 0x25fa2c: 0x600001a  bltz        $s0, . + 4 + (0x1A << 2)
label_25fa30:
    if (ctx->pc == 0x25FA30u) {
        ctx->pc = 0x25FA34u;
        goto label_25fa34;
    }
    ctx->pc = 0x25FA2Cu;
    {
        const bool branch_taken_0x25fa2c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x25fa2c) {
            ctx->pc = 0x25FA98u;
            goto label_25fa98;
        }
    }
    ctx->pc = 0x25FA34u;
label_25fa34:
    // 0x25fa34: 0xc097efe  jal         func_25FBF8
label_25fa38:
    if (ctx->pc == 0x25FA38u) {
        ctx->pc = 0x25FA3Cu;
        goto label_25fa3c;
    }
    ctx->pc = 0x25FA34u;
    SET_GPR_U32(ctx, 31, 0x25FA3Cu);
    ctx->pc = 0x25FBF8u;
    if (runtime->hasFunction(0x25FBF8u)) {
        auto targetFn = runtime->lookupFunction(0x25FBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA3Cu; }
        if (ctx->pc != 0x25FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FBF8_0x25fbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA3Cu; }
        if (ctx->pc != 0x25FA3Cu) { return; }
    }
    ctx->pc = 0x25FA3Cu;
label_25fa3c:
    // 0x25fa3c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_25fa40:
    if (ctx->pc == 0x25FA40u) {
        ctx->pc = 0x25FA40u;
            // 0x25fa40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FA44u;
        goto label_25fa44;
    }
    ctx->pc = 0x25FA3Cu;
    {
        const bool branch_taken_0x25fa3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA3Cu;
            // 0x25fa40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa3c) {
            ctx->pc = 0x25FA4Cu;
            goto label_25fa4c;
        }
    }
    ctx->pc = 0x25FA44u;
label_25fa44:
    // 0x25fa44: 0x10000012  b           . + 4 + (0x12 << 2)
label_25fa48:
    if (ctx->pc == 0x25FA48u) {
        ctx->pc = 0x25FA48u;
            // 0x25fa48: 0x2410ffea  addiu       $s0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->pc = 0x25FA4Cu;
        goto label_25fa4c;
    }
    ctx->pc = 0x25FA44u;
    {
        const bool branch_taken_0x25fa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA44u;
            // 0x25fa48: 0x2410ffea  addiu       $s0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa44) {
            ctx->pc = 0x25FA90u;
            goto label_25fa90;
        }
    }
    ctx->pc = 0x25FA4Cu;
label_25fa4c:
    // 0x25fa4c: 0xc098938  jal         func_2624E0
label_25fa50:
    if (ctx->pc == 0x25FA50u) {
        ctx->pc = 0x25FA50u;
            // 0x25fa50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FA54u;
        goto label_25fa54;
    }
    ctx->pc = 0x25FA4Cu;
    SET_GPR_U32(ctx, 31, 0x25FA54u);
    ctx->pc = 0x25FA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA4Cu;
            // 0x25fa50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2624E0u;
    if (runtime->hasFunction(0x2624E0u)) {
        auto targetFn = runtime->lookupFunction(0x2624E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA54u; }
        if (ctx->pc != 0x25FA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002624E0_0x2624e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA54u; }
        if (ctx->pc != 0x25FA54u) { return; }
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa58:
    // 0x25fa58: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_25fa5c:
    if (ctx->pc == 0x25FA5Cu) {
        ctx->pc = 0x25FA5Cu;
            // 0x25fa5c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x25FA60u;
        goto label_25fa60;
    }
    ctx->pc = 0x25FA58u;
    {
        const bool branch_taken_0x25fa58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25FA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA58u;
            // 0x25fa5c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa58) {
            ctx->pc = 0x25FA78u;
            goto label_25fa78;
        }
    }
    ctx->pc = 0x25FA60u;
label_25fa60:
    // 0x25fa60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_25fa64:
    // 0x25fa64: 0x8c451bc0  lw          $a1, 0x1BC0($v0)
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
label_25fa68:
    // 0x25fa68: 0xc043e52  jal         func_10F948
label_25fa6c:
    if (ctx->pc == 0x25FA6Cu) {
        ctx->pc = 0x25FA6Cu;
            // 0x25fa6c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
        ctx->pc = 0x25FA70u;
        goto label_25fa70;
    }
    ctx->pc = 0x25FA68u;
    SET_GPR_U32(ctx, 31, 0x25FA70u);
    ctx->pc = 0x25FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA68u;
            // 0x25fa6c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA70u; }
        if (ctx->pc != 0x25FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA70u; }
        if (ctx->pc != 0x25FA70u) { return; }
    }
    ctx->pc = 0x25FA70u;
label_25fa70:
    // 0x25fa70: 0x10000018  b           . + 4 + (0x18 << 2)
label_25fa74:
    if (ctx->pc == 0x25FA74u) {
        ctx->pc = 0x25FA74u;
            // 0x25fa74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FA78u;
        goto label_25fa78;
    }
    ctx->pc = 0x25FA70u;
    {
        const bool branch_taken_0x25fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA70u;
            // 0x25fa74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa70) {
            ctx->pc = 0x25FAD4u;
            goto label_25fad4;
        }
    }
    ctx->pc = 0x25FA78u;
label_25fa78:
    // 0x25fa78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_25fa7c:
    // 0x25fa7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fa80:
    // 0x25fa80: 0xc043e52  jal         func_10F948
label_25fa84:
    if (ctx->pc == 0x25FA84u) {
        ctx->pc = 0x25FA84u;
            // 0x25fa84: 0x24847158  addiu       $a0, $a0, 0x7158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29016));
        ctx->pc = 0x25FA88u;
        goto label_25fa88;
    }
    ctx->pc = 0x25FA80u;
    SET_GPR_U32(ctx, 31, 0x25FA88u);
    ctx->pc = 0x25FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA80u;
            // 0x25fa84: 0x24847158  addiu       $a0, $a0, 0x7158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA88u; }
        if (ctx->pc != 0x25FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA88u; }
        if (ctx->pc != 0x25FA88u) { return; }
    }
    ctx->pc = 0x25FA88u;
label_25fa88:
    // 0x25fa88: 0xc097f5a  jal         func_25FD68
label_25fa8c:
    if (ctx->pc == 0x25FA8Cu) {
        ctx->pc = 0x25FA90u;
        goto label_25fa90;
    }
    ctx->pc = 0x25FA88u;
    SET_GPR_U32(ctx, 31, 0x25FA90u);
    ctx->pc = 0x25FD68u;
    if (runtime->hasFunction(0x25FD68u)) {
        auto targetFn = runtime->lookupFunction(0x25FD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA90u; }
        if (ctx->pc != 0x25FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FD68_0x25fd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA90u; }
        if (ctx->pc != 0x25FA90u) { return; }
    }
    ctx->pc = 0x25FA90u;
label_25fa90:
    // 0x25fa90: 0xc097dea  jal         func_25F7A8
label_25fa94:
    if (ctx->pc == 0x25FA94u) {
        ctx->pc = 0x25FA98u;
        goto label_25fa98;
    }
    ctx->pc = 0x25FA90u;
    SET_GPR_U32(ctx, 31, 0x25FA98u);
    ctx->pc = 0x25F7A8u;
    if (runtime->hasFunction(0x25F7A8u)) {
        auto targetFn = runtime->lookupFunction(0x25F7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA98u; }
        if (ctx->pc != 0x25FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F7A8_0x25f7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA98u; }
        if (ctx->pc != 0x25FA98u) { return; }
    }
    ctx->pc = 0x25FA98u;
label_25fa98:
    // 0x25fa98: 0xc098006  jal         func_260018
label_25fa9c:
    if (ctx->pc == 0x25FA9Cu) {
        ctx->pc = 0x25FAA0u;
        goto label_25faa0;
    }
    ctx->pc = 0x25FA98u;
    SET_GPR_U32(ctx, 31, 0x25FAA0u);
    ctx->pc = 0x260018u;
    if (runtime->hasFunction(0x260018u)) {
        auto targetFn = runtime->lookupFunction(0x260018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAA0u; }
        if (ctx->pc != 0x25FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260018_0x260018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAA0u; }
        if (ctx->pc != 0x25FAA0u) { return; }
    }
    ctx->pc = 0x25FAA0u;
label_25faa0:
    // 0x25faa0: 0xc097350  jal         func_25CD40
label_25faa4:
    if (ctx->pc == 0x25FAA4u) {
        ctx->pc = 0x25FAA8u;
        goto label_25faa8;
    }
    ctx->pc = 0x25FAA0u;
    SET_GPR_U32(ctx, 31, 0x25FAA8u);
    ctx->pc = 0x25CD40u;
    if (runtime->hasFunction(0x25CD40u)) {
        auto targetFn = runtime->lookupFunction(0x25CD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAA8u; }
        if (ctx->pc != 0x25FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD40_0x25cd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAA8u; }
        if (ctx->pc != 0x25FAA8u) { return; }
    }
    ctx->pc = 0x25FAA8u;
label_25faa8:
    // 0x25faa8: 0xc08c672  jal         func_2319C8
label_25faac:
    if (ctx->pc == 0x25FAACu) {
        ctx->pc = 0x25FAB0u;
        goto label_25fab0;
    }
    ctx->pc = 0x25FAA8u;
    SET_GPR_U32(ctx, 31, 0x25FAB0u);
    ctx->pc = 0x2319C8u;
    if (runtime->hasFunction(0x2319C8u)) {
        auto targetFn = runtime->lookupFunction(0x2319C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAB0u; }
        if (ctx->pc != 0x25FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002319C8_0x2319c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAB0u; }
        if (ctx->pc != 0x25FAB0u) { return; }
    }
    ctx->pc = 0x25FAB0u;
label_25fab0:
    // 0x25fab0: 0xc08b64c  jal         func_22D930
label_25fab4:
    if (ctx->pc == 0x25FAB4u) {
        ctx->pc = 0x25FAB8u;
        goto label_25fab8;
    }
    ctx->pc = 0x25FAB0u;
    SET_GPR_U32(ctx, 31, 0x25FAB8u);
    ctx->pc = 0x22D930u;
    if (runtime->hasFunction(0x22D930u)) {
        auto targetFn = runtime->lookupFunction(0x22D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAB8u; }
        if (ctx->pc != 0x25FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D930_0x22d930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAB8u; }
        if (ctx->pc != 0x25FAB8u) { return; }
    }
    ctx->pc = 0x25FAB8u;
label_25fab8:
    // 0x25fab8: 0xc08a044  jal         func_228110
label_25fabc:
    if (ctx->pc == 0x25FABCu) {
        ctx->pc = 0x25FAC0u;
        goto label_25fac0;
    }
    ctx->pc = 0x25FAB8u;
    SET_GPR_U32(ctx, 31, 0x25FAC0u);
    ctx->pc = 0x228110u;
    if (runtime->hasFunction(0x228110u)) {
        auto targetFn = runtime->lookupFunction(0x228110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAC0u; }
        if (ctx->pc != 0x25FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228110_0x228110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAC0u; }
        if (ctx->pc != 0x25FAC0u) { return; }
    }
    ctx->pc = 0x25FAC0u;
label_25fac0:
    // 0x25fac0: 0xc097f70  jal         func_25FDC0
label_25fac4:
    if (ctx->pc == 0x25FAC4u) {
        ctx->pc = 0x25FAC8u;
        goto label_25fac8;
    }
    ctx->pc = 0x25FAC0u;
    SET_GPR_U32(ctx, 31, 0x25FAC8u);
    ctx->pc = 0x25FDC0u;
    if (runtime->hasFunction(0x25FDC0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAC8u; }
        if (ctx->pc != 0x25FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FDC0_0x25fdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAC8u; }
        if (ctx->pc != 0x25FAC8u) { return; }
    }
    ctx->pc = 0x25FAC8u;
label_25fac8:
    // 0x25fac8: 0xc08a5fc  jal         func_2297F0
label_25facc:
    if (ctx->pc == 0x25FACCu) {
        ctx->pc = 0x25FAD0u;
        goto label_25fad0;
    }
    ctx->pc = 0x25FAC8u;
    SET_GPR_U32(ctx, 31, 0x25FAD0u);
    ctx->pc = 0x2297F0u;
    if (runtime->hasFunction(0x2297F0u)) {
        auto targetFn = runtime->lookupFunction(0x2297F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAD0u; }
        if (ctx->pc != 0x25FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002297F0_0x2297f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAD0u; }
        if (ctx->pc != 0x25FAD0u) { return; }
    }
    ctx->pc = 0x25FAD0u;
label_25fad0:
    // 0x25fad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fad4:
    // 0x25fad4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25fad8:
    // 0x25fad8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25fad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25fadc:
    // 0x25fadc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25fadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25fae0:
    // 0x25fae0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25fae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25fae4:
    // 0x25fae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25fae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25fae8:
    // 0x25fae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25faec:
    // 0x25faec: 0x3e00008  jr          $ra
label_25faf0:
    if (ctx->pc == 0x25FAF0u) {
        ctx->pc = 0x25FAF0u;
            // 0x25faf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x25FAF4u;
        goto label_25faf4;
    }
    ctx->pc = 0x25FAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FAECu;
            // 0x25faf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FAF4u;
label_25faf4:
    // 0x25faf4: 0x0  nop
    ctx->pc = 0x25faf4u;
    // NOP
    ctx->pc = 0x25faf8u;
}
