#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033E330
// Address: 0x33e330 - 0x340470
void sub_0033E330_0x33e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E330_0x33e330");
#endif

    switch (ctx->pc) {
        case 0x33e388u: goto label_33e388;
        case 0x33e400u: goto label_33e400;
        case 0x33e458u: goto label_33e458;
        case 0x33e46cu: goto label_33e46c;
        case 0x33e504u: goto label_33e504;
        case 0x33e534u: goto label_33e534;
        case 0x33e5b0u: goto label_33e5b0;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e60cu: goto label_33e60c;
        case 0x33e630u: goto label_33e630;
        case 0x33e66cu: goto label_33e66c;
        case 0x33e680u: goto label_33e680;
        case 0x33e6e0u: goto label_33e6e0;
        case 0x33e754u: goto label_33e754;
        case 0x33e784u: goto label_33e784;
        case 0x33e790u: goto label_33e790;
        case 0x33e8a8u: goto label_33e8a8;
        case 0x33e8d4u: goto label_33e8d4;
        case 0x33e91cu: goto label_33e91c;
        case 0x33e938u: goto label_33e938;
        case 0x33e950u: goto label_33e950;
        case 0x33e978u: goto label_33e978;
        case 0x33e998u: goto label_33e998;
        case 0x33e9e0u: goto label_33e9e0;
        case 0x33e9fcu: goto label_33e9fc;
        case 0x33ea24u: goto label_33ea24;
        case 0x33ea40u: goto label_33ea40;
        case 0x33eab4u: goto label_33eab4;
        case 0x33eb48u: goto label_33eb48;
        case 0x33eba4u: goto label_33eba4;
        case 0x33ebe8u: goto label_33ebe8;
        case 0x33ec44u: goto label_33ec44;
        case 0x33ec88u: goto label_33ec88;
        case 0x33ece4u: goto label_33ece4;
        case 0x33ed28u: goto label_33ed28;
        case 0x33ed60u: goto label_33ed60;
        case 0x33ed94u: goto label_33ed94;
        case 0x33edfcu: goto label_33edfc;
        case 0x33ee64u: goto label_33ee64;
        case 0x33efb4u: goto label_33efb4;
        case 0x33eff8u: goto label_33eff8;
        case 0x33f054u: goto label_33f054;
        case 0x33f098u: goto label_33f098;
        case 0x33f0f4u: goto label_33f0f4;
        case 0x33f138u: goto label_33f138;
        case 0x33f190u: goto label_33f190;
        case 0x33f1ecu: goto label_33f1ec;
        case 0x33f230u: goto label_33f230;
        case 0x33f26cu: goto label_33f26c;
        case 0x33f2a8u: goto label_33f2a8;
        case 0x33f2c0u: goto label_33f2c0;
        case 0x33f330u: goto label_33f330;
        case 0x33f340u: goto label_33f340;
        case 0x33f374u: goto label_33f374;
        case 0x33f390u: goto label_33f390;
        case 0x33f410u: goto label_33f410;
        case 0x33f450u: goto label_33f450;
        case 0x33f484u: goto label_33f484;
        case 0x33f4b8u: goto label_33f4b8;
        case 0x33f4ecu: goto label_33f4ec;
        case 0x33f51cu: goto label_33f51c;
        case 0x33f584u: goto label_33f584;
        case 0x33f5ecu: goto label_33f5ec;
        case 0x33f6b0u: goto label_33f6b0;
        case 0x33f764u: goto label_33f764;
        case 0x33f798u: goto label_33f798;
        case 0x33f7ccu: goto label_33f7cc;
        case 0x33f82cu: goto label_33f82c;
        case 0x33f888u: goto label_33f888;
        case 0x33f8ccu: goto label_33f8cc;
        case 0x33f908u: goto label_33f908;
        case 0x33f92cu: goto label_33f92c;
        case 0x33f940u: goto label_33f940;
        case 0x33f9a4u: goto label_33f9a4;
        case 0x33fb2cu: goto label_33fb2c;
        case 0x33fb6cu: goto label_33fb6c;
        case 0x33fbf8u: goto label_33fbf8;
        case 0x33fc24u: goto label_33fc24;
        case 0x33fcc0u: goto label_33fcc0;
        case 0x33fce4u: goto label_33fce4;
        case 0x33fcf4u: goto label_33fcf4;
        case 0x33fd04u: goto label_33fd04;
        case 0x33fd14u: goto label_33fd14;
        case 0x33fd2cu: goto label_33fd2c;
        case 0x33fd98u: goto label_33fd98;
        case 0x33fe34u: goto label_33fe34;
        case 0x33fe58u: goto label_33fe58;
        case 0x33fe68u: goto label_33fe68;
        case 0x33fe78u: goto label_33fe78;
        case 0x33fe88u: goto label_33fe88;
        case 0x33fea0u: goto label_33fea0;
        case 0x33ff0cu: goto label_33ff0c;
        case 0x33ff24u: goto label_33ff24;
        case 0x33ff34u: goto label_33ff34;
        case 0x33ff44u: goto label_33ff44;
        case 0x33ff54u: goto label_33ff54;
        case 0x33ff64u: goto label_33ff64;
        case 0x33ff8cu: goto label_33ff8c;
        case 0x33ffacu: goto label_33ffac;
        case 0x33ffbcu: goto label_33ffbc;
        case 0x33ffd4u: goto label_33ffd4;
        case 0x33fff4u: goto label_33fff4;
        case 0x340008u: goto label_340008;
        case 0x340018u: goto label_340018;
        case 0x340084u: goto label_340084;
        case 0x3400b0u: goto label_3400b0;
        case 0x34014cu: goto label_34014c;
        case 0x34016cu: goto label_34016c;
        case 0x34017cu: goto label_34017c;
        case 0x34018cu: goto label_34018c;
        case 0x34019cu: goto label_34019c;
        case 0x3401b4u: goto label_3401b4;
        case 0x340220u: goto label_340220;
        case 0x34026cu: goto label_34026c;
        case 0x34028cu: goto label_34028c;
        case 0x34029cu: goto label_34029c;
        case 0x3402acu: goto label_3402ac;
        case 0x3402bcu: goto label_3402bc;
        case 0x3402d4u: goto label_3402d4;
        case 0x340340u: goto label_340340;
        case 0x340358u: goto label_340358;
        case 0x340368u: goto label_340368;
        case 0x340378u: goto label_340378;
        case 0x340388u: goto label_340388;
        case 0x340398u: goto label_340398;
        case 0x3403c0u: goto label_3403c0;
        case 0x3403e0u: goto label_3403e0;
        case 0x3403f0u: goto label_3403f0;
        case 0x340408u: goto label_340408;
        case 0x340428u: goto label_340428;
        case 0x34043cu: goto label_34043c;
        case 0x34044cu: goto label_34044c;
        case 0x34046cu: goto label_34046c;
        default: break;
    }

    ctx->pc = 0x33e330u;

label_33e330:
    // 0x33e330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33e334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x33e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x33e338: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33e33c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33e340: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x33e340u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e344: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33e348: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33e348u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33e350: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33e350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e358: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33e358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e35c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33e360: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x33e360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e368: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33e368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33e36c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x33e36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e370: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x33e370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e374: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x33e378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33e378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e37c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x33e37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x33e380: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33E380u;
    SET_GPR_U32(ctx, 31, 0x33E388u);
    ctx->pc = 0x33E384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E380u;
            // 0x33e384: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E388u; }
        if (ctx->pc != 0x33E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E388u; }
        if (ctx->pc != 0x33E388u) { return; }
    }
    ctx->pc = 0x33E388u;
label_33e388:
    // 0x33e388: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33e38c: 0x15363c  dsll32      $a2, $s5, 24
    ctx->pc = 0x33e38cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 24));
    // 0x33e390: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33e390u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33e394: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x33e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33e398: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x33e398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33e39c: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x33e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x33e3a0: 0xa0f40000  sb          $s4, 0x0($a3)
    ctx->pc = 0x33e3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x33e3a4: 0xa4f30002  sh          $s3, 0x2($a3)
    ctx->pc = 0x33e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x33e3a8: 0xa4f20004  sh          $s2, 0x4($a3)
    ctx->pc = 0x33e3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x33e3ac: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x33e3acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e3b0: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x33e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x33e3b4: 0xacf10018  sw          $s1, 0x18($a3)
    ctx->pc = 0x33e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 17));
    // 0x33e3b8: 0xacf00020  sw          $s0, 0x20($a3)
    ctx->pc = 0x33e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 16));
    // 0x33e3bc: 0xacf60020  sw          $s6, 0x20($a3)
    ctx->pc = 0x33e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 22));
    // 0x33e3c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x33e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33e3c4: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x33e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x33e3c8: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x33e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x33e3cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x33e3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33e3d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33e3d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33e3d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33e3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33e3d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33e3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e3dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33e3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x33E3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E3ECu;
            // 0x33e3f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33E3F4u;
    // 0x33e3f4: 0x0  nop
    ctx->pc = 0x33e3f4u;
    // NOP
    // 0x33e3f8: 0x0  nop
    ctx->pc = 0x33e3f8u;
    // NOP
    // 0x33e3fc: 0x0  nop
    ctx->pc = 0x33e3fcu;
    // NOP
label_33e400:
    // 0x33e400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e404: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e40c: 0x9067e818  lbu         $a3, -0x17E8($v1)
    ctx->pc = 0x33e40cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33e410: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e414: 0x10e300c4  beq         $a3, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x33E414u;
    {
        const bool branch_taken_0x33e414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e414) {
            ctx->pc = 0x33E728u;
            goto label_33e728;
        }
    }
    ctx->pc = 0x33E41Cu;
    // 0x33e41c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33e41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e420: 0x10e6009f  beq         $a3, $a2, . + 4 + (0x9F << 2)
    ctx->pc = 0x33E420u;
    {
        const bool branch_taken_0x33e420 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x33e420) {
            ctx->pc = 0x33E6A0u;
            goto label_33e6a0;
        }
    }
    ctx->pc = 0x33E428u;
    // 0x33e428: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e42c: 0x10e40066  beq         $a3, $a0, . + 4 + (0x66 << 2)
    ctx->pc = 0x33E42Cu;
    {
        const bool branch_taken_0x33e42c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e42c) {
            ctx->pc = 0x33E5C8u;
            goto label_33e5c8;
        }
    }
    ctx->pc = 0x33E434u;
    // 0x33e434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e438: 0x10e50012  beq         $a3, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33E438u;
    {
        const bool branch_taken_0x33e438 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x33e438) {
            ctx->pc = 0x33E484u;
            goto label_33e484;
        }
    }
    ctx->pc = 0x33E440u;
    // 0x33e440: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E440u;
    {
        const bool branch_taken_0x33e440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e440) {
            ctx->pc = 0x33E450u;
            goto label_33e450;
        }
    }
    ctx->pc = 0x33E448u;
    // 0x33e448: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x33E448u;
    {
        const bool branch_taken_0x33e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E448u;
            // 0x33e44c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e448) {
            ctx->pc = 0x33E788u;
            goto label_33e788;
        }
    }
    ctx->pc = 0x33E450u;
label_33e450:
    // 0x33e450: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x33E450u;
    SET_GPR_U32(ctx, 31, 0x33E458u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E458u; }
        if (ctx->pc != 0x33E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E458u; }
        if (ctx->pc != 0x33E458u) { return; }
    }
    ctx->pc = 0x33E458u;
label_33e458:
    // 0x33e458: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e45c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e460: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x33e460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
    // 0x33e464: 0xc0d03ec  jal         func_340FB0
    ctx->pc = 0x33E464u;
    SET_GPR_U32(ctx, 31, 0x33E46Cu);
    ctx->pc = 0x33E468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E464u;
            // 0x33e468: 0xac40e7f8  sw          $zero, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340FB0u;
    if (runtime->hasFunction(0x340FB0u)) {
        auto targetFn = runtime->lookupFunction(0x340FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E46Cu; }
        if (ctx->pc != 0x33E46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340FB0_0x340fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E46Cu; }
        if (ctx->pc != 0x33E46Cu) { return; }
    }
    ctx->pc = 0x33E46Cu;
label_33e46c:
    // 0x33e46c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e470: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e474: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33e474u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33e478: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33e47c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x33E47Cu;
    {
        const bool branch_taken_0x33e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E47Cu;
            // 0x33e480: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e47c) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E484u;
label_33e484:
    // 0x33e484: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e488: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33e48c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x33e48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33e490: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x33E490u;
    {
        const bool branch_taken_0x33e490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e490) {
            ctx->pc = 0x33E548u;
            goto label_33e548;
        }
    }
    ctx->pc = 0x33E498u;
    // 0x33e498: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e49c: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33e4a0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x33e4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x33e4a4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x33E4A4u;
    {
        const bool branch_taken_0x33e4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e4a4) {
            ctx->pc = 0x33E548u;
            goto label_33e548;
        }
    }
    ctx->pc = 0x33E4ACu;
    // 0x33e4ac: 0x1066001b  beq         $v1, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x33E4ACu;
    {
        const bool branch_taken_0x33e4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33e4ac) {
            ctx->pc = 0x33E51Cu;
            goto label_33e51c;
        }
    }
    ctx->pc = 0x33E4B4u;
    // 0x33e4b4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33E4B4u;
    {
        const bool branch_taken_0x33e4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33e4b4) {
            ctx->pc = 0x33E4D4u;
            goto label_33e4d4;
        }
    }
    ctx->pc = 0x33E4BCu;
    // 0x33e4bc: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E4BCu;
    {
        const bool branch_taken_0x33e4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x33e4bc) {
            ctx->pc = 0x33E4D4u;
            goto label_33e4d4;
        }
    }
    ctx->pc = 0x33E4C4u;
    // 0x33e4c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E4C4u;
    {
        const bool branch_taken_0x33e4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e4c4) {
            ctx->pc = 0x33E4D4u;
            goto label_33e4d4;
        }
    }
    ctx->pc = 0x33E4CCu;
    // 0x33e4cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33E4CCu;
    {
        const bool branch_taken_0x33e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e4cc) {
            ctx->pc = 0x33E548u;
            goto label_33e548;
        }
    }
    ctx->pc = 0x33E4D4u;
label_33e4d4:
    // 0x33e4d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e4d8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33e4dc: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33e4e0: 0x2484e790  addiu       $a0, $a0, -0x1870
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    // 0x33e4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e4e8: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33e4ec: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x33e4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33e4f0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33e4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33e4f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33e4f8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33e4f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33e4fc: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33E4FCu;
    SET_GPR_U32(ctx, 31, 0x33E504u);
    ctx->pc = 0x33E500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E4FCu;
            // 0x33e500: 0x244800c0  addiu       $t0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E504u; }
        if (ctx->pc != 0x33E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E504u; }
        if (ctx->pc != 0x33E504u) { return; }
    }
    ctx->pc = 0x33E504u;
label_33e504:
    // 0x33e504: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e508: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e50c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33e510: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33e514: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33E514u;
    {
        const bool branch_taken_0x33e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E514u;
            // 0x33e518: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e514) {
            ctx->pc = 0x33E548u;
            goto label_33e548;
        }
    }
    ctx->pc = 0x33E51Cu;
label_33e51c:
    // 0x33e51c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33e520: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33e520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33e524: 0x2484e790  addiu       $a0, $a0, -0x1870
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    // 0x33e528: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33e52c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33E52Cu;
    SET_GPR_U32(ctx, 31, 0x33E534u);
    ctx->pc = 0x33E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E52Cu;
            // 0x33e530: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E534u; }
        if (ctx->pc != 0x33E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E534u; }
        if (ctx->pc != 0x33E534u) { return; }
    }
    ctx->pc = 0x33E534u;
label_33e534:
    // 0x33e534: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e538: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e53c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33e540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33e544: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33e544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_33e548:
    // 0x33e548: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e54c: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33e54cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e550: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33e554: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E554u;
    {
        const bool branch_taken_0x33e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e554) {
            ctx->pc = 0x33E57Cu;
            goto label_33e57c;
        }
    }
    ctx->pc = 0x33E55Cu;
    // 0x33e55c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33e55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33e560: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E560u;
    {
        const bool branch_taken_0x33e560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e560) {
            ctx->pc = 0x33E57Cu;
            goto label_33e57c;
        }
    }
    ctx->pc = 0x33E568u;
    // 0x33e568: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e56c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e570: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33e570u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33e574: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33e578: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33e578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33e57c:
    // 0x33e57c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e580: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33e584: 0x28610055  slti        $at, $v1, 0x55
    ctx->pc = 0x33e584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x33e588: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E588u;
    {
        const bool branch_taken_0x33e588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e588) {
            ctx->pc = 0x33E5B0u;
            goto label_33e5b0;
        }
    }
    ctx->pc = 0x33E590u;
    // 0x33e590: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33e594: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e598: 0xac64e7d0  sw          $a0, -0x1830($v1)
    ctx->pc = 0x33e598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
    // 0x33e59c: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x33e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x33e5a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E5A0u;
    {
        const bool branch_taken_0x33e5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e5a0) {
            ctx->pc = 0x33E5B0u;
            goto label_33e5b0;
        }
    }
    ctx->pc = 0x33E5A8u;
    // 0x33e5a8: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x33E5A8u;
    SET_GPR_U32(ctx, 31, 0x33E5B0u);
    ctx->pc = 0x30D680u;
    if (runtime->hasFunction(0x30D680u)) {
        auto targetFn = runtime->lookupFunction(0x30D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5B0u; }
        if (ctx->pc != 0x33E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D680_0x30d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5B0u; }
        if (ctx->pc != 0x33E5B0u) { return; }
    }
    ctx->pc = 0x33E5B0u;
label_33e5b0:
    // 0x33e5b0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e5b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e5b8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33e5bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33e5c0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x33E5C0u;
    {
        const bool branch_taken_0x33e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E5C0u;
            // 0x33e5c4: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5c0) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E5C8u;
label_33e5c8:
    // 0x33e5c8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e5cc: 0x8c42e7d0  lw          $v0, -0x1830($v0)
    ctx->pc = 0x33e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961104)));
    // 0x33e5d0: 0x28410055  slti        $at, $v0, 0x55
    ctx->pc = 0x33e5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x33e5d4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E5D4u;
    {
        const bool branch_taken_0x33e5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e5d4) {
            ctx->pc = 0x33E5FCu;
            goto label_33e5fc;
        }
    }
    ctx->pc = 0x33E5DCu;
    // 0x33e5dc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33e5e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e5e4: 0xac43e7d0  sw          $v1, -0x1830($v0)
    ctx->pc = 0x33e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961104), GPR_U32(ctx, 3));
    // 0x33e5e8: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x33e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x33e5ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E5ECu;
    {
        const bool branch_taken_0x33e5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e5ec) {
            ctx->pc = 0x33E5FCu;
            goto label_33e5fc;
        }
    }
    ctx->pc = 0x33E5F4u;
    // 0x33e5f4: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x33E5F4u;
    SET_GPR_U32(ctx, 31, 0x33E5FCu);
    ctx->pc = 0x30D680u;
    if (runtime->hasFunction(0x30D680u)) {
        auto targetFn = runtime->lookupFunction(0x30D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5FCu; }
        if (ctx->pc != 0x33E5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D680_0x30d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E5FCu; }
        if (ctx->pc != 0x33E5FCu) { return; }
    }
    ctx->pc = 0x33E5FCu;
