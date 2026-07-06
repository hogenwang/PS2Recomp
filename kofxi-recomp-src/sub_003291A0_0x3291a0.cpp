#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003291A0
// Address: 0x3291a0 - 0x329fc0
void sub_003291A0_0x3291a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003291A0_0x3291a0");
#endif

    switch (ctx->pc) {
        case 0x3291b4u: goto label_3291b4;
        case 0x3291bcu: goto label_3291bc;
        case 0x3291d0u: goto label_3291d0;
        case 0x3291e4u: goto label_3291e4;
        case 0x3291ecu: goto label_3291ec;
        case 0x3291f4u: goto label_3291f4;
        case 0x3291fcu: goto label_3291fc;
        case 0x32920cu: goto label_32920c;
        case 0x329214u: goto label_329214;
        case 0x329220u: goto label_329220;
        case 0x329228u: goto label_329228;
        case 0x329234u: goto label_329234;
        case 0x32923cu: goto label_32923c;
        case 0x32924cu: goto label_32924c;
        case 0x329270u: goto label_329270;
        case 0x32929cu: goto label_32929c;
        case 0x3292d0u: goto label_3292d0;
        case 0x3292d8u: goto label_3292d8;
        case 0x329310u: goto label_329310;
        case 0x329334u: goto label_329334;
        case 0x329378u: goto label_329378;
        case 0x329394u: goto label_329394;
        case 0x3293acu: goto label_3293ac;
        case 0x3293b4u: goto label_3293b4;
        case 0x3293ecu: goto label_3293ec;
        case 0x3293f4u: goto label_3293f4;
        case 0x3293fcu: goto label_3293fc;
        case 0x32940cu: goto label_32940c;
        case 0x329420u: goto label_329420;
        case 0x329434u: goto label_329434;
        case 0x32943cu: goto label_32943c;
        case 0x329444u: goto label_329444;
        case 0x32944cu: goto label_32944c;
        case 0x32945cu: goto label_32945c;
        case 0x329464u: goto label_329464;
        case 0x329470u: goto label_329470;
        case 0x329478u: goto label_329478;
        case 0x329484u: goto label_329484;
        case 0x32948cu: goto label_32948c;
        case 0x32949cu: goto label_32949c;
        case 0x3294c0u: goto label_3294c0;
        case 0x3294ecu: goto label_3294ec;
        case 0x329520u: goto label_329520;
        case 0x329528u: goto label_329528;
        case 0x329560u: goto label_329560;
        case 0x329584u: goto label_329584;
        case 0x3295c8u: goto label_3295c8;
        case 0x3295e4u: goto label_3295e4;
        case 0x3295fcu: goto label_3295fc;
        case 0x329604u: goto label_329604;
        case 0x32963cu: goto label_32963c;
        case 0x329644u: goto label_329644;
        case 0x32964cu: goto label_32964c;
        case 0x32965cu: goto label_32965c;
        case 0x329670u: goto label_329670;
        case 0x329684u: goto label_329684;
        case 0x32968cu: goto label_32968c;
        case 0x329694u: goto label_329694;
        case 0x32969cu: goto label_32969c;
        case 0x3296acu: goto label_3296ac;
        case 0x3296b4u: goto label_3296b4;
        case 0x3296d0u: goto label_3296d0;
        case 0x3296e4u: goto label_3296e4;
        case 0x3296ecu: goto label_3296ec;
        case 0x3296f8u: goto label_3296f8;
        case 0x329700u: goto label_329700;
        case 0x329724u: goto label_329724;
        case 0x32973cu: goto label_32973c;
        case 0x329760u: goto label_329760;
        case 0x32978cu: goto label_32978c;
        case 0x329794u: goto label_329794;
        case 0x3297d0u: goto label_3297d0;
        case 0x3297e4u: goto label_3297e4;
        case 0x3297fcu: goto label_3297fc;
        case 0x329804u: goto label_329804;
        case 0x329820u: goto label_329820;
        case 0x329830u: goto label_329830;
        case 0x329840u: goto label_329840;
        case 0x329854u: goto label_329854;
        case 0x32985cu: goto label_32985c;
        case 0x329864u: goto label_329864;
        case 0x32986cu: goto label_32986c;
        case 0x32989cu: goto label_32989c;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298b8u: goto label_3298b8;
        case 0x3298d0u: goto label_3298d0;
        case 0x3298f4u: goto label_3298f4;
        case 0x329904u: goto label_329904;
        case 0x329920u: goto label_329920;
        case 0x329940u: goto label_329940;
        case 0x329948u: goto label_329948;
        case 0x329950u: goto label_329950;
        case 0x329960u: goto label_329960;
        case 0x329a14u: goto label_329a14;
        case 0x329a90u: goto label_329a90;
        case 0x329a9cu: goto label_329a9c;
        case 0x329ac0u: goto label_329ac0;
        case 0x329af0u: goto label_329af0;
        case 0x329b28u: goto label_329b28;
        case 0x329b38u: goto label_329b38;
        case 0x329b48u: goto label_329b48;
        case 0x329b58u: goto label_329b58;
        case 0x329b6cu: goto label_329b6c;
        case 0x329b78u: goto label_329b78;
        case 0x329bb8u: goto label_329bb8;
        case 0x329bccu: goto label_329bcc;
        case 0x329bf8u: goto label_329bf8;
        case 0x329c00u: goto label_329c00;
        case 0x329c30u: goto label_329c30;
        case 0x329c44u: goto label_329c44;
        case 0x329c4cu: goto label_329c4c;
        case 0x329c6cu: goto label_329c6c;
        case 0x329c7cu: goto label_329c7c;
        case 0x329c88u: goto label_329c88;
        case 0x329ca0u: goto label_329ca0;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cc8u: goto label_329cc8;
        case 0x329cd4u: goto label_329cd4;
        case 0x329d28u: goto label_329d28;
        case 0x329d50u: goto label_329d50;
        case 0x329d5cu: goto label_329d5c;
        case 0x329d6cu: goto label_329d6c;
        case 0x329d90u: goto label_329d90;
        case 0x329e24u: goto label_329e24;
        case 0x329e38u: goto label_329e38;
        case 0x329e40u: goto label_329e40;
        case 0x329e50u: goto label_329e50;
        case 0x329e60u: goto label_329e60;
        case 0x329e90u: goto label_329e90;
        case 0x329eb8u: goto label_329eb8;
        case 0x329ee0u: goto label_329ee0;
        case 0x329f08u: goto label_329f08;
        case 0x329f38u: goto label_329f38;
        case 0x329f54u: goto label_329f54;
        case 0x329f64u: goto label_329f64;
        case 0x329f7cu: goto label_329f7c;
        case 0x329fa0u: goto label_329fa0;
        default: break;
    }

    ctx->pc = 0x3291a0u;

    // 0x3291a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3291a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3291a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3291a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3291a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3291a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3291ac: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x3291ACu;
    SET_GPR_U32(ctx, 31, 0x3291B4u);
    ctx->pc = 0x3291B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3291ACu;
            // 0x3291b0: 0x24841618  addiu       $a0, $a0, 0x1618 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (runtime->hasFunction(0x19F300u)) {
        auto targetFn = runtime->lookupFunction(0x19F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291B4u; }
        if (ctx->pc != 0x3291B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F300_0x19f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291B4u; }
        if (ctx->pc != 0x3291B4u) { return; }
    }
    ctx->pc = 0x3291B4u;
label_3291b4:
    // 0x3291b4: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x3291B4u;
    SET_GPR_U32(ctx, 31, 0x3291BCu);
    ctx->pc = 0x322A70u;
    if (runtime->hasFunction(0x322A70u)) {
        auto targetFn = runtime->lookupFunction(0x322A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291BCu; }
        if (ctx->pc != 0x3291BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322A70_0x322a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291BCu; }
        if (ctx->pc != 0x3291BCu) { return; }
    }
    ctx->pc = 0x3291BCu;
label_3291bc:
    // 0x3291bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3291bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3291c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3291C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3291C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3291C0u;
            // 0x3291c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3291C8u;
    // 0x3291c8: 0x0  nop
    ctx->pc = 0x3291c8u;
    // NOP
    // 0x3291cc: 0x0  nop
    ctx->pc = 0x3291ccu;
    // NOP
label_3291d0:
    // 0x3291d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3291d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3291d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3291d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3291d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3291d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3291dc: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x3291DCu;
    SET_GPR_U32(ctx, 31, 0x3291E4u);
    ctx->pc = 0x3291E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3291DCu;
            // 0x3291e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (runtime->hasFunction(0x1717D0u)) {
        auto targetFn = runtime->lookupFunction(0x1717D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291E4u; }
        if (ctx->pc != 0x3291E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717D0_0x1717d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291E4u; }
        if (ctx->pc != 0x3291E4u) { return; }
    }
    ctx->pc = 0x3291E4u;
label_3291e4:
    // 0x3291e4: 0xc055684  jal         func_155A10
    ctx->pc = 0x3291E4u;
    SET_GPR_U32(ctx, 31, 0x3291ECu);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291ECu; }
        if (ctx->pc != 0x3291ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291ECu; }
        if (ctx->pc != 0x3291ECu) { return; }
    }
    ctx->pc = 0x3291ECu;
label_3291ec:
    // 0x3291ec: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x3291ECu;
    SET_GPR_U32(ctx, 31, 0x3291F4u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291F4u; }
        if (ctx->pc != 0x3291F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291F4u; }
        if (ctx->pc != 0x3291F4u) { return; }
    }
    ctx->pc = 0x3291F4u;
label_3291f4:
    // 0x3291f4: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x3291F4u;
    SET_GPR_U32(ctx, 31, 0x3291FCu);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291FCu; }
        if (ctx->pc != 0x3291FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3291FCu; }
        if (ctx->pc != 0x3291FCu) { return; }
    }
    ctx->pc = 0x3291FCu;
label_3291fc:
    // 0x3291fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3291fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329204: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329204u;
    SET_GPR_U32(ctx, 31, 0x32920Cu);
    ctx->pc = 0x329208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329204u;
            // 0x329208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32920Cu; }
        if (ctx->pc != 0x32920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32920Cu; }
        if (ctx->pc != 0x32920Cu) { return; }
    }
    ctx->pc = 0x32920Cu;
label_32920c:
    // 0x32920c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x32920Cu;
    SET_GPR_U32(ctx, 31, 0x329214u);
    ctx->pc = 0x329210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32920Cu;
            // 0x329210: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (runtime->hasFunction(0x1A0530u)) {
        auto targetFn = runtime->lookupFunction(0x1A0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329214u; }
        if (ctx->pc != 0x329214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0530_0x1a0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329214u; }
        if (ctx->pc != 0x329214u) { return; }
    }
    ctx->pc = 0x329214u;
label_329214:
    // 0x329214: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x329214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x329218: 0xc0558d0  jal         func_156340
    ctx->pc = 0x329218u;
    SET_GPR_U32(ctx, 31, 0x329220u);
    ctx->pc = 0x32921Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329218u;
            // 0x32921c: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329220u; }
        if (ctx->pc != 0x329220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329220u; }
        if (ctx->pc != 0x329220u) { return; }
    }
    ctx->pc = 0x329220u;
label_329220:
    // 0x329220: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x329220u;
    SET_GPR_U32(ctx, 31, 0x329228u);
    ctx->pc = 0x1762F0u;
    if (runtime->hasFunction(0x1762F0u)) {
        auto targetFn = runtime->lookupFunction(0x1762F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329228u; }
        if (ctx->pc != 0x329228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001762F0_0x1762f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329228u; }
        if (ctx->pc != 0x329228u) { return; }
    }
    ctx->pc = 0x329228u;
label_329228:
    // 0x329228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32922c: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x32922Cu;
    SET_GPR_U32(ctx, 31, 0x329234u);
    ctx->pc = 0x329230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32922Cu;
            // 0x329230: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (runtime->hasFunction(0x1768A0u)) {
        auto targetFn = runtime->lookupFunction(0x1768A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329234u; }
        if (ctx->pc != 0x329234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001768A0_0x1768a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329234u; }
        if (ctx->pc != 0x329234u) { return; }
    }
    ctx->pc = 0x329234u;
label_329234:
    // 0x329234: 0xc05e114  jal         func_178450
    ctx->pc = 0x329234u;
    SET_GPR_U32(ctx, 31, 0x32923Cu);
    ctx->pc = 0x178450u;
    if (runtime->hasFunction(0x178450u)) {
        auto targetFn = runtime->lookupFunction(0x178450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32923Cu; }
        if (ctx->pc != 0x32923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178450_0x178450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32923Cu; }
        if (ctx->pc != 0x32923Cu) { return; }
    }
    ctx->pc = 0x32923Cu;