label_33e5fc:
    // 0x33e5fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e600: 0x8044e800  lb          $a0, -0x1800($v0)
    ctx->pc = 0x33e600u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x33e604: 0xc0cd948  jal         func_336520
    ctx->pc = 0x33E604u;
    SET_GPR_U32(ctx, 31, 0x33E60Cu);
    ctx->pc = 0x33E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E604u;
            // 0x33e608: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E60Cu; }
        if (ctx->pc != 0x33E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E60Cu; }
        if (ctx->pc != 0x33E60Cu) { return; }
    }
    ctx->pc = 0x33E60Cu;
label_33e60c:
    // 0x33e60c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33e60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33e610: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x33e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33e614: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33e614u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x33e618: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e61c: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x33e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x33e620: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33e620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e624: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e628: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x33E628u;
    SET_GPR_U32(ctx, 31, 0x33E630u);
    ctx->pc = 0x33E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E628u;
            // 0x33e62c: 0xac43e808  sw          $v1, -0x17F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (runtime->hasFunction(0x336AF0u)) {
        auto targetFn = runtime->lookupFunction(0x336AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E630u; }
        if (ctx->pc != 0x33E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336AF0_0x336af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E630u; }
        if (ctx->pc != 0x33E630u) { return; }
    }
    ctx->pc = 0x33E630u;
label_33e630:
    // 0x33e630: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33E630u;
    {
        const bool branch_taken_0x33e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e630) {
            ctx->pc = 0x33E634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E630u;
            // 0x33e634: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E678u;
            goto label_33e678;
        }
    }
    ctx->pc = 0x33E638u;
    // 0x33e638: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33e638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e63c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e640: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x33e640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x33e644: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e648: 0x8c64e808  lw          $a0, -0x17F8($v1)
    ctx->pc = 0x33e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x33e64c: 0x54850005  bnel        $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E64Cu;
    {
        const bool branch_taken_0x33e64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x33e64c) {
            ctx->pc = 0x33E650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E64Cu;
            // 0x33e650: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E664u;
            goto label_33e664;
        }
    }
    ctx->pc = 0x33E654u;
    // 0x33e654: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e658: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e65c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33E65Cu;
    {
        const bool branch_taken_0x33e65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E65Cu;
            // 0x33e660: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e65c) {
            ctx->pc = 0x33E66Cu;
            goto label_33e66c;
        }
    }
    ctx->pc = 0x33E664u;
label_33e664:
    // 0x33e664: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x33E664u;
    SET_GPR_U32(ctx, 31, 0x33E66Cu);
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E66Cu; }
        if (ctx->pc != 0x33E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E66Cu; }
        if (ctx->pc != 0x33E66Cu) { return; }
    }
    ctx->pc = 0x33E66Cu;
label_33e66c:
    // 0x33e66c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e670: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x33E670u;
    {
        const bool branch_taken_0x33e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E670u;
            // 0x33e674: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e670) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E678u;
label_33e678:
    // 0x33e678: 0xc0cdabc  jal         func_336AF0
    ctx->pc = 0x33E678u;
    SET_GPR_U32(ctx, 31, 0x33E680u);
    ctx->pc = 0x33E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E678u;
            // 0x33e67c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336AF0u;
    if (runtime->hasFunction(0x336AF0u)) {
        auto targetFn = runtime->lookupFunction(0x336AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E680u; }
        if (ctx->pc != 0x33E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336AF0_0x336af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E680u; }
        if (ctx->pc != 0x33E680u) { return; }
    }
    ctx->pc = 0x33E680u;
label_33e680:
    // 0x33e680: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x33E680u;
    {
        const bool branch_taken_0x33e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e680) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E688u;
    // 0x33e688: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e68c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e690: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33e690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e694: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e698: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x33E698u;
    {
        const bool branch_taken_0x33e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E698u;
            // 0x33e69c: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e698) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E6A0u;
label_33e6a0:
    // 0x33e6a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e6a4: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33e6a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e6a8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33e6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33e6ac: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x33E6ACu;
    {
        const bool branch_taken_0x33e6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6ac) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E6B4u;
    // 0x33e6b4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33e6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33e6b8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x33E6B8u;
    {
        const bool branch_taken_0x33e6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6b8) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E6C0u;
    // 0x33e6c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e6c4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33e6c8: 0x8c42e808  lw          $v0, -0x17F8($v0)
    ctx->pc = 0x33e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x33e6cc: 0x24633790  addiu       $v1, $v1, 0x3790
    ctx->pc = 0x33e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14224));
    // 0x33e6d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33e6d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33e6d8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33E6D8u;
    SET_GPR_U32(ctx, 31, 0x33E6E0u);
    ctx->pc = 0x33E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E6D8u;
            // 0x33e6dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6E0u; }
        if (ctx->pc != 0x33E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E6E0u; }
        if (ctx->pc != 0x33E6E0u) { return; }
    }
    ctx->pc = 0x33E6E0u;
label_33e6e0:
    // 0x33e6e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e6e4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x33e6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x33e6e8: 0x8c69e808  lw          $t1, -0x17F8($v1)
    ctx->pc = 0x33e6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x33e6ec: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33e6f0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33e6f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33e6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e6f8: 0x250837a0  addiu       $t0, $t0, 0x37A0
    ctx->pc = 0x33e6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14240));
    // 0x33e6fc: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x33e700: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e704: 0xaca9ea78  sw          $t1, -0x1588($a1)
    ctx->pc = 0x33e704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961784), GPR_U32(ctx, 9));
    // 0x33e708: 0xac67ea60  sw          $a3, -0x15A0($v1)
    ctx->pc = 0x33e708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961760), GPR_U32(ctx, 7));
    // 0x33e70c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e710: 0x1093821  addu        $a3, $t0, $t1
    ctx->pc = 0x33e710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x33e714: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x33e714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e718: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x33e718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33e71c: 0xac80ea68  sw          $zero, -0x1598($a0)
    ctx->pc = 0x33e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961768), GPR_U32(ctx, 0));
    // 0x33e720: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33E720u;
    {
        const bool branch_taken_0x33e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E720u;
            // 0x33e724: 0xa0c3e820  sb          $v1, -0x17E0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294961184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e720) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E728u;
label_33e728:
    // 0x33e728: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e72c: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33e72cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e730: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33e730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33e734: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33E734u;
    {
        const bool branch_taken_0x33e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e734) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E73Cu;
    // 0x33e73c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33e73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33e740: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33E740u;
    {
        const bool branch_taken_0x33e740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e740) {
            ctx->pc = 0x33E784u;
            goto label_33e784;
        }
    }
    ctx->pc = 0x33E748u;
    // 0x33e748: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33e748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33e74c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33E74Cu;
    SET_GPR_U32(ctx, 31, 0x33E754u);
    ctx->pc = 0x33E750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E74Cu;
            // 0x33e750: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E754u; }
        if (ctx->pc != 0x33E754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E754u; }
        if (ctx->pc != 0x33E754u) { return; }
    }
    ctx->pc = 0x33E754u;
label_33e754:
    // 0x33e754: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e758: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e75c: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x33e75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e764: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e768: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x33e768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x33e76c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e770: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33e774: 0xac44e7f8  sw          $a0, -0x1808($v0)
    ctx->pc = 0x33e774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 4));
    // 0x33e778: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e77c: 0xc0c358c  jal         func_30D630
    ctx->pc = 0x33E77Cu;
    SET_GPR_U32(ctx, 31, 0x33E784u);
    ctx->pc = 0x33E780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E77Cu;
            // 0x33e780: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D630u;
    if (runtime->hasFunction(0x30D630u)) {
        auto targetFn = runtime->lookupFunction(0x30D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E784u; }
        if (ctx->pc != 0x33E784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D630_0x30d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E784u; }
        if (ctx->pc != 0x33E784u) { return; }
    }
    ctx->pc = 0x33E784u;
label_33e784:
    // 0x33e784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e788:
    // 0x33e788: 0x3e00008  jr          $ra
    ctx->pc = 0x33E788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E788u;
            // 0x33e78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33E790u;
label_33e790:
    // 0x33e790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33e794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e798: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x33e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x33e79c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x33e7a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x33e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x33e7a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33e7a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33e7ac: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x33e7acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33e7b0: 0x82650001  lb          $a1, 0x1($s3)
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33e7b4: 0x86710004  lh          $s1, 0x4($s3)
    ctx->pc = 0x33e7b4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33e7b8: 0x10a2002e  beq         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x33E7B8u;
    {
        const bool branch_taken_0x33e7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33E7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E7B8u;
            // 0x33e7bc: 0x86720002  lh          $s2, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e7b8) {
            ctx->pc = 0x33E874u;
            goto label_33e874;
        }
    }
    ctx->pc = 0x33E7C0u;
    // 0x33e7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e7c4: 0x10a20023  beq         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x33E7C4u;
    {
        const bool branch_taken_0x33e7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x33e7c4) {
            ctx->pc = 0x33E854u;
            goto label_33e854;
        }
    }
    ctx->pc = 0x33E7CCu;
    // 0x33e7cc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E7CCu;
    {
        const bool branch_taken_0x33e7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e7cc) {
            ctx->pc = 0x33E7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E7CCu;
            // 0x33e7d0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E7DCu;
            goto label_33e7dc;
        }
    }
    ctx->pc = 0x33E7D4u;
    // 0x33e7d4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x33E7D4u;
    {
        const bool branch_taken_0x33e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E7D4u;
            // 0x33e7d8: 0xa6720002  sh          $s2, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e7d4) {
            ctx->pc = 0x33E8E0u;
            goto label_33e8e0;
        }
    }
    ctx->pc = 0x33E7DCu;
label_33e7dc:
    // 0x33e7dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x33E7DCu;
    {
        const bool branch_taken_0x33e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e7dc) {
            ctx->pc = 0x33E7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E7DCu;
            // 0x33e7e0: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E80Cu;
            goto label_33e80c;
        }
    }
    ctx->pc = 0x33E7E4u;
    // 0x33e7e4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x33e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x33e7e8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x33e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x33e7ec: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x33e7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33e7f0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x33e7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33e7f4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x33E7F4u;
    {
        const bool branch_taken_0x33e7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e7f4) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E7FCu;
    // 0x33e7fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x33e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33e800: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x33e800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e804: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33E804u;
    {
        const bool branch_taken_0x33e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E804u;
            // 0x33e808: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e804) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E80Cu;
label_33e80c:
    // 0x33e80c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x33e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x33e810: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x33e810u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x33e814: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x33e814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33e818: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x33E818u;
    {
        const bool branch_taken_0x33e818 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e818) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E820u;
    // 0x33e820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33e820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e824: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x33e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33e828: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x33e828u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e82c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33e830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e834: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x33E834u;
    {
        const bool branch_taken_0x33e834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e834) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E83Cu;
    // 0x33e83c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e840: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e844: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33e844u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e848: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33e848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33e84c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x33E84Cu;
    {
        const bool branch_taken_0x33e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E84Cu;
            // 0x33e850: 0xa043e810  sb          $v1, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e84c) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E854u;
label_33e854:
    // 0x33e854: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e858: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x33e858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x33e85c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33e85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e860: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33E860u;
    {
        const bool branch_taken_0x33e860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e860) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E868u;
    // 0x33e868: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x33e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33e86c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33E86Cu;
    {
        const bool branch_taken_0x33e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E86Cu;
            // 0x33e870: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e86c) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E874u;
label_33e874:
    // 0x33e874: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x33e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x33e878: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x33E878u;
    {
        const bool branch_taken_0x33e878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e878) {
            ctx->pc = 0x33E87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33E878u;
            // 0x33e87c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33E8B0u;
            goto label_33e8b0;
        }
    }
    ctx->pc = 0x33E880u;
    // 0x33e880: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x33e880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x33e884: 0x2a41fee1  slti        $at, $s2, -0x11F
    ctx->pc = 0x33e884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967009) ? 1 : 0);
    // 0x33e888: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x33E888u;
    {
        const bool branch_taken_0x33e888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e888) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E890u;
    // 0x33e890: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e894: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e898: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33e898u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e89c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33e89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33e8a0: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33E8A0u;
    SET_GPR_U32(ctx, 31, 0x33E8A8u);
    ctx->pc = 0x33E8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8A0u;
            // 0x33e8a4: 0xa043e810  sb          $v1, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8A8u; }
        if (ctx->pc != 0x33E8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8A8u; }
        if (ctx->pc != 0x33E8A8u) { return; }
    }
    ctx->pc = 0x33E8A8u;
label_33e8a8:
    // 0x33e8a8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x33E8A8u;
    {
        const bool branch_taken_0x33e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8A8u;
            // 0x33e8ac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8a8) {
            ctx->pc = 0x33EA28u;
            goto label_33ea28;
        }
    }
    ctx->pc = 0x33E8B0u;
label_33e8b0:
    // 0x33e8b0: 0x2a410281  slti        $at, $s2, 0x281
    ctx->pc = 0x33e8b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x33e8b4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E8B4u;
    {
        const bool branch_taken_0x33e8b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e8b4) {
            ctx->pc = 0x33E8DCu;
            goto label_33e8dc;
        }
    }
    ctx->pc = 0x33E8BCu;
    // 0x33e8bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33e8c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e8c4: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33e8c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33e8c8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33e8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33e8cc: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33E8CCu;
    SET_GPR_U32(ctx, 31, 0x33E8D4u);
    ctx->pc = 0x33E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8CCu;
            // 0x33e8d0: 0xa043e810  sb          $v1, -0x17F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8D4u; }
        if (ctx->pc != 0x33E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E8D4u; }
        if (ctx->pc != 0x33E8D4u) { return; }
    }
    ctx->pc = 0x33E8D4u;
label_33e8d4:
    // 0x33e8d4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x33E8D4u;
    {
        const bool branch_taken_0x33e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e8d4) {
            ctx->pc = 0x33EA24u;
            goto label_33ea24;
        }
    }
    ctx->pc = 0x33E8DCu;
label_33e8dc:
    // 0x33e8dc: 0xa6720002  sh          $s2, 0x2($s3)
    ctx->pc = 0x33e8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 18));
label_33e8e0:
    // 0x33e8e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e8e4: 0xa6710004  sh          $s1, 0x4($s3)
    ctx->pc = 0x33e8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x33e8e8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x33e8e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33e8ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33E8ECu;
    {
        const bool branch_taken_0x33e8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33E8ECu;
            // 0x33e8f0: 0x241000c0  addiu       $s0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8ec) {
            ctx->pc = 0x33E8F8u;
            goto label_33e8f8;
        }
    }
    ctx->pc = 0x33E8F4u;
    // 0x33e8f4: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x33e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_33e8f8:
    // 0x33e8f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33e8fc: 0x8c42e800  lw          $v0, -0x1800($v0)
    ctx->pc = 0x33e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x33e900: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x33E900u;
    {
        const bool branch_taken_0x33e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e900) {
            ctx->pc = 0x33E980u;
            goto label_33e980;
        }
    }
    ctx->pc = 0x33E908u;
    // 0x33e908: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33e908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33e90c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e910: 0x24843804  addiu       $a0, $a0, 0x3804
    ctx->pc = 0x33e910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14340));
    // 0x33e914: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33E914u;
    SET_GPR_U32(ctx, 31, 0x33E91Cu);
    ctx->pc = 0x33E918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E914u;
            // 0x33e918: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E91Cu; }
        if (ctx->pc != 0x33E91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E91Cu; }
        if (ctx->pc != 0x33E91Cu) { return; }
    }
    ctx->pc = 0x33E91Cu;
label_33e91c:
    // 0x33e91c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33e920: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x33e920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33e924: 0x24843810  addiu       $a0, $a0, 0x3810
    ctx->pc = 0x33e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
    // 0x33e928: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e92c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33e92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e930: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x33E930u;
    SET_GPR_U32(ctx, 31, 0x33E938u);
    ctx->pc = 0x33E934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E930u;
            // 0x33e934: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E938u; }
        if (ctx->pc != 0x33E938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E938u; }
        if (ctx->pc != 0x33E938u) { return; }
    }
    ctx->pc = 0x33E938u;
label_33e938:
    // 0x33e938: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33e93c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33e940: 0x2484381c  addiu       $a0, $a0, 0x381C
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14364));
    // 0x33e944: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x33e944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33e948: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33E948u;
    SET_GPR_U32(ctx, 31, 0x33E950u);
    ctx->pc = 0x33E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E948u;
            // 0x33e94c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E950u; }
        if (ctx->pc != 0x33E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E950u; }
        if (ctx->pc != 0x33E950u) { return; }
    }
    ctx->pc = 0x33E950u;
label_33e950:
    // 0x33e950: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x33e950u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33e954: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33e958: 0x244237b0  addiu       $v0, $v0, 0x37B0
    ctx->pc = 0x33e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14256));
    // 0x33e95c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e960: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e964: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33e964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33e968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e96c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e970: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33E970u;
    SET_GPR_U32(ctx, 31, 0x33E978u);
    ctx->pc = 0x33E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E970u;
            // 0x33e974: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E978u; }
        if (ctx->pc != 0x33E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E978u; }
        if (ctx->pc != 0x33E978u) { return; }
    }
    ctx->pc = 0x33E978u;
label_33e978:
    // 0x33e978: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x33E978u;
    {
        const bool branch_taken_0x33e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e978) {
            ctx->pc = 0x33EA24u;
            goto label_33ea24;
        }
    }
    ctx->pc = 0x33E980u;
label_33e980:
    // 0x33e980: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33e980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33e984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e988: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x33e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x33e98c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e990: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33E990u;
    SET_GPR_U32(ctx, 31, 0x33E998u);
    ctx->pc = 0x33E994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E990u;
            // 0x33e994: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E998u; }
        if (ctx->pc != 0x33E998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E998u; }
        if (ctx->pc != 0x33E998u) { return; }
    }
    ctx->pc = 0x33E998u;
label_33e998:
    // 0x33e998: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x33e99c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x33e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x33e9a0: 0x256b37ec  addiu       $t3, $t3, 0x37EC
    ctx->pc = 0x33e9a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 14316));
    // 0x33e9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e9a8: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x33e9a8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x33e9ac: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x33e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33e9b0: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x33e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x33e9b4: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x33e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x33e9b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33e9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e9bc: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x33e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33e9c0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x33e9c4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x33e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33e9c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x33e9cc: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x33e9ccu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33e9d0: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33e9d0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x33e9d4: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x33e9d4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33e9d8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33E9D8u;
    SET_GPR_U32(ctx, 31, 0x33E9E0u);
    ctx->pc = 0x33E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9D8u;
            // 0x33e9dc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E9E0u; }
        if (ctx->pc != 0x33E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E9E0u; }
        if (ctx->pc != 0x33E9E0u) { return; }
    }
    ctx->pc = 0x33E9E0u;
label_33e9e0:
    // 0x33e9e0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x33e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33e9e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33e9e8: 0x248437f8  addiu       $a0, $a0, 0x37F8
    ctx->pc = 0x33e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14328));
    // 0x33e9ec: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x33e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33e9f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e9f4: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33E9F4u;
    SET_GPR_U32(ctx, 31, 0x33E9FCu);
    ctx->pc = 0x33E9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33E9F4u;
            // 0x33e9f8: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E9FCu; }
        if (ctx->pc != 0x33E9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33E9FCu; }
        if (ctx->pc != 0x33E9FCu) { return; }
    }
    ctx->pc = 0x33E9FCu;
label_33e9fc:
    // 0x33e9fc: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x33e9fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33ea00: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33ea04: 0x244237b0  addiu       $v0, $v0, 0x37B0
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14256));
    // 0x33ea08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33ea0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33ea14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ea18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ea1c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33EA1Cu;
    SET_GPR_U32(ctx, 31, 0x33EA24u);
    ctx->pc = 0x33EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA1Cu;
            // 0x33ea20: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EA24u; }
        if (ctx->pc != 0x33EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EA24u; }
        if (ctx->pc != 0x33EA24u) { return; }
    }
    ctx->pc = 0x33EA24u;
label_33ea24:
    // 0x33ea24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x33ea24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_33ea28:
    // 0x33ea28: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x33ea28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ea2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33ea2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ea30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33ea30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ea34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33ea34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x33EA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EA38u;
            // 0x33ea3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33EA40u;
label_33ea40:
    // 0x33ea40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ea44: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ea48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ea4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33ea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33ea50: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x33ea50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33ea54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33ea58: 0x108301f9  beq         $a0, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x33EA58u;
    {
        const bool branch_taken_0x33ea58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ea58) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33EA60u;
    // 0x33ea60: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33ea64: 0x108301d0  beq         $a0, $v1, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x33EA64u;
    {
        const bool branch_taken_0x33ea64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ea64) {
            ctx->pc = 0x33F1A8u;
            goto label_33f1a8;
        }
    }
    ctx->pc = 0x33EA6Cu;
    // 0x33ea6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33ea70: 0x1083012c  beq         $a0, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x33EA70u;
    {
        const bool branch_taken_0x33ea70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ea70) {
            ctx->pc = 0x33EF24u;
            goto label_33ef24;
        }
    }
    ctx->pc = 0x33EA78u;
    // 0x33ea78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ea7c: 0x108300fb  beq         $a0, $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x33EA7Cu;
    {
        const bool branch_taken_0x33ea7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ea7c) {
            ctx->pc = 0x33EE6Cu;
            goto label_33ee6c;
        }
    }
    ctx->pc = 0x33EA84u;
    // 0x33ea84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ea88: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x33EA88u;
    {
        const bool branch_taken_0x33ea88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ea88) {
            ctx->pc = 0x33EE30u;
            goto label_33ee30;
        }
    }
    ctx->pc = 0x33EA90u;
    // 0x33ea90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ea94: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33EA94u;
    {
        const bool branch_taken_0x33ea94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33ea94) {
            ctx->pc = 0x33EAE4u;
            goto label_33eae4;
        }
    }
    ctx->pc = 0x33EA9Cu;
    // 0x33ea9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EA9Cu;
    {
        const bool branch_taken_0x33ea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ea9c) {
            ctx->pc = 0x33EAACu;
            goto label_33eaac;
        }
    }
    ctx->pc = 0x33EAA4u;
    // 0x33eaa4: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x33EAA4u;
    {
        const bool branch_taken_0x33eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EAA4u;
            // 0x33eaa8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eaa4) {
            ctx->pc = 0x33F2ACu;
            goto label_33f2ac;
        }
    }
    ctx->pc = 0x33EAACu;
label_33eaac:
    // 0x33eaac: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x33EAACu;
    SET_GPR_U32(ctx, 31, 0x33EAB4u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EAB4u; }
        if (ctx->pc != 0x33EAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EAB4u; }
        if (ctx->pc != 0x33EAB4u) { return; }
    }
    ctx->pc = 0x33EAB4u;
label_33eab4:
    // 0x33eab4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33eab8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eabc: 0xac80e800  sw          $zero, -0x1800($a0)
    ctx->pc = 0x33eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 0));
    // 0x33eac0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33eac4: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x33eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
    // 0x33eac8: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33eac8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33eacc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ead0: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x33ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
    // 0x33ead4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ead8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33eadc: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x33EADCu;
    {
        const bool branch_taken_0x33eadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EADCu;
            // 0x33eae0: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eadc) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EAE4u;
label_33eae4:
    // 0x33eae4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eae8: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33eaec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x33eaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33eaf0: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x33EAF0u;
    {
        const bool branch_taken_0x33eaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33eaf0) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33EAF8u;
    // 0x33eaf8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eafc: 0x8c66e7c8  lw          $a2, -0x1838($v1)
    ctx->pc = 0x33eafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33eb00: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x33eb00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33eb04: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x33EB04u;
    {
        const bool branch_taken_0x33eb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eb04) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33EB0Cu;
    // 0x33eb0c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33eb10: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x33eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33eb14: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x33eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    // 0x33eb18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33eb1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33eb20: 0x600008  jr          $v1
    ctx->pc = 0x33EB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33EB28u: goto label_33eb28;
            case 0x33EB60u: goto label_33eb60;
            case 0x33EC00u: goto label_33ec00;
            case 0x33ECA0u: goto label_33eca0;
            case 0x33ED40u: goto label_33ed40;
            case 0x33ED78u: goto label_33ed78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33EB28u;
label_33eb28:
    // 0x33eb28: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x33eb28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33eb2c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33eb30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33eb30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33eb34: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33eb38: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33eb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33eb3c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x33eb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x33eb40: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33EB40u;
    SET_GPR_U32(ctx, 31, 0x33EB48u);
    ctx->pc = 0x33EB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB40u;
            // 0x33eb44: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB48u; }
        if (ctx->pc != 0x33EB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EB48u; }
        if (ctx->pc != 0x33EB48u) { return; }
    }
    ctx->pc = 0x33EB48u;
label_33eb48:
    // 0x33eb48: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33eb4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eb50: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33eb54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33eb58: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x33EB58u;
    {
        const bool branch_taken_0x33eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB58u;
            // 0x33eb5c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb58) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33EB60u;
label_33eb60:
    // 0x33eb60: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x33eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33eb64: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33eb68: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33eb6c: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x33eb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33eb70: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33eb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33eb74: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33eb74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33eb78: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33eb7c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33eb80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33eb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33eb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb88: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33eb88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33eb8c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33eb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33eb90: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33eb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33eb94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33eb94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb98: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33eb98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb9c: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EB9Cu;
    SET_GPR_U32(ctx, 31, 0x33EBA4u);
    ctx->pc = 0x33EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EB9Cu;
            // 0x33eba0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EBA4u;
label_33eba4:
    // 0x33eba4: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x33eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33eba8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ebac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x33ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x33ebb0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ebb4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x33ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x33ebb8: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33ebb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33ebbc: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33ebc0: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33ebc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33ebc4: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ebc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ebcc: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33ebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33ebd0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33ebd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33ebd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ebd8: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x33ebd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x33ebdc: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33ebdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33ebe0: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EBE0u;
    SET_GPR_U32(ctx, 31, 0x33EBE8u);
    ctx->pc = 0x33EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EBE0u;
            // 0x33ebe4: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EBE8u;
label_33ebe8:
    // 0x33ebe8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ebec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ebf0: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33ebf4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33ebf8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x33EBF8u;
    {
        const bool branch_taken_0x33ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EBF8u;
            // 0x33ebfc: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ebf8) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33EC00u;
label_33ec00:
    // 0x33ec00: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x33ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33ec04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ec08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ec0c: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x33ec0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33ec10: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ec14: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33ec14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33ec18: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33ec1c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ec20: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33ec24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec28: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33ec28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33ec2c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33ec30: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x33ec34: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x33ec34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33ec38: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33ec38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec3c: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EC3Cu;
    SET_GPR_U32(ctx, 31, 0x33EC44u);
    ctx->pc = 0x33EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC3Cu;
            // 0x33ec40: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EC44u;
label_33ec44:
    // 0x33ec44: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x33ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33ec48: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ec4c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x33ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x33ec50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ec54: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x33ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x33ec58: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33ec58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33ec5c: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33ec60: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33ec60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33ec64: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ec68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ec6c: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33ec70: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x33ec70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x33ec74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ec78: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x33ec78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x33ec7c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33ec7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33ec80: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EC80u;
    SET_GPR_U32(ctx, 31, 0x33EC88u);
    ctx->pc = 0x33EC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC80u;
            // 0x33ec84: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EC88u;
label_33ec88:
    // 0x33ec88: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ec8c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ec90: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33ec94: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33ec98: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x33EC98u;
    {
        const bool branch_taken_0x33ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EC98u;
            // 0x33ec9c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec98) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33ECA0u;
label_33eca0:
    // 0x33eca0: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x33eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33eca4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33eca8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ecac: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x33ecacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33ecb0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ecb4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33ecb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33ecb8: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33ecbc: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ecc0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33ecc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ecc8: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33ecc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33eccc: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33ecccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33ecd0: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33ecd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33ecd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33ecd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ecd8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33ecd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ecdc: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33ECDCu;
    SET_GPR_U32(ctx, 31, 0x33ECE4u);
    ctx->pc = 0x33ECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ECDCu;
            // 0x33ece0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33ECE4u;
label_33ece4:
    // 0x33ece4: 0x26020005  addiu       $v0, $s0, 0x5
    ctx->pc = 0x33ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33ece8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ecec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33ecf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ecf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ecf8: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x33ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x33ecfc: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33ed00: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33ed00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33ed04: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33ed04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33ed08: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ed0c: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33ed10: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33ed14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ed18: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x33ed1c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33ed1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33ed20: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33ED20u;
    SET_GPR_U32(ctx, 31, 0x33ED28u);
    ctx->pc = 0x33ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED20u;
            // 0x33ed24: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33ED28u;
label_33ed28:
    // 0x33ed28: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ed2c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ed30: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33ed34: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33ed38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33ED38u;
    {
        const bool branch_taken_0x33ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED38u;
            // 0x33ed3c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed38) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33ED40u;
label_33ed40:
    // 0x33ed40: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ed44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ed48: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ed4c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x33ed4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33ed50: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33ed50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33ed54: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33ed54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33ed58: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33ED58u;
    SET_GPR_U32(ctx, 31, 0x33ED60u);
    ctx->pc = 0x33ED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED58u;
            // 0x33ed5c: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED60u; }
        if (ctx->pc != 0x33ED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED60u; }
        if (ctx->pc != 0x33ED60u) { return; }
    }
    ctx->pc = 0x33ED60u;
label_33ed60:
    // 0x33ed60: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ed64: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ed68: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33ed6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33ed70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33ED70u;
    {
        const bool branch_taken_0x33ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED70u;
            // 0x33ed74: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed70) {
            ctx->pc = 0x33EDA8u;
            goto label_33eda8;
        }
    }
    ctx->pc = 0x33ED78u;
label_33ed78:
    // 0x33ed78: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ed7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33ed7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33ed80: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ed84: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33ed88: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33ed88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33ed8c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33ED8Cu;
    SET_GPR_U32(ctx, 31, 0x33ED94u);
    ctx->pc = 0x33ED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ED8Cu;
            // 0x33ed90: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED94u; }
        if (ctx->pc != 0x33ED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ED94u; }
        if (ctx->pc != 0x33ED94u) { return; }
    }
    ctx->pc = 0x33ED94u;
label_33ed94:
    // 0x33ed94: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ed98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ed9c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33eda0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33eda4: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_33eda8:
    // 0x33eda8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33edac: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33edacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33edb0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33edb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33edb4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x33EDB4u;
    {
        const bool branch_taken_0x33edb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33edb4) {
            ctx->pc = 0x33EE18u;
            goto label_33ee18;
        }
    }
    ctx->pc = 0x33EDBCu;
    // 0x33edbc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33edbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33edc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x33EDC0u;
    {
        const bool branch_taken_0x33edc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33edc0) {
            ctx->pc = 0x33EE18u;
            goto label_33ee18;
        }
    }
    ctx->pc = 0x33EDC8u;
    // 0x33edc8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33edcc: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33edd0: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x33edd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33edd4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33EDD4u;
    {
        const bool branch_taken_0x33edd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33edd4) {
            ctx->pc = 0x33EE18u;
            goto label_33ee18;
        }
    }
    ctx->pc = 0x33EDDCu;
    // 0x33eddc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ede0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33ede4: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x33ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x33ede8: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x33ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x33edec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33edecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33edf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33edf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33edf4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33EDF4u;
    SET_GPR_U32(ctx, 31, 0x33EDFCu);
    ctx->pc = 0x33EDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EDF4u;
            // 0x33edf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EDFCu; }
        if (ctx->pc != 0x33EDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EDFCu; }
        if (ctx->pc != 0x33EDFCu) { return; }
    }
    ctx->pc = 0x33EDFCu;
label_33edfc:
    // 0x33edfc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ee00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee04: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33ee04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33ee08: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33ee08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ee0c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33ee14: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33ee18:
    // 0x33ee18: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ee1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee20: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33ee24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33ee28: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x33EE28u;
    {
        const bool branch_taken_0x33ee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE28u;
            // 0x33ee2c: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee28) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EE30u;
label_33ee30:
    // 0x33ee30: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee34: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33ee38: 0x28610055  slti        $at, $v1, 0x55
    ctx->pc = 0x33ee38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x33ee3c: 0x1020011a  beqz        $at, . + 4 + (0x11A << 2)
    ctx->pc = 0x33EE3Cu;
    {
        const bool branch_taken_0x33ee3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee3c) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EE44u;
    // 0x33ee44: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ee48: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee4c: 0xac64e7d0  sw          $a0, -0x1830($v1)
    ctx->pc = 0x33ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
    // 0x33ee50: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x33ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x33ee54: 0x14830114  bne         $a0, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x33EE54u;
    {
        const bool branch_taken_0x33ee54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ee54) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EE5Cu;
    // 0x33ee5c: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x33EE5Cu;
    SET_GPR_U32(ctx, 31, 0x33EE64u);
    ctx->pc = 0x30D680u;
    if (runtime->hasFunction(0x30D680u)) {
        auto targetFn = runtime->lookupFunction(0x30D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EE64u; }
        if (ctx->pc != 0x33EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D680_0x30d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EE64u; }
        if (ctx->pc != 0x33EE64u) { return; }
    }
    ctx->pc = 0x33EE64u;
label_33ee64:
    // 0x33ee64: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x33EE64u;
    {
        const bool branch_taken_0x33ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee64) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EE6Cu;
label_33ee6c:
    // 0x33ee6c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee70: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33ee70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33ee74: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x33ee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33ee78: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x33EE78u;
    {
        const bool branch_taken_0x33ee78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee78) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EE80u;
    // 0x33ee80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee84: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ee88: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x33ee8c: 0x8c84ea6c  lw          $a0, -0x1594($a0)
    ctx->pc = 0x33ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961772)));
    // 0x33ee90: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ee94: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x33ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33ee98: 0x4a1000b  bgez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x33EE98u;
    {
        const bool branch_taken_0x33ee98 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x33EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EE98u;
            // 0x33ee9c: 0xac65ea64  sw          $a1, -0x159C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee98) {
            ctx->pc = 0x33EEC8u;
            goto label_33eec8;
        }
    }
    ctx->pc = 0x33EEA0u;
    // 0x33eea0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eea4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33eea8: 0x8c65ea78  lw          $a1, -0x1588($v1)
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x33eeac: 0x24843f08  addiu       $a0, $a0, 0x3F08
    ctx->pc = 0x33eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16136));
    // 0x33eeb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33eeb4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eeb8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33eeb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33eebc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33eec0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33EEC0u;
    {
        const bool branch_taken_0x33eec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EEC0u;
            // 0x33eec4: 0xac64ea64  sw          $a0, -0x159C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eec0) {
            ctx->pc = 0x33EEF4u;
            goto label_33eef4;
        }
    }
    ctx->pc = 0x33EEC8u;
label_33eec8:
    // 0x33eec8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eecc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33eed0: 0x8c63ea78  lw          $v1, -0x1588($v1)
    ctx->pc = 0x33eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x33eed4: 0x24843f08  addiu       $a0, $a0, 0x3F08
    ctx->pc = 0x33eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16136));
    // 0x33eed8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33eedc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33eedcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33eee0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x33eee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33eee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EEE4u;
    {
        const bool branch_taken_0x33eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33eee4) {
            ctx->pc = 0x33EEF4u;
            goto label_33eef4;
        }
    }
    ctx->pc = 0x33EEECu;
    // 0x33eeec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eef0: 0xac60ea64  sw          $zero, -0x159C($v1)
    ctx->pc = 0x33eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 0));