label_32923c:
    // 0x32923c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32923cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329244: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329244u;
    SET_GPR_U32(ctx, 31, 0x32924Cu);
    ctx->pc = 0x329248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329244u;
            // 0x329248: 0x24849270  addiu       $a0, $a0, -0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32924Cu; }
        if (ctx->pc != 0x32924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32924Cu; }
        if (ctx->pc != 0x32924Cu) { return; }
    }
    ctx->pc = 0x32924Cu;
label_32924c:
    // 0x32924c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32924cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x329250: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329254: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x329254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x329258: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x329258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x32925c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329264: 0x3e00008  jr          $ra
    ctx->pc = 0x329264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329264u;
            // 0x329268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32926Cu;
    // 0x32926c: 0x0  nop
    ctx->pc = 0x32926cu;
    // NOP
label_329270:
    // 0x329270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329274: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32927c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329280: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x329280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x329284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329288: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x329288u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x32928c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32928Cu;
    {
        const bool branch_taken_0x32928c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x329290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32928Cu;
            // 0x329290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32928c) {
            ctx->pc = 0x3292A0u;
            goto label_3292a0;
        }
    }
    ctx->pc = 0x329294u;
    // 0x329294: 0xc05da4c  jal         func_176930
    ctx->pc = 0x329294u;
    SET_GPR_U32(ctx, 31, 0x32929Cu);
    ctx->pc = 0x176930u;
    if (runtime->hasFunction(0x176930u)) {
        auto targetFn = runtime->lookupFunction(0x176930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32929Cu; }
        if (ctx->pc != 0x32929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176930_0x176930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32929Cu; }
        if (ctx->pc != 0x32929Cu) { return; }
    }
    ctx->pc = 0x32929Cu;
label_32929c:
    // 0x32929c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3292a0:
    // 0x3292a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3292a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3292a4: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x3292a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x3292a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3292A8u;
    {
        const bool branch_taken_0x3292a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3292a8) {
            ctx->pc = 0x3292B8u;
            goto label_3292b8;
        }
    }
    ctx->pc = 0x3292B0u;
    // 0x3292b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3292B0u;
    {
        const bool branch_taken_0x3292b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292b0) {
            ctx->pc = 0x3292D8u;
            goto label_3292d8;
        }
    }
    ctx->pc = 0x3292B8u;
label_3292b8:
    // 0x3292b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3292bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3292bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292c0: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x3292c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x3292c4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3292c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3292c8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3292C8u;
    SET_GPR_U32(ctx, 31, 0x3292D0u);
    ctx->pc = 0x3292CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3292C8u;
            // 0x3292cc: 0x24849310  addiu       $a0, $a0, -0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292D0u; }
        if (ctx->pc != 0x3292D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292D0u; }
        if (ctx->pc != 0x3292D0u) { return; }
    }
    ctx->pc = 0x3292D0u;
label_3292d0:
    // 0x3292d0: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x3292D0u;
    SET_GPR_U32(ctx, 31, 0x3292D8u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292D8u; }
        if (ctx->pc != 0x3292D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292D8u; }
        if (ctx->pc != 0x3292D8u) { return; }
    }
    ctx->pc = 0x3292D8u;
label_3292d8:
    // 0x3292d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3292d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3292dc: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x3292dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x3292e0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3292E0u;
    {
        const bool branch_taken_0x3292e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292e0) {
            ctx->pc = 0x3292E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3292E0u;
            // 0x3292e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329300u;
            goto label_329300;
        }
    }
    ctx->pc = 0x3292E8u;
    // 0x3292e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3292e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3292ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3292ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3292f0: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x3292f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x3292f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3292f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3292f8: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x3292f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x3292fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3292fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329300:
    // 0x329300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329304: 0x3e00008  jr          $ra
    ctx->pc = 0x329304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329304u;
            // 0x329308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32930Cu;
    // 0x32930c: 0x0  nop
    ctx->pc = 0x32930cu;
    // NOP
label_329310:
    // 0x329310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329314: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32931c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329320: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x329320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x329324: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x329324u;
    {
        const bool branch_taken_0x329324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329324u;
            // 0x329328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329324) {
            ctx->pc = 0x329380u;
            goto label_329380;
        }
    }
    ctx->pc = 0x32932Cu;
    // 0x32932c: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x32932Cu;
    SET_GPR_U32(ctx, 31, 0x329334u);
    ctx->pc = 0x14E350u;
    if (runtime->hasFunction(0x14E350u)) {
        auto targetFn = runtime->lookupFunction(0x14E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329334u; }
        if (ctx->pc != 0x329334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E350_0x14e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329334u; }
        if (ctx->pc != 0x329334u) { return; }
    }
    ctx->pc = 0x329334u;
label_329334:
    // 0x329334: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x329334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x329338: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x329338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32933c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32933Cu;
    {
        const bool branch_taken_0x32933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32933c) {
            ctx->pc = 0x329380u;
            goto label_329380;
        }
    }
    ctx->pc = 0x329344u;
    // 0x329344: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329348: 0x8c42f088  lw          $v0, -0xF78($v0)
    ctx->pc = 0x329348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963336)));
    // 0x32934c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x32934cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x329350: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x329350u;
    {
        const bool branch_taken_0x329350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329350) {
            ctx->pc = 0x329354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329350u;
            // 0x329354: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329370u;
            goto label_329370;
        }
    }
    ctx->pc = 0x329358u;
    // 0x329358: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x329358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x32935c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329360: 0xac43f088  sw          $v1, -0xF78($v0)
    ctx->pc = 0x329360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963336), GPR_U32(ctx, 3));
    // 0x329364: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x329364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329368: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x329368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32936c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32936cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_329370:
    // 0x329370: 0xc05e900  jal         func_17A400
    ctx->pc = 0x329370u;
    SET_GPR_U32(ctx, 31, 0x329378u);
    ctx->pc = 0x329374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329370u;
            // 0x329374: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A400u;
    if (runtime->hasFunction(0x17A400u)) {
        auto targetFn = runtime->lookupFunction(0x17A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329378u; }
        if (ctx->pc != 0x329378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A400_0x17a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329378u; }
        if (ctx->pc != 0x329378u) { return; }
    }
    ctx->pc = 0x329378u;
label_329378:
    // 0x329378: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x329378u;
    {
        const bool branch_taken_0x329378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329378u;
            // 0x32937c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329378) {
            ctx->pc = 0x329410u;
            goto label_329410;
        }
    }
    ctx->pc = 0x329380u;
label_329380:
    // 0x329380: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329384: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329388: 0xac60f088  sw          $zero, -0xF78($v1)
    ctx->pc = 0x329388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963336), GPR_U32(ctx, 0));
    // 0x32938c: 0xc05e118  jal         func_178460
    ctx->pc = 0x32938Cu;
    SET_GPR_U32(ctx, 31, 0x329394u);
    ctx->pc = 0x329390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32938Cu;
            // 0x329390: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329394u; }
        if (ctx->pc != 0x329394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329394u; }
        if (ctx->pc != 0x329394u) { return; }
    }
    ctx->pc = 0x329394u;
label_329394:
    // 0x329394: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x329394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x329398: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x329398u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32939c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32939Cu;
    {
        const bool branch_taken_0x32939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32939c) {
            ctx->pc = 0x3293ACu;
            goto label_3293ac;
        }
    }
    ctx->pc = 0x3293A4u;
    // 0x3293a4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x3293A4u;
    SET_GPR_U32(ctx, 31, 0x3293ACu);
    ctx->pc = 0x17A5D0u;
    if (runtime->hasFunction(0x17A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293ACu; }
        if (ctx->pc != 0x3293ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D0_0x17a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293ACu; }
        if (ctx->pc != 0x3293ACu) { return; }
    }
    ctx->pc = 0x3293ACu;
label_3293ac:
    // 0x3293ac: 0xc05e118  jal         func_178460
    ctx->pc = 0x3293ACu;
    SET_GPR_U32(ctx, 31, 0x3293B4u);
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293B4u; }
        if (ctx->pc != 0x3293B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293B4u; }
        if (ctx->pc != 0x3293B4u) { return; }
    }
    ctx->pc = 0x3293B4u;
label_3293b4:
    // 0x3293b4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3293b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3293b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3293b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3293bc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3293bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3293c0: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3293C0u;
    {
        const bool branch_taken_0x3293c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3293c0) {
            ctx->pc = 0x32940Cu;
            goto label_32940c;
        }
    }
    ctx->pc = 0x3293C8u;
    // 0x3293c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3293cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3293ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3293d0: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3293d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3293d4: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3293D4u;
    {
        const bool branch_taken_0x3293d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3293d4) {
            ctx->pc = 0x3293D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3293D4u;
            // 0x3293d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329404u;
            goto label_329404;
        }
    }
    ctx->pc = 0x3293DCu;
    // 0x3293dc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3293dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3293e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3293e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293e4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3293E4u;
    SET_GPR_U32(ctx, 31, 0x3293ECu);
    ctx->pc = 0x3293E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3293E4u;
            // 0x3293e8: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293ECu; }
        if (ctx->pc != 0x3293ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293ECu; }
        if (ctx->pc != 0x3293ECu) { return; }
    }
    ctx->pc = 0x3293ECu;
label_3293ec:
    // 0x3293ec: 0xc053318  jal         func_14CC60
    ctx->pc = 0x3293ECu;
    SET_GPR_U32(ctx, 31, 0x3293F4u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293F4u; }
        if (ctx->pc != 0x3293F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293F4u; }
        if (ctx->pc != 0x3293F4u) { return; }
    }
    ctx->pc = 0x3293F4u;
label_3293f4:
    // 0x3293f4: 0xc068244  jal         func_1A0910
    ctx->pc = 0x3293F4u;
    SET_GPR_U32(ctx, 31, 0x3293FCu);
    ctx->pc = 0x1A0910u;
    if (runtime->hasFunction(0x1A0910u)) {
        auto targetFn = runtime->lookupFunction(0x1A0910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293FCu; }
        if (ctx->pc != 0x3293FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0910_0x1a0910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3293FCu; }
        if (ctx->pc != 0x3293FCu) { return; }
    }
    ctx->pc = 0x3293FCu;
label_3293fc:
    // 0x3293fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3293FCu;
    {
        const bool branch_taken_0x3293fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3293fc) {
            ctx->pc = 0x32940Cu;
            goto label_32940c;
        }
    }
    ctx->pc = 0x329404u;
label_329404:
    // 0x329404: 0xc055770  jal         func_155DC0
    ctx->pc = 0x329404u;
    SET_GPR_U32(ctx, 31, 0x32940Cu);
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32940Cu; }
        if (ctx->pc != 0x32940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32940Cu; }
        if (ctx->pc != 0x32940Cu) { return; }
    }
    ctx->pc = 0x32940Cu;
label_32940c:
    // 0x32940c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329410:
    // 0x329410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329414: 0x3e00008  jr          $ra
    ctx->pc = 0x329414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329414u;
            // 0x329418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32941Cu;
    // 0x32941c: 0x0  nop
    ctx->pc = 0x32941cu;
    // NOP
label_329420:
    // 0x329420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32942c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x32942Cu;
    SET_GPR_U32(ctx, 31, 0x329434u);
    ctx->pc = 0x329430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32942Cu;
            // 0x329430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (runtime->hasFunction(0x1717D0u)) {
        auto targetFn = runtime->lookupFunction(0x1717D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329434u; }
        if (ctx->pc != 0x329434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717D0_0x1717d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329434u; }
        if (ctx->pc != 0x329434u) { return; }
    }
    ctx->pc = 0x329434u;
label_329434:
    // 0x329434: 0xc055684  jal         func_155A10
    ctx->pc = 0x329434u;
    SET_GPR_U32(ctx, 31, 0x32943Cu);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32943Cu; }
        if (ctx->pc != 0x32943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32943Cu; }
        if (ctx->pc != 0x32943Cu) { return; }
    }
    ctx->pc = 0x32943Cu;
label_32943c:
    // 0x32943c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x32943Cu;
    SET_GPR_U32(ctx, 31, 0x329444u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329444u; }
        if (ctx->pc != 0x329444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329444u; }
        if (ctx->pc != 0x329444u) { return; }
    }
    ctx->pc = 0x329444u;