label_33eef4:
    // 0x33eef4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33eef8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33eefc: 0xac80ea68  sw          $zero, -0x1598($a0)
    ctx->pc = 0x33eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961768), GPR_U32(ctx, 0));
    // 0x33ef00: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33ef00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ef04: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ef08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ef0c: 0xac80e7d0  sw          $zero, -0x1830($a0)
    ctx->pc = 0x33ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961104), GPR_U32(ctx, 0));
    // 0x33ef10: 0xac60e7c8  sw          $zero, -0x1838($v1)
    ctx->pc = 0x33ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 0));
    // 0x33ef14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33ef18: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ef1c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x33EF1Cu;
    {
        const bool branch_taken_0x33ef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF1Cu;
            // 0x33ef20: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef1c) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33EF24u;
label_33ef24:
    // 0x33ef24: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33ef28: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ef2c: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33ef30: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x33ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33ef34: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x33ef34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x33ef38: 0x14800088  bnez        $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x33EF38u;
    {
        const bool branch_taken_0x33ef38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF38u;
            // 0x33ef3c: 0xac65e7d0  sw          $a1, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef38) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33EF40u;
    // 0x33ef40: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ef44: 0x8c65e7c8  lw          $a1, -0x1838($v1)
    ctx->pc = 0x33ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33ef48: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x33ef48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33ef4c: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x33EF4Cu;
    {
        const bool branch_taken_0x33ef4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ef4c) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33EF54u;
    // 0x33ef54: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33ef58: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33ef5c: 0x24844f10  addiu       $a0, $a0, 0x4F10
    ctx->pc = 0x33ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    // 0x33ef60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ef68: 0x600008  jr          $v1
    ctx->pc = 0x33EF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33EF70u: goto label_33ef70;
            case 0x33F010u: goto label_33f010;
            case 0x33F0B0u: goto label_33f0b0;
            case 0x33F150u: goto label_33f150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33EF70u;
label_33ef70:
    // 0x33ef70: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33ef74: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x33ef74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x33ef78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ef7c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33ef80: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ef84: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33ef84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33ef88: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33ef8c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33ef90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33ef94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ef94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef98: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33ef98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33ef9c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33efa0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33efa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33efa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33efa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efa8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33efa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efac: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EFACu;
    SET_GPR_U32(ctx, 31, 0x33EFB4u);
    ctx->pc = 0x33EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EFACu;
            // 0x33efb0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EFB4u;
label_33efb4:
    // 0x33efb4: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x33efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33efb8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33efbc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x33efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x33efc0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33efc4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x33efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x33efc8: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33efcc: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33efd0: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33efd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33efd4: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33efd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33efdc: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33efdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33efe0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33efe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33efe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33efe8: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x33efe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x33efec: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33efecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33eff0: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33EFF0u;
    SET_GPR_U32(ctx, 31, 0x33EFF8u);
    ctx->pc = 0x33EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EFF0u;
            // 0x33eff4: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33EFF8u;
label_33eff8:
    // 0x33eff8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33effc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33effcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f000: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f004: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33f008: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x33F008u;
    {
        const bool branch_taken_0x33f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F008u;
            // 0x33f00c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f008) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33F010u;
label_33f010:
    // 0x33f010: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33f014: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x33f014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x33f018: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33f01c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f020: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33f020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f024: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33f024u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33f028: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33f02c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f030: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f038: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33f038u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33f03c: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33f03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33f040: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x33f040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x33f044: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x33f044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33f048: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33f048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f04c: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F04Cu;
    SET_GPR_U32(ctx, 31, 0x33F054u);
    ctx->pc = 0x33F050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F04Cu;
            // 0x33f050: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F054u;
label_33f054:
    // 0x33f054: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x33f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33f058: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f05c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x33f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x33f060: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f064: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x33f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x33f068: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33f06c: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33f070: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33f070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33f074: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f07c: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f080: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x33f080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x33f084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33f088: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x33f08c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33f08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33f090: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F090u;
    SET_GPR_U32(ctx, 31, 0x33F098u);
    ctx->pc = 0x33F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F090u;
            // 0x33f094: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F098u;
label_33f098:
    // 0x33f098: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f09c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f0a0: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f0a4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33f0a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33F0A8u;
    {
        const bool branch_taken_0x33f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F0A8u;
            // 0x33f0ac: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0a8) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33F0B0u;
label_33f0b0:
    // 0x33f0b0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x33f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33f0b4: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x33f0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x33f0b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33f0bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f0c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f0c4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33f0c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33f0c8: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x33f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x33f0cc: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f0d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0d8: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33f0d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33f0dc: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33f0e0: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33f0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33f0e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33f0e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0e8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33f0e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0ec: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F0ECu;
    SET_GPR_U32(ctx, 31, 0x33F0F4u);
    ctx->pc = 0x33F0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F0ECu;
            // 0x33f0f0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F0F4u;
label_33f0f4:
    // 0x33f0f4: 0x26020005  addiu       $v0, $s0, 0x5
    ctx->pc = 0x33f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x33f0f8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f0fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f104: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f108: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x33f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x33f10c: 0x8c42e7c8  lw          $v0, -0x1838($v0)
    ctx->pc = 0x33f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x33f110: 0x260a0003  addiu       $t2, $s0, 0x3
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x33f114: 0x260b0004  addiu       $t3, $s0, 0x4
    ctx->pc = 0x33f114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33f118: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f11c: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f120: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33f120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33f124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33f128: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x33f128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x33f12c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33f12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33f130: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F130u;
    SET_GPR_U32(ctx, 31, 0x33F138u);
    ctx->pc = 0x33F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F130u;
            // 0x33f134: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F138u;
label_33f138:
    // 0x33f138: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f13c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f140: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f144: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x33f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x33f148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33F148u;
    {
        const bool branch_taken_0x33f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F148u;
            // 0x33f14c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f148) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33F150u;
label_33f150:
    // 0x33f150: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x33f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33f154: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f158: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33f158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_33f15c:
    // 0x33f15c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f160: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33f160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f164: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x33f164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33f168: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x33F168u;
    {
        const bool branch_taken_0x33f168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f168) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F170u;
    // 0x33f170: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f174: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33f174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33f178: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x33f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x33f17c: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x33f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x33f180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f188: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33F188u;
    SET_GPR_U32(ctx, 31, 0x33F190u);
    ctx->pc = 0x33F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F188u;
            // 0x33f18c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F190u; }
        if (ctx->pc != 0x33F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F190u; }
        if (ctx->pc != 0x33F190u) { return; }
    }
    ctx->pc = 0x33F190u;
label_33f190:
    // 0x33f190: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f194: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f198: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33f198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f19c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f1a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x33F1A0u;
    {
        const bool branch_taken_0x33f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F1A0u;
            // 0x33f1a4: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1a0) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F1A8u;
label_33f1a8:
    // 0x33f1a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f1ac: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33f1acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f1b0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33f1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33f1b4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x33F1B4u;
    {
        const bool branch_taken_0x33f1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f1b4) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F1BCu;
    // 0x33f1bc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33f1c0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x33F1C0u;
    {
        const bool branch_taken_0x33f1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f1c0) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F1C8u;
    // 0x33f1c8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x33f1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x33f1cc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x33F1CCu;
    {
        const bool branch_taken_0x33f1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f1cc) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F1D4u;
    // 0x33f1d4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f1d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f1dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f1e0: 0x24840e10  addiu       $a0, $a0, 0xE10
    ctx->pc = 0x33f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3600));
    // 0x33f1e4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33F1E4u;
    SET_GPR_U32(ctx, 31, 0x33F1ECu);
    ctx->pc = 0x33F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F1E4u;
            // 0x33f1e8: 0xac43ea60  sw          $v1, -0x15A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F1ECu; }
        if (ctx->pc != 0x33F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F1ECu; }
        if (ctx->pc != 0x33F1ECu) { return; }
    }
    ctx->pc = 0x33F1ECu;
label_33f1ec:
    // 0x33f1ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f1f0: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33f1f4: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x33f1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f200: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x33f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x33f204: 0x9042e7e8  lbu         $v0, -0x1818($v0)
    ctx->pc = 0x33f204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x33f208: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x33f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33f20c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x33f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f210: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33f210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33f214: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x33f214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x33f218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33f218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f21c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x33f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33f220: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33f220u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f224: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x33f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33f228: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33F228u;
    SET_GPR_U32(ctx, 31, 0x33F230u);
    ctx->pc = 0x33F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F228u;
            // 0x33f22c: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F230u; }
        if (ctx->pc != 0x33F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F230u; }
        if (ctx->pc != 0x33F230u) { return; }
    }
    ctx->pc = 0x33F230u;
label_33f230:
    // 0x33f230: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x33f230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x33f234: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f238: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33F238u;
    {
        const bool branch_taken_0x33f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F238u;
            // 0x33f23c: 0xa064e820  sb          $a0, -0x17E0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f238) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F240u;
label_33f240:
    // 0x33f240: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f244: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33f244u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f248: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33f24c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33F24Cu;
    {
        const bool branch_taken_0x33f24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f24c) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F254u;
    // 0x33f254: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33f254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33f258: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33F258u;
    {
        const bool branch_taken_0x33f258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f258) {
            ctx->pc = 0x33F2A8u;
            goto label_33f2a8;
        }
    }
    ctx->pc = 0x33F260u;
    // 0x33f260: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f264: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33F264u;
    SET_GPR_U32(ctx, 31, 0x33F26Cu);
    ctx->pc = 0x33F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F264u;
            // 0x33f268: 0x2484e400  addiu       $a0, $a0, -0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F26Cu; }
        if (ctx->pc != 0x33F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F26Cu; }
        if (ctx->pc != 0x33F26Cu) { return; }
    }
    ctx->pc = 0x33F26Cu;
label_33f26c:
    // 0x33f26c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33f270: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f274: 0xa043e820  sb          $v1, -0x17E0($v0)
    ctx->pc = 0x33f274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f27c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f280: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f284: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x33f284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f288: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f28c: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x33f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x33f290: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F290u;
    {
        const bool branch_taken_0x33f290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F290u;
            // 0x33f294: 0xac64e800  sw          $a0, -0x1800($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f290) {
            ctx->pc = 0x33F2A0u;
            goto label_33f2a0;
        }
    }
    ctx->pc = 0x33F298u;
    // 0x33f298: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f29c: 0xac40e800  sw          $zero, -0x1800($v0)
    ctx->pc = 0x33f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 0));
label_33f2a0:
    // 0x33f2a0: 0xc0d0420  jal         func_341080
    ctx->pc = 0x33F2A0u;
    SET_GPR_U32(ctx, 31, 0x33F2A8u);
    ctx->pc = 0x341080u;
    if (runtime->hasFunction(0x341080u)) {
        auto targetFn = runtime->lookupFunction(0x341080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F2A8u; }
        if (ctx->pc != 0x33F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341080_0x341080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F2A8u; }
        if (ctx->pc != 0x33F2A8u) { return; }
    }
    ctx->pc = 0x33F2A8u;
label_33f2a8:
    // 0x33f2a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33f2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33f2ac:
    // 0x33f2ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33f2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F2B0u;
            // 0x33f2b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33F2B8u;
    // 0x33f2b8: 0x0  nop
    ctx->pc = 0x33f2b8u;
    // NOP
    // 0x33f2bc: 0x0  nop
    ctx->pc = 0x33f2bcu;
    // NOP
label_33f2c0:
    // 0x33f2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f2c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33f2cc: 0x9066e818  lbu         $a2, -0x17E8($v1)
    ctx->pc = 0x33f2ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33f2d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33f2d4: 0x10c30181  beq         $a2, $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x33F2D4u;
    {
        const bool branch_taken_0x33f2d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f2d4) {
            ctx->pc = 0x33F8DCu;
            goto label_33f8dc;
        }
    }
    ctx->pc = 0x33F2DCu;
    // 0x33f2dc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33f2e0: 0x10c30158  beq         $a2, $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x33F2E0u;
    {
        const bool branch_taken_0x33f2e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f2e0) {
            ctx->pc = 0x33F844u;
            goto label_33f844;
        }
    }
    ctx->pc = 0x33F2E8u;
    // 0x33f2e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f2ec: 0x10c300fc  beq         $a2, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x33F2ECu;
    {
        const bool branch_taken_0x33f2ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f2ec) {
            ctx->pc = 0x33F6E0u;
            goto label_33f6e0;
        }
    }
    ctx->pc = 0x33F2F4u;
    // 0x33f2f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f2f8: 0x10c300be  beq         $a2, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x33F2F8u;
    {
        const bool branch_taken_0x33f2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f2f8) {
            ctx->pc = 0x33F5F4u;
            goto label_33f5f4;
        }
    }
    ctx->pc = 0x33F300u;
    // 0x33f300: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f304: 0x10c400ac  beq         $a2, $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x33F304u;
    {
        const bool branch_taken_0x33f304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x33f304) {
            ctx->pc = 0x33F5B8u;
            goto label_33f5b8;
        }
    }
    ctx->pc = 0x33F30Cu;
    // 0x33f30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f310: 0x10c50025  beq         $a2, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x33F310u;
    {
        const bool branch_taken_0x33f310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x33f310) {
            ctx->pc = 0x33F3A8u;
            goto label_33f3a8;
        }
    }
    ctx->pc = 0x33F318u;
    // 0x33f318: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F318u;
    {
        const bool branch_taken_0x33f318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f318) {
            ctx->pc = 0x33F328u;
            goto label_33f328;
        }
    }
    ctx->pc = 0x33F320u;
    // 0x33f320: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x33F320u;
    {
        const bool branch_taken_0x33f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F320u;
            // 0x33f324: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f320) {
            ctx->pc = 0x33F930u;
            goto label_33f930;
        }
    }
    ctx->pc = 0x33F328u;
label_33f328:
    // 0x33f328: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x33F328u;
    SET_GPR_U32(ctx, 31, 0x33F330u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F330u; }
        if (ctx->pc != 0x33F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F330u; }
        if (ctx->pc != 0x33F330u) { return; }
    }
    ctx->pc = 0x33F330u;
label_33f330:
    // 0x33f330: 0x3c050106  lui         $a1, 0x106
    ctx->pc = 0x33f330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)262 << 16));
    // 0x33f334: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f338: 0xc0c0674  jal         func_3019D0
    ctx->pc = 0x33F338u;
    SET_GPR_U32(ctx, 31, 0x33F340u);
    ctx->pc = 0x33F33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F338u;
            // 0x33f33c: 0x24a5e880  addiu       $a1, $a1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3019D0u;
    if (runtime->hasFunction(0x3019D0u)) {
        auto targetFn = runtime->lookupFunction(0x3019D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F340u; }
        if (ctx->pc != 0x33F340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003019D0_0x3019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F340u; }
        if (ctx->pc != 0x33F340u) { return; }
    }
    ctx->pc = 0x33F340u;
label_33f340:
    // 0x33f340: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f344: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33f344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33f348: 0x8c45ea64  lw          $a1, -0x159C($v0)
    ctx->pc = 0x33f348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x33f34c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x33f34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x33f350: 0x2463d840  addiu       $v1, $v1, -0x27C0
    ctx->pc = 0x33f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957120));
    // 0x33f354: 0x34211440  ori         $at, $at, 0x1440
    ctx->pc = 0x33f354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5184);
    // 0x33f358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33f358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f35c: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x33f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x33f360: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33f364: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33f364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33f368: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33f36c: 0xc0c0674  jal         func_3019D0
    ctx->pc = 0x33F36Cu;
    SET_GPR_U32(ctx, 31, 0x33F374u);
    ctx->pc = 0x33F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F36Cu;
            // 0x33f370: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3019D0u;
    if (runtime->hasFunction(0x3019D0u)) {
        auto targetFn = runtime->lookupFunction(0x3019D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F374u; }
        if (ctx->pc != 0x33F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003019D0_0x3019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F374u; }
        if (ctx->pc != 0x33F374u) { return; }
    }
    ctx->pc = 0x33F374u;
label_33f374:
    // 0x33f374: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f378: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f37c: 0xac40e808  sw          $zero, -0x17F8($v0)
    ctx->pc = 0x33f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
    // 0x33f380: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f384: 0xac60e800  sw          $zero, -0x1800($v1)
    ctx->pc = 0x33f384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 0));
    // 0x33f388: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x33F388u;
    SET_GPR_U32(ctx, 31, 0x33F390u);
    ctx->pc = 0x33F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F388u;
            // 0x33f38c: 0xac40e7f8  sw          $zero, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D680u;
    if (runtime->hasFunction(0x30D680u)) {
        auto targetFn = runtime->lookupFunction(0x30D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F390u; }
        if (ctx->pc != 0x33F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D680_0x30d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F390u; }
        if (ctx->pc != 0x33F390u) { return; }
    }
    ctx->pc = 0x33F390u;
label_33f390:
    // 0x33f390: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f394: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f398: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33f398u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33f39c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f3a0: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x33F3A0u;
    {
        const bool branch_taken_0x33f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3A0u;
            // 0x33f3a4: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f3a0) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F3A8u;
label_33f3a8:
    // 0x33f3a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f3ac: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33f3b0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x33f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33f3b4: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x33F3B4u;
    {
        const bool branch_taken_0x33f3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f3b4) {
            ctx->pc = 0x33F530u;
            goto label_33f530;
        }
    }
    ctx->pc = 0x33F3BCu;
    // 0x33f3bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f3c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33f3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33f3c4: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33f3c8: 0x1066004e  beq         $v1, $a2, . + 4 + (0x4E << 2)
    ctx->pc = 0x33F3C8u;
    {
        const bool branch_taken_0x33f3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33f3c8) {
            ctx->pc = 0x33F504u;
            goto label_33f504;
        }
    }
    ctx->pc = 0x33F3D0u;
    // 0x33f3d0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x33f3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33f3d4: 0x1066003e  beq         $v1, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x33F3D4u;
    {
        const bool branch_taken_0x33f3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33f3d4) {
            ctx->pc = 0x33F4D0u;
            goto label_33f4d0;
        }
    }
    ctx->pc = 0x33F3DCu;
    // 0x33f3dc: 0x50650012  beql        $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F3DCu;
    {
        const bool branch_taken_0x33f3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x33f3dc) {
            ctx->pc = 0x33F3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3DCu;
            // 0x33f3e0: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F428u;
            goto label_33f428;
        }
    }
    ctx->pc = 0x33F3E4u;
    // 0x33f3e4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F3E4u;
    {
        const bool branch_taken_0x33f3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3e4) {
            ctx->pc = 0x33F3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3E4u;
            // 0x33f3e8: 0x3363c  dsll32      $a2, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F3F4u;
            goto label_33f3f4;
        }
    }
    ctx->pc = 0x33F3ECu;
    // 0x33f3ec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x33F3ECu;
    {
        const bool branch_taken_0x33f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3ec) {
            ctx->pc = 0x33F530u;
            goto label_33f530;
        }
    }
    ctx->pc = 0x33F3F4u;
label_33f3f4:
    // 0x33f3f4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f3f8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33f3f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33f3fc: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f400: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33f400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33f404: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x33f404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x33f408: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33F408u;
    SET_GPR_U32(ctx, 31, 0x33F410u);
    ctx->pc = 0x33F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F408u;
            // 0x33f40c: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F410u; }
        if (ctx->pc != 0x33F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F410u; }
        if (ctx->pc != 0x33F410u) { return; }
    }
    ctx->pc = 0x33F410u;
label_33f410:
    // 0x33f410: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f414: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f418: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f41c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f420: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x33F420u;
    {
        const bool branch_taken_0x33f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F420u;
            // 0x33f424: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f420) {
            ctx->pc = 0x33F530u;
            goto label_33f530;
        }
    }
    ctx->pc = 0x33F428u;
label_33f428:
    // 0x33f428: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33f428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f42c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f430: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f434: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f438: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x33f438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33f43c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x33f43cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33f440: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33f440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f444: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x33f444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f448: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F448u;
    SET_GPR_U32(ctx, 31, 0x33F450u);
    ctx->pc = 0x33F44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F448u;
            // 0x33f44c: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F450u;
label_33f450:
    // 0x33f450: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33f454: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f458: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f45c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f464: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f468: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x33f468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33f46c: 0x240800d0  addiu       $t0, $zero, 0xD0
    ctx->pc = 0x33f46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x33f470: 0x24090240  addiu       $t1, $zero, 0x240
    ctx->pc = 0x33f470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x33f474: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x33f474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f478: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x33f478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f47c: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F47Cu;
    SET_GPR_U32(ctx, 31, 0x33F484u);
    ctx->pc = 0x33F480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F47Cu;
            // 0x33f480: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F484u;
label_33f484:
    // 0x33f484: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33f488: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f490: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f494: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f498: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x33f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x33f49c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33f49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f4a0: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f4a4: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33f4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33f4a8: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x33f4a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33f4ac: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x33f4acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33f4b0: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F4B0u;
    SET_GPR_U32(ctx, 31, 0x33F4B8u);
    ctx->pc = 0x33F4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4B0u;
            // 0x33f4b4: 0x240b0007  addiu       $t3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F4B8u;
label_33f4b8:
    // 0x33f4b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f4bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f4c0: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f4c4: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x33f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x33f4c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F4C8u;
    {
        const bool branch_taken_0x33f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4C8u;
            // 0x33f4cc: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f4c8) {
            ctx->pc = 0x33F530u;
            goto label_33f530;
        }
    }
    ctx->pc = 0x33F4D0u;
label_33f4d0:
    // 0x33f4d0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f4d8: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f4dc: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x33f4e0: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33f4e4: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33F4E4u;
    SET_GPR_U32(ctx, 31, 0x33F4ECu);
    ctx->pc = 0x33F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4E4u;
            // 0x33f4e8: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F4ECu; }
        if (ctx->pc != 0x33F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F4ECu; }
        if (ctx->pc != 0x33F4ECu) { return; }
    }
    ctx->pc = 0x33F4ECu;
label_33f4ec:
    // 0x33f4ec: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f4f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f4f4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f4f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f4fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33F4FCu;
    {
        const bool branch_taken_0x33f4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4FCu;
            // 0x33f500: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f4fc) {
            ctx->pc = 0x33F530u;
            goto label_33f530;
        }
    }
    ctx->pc = 0x33F504u;
label_33f504:
    // 0x33f504: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f508: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33f508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33f50c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f510: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33f510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33f514: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33F514u;
    SET_GPR_U32(ctx, 31, 0x33F51Cu);
    ctx->pc = 0x33F518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F514u;
            // 0x33f518: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F51Cu; }
        if (ctx->pc != 0x33F51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F51Cu; }
        if (ctx->pc != 0x33F51Cu) { return; }
    }
    ctx->pc = 0x33F51Cu;
label_33f51c:
    // 0x33f51c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f520: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f524: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f528: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f52c: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_33f530:
    // 0x33f530: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f534: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33f534u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f538: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33f53c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x33F53Cu;
    {
        const bool branch_taken_0x33f53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f53c) {
            ctx->pc = 0x33F5A0u;
            goto label_33f5a0;
        }
    }
    ctx->pc = 0x33F544u;
    // 0x33f544: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33f544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33f548: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F548u;
    {
        const bool branch_taken_0x33f548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f548) {
            ctx->pc = 0x33F5A0u;
            goto label_33f5a0;
        }
    }
    ctx->pc = 0x33F550u;
    // 0x33f550: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f554: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33f558: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x33f558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33f55c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33F55Cu;
    {
        const bool branch_taken_0x33f55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f55c) {
            ctx->pc = 0x33F5A0u;
            goto label_33f5a0;
        }
    }
    ctx->pc = 0x33F564u;
    // 0x33f564: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f568: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33f568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33f56c: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x33f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x33f570: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x33f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x33f574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f57c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33F57Cu;
    SET_GPR_U32(ctx, 31, 0x33F584u);
    ctx->pc = 0x33F580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F57Cu;
            // 0x33f580: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F584u; }
        if (ctx->pc != 0x33F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F584u; }
        if (ctx->pc != 0x33F584u) { return; }
    }
    ctx->pc = 0x33F584u;
label_33f584:
    // 0x33f584: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f588: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f58c: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x33f58cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x33f590: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33f590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f594: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f59c: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33f59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33f5a0:
    // 0x33f5a0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f5a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f5a8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33f5ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f5b0: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x33F5B0u;
    {
        const bool branch_taken_0x33f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F5B0u;
            // 0x33f5b4: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5b0) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F5B8u;
label_33f5b8:
    // 0x33f5b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f5bc: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x33f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x33f5c0: 0x28610055  slti        $at, $v1, 0x55
    ctx->pc = 0x33f5c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x33f5c4: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
    ctx->pc = 0x33F5C4u;
    {
        const bool branch_taken_0x33f5c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5c4) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F5CCu;
    // 0x33f5cc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33f5d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f5d4: 0xac64e7d0  sw          $a0, -0x1830($v1)
    ctx->pc = 0x33f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
    // 0x33f5d8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x33f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x33f5dc: 0x148300d3  bne         $a0, $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x33F5DCu;
    {
        const bool branch_taken_0x33f5dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33f5dc) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F5E4u;
    // 0x33f5e4: 0xc0c35a0  jal         func_30D680
    ctx->pc = 0x33F5E4u;
    SET_GPR_U32(ctx, 31, 0x33F5ECu);
    ctx->pc = 0x30D680u;
    if (runtime->hasFunction(0x30D680u)) {
        auto targetFn = runtime->lookupFunction(0x30D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F5ECu; }
        if (ctx->pc != 0x33F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D680_0x30d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F5ECu; }
        if (ctx->pc != 0x33F5ECu) { return; }
    }
    ctx->pc = 0x33F5ECu;
label_33f5ec:
    // 0x33f5ec: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x33F5ECu;
    {
        const bool branch_taken_0x33f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5ec) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F5F4u;
label_33f5f4:
    // 0x33f5f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f5f8: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33f5f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f5fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x33f5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33f600: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x33F600u;
    {
        const bool branch_taken_0x33f600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f600) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F608u;
    // 0x33f608: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f60c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f610: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x33f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x33f614: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x33f614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x33f618: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f61c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f620: 0x481000b  bgez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33F620u;
    {
        const bool branch_taken_0x33f620 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x33F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F620u;
            // 0x33f624: 0xac44ea64  sw          $a0, -0x159C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961764), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f620) {
            ctx->pc = 0x33F650u;
            goto label_33f650;
        }
    }
    ctx->pc = 0x33F628u;
    // 0x33f628: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f62c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33f630: 0x8c44ea78  lw          $a0, -0x1588($v0)
    ctx->pc = 0x33f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x33f634: 0x24633f08  addiu       $v1, $v1, 0x3F08
    ctx->pc = 0x33f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16136));
    // 0x33f638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f63c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f640: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33f640u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f644: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33f648: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33F648u;
    {
        const bool branch_taken_0x33f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F648u;
            // 0x33f64c: 0xac43ea64  sw          $v1, -0x159C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f648) {
            ctx->pc = 0x33F67Cu;
            goto label_33f67c;
        }
    }
    ctx->pc = 0x33F650u;
label_33f650:
    // 0x33f650: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f654: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33f654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33f658: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x33f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x33f65c: 0x24633f08  addiu       $v1, $v1, 0x3F08
    ctx->pc = 0x33f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16136));
    // 0x33f660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33f664: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33f664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f668: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x33f668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33f66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F66Cu;
    {
        const bool branch_taken_0x33f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f66c) {
            ctx->pc = 0x33F67Cu;
            goto label_33f67c;
        }
    }
    ctx->pc = 0x33F674u;
    // 0x33f674: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f678: 0xac40ea64  sw          $zero, -0x159C($v0)
    ctx->pc = 0x33f678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961764), GPR_U32(ctx, 0));
label_33f67c:
    // 0x33f67c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f680: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33f680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33f684: 0x8c45ea64  lw          $a1, -0x159C($v0)
    ctx->pc = 0x33f684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x33f688: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x33f688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x33f68c: 0x2463d840  addiu       $v1, $v1, -0x27C0
    ctx->pc = 0x33f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957120));
    // 0x33f690: 0x34211440  ori         $at, $at, 0x1440
    ctx->pc = 0x33f690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5184);
    // 0x33f694: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f698: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x33f698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x33f69c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33f6a0: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33f6a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33f6a8: 0xc0c0674  jal         func_3019D0
    ctx->pc = 0x33F6A8u;
    SET_GPR_U32(ctx, 31, 0x33F6B0u);
    ctx->pc = 0x33F6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6A8u;
            // 0x33f6ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3019D0u;
    if (runtime->hasFunction(0x3019D0u)) {
        auto targetFn = runtime->lookupFunction(0x3019D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6B0u; }
        if (ctx->pc != 0x33F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003019D0_0x3019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6B0u; }
        if (ctx->pc != 0x33F6B0u) { return; }
    }
    ctx->pc = 0x33F6B0u;
label_33f6b0:
    // 0x33f6b0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f6b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f6b8: 0xac80ea68  sw          $zero, -0x1598($a0)
    ctx->pc = 0x33f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961768), GPR_U32(ctx, 0));
    // 0x33f6bc: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33f6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f6c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f6c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f6c8: 0xac80e7d0  sw          $zero, -0x1830($a0)
    ctx->pc = 0x33f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961104), GPR_U32(ctx, 0));
    // 0x33f6cc: 0xac60e7c8  sw          $zero, -0x1838($v1)
    ctx->pc = 0x33f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 0));
    // 0x33f6d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f6d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f6d8: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x33F6D8u;
    {
        const bool branch_taken_0x33f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6D8u;
            // 0x33f6dc: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6d8) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F6E0u;
label_33f6e0:
    // 0x33f6e0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f6e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f6e8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x33f6ec: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x33f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f6f0: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x33f6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x33f6f4: 0x14800040  bnez        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x33F6F4u;
    {
        const bool branch_taken_0x33f6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6F4u;
            // 0x33f6f8: 0xac65e7d0  sw          $a1, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6f4) {
            ctx->pc = 0x33F7F8u;
            goto label_33f7f8;
        }
    }
    ctx->pc = 0x33F6FCu;
    // 0x33f6fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f700: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33f704: 0x8c66e7c8  lw          $a2, -0x1838($v1)
    ctx->pc = 0x33f704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x33f708: 0x10c40036  beq         $a2, $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x33F708u;
    {
        const bool branch_taken_0x33f708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x33f708) {
            ctx->pc = 0x33F7E4u;
            goto label_33f7e4;
        }
    }
    ctx->pc = 0x33F710u;
    // 0x33f710: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33f714: 0x10c30033  beq         $a2, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x33F714u;
    {
        const bool branch_taken_0x33f714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f714) {
            ctx->pc = 0x33F7E4u;
            goto label_33f7e4;
        }
    }
    ctx->pc = 0x33F71Cu;
    // 0x33f71c: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x33F71Cu;
    {
        const bool branch_taken_0x33f71c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f71c) {
            ctx->pc = 0x33F7E4u;
            goto label_33f7e4;
        }
    }
    ctx->pc = 0x33F724u;
    // 0x33f724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f728: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F728u;
    {
        const bool branch_taken_0x33f728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x33f728) {
            ctx->pc = 0x33F72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F728u;
            // 0x33f72c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F738u;
            goto label_33f738;
        }
    }
    ctx->pc = 0x33F730u;
    // 0x33f730: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x33F730u;
    {
        const bool branch_taken_0x33f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f730) {
            ctx->pc = 0x33F7F8u;
            goto label_33f7f8;
        }
    }
    ctx->pc = 0x33F738u;
label_33f738:
    // 0x33f738: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f73c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f740: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f744: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33f744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f748: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f74c: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x33f74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33f750: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x33f750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33f754: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33f754u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f758: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x33f758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f75c: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F75Cu;
    SET_GPR_U32(ctx, 31, 0x33F764u);
    ctx->pc = 0x33F760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F75Cu;
            // 0x33f760: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F764u;
label_33f764:
    // 0x33f764: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33f768: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f76c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f770: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f778: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33f778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f77c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x33f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33f780: 0x240800d0  addiu       $t0, $zero, 0xD0
    ctx->pc = 0x33f780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x33f784: 0x24090240  addiu       $t1, $zero, 0x240
    ctx->pc = 0x33f784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x33f788: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x33f788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f78c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x33f78cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f790: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F790u;
    SET_GPR_U32(ctx, 31, 0x33F798u);
    ctx->pc = 0x33F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F790u;
            // 0x33f794: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F798u;
label_33f798:
    // 0x33f798: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33f79c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f7a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f7a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33f7a8: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x33f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x33f7ac: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x33f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x33f7b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33f7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f7b4: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33f7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33f7b8: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x33f7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33f7bc: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x33f7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33f7c0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x33f7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33f7c4: 0xc0cf8cc  jal         func_33E330
    ctx->pc = 0x33F7C4u;
    SET_GPR_U32(ctx, 31, 0x33F7CCu);
    ctx->pc = 0x33F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F7C4u;
            // 0x33f7c8: 0x240b0007  addiu       $t3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E330u;
    goto label_33e330;
    ctx->pc = 0x33F7CCu;
label_33f7cc:
    // 0x33f7cc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f7d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f7d4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f7d8: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x33f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x33f7dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33F7DCu;
    {
        const bool branch_taken_0x33f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F7DCu;
            // 0x33f7e0: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f7dc) {
            ctx->pc = 0x33F7F8u;
            goto label_33f7f8;
        }
    }
    ctx->pc = 0x33F7E4u;
label_33f7e4:
    // 0x33f7e4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33f7e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f7ec: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33f7f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f7f4: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_33f7f8:
    // 0x33f7f8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f7fc: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33f7fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f800: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x33f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33f804: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x33F804u;
    {
        const bool branch_taken_0x33f804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f804) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F80Cu;
    // 0x33f80c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f810: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33f814: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x33f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x33f818: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x33f818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x33f81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f824: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33F824u;
    SET_GPR_U32(ctx, 31, 0x33F82Cu);
    ctx->pc = 0x33F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F824u;
            // 0x33f828: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F82Cu; }
        if (ctx->pc != 0x33F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F82Cu; }
        if (ctx->pc != 0x33F82Cu) { return; }
    }
    ctx->pc = 0x33F82Cu;
label_33f82c:
    // 0x33f82c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f830: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f834: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x33f834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f838: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f83c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x33F83Cu;
    {
        const bool branch_taken_0x33f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F83Cu;
            // 0x33f840: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f83c) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F844u;
label_33f844:
    // 0x33f844: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f848: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33f848u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f84c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33f84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33f850: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x33F850u;
    {
        const bool branch_taken_0x33f850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f850) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F858u;
    // 0x33f858: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33f85c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x33F85Cu;
    {
        const bool branch_taken_0x33f85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f85c) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F864u;
    // 0x33f864: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x33f864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x33f868: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x33F868u;
    {
        const bool branch_taken_0x33f868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f868) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F870u;
    // 0x33f870: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f874: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f878: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f87c: 0x24840e10  addiu       $a0, $a0, 0xE10
    ctx->pc = 0x33f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3600));
    // 0x33f880: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33F880u;
    SET_GPR_U32(ctx, 31, 0x33F888u);
    ctx->pc = 0x33F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F880u;
            // 0x33f884: 0xac43ea60  sw          $v1, -0x15A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F888u; }
        if (ctx->pc != 0x33F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F888u; }
        if (ctx->pc != 0x33F888u) { return; }
    }
    ctx->pc = 0x33F888u;
label_33f888:
    // 0x33f888: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f88c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x33f88cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33f890: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x33f890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f898: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f89c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x33f89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x33f8a0: 0x9042e7e8  lbu         $v0, -0x1818($v0)
    ctx->pc = 0x33f8a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x33f8a4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x33f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33f8a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x33f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f8ac: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33f8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33f8b0: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x33f8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x33f8b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33f8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x33f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33f8bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33f8bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x33f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33f8c4: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33F8C4u;
    SET_GPR_U32(ctx, 31, 0x33F8CCu);
    ctx->pc = 0x33F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F8C4u;
            // 0x33f8c8: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8CCu; }
        if (ctx->pc != 0x33F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8CCu; }
        if (ctx->pc != 0x33F8CCu) { return; }
    }
    ctx->pc = 0x33F8CCu;
label_33f8cc:
    // 0x33f8cc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x33f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x33f8d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f8d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x33F8D4u;
    {
        const bool branch_taken_0x33f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F8D4u;
            // 0x33f8d8: 0xa064e820  sb          $a0, -0x17E0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8d4) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F8DCu;
label_33f8dc:
    // 0x33f8dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33f8e0: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33f8e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33f8e4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x33f8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33f8e8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33F8E8u;
    {
        const bool branch_taken_0x33f8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f8e8) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F8F0u;
    // 0x33f8f0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33f8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33f8f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33F8F4u;
    {
        const bool branch_taken_0x33f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f8f4) {
            ctx->pc = 0x33F92Cu;
            goto label_33f92c;
        }
    }
    ctx->pc = 0x33F8FCu;
    // 0x33f8fc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33f900: 0xc0558e0  jal         func_156380
    ctx->pc = 0x33F900u;
    SET_GPR_U32(ctx, 31, 0x33F908u);
    ctx->pc = 0x33F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F900u;
            // 0x33f904: 0x2484e400  addiu       $a0, $a0, -0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F908u; }
        if (ctx->pc != 0x33F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F908u; }
        if (ctx->pc != 0x33F908u) { return; }
    }
    ctx->pc = 0x33F908u;
label_33f908:
    // 0x33f908: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33f90c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f910: 0xa043e820  sb          $v1, -0x17E0($v0)
    ctx->pc = 0x33f910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f914: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f91c: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x33f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f920: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33f924: 0xc0d0420  jal         func_341080
    ctx->pc = 0x33F924u;
    SET_GPR_U32(ctx, 31, 0x33F92Cu);
    ctx->pc = 0x33F928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F924u;
            // 0x33f928: 0xac43e800  sw          $v1, -0x1800($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341080u;
    if (runtime->hasFunction(0x341080u)) {
        auto targetFn = runtime->lookupFunction(0x341080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F92Cu; }
        if (ctx->pc != 0x33F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341080_0x341080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F92Cu; }
        if (ctx->pc != 0x33F92Cu) { return; }
    }
    ctx->pc = 0x33F92Cu;
label_33f92c:
    // 0x33f92c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33f92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33f930:
    // 0x33f930: 0x3e00008  jr          $ra
    ctx->pc = 0x33F930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F930u;
            // 0x33f934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33F938u;
    // 0x33f938: 0x0  nop
    ctx->pc = 0x33f938u;
    // NOP
    // 0x33f93c: 0x0  nop
    ctx->pc = 0x33f93cu;
    // NOP
label_33f940:
    // 0x33f940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33f944: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33f948: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x33f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x33f94c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x33f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x33f950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33f950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33f954: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x33f954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33f958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33f958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33f95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33f960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33f964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33f968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f96c: 0x8c45da70  lw          $a1, -0x2590($v0)
    ctx->pc = 0x33f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x33f970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f974: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x33f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33f978: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x33f978u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x33f97c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x33f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x33f980: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x33f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33f984: 0x2810  mfhi        $a1
    ctx->pc = 0x33f984u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x33f988: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x33f988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33f98c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x33f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33f990: 0x430019  multu       $v0, $v1
    ctx->pc = 0x33f990u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33f994: 0x1010  mfhi        $v0
    ctx->pc = 0x33f994u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33f998: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x33f998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x33f99c: 0xc0d011c  jal         func_340470
    ctx->pc = 0x33F99Cu;
    SET_GPR_U32(ctx, 31, 0x33F9A4u);
    ctx->pc = 0x33F9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F99Cu;
            // 0x33f9a0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x340470u;
    if (runtime->hasFunction(0x340470u)) {
        auto targetFn = runtime->lookupFunction(0x340470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9A4u; }
        if (ctx->pc != 0x33F9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340470_0x340470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9A4u; }
        if (ctx->pc != 0x33F9A4u) { return; }
    }
    ctx->pc = 0x33F9A4u;