label_329444:
    // 0x329444: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x329444u;
    SET_GPR_U32(ctx, 31, 0x32944Cu);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32944Cu; }
        if (ctx->pc != 0x32944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32944Cu; }
        if (ctx->pc != 0x32944Cu) { return; }
    }
    ctx->pc = 0x32944Cu;
label_32944c:
    // 0x32944c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329454: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329454u;
    SET_GPR_U32(ctx, 31, 0x32945Cu);
    ctx->pc = 0x329458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329454u;
            // 0x329458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32945Cu; }
        if (ctx->pc != 0x32945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32945Cu; }
        if (ctx->pc != 0x32945Cu) { return; }
    }
    ctx->pc = 0x32945Cu;
label_32945c:
    // 0x32945c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x32945Cu;
    SET_GPR_U32(ctx, 31, 0x329464u);
    ctx->pc = 0x329460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32945Cu;
            // 0x329460: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (runtime->hasFunction(0x1A0530u)) {
        auto targetFn = runtime->lookupFunction(0x1A0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329464u; }
        if (ctx->pc != 0x329464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0530_0x1a0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329464u; }
        if (ctx->pc != 0x329464u) { return; }
    }
    ctx->pc = 0x329464u;
label_329464:
    // 0x329464: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x329464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x329468: 0xc0558d0  jal         func_156340
    ctx->pc = 0x329468u;
    SET_GPR_U32(ctx, 31, 0x329470u);
    ctx->pc = 0x32946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329468u;
            // 0x32946c: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329470u; }
        if (ctx->pc != 0x329470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329470u; }
        if (ctx->pc != 0x329470u) { return; }
    }
    ctx->pc = 0x329470u;
label_329470:
    // 0x329470: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x329470u;
    SET_GPR_U32(ctx, 31, 0x329478u);
    ctx->pc = 0x1762F0u;
    if (runtime->hasFunction(0x1762F0u)) {
        auto targetFn = runtime->lookupFunction(0x1762F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329478u; }
        if (ctx->pc != 0x329478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001762F0_0x1762f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329478u; }
        if (ctx->pc != 0x329478u) { return; }
    }
    ctx->pc = 0x329478u;
label_329478:
    // 0x329478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32947c: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x32947Cu;
    SET_GPR_U32(ctx, 31, 0x329484u);
    ctx->pc = 0x329480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32947Cu;
            // 0x329480: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (runtime->hasFunction(0x1768A0u)) {
        auto targetFn = runtime->lookupFunction(0x1768A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329484u; }
        if (ctx->pc != 0x329484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001768A0_0x1768a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329484u; }
        if (ctx->pc != 0x329484u) { return; }
    }
    ctx->pc = 0x329484u;
label_329484:
    // 0x329484: 0xc05e114  jal         func_178450
    ctx->pc = 0x329484u;
    SET_GPR_U32(ctx, 31, 0x32948Cu);
    ctx->pc = 0x178450u;
    if (runtime->hasFunction(0x178450u)) {
        auto targetFn = runtime->lookupFunction(0x178450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32948Cu; }
        if (ctx->pc != 0x32948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178450_0x178450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32948Cu; }
        if (ctx->pc != 0x32948Cu) { return; }
    }
    ctx->pc = 0x32948Cu;
label_32948c:
    // 0x32948c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32948cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329494: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329494u;
    SET_GPR_U32(ctx, 31, 0x32949Cu);
    ctx->pc = 0x329498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329494u;
            // 0x329498: 0x248494c0  addiu       $a0, $a0, -0x6B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32949Cu; }
        if (ctx->pc != 0x32949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32949Cu; }
        if (ctx->pc != 0x32949Cu) { return; }
    }
    ctx->pc = 0x32949Cu;
label_32949c:
    // 0x32949c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32949cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3294a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3294a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3294a4: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x3294a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3294a8: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x3294a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x3294ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3294acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3294b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3294b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3294b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3294B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3294B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3294B4u;
            // 0x3294b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3294BCu;
    // 0x3294bc: 0x0  nop
    ctx->pc = 0x3294bcu;
    // NOP
label_3294c0:
    // 0x3294c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3294c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3294c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3294c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3294c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3294c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3294cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3294ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3294d0: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x3294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x3294d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3294d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294d8: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x3294d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x3294dc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3294DCu;
    {
        const bool branch_taken_0x3294dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3294E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3294DCu;
            // 0x3294e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294dc) {
            ctx->pc = 0x3294F0u;
            goto label_3294f0;
        }
    }
    ctx->pc = 0x3294E4u;
    // 0x3294e4: 0xc05da4c  jal         func_176930
    ctx->pc = 0x3294E4u;
    SET_GPR_U32(ctx, 31, 0x3294ECu);
    ctx->pc = 0x176930u;
    if (runtime->hasFunction(0x176930u)) {
        auto targetFn = runtime->lookupFunction(0x176930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3294ECu; }
        if (ctx->pc != 0x3294ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176930_0x176930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3294ECu; }
        if (ctx->pc != 0x3294ECu) { return; }
    }
    ctx->pc = 0x3294ECu;
label_3294ec:
    // 0x3294ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3294ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3294f0:
    // 0x3294f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3294f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3294f4: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x3294f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3294F8u;
    {
        const bool branch_taken_0x3294f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3294f8) {
            ctx->pc = 0x329508u;
            goto label_329508;
        }
    }
    ctx->pc = 0x329500u;
    // 0x329500: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329500u;
    {
        const bool branch_taken_0x329500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329500) {
            ctx->pc = 0x329528u;
            goto label_329528;
        }
    }
    ctx->pc = 0x329508u;
label_329508:
    // 0x329508: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32950c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32950cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329510: 0xa044a218  sb          $a0, -0x5DE8($v0)
    ctx->pc = 0x329510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 4));
    // 0x329514: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x329514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329518: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329518u;
    SET_GPR_U32(ctx, 31, 0x329520u);
    ctx->pc = 0x32951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329518u;
            // 0x32951c: 0x24849560  addiu       $a0, $a0, -0x6AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329520u; }
        if (ctx->pc != 0x329520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329520u; }
        if (ctx->pc != 0x329520u) { return; }
    }
    ctx->pc = 0x329520u;
label_329520:
    // 0x329520: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x329520u;
    SET_GPR_U32(ctx, 31, 0x329528u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329528u; }
        if (ctx->pc != 0x329528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329528u; }
        if (ctx->pc != 0x329528u) { return; }
    }
    ctx->pc = 0x329528u;
label_329528:
    // 0x329528: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32952c: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x329530: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x329530u;
    {
        const bool branch_taken_0x329530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329530) {
            ctx->pc = 0x329534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329530u;
            // 0x329534: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329550u;
            goto label_329550;
        }
    }
    ctx->pc = 0x329538u;
    // 0x329538: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x329538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32953c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329540: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x329544: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x329544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329548: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x329548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x32954c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329550:
    // 0x329550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329554: 0x3e00008  jr          $ra
    ctx->pc = 0x329554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329554u;
            // 0x329558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32955Cu;
    // 0x32955c: 0x0  nop
    ctx->pc = 0x32955cu;
    // NOP
label_329560:
    // 0x329560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32956c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329570: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x329570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
    // 0x329574: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x329574u;
    {
        const bool branch_taken_0x329574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329574u;
            // 0x329578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329574) {
            ctx->pc = 0x3295D0u;
            goto label_3295d0;
        }
    }
    ctx->pc = 0x32957Cu;
    // 0x32957c: 0xc0538d4  jal         func_14E350
    ctx->pc = 0x32957Cu;
    SET_GPR_U32(ctx, 31, 0x329584u);
    ctx->pc = 0x14E350u;
    if (runtime->hasFunction(0x14E350u)) {
        auto targetFn = runtime->lookupFunction(0x14E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329584u; }
        if (ctx->pc != 0x329584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E350_0x14e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329584u; }
        if (ctx->pc != 0x329584u) { return; }
    }
    ctx->pc = 0x329584u;
label_329584:
    // 0x329584: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x329584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x329588: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x329588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32958c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32958Cu;
    {
        const bool branch_taken_0x32958c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32958c) {
            ctx->pc = 0x3295D0u;
            goto label_3295d0;
        }
    }
    ctx->pc = 0x329594u;
    // 0x329594: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329598: 0x8c42f090  lw          $v0, -0xF70($v0)
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963344)));
    // 0x32959c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x32959cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3295a0: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3295A0u;
    {
        const bool branch_taken_0x3295a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295a0) {
            ctx->pc = 0x3295A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3295A0u;
            // 0x3295a4: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3295C0u;
            goto label_3295c0;
        }
    }
    ctx->pc = 0x3295A8u;
    // 0x3295a8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x3295a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3295ac: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x3295acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x3295b0: 0xac43f090  sw          $v1, -0xF70($v0)
    ctx->pc = 0x3295b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963344), GPR_U32(ctx, 3));
    // 0x3295b4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3295b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3295b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3295bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3295bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_3295c0:
    // 0x3295c0: 0xc05e8f4  jal         func_17A3D0
    ctx->pc = 0x3295C0u;
    SET_GPR_U32(ctx, 31, 0x3295C8u);
    ctx->pc = 0x3295C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3295C0u;
            // 0x3295c4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A3D0u;
    if (runtime->hasFunction(0x17A3D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295C8u; }
        if (ctx->pc != 0x3295C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A3D0_0x17a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295C8u; }
        if (ctx->pc != 0x3295C8u) { return; }
    }
    ctx->pc = 0x3295C8u;
label_3295c8:
    // 0x3295c8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3295C8u;
    {
        const bool branch_taken_0x3295c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3295C8u;
            // 0x3295cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295c8) {
            ctx->pc = 0x329660u;
            goto label_329660;
        }
    }
    ctx->pc = 0x3295D0u;
label_3295d0:
    // 0x3295d0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3295d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3295d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3295d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3295d8: 0xac60f090  sw          $zero, -0xF70($v1)
    ctx->pc = 0x3295d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963344), GPR_U32(ctx, 0));
    // 0x3295dc: 0xc05e118  jal         func_178460
    ctx->pc = 0x3295DCu;
    SET_GPR_U32(ctx, 31, 0x3295E4u);
    ctx->pc = 0x3295E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3295DCu;
            // 0x3295e0: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295E4u; }
        if (ctx->pc != 0x3295E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295E4u; }
        if (ctx->pc != 0x3295E4u) { return; }
    }
    ctx->pc = 0x3295E4u;
label_3295e4:
    // 0x3295e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3295e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3295e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3295e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3295ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3295ECu;
    {
        const bool branch_taken_0x3295ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3295ec) {
            ctx->pc = 0x3295FCu;
            goto label_3295fc;
        }
    }
    ctx->pc = 0x3295F4u;
    // 0x3295f4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x3295F4u;
    SET_GPR_U32(ctx, 31, 0x3295FCu);
    ctx->pc = 0x17A5D0u;
    if (runtime->hasFunction(0x17A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295FCu; }
        if (ctx->pc != 0x3295FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D0_0x17a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3295FCu; }
        if (ctx->pc != 0x3295FCu) { return; }
    }
    ctx->pc = 0x3295FCu;
label_3295fc:
    // 0x3295fc: 0xc05e118  jal         func_178460
    ctx->pc = 0x3295FCu;
    SET_GPR_U32(ctx, 31, 0x329604u);
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329604u; }
        if (ctx->pc != 0x329604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329604u; }
        if (ctx->pc != 0x329604u) { return; }
    }
    ctx->pc = 0x329604u;
label_329604:
    // 0x329604: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x329604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x329608: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x329608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32960c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32960cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x329610: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x329610u;
    {
        const bool branch_taken_0x329610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329610) {
            ctx->pc = 0x32965Cu;
            goto label_32965c;
        }
    }
    ctx->pc = 0x329618u;
    // 0x329618: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x329618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32961c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x32961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x329620: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x329620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x329624: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x329624u;
    {
        const bool branch_taken_0x329624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x329624) {
            ctx->pc = 0x329628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329624u;
            // 0x329628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329654u;
            goto label_329654;
        }
    }
    ctx->pc = 0x32962Cu;
    // 0x32962c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x32962cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x329630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329634: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329634u;
    SET_GPR_U32(ctx, 31, 0x32963Cu);
    ctx->pc = 0x329638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329634u;
            // 0x329638: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32963Cu; }
        if (ctx->pc != 0x32963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32963Cu; }
        if (ctx->pc != 0x32963Cu) { return; }
    }
    ctx->pc = 0x32963Cu;