label_33f9a4:
    // 0x33f9a4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x33f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33f9a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f9ac: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x33f9acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33f9b0: 0x84930002  lh          $s3, 0x2($a0)
    ctx->pc = 0x33f9b0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33f9b4: 0x84920004  lh          $s2, 0x4($a0)
    ctx->pc = 0x33f9b4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f9b8: 0x1065004a  beq         $v1, $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x33F9B8u;
    {
        const bool branch_taken_0x33f9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x33F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9B8u;
            // 0x33f9bc: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9b8) {
            ctx->pc = 0x33FAE4u;
            goto label_33fae4;
        }
    }
    ctx->pc = 0x33F9C0u;
    // 0x33f9c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f9c4: 0x50650028  beql        $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33F9C4u;
    {
        const bool branch_taken_0x33f9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x33f9c4) {
            ctx->pc = 0x33F9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9C4u;
            // 0x33f9c8: 0x80850000  lb          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FA68u;
            goto label_33fa68;
        }
    }
    ctx->pc = 0x33F9CCu;
    // 0x33f9cc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F9CCu;
    {
        const bool branch_taken_0x33f9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f9cc) {
            ctx->pc = 0x33F9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9CCu;
            // 0x33f9d0: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F9DCu;
            goto label_33f9dc;
        }
    }
    ctx->pc = 0x33F9D4u;
    // 0x33f9d4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x33F9D4u;
    {
        const bool branch_taken_0x33f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9D4u;
            // 0x33f9d8: 0xa4930002  sh          $s3, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9d4) {
            ctx->pc = 0x33FB78u;
            goto label_33fb78;
        }
    }
    ctx->pc = 0x33F9DCu;
label_33f9dc:
    // 0x33f9dc: 0x54a00012  bnel        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F9DCu;
    {
        const bool branch_taken_0x33f9dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f9dc) {
            ctx->pc = 0x33F9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9DCu;
            // 0x33f9e0: 0x8c860014  lw          $a2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FA28u;
            goto label_33fa28;
        }
    }
    ctx->pc = 0x33F9E4u;
    // 0x33f9e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x33f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33f9e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x33f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33f9ec: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x33f9f0: 0x266282a  slt         $a1, $s3, $a2
    ctx->pc = 0x33f9f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x33f9f4: 0x14a0005f  bnez        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x33F9F4u;
    {
        const bool branch_taken_0x33f9f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f9f4) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33F9FCu;
    // 0x33f9fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33fa00: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x33fa00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fa04: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x33fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x33fa08: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x33FA08u;
    {
        const bool branch_taken_0x33fa08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA08u;
            // 0x33fa0c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa08) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA10u;
    // 0x33fa10: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33fa14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fa18: 0x90a5e810  lbu         $a1, -0x17F0($a1)
    ctx->pc = 0x33fa18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294961168)));
    // 0x33fa1c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33fa1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33fa20: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x33FA20u;
    {
        const bool branch_taken_0x33fa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA20u;
            // 0x33fa24: 0xa065e810  sb          $a1, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa20) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA28u;
label_33fa28:
    // 0x33fa28: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x33fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33fa2c: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x33fa2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x33fa30: 0xb3082a  slt         $at, $a1, $s3
    ctx->pc = 0x33fa30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x33fa34: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x33FA34u;
    {
        const bool branch_taken_0x33fa34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fa34) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA3Cu;
    // 0x33fa3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33fa40: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x33fa40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fa44: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x33fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x33fa48: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x33FA48u;
    {
        const bool branch_taken_0x33fa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA48u;
            // 0x33fa4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa48) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA50u;
    // 0x33fa50: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33fa54: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fa58: 0x90a5e810  lbu         $a1, -0x17F0($a1)
    ctx->pc = 0x33fa58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294961168)));
    // 0x33fa5c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33fa5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33fa60: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x33FA60u;
    {
        const bool branch_taken_0x33fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA60u;
            // 0x33fa64: 0xa065e810  sb          $a1, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa60) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA68u;
label_33fa68:
    // 0x33fa68: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x33fa68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33fa6c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x33FA6Cu;
    {
        const bool branch_taken_0x33fa6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa6c) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FA74u;
    // 0x33fa74: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33fa78: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33fa7c: 0x24c64fd0  addiu       $a2, $a2, 0x4FD0
    ctx->pc = 0x33fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20432));
    // 0x33fa80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33fa84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x33fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33fa88: 0xa00008  jr          $a1
    ctx->pc = 0x33FA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33FA90u: goto label_33fa90;
            case 0x33FAB0u: goto label_33fab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33FA90u;
label_33fa90:
    // 0x33fa90: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33fa94: 0x90a5e818  lbu         $a1, -0x17E8($a1)
    ctx->pc = 0x33fa94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294961176)));
    // 0x33fa98: 0x28a50009  slti        $a1, $a1, 0x9
    ctx->pc = 0x33fa98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33fa9c: 0x14a00035  bnez        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x33FA9Cu;
    {
        const bool branch_taken_0x33fa9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fa9c) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FAA4u;
    // 0x33faa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33faa8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x33FAA8u;
    {
        const bool branch_taken_0x33faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FAA8u;
            // 0x33faac: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33faa8) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FAB0u;
label_33fab0:
    // 0x33fab0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x33fab4: 0x90a6e818  lbu         $a2, -0x17E8($a1)
    ctx->pc = 0x33fab4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294961176)));
    // 0x33fab8: 0x28c50009  slti        $a1, $a2, 0x9
    ctx->pc = 0x33fab8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33fabc: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FABCu;
    {
        const bool branch_taken_0x33fabc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fabc) {
            ctx->pc = 0x33FAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FABCu;
            // 0x33fac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FAD0u;
            goto label_33fad0;
        }
    }
    ctx->pc = 0x33FAC4u;
    // 0x33fac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33fac8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x33FAC8u;
    {
        const bool branch_taken_0x33fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FAC8u;
            // 0x33facc: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fac8) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FAD0u;
label_33fad0:
    // 0x33fad0: 0x14c50028  bne         $a2, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33FAD0u;
    {
        const bool branch_taken_0x33fad0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x33fad0) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FAD8u;
    // 0x33fad8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33fadc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x33FADCu;
    {
        const bool branch_taken_0x33fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FADCu;
            // 0x33fae0: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fadc) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FAE4u;
label_33fae4:
    // 0x33fae4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33fae8: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x33FAE8u;
    {
        const bool branch_taken_0x33fae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fae8) {
            ctx->pc = 0x33FAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FAE8u;
            // 0x33faec: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB34u;
            goto label_33fb34;
        }
    }
    ctx->pc = 0x33FAF0u;
    // 0x33faf0: 0x2673ffd0  addiu       $s3, $s3, -0x30
    ctx->pc = 0x33faf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x33faf4: 0x2a61fee1  slti        $at, $s3, -0x11F
    ctx->pc = 0x33faf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967009) ? 1 : 0);
    // 0x33faf8: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x33FAF8u;
    {
        const bool branch_taken_0x33faf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33faf8) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FB00u;
    // 0x33fb00: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x33fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x33fb04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FB04u;
    {
        const bool branch_taken_0x33fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb04) {
            ctx->pc = 0x33FB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB04u;
            // 0x33fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB24u;
            goto label_33fb24;
        }
    }
    ctx->pc = 0x33FB0Cu;
    // 0x33fb0c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fb10: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fb14: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33fb14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33fb18: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33fb1c: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x33fb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fb24:
    // 0x33fb24: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33FB24u;
    SET_GPR_U32(ctx, 31, 0x33FB2Cu);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FB2Cu; }
        if (ctx->pc != 0x33FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FB2Cu; }
        if (ctx->pc != 0x33FB2Cu) { return; }
    }
    ctx->pc = 0x33FB2Cu;
label_33fb2c:
    // 0x33fb2c: 0x10000248  b           . + 4 + (0x248 << 2)
    ctx->pc = 0x33FB2Cu;
    {
        const bool branch_taken_0x33fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB2Cu;
            // 0x33fb30: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb2c) {
            ctx->pc = 0x340450u;
            goto label_340450;
        }
    }
    ctx->pc = 0x33FB34u;
label_33fb34:
    // 0x33fb34: 0x2a610281  slti        $at, $s3, 0x281
    ctx->pc = 0x33fb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x33fb38: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x33FB38u;
    {
        const bool branch_taken_0x33fb38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fb38) {
            ctx->pc = 0x33FB74u;
            goto label_33fb74;
        }
    }
    ctx->pc = 0x33FB40u;
    // 0x33fb40: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x33fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x33fb44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FB44u;
    {
        const bool branch_taken_0x33fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb44) {
            ctx->pc = 0x33FB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB44u;
            // 0x33fb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB64u;
            goto label_33fb64;
        }
    }
    ctx->pc = 0x33FB4Cu;
    // 0x33fb4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fb50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fb54: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x33fb54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x33fb58: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33fb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33fb5c: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x33fb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fb64:
    // 0x33fb64: 0xc055728  jal         func_155CA0
    ctx->pc = 0x33FB64u;
    SET_GPR_U32(ctx, 31, 0x33FB6Cu);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FB6Cu; }
        if (ctx->pc != 0x33FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FB6Cu; }
        if (ctx->pc != 0x33FB6Cu) { return; }
    }
    ctx->pc = 0x33FB6Cu;
label_33fb6c:
    // 0x33fb6c: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x33FB6Cu;
    {
        const bool branch_taken_0x33fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb6c) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FB74u;
label_33fb74:
    // 0x33fb74: 0xa4930002  sh          $s3, 0x2($a0)
    ctx->pc = 0x33fb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 19));
label_33fb78:
    // 0x33fb78: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x33fb78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x33fb7c: 0xa4920004  sh          $s2, 0x4($a0)
    ctx->pc = 0x33fb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x33fb80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fb84: 0x8c66ea78  lw          $a2, -0x1588($v1)
    ctx->pc = 0x33fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x33fb88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33fb8c: 0x14c30124  bne         $a2, $v1, . + 4 + (0x124 << 2)
    ctx->pc = 0x33FB8Cu;
    {
        const bool branch_taken_0x33fb8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB8Cu;
            // 0x33fb90: 0x26103830  addiu       $s0, $s0, 0x3830 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb8c) {
            ctx->pc = 0x340020u;
            goto label_340020;
        }
    }
    ctx->pc = 0x33FB94u;
    // 0x33fb94: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x33fb94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33fb98: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x33fb98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33fb9c: 0x1020022b  beqz        $at, . + 4 + (0x22B << 2)
    ctx->pc = 0x33FB9Cu;
    {
        const bool branch_taken_0x33fb9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb9c) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FBA4u;
    // 0x33fba4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33fba8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33fbac: 0x24844fa0  addiu       $a0, $a0, 0x4FA0
    ctx->pc = 0x33fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20384));
    // 0x33fbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fbb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fbb8: 0x600008  jr          $v1
    ctx->pc = 0x33FBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33FBC0u: goto label_33fbc0;
            case 0x33FC2Cu: goto label_33fc2c;
            case 0x33FDA0u: goto label_33fda0;
            case 0x33FF14u: goto label_33ff14;
            case 0x33FF6Cu: goto label_33ff6c;
            case 0x34044Cu: goto label_34044c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33FBC0u;
label_33fbc0:
    // 0x33fbc0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fbc4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33fbc8: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x33fbc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x33fbcc: 0x24633e90  addiu       $v1, $v1, 0x3E90
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16016));
    // 0x33fbd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33fbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fbd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fbd8: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x33fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x33fbdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33fbe0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x33fbe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fbe4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33fbe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33fbf0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FBF0u;
    SET_GPR_U32(ctx, 31, 0x33FBF8u);
    ctx->pc = 0x33FBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FBF0u;
            // 0x33fbf4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FBF8u; }
        if (ctx->pc != 0x33FBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FBF8u; }
        if (ctx->pc != 0x33FBF8u) { return; }
    }
    ctx->pc = 0x33FBF8u;
label_33fbf8:
    // 0x33fbf8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fbfc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fc00: 0x9064ea64  lbu         $a0, -0x159C($v1)
    ctx->pc = 0x33fc00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x33fc04: 0x266600a8  addiu       $a2, $s3, 0xA8
    ctx->pc = 0x33fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x33fc08: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x33fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x33fc0c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33fc10: 0x24633f08  addiu       $v1, $v1, 0x3F08
    ctx->pc = 0x33fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16136));
    // 0x33fc14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33fc18: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x33fc18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fc1c: 0xc0d0134  jal         func_3404D0
    ctx->pc = 0x33FC1Cu;
    SET_GPR_U32(ctx, 31, 0x33FC24u);
    ctx->pc = 0x33FC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC1Cu;
            // 0x33fc20: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3404D0u;
    if (runtime->hasFunction(0x3404D0u)) {
        auto targetFn = runtime->lookupFunction(0x3404D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FC24u; }
        if (ctx->pc != 0x33FC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003404D0_0x3404d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FC24u; }
        if (ctx->pc != 0x33FC24u) { return; }
    }
    ctx->pc = 0x33FC24u;
label_33fc24:
    // 0x33fc24: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x33FC24u;
    {
        const bool branch_taken_0x33fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc24) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FC2Cu;
label_33fc2c:
    // 0x33fc2c: 0x24b4ffff  addiu       $s4, $a1, -0x1
    ctx->pc = 0x33fc2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33fc30: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fc34: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x33fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x33fc38: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x33fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33fc3c: 0xb4a821  addu        $s5, $a1, $s4
    ctx->pc = 0x33fc3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x33fc40: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x33fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x33fc44: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33fc48: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x33fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x33fc4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fc50: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33fc54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fc58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33fc5c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x33fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x33fc60: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x33fc60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33fc64: 0x142001f9  bnez        $at, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x33FC64u;
    {
        const bool branch_taken_0x33fc64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fc64) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FC6Cu;
    // 0x33fc6c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fc70: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x33fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x33fc74: 0x8c44ea68  lw          $a0, -0x1598($v0)
    ctx->pc = 0x33fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x33fc78: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x33fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33fc7c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x33fc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33fc80: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x33fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x33fc84: 0x0  nop
    ctx->pc = 0x33fc84u;
    // NOP
    // 0x33fc88: 0x1010  mfhi        $v0
    ctx->pc = 0x33fc88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33fc8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fc90: 0x5682000e  bnel        $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33FC90u;
    {
        const bool branch_taken_0x33fc90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x33fc90) {
            ctx->pc = 0x33FC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC90u;
            // 0x33fc94: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FCCCu;
            goto label_33fccc;
        }
    }
    ctx->pc = 0x33FC98u;
    // 0x33fc98: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fc9c: 0x8c42ea7c  lw          $v0, -0x1584($v0)
    ctx->pc = 0x33fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x33fca0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33FCA0u;
    {
        const bool branch_taken_0x33fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fca0) {
            ctx->pc = 0x33FCC8u;
            goto label_33fcc8;
        }
    }
    ctx->pc = 0x33FCA8u;
    // 0x33fca8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x33fcac: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x33fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x33fcb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fcb4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33fcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33fcb8: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x33FCB8u;
    SET_GPR_U32(ctx, 31, 0x33FCC0u);
    ctx->pc = 0x33FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCB8u;
            // 0x33fcbc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCC0u; }
        if (ctx->pc != 0x33FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCC0u; }
        if (ctx->pc != 0x33FCC0u) { return; }
    }
    ctx->pc = 0x33FCC0u;
label_33fcc0:
    // 0x33fcc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33FCC0u;
    {
        const bool branch_taken_0x33fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCC0u;
            // 0x33fcc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcc0) {
            ctx->pc = 0x33FCE8u;
            goto label_33fce8;
        }
    }
    ctx->pc = 0x33FCC8u;
label_33fcc8:
    // 0x33fcc8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_33fccc:
    // 0x33fccc: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x33fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x33fcd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fcd4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33fcd8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x33fcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33fcdc: 0xc0c0b94  jal         func_302E50
    ctx->pc = 0x33FCDCu;
    SET_GPR_U32(ctx, 31, 0x33FCE4u);
    ctx->pc = 0x33FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCDCu;
            // 0x33fce0: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E50u;
    if (runtime->hasFunction(0x302E50u)) {
        auto targetFn = runtime->lookupFunction(0x302E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCE4u; }
        if (ctx->pc != 0x33FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E50_0x302e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCE4u; }
        if (ctx->pc != 0x33FCE4u) { return; }
    }
    ctx->pc = 0x33FCE4u;
label_33fce4:
    // 0x33fce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33fce8:
    // 0x33fce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33fce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fcec: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FCECu;
    SET_GPR_U32(ctx, 31, 0x33FCF4u);
    ctx->pc = 0x33FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCECu;
            // 0x33fcf0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCF4u; }
        if (ctx->pc != 0x33FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FCF4u; }
        if (ctx->pc != 0x33FCF4u) { return; }
    }
    ctx->pc = 0x33FCF4u;
label_33fcf4:
    // 0x33fcf4: 0x266400b8  addiu       $a0, $s3, 0xB8
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
    // 0x33fcf8: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x33fcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33fcfc: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FCFCu;
    SET_GPR_U32(ctx, 31, 0x33FD04u);
    ctx->pc = 0x33FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCFCu;
            // 0x33fd00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD04u; }
        if (ctx->pc != 0x33FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD04u; }
        if (ctx->pc != 0x33FD04u) { return; }
    }
    ctx->pc = 0x33FD04u;
label_33fd04:
    // 0x33fd04: 0x26a60002  addiu       $a2, $s5, 0x2
    ctx->pc = 0x33fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x33fd08: 0x26640170  addiu       $a0, $s3, 0x170
    ctx->pc = 0x33fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
    // 0x33fd0c: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FD0Cu;
    SET_GPR_U32(ctx, 31, 0x33FD14u);
    ctx->pc = 0x33FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD0Cu;
            // 0x33fd10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD14u; }
        if (ctx->pc != 0x33FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD14u; }
        if (ctx->pc != 0x33FD14u) { return; }
    }
    ctx->pc = 0x33FD14u;
label_33fd14:
    // 0x33fd14: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x33fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x33fd18: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x33fd1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd20: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33fd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x33fd24: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x33FD24u;
    SET_GPR_U32(ctx, 31, 0x33FD2Cu);
    ctx->pc = 0x33FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD24u;
            // 0x33fd28: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD2Cu; }
        if (ctx->pc != 0x33FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD2Cu; }
        if (ctx->pc != 0x33FD2Cu) { return; }
    }
    ctx->pc = 0x33FD2Cu;