label_32963c:
    // 0x32963c: 0xc053318  jal         func_14CC60
    ctx->pc = 0x32963Cu;
    SET_GPR_U32(ctx, 31, 0x329644u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329644u; }
        if (ctx->pc != 0x329644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329644u; }
        if (ctx->pc != 0x329644u) { return; }
    }
    ctx->pc = 0x329644u;
label_329644:
    // 0x329644: 0xc068244  jal         func_1A0910
    ctx->pc = 0x329644u;
    SET_GPR_U32(ctx, 31, 0x32964Cu);
    ctx->pc = 0x1A0910u;
    if (runtime->hasFunction(0x1A0910u)) {
        auto targetFn = runtime->lookupFunction(0x1A0910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32964Cu; }
        if (ctx->pc != 0x32964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0910_0x1a0910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32964Cu; }
        if (ctx->pc != 0x32964Cu) { return; }
    }
    ctx->pc = 0x32964Cu;
label_32964c:
    // 0x32964c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32964Cu;
    {
        const bool branch_taken_0x32964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32964c) {
            ctx->pc = 0x32965Cu;
            goto label_32965c;
        }
    }
    ctx->pc = 0x329654u;
label_329654:
    // 0x329654: 0xc055770  jal         func_155DC0
    ctx->pc = 0x329654u;
    SET_GPR_U32(ctx, 31, 0x32965Cu);
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32965Cu; }
        if (ctx->pc != 0x32965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32965Cu; }
        if (ctx->pc != 0x32965Cu) { return; }
    }
    ctx->pc = 0x32965Cu;
label_32965c:
    // 0x32965c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329660:
    // 0x329660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329664: 0x3e00008  jr          $ra
    ctx->pc = 0x329664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329664u;
            // 0x329668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32966Cu;
    // 0x32966c: 0x0  nop
    ctx->pc = 0x32966cu;
    // NOP
label_329670:
    // 0x329670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32967c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x32967Cu;
    SET_GPR_U32(ctx, 31, 0x329684u);
    ctx->pc = 0x329680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32967Cu;
            // 0x329680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (runtime->hasFunction(0x1717D0u)) {
        auto targetFn = runtime->lookupFunction(0x1717D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329684u; }
        if (ctx->pc != 0x329684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717D0_0x1717d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329684u; }
        if (ctx->pc != 0x329684u) { return; }
    }
    ctx->pc = 0x329684u;
label_329684:
    // 0x329684: 0xc055684  jal         func_155A10
    ctx->pc = 0x329684u;
    SET_GPR_U32(ctx, 31, 0x32968Cu);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32968Cu; }
        if (ctx->pc != 0x32968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32968Cu; }
        if (ctx->pc != 0x32968Cu) { return; }
    }
    ctx->pc = 0x32968Cu;
label_32968c:
    // 0x32968c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x32968Cu;
    SET_GPR_U32(ctx, 31, 0x329694u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329694u; }
        if (ctx->pc != 0x329694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329694u; }
        if (ctx->pc != 0x329694u) { return; }
    }
    ctx->pc = 0x329694u;
label_329694:
    // 0x329694: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x329694u;
    SET_GPR_U32(ctx, 31, 0x32969Cu);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32969Cu; }
        if (ctx->pc != 0x32969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32969Cu; }
        if (ctx->pc != 0x32969Cu) { return; }
    }
    ctx->pc = 0x32969Cu;
label_32969c:
    // 0x32969c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3296a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296a4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x3296A4u;
    SET_GPR_U32(ctx, 31, 0x3296ACu);
    ctx->pc = 0x3296A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3296A4u;
            // 0x3296a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296ACu; }
        if (ctx->pc != 0x3296ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296ACu; }
        if (ctx->pc != 0x3296ACu) { return; }
    }
    ctx->pc = 0x3296ACu;
label_3296ac:
    // 0x3296ac: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x3296ACu;
    SET_GPR_U32(ctx, 31, 0x3296B4u);
    ctx->pc = 0x3296B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3296ACu;
            // 0x3296b0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (runtime->hasFunction(0x1A0530u)) {
        auto targetFn = runtime->lookupFunction(0x1A0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296B4u; }
        if (ctx->pc != 0x3296B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0530_0x1a0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296B4u; }
        if (ctx->pc != 0x3296B4u) { return; }
    }
    ctx->pc = 0x3296B4u;
label_3296b4:
    // 0x3296b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3296b8: 0x9442daa8  lhu         $v0, -0x2558($v0)
    ctx->pc = 0x3296b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957736)));
    // 0x3296bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3296BCu;
    {
        const bool branch_taken_0x3296bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3296bc) {
            ctx->pc = 0x3296D8u;
            goto label_3296d8;
        }
    }
    ctx->pc = 0x3296C4u;
    // 0x3296c4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x3296c8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x3296C8u;
    SET_GPR_U32(ctx, 31, 0x3296D0u);
    ctx->pc = 0x3296CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3296C8u;
            // 0x3296cc: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296D0u; }
        if (ctx->pc != 0x3296D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296D0u; }
        if (ctx->pc != 0x3296D0u) { return; }
    }
    ctx->pc = 0x3296D0u;
label_3296d0:
    // 0x3296d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3296D0u;
    {
        const bool branch_taken_0x3296d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296d0) {
            ctx->pc = 0x3296E4u;
            goto label_3296e4;
        }
    }
    ctx->pc = 0x3296D8u;
label_3296d8:
    // 0x3296d8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x3296d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x3296dc: 0xc0558d0  jal         func_156340
    ctx->pc = 0x3296DCu;
    SET_GPR_U32(ctx, 31, 0x3296E4u);
    ctx->pc = 0x3296E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3296DCu;
            // 0x3296e0: 0x248446c0  addiu       $a0, $a0, 0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296E4u; }
        if (ctx->pc != 0x3296E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296E4u; }
        if (ctx->pc != 0x3296E4u) { return; }
    }
    ctx->pc = 0x3296E4u;
label_3296e4:
    // 0x3296e4: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x3296E4u;
    SET_GPR_U32(ctx, 31, 0x3296ECu);
    ctx->pc = 0x1762F0u;
    if (runtime->hasFunction(0x1762F0u)) {
        auto targetFn = runtime->lookupFunction(0x1762F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296ECu; }
        if (ctx->pc != 0x3296ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001762F0_0x1762f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296ECu; }
        if (ctx->pc != 0x3296ECu) { return; }
    }
    ctx->pc = 0x3296ECu;
label_3296ec:
    // 0x3296ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3296ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296f0: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x3296F0u;
    SET_GPR_U32(ctx, 31, 0x3296F8u);
    ctx->pc = 0x3296F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3296F0u;
            // 0x3296f4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (runtime->hasFunction(0x1768A0u)) {
        auto targetFn = runtime->lookupFunction(0x1768A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296F8u; }
        if (ctx->pc != 0x3296F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001768A0_0x1768a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3296F8u; }
        if (ctx->pc != 0x3296F8u) { return; }
    }
    ctx->pc = 0x3296F8u;
label_3296f8:
    // 0x3296f8: 0xc05e114  jal         func_178450
    ctx->pc = 0x3296F8u;
    SET_GPR_U32(ctx, 31, 0x329700u);
    ctx->pc = 0x178450u;
    if (runtime->hasFunction(0x178450u)) {
        auto targetFn = runtime->lookupFunction(0x178450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329700u; }
        if (ctx->pc != 0x329700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178450_0x178450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329700u; }
        if (ctx->pc != 0x329700u) { return; }
    }
    ctx->pc = 0x329700u;
label_329700:
    // 0x329700: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x329700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x329704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329708: 0x9042f360  lbu         $v0, -0xCA0($v0)
    ctx->pc = 0x329708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964064)));
    // 0x32970c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32970Cu;
    {
        const bool branch_taken_0x32970c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32970c) {
            ctx->pc = 0x32972Cu;
            goto label_32972c;
        }
    }
    ctx->pc = 0x329714u;
    // 0x329714: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x329714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32971c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x32971Cu;
    SET_GPR_U32(ctx, 31, 0x329724u);
    ctx->pc = 0x329720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32971Cu;
            // 0x329720: 0x24849760  addiu       $a0, $a0, -0x68A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329724u; }
        if (ctx->pc != 0x329724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329724u; }
        if (ctx->pc != 0x329724u) { return; }
    }
    ctx->pc = 0x329724u;
label_329724:
    // 0x329724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329724u;
    {
        const bool branch_taken_0x329724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329724) {
            ctx->pc = 0x32973Cu;
            goto label_32973c;
        }
    }
    ctx->pc = 0x32972Cu;
label_32972c:
    // 0x32972c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32972cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329734: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329734u;
    SET_GPR_U32(ctx, 31, 0x32973Cu);
    ctx->pc = 0x329738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329734u;
            // 0x329738: 0x248497d0  addiu       $a0, $a0, -0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32973Cu; }
        if (ctx->pc != 0x32973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32973Cu; }
        if (ctx->pc != 0x32973Cu) { return; }
    }
    ctx->pc = 0x32973Cu;
label_32973c:
    // 0x32973c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32973cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x329740: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329744: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x329744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x329748: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x329748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x32974c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329754: 0x3e00008  jr          $ra
    ctx->pc = 0x329754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329754u;
            // 0x329758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32975Cu;
    // 0x32975c: 0x0  nop
    ctx->pc = 0x32975cu;
    // NOP
label_329760:
    // 0x329760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329764: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32976c: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x32976cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x329770: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329770u;
    {
        const bool branch_taken_0x329770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329770u;
            // 0x329774: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329770) {
            ctx->pc = 0x329794u;
            goto label_329794;
        }
    }
    ctx->pc = 0x329778u;
    // 0x329778: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32977c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329780: 0x248497d0  addiu       $a0, $a0, -0x6830
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
    // 0x329784: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329784u;
    SET_GPR_U32(ctx, 31, 0x32978Cu);
    ctx->pc = 0x329788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329784u;
            // 0x329788: 0xa040a218  sb          $zero, -0x5DE8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32978Cu; }
        if (ctx->pc != 0x32978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32978Cu; }
        if (ctx->pc != 0x32978Cu) { return; }
    }
    ctx->pc = 0x32978Cu;
label_32978c:
    // 0x32978c: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x32978Cu;
    SET_GPR_U32(ctx, 31, 0x329794u);
    ctx->pc = 0x1A0CF0u;
    if (runtime->hasFunction(0x1A0CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329794u; }
        if (ctx->pc != 0x329794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CF0_0x1a0cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329794u; }
        if (ctx->pc != 0x329794u) { return; }
    }
    ctx->pc = 0x329794u;
label_329794:
    // 0x329794: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329798: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x329798u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x32979c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32979Cu;
    {
        const bool branch_taken_0x32979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32979c) {
            ctx->pc = 0x3297A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32979Cu;
            // 0x3297a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3297BCu;
            goto label_3297bc;
        }
    }
    ctx->pc = 0x3297A4u;
    // 0x3297a4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3297a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3297a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3297a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3297ac: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x3297acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x3297b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3297b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3297b4: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x3297b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x3297b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3297b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3297bc:
    // 0x3297bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3297BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3297BCu;
            // 0x3297c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3297C4u;
    // 0x3297c4: 0x0  nop
    ctx->pc = 0x3297c4u;
    // NOP
    // 0x3297c8: 0x0  nop
    ctx->pc = 0x3297c8u;
    // NOP
    // 0x3297cc: 0x0  nop
    ctx->pc = 0x3297ccu;
    // NOP
label_3297d0:
    // 0x3297d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3297d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3297d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3297d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3297d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3297d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3297dc: 0xc05e118  jal         func_178460
    ctx->pc = 0x3297DCu;
    SET_GPR_U32(ctx, 31, 0x3297E4u);
    ctx->pc = 0x3297E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3297DCu;
            // 0x3297e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297E4u; }
        if (ctx->pc != 0x3297E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297E4u; }
        if (ctx->pc != 0x3297E4u) { return; }
    }
    ctx->pc = 0x3297E4u;
label_3297e4:
    // 0x3297e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3297e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3297e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3297e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3297ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3297ECu;
    {
        const bool branch_taken_0x3297ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3297ec) {
            ctx->pc = 0x3297FCu;
            goto label_3297fc;
        }
    }
    ctx->pc = 0x3297F4u;
    // 0x3297f4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x3297F4u;
    SET_GPR_U32(ctx, 31, 0x3297FCu);
    ctx->pc = 0x17A5D0u;
    if (runtime->hasFunction(0x17A5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297FCu; }
        if (ctx->pc != 0x3297FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D0_0x17a5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297FCu; }
        if (ctx->pc != 0x3297FCu) { return; }
    }
    ctx->pc = 0x3297FCu;
label_3297fc:
    // 0x3297fc: 0xc05e118  jal         func_178460
    ctx->pc = 0x3297FCu;
    SET_GPR_U32(ctx, 31, 0x329804u);
    ctx->pc = 0x178460u;
    if (runtime->hasFunction(0x178460u)) {
        auto targetFn = runtime->lookupFunction(0x178460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329804u; }
        if (ctx->pc != 0x329804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178460_0x178460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329804u; }
        if (ctx->pc != 0x329804u) { return; }
    }
    ctx->pc = 0x329804u;
label_329804:
    // 0x329804: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x329804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x329808: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x329808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32980c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32980cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x329810: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329810u;
    {
        const bool branch_taken_0x329810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329810) {
            ctx->pc = 0x329814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329810u;
            // 0x329814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329834u;
            goto label_329834;
        }
    }
    ctx->pc = 0x329818u;
    // 0x329818: 0xc055770  jal         func_155DC0
    ctx->pc = 0x329818u;
    SET_GPR_U32(ctx, 31, 0x329820u);
    ctx->pc = 0x32981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329818u;
            // 0x32981c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329820u; }
        if (ctx->pc != 0x329820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329820u; }
        if (ctx->pc != 0x329820u) { return; }
    }
    ctx->pc = 0x329820u;
label_329820:
    // 0x329820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329828: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329828u;
    SET_GPR_U32(ctx, 31, 0x329830u);
    ctx->pc = 0x32982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329828u;
            // 0x32982c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329830u; }
        if (ctx->pc != 0x329830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329830u; }
        if (ctx->pc != 0x329830u) { return; }
    }
    ctx->pc = 0x329830u;
label_329830:
    // 0x329830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329834:
    // 0x329834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329838: 0x3e00008  jr          $ra
    ctx->pc = 0x329838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329838u;
            // 0x32983c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329840u;
label_329840:
    // 0x329840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32984c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x32984Cu;
    SET_GPR_U32(ctx, 31, 0x329854u);
    ctx->pc = 0x329850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32984Cu;
            // 0x329850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (runtime->hasFunction(0x1A0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329854u; }
        if (ctx->pc != 0x329854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329854u; }
        if (ctx->pc != 0x329854u) { return; }
    }
    ctx->pc = 0x329854u;
label_329854:
    // 0x329854: 0xc055630  jal         func_1558C0
    ctx->pc = 0x329854u;
    SET_GPR_U32(ctx, 31, 0x32985Cu);
    ctx->pc = 0x1558C0u;
    if (runtime->hasFunction(0x1558C0u)) {
        auto targetFn = runtime->lookupFunction(0x1558C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32985Cu; }
        if (ctx->pc != 0x32985Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001558C0_0x1558c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32985Cu; }
        if (ctx->pc != 0x32985Cu) { return; }
    }
    ctx->pc = 0x32985Cu;
label_32985c:
    // 0x32985c: 0xc055684  jal         func_155A10
    ctx->pc = 0x32985Cu;
    SET_GPR_U32(ctx, 31, 0x329864u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329864u; }
        if (ctx->pc != 0x329864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329864u; }
        if (ctx->pc != 0x329864u) { return; }
    }
    ctx->pc = 0x329864u;
label_329864:
    // 0x329864: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x329864u;
    SET_GPR_U32(ctx, 31, 0x32986Cu);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32986Cu; }
        if (ctx->pc != 0x32986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32986Cu; }
        if (ctx->pc != 0x32986Cu) { return; }
    }
    ctx->pc = 0x32986Cu;
label_32986c:
    // 0x32986c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329870: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329874: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x329874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329878: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x329878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32987c: 0xa460f2a8  sh          $zero, -0xD58($v1)
    ctx->pc = 0x32987cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 0));
    // 0x329880: 0x24849960  addiu       $a0, $a0, -0x66A0
    ctx->pc = 0x329880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941024));
    // 0x329884: 0xa040f2a0  sb          $zero, -0xD60($v0)
    ctx->pc = 0x329884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963872), (uint8_t)GPR_U32(ctx, 0));
    // 0x329888: 0x24a544b8  addiu       $a1, $a1, 0x44B8
    ctx->pc = 0x329888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17592));
    // 0x32988c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x32988cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329890: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x329890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329894: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x329894u;
    SET_GPR_U32(ctx, 31, 0x32989Cu);
    ctx->pc = 0x329898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329894u;
            // 0x329898: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32989Cu; }
        if (ctx->pc != 0x32989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32989Cu; }
        if (ctx->pc != 0x32989Cu) { return; }
    }
    ctx->pc = 0x32989Cu;
label_32989c:
    // 0x32989c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x32989cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x3298a0: 0xc0558d0  jal         func_156340
    ctx->pc = 0x3298A0u;
    SET_GPR_U32(ctx, 31, 0x3298A8u);
    ctx->pc = 0x3298A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3298A0u;
            // 0x3298a4: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298A8u; }
        if (ctx->pc != 0x3298A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298A8u; }
        if (ctx->pc != 0x3298A8u) { return; }
    }
    ctx->pc = 0x3298A8u;
label_3298a8:
    // 0x3298a8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3298a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3298ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3298acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3298b0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3298B0u;
    SET_GPR_U32(ctx, 31, 0x3298B8u);
    ctx->pc = 0x3298B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3298B0u;
            // 0x3298b4: 0x248498d0  addiu       $a0, $a0, -0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298B8u; }
        if (ctx->pc != 0x3298B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298B8u; }
        if (ctx->pc != 0x3298B8u) { return; }
    }
    ctx->pc = 0x3298B8u;
label_3298b8:
    // 0x3298b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3298b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3298bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3298bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3298c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3298C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3298C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3298C0u;
            // 0x3298c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3298C8u;
    // 0x3298c8: 0x0  nop
    ctx->pc = 0x3298c8u;
    // NOP
    // 0x3298cc: 0x0  nop
    ctx->pc = 0x3298ccu;
    // NOP
label_3298d0:
    // 0x3298d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3298d4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3298d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3298d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3298d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3298dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3298dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3298e0: 0x8063f2a0  lb          $v1, -0xD60($v1)
    ctx->pc = 0x3298e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963872)));
    // 0x3298e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3298E4u;
    {
        const bool branch_taken_0x3298e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3298E4u;
            // 0x3298e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298e4) {
            ctx->pc = 0x329904u;
            goto label_329904;
        }
    }
    ctx->pc = 0x3298ECu;
    // 0x3298ec: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x3298ECu;
    SET_GPR_U32(ctx, 31, 0x3298F4u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298F4u; }
        if (ctx->pc != 0x3298F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3298F4u; }
        if (ctx->pc != 0x3298F4u) { return; }
    }
    ctx->pc = 0x3298F4u;
label_3298f4:
    // 0x3298f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3298f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3298f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3298f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3298fc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3298FCu;
    SET_GPR_U32(ctx, 31, 0x329904u);
    ctx->pc = 0x329900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3298FCu;
            // 0x329900: 0x24849920  addiu       $a0, $a0, -0x66E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329904u; }
        if (ctx->pc != 0x329904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329904u; }
        if (ctx->pc != 0x329904u) { return; }
    }
    ctx->pc = 0x329904u;
label_329904:
    // 0x329904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32990c: 0x3e00008  jr          $ra
    ctx->pc = 0x32990Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32990Cu;
            // 0x329910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329914u;
    // 0x329914: 0x0  nop
    ctx->pc = 0x329914u;
    // NOP
    // 0x329918: 0x0  nop
    ctx->pc = 0x329918u;
    // NOP
    // 0x32991c: 0x0  nop
    ctx->pc = 0x32991cu;
    // NOP
label_329920:
    // 0x329920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329924: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x329928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32992c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32992cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329938: 0xc055650  jal         func_155940
    ctx->pc = 0x329938u;
    SET_GPR_U32(ctx, 31, 0x329940u);
    ctx->pc = 0x32993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329938u;
            // 0x32993c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (runtime->hasFunction(0x155940u)) {
        auto targetFn = runtime->lookupFunction(0x155940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329940u; }
        if (ctx->pc != 0x329940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155940_0x155940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329940u; }
        if (ctx->pc != 0x329940u) { return; }
    }
    ctx->pc = 0x329940u;
label_329940:
    // 0x329940: 0xc0ca7f0  jal         func_329FC0
    ctx->pc = 0x329940u;
    SET_GPR_U32(ctx, 31, 0x329948u);
    ctx->pc = 0x329FC0u;
    if (runtime->hasFunction(0x329FC0u)) {
        auto targetFn = runtime->lookupFunction(0x329FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329948u; }
        if (ctx->pc != 0x329948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329FC0_0x329fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329948u; }
        if (ctx->pc != 0x329948u) { return; }
    }
    ctx->pc = 0x329948u;
label_329948:
    // 0x329948: 0xc055770  jal         func_155DC0
    ctx->pc = 0x329948u;
    SET_GPR_U32(ctx, 31, 0x329950u);
    ctx->pc = 0x32994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329948u;
            // 0x32994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329950u; }
        if (ctx->pc != 0x329950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329950u; }
        if (ctx->pc != 0x329950u) { return; }
    }
    ctx->pc = 0x329950u;
label_329950:
    // 0x329950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329958: 0x3e00008  jr          $ra
    ctx->pc = 0x329958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329958u;
            // 0x32995c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329960u;
label_329960:
    // 0x329960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x329960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x329964: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x329964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x329968: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x329968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32996c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32996cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x329970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x329970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x329974: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x329974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x329978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32997c: 0x24c61700  addiu       $a2, $a2, 0x1700
    ctx->pc = 0x32997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5888));
    // 0x329980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x329984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32998c: 0xc46116d0  lwc1        $f1, 0x16D0($v1)
    ctx->pc = 0x32998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329994: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x329994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x329998: 0x84a816f2  lh          $t0, 0x16F2($a1)
    ctx->pc = 0x329998u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5874)));
    // 0x32999c: 0xc48016d4  lwc1        $f0, 0x16D4($a0)
    ctx->pc = 0x32999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3299a0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299a4: 0xc46216d8  lwc1        $f2, 0x16D8($v1)
    ctx->pc = 0x3299a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3299a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3299a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3299ac: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3299acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3299b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3299b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3299b4: 0xc48116e0  lwc1        $f1, 0x16E0($a0)
    ctx->pc = 0x3299b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3299b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3299b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3299bc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299c0: 0xc46016e4  lwc1        $f0, 0x16E4($v1)
    ctx->pc = 0x3299c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3299c4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3299c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3299c8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3299cc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x3299ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3299d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299d4: 0xc46116e8  lwc1        $f1, 0x16E8($v1)
    ctx->pc = 0x3299d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3299d8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3299d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3299dc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299e0: 0xc46016ec  lwc1        $f0, 0x16EC($v1)
    ctx->pc = 0x3299e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3299e4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3299e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3299e8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299ec: 0x846716f0  lh          $a3, 0x16F0($v1)
    ctx->pc = 0x3299ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5872)));
    // 0x3299f0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3299f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3299f4: 0xa7a70098  sh          $a3, 0x98($sp)
    ctx->pc = 0x3299f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 7));
    // 0x3299f8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3299f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3299fc: 0x848716f4  lh          $a3, 0x16F4($a0)
    ctx->pc = 0x3299fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5876)));
    // 0x329a00: 0x846316f6  lh          $v1, 0x16F6($v1)
    ctx->pc = 0x329a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5878)));
    // 0x329a04: 0xa7a8009a  sh          $t0, 0x9A($sp)
    ctx->pc = 0x329a04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 154), (uint16_t)GPR_U32(ctx, 8));
    // 0x329a08: 0xa7a7009c  sh          $a3, 0x9C($sp)
    ctx->pc = 0x329a08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 156), (uint16_t)GPR_U32(ctx, 7));
    // 0x329a0c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x329a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329a10: 0xa7a3009e  sh          $v1, 0x9E($sp)
    ctx->pc = 0x329a10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 158), (uint16_t)GPR_U32(ctx, 3));