label_33fd2c:
    // 0x33fd2c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fd30: 0x8c66ea68  lw          $a2, -0x1598($v1)
    ctx->pc = 0x33fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961768)));
    // 0x33fd34: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x33fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x33fd38: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x33fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x33fd3c: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x33fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33fd40: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x33fd40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33fd44: 0x1810  mfhi        $v1
    ctx->pc = 0x33fd44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33fd48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fd4c: 0x168301bf  bne         $s4, $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x33FD4Cu;
    {
        const bool branch_taken_0x33fd4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD4Cu;
            // 0x33fd50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd4c) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FD54u;
    // 0x33fd54: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fd58: 0x8c63ea7c  lw          $v1, -0x1584($v1)
    ctx->pc = 0x33fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961788)));
    // 0x33fd5c: 0x146001bb  bnez        $v1, . + 4 + (0x1BB << 2)
    ctx->pc = 0x33FD5Cu;
    {
        const bool branch_taken_0x33fd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd5c) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FD64u;
    // 0x33fd64: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x33fd64u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33fd68: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33fd6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33fd70: 0x24423ec8  addiu       $v0, $v0, 0x3EC8
    ctx->pc = 0x33fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16072));
    // 0x33fd74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33fd74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd78: 0x24843c68  addiu       $a0, $a0, 0x3C68
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15464));
    // 0x33fd7c: 0x1810  mfhi        $v1
    ctx->pc = 0x33fd7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33fd80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33fd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fd8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fd90: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33FD90u;
    SET_GPR_U32(ctx, 31, 0x33FD98u);
    ctx->pc = 0x33FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD90u;
            // 0x33fd94: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD98u; }
        if (ctx->pc != 0x33FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FD98u; }
        if (ctx->pc != 0x33FD98u) { return; }
    }
    ctx->pc = 0x33FD98u;
label_33fd98:
    // 0x33fd98: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x33FD98u;
    {
        const bool branch_taken_0x33fd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fd98) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FDA0u;
label_33fda0:
    // 0x33fda0: 0x24b4ffff  addiu       $s4, $a1, -0x1
    ctx->pc = 0x33fda0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33fda4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fda8: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x33fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x33fdac: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x33fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33fdb0: 0xb4a821  addu        $s5, $a1, $s4
    ctx->pc = 0x33fdb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x33fdb4: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x33fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x33fdb8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33fdbc: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x33fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x33fdc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fdc4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x33fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33fdc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fdcc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33fdd0: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x33fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x33fdd4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x33fdd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33fdd8: 0x1420019c  bnez        $at, . + 4 + (0x19C << 2)
    ctx->pc = 0x33FDD8u;
    {
        const bool branch_taken_0x33fdd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdd8) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FDE0u;
    // 0x33fde0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fde4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x33fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x33fde8: 0x8c44ea68  lw          $a0, -0x1598($v0)
    ctx->pc = 0x33fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x33fdec: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x33fdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33fdf0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x33fdf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33fdf4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x33fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x33fdf8: 0x0  nop
    ctx->pc = 0x33fdf8u;
    // NOP
    // 0x33fdfc: 0x1010  mfhi        $v0
    ctx->pc = 0x33fdfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33fe00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fe04: 0x5682000e  bnel        $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33FE04u;
    {
        const bool branch_taken_0x33fe04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x33fe04) {
            ctx->pc = 0x33FE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE04u;
            // 0x33fe08: 0x2665fd80  addiu       $a1, $s3, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966656));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FE0Cu;
    // 0x33fe0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33fe10: 0x8c42ea7c  lw          $v0, -0x1584($v0)
    ctx->pc = 0x33fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x33fe14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33FE14u;
    {
        const bool branch_taken_0x33fe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fe14) {
            ctx->pc = 0x33FE3Cu;
            goto label_33fe3c;
        }
    }
    ctx->pc = 0x33FE1Cu;
    // 0x33fe1c: 0x2665fd80  addiu       $a1, $s3, -0x280
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966656));
    // 0x33fe20: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x33fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x33fe24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe28: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33fe2c: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x33FE2Cu;
    SET_GPR_U32(ctx, 31, 0x33FE34u);
    ctx->pc = 0x33FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE2Cu;
            // 0x33fe30: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE34u; }
        if (ctx->pc != 0x33FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE34u; }
        if (ctx->pc != 0x33FE34u) { return; }
    }
    ctx->pc = 0x33FE34u;
label_33fe34:
    // 0x33fe34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33FE34u;
    {
        const bool branch_taken_0x33fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE34u;
            // 0x33fe38: 0x2664fe10  addiu       $a0, $s3, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe34) {
            ctx->pc = 0x33FE5Cu;
            goto label_33fe5c;
        }
    }
    ctx->pc = 0x33FE3Cu;
label_33fe3c:
    // 0x33fe3c: 0x2665fd80  addiu       $a1, $s3, -0x280
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966656));
label_33fe40:
    // 0x33fe40: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x33fe44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe48: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33fe48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33fe4c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x33fe4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33fe50: 0xc0c0b94  jal         func_302E50
    ctx->pc = 0x33FE50u;
    SET_GPR_U32(ctx, 31, 0x33FE58u);
    ctx->pc = 0x33FE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE50u;
            // 0x33fe54: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E50u;
    if (runtime->hasFunction(0x302E50u)) {
        auto targetFn = runtime->lookupFunction(0x302E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE58u; }
        if (ctx->pc != 0x33FE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E50_0x302e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE58u; }
        if (ctx->pc != 0x33FE58u) { return; }
    }
    ctx->pc = 0x33FE58u;
label_33fe58:
    // 0x33fe58: 0x2664fe10  addiu       $a0, $s3, -0x1F0
    ctx->pc = 0x33fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966800));
label_33fe5c:
    // 0x33fe5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33fe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe60: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FE60u;
    SET_GPR_U32(ctx, 31, 0x33FE68u);
    ctx->pc = 0x33FE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE60u;
            // 0x33fe64: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE68u; }
        if (ctx->pc != 0x33FE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE68u; }
        if (ctx->pc != 0x33FE68u) { return; }
    }
    ctx->pc = 0x33FE68u;
label_33fe68:
    // 0x33fe68: 0x2664fec8  addiu       $a0, $s3, -0x138
    ctx->pc = 0x33fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966984));
    // 0x33fe6c: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x33fe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33fe70: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FE70u;
    SET_GPR_U32(ctx, 31, 0x33FE78u);
    ctx->pc = 0x33FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE70u;
            // 0x33fe74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE78u; }
        if (ctx->pc != 0x33FE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE78u; }
        if (ctx->pc != 0x33FE78u) { return; }
    }
    ctx->pc = 0x33FE78u;
label_33fe78:
    // 0x33fe78: 0x26a60002  addiu       $a2, $s5, 0x2
    ctx->pc = 0x33fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x33fe7c: 0x2664ff80  addiu       $a0, $s3, -0x80
    ctx->pc = 0x33fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967168));
    // 0x33fe80: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x33FE80u;
    SET_GPR_U32(ctx, 31, 0x33FE88u);
    ctx->pc = 0x33FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE80u;
            // 0x33fe84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE88u; }
        if (ctx->pc != 0x33FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FE88u; }
        if (ctx->pc != 0x33FE88u) { return; }
    }
    ctx->pc = 0x33FE88u;
label_33fe88:
    // 0x33fe88: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x33fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x33fe8c: 0x2665fd80  addiu       $a1, $s3, -0x280
    ctx->pc = 0x33fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966656));
    // 0x33fe90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fe90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe94: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x33fe94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33fe98: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x33FE98u;
    SET_GPR_U32(ctx, 31, 0x33FEA0u);
    ctx->pc = 0x33FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE98u;
            // 0x33fe9c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FEA0u; }
        if (ctx->pc != 0x33FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FEA0u; }
        if (ctx->pc != 0x33FEA0u) { return; }
    }
    ctx->pc = 0x33FEA0u;
label_33fea0:
    // 0x33fea0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fea4: 0x8c66ea68  lw          $a2, -0x1598($v1)
    ctx->pc = 0x33fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961768)));
    // 0x33fea8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x33feac: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x33feacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x33feb0: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x33feb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33feb4: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x33feb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33feb8: 0x1810  mfhi        $v1
    ctx->pc = 0x33feb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33febc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fec0: 0x16830162  bne         $s4, $v1, . + 4 + (0x162 << 2)
    ctx->pc = 0x33FEC0u;
    {
        const bool branch_taken_0x33fec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEC0u;
            // 0x33fec4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fec0) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FEC8u;
    // 0x33fec8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33fecc: 0x8c63ea7c  lw          $v1, -0x1584($v1)
    ctx->pc = 0x33feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961788)));
    // 0x33fed0: 0x1460015e  bnez        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x33FED0u;
    {
        const bool branch_taken_0x33fed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fed0) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FED8u;
    // 0x33fed8: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x33fed8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33fedc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33fee0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33fee4: 0x24423ed8  addiu       $v0, $v0, 0x3ED8
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16088));
    // 0x33fee8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33fee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33feec: 0x24843c68  addiu       $a0, $a0, 0x3C68
    ctx->pc = 0x33feecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15464));
    // 0x33fef0: 0x1810  mfhi        $v1
    ctx->pc = 0x33fef0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33fef4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33fefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ff00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ff04: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33FF04u;
    SET_GPR_U32(ctx, 31, 0x33FF0Cu);
    ctx->pc = 0x33FF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF04u;
            // 0x33ff08: 0x2622823  subu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF0Cu; }
        if (ctx->pc != 0x33FF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF0Cu; }
        if (ctx->pc != 0x33FF0Cu) { return; }
    }
    ctx->pc = 0x33FF0Cu;
label_33ff0c:
    // 0x33ff0c: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x33FF0Cu;
    {
        const bool branch_taken_0x33ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff0c) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FF14u;
label_33ff14:
    // 0x33ff14: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x33ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x33ff18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ff18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ff1c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF1Cu;
    SET_GPR_U32(ctx, 31, 0x33FF24u);
    ctx->pc = 0x33FF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF1Cu;
            // 0x33ff20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF24u; }
        if (ctx->pc != 0x33FF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF24u; }
        if (ctx->pc != 0x33FF24u) { return; }
    }
    ctx->pc = 0x33FF24u;
label_33ff24:
    // 0x33ff24: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x33ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x33ff28: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x33ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x33ff2c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF2Cu;
    SET_GPR_U32(ctx, 31, 0x33FF34u);
    ctx->pc = 0x33FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF2Cu;
            // 0x33ff30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF34u; }
        if (ctx->pc != 0x33FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF34u; }
        if (ctx->pc != 0x33FF34u) { return; }
    }
    ctx->pc = 0x33FF34u;
label_33ff34:
    // 0x33ff34: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x33ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x33ff38: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x33ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x33ff3c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF3Cu;
    SET_GPR_U32(ctx, 31, 0x33FF44u);
    ctx->pc = 0x33FF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF3Cu;
            // 0x33ff40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF44u; }
        if (ctx->pc != 0x33FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF44u; }
        if (ctx->pc != 0x33FF44u) { return; }
    }
    ctx->pc = 0x33FF44u;
label_33ff44:
    // 0x33ff44: 0x266500c0  addiu       $a1, $s3, 0xC0
    ctx->pc = 0x33ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x33ff48: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x33ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x33ff4c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF4Cu;
    SET_GPR_U32(ctx, 31, 0x33FF54u);
    ctx->pc = 0x33FF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF4Cu;
            // 0x33ff50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF54u; }
        if (ctx->pc != 0x33FF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF54u; }
        if (ctx->pc != 0x33FF54u) { return; }
    }
    ctx->pc = 0x33FF54u;
label_33ff54:
    // 0x33ff54: 0x26650100  addiu       $a1, $s3, 0x100
    ctx->pc = 0x33ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x33ff58: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x33ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x33ff5c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF5Cu;
    SET_GPR_U32(ctx, 31, 0x33FF64u);
    ctx->pc = 0x33FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF5Cu;
            // 0x33ff60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF64u; }
        if (ctx->pc != 0x33FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF64u; }
        if (ctx->pc != 0x33FF64u) { return; }
    }
    ctx->pc = 0x33FF64u;
label_33ff64:
    // 0x33ff64: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x33FF64u;
    {
        const bool branch_taken_0x33ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff64) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x33FF6Cu;
label_33ff6c:
    // 0x33ff6c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ff70: 0x8c42ea7c  lw          $v0, -0x1584($v0)
    ctx->pc = 0x33ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x33ff74: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x33FF74u;
    {
        const bool branch_taken_0x33ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff74) {
            ctx->pc = 0x33FF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF74u;
            // 0x33ff78: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FFC4u;
            goto label_33ffc4;
        }
    }
    ctx->pc = 0x33FF7Cu;
    // 0x33ff7c: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x33ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x33ff80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ff84: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FF84u;
    SET_GPR_U32(ctx, 31, 0x33FF8Cu);
    ctx->pc = 0x33FF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF84u;
            // 0x33ff88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF8Cu; }
        if (ctx->pc != 0x33FF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FF8Cu; }
        if (ctx->pc != 0x33FF8Cu) { return; }
    }
    ctx->pc = 0x33FF8Cu;
label_33ff8c:
    // 0x33ff8c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x33ff90: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x33ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x33ff94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ff98: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x33ff98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x33ff9c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x33ff9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33ffa0: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x33ffa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33ffa4: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x33FFA4u;
    SET_GPR_U32(ctx, 31, 0x33FFACu);
    ctx->pc = 0x33FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFA4u;
            // 0x33ffa8: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFACu; }
        if (ctx->pc != 0x33FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFACu; }
        if (ctx->pc != 0x33FFACu) { return; }
    }
    ctx->pc = 0x33FFACu;
label_33ffac:
    // 0x33ffac: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x33ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x33ffb0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x33ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x33ffb4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33FFB4u;
    SET_GPR_U32(ctx, 31, 0x33FFBCu);
    ctx->pc = 0x33FFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFB4u;
            // 0x33ffb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFBCu; }
        if (ctx->pc != 0x33FFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFBCu; }
        if (ctx->pc != 0x33FFBCu) { return; }
    }
    ctx->pc = 0x33FFBCu;
label_33ffbc:
    // 0x33ffbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33FFBCu;
    {
        const bool branch_taken_0x33ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFBCu;
            // 0x33ffc0: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffbc) {
            ctx->pc = 0x34000Cu;
            goto label_34000c;
        }
    }
    ctx->pc = 0x33FFC4u;
label_33ffc4:
    // 0x33ffc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ffc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ffc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffcc: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33FFCCu;
    SET_GPR_U32(ctx, 31, 0x33FFD4u);
    ctx->pc = 0x33FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFCCu;
            // 0x33ffd0: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFD4u; }
        if (ctx->pc != 0x33FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFD4u; }
        if (ctx->pc != 0x33FFD4u) { return; }
    }
    ctx->pc = 0x33FFD4u;
label_33ffd4:
    // 0x33ffd4: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x33ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x33ffd8: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x33ffdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ffdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffe0: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x33ffe4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x33ffe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33ffe8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x33ffe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33ffec: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x33FFECu;
    SET_GPR_U32(ctx, 31, 0x33FFF4u);
    ctx->pc = 0x33FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFECu;
            // 0x33fff0: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFF4u; }
        if (ctx->pc != 0x33FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FFF4u; }
        if (ctx->pc != 0x33FFF4u) { return; }
    }
    ctx->pc = 0x33FFF4u;
label_33fff4:
    // 0x33fff4: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x33fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x33fff8: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x33fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x33fffc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33fffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340000: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x340000u;
    SET_GPR_U32(ctx, 31, 0x340008u);
    ctx->pc = 0x340004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340000u;
            // 0x340004: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340008u; }
        if (ctx->pc != 0x340008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340008u; }
        if (ctx->pc != 0x340008u) { return; }
    }
    ctx->pc = 0x340008u;
label_340008:
    // 0x340008: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x340008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_34000c:
    // 0x34000c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340010: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340010u;
    SET_GPR_U32(ctx, 31, 0x340018u);
    ctx->pc = 0x340014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340010u;
            // 0x340014: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340018u; }
        if (ctx->pc != 0x340018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340018u; }
        if (ctx->pc != 0x340018u) { return; }
    }
    ctx->pc = 0x340018u;
label_340018:
    // 0x340018: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x340018u;
    {
        const bool branch_taken_0x340018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340018) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x340020u;
label_340020:
    // 0x340020: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x340020u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340024: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x340024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x340028: 0x10200108  beqz        $at, . + 4 + (0x108 << 2)
    ctx->pc = 0x340028u;
    {
        const bool branch_taken_0x340028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340028) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x340030u;
    // 0x340030: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x340034: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x340034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x340038: 0x24844f70  addiu       $a0, $a0, 0x4F70
    ctx->pc = 0x340038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20336));
    // 0x34003c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340044: 0x600008  jr          $v1
    ctx->pc = 0x340044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34004Cu: goto label_34004c;
            case 0x3400B8u: goto label_3400b8;
            case 0x340348u: goto label_340348;
            case 0x3403A0u: goto label_3403a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x34004Cu;
label_34004c:
    // 0x34004c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x340050: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x340050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x340054: 0x9042e820  lbu         $v0, -0x17E0($v0)
    ctx->pc = 0x340054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x340058: 0x24633e90  addiu       $v1, $v1, 0x3E90
    ctx->pc = 0x340058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16016));
    // 0x34005c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34005cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340060: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340064: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x340064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x340068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x340068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34006c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x34006cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340070: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x340070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x340074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34007c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x34007Cu;
    SET_GPR_U32(ctx, 31, 0x340084u);
    ctx->pc = 0x340080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34007Cu;
            // 0x340080: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340084u; }
        if (ctx->pc != 0x340084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340084u; }
        if (ctx->pc != 0x340084u) { return; }
    }
    ctx->pc = 0x340084u;
label_340084:
    // 0x340084: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x340084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340088: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34008c: 0x9064ea64  lbu         $a0, -0x159C($v1)
    ctx->pc = 0x34008cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x340090: 0x266600a8  addiu       $a2, $s3, 0xA8
    ctx->pc = 0x340090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x340094: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x340094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x340098: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x340098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34009c: 0x24633f08  addiu       $v1, $v1, 0x3F08
    ctx->pc = 0x34009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16136));
    // 0x3400a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3400a4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3400a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3400a8: 0xc0d0134  jal         func_3404D0
    ctx->pc = 0x3400A8u;
    SET_GPR_U32(ctx, 31, 0x3400B0u);
    ctx->pc = 0x3400ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3400A8u;
            // 0x3400ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3404D0u;
    if (runtime->hasFunction(0x3404D0u)) {
        auto targetFn = runtime->lookupFunction(0x3404D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3400B0u; }
        if (ctx->pc != 0x3400B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003404D0_0x3404d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3400B0u; }
        if (ctx->pc != 0x3400B0u) { return; }
    }
    ctx->pc = 0x3400B0u;
label_3400b0:
    // 0x3400b0: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3400B0u;
    {
        const bool branch_taken_0x3400b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400b0) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3400B8u;