label_329a14:
    // 0x329a14: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x329a18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x329a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x329a1c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x329a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x329a20: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x329a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x329a24: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x329a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x329a28: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x329A28u;
    {
        const bool branch_taken_0x329a28 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x329a28) {
            ctx->pc = 0x329A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329a14;
        }
    }
    ctx->pc = 0x329A30u;
    // 0x329a30: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329a34: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329a38: 0x8465f2a8  lh          $a1, -0xD58($v1)
    ctx->pc = 0x329a38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963880)));
    // 0x329a3c: 0x10a400ad  beq         $a1, $a0, . + 4 + (0xAD << 2)
    ctx->pc = 0x329A3Cu;
    {
        const bool branch_taken_0x329a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x329a3c) {
            ctx->pc = 0x329CF4u;
            goto label_329cf4;
        }
    }
    ctx->pc = 0x329A44u;
    // 0x329a44: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x329a48: 0x10a30077  beq         $a1, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x329A48u;
    {
        const bool branch_taken_0x329a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329a48) {
            ctx->pc = 0x329C28u;
            goto label_329c28;
        }
    }
    ctx->pc = 0x329A50u;
    // 0x329a50: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x329a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x329a54: 0x10a30065  beq         $a1, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x329A54u;
    {
        const bool branch_taken_0x329a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329a54) {
            ctx->pc = 0x329BECu;
            goto label_329bec;
        }
    }
    ctx->pc = 0x329A5Cu;
    // 0x329a5c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329a60: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x329A60u;
    {
        const bool branch_taken_0x329a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329a60) {
            ctx->pc = 0x329BA4u;
            goto label_329ba4;
        }
    }
    ctx->pc = 0x329A68u;
    // 0x329a68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329a6c: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x329A6Cu;
    {
        const bool branch_taken_0x329a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329a6c) {
            ctx->pc = 0x329ACCu;
            goto label_329acc;
        }
    }
    ctx->pc = 0x329A74u;
    // 0x329a74: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x329A74u;
    {
        const bool branch_taken_0x329a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a74) {
            ctx->pc = 0x329A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329A74u;
            // 0x329a78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329A84u;
            goto label_329a84;
        }
    }
    ctx->pc = 0x329A7Cu;
    // 0x329a7c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x329A7Cu;
    {
        const bool branch_taken_0x329a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329A7Cu;
            // 0x329a80: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a7c) {
            ctx->pc = 0x329D70u;
            goto label_329d70;
        }
    }
    ctx->pc = 0x329A84u;
label_329a84:
    // 0x329a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a88: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329A88u;
    SET_GPR_U32(ctx, 31, 0x329A90u);
    ctx->pc = 0x329A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329A88u;
            // 0x329a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329A90u; }
        if (ctx->pc != 0x329A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329A90u; }
        if (ctx->pc != 0x329A90u) { return; }
    }
    ctx->pc = 0x329A90u;
label_329a90:
    // 0x329a90: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329a94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a98: 0x2463f2b0  addiu       $v1, $v1, -0xD50
    ctx->pc = 0x329a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963888));
label_329a9c:
    // 0x329a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x329a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329aa0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x329aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x329aa4: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x329aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329aa8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x329aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x329aac: 0x0  nop
    ctx->pc = 0x329aacu;
    // NOP
    // 0x329ab0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x329AB0u;
    {
        const bool branch_taken_0x329ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ab0) {
            ctx->pc = 0x329A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329a9c;
        }
    }
    ctx->pc = 0x329AB8u;
    // 0x329ab8: 0xc0c880c  jal         func_322030
    ctx->pc = 0x329AB8u;
    SET_GPR_U32(ctx, 31, 0x329AC0u);
    ctx->pc = 0x322030u;
    if (runtime->hasFunction(0x322030u)) {
        auto targetFn = runtime->lookupFunction(0x322030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329AC0u; }
        if (ctx->pc != 0x329AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322030_0x322030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329AC0u; }
        if (ctx->pc != 0x329AC0u) { return; }
    }
    ctx->pc = 0x329AC0u;
label_329ac0:
    // 0x329ac0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x329ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329ac4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329ac8: 0xa443f2a8  sh          $v1, -0xD58($v0)
    ctx->pc = 0x329ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 3));
label_329acc:
    // 0x329acc: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x329accu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x329ad0: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x329ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x329ad4: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x329ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x329ad8: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x329ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x329adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ae0: 0x26941630  addiu       $s4, $s4, 0x1630
    ctx->pc = 0x329ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 5680));
    // 0x329ae4: 0x26731660  addiu       $s3, $s3, 0x1660
    ctx->pc = 0x329ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5728));
    // 0x329ae8: 0x26521690  addiu       $s2, $s2, 0x1690
    ctx->pc = 0x329ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
    // 0x329aec: 0x2631f2b0  addiu       $s1, $s1, -0xD50
    ctx->pc = 0x329aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963888));
label_329af0:
    // 0x329af0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x329af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x329af4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x329af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329af8: 0x9044f35f  lbu         $a0, -0xCA1($v0)
    ctx->pc = 0x329af8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x329afc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329AFCu;
    {
        const bool branch_taken_0x329afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329afc) {
            ctx->pc = 0x329B40u;
            goto label_329b40;
        }
    }
    ctx->pc = 0x329B04u;
    // 0x329b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329b08: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329B08u;
    {
        const bool branch_taken_0x329b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x329b08) {
            ctx->pc = 0x329B30u;
            goto label_329b30;
        }
    }
    ctx->pc = 0x329B10u;
    // 0x329b10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329B10u;
    {
        const bool branch_taken_0x329b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b10) {
            ctx->pc = 0x329B20u;
            goto label_329b20;
        }
    }
    ctx->pc = 0x329B18u;
    // 0x329b18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x329B18u;
    {
        const bool branch_taken_0x329b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b18) {
            ctx->pc = 0x329B50u;
            goto label_329b50;
        }
    }
    ctx->pc = 0x329B20u;
label_329b20:
    // 0x329b20: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x329B20u;
    SET_GPR_U32(ctx, 31, 0x329B28u);
    ctx->pc = 0x329B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B20u;
            // 0x329b24: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (runtime->hasFunction(0x18E750u)) {
        auto targetFn = runtime->lookupFunction(0x18E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B28u; }
        if (ctx->pc != 0x329B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E750_0x18e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B28u; }
        if (ctx->pc != 0x329B28u) { return; }
    }
    ctx->pc = 0x329B28u;
label_329b28:
    // 0x329b28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x329B28u;
    {
        const bool branch_taken_0x329b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329B28u;
            // 0x329b2c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b28) {
            ctx->pc = 0x329B60u;
            goto label_329b60;
        }
    }
    ctx->pc = 0x329B30u;
label_329b30:
    // 0x329b30: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x329B30u;
    SET_GPR_U32(ctx, 31, 0x329B38u);
    ctx->pc = 0x329B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B30u;
            // 0x329b34: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (runtime->hasFunction(0x18E750u)) {
        auto targetFn = runtime->lookupFunction(0x18E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B38u; }
        if (ctx->pc != 0x329B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E750_0x18e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B38u; }
        if (ctx->pc != 0x329B38u) { return; }
    }
    ctx->pc = 0x329B38u;
label_329b38:
    // 0x329b38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x329B38u;
    {
        const bool branch_taken_0x329b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329B38u;
            // 0x329b3c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b38) {
            ctx->pc = 0x329B60u;
            goto label_329b60;
        }
    }
    ctx->pc = 0x329B40u;
label_329b40:
    // 0x329b40: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x329B40u;
    SET_GPR_U32(ctx, 31, 0x329B48u);
    ctx->pc = 0x329B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B40u;
            // 0x329b44: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (runtime->hasFunction(0x18E750u)) {
        auto targetFn = runtime->lookupFunction(0x18E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B48u; }
        if (ctx->pc != 0x329B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E750_0x18e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B48u; }
        if (ctx->pc != 0x329B48u) { return; }
    }
    ctx->pc = 0x329B48u;
label_329b48:
    // 0x329b48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329B48u;
    {
        const bool branch_taken_0x329b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329B48u;
            // 0x329b4c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b48) {
            ctx->pc = 0x329B60u;
            goto label_329b60;
        }
    }
    ctx->pc = 0x329B50u;
label_329b50:
    // 0x329b50: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x329B50u;
    SET_GPR_U32(ctx, 31, 0x329B58u);
    ctx->pc = 0x329B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B50u;
            // 0x329b54: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (runtime->hasFunction(0x18E750u)) {
        auto targetFn = runtime->lookupFunction(0x18E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B58u; }
        if (ctx->pc != 0x329B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E750_0x18e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B58u; }
        if (ctx->pc != 0x329B58u) { return; }
    }
    ctx->pc = 0x329B58u;
label_329b58:
    // 0x329b58: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x329b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x329b5c: 0x0  nop
    ctx->pc = 0x329b5cu;
    // NOP
label_329b60:
    // 0x329b60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x329b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329b64: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x329B64u;
    SET_GPR_U32(ctx, 31, 0x329B6Cu);
    ctx->pc = 0x329B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B64u;
            // 0x329b68: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (runtime->hasFunction(0x1983B0u)) {
        auto targetFn = runtime->lookupFunction(0x1983B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B6Cu; }
        if (ctx->pc != 0x329B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001983B0_0x1983b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B6Cu; }
        if (ctx->pc != 0x329B6Cu) { return; }
    }
    ctx->pc = 0x329B6Cu;
label_329b6c:
    // 0x329b6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x329b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x329b70: 0xc063d08  jal         func_18F420
    ctx->pc = 0x329B70u;
    SET_GPR_U32(ctx, 31, 0x329B78u);
    ctx->pc = 0x329B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329B70u;
            // 0x329b74: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B78u; }
        if (ctx->pc != 0x329B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329B78u; }
        if (ctx->pc != 0x329B78u) { return; }
    }
    ctx->pc = 0x329B78u;
label_329b78:
    // 0x329b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329b7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x329b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x329b80: 0x2e030009  sltiu       $v1, $s0, 0x9
    ctx->pc = 0x329b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329b84: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x329b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x329b88: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x329b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x329b8c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x329B8Cu;
    {
        const bool branch_taken_0x329b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329B8Cu;
            // 0x329b90: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b8c) {
            ctx->pc = 0x329AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329af0;
        }
    }
    ctx->pc = 0x329B94u;
    // 0x329b94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x329b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329b98: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329b9c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x329B9Cu;
    {
        const bool branch_taken_0x329b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329B9Cu;
            // 0x329ba0: 0xa464f2a8  sh          $a0, -0xD58($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b9c) {
            ctx->pc = 0x329D6Cu;
            goto label_329d6c;
        }
    }
    ctx->pc = 0x329BA4u;
label_329ba4:
    // 0x329ba4: 0x3c1201dd  lui         $s2, 0x1DD
    ctx->pc = 0x329ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)477 << 16));
    // 0x329ba8: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x329ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x329bac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329bb0: 0x2652f2b0  addiu       $s2, $s2, -0xD50
    ctx->pc = 0x329bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963888));
    // 0x329bb4: 0x2631f2e0  addiu       $s1, $s1, -0xD20
    ctx->pc = 0x329bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963936));
label_329bb8:
    // 0x329bb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x329bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x329bbc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x329bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x329bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329bc4: 0xc067cd8  jal         func_19F360
    ctx->pc = 0x329BC4u;
    SET_GPR_U32(ctx, 31, 0x329BCCu);
    ctx->pc = 0x329BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329BC4u;
            // 0x329bc8: 0x3c074080  lui         $a3, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F360u;
    if (runtime->hasFunction(0x19F360u)) {
        auto targetFn = runtime->lookupFunction(0x19F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329BCCu; }
        if (ctx->pc != 0x329BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F360_0x19f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329BCCu; }
        if (ctx->pc != 0x329BCCu) { return; }
    }
    ctx->pc = 0x329BCCu;
label_329bcc:
    // 0x329bcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329bd0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x329bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x329bd4: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x329bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329bd8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x329BD8u;
    {
        const bool branch_taken_0x329bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329BD8u;
            // 0x329bdc: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bd8) {
            ctx->pc = 0x329BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329bb8;
        }
    }
    ctx->pc = 0x329BE0u;
    // 0x329be0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x329be4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329be8: 0xa443f2a8  sh          $v1, -0xD58($v0)
    ctx->pc = 0x329be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 3));
label_329bec:
    // 0x329bec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x329becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x329bf0: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x329BF0u;
    SET_GPR_U32(ctx, 31, 0x329BF8u);
    ctx->pc = 0x329BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329BF0u;
            // 0x329bf4: 0x248416b8  addiu       $a0, $a0, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (runtime->hasFunction(0x3036D0u)) {
        auto targetFn = runtime->lookupFunction(0x3036D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329BF8u; }
        if (ctx->pc != 0x329BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036D0_0x3036d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329BF8u; }
        if (ctx->pc != 0x329BF8u) { return; }
    }
    ctx->pc = 0x329BF8u;
label_329bf8:
    // 0x329bf8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x329BF8u;
    SET_GPR_U32(ctx, 31, 0x329C00u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C00u; }
        if (ctx->pc != 0x329C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C00u; }
        if (ctx->pc != 0x329C00u) { return; }
    }
    ctx->pc = 0x329C00u;
label_329c00:
    // 0x329c00: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x329c04: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329c08: 0xa464f2a8  sh          $a0, -0xD58($v1)
    ctx->pc = 0x329c08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 4));
    // 0x329c0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329c10: 0xac60bb70  sw          $zero, -0x4490($v1)
    ctx->pc = 0x329c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949744), GPR_U32(ctx, 0));
    // 0x329c14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329c18: 0xac60bb74  sw          $zero, -0x448C($v1)
    ctx->pc = 0x329c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949748), GPR_U32(ctx, 0));
    // 0x329c1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x329c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x329c20: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x329C20u;
    {
        const bool branch_taken_0x329c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329C20u;
            // 0x329c24: 0xac60bb78  sw          $zero, -0x4488($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c20) {
            ctx->pc = 0x329D6Cu;
            goto label_329d6c;
        }
    }
    ctx->pc = 0x329C28u;
label_329c28:
    // 0x329c28: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x329C28u;
    SET_GPR_U32(ctx, 31, 0x329C30u);
    ctx->pc = 0x3036A0u;
    if (runtime->hasFunction(0x3036A0u)) {
        auto targetFn = runtime->lookupFunction(0x3036A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C30u; }
        if (ctx->pc != 0x329C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036A0_0x3036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C30u; }
        if (ctx->pc != 0x329C30u) { return; }
    }
    ctx->pc = 0x329C30u;
label_329c30:
    // 0x329c30: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x329C30u;
    {
        const bool branch_taken_0x329c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c30) {
            ctx->pc = 0x329D6Cu;
            goto label_329d6c;
        }
    }
    ctx->pc = 0x329C38u;
    // 0x329c38: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x329c38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x329c3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c40: 0x2631f2b0  addiu       $s1, $s1, -0xD50
    ctx->pc = 0x329c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963888));
label_329c44:
    // 0x329c44: 0xc063d08  jal         func_18F420
    ctx->pc = 0x329C44u;
    SET_GPR_U32(ctx, 31, 0x329C4Cu);
    ctx->pc = 0x329C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C44u;
            // 0x329c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C4Cu; }
        if (ctx->pc != 0x329C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C4Cu; }
        if (ctx->pc != 0x329C4Cu) { return; }
    }
    ctx->pc = 0x329C4Cu;
label_329c4c:
    // 0x329c4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329c50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x329c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x329c54: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x329c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329c58: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x329C58u;
    {
        const bool branch_taken_0x329c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c58) {
            ctx->pc = 0x329C44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329c44;
        }
    }
    ctx->pc = 0x329C60u;
    // 0x329c60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c64: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x329c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x329c68: 0x27b10098  addiu       $s1, $sp, 0x98
    ctx->pc = 0x329c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_329c6c:
    // 0x329c6c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x329c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x329c70: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x329c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x329c74: 0xc067dd4  jal         func_19F750
    ctx->pc = 0x329C74u;
    SET_GPR_U32(ctx, 31, 0x329C7Cu);
    ctx->pc = 0x329C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C74u;
            // 0x329c78: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F750u;
    if (runtime->hasFunction(0x19F750u)) {
        auto targetFn = runtime->lookupFunction(0x19F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C7Cu; }
        if (ctx->pc != 0x329C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F750_0x19f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C7Cu; }
        if (ctx->pc != 0x329C7Cu) { return; }
    }
    ctx->pc = 0x329C7Cu;
label_329c7c:
    // 0x329c7c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x329c80: 0xc067ccc  jal         func_19F330
    ctx->pc = 0x329C80u;
    SET_GPR_U32(ctx, 31, 0x329C88u);
    ctx->pc = 0x329C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C80u;
            // 0x329c84: 0x944416c4  lhu         $a0, 0x16C4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5828)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F330u;
    if (runtime->hasFunction(0x19F330u)) {
        auto targetFn = runtime->lookupFunction(0x19F330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C88u; }
        if (ctx->pc != 0x329C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F330_0x19f330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C88u; }
        if (ctx->pc != 0x329C88u) { return; }
    }
    ctx->pc = 0x329C88u;
label_329c88:
    // 0x329c88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x329c8c: 0x3c0601dd  lui         $a2, 0x1DD
    ctx->pc = 0x329c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)477 << 16));
    // 0x329c90: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x329c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329c94: 0x844516ca  lh          $a1, 0x16CA($v0)
    ctx->pc = 0x329c94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5834)));
    // 0x329c98: 0xc067cc8  jal         func_19F320
    ctx->pc = 0x329C98u;
    SET_GPR_U32(ctx, 31, 0x329CA0u);
    ctx->pc = 0x329C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C98u;
            // 0x329c9c: 0x24c6f0a0  addiu       $a2, $a2, -0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F320u;
    if (runtime->hasFunction(0x19F320u)) {
        auto targetFn = runtime->lookupFunction(0x19F320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CA0u; }
        if (ctx->pc != 0x329CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F320_0x19f320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CA0u; }
        if (ctx->pc != 0x329CA0u) { return; }
    }
    ctx->pc = 0x329CA0u;
label_329ca0:
    // 0x329ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329ca4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x329ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x329ca8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x329ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x329cac: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x329CACu;
    {
        const bool branch_taken_0x329cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329CACu;
            // 0x329cb0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cac) {
            ctx->pc = 0x329C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329c6c;
        }
    }
    ctx->pc = 0x329CB4u;
    // 0x329cb4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x329cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x329cb8: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x329CB8u;
    SET_GPR_U32(ctx, 31, 0x329CC0u);
    ctx->pc = 0x329CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329CB8u;
            // 0x329cbc: 0x248416b8  addiu       $a0, $a0, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (runtime->hasFunction(0x19F340u)) {
        auto targetFn = runtime->lookupFunction(0x19F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CC0u; }
        if (ctx->pc != 0x329CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F340_0x19f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CC0u; }
        if (ctx->pc != 0x329CC0u) { return; }
    }
    ctx->pc = 0x329CC0u;
label_329cc0:
    // 0x329cc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cc4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x329cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_329cc8:
    // 0x329cc8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x329cc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329ccc: 0xc067cc4  jal         func_19F310
    ctx->pc = 0x329CCCu;
    SET_GPR_U32(ctx, 31, 0x329CD4u);
    ctx->pc = 0x329CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329CCCu;
            // 0x329cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F310u;
    if (runtime->hasFunction(0x19F310u)) {
        auto targetFn = runtime->lookupFunction(0x19F310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CD4u; }
        if (ctx->pc != 0x329CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F310_0x19f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329CD4u; }
        if (ctx->pc != 0x329CD4u) { return; }
    }
    ctx->pc = 0x329CD4u;
label_329cd4:
    // 0x329cd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329cd8: 0x2e030009  sltiu       $v1, $s0, 0x9
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329cdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x329CDCu;
    {
        const bool branch_taken_0x329cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329CDCu;
            // 0x329ce0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cdc) {
            ctx->pc = 0x329CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329cc8;
        }
    }
    ctx->pc = 0x329CE4u;
    // 0x329ce4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x329ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329ce8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329cec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x329CECu;
    {
        const bool branch_taken_0x329cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329CECu;
            // 0x329cf0: 0xa464f2a8  sh          $a0, -0xD58($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cec) {
            ctx->pc = 0x329D6Cu;
            goto label_329d6c;
        }
    }
    ctx->pc = 0x329CF4u;
label_329cf4:
    // 0x329cf4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x329cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x329cf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x329cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329cfc: 0x9044f35f  lbu         $a0, -0xCA1($v0)
    ctx->pc = 0x329cfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x329d00: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329D00u;
    {
        const bool branch_taken_0x329d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329d00) {
            ctx->pc = 0x329D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329D00u;
            // 0x329d04: 0x27a400a8  addiu       $a0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329D20u;
            goto label_329d20;
        }
    }
    ctx->pc = 0x329D08u;
    // 0x329d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329d0c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329D0Cu;
    {
        const bool branch_taken_0x329d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x329d0c) {
            ctx->pc = 0x329D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329D0Cu;
            // 0x329d10: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329D20u;
            goto label_329d20;
        }
    }
    ctx->pc = 0x329D14u;
    // 0x329d14: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x329D14u;
    {
        const bool branch_taken_0x329d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d14) {
            ctx->pc = 0x329D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329D14u;
            // 0x329d18: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329D20u;
            goto label_329d20;
        }
    }
    ctx->pc = 0x329D1Cu;
    // 0x329d1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x329d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_329d20:
    // 0x329d20: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x329D20u;
    SET_GPR_U32(ctx, 31, 0x329D28u);
    ctx->pc = 0x329D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D20u;
            // 0x329d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (runtime->hasFunction(0x18F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x18F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D28u; }
        if (ctx->pc != 0x329D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F4B0_0x18f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D28u; }
        if (ctx->pc != 0x329D28u) { return; }
    }
    ctx->pc = 0x329D28u;
label_329d28:
    // 0x329d28: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x329D28u;
    {
        const bool branch_taken_0x329d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d28) {
            ctx->pc = 0x329D6Cu;
            goto label_329d6c;
        }
    }
    ctx->pc = 0x329D30u;
    // 0x329d30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329d34: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x329d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x329d38: 0x8c44bb70  lw          $a0, -0x4490($v0)
    ctx->pc = 0x329d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949744)));
    // 0x329d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d40: 0x24c616b8  addiu       $a2, $a2, 0x16B8
    ctx->pc = 0x329d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5816));
    // 0x329d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x329d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d48: 0xc0c8978  jal         func_3225E0
    ctx->pc = 0x329D48u;
    SET_GPR_U32(ctx, 31, 0x329D50u);
    ctx->pc = 0x329D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D48u;
            // 0x329d4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3225E0u;
    if (runtime->hasFunction(0x3225E0u)) {
        auto targetFn = runtime->lookupFunction(0x3225E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D50u; }
        if (ctx->pc != 0x329D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003225E0_0x3225e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D50u; }
        if (ctx->pc != 0x329D50u) { return; }
    }
    ctx->pc = 0x329D50u;
label_329d50:
    // 0x329d50: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329d54: 0xc063d18  jal         func_18F460
    ctx->pc = 0x329D54u;
    SET_GPR_U32(ctx, 31, 0x329D5Cu);
    ctx->pc = 0x329D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D54u;
            // 0x329d58: 0xa440f2a8  sh          $zero, -0xD58($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D5Cu; }
        if (ctx->pc != 0x329D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D5Cu; }
        if (ctx->pc != 0x329D5Cu) { return; }
    }
    ctx->pc = 0x329D5Cu;
label_329d5c:
    // 0x329d5c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x329d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x329d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d64: 0xc055768  jal         func_155DA0
    ctx->pc = 0x329D64u;
    SET_GPR_U32(ctx, 31, 0x329D6Cu);
    ctx->pc = 0x329D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329D64u;
            // 0x329d68: 0x24849d90  addiu       $a0, $a0, -0x6270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D6Cu; }
        if (ctx->pc != 0x329D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329D6Cu; }
        if (ctx->pc != 0x329D6Cu) { return; }
    }
    ctx->pc = 0x329D6Cu;
label_329d6c:
    // 0x329d6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x329d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_329d70:
    // 0x329d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x329d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329d84: 0x3e00008  jr          $ra
    ctx->pc = 0x329D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329D84u;
            // 0x329d88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329D8Cu;
    // 0x329d8c: 0x0  nop
    ctx->pc = 0x329d8cu;
    // NOP