label_3400b8:
    // 0x3400b8: 0x24b4ffff  addiu       $s4, $a1, -0x1
    ctx->pc = 0x3400b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3400bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3400bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3400c0: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x3400c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x3400c4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3400c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3400c8: 0xb4a821  addu        $s5, $a1, $s4
    ctx->pc = 0x3400c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3400cc: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x3400ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x3400d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3400d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3400d4: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x3400d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x3400d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3400d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3400dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3400dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3400e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3400e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3400e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3400e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3400e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3400e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3400ec: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x3400ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x3400f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3400f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3400f4: 0x142000d5  bnez        $at, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3400F4u;
    {
        const bool branch_taken_0x3400f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400f4) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3400FCu;
    // 0x3400fc: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3400fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x340100: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x340100u;
    {
        const bool branch_taken_0x340100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340100) {
            ctx->pc = 0x340228u;
            goto label_340228;
        }
    }
    ctx->pc = 0x340108u;
    // 0x340108: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34010c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x34010cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x340110: 0x8c44ea68  lw          $a0, -0x1598($v0)
    ctx->pc = 0x340110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x340114: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x340114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x340118: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x340118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34011c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x34011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x340120: 0x0  nop
    ctx->pc = 0x340120u;
    // NOP
    // 0x340124: 0x1010  mfhi        $v0
    ctx->pc = 0x340124u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34012c: 0x56820009  bnel        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34012Cu;
    {
        const bool branch_taken_0x34012c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x34012c) {
            ctx->pc = 0x340130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34012Cu;
            // 0x340130: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340154u;
            goto label_340154;
        }
    }
    ctx->pc = 0x340134u;
    // 0x340134: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x340134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x340138: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x340138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x34013c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34013cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340140: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x340140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x340144: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x340144u;
    SET_GPR_U32(ctx, 31, 0x34014Cu);
    ctx->pc = 0x340148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340144u;
            // 0x340148: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34014Cu; }
        if (ctx->pc != 0x34014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34014Cu; }
        if (ctx->pc != 0x34014Cu) { return; }
    }
    ctx->pc = 0x34014Cu;
label_34014c:
    // 0x34014c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34014Cu;
    {
        const bool branch_taken_0x34014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34014Cu;
            // 0x340150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34014c) {
            ctx->pc = 0x340170u;
            goto label_340170;
        }
    }
    ctx->pc = 0x340154u;
label_340154:
    // 0x340154: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x340154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x340158: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34015c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x34015cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x340160: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x340160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340164: 0xc0c0b94  jal         func_302E50
    ctx->pc = 0x340164u;
    SET_GPR_U32(ctx, 31, 0x34016Cu);
    ctx->pc = 0x340168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340164u;
            // 0x340168: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E50u;
    if (runtime->hasFunction(0x302E50u)) {
        auto targetFn = runtime->lookupFunction(0x302E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34016Cu; }
        if (ctx->pc != 0x34016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E50_0x302e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34016Cu; }
        if (ctx->pc != 0x34016Cu) { return; }
    }
    ctx->pc = 0x34016Cu;
label_34016c:
    // 0x34016c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_340170:
    // 0x340170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x340170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340174: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x340174u;
    SET_GPR_U32(ctx, 31, 0x34017Cu);
    ctx->pc = 0x340178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340174u;
            // 0x340178: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34017Cu; }
        if (ctx->pc != 0x34017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34017Cu; }
        if (ctx->pc != 0x34017Cu) { return; }
    }
    ctx->pc = 0x34017Cu;
label_34017c:
    // 0x34017c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x34017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x340180: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x340180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x340184: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x340184u;
    SET_GPR_U32(ctx, 31, 0x34018Cu);
    ctx->pc = 0x340188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340184u;
            // 0x340188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34018Cu; }
        if (ctx->pc != 0x34018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34018Cu; }
        if (ctx->pc != 0x34018Cu) { return; }
    }
    ctx->pc = 0x34018Cu;
label_34018c:
    // 0x34018c: 0x26a60002  addiu       $a2, $s5, 0x2
    ctx->pc = 0x34018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x340190: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x340194: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x340194u;
    SET_GPR_U32(ctx, 31, 0x34019Cu);
    ctx->pc = 0x340198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340194u;
            // 0x340198: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34019Cu; }
        if (ctx->pc != 0x34019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34019Cu; }
        if (ctx->pc != 0x34019Cu) { return; }
    }
    ctx->pc = 0x34019Cu;
label_34019c:
    // 0x34019c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x34019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3401a0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3401a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3401a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3401a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401a8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3401a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3401ac: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x3401ACu;
    SET_GPR_U32(ctx, 31, 0x3401B4u);
    ctx->pc = 0x3401B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3401ACu;
            // 0x3401b0: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3401B4u; }
        if (ctx->pc != 0x3401B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3401B4u; }
        if (ctx->pc != 0x3401B4u) { return; }
    }
    ctx->pc = 0x3401B4u;
label_3401b4:
    // 0x3401b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3401b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3401b8: 0x8c66ea68  lw          $a2, -0x1598($v1)
    ctx->pc = 0x3401b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961768)));
    // 0x3401bc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x3401bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x3401c0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x3401c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3401c4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x3401c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x3401c8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x3401c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3401cc: 0x1810  mfhi        $v1
    ctx->pc = 0x3401ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3401d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3401d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3401d4: 0x1683009d  bne         $s4, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x3401D4u;
    {
        const bool branch_taken_0x3401d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3401D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3401D4u;
            // 0x3401d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401d4) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3401DCu;
    // 0x3401dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3401dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3401e0: 0x8c63ea7c  lw          $v1, -0x1584($v1)
    ctx->pc = 0x3401e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961788)));
    // 0x3401e4: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x3401E4u;
    {
        const bool branch_taken_0x3401e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3401e4) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3401ECu;
    // 0x3401ec: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x3401ecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3401f0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3401f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3401f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3401f8: 0x24423ea8  addiu       $v0, $v0, 0x3EA8
    ctx->pc = 0x3401f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16040));
    // 0x3401fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3401fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340200: 0x248438b4  addiu       $a0, $a0, 0x38B4
    ctx->pc = 0x340200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14516));
    // 0x340204: 0x1810  mfhi        $v1
    ctx->pc = 0x340204u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x340208: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34020c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34020cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x340214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340218: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x340218u;
    SET_GPR_U32(ctx, 31, 0x340220u);
    ctx->pc = 0x34021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340218u;
            // 0x34021c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340220u; }
        if (ctx->pc != 0x340220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340220u; }
        if (ctx->pc != 0x340220u) { return; }
    }
    ctx->pc = 0x340220u;
label_340220:
    // 0x340220: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x340220u;
    {
        const bool branch_taken_0x340220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340220) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x340228u;
label_340228:
    // 0x340228: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x340228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34022c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x34022cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x340230: 0x8c44ea68  lw          $a0, -0x1598($v0)
    ctx->pc = 0x340230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x340234: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x340234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x340238: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x340238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34023c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x34023cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x340240: 0x0  nop
    ctx->pc = 0x340240u;
    // NOP
    // 0x340244: 0x1010  mfhi        $v0
    ctx->pc = 0x340244u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34024c: 0x56820009  bnel        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34024Cu;
    {
        const bool branch_taken_0x34024c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x34024c) {
            ctx->pc = 0x340250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34024Cu;
            // 0x340250: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340274u;
            goto label_340274;
        }
    }
    ctx->pc = 0x340254u;
    // 0x340254: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x340258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x340258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34025c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340260: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x340264: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x340264u;
    SET_GPR_U32(ctx, 31, 0x34026Cu);
    ctx->pc = 0x340268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340264u;
            // 0x340268: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34026Cu; }
        if (ctx->pc != 0x34026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34026Cu; }
        if (ctx->pc != 0x34026Cu) { return; }
    }
    ctx->pc = 0x34026Cu;
label_34026c:
    // 0x34026c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34026Cu;
    {
        const bool branch_taken_0x34026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34026Cu;
            // 0x340270: 0x26640038  addiu       $a0, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34026c) {
            ctx->pc = 0x340290u;
            goto label_340290;
        }
    }
    ctx->pc = 0x340274u;
label_340274:
    // 0x340274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x340274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340278: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34027c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x34027cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x340280: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x340280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340284: 0xc0c0b94  jal         func_302E50
    ctx->pc = 0x340284u;
    SET_GPR_U32(ctx, 31, 0x34028Cu);
    ctx->pc = 0x340288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340284u;
            // 0x340288: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E50u;
    if (runtime->hasFunction(0x302E50u)) {
        auto targetFn = runtime->lookupFunction(0x302E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34028Cu; }
        if (ctx->pc != 0x34028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E50_0x302e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34028Cu; }
        if (ctx->pc != 0x34028Cu) { return; }
    }
    ctx->pc = 0x34028Cu;
label_34028c:
    // 0x34028c: 0x26640038  addiu       $a0, $s3, 0x38
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_340290:
    // 0x340290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x340290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340294: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x340294u;
    SET_GPR_U32(ctx, 31, 0x34029Cu);
    ctx->pc = 0x340298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340294u;
            // 0x340298: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34029Cu; }
        if (ctx->pc != 0x34029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34029Cu; }
        if (ctx->pc != 0x34029Cu) { return; }
    }
    ctx->pc = 0x34029Cu;
label_34029c:
    // 0x34029c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x34029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x3402a0: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x3402a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3402a4: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x3402A4u;
    SET_GPR_U32(ctx, 31, 0x3402ACu);
    ctx->pc = 0x3402A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3402A4u;
            // 0x3402a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402ACu; }
        if (ctx->pc != 0x3402ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402ACu; }
        if (ctx->pc != 0x3402ACu) { return; }
    }
    ctx->pc = 0x3402ACu;
label_3402ac:
    // 0x3402ac: 0x26a60002  addiu       $a2, $s5, 0x2
    ctx->pc = 0x3402acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x3402b0: 0x266400e8  addiu       $a0, $s3, 0xE8
    ctx->pc = 0x3402b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
    // 0x3402b4: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x3402B4u;
    SET_GPR_U32(ctx, 31, 0x3402BCu);
    ctx->pc = 0x3402B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3402B4u;
            // 0x3402b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (runtime->hasFunction(0x340680u)) {
        auto targetFn = runtime->lookupFunction(0x340680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402BCu; }
        if (ctx->pc != 0x3402BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340680_0x340680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402BCu; }
        if (ctx->pc != 0x3402BCu) { return; }
    }
    ctx->pc = 0x3402BCu;
label_3402bc:
    // 0x3402bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3402c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3402c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3402c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402c8: 0x24070108  addiu       $a3, $zero, 0x108
    ctx->pc = 0x3402c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x3402cc: 0xc0c0b80  jal         func_302E00
    ctx->pc = 0x3402CCu;
    SET_GPR_U32(ctx, 31, 0x3402D4u);
    ctx->pc = 0x3402D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3402CCu;
            // 0x3402d0: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302E00u;
    if (runtime->hasFunction(0x302E00u)) {
        auto targetFn = runtime->lookupFunction(0x302E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402D4u; }
        if (ctx->pc != 0x3402D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302E00_0x302e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402D4u; }
        if (ctx->pc != 0x3402D4u) { return; }
    }
    ctx->pc = 0x3402D4u;
label_3402d4:
    // 0x3402d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3402d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3402d8: 0x8c66ea68  lw          $a2, -0x1598($v1)
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961768)));
    // 0x3402dc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x3402dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x3402e0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3402e4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x3402e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x3402e8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x3402e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3402ec: 0x1810  mfhi        $v1
    ctx->pc = 0x3402ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3402f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3402f4: 0x16830055  bne         $s4, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3402F4u;
    {
        const bool branch_taken_0x3402f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3402F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3402F4u;
            // 0x3402f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402f4) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3402FCu;
    // 0x3402fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3402fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x340300: 0x8c63ea7c  lw          $v1, -0x1584($v1)
    ctx->pc = 0x340300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961788)));
    // 0x340304: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x340304u;
    {
        const bool branch_taken_0x340304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340304) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x34030Cu;
    // 0x34030c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x34030cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340310: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x340314: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x340318: 0x24423eb8  addiu       $v0, $v0, 0x3EB8
    ctx->pc = 0x340318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16056));
    // 0x34031c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34031cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340320: 0x248438b4  addiu       $a0, $a0, 0x38B4
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14516));
    // 0x340324: 0x1810  mfhi        $v1
    ctx->pc = 0x340324u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x340328: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34032c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x340334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340338: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x340338u;
    SET_GPR_U32(ctx, 31, 0x340340u);
    ctx->pc = 0x34033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340338u;
            // 0x34033c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340340u; }
        if (ctx->pc != 0x340340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340340u; }
        if (ctx->pc != 0x340340u) { return; }
    }
    ctx->pc = 0x340340u;
label_340340:
    // 0x340340: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x340340u;
    {
        const bool branch_taken_0x340340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340340) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x340348u;
label_340348:
    // 0x340348: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x340348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x34034c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340350: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340350u;
    SET_GPR_U32(ctx, 31, 0x340358u);
    ctx->pc = 0x340354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340350u;
            // 0x340354: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340358u; }
        if (ctx->pc != 0x340358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340358u; }
        if (ctx->pc != 0x340358u) { return; }
    }
    ctx->pc = 0x340358u;
label_340358:
    // 0x340358: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x340358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x34035c: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x34035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x340360: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340360u;
    SET_GPR_U32(ctx, 31, 0x340368u);
    ctx->pc = 0x340364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340360u;
            // 0x340364: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340368u; }
        if (ctx->pc != 0x340368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340368u; }
        if (ctx->pc != 0x340368u) { return; }
    }
    ctx->pc = 0x340368u;
label_340368:
    // 0x340368: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x340368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x34036c: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x34036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x340370: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340370u;
    SET_GPR_U32(ctx, 31, 0x340378u);
    ctx->pc = 0x340374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340370u;
            // 0x340374: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340378u; }
        if (ctx->pc != 0x340378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340378u; }
        if (ctx->pc != 0x340378u) { return; }
    }
    ctx->pc = 0x340378u;
label_340378:
    // 0x340378: 0x266500c0  addiu       $a1, $s3, 0xC0
    ctx->pc = 0x340378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x34037c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x34037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x340380: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340380u;
    SET_GPR_U32(ctx, 31, 0x340388u);
    ctx->pc = 0x340384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340380u;
            // 0x340384: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340388u; }
        if (ctx->pc != 0x340388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340388u; }
        if (ctx->pc != 0x340388u) { return; }
    }
    ctx->pc = 0x340388u;
label_340388:
    // 0x340388: 0x26650100  addiu       $a1, $s3, 0x100
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x34038c: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x34038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x340390: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340390u;
    SET_GPR_U32(ctx, 31, 0x340398u);
    ctx->pc = 0x340394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340390u;
            // 0x340394: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340398u; }
        if (ctx->pc != 0x340398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340398u; }
        if (ctx->pc != 0x340398u) { return; }
    }
    ctx->pc = 0x340398u;
label_340398:
    // 0x340398: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x340398u;
    {
        const bool branch_taken_0x340398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340398) {
            ctx->pc = 0x34044Cu;
            goto label_34044c;
        }
    }
    ctx->pc = 0x3403A0u;
label_3403a0:
    // 0x3403a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3403a4: 0x8c42ea7c  lw          $v0, -0x1584($v0)
    ctx->pc = 0x3403a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x3403a8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3403A8u;
    {
        const bool branch_taken_0x3403a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3403a8) {
            ctx->pc = 0x3403ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3403A8u;
            // 0x3403ac: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3403F8u;
            goto label_3403f8;
        }
    }
    ctx->pc = 0x3403B0u;
    // 0x3403b0: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x3403b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x3403b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3403b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3403b8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3403B8u;
    SET_GPR_U32(ctx, 31, 0x3403C0u);
    ctx->pc = 0x3403BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3403B8u;
            // 0x3403bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403C0u; }
        if (ctx->pc != 0x3403C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403C0u; }
        if (ctx->pc != 0x3403C0u) { return; }
    }
    ctx->pc = 0x3403C0u;
label_3403c0:
    // 0x3403c0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3403c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3403c4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3403c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3403c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3403c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3403cc: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x3403ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3403d0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3403d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3403d4: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x3403d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3403d8: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x3403D8u;
    SET_GPR_U32(ctx, 31, 0x3403E0u);
    ctx->pc = 0x3403DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3403D8u;
            // 0x3403dc: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403E0u; }
        if (ctx->pc != 0x3403E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403E0u; }
        if (ctx->pc != 0x3403E0u) { return; }
    }
    ctx->pc = 0x3403E0u;
label_3403e0:
    // 0x3403e0: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x3403e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x3403e4: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3403e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3403e8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3403E8u;
    SET_GPR_U32(ctx, 31, 0x3403F0u);
    ctx->pc = 0x3403ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3403E8u;
            // 0x3403ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403F0u; }
        if (ctx->pc != 0x3403F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3403F0u; }
        if (ctx->pc != 0x3403F0u) { return; }
    }
    ctx->pc = 0x3403F0u;
label_3403f0:
    // 0x3403f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3403F0u;
    {
        const bool branch_taken_0x3403f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3403F0u;
            // 0x3403f4: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403f0) {
            ctx->pc = 0x340440u;
            goto label_340440;
        }
    }
    ctx->pc = 0x3403F8u;
label_3403f8:
    // 0x3403f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3403f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3403fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3403fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340400: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x340400u;
    SET_GPR_U32(ctx, 31, 0x340408u);
    ctx->pc = 0x340404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340400u;
            // 0x340404: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340408u; }
        if (ctx->pc != 0x340408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340408u; }
        if (ctx->pc != 0x340408u) { return; }
    }
    ctx->pc = 0x340408u;
label_340408:
    // 0x340408: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x340408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x34040c: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x34040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x340410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340414: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x340414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x340418: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34041c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x34041cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x340420: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x340420u;
    SET_GPR_U32(ctx, 31, 0x340428u);
    ctx->pc = 0x340424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340420u;
            // 0x340424: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340428u; }
        if (ctx->pc != 0x340428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340428u; }
        if (ctx->pc != 0x340428u) { return; }
    }
    ctx->pc = 0x340428u;
label_340428:
    // 0x340428: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x340428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x34042c: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x34042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x340430: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340434: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x340434u;
    SET_GPR_U32(ctx, 31, 0x34043Cu);
    ctx->pc = 0x340438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340434u;
            // 0x340438: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (runtime->hasFunction(0x302BA0u)) {
        auto targetFn = runtime->lookupFunction(0x302BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34043Cu; }
        if (ctx->pc != 0x34043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302BA0_0x302ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34043Cu; }
        if (ctx->pc != 0x34043Cu) { return; }
    }
    ctx->pc = 0x34043Cu;
label_34043c:
    // 0x34043c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x34043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_340440:
    // 0x340440: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x340440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340444: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x340444u;
    SET_GPR_U32(ctx, 31, 0x34044Cu);
    ctx->pc = 0x340448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340444u;
            // 0x340448: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34044Cu; }
        if (ctx->pc != 0x34044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34044Cu; }
        if (ctx->pc != 0x34044Cu) { return; }
    }
    ctx->pc = 0x34044Cu;
label_34044c:
    // 0x34044c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_340450:
    // 0x340450: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x340450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x340454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34045c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34045cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340468: 0x3e00008  jr          $ra
label_34046c:
    if (ctx->pc == 0x34046Cu) {
        ctx->pc = 0x34046Cu;
            // 0x34046c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x340470u;
        goto label_fallthrough_0x340468;
    }
    ctx->pc = 0x340468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340468u;
            // 0x34046c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x340468:
    ctx->pc = 0x340470u;
    ctx->pc = 0x340470u;
}