label_329d90:
    // 0x329d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329d94: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x329d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x329d98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x329d9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x329d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329da4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329da8: 0x9065f35f  lbu         $a1, -0xCA1($v1)
    ctx->pc = 0x329da8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x329dac: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x329DACu;
    {
        const bool branch_taken_0x329dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x329DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329DACu;
            // 0x329db0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329dac) {
            ctx->pc = 0x329DD0u;
            goto label_329dd0;
        }
    }
    ctx->pc = 0x329DB4u;
    // 0x329db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329db8: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329DB8u;
    {
        const bool branch_taken_0x329db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329db8) {
            ctx->pc = 0x329DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329DB8u;
            // 0x329dbc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329DD4u;
            goto label_329dd4;
        }
    }
    ctx->pc = 0x329DC0u;
    // 0x329dc0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x329DC0u;
    {
        const bool branch_taken_0x329dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x329dc0) {
            ctx->pc = 0x329DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329DC0u;
            // 0x329dc4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329DD4u;
            goto label_329dd4;
        }
    }
    ctx->pc = 0x329DC8u;
    // 0x329dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x329DC8u;
    {
        const bool branch_taken_0x329dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329DC8u;
            // 0x329dcc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329dc8) {
            ctx->pc = 0x329DD4u;
            goto label_329dd4;
        }
    }
    ctx->pc = 0x329DD0u;
label_329dd0:
    // 0x329dd0: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x329dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_329dd4:
    // 0x329dd4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329dd8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x329dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329ddc: 0x8465f2a8  lh          $a1, -0xD58($v1)
    ctx->pc = 0x329ddcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963880)));
    // 0x329de0: 0x50a4006c  beql        $a1, $a0, . + 4 + (0x6C << 2)
    ctx->pc = 0x329DE0u;
    {
        const bool branch_taken_0x329de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x329de0) {
            ctx->pc = 0x329DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329DE0u;
            // 0x329de4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329F94u;
            goto label_329f94;
        }
    }
    ctx->pc = 0x329DE8u;
    // 0x329de8: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x329de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x329dec: 0x50a30061  beql        $a1, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x329DECu;
    {
        const bool branch_taken_0x329dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329dec) {
            ctx->pc = 0x329DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329DECu;
            // 0x329df0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329F74u;
            goto label_329f74;
        }
    }
    ctx->pc = 0x329DF4u;
    // 0x329df4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x329df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329df8: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x329DF8u;
    {
        const bool branch_taken_0x329df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329df8) {
            ctx->pc = 0x329F4Cu;
            goto label_329f4c;
        }
    }
    ctx->pc = 0x329E00u;
    // 0x329e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e04: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x329E04u;
    {
        const bool branch_taken_0x329e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x329e04) {
            ctx->pc = 0x329E70u;
            goto label_329e70;
        }
    }
    ctx->pc = 0x329E0Cu;
    // 0x329e0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x329E0Cu;
    {
        const bool branch_taken_0x329e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e0c) {
            ctx->pc = 0x329E1Cu;
            goto label_329e1c;
        }
    }
    ctx->pc = 0x329E14u;
    // 0x329e14: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x329E14u;
    {
        const bool branch_taken_0x329e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329E14u;
            // 0x329e18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e14) {
            ctx->pc = 0x329FB0u;
            goto label_329fb0;
        }
    }
    ctx->pc = 0x329E1Cu;
label_329e1c:
    // 0x329e1c: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x329E1Cu;
    SET_GPR_U32(ctx, 31, 0x329E24u);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E24u; }
        if (ctx->pc != 0x329E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E24u; }
        if (ctx->pc != 0x329E24u) { return; }
    }
    ctx->pc = 0x329E24u;
label_329e24:
    // 0x329e24: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x329e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x329e28: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x329e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x329e2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e30: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329E30u;
    SET_GPR_U32(ctx, 31, 0x329E38u);
    ctx->pc = 0x329E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E30u;
            // 0x329e34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E38u; }
        if (ctx->pc != 0x329E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E38u; }
        if (ctx->pc != 0x329E38u) { return; }
    }
    ctx->pc = 0x329E38u;
label_329e38:
    // 0x329e38: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x329E38u;
    SET_GPR_U32(ctx, 31, 0x329E40u);
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E40u; }
        if (ctx->pc != 0x329E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E40u; }
        if (ctx->pc != 0x329E40u) { return; }
    }
    ctx->pc = 0x329E40u;
label_329e40:
    // 0x329e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e48: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x329E48u;
    SET_GPR_U32(ctx, 31, 0x329E50u);
    ctx->pc = 0x329E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E48u;
            // 0x329e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E50u; }
        if (ctx->pc != 0x329E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E50u; }
        if (ctx->pc != 0x329E50u) { return; }
    }
    ctx->pc = 0x329E50u;
label_329e50:
    // 0x329e50: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x329e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e58: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x329E58u;
    SET_GPR_U32(ctx, 31, 0x329E60u);
    ctx->pc = 0x329E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E58u;
            // 0x329e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E60u; }
        if (ctx->pc != 0x329E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E60u; }
        if (ctx->pc != 0x329E60u) { return; }
    }
    ctx->pc = 0x329E60u;
label_329e60:
    // 0x329e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e64: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329e68: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x329E68u;
    {
        const bool branch_taken_0x329e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329E68u;
            // 0x329e6c: 0xa464f2a8  sh          $a0, -0xD58($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e68) {
            ctx->pc = 0x329FACu;
            goto label_329fac;
        }
    }
    ctx->pc = 0x329E70u;
label_329e70:
    // 0x329e70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329e74: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x329e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x329e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x329e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x329e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329E7Cu;
    {
        const bool branch_taken_0x329e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e7c) {
            ctx->pc = 0x329E98u;
            goto label_329e98;
        }
    }
    ctx->pc = 0x329E84u;
    // 0x329e84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e88: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x329E88u;
    SET_GPR_U32(ctx, 31, 0x329E90u);
    ctx->pc = 0x329E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329E88u;
            // 0x329e8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E90u; }
        if (ctx->pc != 0x329E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329E90u; }
        if (ctx->pc != 0x329E90u) { return; }
    }
    ctx->pc = 0x329E90u;
label_329e90:
    // 0x329e90: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x329e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x329e94: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x329e94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_329e98:
    // 0x329e98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329e9c: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x329e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x329ea0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x329ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x329ea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329EA4u;
    {
        const bool branch_taken_0x329ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ea4) {
            ctx->pc = 0x329EC0u;
            goto label_329ec0;
        }
    }
    ctx->pc = 0x329EACu;
    // 0x329eac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329eb0: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x329EB0u;
    SET_GPR_U32(ctx, 31, 0x329EB8u);
    ctx->pc = 0x329EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329EB0u;
            // 0x329eb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EB8u; }
        if (ctx->pc != 0x329EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EB8u; }
        if (ctx->pc != 0x329EB8u) { return; }
    }
    ctx->pc = 0x329EB8u;
label_329eb8:
    // 0x329eb8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x329eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x329ebc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x329ebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_329ec0:
    // 0x329ec0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329ec4: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x329ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x329ec8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x329ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x329ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329ECCu;
    {
        const bool branch_taken_0x329ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ecc) {
            ctx->pc = 0x329EE8u;
            goto label_329ee8;
        }
    }
    ctx->pc = 0x329ED4u;
    // 0x329ed4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x329ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329ed8: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x329ED8u;
    SET_GPR_U32(ctx, 31, 0x329EE0u);
    ctx->pc = 0x329EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329ED8u;
            // 0x329edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EE0u; }
        if (ctx->pc != 0x329EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EE0u; }
        if (ctx->pc != 0x329EE0u) { return; }
    }
    ctx->pc = 0x329EE0u;
label_329ee0:
    // 0x329ee0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x329ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x329ee4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x329ee4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_329ee8:
    // 0x329ee8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329eec: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x329eecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x329ef0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x329ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x329ef4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x329EF4u;
    {
        const bool branch_taken_0x329ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ef4) {
            ctx->pc = 0x329EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329EF4u;
            // 0x329ef8: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x329F14u;
            goto label_329f14;
        }
    }
    ctx->pc = 0x329EFCu;
    // 0x329efc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x329f00: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x329F00u;
    SET_GPR_U32(ctx, 31, 0x329F08u);
    ctx->pc = 0x329F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F00u;
            // 0x329f04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F08u; }
        if (ctx->pc != 0x329F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F08u; }
        if (ctx->pc != 0x329F08u) { return; }
    }
    ctx->pc = 0x329F08u;
label_329f08:
    // 0x329f08: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x329f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x329f0c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x329f0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x329f10: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x329f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_329f14:
    // 0x329f14: 0x30421f00  andi        $v0, $v0, 0x1F00
    ctx->pc = 0x329f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7936);
    // 0x329f18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x329F18u;
    {
        const bool branch_taken_0x329f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f18) {
            ctx->pc = 0x329F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329F18u;
            // 0x329f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329F30u;
            goto label_329f30;
        }
    }
    ctx->pc = 0x329F20u;
    // 0x329f20: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x329f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329f24: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329f28: 0xa443f2a8  sh          $v1, -0xD58($v0)
    ctx->pc = 0x329f28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 3));
    // 0x329f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329f30:
    // 0x329f30: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x329F30u;
    SET_GPR_U32(ctx, 31, 0x329F38u);
    ctx->pc = 0x329F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F30u;
            // 0x329f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F38u; }
        if (ctx->pc != 0x329F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F38u; }
        if (ctx->pc != 0x329F38u) { return; }
    }
    ctx->pc = 0x329F38u;
label_329f38:
    // 0x329f38: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x329F38u;
    {
        const bool branch_taken_0x329f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f38) {
            ctx->pc = 0x329FACu;
            goto label_329fac;
        }
    }
    ctx->pc = 0x329F40u;
    // 0x329f40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x329f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x329f44: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329f48: 0xa443f2a8  sh          $v1, -0xD58($v0)
    ctx->pc = 0x329f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 3));
label_329f4c:
    // 0x329f4c: 0xc0538d0  jal         func_14E340
    ctx->pc = 0x329F4Cu;
    SET_GPR_U32(ctx, 31, 0x329F54u);
    ctx->pc = 0x14E340u;
    if (runtime->hasFunction(0x14E340u)) {
        auto targetFn = runtime->lookupFunction(0x14E340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F54u; }
        if (ctx->pc != 0x329F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E340_0x14e340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F54u; }
        if (ctx->pc != 0x329F54u) { return; }
    }
    ctx->pc = 0x329F54u;
label_329f54:
    // 0x329f54: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x329f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329f58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329f5c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x329F5Cu;
    SET_GPR_U32(ctx, 31, 0x329F64u);
    ctx->pc = 0x329F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F5Cu;
            // 0x329f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F64u; }
        if (ctx->pc != 0x329F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F64u; }
        if (ctx->pc != 0x329F64u) { return; }
    }
    ctx->pc = 0x329F64u;
label_329f64:
    // 0x329f64: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x329f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x329f68: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329f6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x329F6Cu;
    {
        const bool branch_taken_0x329f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329F6Cu;
            // 0x329f70: 0xa464f2a8  sh          $a0, -0xD58($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963880), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f6c) {
            ctx->pc = 0x329FACu;
            goto label_329fac;
        }
    }
    ctx->pc = 0x329F74u;
label_329f74:
    // 0x329f74: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x329F74u;
    SET_GPR_U32(ctx, 31, 0x329F7Cu);
    ctx->pc = 0x329F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F74u;
            // 0x329f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F7Cu; }
        if (ctx->pc != 0x329F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F7Cu; }
        if (ctx->pc != 0x329F7Cu) { return; }
    }
    ctx->pc = 0x329F7Cu;
label_329f7c:
    // 0x329f7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x329F7Cu;
    {
        const bool branch_taken_0x329f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f7c) {
            ctx->pc = 0x329FACu;
            goto label_329fac;
        }
    }
    ctx->pc = 0x329F84u;
    // 0x329f84: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x329f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329f88: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329f8c: 0xa443f2a8  sh          $v1, -0xD58($v0)
    ctx->pc = 0x329f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963880), (uint16_t)GPR_U32(ctx, 3));
    // 0x329f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329f94:
    // 0x329f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f98: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329F98u;
    SET_GPR_U32(ctx, 31, 0x329FA0u);
    ctx->pc = 0x329F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F98u;
            // 0x329f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329FA0u; }
        if (ctx->pc != 0x329FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329FA0u; }
        if (ctx->pc != 0x329FA0u) { return; }
    }
    ctx->pc = 0x329FA0u;
label_329fa0:
    // 0x329fa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329fa4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329fa8: 0xa064f2a0  sb          $a0, -0xD60($v1)
    ctx->pc = 0x329fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963872), (uint8_t)GPR_U32(ctx, 4));
label_329fac:
    // 0x329fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329fb0:
    // 0x329fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x329FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329FB8u;
            // 0x329fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329FC0u;
    ctx->pc = 0x329fc0u;
}
