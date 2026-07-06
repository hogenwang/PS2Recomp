#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137130
// Address: 0x137130 - 0x13adf0
void sub_00137130_0x137130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137130_0x137130");
#endif

    switch (ctx->pc) {
        case 0x1371e4u: goto label_1371e4;
        case 0x137214u: goto label_137214;
        case 0x137220u: goto label_137220;
        case 0x137260u: goto label_137260;
        case 0x137284u: goto label_137284;
        case 0x1372b0u: goto label_1372b0;
        case 0x1372e0u: goto label_1372e0;
        case 0x137464u: goto label_137464;
        case 0x137584u: goto label_137584;
        case 0x1375c0u: goto label_1375c0;
        case 0x13766cu: goto label_13766c;
        case 0x1376d0u: goto label_1376d0;
        case 0x1376e4u: goto label_1376e4;
        case 0x137710u: goto label_137710;
        case 0x1377ecu: goto label_1377ec;
        case 0x1377fcu: goto label_1377fc;
        case 0x137834u: goto label_137834;
        case 0x137848u: goto label_137848;
        case 0x137868u: goto label_137868;
        case 0x137878u: goto label_137878;
        case 0x1378c0u: goto label_1378c0;
        case 0x137904u: goto label_137904;
        case 0x137930u: goto label_137930;
        case 0x137950u: goto label_137950;
        case 0x137990u: goto label_137990;
        case 0x137a48u: goto label_137a48;
        case 0x137ac4u: goto label_137ac4;
        case 0x137b1cu: goto label_137b1c;
        case 0x137ba0u: goto label_137ba0;
        case 0x137c44u: goto label_137c44;
        case 0x137c50u: goto label_137c50;
        case 0x137c5cu: goto label_137c5c;
        case 0x137c68u: goto label_137c68;
        case 0x137c74u: goto label_137c74;
        case 0x137c84u: goto label_137c84;
        case 0x137c94u: goto label_137c94;
        case 0x137ca0u: goto label_137ca0;
        case 0x137cacu: goto label_137cac;
        case 0x137cb8u: goto label_137cb8;
        case 0x137cc4u: goto label_137cc4;
        case 0x137cd4u: goto label_137cd4;
        case 0x137cf8u: goto label_137cf8;
        case 0x137d04u: goto label_137d04;
        case 0x137d10u: goto label_137d10;
        case 0x137d1cu: goto label_137d1c;
        case 0x137d28u: goto label_137d28;
        case 0x137d38u: goto label_137d38;
        case 0x137d48u: goto label_137d48;
        case 0x137d54u: goto label_137d54;
        case 0x137d60u: goto label_137d60;
        case 0x137d6cu: goto label_137d6c;
        case 0x137d78u: goto label_137d78;
        case 0x137d88u: goto label_137d88;
        case 0x137dacu: goto label_137dac;
        case 0x137db8u: goto label_137db8;
        case 0x137dc4u: goto label_137dc4;
        case 0x137dd0u: goto label_137dd0;
        case 0x137ddcu: goto label_137ddc;
        case 0x137decu: goto label_137dec;
        case 0x137dfcu: goto label_137dfc;
        case 0x137e08u: goto label_137e08;
        case 0x137e14u: goto label_137e14;
        case 0x137e20u: goto label_137e20;
        case 0x137e2cu: goto label_137e2c;
        case 0x137e3cu: goto label_137e3c;
        case 0x137e60u: goto label_137e60;
        case 0x137e6cu: goto label_137e6c;
        case 0x137e78u: goto label_137e78;
        case 0x137e84u: goto label_137e84;
        case 0x137e90u: goto label_137e90;
        case 0x137ea0u: goto label_137ea0;
        case 0x137eb0u: goto label_137eb0;
        case 0x137ebcu: goto label_137ebc;
        case 0x137ec8u: goto label_137ec8;
        case 0x137ed4u: goto label_137ed4;
        case 0x137ee0u: goto label_137ee0;
        case 0x137ef0u: goto label_137ef0;
        case 0x137f14u: goto label_137f14;
        case 0x137f20u: goto label_137f20;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f38u: goto label_137f38;
        case 0x137f44u: goto label_137f44;
        case 0x137f54u: goto label_137f54;
        case 0x137f64u: goto label_137f64;
        case 0x137f70u: goto label_137f70;
        case 0x137f7cu: goto label_137f7c;
        case 0x137f88u: goto label_137f88;
        case 0x137f94u: goto label_137f94;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fc0u: goto label_137fc0;
        case 0x13807cu: goto label_13807c;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380f0u: goto label_1380f0;
        case 0x138198u: goto label_138198;
        case 0x138200u: goto label_138200;
        case 0x138268u: goto label_138268;
        case 0x1382d0u: goto label_1382d0;
        case 0x138338u: goto label_138338;
        case 0x1383a0u: goto label_1383a0;
        case 0x13842cu: goto label_13842c;
        case 0x138494u: goto label_138494;
        case 0x1384fcu: goto label_1384fc;
        case 0x138564u: goto label_138564;
        case 0x1385ccu: goto label_1385cc;
        case 0x138634u: goto label_138634;
        case 0x1386d0u: goto label_1386d0;
        case 0x138740u: goto label_138740;
        case 0x1387a4u: goto label_1387a4;
        case 0x13885cu: goto label_13885c;
        case 0x1388d4u: goto label_1388d4;
        case 0x138960u: goto label_138960;
        case 0x1389c4u: goto label_1389c4;
        case 0x138a2cu: goto label_138a2c;
        case 0x138a90u: goto label_138a90;
        case 0x138af8u: goto label_138af8;
        case 0x138b5cu: goto label_138b5c;
        case 0x138bdcu: goto label_138bdc;
        case 0x138c2cu: goto label_138c2c;
        case 0x138c50u: goto label_138c50;
        case 0x138d14u: goto label_138d14;
        case 0x138d7cu: goto label_138d7c;
        case 0x138de4u: goto label_138de4;
        case 0x138e4cu: goto label_138e4c;
        case 0x138eacu: goto label_138eac;
        case 0x138f0cu: goto label_138f0c;
        case 0x138f74u: goto label_138f74;
        case 0x138fd4u: goto label_138fd4;
        case 0x13903cu: goto label_13903c;
        case 0x1390ccu: goto label_1390cc;
        case 0x139134u: goto label_139134;
        case 0x13919cu: goto label_13919c;
        case 0x139204u: goto label_139204;
        case 0x139264u: goto label_139264;
        case 0x1392c4u: goto label_1392c4;
        case 0x13932cu: goto label_13932c;
        case 0x13938cu: goto label_13938c;
        case 0x1393f4u: goto label_1393f4;
        case 0x139424u: goto label_139424;
        case 0x139440u: goto label_139440;
        case 0x139454u: goto label_139454;
        case 0x139484u: goto label_139484;
        case 0x13948cu: goto label_13948c;
        case 0x13949cu: goto label_13949c;
        case 0x1394b0u: goto label_1394b0;
        case 0x1394d8u: goto label_1394d8;
        case 0x139538u: goto label_139538;
        case 0x139548u: goto label_139548;
        case 0x139560u: goto label_139560;
        case 0x139598u: goto label_139598;
        case 0x1395b0u: goto label_1395b0;
        case 0x1395d0u: goto label_1395d0;
        case 0x1395d8u: goto label_1395d8;
        case 0x139600u: goto label_139600;
        case 0x139610u: goto label_139610;
        case 0x139620u: goto label_139620;
        case 0x139690u: goto label_139690;
        case 0x1396b0u: goto label_1396b0;
        case 0x139708u: goto label_139708;
        case 0x139718u: goto label_139718;
        case 0x139734u: goto label_139734;
        case 0x139744u: goto label_139744;
        case 0x139760u: goto label_139760;
        case 0x139770u: goto label_139770;
        case 0x1397b8u: goto label_1397b8;
        case 0x1397c8u: goto label_1397c8;
        case 0x1397dcu: goto label_1397dc;
        case 0x1397ecu: goto label_1397ec;
        case 0x139800u: goto label_139800;
        case 0x139810u: goto label_139810;
        case 0x139834u: goto label_139834;
        case 0x139858u: goto label_139858;
        case 0x139878u: goto label_139878;
        case 0x1398c0u: goto label_1398c0;
        case 0x13990cu: goto label_13990c;
        case 0x13995cu: goto label_13995c;
        case 0x139a74u: goto label_139a74;
        case 0x139b00u: goto label_139b00;
        case 0x139be0u: goto label_139be0;
        case 0x139cd8u: goto label_139cd8;
        case 0x139ce8u: goto label_139ce8;
        case 0x139d08u: goto label_139d08;
        case 0x139d34u: goto label_139d34;
        case 0x139d50u: goto label_139d50;
        case 0x139d7cu: goto label_139d7c;
        case 0x139fb8u: goto label_139fb8;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a130u: goto label_13a130;
        case 0x13a1b4u: goto label_13a1b4;
        case 0x13a2a8u: goto label_13a2a8;
        case 0x13a32cu: goto label_13a32c;
        case 0x13a36cu: goto label_13a36c;
        case 0x13a3d4u: goto label_13a3d4;
        case 0x13a40cu: goto label_13a40c;
        case 0x13a480u: goto label_13a480;
        case 0x13a4d0u: goto label_13a4d0;
        case 0x13a500u: goto label_13a500;
        case 0x13a54cu: goto label_13a54c;
        case 0x13a578u: goto label_13a578;
        case 0x13a62cu: goto label_13a62c;
        case 0x13a63cu: goto label_13a63c;
        case 0x13a670u: goto label_13a670;
        case 0x13a684u: goto label_13a684;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a918u: goto label_13a918;
        case 0x13a9d4u: goto label_13a9d4;
        case 0x13aa90u: goto label_13aa90;
        case 0x13abc4u: goto label_13abc4;
        case 0x13ac18u: goto label_13ac18;
        case 0x13ac2cu: goto label_13ac2c;
        case 0x13ac88u: goto label_13ac88;
        case 0x13adccu: goto label_13adcc;
        default: break;
    }

    ctx->pc = 0x137130u;

    // 0x137130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x137134: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x137138: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x137138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13713c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x137140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x137144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13714c: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x13714cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x137150: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x137150u;
    {
        const bool branch_taken_0x137150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137150u;
            // 0x137154: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137150) {
            ctx->pc = 0x137180u;
            goto label_137180;
        }
    }
    ctx->pc = 0x137158u;
    // 0x137158: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x137158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13715c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13715cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x137160: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x137160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x137164: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x137168: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x137168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13716c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x137170: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x137170u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x137174: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x137174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x137178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x137178u;
    {
        const bool branch_taken_0x137178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137178u;
            // 0x13717c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137178) {
            ctx->pc = 0x1371A8u;
            goto label_1371a8;
        }
    }
    ctx->pc = 0x137180u;
label_137180:
    // 0x137180: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x137184: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x137184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x137188: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x137188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13718c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x137190: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x137190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x137194: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x137194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x137198: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x13719c: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1371a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1371a4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1371a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1371a8:
    // 0x1371a8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1371a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1371ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1371acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1371b0: 0x2484db52  addiu       $a0, $a0, -0x24AE
    ctx->pc = 0x1371b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957906));
    // 0x1371b4: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1371b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1371b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1371bc: 0x668021  addu        $s0, $v1, $a2
    ctx->pc = 0x1371bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1371c0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1371c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1371c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1371c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1371c8: 0xa2030151  sb          $v1, 0x151($s0)
    ctx->pc = 0x1371c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x1371cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1371ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371d0: 0xa2030150  sb          $v1, 0x150($s0)
    ctx->pc = 0x1371d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x1371d4: 0xa2030171  sb          $v1, 0x171($s0)
    ctx->pc = 0x1371d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 369), (uint8_t)GPR_U32(ctx, 3));
    // 0x1371d8: 0xa2030170  sb          $v1, 0x170($s0)
    ctx->pc = 0x1371d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x1371dc: 0xa2030191  sb          $v1, 0x191($s0)
    ctx->pc = 0x1371dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x1371e0: 0xa2030190  sb          $v1, 0x190($s0)
    ctx->pc = 0x1371e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 3));
label_1371e4:
    // 0x1371e4: 0xa200014c  sb          $zero, 0x14C($s0)
    ctx->pc = 0x1371e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x1371e8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1371E8u;
    {
        const bool branch_taken_0x1371e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371E8u;
            // 0x1371ec: 0x2613014c  addiu       $s3, $s0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371e8) {
            ctx->pc = 0x137200u;
            goto label_137200;
        }
    }
    ctx->pc = 0x1371F0u;
    // 0x1371f0: 0xa2720004  sb          $s2, 0x4($s3)
    ctx->pc = 0x1371f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 18));
    // 0x1371f4: 0xa2600005  sb          $zero, 0x5($s3)
    ctx->pc = 0x1371f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1371f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1371F8u;
    {
        const bool branch_taken_0x1371f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371F8u;
            // 0x1371fc: 0xa2600006  sb          $zero, 0x6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371f8) {
            ctx->pc = 0x137228u;
            goto label_137228;
        }
    }
    ctx->pc = 0x137200u;
label_137200:
    // 0x137200: 0xa2720004  sb          $s2, 0x4($s3)
    ctx->pc = 0x137200u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 18));
    // 0x137204: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x137204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x137208: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13720c: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x13720Cu;
    SET_GPR_U32(ctx, 31, 0x137214u);
    ctx->pc = 0x137210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13720Cu;
            // 0x137210: 0xa2620005  sb          $v0, 0x5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (runtime->hasFunction(0x13B150u)) {
        auto targetFn = runtime->lookupFunction(0x13B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137214u; }
        if (ctx->pc != 0x137214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B150_0x13b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137214u; }
        if (ctx->pc != 0x137214u) { return; }
    }
    ctx->pc = 0x137214u;
label_137214:
    // 0x137214: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x137214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137218: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x137218u;
    SET_GPR_U32(ctx, 31, 0x137220u);
    ctx->pc = 0x13721Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137218u;
            // 0x13721c: 0x324400ff  andi        $a0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (runtime->hasFunction(0x13B010u)) {
        auto targetFn = runtime->lookupFunction(0x13B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137220u; }
        if (ctx->pc != 0x137220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B010_0x13b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137220u; }
        if (ctx->pc != 0x137220u) { return; }
    }
    ctx->pc = 0x137220u;
label_137220:
    // 0x137220: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x137220u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x137224: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x137224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
label_137228:
    // 0x137228: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13722c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x13722cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x137230: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x137230u;
    {
        const bool branch_taken_0x137230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137230u;
            // 0x137234: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137230) {
            ctx->pc = 0x1371E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1371e4;
        }
    }
    ctx->pc = 0x137238u;
    // 0x137238: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13723c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13723cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13724c: 0x3e00008  jr          $ra
    ctx->pc = 0x13724Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13724Cu;
            // 0x137250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137254u;
    // 0x137254: 0x0  nop
    ctx->pc = 0x137254u;
    // NOP
    // 0x137258: 0x0  nop
    ctx->pc = 0x137258u;
    // NOP
    // 0x13725c: 0x0  nop
    ctx->pc = 0x13725cu;
    // NOP
label_137260:
    // 0x137260: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x137260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x137264: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x137268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13726c: 0x24e7dac8  addiu       $a3, $a3, -0x2538
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957768));
    // 0x137270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x137274: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x137278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13727c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_137284:
    // 0x137284: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x137284u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x137288: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x137288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13728c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x13728cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137290: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x137294: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x137294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x137298: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x137298u;
    {
        const bool branch_taken_0x137298 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x137298) {
            ctx->pc = 0x137284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137284;
        }
    }
    ctx->pc = 0x1372A0u;
    // 0x1372a0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x1372a4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1372a8: 0x2508dae0  addiu       $t0, $t0, -0x2520
    ctx->pc = 0x1372a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957792));
    // 0x1372ac: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1372acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1372b0:
    // 0x1372b0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1372b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1372b8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1372b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1372bc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1372bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1372c0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1372c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1372c4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1372c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1372c8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1372C8u;
    {
        const bool branch_taken_0x1372c8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1372CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372C8u;
            // 0x1372cc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372c8) {
            ctx->pc = 0x1372B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1372b0;
        }
    }
    ctx->pc = 0x1372D0u;
    // 0x1372d0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1372d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x1372d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1372d8: 0x2508db30  addiu       $t0, $t0, -0x24D0
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957872));
    // 0x1372dc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1372dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1372e0:
    // 0x1372e0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1372e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1372e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1372e8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1372ec: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1372ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1372f0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1372f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1372f4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1372f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1372f8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1372F8u;
    {
        const bool branch_taken_0x1372f8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1372FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372F8u;
            // 0x1372fc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372f8) {
            ctx->pc = 0x1372E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1372e0;
        }
    }
    ctx->pc = 0x137300u;
    // 0x137300: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x137300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137304: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x137308: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13730c: 0x508300fa  beql        $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x13730Cu;
    {
        const bool branch_taken_0x13730c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13730c) {
            ctx->pc = 0x137310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13730Cu;
            // 0x137310: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1376F8u;
            goto label_1376f8;
        }
    }
    ctx->pc = 0x137314u;
    // 0x137314: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137318: 0x508300f0  beql        $a0, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x137318u;
    {
        const bool branch_taken_0x137318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137318) {
            ctx->pc = 0x13731Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137318u;
            // 0x13731c: 0x92040008  lbu         $a0, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1376DCu;
            goto label_1376dc;
        }
    }
    ctx->pc = 0x137320u;
    // 0x137320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137324: 0x50830079  beql        $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x137324u;
    {
        const bool branch_taken_0x137324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137324) {
            ctx->pc = 0x137328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137324u;
            // 0x137328: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13750Cu;
            goto label_13750c;
        }
    }
    ctx->pc = 0x13732Cu;
    // 0x13732c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137330: 0x50860016  beql        $a0, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x137330u;
    {
        const bool branch_taken_0x137330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x137330) {
            ctx->pc = 0x137334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137330u;
            // 0x137334: 0x92080000  lbu         $t0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13738Cu;
            goto label_13738c;
        }
    }
    ctx->pc = 0x137338u;
    // 0x137338: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x137338u;
    {
        const bool branch_taken_0x137338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137338) {
            ctx->pc = 0x13733Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137338u;
            // 0x13733c: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137348u;
            goto label_137348;
        }
    }
    ctx->pc = 0x137340u;
    // 0x137340: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x137340u;
    {
        const bool branch_taken_0x137340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137340) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x137348u;
label_137348:
    // 0x137348: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x137348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13734c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137350: 0x24845c28  addiu       $a0, $a0, 0x5C28
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23592));
    // 0x137354: 0x24635c48  addiu       $v1, $v1, 0x5C48
    ctx->pc = 0x137354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23624));
    // 0x137358: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13735c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x137360: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137364: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137368: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x137368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13736c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x13736cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137370: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13737c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x137380: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x137380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x137384: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x137384u;
    {
        const bool branch_taken_0x137384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137384u;
            // 0x137388: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137384) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x13738Cu;
label_13738c:
    // 0x13738c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x137390: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x137394: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137398: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x13739c: 0x24a55c28  addiu       $a1, $a1, 0x5C28
    ctx->pc = 0x13739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23592));
    // 0x1373a0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1373a4: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x1373a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x1373a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1373a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1373ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1373b0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1373b4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1373b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1373b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1373b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1373bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1373bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1373c0: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x1373c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1373c4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1373C4u;
    {
        const bool branch_taken_0x1373c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1373C4u;
            // 0x1373c8: 0x8cc40010  lw          $a0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373c4) {
            ctx->pc = 0x137410u;
            goto label_137410;
        }
    }
    ctx->pc = 0x1373CCu;
    // 0x1373cc: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1373ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1373d0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1373d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1373d4: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x1373d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1373d8: 0x24a5db55  addiu       $a1, $a1, -0x24AB
    ctx->pc = 0x1373d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957909));
    // 0x1373dc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1373dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1373e0: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1373e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1373e4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1373e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1373e8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1373e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1373ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1373f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1373f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1373f4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1373f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1373f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1373f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1373fc: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x1373fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x137400: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x137404: 0x906300dd  lbu         $v1, 0xDD($v1)
    ctx->pc = 0x137404u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 221)));
    // 0x137408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137408u;
    {
        const bool branch_taken_0x137408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137408u;
            // 0x13740c: 0xa0e30001  sb          $v1, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137408) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137410u;
label_137410:
    // 0x137410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x137410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137414: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x137414u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_137418:
    // 0x137418: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x137418u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13741c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13741cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x137420: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x137420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x137424: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x137424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x137428: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x137428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13742c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13742cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x137430: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137434: 0x660c0  sll         $t4, $a2, 3
    ctx->pc = 0x137434u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x137438: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x137438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x13743c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13743cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137440: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x137440u;
    {
        const bool branch_taken_0x137440 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x137444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137440u;
            // 0x137444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137440) {
            ctx->pc = 0x1374F0u;
            goto label_1374f0;
        }
    }
    ctx->pc = 0x137448u;
    // 0x137448: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x137448u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x13744c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13744cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137454: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137458: 0x256bdb50  addiu       $t3, $t3, -0x24B0
    ctx->pc = 0x137458u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957904));
    // 0x13745c: 0x24635c30  addiu       $v1, $v1, 0x5C30
    ctx->pc = 0x13745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23600));
    // 0x137460: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x137460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137464:
    // 0x137464: 0x16c4021  addu        $t0, $t3, $t4
    ctx->pc = 0x137464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x137468: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x137468u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13746c: 0x9105000a  lbu         $a1, 0xA($t0)
    ctx->pc = 0x13746cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x137470: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x137470u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x137474: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x137478: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x137478u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13747c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x13747cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x137480: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x137480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x137484: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x137484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x137488: 0x14aa000b  bne         $a1, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x137488u;
    {
        const bool branch_taken_0x137488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x13748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137488u;
            // 0x13748c: 0x8d080010  lw          $t0, 0x10($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137488) {
            ctx->pc = 0x1374B8u;
            goto label_1374b8;
        }
    }
    ctx->pc = 0x137490u;
    // 0x137490: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x137490u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x137494: 0x14a70004  bne         $a1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x137494u;
    {
        const bool branch_taken_0x137494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x137494) {
            ctx->pc = 0x1374A8u;
            goto label_1374a8;
        }
    }
    ctx->pc = 0x13749Cu;
    // 0x13749c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13749Cu;
    {
        const bool branch_taken_0x13749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13749Cu;
            // 0x1374a0: 0xad090008  sw          $t1, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13749c) {
            ctx->pc = 0x1374C0u;
            goto label_1374c0;
        }
    }
    ctx->pc = 0x1374A4u;
    // 0x1374a4: 0x0  nop
    ctx->pc = 0x1374a4u;
    // NOP
label_1374a8:
    // 0x1374a8: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x1374a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1374ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1374ACu;
    {
        const bool branch_taken_0x1374ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374ACu;
            // 0x1374b0: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374ac) {
            ctx->pc = 0x1374C0u;
            goto label_1374c0;
        }
    }
    ctx->pc = 0x1374B4u;
    // 0x1374b4: 0x0  nop
    ctx->pc = 0x1374b4u;
    // NOP
label_1374b8:
    // 0x1374b8: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1374bc: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x1374bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_1374c0:
    // 0x1374c0: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1374c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1374c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1374c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1374c8: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1374cc: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1374ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1374d0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1374d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1374d4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1374d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1374d8: 0x860c0  sll         $t4, $t0, 3
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1374dc: 0x16c4021  addu        $t0, $t3, $t4
    ctx->pc = 0x1374dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1374e0: 0x91080005  lbu         $t0, 0x5($t0)
    ctx->pc = 0x1374e0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x1374e4: 0xe8402a  slt         $t0, $a3, $t0
    ctx->pc = 0x1374e4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1374e8: 0x1500ffde  bnez        $t0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1374E8u;
    {
        const bool branch_taken_0x1374e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1374ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374E8u;
            // 0x1374ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374e8) {
            ctx->pc = 0x137464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137464;
        }
    }
    ctx->pc = 0x1374F0u;
label_1374f0:
    // 0x1374f0: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x1374f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1374f4: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1374F4u;
    {
        const bool branch_taken_0x1374f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374f4) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x1374FCu;
    // 0x1374fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1374fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137500: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x137500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x137504: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x137504u;
    {
        const bool branch_taken_0x137504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137504u;
            // 0x137508: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137504) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x13750Cu;
label_13750c:
    // 0x13750c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x137510: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x137510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x137514: 0x24c65c48  addiu       $a2, $a2, 0x5C48
    ctx->pc = 0x137514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23624));
    // 0x137518: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x137518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13751c: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x13751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x137520: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x137520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137524: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x137524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137528: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x137528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13752c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x137530: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x137530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137534: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x137534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x137538: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x137538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13753c: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x13753cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x137540: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x137540u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137544: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x137544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x137548: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x137548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13754c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137550: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137554: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x137554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x137558: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x137558u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13755c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x13755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x137560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137564: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x137564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13756c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13756cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137574: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x137574u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137578: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x137578u;
    {
        const bool branch_taken_0x137578 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137578u;
            // 0x13757c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137578) {
            ctx->pc = 0x1375F8u;
            goto label_1375f8;
        }
    }
    ctx->pc = 0x137580u;
    // 0x137580: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x137580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137584:
    // 0x137584: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x137584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x137588: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13758c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x13758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x137590: 0x24635c30  addiu       $v1, $v1, 0x5C30
    ctx->pc = 0x137590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23600));
    // 0x137594: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x137598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13759c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1375a0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1375a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1375a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1375a8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1375ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1375acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1375b0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x1375b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1375b4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1375b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1375b8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x1375B8u;
    SET_GPR_U32(ctx, 31, 0x1375C0u);
    ctx->pc = 0x1375BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1375B8u;
            // 0x1375bc: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375C0u; }
        if (ctx->pc != 0x1375C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375C0u; }
        if (ctx->pc != 0x1375C0u) { return; }
    }
    ctx->pc = 0x1375C0u;
label_1375c0:
    // 0x1375c0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1375c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1375c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1375c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1375c8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1375cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1375d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1375d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1375d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1375d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1375d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1375dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1375e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1375e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1375e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1375e8: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x1375e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1375ec: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1375ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1375f0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1375F0u;
    {
        const bool branch_taken_0x1375f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1375F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375F0u;
            // 0x1375f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375f0) {
            ctx->pc = 0x137584u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137584;
        }
    }
    ctx->pc = 0x1375F8u;
label_1375f8:
    // 0x1375f8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1375f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1375fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x137600: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137604: 0x24425c28  addiu       $v0, $v0, 0x5C28
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23592));
    // 0x137608: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x137608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13760c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x137610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137614: 0x244258a0  addiu       $v0, $v0, 0x58A0
    ctx->pc = 0x137614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22688));
    // 0x137618: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x137618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13761c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137620: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x137620u;
    {
        const bool branch_taken_0x137620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137620u;
            // 0x137624: 0x8c710010  lw          $s1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137620) {
            ctx->pc = 0x13766Cu;
            goto label_13766c;
        }
    }
    ctx->pc = 0x137628u;
    // 0x137628: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x137628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13762c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x13762cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x137630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137634: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x137634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x137638: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13763c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137640: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137644: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x137644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x137648: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x137648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13764c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137658: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x137658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13765c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x13765cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x137660: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x137660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137664: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137664u;
    SET_GPR_U32(ctx, 31, 0x13766Cu);
    ctx->pc = 0x137668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137664u;
            // 0x137668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13766Cu; }
        if (ctx->pc != 0x13766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13766Cu; }
        if (ctx->pc != 0x13766Cu) { return; }
    }
    ctx->pc = 0x13766Cu;
label_13766c:
    // 0x13766c: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x13766cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137670: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x137674: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x137678: 0x2484db55  addiu       $a0, $a0, -0x24AB
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957909));
    // 0x13767c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137680: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x137680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x137684: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x137684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x137688: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13768c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x13768cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137690: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x137694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137698: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13769c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1376a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1376a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1376a4: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1376a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1376a8: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1376ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1376b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1376b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1376b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1376b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1376bc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1376c0: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1376c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1376c4: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x1376c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1376c8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1376C8u;
    SET_GPR_U32(ctx, 31, 0x1376D0u);
    ctx->pc = 0x1376CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1376C8u;
            // 0x1376cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376D0u; }
        if (ctx->pc != 0x1376D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376D0u; }
        if (ctx->pc != 0x1376D0u) { return; }
    }
    ctx->pc = 0x1376D0u;
label_1376d0:
    // 0x1376d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1376d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1376D4u;
    {
        const bool branch_taken_0x1376d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376D4u;
            // 0x1376d8: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376d4) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x1376DCu;
label_1376dc:
    // 0x1376dc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1376DCu;
    SET_GPR_U32(ctx, 31, 0x1376E4u);
    ctx->pc = 0x1376E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1376DCu;
            // 0x1376e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376E4u; }
        if (ctx->pc != 0x1376E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376E4u; }
        if (ctx->pc != 0x1376E4u) { return; }
    }
    ctx->pc = 0x1376E4u;
label_1376e4:
    // 0x1376e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376E4u;
    {
        const bool branch_taken_0x1376e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376e4) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x1376ECu;
    // 0x1376ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1376f0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1376f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1376f4:
    // 0x1376f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1376f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1376f8:
    // 0x1376f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1376f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1376fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1376fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137704: 0x3e00008  jr          $ra
    ctx->pc = 0x137704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137704u;
            // 0x137708: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13770Cu;
    // 0x13770c: 0x0  nop
    ctx->pc = 0x13770cu;
    // NOP
label_137710:
    // 0x137710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137714: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x137718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13771c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x137720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x137724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13772c: 0xc460db80  lwc1        $f0, -0x2480($v1)
    ctx->pc = 0x13772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137730: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x137730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137734: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137738: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137738u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13773c: 0xc462db84  lwc1        $f2, -0x247C($v1)
    ctx->pc = 0x13773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137740: 0x82260002  lb          $a2, 0x2($s1)
    ctx->pc = 0x137740u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137744: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x137744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x137748: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x137748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13774c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137750: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x137754: 0xc461db88  lwc1        $f1, -0x2478($v1)
    ctx->pc = 0x137754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137758: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x137758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13775c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x13775cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x137760: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x137764: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x137764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x137768: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13776c: 0xc460db8c  lwc1        $f0, -0x2474($v1)
    ctx->pc = 0x13776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137770: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x137770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x137774: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137778: 0xc461db90  lwc1        $f1, -0x2470($v1)
    ctx->pc = 0x137778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13777c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x13777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x137780: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137784: 0xc460db94  lwc1        $f0, -0x246C($v1)
    ctx->pc = 0x137784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137788: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x137788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13778c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13778cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x137790: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x137790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x137794: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x137794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x137798: 0x4c000fa  bltz        $a2, . + 4 + (0xFA << 2)
    ctx->pc = 0x137798u;
    {
        const bool branch_taken_0x137798 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x13779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137798u;
            // 0x13779c: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137798) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x1377A0u;
    // 0x1377a0: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x1377a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1377a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1377a8: 0x146500bd  bne         $v1, $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1377A8u;
    {
        const bool branch_taken_0x1377a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1377a8) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x1377B0u;
    // 0x1377b0: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x1377b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1377b4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1377b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1377b8: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1377B8u;
    {
        const bool branch_taken_0x1377b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377b8) {
            ctx->pc = 0x137A24u;
            goto label_137a24;
        }
    }
    ctx->pc = 0x1377C0u;
    // 0x1377c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1377c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1377c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1377c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1377c8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1377c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1377cc: 0x54650024  bnel        $v1, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1377CCu;
    {
        const bool branch_taken_0x1377cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1377cc) {
            ctx->pc = 0x1377D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1377CCu;
            // 0x1377d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137860u;
            goto label_137860;
        }
    }
    ctx->pc = 0x1377D4u;
    // 0x1377d4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1377d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1377d8: 0x90639748  lbu         $v1, -0x68B8($v1)
    ctx->pc = 0x1377d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x1377dc: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1377DCu;
    {
        const bool branch_taken_0x1377dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1377dc) {
            ctx->pc = 0x1377E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1377DCu;
            // 0x1377e0: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x137808u;
            goto label_137808;
        }
    }
    ctx->pc = 0x1377E4u;
    // 0x1377e4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x1377E4u;
    SET_GPR_U32(ctx, 31, 0x1377ECu);
    ctx->pc = 0x1377E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1377E4u;
            // 0x1377e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377ECu; }
        if (ctx->pc != 0x1377ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377ECu; }
        if (ctx->pc != 0x1377ECu) { return; }
    }
    ctx->pc = 0x1377ECu;
label_1377ec:
    // 0x1377ec: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1377ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1377f0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1377f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1377f4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x1377F4u;
    SET_GPR_U32(ctx, 31, 0x1377FCu);
    ctx->pc = 0x1377F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1377F4u;
            // 0x1377f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377FCu; }
        if (ctx->pc != 0x1377FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1377FCu; }
        if (ctx->pc != 0x1377FCu) { return; }
    }
    ctx->pc = 0x1377FCu;
label_1377fc:
    // 0x1377fc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1377FCu;
    {
        const bool branch_taken_0x1377fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377FCu;
            // 0x137800: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377fc) {
            ctx->pc = 0x13787Cu;
            goto label_13787c;
        }
    }
    ctx->pc = 0x137804u;
    // 0x137804: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x137804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_137808:
    // 0x137808: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13780c: 0x24635c28  addiu       $v1, $v1, 0x5C28
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23592));
    // 0x137810: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x137810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137814: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x137814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x137818: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13781c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x137820: 0x80630002  lb          $v1, 0x2($v1)
    ctx->pc = 0x137820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x137824: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x137824u;
    {
        const bool branch_taken_0x137824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137824) {
            ctx->pc = 0x137828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137824u;
            // 0x137828: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137854u;
            goto label_137854;
        }
    }
    ctx->pc = 0x13782Cu;
    // 0x13782c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x13782Cu;
    SET_GPR_U32(ctx, 31, 0x137834u);
    ctx->pc = 0x137830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13782Cu;
            // 0x137830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137834u; }
        if (ctx->pc != 0x137834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137834u; }
        if (ctx->pc != 0x137834u) { return; }
    }
    ctx->pc = 0x137834u;
label_137834:
    // 0x137834: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x137834u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x137838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13783c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x13783cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137840: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x137840u;
    SET_GPR_U32(ctx, 31, 0x137848u);
    ctx->pc = 0x137844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137840u;
            // 0x137844: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137848u; }
        if (ctx->pc != 0x137848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137848u; }
        if (ctx->pc != 0x137848u) { return; }
    }
    ctx->pc = 0x137848u;
label_137848:
    // 0x137848: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x137848u;
    {
        const bool branch_taken_0x137848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137848u;
            // 0x13784c: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137848) {
            ctx->pc = 0x13787Cu;
            goto label_13787c;
        }
    }
    ctx->pc = 0x137850u;
    // 0x137850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x137850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137854:
    // 0x137854: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137854u;
    {
        const bool branch_taken_0x137854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137854u;
            // 0x137858: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137854) {
            ctx->pc = 0x13787Cu;
            goto label_13787c;
        }
    }
    ctx->pc = 0x13785Cu;
    // 0x13785c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_137860:
    // 0x137860: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x137860u;
    SET_GPR_U32(ctx, 31, 0x137868u);
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137868u; }
        if (ctx->pc != 0x137868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137868u; }
        if (ctx->pc != 0x137868u) { return; }
    }
    ctx->pc = 0x137868u;
label_137868:
    // 0x137868: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137868u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13786c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x137870: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x137870u;
    SET_GPR_U32(ctx, 31, 0x137878u);
    ctx->pc = 0x137874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137870u;
            // 0x137874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137878u; }
        if (ctx->pc != 0x137878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137878u; }
        if (ctx->pc != 0x137878u) { return; }
    }
    ctx->pc = 0x137878u;
label_137878:
    // 0x137878: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x137878u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13787c:
    // 0x13787c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137880: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x137880u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x137884: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x137884u;
    {
        const bool branch_taken_0x137884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137884) {
            ctx->pc = 0x137888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137884u;
            // 0x137888: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x137894u;
            goto label_137894;
        }
    }
    ctx->pc = 0x13788Cu;
    // 0x13788c: 0x64130100  daddiu      $s3, $zero, 0x100
    ctx->pc = 0x13788cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x137890: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x137890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_137894:
    // 0x137894: 0x30831f00  andi        $v1, $a0, 0x1F00
    ctx->pc = 0x137894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7936);
    // 0x137898: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x137898u;
    {
        const bool branch_taken_0x137898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137898) {
            ctx->pc = 0x13789Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137898u;
            // 0x13789c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1378E4u;
            goto label_1378e4;
        }
    }
    ctx->pc = 0x1378A0u;
    // 0x1378a0: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1378a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1378a4: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x1378a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x1378a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1378a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1378acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1378b0: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x1378b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1378b4: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x1378b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1378b8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1378B8u;
    SET_GPR_U32(ctx, 31, 0x1378C0u);
    ctx->pc = 0x1378BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378B8u;
            // 0x1378bc: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378C0u; }
        if (ctx->pc != 0x1378C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378C0u; }
        if (ctx->pc != 0x1378C0u) { return; }
    }
    ctx->pc = 0x1378C0u;
label_1378c0:
    // 0x1378c0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1378c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1378c4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1378c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1378c8: 0x506000af  beql        $v1, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x1378C8u;
    {
        const bool branch_taken_0x1378c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378c8) {
            ctx->pc = 0x1378CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1378C8u;
            // 0x1378cc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137B88u;
            goto label_137b88;
        }
    }
    ctx->pc = 0x1378D0u;
    // 0x1378d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1378d4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1378d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1378d8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1378D8u;
    {
        const bool branch_taken_0x1378d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378d8) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x1378E0u;
    // 0x1378e0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1378e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1378e4:
    // 0x1378e4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1378E4u;
    {
        const bool branch_taken_0x1378e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378e4) {
            ctx->pc = 0x1378E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1378E4u;
            // 0x1378e8: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x137910u;
            goto label_137910;
        }
    }
    ctx->pc = 0x1378ECu;
    // 0x1378ec: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x1378ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1378f0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x1378f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x1378f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1378f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1378f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1378fc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1378FCu;
    SET_GPR_U32(ctx, 31, 0x137904u);
    ctx->pc = 0x137900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1378FCu;
            // 0x137900: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137904u; }
        if (ctx->pc != 0x137904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137904u; }
        if (ctx->pc != 0x137904u) { return; }
    }
    ctx->pc = 0x137904u;
label_137904:
    // 0x137904: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x137904u;
    {
        const bool branch_taken_0x137904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137904u;
            // 0x137908: 0x82230001  lb          $v1, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137904) {
            ctx->pc = 0x137994u;
            goto label_137994;
        }
    }
    ctx->pc = 0x13790Cu;
    // 0x13790c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x13790cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_137910:
    // 0x137910: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x137910u;
    {
        const bool branch_taken_0x137910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137910) {
            ctx->pc = 0x137914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137910u;
            // 0x137914: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13793Cu;
            goto label_13793c;
        }
    }
    ctx->pc = 0x137918u;
    // 0x137918: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13791c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x13791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x137920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137928: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x137928u;
    SET_GPR_U32(ctx, 31, 0x137930u);
    ctx->pc = 0x13792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137928u;
            // 0x13792c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137930u; }
        if (ctx->pc != 0x137930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137930u; }
        if (ctx->pc != 0x137930u) { return; }
    }
    ctx->pc = 0x137930u;
label_137930:
    // 0x137930: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x137930u;
    {
        const bool branch_taken_0x137930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137930) {
            ctx->pc = 0x137990u;
            goto label_137990;
        }
    }
    ctx->pc = 0x137938u;
    // 0x137938: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x137938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_13793c:
    // 0x13793c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x13793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x137940: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x137940u;
    {
        const bool branch_taken_0x137940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137940) {
            ctx->pc = 0x137990u;
            goto label_137990;
        }
    }
    ctx->pc = 0x137948u;
    // 0x137948: 0xc067c48  jal         func_19F120
    ctx->pc = 0x137948u;
    SET_GPR_U32(ctx, 31, 0x137950u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137950u; }
        if (ctx->pc != 0x137950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137950u; }
        if (ctx->pc != 0x137950u) { return; }
    }
    ctx->pc = 0x137950u;
label_137950:
    // 0x137950: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x137954: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x137954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x137958: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13795c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x13795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x137960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137968: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13796c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13796cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x137970: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x137970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x137974: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x137974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137978: 0x0  nop
    ctx->pc = 0x137978u;
    // NOP
    // 0x13797c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13797cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137984: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x137988: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x137988u;
    SET_GPR_U32(ctx, 31, 0x137990u);
    ctx->pc = 0x13798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137988u;
            // 0x13798c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137990u; }
        if (ctx->pc != 0x137990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137990u; }
        if (ctx->pc != 0x137990u) { return; }
    }
    ctx->pc = 0x137990u;
label_137990:
    // 0x137990: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_137994:
    // 0x137994: 0x463000e  bgezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x137994u;
    {
        const bool branch_taken_0x137994 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x137994) {
            ctx->pc = 0x137998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137994u;
            // 0x137998: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1379D0u;
            goto label_1379d0;
        }
    }
    ctx->pc = 0x13799Cu;
    // 0x13799c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x13799cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1379a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1379a4: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x1379a8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1379a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1379ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1379b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1379b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1379b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1379b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1379bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1379c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1379c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1379c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1379c8: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x1379c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1379cc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1379ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1379d0:
    // 0x1379d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1379d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1379d4: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x1379d8: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x1379d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1379dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1379dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1379e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1379e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1379e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1379e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1379ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1379f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1379f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1379f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379f8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1379f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1379fc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1379FCu;
    {
        const bool branch_taken_0x1379fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1379fc) {
            ctx->pc = 0x137A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1379FCu;
            // 0x137a00: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137A0Cu;
            goto label_137a0c;
        }
    }
    ctx->pc = 0x137A04u;
    // 0x137a04: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x137a04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x137a08: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137a08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_137a0c:
    // 0x137a0c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137a10: 0x82250001  lb          $a1, 0x1($s1)
    ctx->pc = 0x137a10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x137a14: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x137a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x137a18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137a1c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x137A1Cu;
    {
        const bool branch_taken_0x137a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A1Cu;
            // 0x137a20: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a1c) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137A24u;
label_137a24:
    // 0x137a24: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x137a28: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x137a2c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x137a2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x137a30: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x137A30u;
    {
        const bool branch_taken_0x137a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x137a30) {
            ctx->pc = 0x137A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137A30u;
            // 0x137a34: 0xa2250002  sb          $a1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137A7Cu;
            goto label_137a7c;
        }
    }
    ctx->pc = 0x137A38u;
    // 0x137a38: 0x10c50052  beq         $a2, $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x137A38u;
    {
        const bool branch_taken_0x137a38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x137a38) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137A40u;
    // 0x137a40: 0xc0d44a4  jal         func_351290
    ctx->pc = 0x137A40u;
    SET_GPR_U32(ctx, 31, 0x137A48u);
    ctx->pc = 0x351290u;
    if (runtime->hasFunction(0x351290u)) {
        auto targetFn = runtime->lookupFunction(0x351290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A48u; }
        if (ctx->pc != 0x137A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351290_0x351290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A48u; }
        if (ctx->pc != 0x137A48u) { return; }
    }
    ctx->pc = 0x137A48u;
label_137a48:
    // 0x137a48: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x137A48u;
    {
        const bool branch_taken_0x137a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a48) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137A50u;
    // 0x137a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137a54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137a58: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x137a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x137a5c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x137a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x137a60: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x137a60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x137a64: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x137a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x137a68: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137a68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137a6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137a70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137A70u;
    {
        const bool branch_taken_0x137a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A70u;
            // 0x137a74: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a70) {
            ctx->pc = 0x137A98u;
            goto label_137a98;
        }
    }
    ctx->pc = 0x137A78u;
    // 0x137a78: 0xa2250002  sb          $a1, 0x2($s1)
    ctx->pc = 0x137a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
label_137a7c:
    // 0x137a7c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137a80: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x137a80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x137a84: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x137a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x137a88: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x137a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x137a8c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137a8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137a94: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x137a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_137a98:
    // 0x137a98: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x137A98u;
    {
        const bool branch_taken_0x137a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a98) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137AA0u;
label_137aa0:
    // 0x137aa0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x137aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x137aa4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x137aa8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x137aa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x137aac: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137AF4u;
            goto label_137af4;
        }
    }
    ctx->pc = 0x137AB4u;
    // 0x137ab4: 0x10c50033  beq         $a2, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x137AB4u;
    {
        const bool branch_taken_0x137ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x137ab4) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137ABCu;
    // 0x137abc: 0xc0d44c0  jal         func_351300
    ctx->pc = 0x137ABCu;
    SET_GPR_U32(ctx, 31, 0x137AC4u);
    ctx->pc = 0x351300u;
    if (runtime->hasFunction(0x351300u)) {
        auto targetFn = runtime->lookupFunction(0x351300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AC4u; }
        if (ctx->pc != 0x137AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351300_0x351300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137AC4u; }
        if (ctx->pc != 0x137AC4u) { return; }
    }
    ctx->pc = 0x137AC4u;
label_137ac4:
    // 0x137ac4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x137AC4u;
    {
        const bool branch_taken_0x137ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ac4) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137ACCu;
    // 0x137acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137ad0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137ad4: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x137ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x137ad8: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x137ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x137adc: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x137adcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x137ae0: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x137ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x137ae4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137ae4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137aec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x137AECu;
    {
        const bool branch_taken_0x137aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AECu;
            // 0x137af0: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aec) {
            ctx->pc = 0x137B84u;
            goto label_137b84;
        }
    }
    ctx->pc = 0x137AF4u;
label_137af4:
    // 0x137af4: 0x54c0001b  bnel        $a2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x137AF4u;
    {
        const bool branch_taken_0x137af4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x137af4) {
            ctx->pc = 0x137AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137AF4u;
            // 0x137af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137B64u;
            goto label_137b64;
        }
    }
    ctx->pc = 0x137AFCu;
    // 0x137afc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x137b00: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x137b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x137b04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137b08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x137b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137b0c: 0x50650014  beql        $v1, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x137B0Cu;
    {
        const bool branch_taken_0x137b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x137b0c) {
            ctx->pc = 0x137B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137B0Cu;
            // 0x137b10: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137B60u;
            goto label_137b60;
        }
    }
    ctx->pc = 0x137B14u;
    // 0x137b14: 0xc067c48  jal         func_19F120
    ctx->pc = 0x137B14u;
    SET_GPR_U32(ctx, 31, 0x137B1Cu);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B1Cu; }
        if (ctx->pc != 0x137B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B1Cu; }
        if (ctx->pc != 0x137B1Cu) { return; }
    }
    ctx->pc = 0x137B1Cu;
label_137b1c:
    // 0x137b1c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x137b20: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x137b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x137b24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137b28: 0x0  nop
    ctx->pc = 0x137b28u;
    // NOP
    // 0x137b2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x137b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137b30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137b34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x137b34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137b38: 0x0  nop
    ctx->pc = 0x137b38u;
    // NOP
    // 0x137b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x137b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x137b40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x137b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x137b44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x137b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x137b48: 0x0  nop
    ctx->pc = 0x137b48u;
    // NOP
    // 0x137b4c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x137b4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x137b50: 0x1810  mfhi        $v1
    ctx->pc = 0x137b50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x137b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137B54u;
    {
        const bool branch_taken_0x137b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B54u;
            // 0x137b58: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b54) {
            ctx->pc = 0x137B60u;
            goto label_137b60;
        }
    }
    ctx->pc = 0x137B5Cu;
    // 0x137b5c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x137b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_137b60:
    // 0x137b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137b64:
    // 0x137b64: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137b68: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x137b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x137b6c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x137b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x137b70: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x137b70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x137b74: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x137b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x137b78: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x137b78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137b80: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x137b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_137b84:
    // 0x137b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_137b88:
    // 0x137b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b98: 0x3e00008  jr          $ra
    ctx->pc = 0x137B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B98u;
            // 0x137b9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137BA0u;
label_137ba0:
    // 0x137ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137ba4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x137ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137bb0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137bb4: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x137bb8: 0x508300fe  beql        $a0, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x137BB8u;
    {
        const bool branch_taken_0x137bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137bb8) {
            ctx->pc = 0x137BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137BB8u;
            // 0x137bbc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137FB4u;
            goto label_137fb4;
        }
    }
    ctx->pc = 0x137BC0u;
    // 0x137bc0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x137bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x137bc4: 0x508300ce  beql        $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x137BC4u;
    {
        const bool branch_taken_0x137bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137bc4) {
            ctx->pc = 0x137BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137BC4u;
            // 0x137bc8: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137F00u;
            goto label_137f00;
        }
    }
    ctx->pc = 0x137BCCu;
    // 0x137bcc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x137bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x137bd0: 0x108300f7  beq         $a0, $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x137BD0u;
    {
        const bool branch_taken_0x137bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137bd0) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137BD8u;
    // 0x137bd8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x137bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x137bdc: 0x5083009b  beql        $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x137BDCu;
    {
        const bool branch_taken_0x137bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137bdc) {
            ctx->pc = 0x137BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137BDCu;
            // 0x137be0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137E4Cu;
            goto label_137e4c;
        }
    }
    ctx->pc = 0x137BE4u;
    // 0x137be4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x137be8: 0x108300f1  beq         $a0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x137BE8u;
    {
        const bool branch_taken_0x137be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137be8) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137BF0u;
    // 0x137bf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x137bf4: 0x50830068  beql        $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x137BF4u;
    {
        const bool branch_taken_0x137bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137bf4) {
            ctx->pc = 0x137BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137BF4u;
            // 0x137bf8: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137D98u;
            goto label_137d98;
        }
    }
    ctx->pc = 0x137BFCu;
    // 0x137bfc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x137bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x137c00: 0x108300eb  beq         $a0, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x137C00u;
    {
        const bool branch_taken_0x137c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137c00) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137C08u;
    // 0x137c08: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x137c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x137c0c: 0x50830035  beql        $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x137C0Cu;
    {
        const bool branch_taken_0x137c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137c0c) {
            ctx->pc = 0x137C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137C0Cu;
            // 0x137c10: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137CE4u;
            goto label_137ce4;
        }
    }
    ctx->pc = 0x137C14u;
    // 0x137c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137c18: 0x108300e5  beq         $a0, $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x137C18u;
    {
        const bool branch_taken_0x137c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137c18) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137C20u;
    // 0x137c20: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x137C20u;
    {
        const bool branch_taken_0x137c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c20) {
            ctx->pc = 0x137C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137C20u;
            // 0x137c24: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137C30u;
            goto label_137c30;
        }
    }
    ctx->pc = 0x137C28u;
    // 0x137c28: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x137C28u;
    {
        const bool branch_taken_0x137c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c28) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137C30u;
label_137c30:
    // 0x137c30: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137C30u;
    {
        const bool branch_taken_0x137c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c30) {
            ctx->pc = 0x137C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137C30u;
            // 0x137c34: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137C8Cu;
            goto label_137c8c;
        }
    }
    ctx->pc = 0x137C38u;
    // 0x137c38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137c3c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C3Cu;
    SET_GPR_U32(ctx, 31, 0x137C44u);
    ctx->pc = 0x137C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C3Cu;
            // 0x137c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C44u; }
        if (ctx->pc != 0x137C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C44u; }
        if (ctx->pc != 0x137C44u) { return; }
    }
    ctx->pc = 0x137C44u;
label_137c44:
    // 0x137c44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137c48: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C48u;
    SET_GPR_U32(ctx, 31, 0x137C50u);
    ctx->pc = 0x137C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C48u;
            // 0x137c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C50u; }
        if (ctx->pc != 0x137C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C50u; }
        if (ctx->pc != 0x137C50u) { return; }
    }
    ctx->pc = 0x137C50u;
label_137c50:
    // 0x137c50: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137c54: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C54u;
    SET_GPR_U32(ctx, 31, 0x137C5Cu);
    ctx->pc = 0x137C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C54u;
            // 0x137c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C5Cu; }
        if (ctx->pc != 0x137C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C5Cu; }
        if (ctx->pc != 0x137C5Cu) { return; }
    }
    ctx->pc = 0x137C5Cu;
label_137c5c:
    // 0x137c5c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137c60: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C60u;
    SET_GPR_U32(ctx, 31, 0x137C68u);
    ctx->pc = 0x137C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C60u;
            // 0x137c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C68u; }
        if (ctx->pc != 0x137C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C68u; }
        if (ctx->pc != 0x137C68u) { return; }
    }
    ctx->pc = 0x137C68u;
label_137c68:
    // 0x137c68: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137c6c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C6Cu;
    SET_GPR_U32(ctx, 31, 0x137C74u);
    ctx->pc = 0x137C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C6Cu;
            // 0x137c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C74u; }
        if (ctx->pc != 0x137C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C74u; }
        if (ctx->pc != 0x137C74u) { return; }
    }
    ctx->pc = 0x137C74u;
label_137c74:
    // 0x137c74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137c7c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137C7Cu;
    SET_GPR_U32(ctx, 31, 0x137C84u);
    ctx->pc = 0x137C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C7Cu;
            // 0x137c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C84u; }
        if (ctx->pc != 0x137C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C84u; }
        if (ctx->pc != 0x137C84u) { return; }
    }
    ctx->pc = 0x137C84u;
label_137c84:
    // 0x137c84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137C84u;
    {
        const bool branch_taken_0x137c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C84u;
            // 0x137c88: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c84) {
            ctx->pc = 0x137CD8u;
            goto label_137cd8;
        }
    }
    ctx->pc = 0x137C8Cu;
label_137c8c:
    // 0x137c8c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C8Cu;
    SET_GPR_U32(ctx, 31, 0x137C94u);
    ctx->pc = 0x137C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C8Cu;
            // 0x137c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C94u; }
        if (ctx->pc != 0x137C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C94u; }
        if (ctx->pc != 0x137C94u) { return; }
    }
    ctx->pc = 0x137C94u;
label_137c94:
    // 0x137c94: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137c98: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137C98u;
    SET_GPR_U32(ctx, 31, 0x137CA0u);
    ctx->pc = 0x137C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C98u;
            // 0x137c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CA0u; }
        if (ctx->pc != 0x137CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CA0u; }
        if (ctx->pc != 0x137CA0u) { return; }
    }
    ctx->pc = 0x137CA0u;
label_137ca0:
    // 0x137ca0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137ca4: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137CA4u;
    SET_GPR_U32(ctx, 31, 0x137CACu);
    ctx->pc = 0x137CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CA4u;
            // 0x137ca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CACu; }
        if (ctx->pc != 0x137CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CACu; }
        if (ctx->pc != 0x137CACu) { return; }
    }
    ctx->pc = 0x137CACu;
label_137cac:
    // 0x137cac: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137cb0: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137CB0u;
    SET_GPR_U32(ctx, 31, 0x137CB8u);
    ctx->pc = 0x137CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CB0u;
            // 0x137cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CB8u; }
        if (ctx->pc != 0x137CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CB8u; }
        if (ctx->pc != 0x137CB8u) { return; }
    }
    ctx->pc = 0x137CB8u;
label_137cb8:
    // 0x137cb8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137cbc: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137CBCu;
    SET_GPR_U32(ctx, 31, 0x137CC4u);
    ctx->pc = 0x137CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CBCu;
            // 0x137cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CC4u; }
        if (ctx->pc != 0x137CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CC4u; }
        if (ctx->pc != 0x137CC4u) { return; }
    }
    ctx->pc = 0x137CC4u;
label_137cc4:
    // 0x137cc4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x137cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137ccc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137CCCu;
    SET_GPR_U32(ctx, 31, 0x137CD4u);
    ctx->pc = 0x137CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CCCu;
            // 0x137cd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CD4u; }
        if (ctx->pc != 0x137CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CD4u; }
        if (ctx->pc != 0x137CD4u) { return; }
    }
    ctx->pc = 0x137CD4u;
label_137cd4:
    // 0x137cd4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x137cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_137cd8:
    // 0x137cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137cdc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x137CDCu;
    {
        const bool branch_taken_0x137cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CDCu;
            // 0x137ce0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cdc) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137CE4u;
label_137ce4:
    // 0x137ce4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137CE4u;
    {
        const bool branch_taken_0x137ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ce4) {
            ctx->pc = 0x137CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137CE4u;
            // 0x137ce8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137D40u;
            goto label_137d40;
        }
    }
    ctx->pc = 0x137CECu;
    // 0x137cec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137cf0: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137CF0u;
    SET_GPR_U32(ctx, 31, 0x137CF8u);
    ctx->pc = 0x137CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CF0u;
            // 0x137cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CF8u; }
        if (ctx->pc != 0x137CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CF8u; }
        if (ctx->pc != 0x137CF8u) { return; }
    }
    ctx->pc = 0x137CF8u;
label_137cf8:
    // 0x137cf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137cfc: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137CFCu;
    SET_GPR_U32(ctx, 31, 0x137D04u);
    ctx->pc = 0x137D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CFCu;
            // 0x137d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D04u; }
        if (ctx->pc != 0x137D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D04u; }
        if (ctx->pc != 0x137D04u) { return; }
    }
    ctx->pc = 0x137D04u;
label_137d04:
    // 0x137d04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137d08: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D08u;
    SET_GPR_U32(ctx, 31, 0x137D10u);
    ctx->pc = 0x137D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D08u;
            // 0x137d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D10u; }
        if (ctx->pc != 0x137D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D10u; }
        if (ctx->pc != 0x137D10u) { return; }
    }
    ctx->pc = 0x137D10u;
label_137d10:
    // 0x137d10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137d14: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D14u;
    SET_GPR_U32(ctx, 31, 0x137D1Cu);
    ctx->pc = 0x137D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D14u;
            // 0x137d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D1Cu; }
        if (ctx->pc != 0x137D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D1Cu; }
        if (ctx->pc != 0x137D1Cu) { return; }
    }
    ctx->pc = 0x137D1Cu;
label_137d1c:
    // 0x137d1c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137d20: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D20u;
    SET_GPR_U32(ctx, 31, 0x137D28u);
    ctx->pc = 0x137D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D20u;
            // 0x137d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D28u; }
        if (ctx->pc != 0x137D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D28u; }
        if (ctx->pc != 0x137D28u) { return; }
    }
    ctx->pc = 0x137D28u;
label_137d28:
    // 0x137d28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d30: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137D30u;
    SET_GPR_U32(ctx, 31, 0x137D38u);
    ctx->pc = 0x137D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D30u;
            // 0x137d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D38u; }
        if (ctx->pc != 0x137D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D38u; }
        if (ctx->pc != 0x137D38u) { return; }
    }
    ctx->pc = 0x137D38u;
label_137d38:
    // 0x137d38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137D38u;
    {
        const bool branch_taken_0x137d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D38u;
            // 0x137d3c: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d38) {
            ctx->pc = 0x137D8Cu;
            goto label_137d8c;
        }
    }
    ctx->pc = 0x137D40u;
label_137d40:
    // 0x137d40: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D40u;
    SET_GPR_U32(ctx, 31, 0x137D48u);
    ctx->pc = 0x137D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D40u;
            // 0x137d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D48u; }
        if (ctx->pc != 0x137D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D48u; }
        if (ctx->pc != 0x137D48u) { return; }
    }
    ctx->pc = 0x137D48u;
label_137d48:
    // 0x137d48: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137d4c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D4Cu;
    SET_GPR_U32(ctx, 31, 0x137D54u);
    ctx->pc = 0x137D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D4Cu;
            // 0x137d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D54u; }
        if (ctx->pc != 0x137D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D54u; }
        if (ctx->pc != 0x137D54u) { return; }
    }
    ctx->pc = 0x137D54u;
label_137d54:
    // 0x137d54: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137d58: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D58u;
    SET_GPR_U32(ctx, 31, 0x137D60u);
    ctx->pc = 0x137D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D58u;
            // 0x137d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D60u; }
        if (ctx->pc != 0x137D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D60u; }
        if (ctx->pc != 0x137D60u) { return; }
    }
    ctx->pc = 0x137D60u;
label_137d60:
    // 0x137d60: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137d64: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D64u;
    SET_GPR_U32(ctx, 31, 0x137D6Cu);
    ctx->pc = 0x137D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D64u;
            // 0x137d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D6Cu; }
        if (ctx->pc != 0x137D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D6Cu; }
        if (ctx->pc != 0x137D6Cu) { return; }
    }
    ctx->pc = 0x137D6Cu;
label_137d6c:
    // 0x137d6c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137d70: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137D70u;
    SET_GPR_U32(ctx, 31, 0x137D78u);
    ctx->pc = 0x137D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D70u;
            // 0x137d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D78u; }
        if (ctx->pc != 0x137D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D78u; }
        if (ctx->pc != 0x137D78u) { return; }
    }
    ctx->pc = 0x137D78u;
label_137d78:
    // 0x137d78: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d80: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137D80u;
    SET_GPR_U32(ctx, 31, 0x137D88u);
    ctx->pc = 0x137D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D80u;
            // 0x137d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D88u; }
        if (ctx->pc != 0x137D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D88u; }
        if (ctx->pc != 0x137D88u) { return; }
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x137d88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_137d8c:
    // 0x137d8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137d90: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x137D90u;
    {
        const bool branch_taken_0x137d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D90u;
            // 0x137d94: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d90) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137D98u;
label_137d98:
    // 0x137d98: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137D98u;
    {
        const bool branch_taken_0x137d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d98) {
            ctx->pc = 0x137D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137D98u;
            // 0x137d9c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137DF4u;
            goto label_137df4;
        }
    }
    ctx->pc = 0x137DA0u;
    // 0x137da0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137da4: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DA4u;
    SET_GPR_U32(ctx, 31, 0x137DACu);
    ctx->pc = 0x137DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DA4u;
            // 0x137da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DACu; }
        if (ctx->pc != 0x137DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DACu; }
        if (ctx->pc != 0x137DACu) { return; }
    }
    ctx->pc = 0x137DACu;
label_137dac:
    // 0x137dac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137db0: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DB0u;
    SET_GPR_U32(ctx, 31, 0x137DB8u);
    ctx->pc = 0x137DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DB0u;
            // 0x137db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DB8u; }
        if (ctx->pc != 0x137DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DB8u; }
        if (ctx->pc != 0x137DB8u) { return; }
    }
    ctx->pc = 0x137DB8u;
label_137db8:
    // 0x137db8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137dbc: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DBCu;
    SET_GPR_U32(ctx, 31, 0x137DC4u);
    ctx->pc = 0x137DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DBCu;
            // 0x137dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DC4u; }
        if (ctx->pc != 0x137DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DC4u; }
        if (ctx->pc != 0x137DC4u) { return; }
    }
    ctx->pc = 0x137DC4u;
label_137dc4:
    // 0x137dc4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137dc8: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DC8u;
    SET_GPR_U32(ctx, 31, 0x137DD0u);
    ctx->pc = 0x137DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DC8u;
            // 0x137dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DD0u; }
        if (ctx->pc != 0x137DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DD0u; }
        if (ctx->pc != 0x137DD0u) { return; }
    }
    ctx->pc = 0x137DD0u;
label_137dd0:
    // 0x137dd0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137dd4: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DD4u;
    SET_GPR_U32(ctx, 31, 0x137DDCu);
    ctx->pc = 0x137DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DD4u;
            // 0x137dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DDCu; }
        if (ctx->pc != 0x137DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DDCu; }
        if (ctx->pc != 0x137DDCu) { return; }
    }
    ctx->pc = 0x137DDCu;
label_137ddc:
    // 0x137ddc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137de4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137DE4u;
    SET_GPR_U32(ctx, 31, 0x137DECu);
    ctx->pc = 0x137DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DE4u;
            // 0x137de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DECu; }
        if (ctx->pc != 0x137DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DECu; }
        if (ctx->pc != 0x137DECu) { return; }
    }
    ctx->pc = 0x137DECu;
label_137dec:
    // 0x137dec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137DECu;
    {
        const bool branch_taken_0x137dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DECu;
            // 0x137df0: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dec) {
            ctx->pc = 0x137E40u;
            goto label_137e40;
        }
    }
    ctx->pc = 0x137DF4u;
label_137df4:
    // 0x137df4: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137DF4u;
    SET_GPR_U32(ctx, 31, 0x137DFCu);
    ctx->pc = 0x137DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DF4u;
            // 0x137df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DFCu; }
        if (ctx->pc != 0x137DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DFCu; }
        if (ctx->pc != 0x137DFCu) { return; }
    }
    ctx->pc = 0x137DFCu;
label_137dfc:
    // 0x137dfc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137e00: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E00u;
    SET_GPR_U32(ctx, 31, 0x137E08u);
    ctx->pc = 0x137E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E00u;
            // 0x137e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E08u; }
        if (ctx->pc != 0x137E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E08u; }
        if (ctx->pc != 0x137E08u) { return; }
    }
    ctx->pc = 0x137E08u;
label_137e08:
    // 0x137e08: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137e0c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E0Cu;
    SET_GPR_U32(ctx, 31, 0x137E14u);
    ctx->pc = 0x137E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E0Cu;
            // 0x137e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E14u; }
        if (ctx->pc != 0x137E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E14u; }
        if (ctx->pc != 0x137E14u) { return; }
    }
    ctx->pc = 0x137E14u;
label_137e14:
    // 0x137e14: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137e18: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E18u;
    SET_GPR_U32(ctx, 31, 0x137E20u);
    ctx->pc = 0x137E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E18u;
            // 0x137e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E20u; }
        if (ctx->pc != 0x137E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E20u; }
        if (ctx->pc != 0x137E20u) { return; }
    }
    ctx->pc = 0x137E20u;
label_137e20:
    // 0x137e20: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137e24: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E24u;
    SET_GPR_U32(ctx, 31, 0x137E2Cu);
    ctx->pc = 0x137E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E24u;
            // 0x137e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E2Cu; }
        if (ctx->pc != 0x137E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E2Cu; }
        if (ctx->pc != 0x137E2Cu) { return; }
    }
    ctx->pc = 0x137E2Cu;
label_137e2c:
    // 0x137e2c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137e30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137e34: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137E34u;
    SET_GPR_U32(ctx, 31, 0x137E3Cu);
    ctx->pc = 0x137E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E34u;
            // 0x137e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E3Cu; }
        if (ctx->pc != 0x137E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E3Cu; }
        if (ctx->pc != 0x137E3Cu) { return; }
    }
    ctx->pc = 0x137E3Cu;
label_137e3c:
    // 0x137e3c: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_137e40:
    // 0x137e40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137e44: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x137E44u;
    {
        const bool branch_taken_0x137e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E44u;
            // 0x137e48: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e44) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137E4Cu;
label_137e4c:
    // 0x137e4c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137E4Cu;
    {
        const bool branch_taken_0x137e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e4c) {
            ctx->pc = 0x137E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137E4Cu;
            // 0x137e50: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137E54u;
    // 0x137e54: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137e58: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E58u;
    SET_GPR_U32(ctx, 31, 0x137E60u);
    ctx->pc = 0x137E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E58u;
            // 0x137e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E60u; }
        if (ctx->pc != 0x137E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E60u; }
        if (ctx->pc != 0x137E60u) { return; }
    }
    ctx->pc = 0x137E60u;
label_137e60:
    // 0x137e60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137e64: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E64u;
    SET_GPR_U32(ctx, 31, 0x137E6Cu);
    ctx->pc = 0x137E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E64u;
            // 0x137e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E6Cu; }
        if (ctx->pc != 0x137E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E6Cu; }
        if (ctx->pc != 0x137E6Cu) { return; }
    }
    ctx->pc = 0x137E6Cu;
label_137e6c:
    // 0x137e6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137e70: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E70u;
    SET_GPR_U32(ctx, 31, 0x137E78u);
    ctx->pc = 0x137E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E70u;
            // 0x137e74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E78u; }
        if (ctx->pc != 0x137E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E78u; }
        if (ctx->pc != 0x137E78u) { return; }
    }
    ctx->pc = 0x137E78u;
label_137e78:
    // 0x137e78: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137e7c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E7Cu;
    SET_GPR_U32(ctx, 31, 0x137E84u);
    ctx->pc = 0x137E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E7Cu;
            // 0x137e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E84u; }
        if (ctx->pc != 0x137E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E84u; }
        if (ctx->pc != 0x137E84u) { return; }
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137e88: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137E88u;
    SET_GPR_U32(ctx, 31, 0x137E90u);
    ctx->pc = 0x137E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E88u;
            // 0x137e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E90u; }
        if (ctx->pc != 0x137E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E90u; }
        if (ctx->pc != 0x137E90u) { return; }
    }
    ctx->pc = 0x137E90u;
label_137e90:
    // 0x137e90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137e98: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137E98u;
    SET_GPR_U32(ctx, 31, 0x137EA0u);
    ctx->pc = 0x137E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E98u;
            // 0x137e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EA0u; }
        if (ctx->pc != 0x137EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EA0u; }
        if (ctx->pc != 0x137EA0u) { return; }
    }
    ctx->pc = 0x137EA0u;
label_137ea0:
    // 0x137ea0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137EA0u;
    {
        const bool branch_taken_0x137ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EA0u;
            // 0x137ea4: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ea0) {
            ctx->pc = 0x137EF4u;
            goto label_137ef4;
        }
    }
    ctx->pc = 0x137EA8u;
label_137ea8:
    // 0x137ea8: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137EA8u;
    SET_GPR_U32(ctx, 31, 0x137EB0u);
    ctx->pc = 0x137EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EA8u;
            // 0x137eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EB0u; }
        if (ctx->pc != 0x137EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EB0u; }
        if (ctx->pc != 0x137EB0u) { return; }
    }
    ctx->pc = 0x137EB0u;
label_137eb0:
    // 0x137eb0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137eb4: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137EB4u;
    SET_GPR_U32(ctx, 31, 0x137EBCu);
    ctx->pc = 0x137EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EB4u;
            // 0x137eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EBCu; }
        if (ctx->pc != 0x137EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EBCu; }
        if (ctx->pc != 0x137EBCu) { return; }
    }
    ctx->pc = 0x137EBCu;
label_137ebc:
    // 0x137ebc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137ec0: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137EC0u;
    SET_GPR_U32(ctx, 31, 0x137EC8u);
    ctx->pc = 0x137EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EC0u;
            // 0x137ec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    }
    ctx->pc = 0x137EC8u;
label_137ec8:
    // 0x137ec8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137ecc: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137ECCu;
    SET_GPR_U32(ctx, 31, 0x137ED4u);
    ctx->pc = 0x137ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137ECCu;
            // 0x137ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137ED4u; }
        if (ctx->pc != 0x137ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137ED4u; }
        if (ctx->pc != 0x137ED4u) { return; }
    }
    ctx->pc = 0x137ED4u;
label_137ed4:
    // 0x137ed4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137ed8: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137ED8u;
    SET_GPR_U32(ctx, 31, 0x137EE0u);
    ctx->pc = 0x137EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137ED8u;
            // 0x137edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EE0u; }
        if (ctx->pc != 0x137EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EE0u; }
        if (ctx->pc != 0x137EE0u) { return; }
    }
    ctx->pc = 0x137EE0u;
label_137ee0:
    // 0x137ee0: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137ee8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137EE8u;
    SET_GPR_U32(ctx, 31, 0x137EF0u);
    ctx->pc = 0x137EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EE8u;
            // 0x137eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF0u; }
        if (ctx->pc != 0x137EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF0u; }
        if (ctx->pc != 0x137EF0u) { return; }
    }
    ctx->pc = 0x137EF0u;
label_137ef0:
    // 0x137ef0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x137ef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_137ef4:
    // 0x137ef4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137ef8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x137EF8u;
    {
        const bool branch_taken_0x137ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EF8u;
            // 0x137efc: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ef8) {
            ctx->pc = 0x137FB0u;
            goto label_137fb0;
        }
    }
    ctx->pc = 0x137F00u;
label_137f00:
    // 0x137f00: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137F00u;
    {
        const bool branch_taken_0x137f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f00) {
            ctx->pc = 0x137F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137F00u;
            // 0x137f04: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137F08u;
    // 0x137f08: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x137f0c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F0Cu;
    SET_GPR_U32(ctx, 31, 0x137F14u);
    ctx->pc = 0x137F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F0Cu;
            // 0x137f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F14u; }
        if (ctx->pc != 0x137F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F14u; }
        if (ctx->pc != 0x137F14u) { return; }
    }
    ctx->pc = 0x137F14u;
label_137f14:
    // 0x137f14: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x137f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137f18: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F18u;
    SET_GPR_U32(ctx, 31, 0x137F20u);
    ctx->pc = 0x137F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F18u;
            // 0x137f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F20u; }
        if (ctx->pc != 0x137F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F20u; }
        if (ctx->pc != 0x137F20u) { return; }
    }
    ctx->pc = 0x137F20u;
label_137f20:
    // 0x137f20: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137f24: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F24u;
    SET_GPR_U32(ctx, 31, 0x137F2Cu);
    ctx->pc = 0x137F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F24u;
            // 0x137f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F2Cu; }
        if (ctx->pc != 0x137F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F2Cu; }
        if (ctx->pc != 0x137F2Cu) { return; }
    }
    ctx->pc = 0x137F2Cu;
label_137f2c:
    // 0x137f2c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137f30: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F30u;
    SET_GPR_U32(ctx, 31, 0x137F38u);
    ctx->pc = 0x137F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F30u;
            // 0x137f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F38u; }
        if (ctx->pc != 0x137F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F38u; }
        if (ctx->pc != 0x137F38u) { return; }
    }
    ctx->pc = 0x137F38u;
label_137f38:
    // 0x137f38: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137f3c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F3Cu;
    SET_GPR_U32(ctx, 31, 0x137F44u);
    ctx->pc = 0x137F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F3Cu;
            // 0x137f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F44u; }
        if (ctx->pc != 0x137F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F44u; }
        if (ctx->pc != 0x137F44u) { return; }
    }
    ctx->pc = 0x137F44u;
label_137f44:
    // 0x137f44: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137f4c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137F4Cu;
    SET_GPR_U32(ctx, 31, 0x137F54u);
    ctx->pc = 0x137F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F4Cu;
            // 0x137f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F54u; }
        if (ctx->pc != 0x137F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F54u; }
        if (ctx->pc != 0x137F54u) { return; }
    }
    ctx->pc = 0x137F54u;
label_137f54:
    // 0x137f54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137F54u;
    {
        const bool branch_taken_0x137f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F54u;
            // 0x137f58: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f54) {
            ctx->pc = 0x137FA8u;
            goto label_137fa8;
        }
    }
    ctx->pc = 0x137F5Cu;
label_137f5c:
    // 0x137f5c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F5Cu;
    SET_GPR_U32(ctx, 31, 0x137F64u);
    ctx->pc = 0x137F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F5Cu;
            // 0x137f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F64u; }
        if (ctx->pc != 0x137F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F64u; }
        if (ctx->pc != 0x137F64u) { return; }
    }
    ctx->pc = 0x137F64u;
label_137f64:
    // 0x137f64: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x137f68: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F68u;
    SET_GPR_U32(ctx, 31, 0x137F70u);
    ctx->pc = 0x137F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F68u;
            // 0x137f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F70u; }
        if (ctx->pc != 0x137F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F70u; }
        if (ctx->pc != 0x137F70u) { return; }
    }
    ctx->pc = 0x137F70u;
label_137f70:
    // 0x137f70: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x137f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x137f74: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F74u;
    SET_GPR_U32(ctx, 31, 0x137F7Cu);
    ctx->pc = 0x137F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F74u;
            // 0x137f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F7Cu; }
        if (ctx->pc != 0x137F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F7Cu; }
        if (ctx->pc != 0x137F7Cu) { return; }
    }
    ctx->pc = 0x137F7Cu;
label_137f7c:
    // 0x137f7c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x137f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x137f80: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F80u;
    SET_GPR_U32(ctx, 31, 0x137F88u);
    ctx->pc = 0x137F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F80u;
            // 0x137f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F88u; }
        if (ctx->pc != 0x137F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F88u; }
        if (ctx->pc != 0x137F88u) { return; }
    }
    ctx->pc = 0x137F88u;
label_137f88:
    // 0x137f88: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137f8c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x137F8Cu;
    SET_GPR_U32(ctx, 31, 0x137F94u);
    ctx->pc = 0x137F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F8Cu;
            // 0x137f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (runtime->hasFunction(0x323980u)) {
        auto targetFn = runtime->lookupFunction(0x323980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F94u; }
        if (ctx->pc != 0x137F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323980_0x323980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F94u; }
        if (ctx->pc != 0x137F94u) { return; }
    }
    ctx->pc = 0x137F94u;
label_137f94:
    // 0x137f94: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x137f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137f9c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x137F9Cu;
    SET_GPR_U32(ctx, 31, 0x137FA4u);
    ctx->pc = 0x137FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F9Cu;
            // 0x137fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FA4u; }
        if (ctx->pc != 0x137FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FA4u; }
        if (ctx->pc != 0x137FA4u) { return; }
    }
    ctx->pc = 0x137FA4u;
label_137fa4:
    // 0x137fa4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x137fa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_137fa8:
    // 0x137fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137fac: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x137facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_137fb0:
    // 0x137fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137fb4:
    // 0x137fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x137FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137FB8u;
            // 0x137fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137FC0u;
label_137fc0:
    // 0x137fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137fc4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137fd0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x137fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x137fd4: 0xc460dba0  lwc1        $f0, -0x2460($v1)
    ctx->pc = 0x137fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137fd8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x137fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x137fdc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x137fe0: 0xc481dba4  lwc1        $f1, -0x245C($a0)
    ctx->pc = 0x137fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137fe4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x137fe4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137fe8: 0xc462dba8  lwc1        $f2, -0x2458($v1)
    ctx->pc = 0x137fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137fec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x137fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x137ff0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x137ff4: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x137ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x137ff8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x137ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x137ffc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x138000: 0xc480dbac  lwc1        $f0, -0x2454($a0)
    ctx->pc = 0x138000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138004: 0xc461dbb0  lwc1        $f1, -0x2450($v1)
    ctx->pc = 0x138004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138008: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x138008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13800c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x138010: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x138014: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x138018: 0xc460dbb4  lwc1        $f0, -0x244C($v1)
    ctx->pc = 0x138018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13801c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x13801cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x138020: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138024: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x138024u;
    {
        const bool branch_taken_0x138024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x138028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138024u;
            // 0x138028: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138024) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x13802Cu;
    // 0x13802c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x138030: 0x5083001f  beql        $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x138030u;
    {
        const bool branch_taken_0x138030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138030) {
            ctx->pc = 0x138034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138030u;
            // 0x138034: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1380B0u;
            goto label_1380b0;
        }
    }
    ctx->pc = 0x138038u;
    // 0x138038: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13803c: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13803Cu;
    {
        const bool branch_taken_0x13803c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13803c) {
            ctx->pc = 0x138040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13803Cu;
            // 0x138040: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138088u;
            goto label_138088;
        }
    }
    ctx->pc = 0x138044u;
    // 0x138044: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x138044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138048: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138048u;
    {
        const bool branch_taken_0x138048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138048) {
            ctx->pc = 0x13804Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138048u;
            // 0x13804c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138060u;
            goto label_138060;
        }
    }
    ctx->pc = 0x138050u;
    // 0x138050: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x138050u;
    {
        const bool branch_taken_0x138050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138050) {
            ctx->pc = 0x138054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138050u;
            // 0x138054: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1380D8u;
            goto label_1380d8;
        }
    }
    ctx->pc = 0x138058u;
    // 0x138058: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x138058u;
    {
        const bool branch_taken_0x138058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138058) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x138060u;
label_138060:
    // 0x138060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138064: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x138068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13806c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x138070: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x138074: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x138074u;
    SET_GPR_U32(ctx, 31, 0x13807Cu);
    ctx->pc = 0x138078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138074u;
            // 0x138078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13807Cu; }
        if (ctx->pc != 0x13807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13807Cu; }
        if (ctx->pc != 0x13807Cu) { return; }
    }
    ctx->pc = 0x13807Cu;
label_13807c:
    // 0x13807c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138080: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138080u;
    {
        const bool branch_taken_0x138080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138080u;
            // 0x138084: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138080) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x138088u;
label_138088:
    // 0x138088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13808c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x138090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138094: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x138098: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13809c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13809Cu;
    SET_GPR_U32(ctx, 31, 0x1380A4u);
    ctx->pc = 0x1380A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13809Cu;
            // 0x1380a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380A4u; }
        if (ctx->pc != 0x1380A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380A4u; }
        if (ctx->pc != 0x1380A4u) { return; }
    }
    ctx->pc = 0x1380A4u;
label_1380a4:
    // 0x1380a4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1380a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1380a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1380A8u;
    {
        const bool branch_taken_0x1380a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380A8u;
            // 0x1380ac: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380a8) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x1380B0u;
label_1380b0:
    // 0x1380b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1380b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1380b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1380b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1380bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1380c0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1380c4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1380C4u;
    SET_GPR_U32(ctx, 31, 0x1380CCu);
    ctx->pc = 0x1380C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1380C4u;
            // 0x1380c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380CCu; }
        if (ctx->pc != 0x1380CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380CCu; }
        if (ctx->pc != 0x1380CCu) { return; }
    }
    ctx->pc = 0x1380CCu;
label_1380cc:
    // 0x1380cc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1380d0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1380d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1380d4:
    // 0x1380d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1380d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1380d8:
    // 0x1380d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1380d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1380dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1380DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1380E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380DCu;
            // 0x1380e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1380E4u;
    // 0x1380e4: 0x0  nop
    ctx->pc = 0x1380e4u;
    // NOP
    // 0x1380e8: 0x0  nop
    ctx->pc = 0x1380e8u;
    // NOP
    // 0x1380ec: 0x0  nop
    ctx->pc = 0x1380ecu;
    // NOP
label_1380f0:
    // 0x1380f0: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x1380f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1380f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1380f8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1380fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1380fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x138100: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x138100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
    // 0x138104: 0xafa2043c  sw          $v0, 0x43C($sp)
    ctx->pc = 0x138104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 2));
    // 0x138108: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13810c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x138110: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x138110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x138114: 0x502000a3  beql        $at, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x138114u;
    {
        const bool branch_taken_0x138114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138114) {
            ctx->pc = 0x138118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138114u;
            // 0x138118: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1383A4u;
            goto label_1383a4;
        }
    }
    ctx->pc = 0x13811Cu;
    // 0x13811c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x138120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138124: 0x2463c6b0  addiu       $v1, $v1, -0x3950
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952624));
    // 0x138128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13812c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138130: 0x400008  jr          $v0
    ctx->pc = 0x138130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138138u: goto label_138138;
            case 0x1381A0u: goto label_1381a0;
            case 0x138208u: goto label_138208;
            case 0x138270u: goto label_138270;
            case 0x1382D8u: goto label_1382d8;
            case 0x138340u: goto label_138340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138138u;
label_138138:
    // 0x138138: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x13813c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138140: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138148: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13814c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138150: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138154: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138158: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x13815c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138160: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138168: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x13816c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138170: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13817c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138188: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x13818c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x13818cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138190: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138190u;
    SET_GPR_U32(ctx, 31, 0x138198u);
    ctx->pc = 0x138194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138190u;
            // 0x138194: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138198u; }
        if (ctx->pc != 0x138198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138198u; }
        if (ctx->pc != 0x138198u) { return; }
    }
    ctx->pc = 0x138198u;
label_138198:
    // 0x138198: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x138198u;
    {
        const bool branch_taken_0x138198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138198) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x1381A0u;
label_1381a0:
    // 0x1381a0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1381a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1381a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1381a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1381a8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1381a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1381ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1381acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1381b0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1381b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1381b4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1381b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1381b8: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1381b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1381bc: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1381bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1381c0: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1381c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1381c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1381c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1381c8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1381c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1381cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1381ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1381d0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1381d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1381d4: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1381d8: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1381d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1381dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1381dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1381e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381e4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1381e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1381e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1381e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381ec: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x1381ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1381f0: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x1381f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1381f4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1381f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381f8: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1381F8u;
    SET_GPR_U32(ctx, 31, 0x138200u);
    ctx->pc = 0x1381FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1381F8u;
            // 0x1381fc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138200u; }
        if (ctx->pc != 0x138200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138200u; }
        if (ctx->pc != 0x138200u) { return; }
    }
    ctx->pc = 0x138200u;
label_138200:
    // 0x138200: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x138200u;
    {
        const bool branch_taken_0x138200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138200) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x138208u;
label_138208:
    // 0x138208: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x13820c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138210: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138218: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13821c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x13821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138220: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138224: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138228: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x13822c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138230: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138234: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138238: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x13823c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x13823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138240: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13824c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138254: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x138254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x138258: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x13825c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x13825cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138260: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138260u;
    SET_GPR_U32(ctx, 31, 0x138268u);
    ctx->pc = 0x138264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138260u;
            // 0x138264: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138268u; }
        if (ctx->pc != 0x138268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138268u; }
        if (ctx->pc != 0x138268u) { return; }
    }
    ctx->pc = 0x138268u;
label_138268:
    // 0x138268: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x138268u;
    {
        const bool branch_taken_0x138268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138268) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x138270u;
label_138270:
    // 0x138270: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138278: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13827c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13827cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138280: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138284: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138288: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13828c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138290: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138298: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13829c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13829cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1382a0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1382a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1382a4: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1382a8: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1382a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1382ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1382acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1382b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382b4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1382b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1382b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1382b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382bc: 0x240801c8  addiu       $t0, $zero, 0x1C8
    ctx->pc = 0x1382bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x1382c0: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x1382c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1382c4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1382c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382c8: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1382C8u;
    SET_GPR_U32(ctx, 31, 0x1382D0u);
    ctx->pc = 0x1382CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1382C8u;
            // 0x1382cc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1382D0u; }
        if (ctx->pc != 0x1382D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1382D0u; }
        if (ctx->pc != 0x1382D0u) { return; }
    }
    ctx->pc = 0x1382D0u;
label_1382d0:
    // 0x1382d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1382D0u;
    {
        const bool branch_taken_0x1382d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382d0) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x1382D8u;
label_1382d8:
    // 0x1382d8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1382d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1382dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1382dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1382e0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1382e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1382e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1382e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1382e8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1382ec: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1382ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1382f0: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1382f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1382f4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1382f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1382f8: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1382f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1382fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1382fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138300: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138304: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138308: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x13830c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x13830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138310: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13831c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138324: 0x24080260  addiu       $t0, $zero, 0x260
    ctx->pc = 0x138324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x138328: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x138328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x13832c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x13832cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138330: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138330u;
    SET_GPR_U32(ctx, 31, 0x138338u);
    ctx->pc = 0x138334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138330u;
            // 0x138334: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138338u; }
        if (ctx->pc != 0x138338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138338u; }
        if (ctx->pc != 0x138338u) { return; }
    }
    ctx->pc = 0x138338u;
label_138338:
    // 0x138338: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x138338u;
    {
        const bool branch_taken_0x138338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138338) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x138340u;
label_138340:
    // 0x138340: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138348: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13834c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138350: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138354: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138358: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13835c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x13835cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138360: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138368: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13836c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13836cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138370: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138374: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138378: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x13837c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138384: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13838c: 0x240802f8  addiu       $t0, $zero, 0x2F8
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    // 0x138390: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x138390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x138394: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138394u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138398: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138398u;
    SET_GPR_U32(ctx, 31, 0x1383A0u);
    ctx->pc = 0x13839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138398u;
            // 0x13839c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1383A0u; }
        if (ctx->pc != 0x1383A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1383A0u; }
        if (ctx->pc != 0x1383A0u) { return; }
    }
    ctx->pc = 0x1383A0u;
label_1383a0:
    // 0x1383a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1383a4:
    // 0x1383a4: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1383a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1383a8: 0x50200102  beql        $at, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x1383A8u;
    {
        const bool branch_taken_0x1383a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383a8) {
            ctx->pc = 0x1383ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1383A8u;
            // 0x1383ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1387B4u;
            goto label_1387b4;
        }
    }
    ctx->pc = 0x1383B0u;
    // 0x1383b0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1383b4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1383b8: 0x2463c690  addiu       $v1, $v1, -0x3970
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
    // 0x1383bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1383c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383c4: 0x400008  jr          $v0
    ctx->pc = 0x1383C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1383CCu: goto label_1383cc;
            case 0x138434u: goto label_138434;
            case 0x13849Cu: goto label_13849c;
            case 0x138504u: goto label_138504;
            case 0x13856Cu: goto label_13856c;
            case 0x1385D4u: goto label_1385d4;
            case 0x13863Cu: goto label_13863c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1383CCu;
label_1383cc:
    // 0x1383cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1383ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1383d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1383d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1383d4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1383d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1383d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1383d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1383dc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1383dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1383e0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1383e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1383e4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1383e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1383e8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1383e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1383ec: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1383ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1383f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1383f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1383f4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1383f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1383f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1383f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1383fc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1383fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138400: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138404: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13840c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13840cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138410: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13841c: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138420: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138424: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138424u;
    SET_GPR_U32(ctx, 31, 0x13842Cu);
    ctx->pc = 0x138428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138424u;
            // 0x138428: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13842Cu; }
        if (ctx->pc != 0x13842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13842Cu; }
        if (ctx->pc != 0x13842Cu) { return; }
    }
    ctx->pc = 0x13842Cu;
label_13842c:
    // 0x13842c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x13842Cu;
    {
        const bool branch_taken_0x13842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13842c) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x138434u;
label_138434:
    // 0x138434: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13843c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138440: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138444: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138448: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13844c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138450: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138454: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138458: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13845c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138460: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138464: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138468: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13846c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138478: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13847c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13847cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138480: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x138484: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138488: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138488u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13848c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13848Cu;
    SET_GPR_U32(ctx, 31, 0x138494u);
    ctx->pc = 0x138490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13848Cu;
            // 0x138490: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138494u; }
        if (ctx->pc != 0x138494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138494u; }
        if (ctx->pc != 0x138494u) { return; }
    }
    ctx->pc = 0x138494u;
label_138494:
    // 0x138494: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x138494u;
    {
        const bool branch_taken_0x138494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138494) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x13849Cu;
label_13849c:
    // 0x13849c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1384a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1384a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1384a4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1384a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1384a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1384a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1384ac: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1384acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1384b0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1384b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1384b4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1384b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1384b8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1384bc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1384bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1384c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1384c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1384c4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1384c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1384c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1384c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1384cc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1384ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1384d0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1384d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1384d4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1384d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1384d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1384dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384e0: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1384e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1384e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1384e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384e8: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x1384e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1384ec: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1384ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1384f0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1384f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384f4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1384F4u;
    SET_GPR_U32(ctx, 31, 0x1384FCu);
    ctx->pc = 0x1384F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1384F4u;
            // 0x1384f8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384FCu; }
        if (ctx->pc != 0x1384FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1384FCu; }
        if (ctx->pc != 0x1384FCu) { return; }
    }
    ctx->pc = 0x1384FCu;
label_1384fc:
    // 0x1384fc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1384FCu;
    {
        const bool branch_taken_0x1384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1384fc) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x138504u;
label_138504:
    // 0x138504: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13850c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138510: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138514: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138518: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13851c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138520: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138524: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138528: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13852c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138534: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138538: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13853c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138548: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13854c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138550: 0x240801c8  addiu       $t0, $zero, 0x1C8
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x138554: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138558: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13855c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x138560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13855Cu;
            // 0x138560: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138564u; }
        if (ctx->pc != 0x138564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138564u; }
        if (ctx->pc != 0x138564u) { return; }
    }
    ctx->pc = 0x138564u;
label_138564:
    // 0x138564: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x138564u;
    {
        const bool branch_taken_0x138564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138564) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x13856Cu;
label_13856c:
    // 0x13856c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138570: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138574: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138578: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13857c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138580: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138584: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138588: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x13858c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138594: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13859c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1385a0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1385a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1385a4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1385a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1385a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1385a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1385acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385b0: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1385b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1385b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1385b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385b8: 0x24080260  addiu       $t0, $zero, 0x260
    ctx->pc = 0x1385b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x1385bc: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1385c0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1385c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385c4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1385C4u;
    SET_GPR_U32(ctx, 31, 0x1385CCu);
    ctx->pc = 0x1385C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1385C4u;
            // 0x1385c8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385CCu; }
        if (ctx->pc != 0x1385CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385CCu; }
        if (ctx->pc != 0x1385CCu) { return; }
    }
    ctx->pc = 0x1385CCu;
label_1385cc:
    // 0x1385cc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1385CCu;
    {
        const bool branch_taken_0x1385cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1385cc) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x1385D4u;
label_1385d4:
    // 0x1385d4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1385d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1385d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1385dc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1385dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1385e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1385e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1385e4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1385e8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1385e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1385ec: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1385ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1385f0: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1385f4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1385f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1385f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1385fc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1385fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138600: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138604: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138608: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13860c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138618: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13861c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13861cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138620: 0x240802f8  addiu       $t0, $zero, 0x2F8
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    // 0x138624: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138628: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138628u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13862c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13862Cu;
    SET_GPR_U32(ctx, 31, 0x138634u);
    ctx->pc = 0x138630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13862Cu;
            // 0x138630: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138634u; }
        if (ctx->pc != 0x138634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138634u; }
        if (ctx->pc != 0x138634u) { return; }
    }
    ctx->pc = 0x138634u;
label_138634:
    // 0x138634: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x138634u;
    {
        const bool branch_taken_0x138634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138634) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x13863Cu;
label_13863c:
    // 0x13863c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x138640: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138640u;
    {
        const bool branch_taken_0x138640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x138640) {
            ctx->pc = 0x138644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138640u;
            // 0x138644: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138654u;
            goto label_138654;
        }
    }
    ctx->pc = 0x138648u;
    // 0x138648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13864c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13864cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x138650: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_138654:
    // 0x138654: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138654u;
    {
        const bool branch_taken_0x138654 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138654u;
            // 0x138658: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138654) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x13865Cu;
    // 0x13865c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13865Cu;
    {
        const bool branch_taken_0x13865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13865c) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x138664u;
    // 0x138664: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_138668:
    // 0x138668: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x138668u;
    {
        const bool branch_taken_0x138668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138668) {
            ctx->pc = 0x13866Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138668u;
            // 0x13866c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1386D8u;
            goto label_1386d8;
        }
    }
    ctx->pc = 0x138670u;
    // 0x138670: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138678: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13867c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13867cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138680: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138684: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138688: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13868c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x13868cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138690: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138694: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138698: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13869c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13869cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1386a0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1386a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1386a4: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1386a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1386a8: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1386a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1386ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1386acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1386b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386b4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1386b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1386b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1386b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1386bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c0: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1386c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1386c4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1386c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c8: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1386C8u;
    SET_GPR_U32(ctx, 31, 0x1386D0u);
    ctx->pc = 0x1386CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386C8u;
            // 0x1386cc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D0u; }
        if (ctx->pc != 0x1386D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D0u; }
        if (ctx->pc != 0x1386D0u) { return; }
    }
    ctx->pc = 0x1386D0u;
label_1386d0:
    // 0x1386d0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1386D0u;
    {
        const bool branch_taken_0x1386d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386D0u;
            // 0x1386d4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386d0) {
            ctx->pc = 0x1387A8u;
            goto label_1387a8;
        }
    }
    ctx->pc = 0x1386D8u;
label_1386d8:
    // 0x1386d8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1386D8u;
    {
        const bool branch_taken_0x1386d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1386d8) {
            ctx->pc = 0x1386DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1386D8u;
            // 0x1386dc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138748u;
            goto label_138748;
        }
    }
    ctx->pc = 0x1386E0u;
    // 0x1386e0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1386e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1386e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1386e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1386e8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1386e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1386ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1386ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1386f0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1386f4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1386f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1386f8: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1386f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1386fc: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1386fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138700: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138708: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13870c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13870cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138710: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138714: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138718: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x13871c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13871cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138724: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13872c: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x13872cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x138730: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138734: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138734u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138738: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138738u;
    SET_GPR_U32(ctx, 31, 0x138740u);
    ctx->pc = 0x13873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138738u;
            // 0x13873c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138740u; }
        if (ctx->pc != 0x138740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138740u; }
        if (ctx->pc != 0x138740u) { return; }
    }
    ctx->pc = 0x138740u;
label_138740:
    // 0x138740: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x138740u;
    {
        const bool branch_taken_0x138740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138740) {
            ctx->pc = 0x1387A4u;
            goto label_1387a4;
        }
    }
    ctx->pc = 0x138748u;
label_138748:
    // 0x138748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13874c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138750: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138754: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138758: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13875c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138760: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138764: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138768: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13876c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138774: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138778: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13877c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138788: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13878c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13878cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138790: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x138790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x138794: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138798: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13879c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13879Cu;
    SET_GPR_U32(ctx, 31, 0x1387A4u);
    ctx->pc = 0x1387A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13879Cu;
            // 0x1387a0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387A4u; }
        if (ctx->pc != 0x1387A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387A4u; }
        if (ctx->pc != 0x1387A4u) { return; }
    }
    ctx->pc = 0x1387A4u;
label_1387a4:
    // 0x1387a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1387a8:
    // 0x1387a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1387ac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1387acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1387b0:
    // 0x1387b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1387b4:
    // 0x1387b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1387b8: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1387B8u;
    {
        const bool branch_taken_0x1387b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1387b8) {
            ctx->pc = 0x1387BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1387B8u;
            // 0x1387bc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138868u;
            goto label_138868;
        }
    }
    ctx->pc = 0x1387C0u;
    // 0x1387c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1387c4: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1387C4u;
    {
        const bool branch_taken_0x1387c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1387c4) {
            ctx->pc = 0x138864u;
            goto label_138864;
        }
    }
    ctx->pc = 0x1387CCu;
    // 0x1387cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1387d0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1387D0u;
    {
        const bool branch_taken_0x1387d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1387d0) {
            ctx->pc = 0x1387D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1387D0u;
            // 0x1387d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1387ECu;
            goto label_1387ec;
        }
    }
    ctx->pc = 0x1387D8u;
    // 0x1387d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1387D8u;
    {
        const bool branch_taken_0x1387d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1387d8) {
            ctx->pc = 0x1387E8u;
            goto label_1387e8;
        }
    }
    ctx->pc = 0x1387E0u;
    // 0x1387e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1387E0u;
    {
        const bool branch_taken_0x1387e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387E0u;
            // 0x1387e4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e0) {
            ctx->pc = 0x1388D8u;
            goto label_1388d8;
        }
    }
    ctx->pc = 0x1387E8u;
label_1387e8:
    // 0x1387e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1387ec:
    // 0x1387ec: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1387ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1387f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1387f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1387f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1387f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1387f8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1387f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1387fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1387fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x138800: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138804: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138808: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x138808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x13880c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138810: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138814: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x138814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x138818: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x138818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x13881c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13881cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138820: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x138820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x138824: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138828: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x138828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x13882c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x13882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138830: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x138830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x138834: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x138834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138838: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13883c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13883cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138840: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138844: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138844u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138848: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x138848u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x13884c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138854: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138854u;
    SET_GPR_U32(ctx, 31, 0x13885Cu);
    ctx->pc = 0x138858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138854u;
            // 0x138858: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13885Cu; }
        if (ctx->pc != 0x13885Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13885Cu; }
        if (ctx->pc != 0x13885Cu) { return; }
    }
    ctx->pc = 0x13885Cu;
label_13885c:
    // 0x13885c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13885Cu;
    {
        const bool branch_taken_0x13885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13885c) {
            ctx->pc = 0x1388D4u;
            goto label_1388d4;
        }
    }
    ctx->pc = 0x138864u;
label_138864:
    // 0x138864: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_138868:
    // 0x138868: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x138868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13886c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138870: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x138870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x138874: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138878: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13887c: 0xffaa0018  sd          $t2, 0x18($sp)
    ctx->pc = 0x13887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 10));
    // 0x138880: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138888: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x138888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x13888c: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x13888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x138890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138894: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x138894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x138898: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x138898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13889c: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x13889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x1388a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1388a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1388a4: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1388a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x1388a8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1388ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1388acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1388b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1388b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1388b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1388b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388bc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1388bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1388c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1388c8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1388c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1388cc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1388CCu;
    SET_GPR_U32(ctx, 31, 0x1388D4u);
    ctx->pc = 0x1388D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1388CCu;
            // 0x1388d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1388D4u; }
        if (ctx->pc != 0x1388D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1388D4u; }
        if (ctx->pc != 0x1388D4u) { return; }
    }
    ctx->pc = 0x1388D4u;
label_1388d4:
    // 0x1388d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1388d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1388d8:
    // 0x1388d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1388dc: 0x5062006e  beql        $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1388DCu;
    {
        const bool branch_taken_0x1388dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1388dc) {
            ctx->pc = 0x1388E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1388DCu;
            // 0x1388e0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A98u;
            goto label_138a98;
        }
    }
    ctx->pc = 0x1388E4u;
    // 0x1388e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1388e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1388e8: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1388E8u;
    {
        const bool branch_taken_0x1388e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1388e8) {
            ctx->pc = 0x1388ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1388E8u;
            // 0x1388ec: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1389CCu;
            goto label_1389cc;
        }
    }
    ctx->pc = 0x1388F0u;
    // 0x1388f0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1388F0u;
    {
        const bool branch_taken_0x1388f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388f0) {
            ctx->pc = 0x1388F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1388F0u;
            // 0x1388f4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138900u;
            goto label_138900;
        }
    }
    ctx->pc = 0x1388F8u;
    // 0x1388f8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1388F8u;
    {
        const bool branch_taken_0x1388f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388F8u;
            // 0x1388fc: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f8) {
            ctx->pc = 0x138B60u;
            goto label_138b60;
        }
    }
    ctx->pc = 0x138900u;
label_138900:
    // 0x138900: 0x3c024cff  lui         $v0, 0x4CFF
    ctx->pc = 0x138900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19711 << 16));
    // 0x138904: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138908: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13890c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13890cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138910: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138914: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138918: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13891c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138924: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138928: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x13892c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138930: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138934: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13893c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13893cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138940: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13894c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x138950: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138954: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x138954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x138958: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138958u;
    SET_GPR_U32(ctx, 31, 0x138960u);
    ctx->pc = 0x13895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138958u;
            // 0x13895c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138960u; }
        if (ctx->pc != 0x138960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138960u; }
        if (ctx->pc != 0x138960u) { return; }
    }
    ctx->pc = 0x138960u;
label_138960:
    // 0x138960: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138964: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x138968: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x13896c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13896cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138970: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138974: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138978: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x13897c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138980: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138984: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138988: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x13898c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138990: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138994: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x138998: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x13899c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1389a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1389a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389a4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1389a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1389a8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1389ac: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x1389acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1389b0: 0x24080110  addiu       $t0, $zero, 0x110
    ctx->pc = 0x1389b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1389b4: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x1389b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1389b8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1389b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389bc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1389BCu;
    SET_GPR_U32(ctx, 31, 0x1389C4u);
    ctx->pc = 0x1389C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1389BCu;
            // 0x1389c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1389C4u; }
        if (ctx->pc != 0x1389C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1389C4u; }
        if (ctx->pc != 0x1389C4u) { return; }
    }
    ctx->pc = 0x1389C4u;
label_1389c4:
    // 0x1389c4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1389C4u;
    {
        const bool branch_taken_0x1389c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389c4) {
            ctx->pc = 0x138B5Cu;
            goto label_138b5c;
        }
    }
    ctx->pc = 0x1389CCu;
label_1389cc:
    // 0x1389cc: 0x3c024cff  lui         $v0, 0x4CFF
    ctx->pc = 0x1389ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19711 << 16));
    // 0x1389d0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1389d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1389d4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1389d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1389d8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1389dc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1389dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1389e0: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1389e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1389e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1389e8: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1389e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1389ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1389ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1389f0: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1389f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1389f4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1389f8: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1389f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1389fc: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1389fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138a00: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a0c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a18: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x138a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x138a1c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138a1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x138a20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x138a24: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138A24u;
    SET_GPR_U32(ctx, 31, 0x138A2Cu);
    ctx->pc = 0x138A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A24u;
            // 0x138a28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A2Cu; }
        if (ctx->pc != 0x138A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A2Cu; }
        if (ctx->pc != 0x138A2Cu) { return; }
    }
    ctx->pc = 0x138A2Cu;
label_138a2c:
    // 0x138a2c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138a30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x138a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x138a34: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138a3c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138a40: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138a44: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138a4c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138a50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138a54: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138a58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138a5c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138a60: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138a64: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a6c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138a70: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x138a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x138a74: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x138a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x138a78: 0x24080150  addiu       $t0, $zero, 0x150
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x138a7c: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x138a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x138a80: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x138a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138a84: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x138a88: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138A88u;
    SET_GPR_U32(ctx, 31, 0x138A90u);
    ctx->pc = 0x138A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A88u;
            // 0x138a8c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A90u; }
        if (ctx->pc != 0x138A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A90u; }
        if (ctx->pc != 0x138A90u) { return; }
    }
    ctx->pc = 0x138A90u;
label_138a90:
    // 0x138a90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x138A90u;
    {
        const bool branch_taken_0x138a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a90) {
            ctx->pc = 0x138B5Cu;
            goto label_138b5c;
        }
    }
    ctx->pc = 0x138A98u;
label_138a98:
    // 0x138a98: 0x3c024cff  lui         $v0, 0x4CFF
    ctx->pc = 0x138a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19711 << 16));
    // 0x138a9c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138aa0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x138aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x138aa4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138aa8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138aac: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138ab0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138ab4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138ab8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138abc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138ac0: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138ac4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138ac8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138acc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ad8: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138adc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ae4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x138ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x138ae8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138ae8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138aec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x138aecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x138af0: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138AF0u;
    SET_GPR_U32(ctx, 31, 0x138AF8u);
    ctx->pc = 0x138AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AF0u;
            // 0x138af4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AF8u; }
        if (ctx->pc != 0x138AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AF8u; }
        if (ctx->pc != 0x138AF8u) { return; }
    }
    ctx->pc = 0x138AF8u;
label_138af8:
    // 0x138af8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138afc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x138b00: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138b04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138b08: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138b0c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138b10: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138b14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138b18: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138b1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138b20: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138b24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138b28: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138b2c: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138b30: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b38: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138b3c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x138b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x138b40: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x138b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x138b44: 0x24080198  addiu       $t0, $zero, 0x198
    ctx->pc = 0x138b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x138b48: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x138b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x138b4c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x138b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138b50: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x138b50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x138b54: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138B54u;
    SET_GPR_U32(ctx, 31, 0x138B5Cu);
    ctx->pc = 0x138B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B54u;
            // 0x138b58: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B5Cu; }
        if (ctx->pc != 0x138B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B5Cu; }
        if (ctx->pc != 0x138B5Cu) { return; }
    }
    ctx->pc = 0x138B5Cu;
label_138b5c:
    // 0x138b5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_138b60:
    // 0x138b60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x138B60u;
    {
        const bool branch_taken_0x138b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b60) {
            ctx->pc = 0x138B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138B60u;
            // 0x138b64: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138B70u;
            goto label_138b70;
        }
    }
    ctx->pc = 0x138B68u;
    // 0x138b68: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x138B68u;
    {
        const bool branch_taken_0x138b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B68u;
            // 0x138b6c: 0x86030028  lh          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b68) {
            ctx->pc = 0x138C00u;
            goto label_138c00;
        }
    }
    ctx->pc = 0x138B70u;
label_138b70:
    // 0x138b70: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x138b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x138b74: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x138b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x138b78: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x138b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138b80: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x138b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138b84: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138b88: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x138b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x138b8c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138b90: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x138b90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x138b94: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138b98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138b9c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x138b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x138ba0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138ba4: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x138ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x138ba8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138bac: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x138bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x138bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb4: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x138bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x138bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bbc: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x138bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x138bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc4: 0xffa90040  sd          $t1, 0x40($sp)
    ctx->pc = 0x138bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 9));
    // 0x138bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bcc: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x138bd0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138bd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bd4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138BD4u;
    SET_GPR_U32(ctx, 31, 0x138BDCu);
    ctx->pc = 0x138BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BD4u;
            // 0x138bd8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BDCu; }
        if (ctx->pc != 0x138BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BDCu; }
        if (ctx->pc != 0x138BDCu) { return; }
    }
    ctx->pc = 0x138BDCu;
label_138bdc:
    // 0x138bdc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x138be0: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x138be4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138BE4u;
    {
        const bool branch_taken_0x138be4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138BE4u;
            // 0x138be8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138be4) {
            ctx->pc = 0x138BFCu;
            goto label_138bfc;
        }
    }
    ctx->pc = 0x138BECu;
    // 0x138bec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x138bf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138bf4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x138bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x138bf8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_138bfc:
    // 0x138bfc: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_138c00:
    // 0x138c00: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x138c04: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x138c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x138c08: 0xc60e002c  lwc1        $f14, 0x2C($s0)
    ctx->pc = 0x138c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x138c0c: 0x8fa60438  lw          $a2, 0x438($sp)
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x138c10: 0x2484d838  addiu       $a0, $a0, -0x27C8
    ctx->pc = 0x138c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957112));
    // 0x138c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138c18: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138c1c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x138c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x138c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138c24: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x138C24u;
    SET_GPR_U32(ctx, 31, 0x138C2Cu);
    ctx->pc = 0x138C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C24u;
            // 0x138c28: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (runtime->hasFunction(0x314DA0u)) {
        auto targetFn = runtime->lookupFunction(0x314DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C2Cu; }
        if (ctx->pc != 0x138C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00314DA0_0x314da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C2Cu; }
        if (ctx->pc != 0x138C2Cu) { return; }
    }
    ctx->pc = 0x138C2Cu;
label_138c2c:
    // 0x138c2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x138c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x138c30: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x138c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x138c34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x138c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138c38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x138c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x138C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C3Cu;
            // 0x138c40: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138C44u;
    // 0x138c44: 0x0  nop
    ctx->pc = 0x138c44u;
    // NOP
    // 0x138c48: 0x0  nop
    ctx->pc = 0x138c48u;
    // NOP
    // 0x138c4c: 0x0  nop
    ctx->pc = 0x138c4cu;
    // NOP
label_138c50:
    // 0x138c50: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x138c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138c58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x138c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x138c5c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x138c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138c60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x138c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x138c64: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x138c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
    // 0x138c68: 0xafa3043c  sw          $v1, 0x43C($sp)
    ctx->pc = 0x138c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 3));
    // 0x138c6c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x138c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x138c70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x138c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138c74: 0x506200f3  beql        $v1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x138C74u;
    {
        const bool branch_taken_0x138c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138c74) {
            ctx->pc = 0x138C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138C74u;
            // 0x138c78: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139044u;
            goto label_139044;
        }
    }
    ctx->pc = 0x138C7Cu;
    // 0x138c7c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x138C7Cu;
    {
        const bool branch_taken_0x138c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c7c) {
            ctx->pc = 0x138C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138C7Cu;
            // 0x138c80: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138C8Cu;
            goto label_138c8c;
        }
    }
    ctx->pc = 0x138C84u;
    // 0x138c84: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x138C84u;
    {
        const bool branch_taken_0x138c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C84u;
            // 0x138c88: 0x86030004  lh          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c84) {
            ctx->pc = 0x1393F8u;
            goto label_1393f8;
        }
    }
    ctx->pc = 0x138C8Cu;
label_138c8c:
    // 0x138c8c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x138c8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x138c90: 0x102001d8  beqz        $at, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x138C90u;
    {
        const bool branch_taken_0x138c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c90) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138C98u;
    // 0x138c98: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x138c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x138c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138ca0: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x138ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
    // 0x138ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138cac: 0x400008  jr          $v0
    ctx->pc = 0x138CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138CB4u: goto label_138cb4;
            case 0x138D1Cu: goto label_138d1c;
            case 0x138D84u: goto label_138d84;
            case 0x138DECu: goto label_138dec;
            case 0x138F14u: goto label_138f14;
            case 0x138FDCu: goto label_138fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138CB4u;
label_138cb4:
    // 0x138cb4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138cb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138cbc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138cc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138cc4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138cc8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138ccc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138cd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138cd4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138cd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138cdc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138ce0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138ce4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cec: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cf4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138cf8: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x138cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x138cfc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x138d00: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x138d04: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x138d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x138d08: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138d08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138d0c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138D0Cu;
    SET_GPR_U32(ctx, 31, 0x138D14u);
    ctx->pc = 0x138D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D0Cu;
            // 0x138d10: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D14u; }
        if (ctx->pc != 0x138D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D14u; }
        if (ctx->pc != 0x138D14u) { return; }
    }
    ctx->pc = 0x138D14u;
label_138d14:
    // 0x138d14: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x138D14u;
    {
        const bool branch_taken_0x138d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d14) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138D1Cu;
label_138d1c:
    // 0x138d1c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138d20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138d24: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138d28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138d2c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138d30: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138d34: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138d38: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x138d3c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138d40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138d44: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138d48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138d4c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138d50: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138d54: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d60: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138d64: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x138d68: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x138d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138d6c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x138d6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d70: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138d74: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138D74u;
    SET_GPR_U32(ctx, 31, 0x138D7Cu);
    ctx->pc = 0x138D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D74u;
            // 0x138d78: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D7Cu; }
        if (ctx->pc != 0x138D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D7Cu; }
        if (ctx->pc != 0x138D7Cu) { return; }
    }
    ctx->pc = 0x138D7Cu;
label_138d7c:
    // 0x138d7c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x138D7Cu;
    {
        const bool branch_taken_0x138d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d7c) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138D84u;
label_138d84:
    // 0x138d84: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138d88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138d8c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138d90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138d94: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138d98: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138d9c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138da0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138da4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138da8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138dac: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138db0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138db4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dbc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dc4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138dc8: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x138dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x138dcc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x138dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x138dd0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x138dd4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x138dd8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138ddc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138DDCu;
    SET_GPR_U32(ctx, 31, 0x138DE4u);
    ctx->pc = 0x138DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DDCu;
            // 0x138de0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DE4u; }
        if (ctx->pc != 0x138DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DE4u; }
        if (ctx->pc != 0x138DE4u) { return; }
    }
    ctx->pc = 0x138DE4u;
label_138de4:
    // 0x138de4: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x138DE4u;
    {
        const bool branch_taken_0x138de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138de4) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138DECu;
label_138dec:
    // 0x138dec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138df0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138df4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138dfc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138e00: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138e04: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138e0c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138e10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138e14: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138e18: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138e1c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e24: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e2c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138e30: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x138e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x138e34: 0x24080240  addiu       $t0, $zero, 0x240
    ctx->pc = 0x138e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x138e38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138e38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e3c: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x138e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x138e40: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138e44: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138E44u;
    SET_GPR_U32(ctx, 31, 0x138E4Cu);
    ctx->pc = 0x138E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E44u;
            // 0x138e48: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E4Cu; }
        if (ctx->pc != 0x138E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E4Cu; }
        if (ctx->pc != 0x138E4Cu) { return; }
    }
    ctx->pc = 0x138E4Cu;
label_138e4c:
    // 0x138e4c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138e54: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138e58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138e5c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138e60: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138e64: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138e68: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x138e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x138e6c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138e74: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138e78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138e7c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138e80: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138e84: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e90: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138e94: 0x24080220  addiu       $t0, $zero, 0x220
    ctx->pc = 0x138e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x138e98: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x138e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x138e9c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x138e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ea0: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138ea4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138EA4u;
    SET_GPR_U32(ctx, 31, 0x138EACu);
    ctx->pc = 0x138EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138EA4u;
            // 0x138ea8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EACu; }
        if (ctx->pc != 0x138EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EACu; }
        if (ctx->pc != 0x138EACu) { return; }
    }
    ctx->pc = 0x138EACu;
label_138eac:
    // 0x138eac: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138eb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138eb4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138eb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138ebc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138ec0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138ec4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138ec8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138ecc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138ed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138ed4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138ed8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138edc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ee4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138eec: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138ef0: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x138ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x138ef4: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x138ef8: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138efc: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x138efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x138f00: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138f04: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138F04u;
    SET_GPR_U32(ctx, 31, 0x138F0Cu);
    ctx->pc = 0x138F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F04u;
            // 0x138f08: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F0Cu; }
        if (ctx->pc != 0x138F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F0Cu; }
        if (ctx->pc != 0x138F0Cu) { return; }
    }
    ctx->pc = 0x138F0Cu;
label_138f0c:
    // 0x138f0c: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x138F0Cu;
    {
        const bool branch_taken_0x138f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f0c) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138F14u;
label_138f14:
    // 0x138f14: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138f1c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138f20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138f24: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138f28: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138f2c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138f30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138f34: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138f38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138f3c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138f40: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138f44: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f4c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f54: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138f58: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x138f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x138f5c: 0x24080240  addiu       $t0, $zero, 0x240
    ctx->pc = 0x138f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x138f60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f64: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x138f68: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138f68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138f6c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138F6Cu;
    SET_GPR_U32(ctx, 31, 0x138F74u);
    ctx->pc = 0x138F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F6Cu;
            // 0x138f70: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F74u; }
        if (ctx->pc != 0x138F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F74u; }
        if (ctx->pc != 0x138F74u) { return; }
    }
    ctx->pc = 0x138F74u;
label_138f74:
    // 0x138f74: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138f78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138f7c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138f80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138f84: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138f88: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138f8c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138f90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138f94: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x138f98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138f9c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x138f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x138fa0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x138fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x138fa4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x138fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x138fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fac: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x138facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x138fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fb4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x138fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x138fb8: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x138fbc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x138fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x138fc0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138fc4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x138fc8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138fcc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x138FCCu;
    SET_GPR_U32(ctx, 31, 0x138FD4u);
    ctx->pc = 0x138FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FCCu;
            // 0x138fd0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FD4u; }
        if (ctx->pc != 0x138FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FD4u; }
        if (ctx->pc != 0x138FD4u) { return; }
    }
    ctx->pc = 0x138FD4u;
label_138fd4:
    // 0x138fd4: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x138FD4u;
    {
        const bool branch_taken_0x138fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138fd4) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x138FDCu;
label_138fdc:
    // 0x138fdc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x138fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x138fe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138fe4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138fe8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138fec: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x138fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x138ff0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x138ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x138ff4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x138ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x138ff8: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x138ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x138ffc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x138ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139000: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139004: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x139004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13900c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139010: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x139014: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x139014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13901c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13901cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139020: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x139020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x139024: 0x24080220  addiu       $t0, $zero, 0x220
    ctx->pc = 0x139024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x139028: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x139028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13902c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x13902cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139030: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x139034: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x139034u;
    SET_GPR_U32(ctx, 31, 0x13903Cu);
    ctx->pc = 0x139038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139034u;
            // 0x139038: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13903Cu; }
        if (ctx->pc != 0x13903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13903Cu; }
        if (ctx->pc != 0x13903Cu) { return; }
    }
    ctx->pc = 0x13903Cu;
label_13903c:
    // 0x13903c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x13903Cu;
    {
        const bool branch_taken_0x13903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13903c) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x139044u;
label_139044:
    // 0x139044: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x139044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x139048: 0x102000ea  beqz        $at, . + 4 + (0xEA << 2)
    ctx->pc = 0x139048u;
    {
        const bool branch_taken_0x139048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139048) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x139050u;
    // 0x139050: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x139054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139058: 0x2463c6d0  addiu       $v1, $v1, -0x3930
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952656));
    // 0x13905c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139064: 0x400008  jr          $v0
    ctx->pc = 0x139064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13906Cu: goto label_13906c;
            case 0x1390D4u: goto label_1390d4;
            case 0x13913Cu: goto label_13913c;
            case 0x1391A4u: goto label_1391a4;
            case 0x1392CCu: goto label_1392cc;
            case 0x139394u: goto label_139394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13906Cu;
label_13906c:
    // 0x13906c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139074: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x139074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x139078: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13907c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x139080: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x139080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x139084: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x139084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x139088: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13908c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139090: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139094: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x139094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139098: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13909c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1390a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1390a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390a4: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1390a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1390a8: 0x240601d8  addiu       $a2, $zero, 0x1D8
    ctx->pc = 0x1390a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x1390ac: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1390acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1390b0: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1390b4: 0x240802c0  addiu       $t0, $zero, 0x2C0
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x1390b8: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1390b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1390bc: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1390bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1390c0: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1390c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1390c4: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1390C4u;
    SET_GPR_U32(ctx, 31, 0x1390CCu);
    ctx->pc = 0x1390C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390C4u;
            // 0x1390c8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390CCu; }
        if (ctx->pc != 0x1390CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390CCu; }
        if (ctx->pc != 0x1390CCu) { return; }
    }
    ctx->pc = 0x1390CCu;
label_1390cc:
    // 0x1390cc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1390CCu;
    {
        const bool branch_taken_0x1390cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390cc) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x1390D4u;
label_1390d4:
    // 0x1390d4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1390d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1390d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1390dc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1390dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1390e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1390e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1390e4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1390e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1390e8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1390e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1390ec: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1390ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1390f0: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x1390f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1390f4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1390f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1390f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1390f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1390fc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1390fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139100: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139104: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x139104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139108: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13910c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139114: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x139118: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x139118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13911c: 0x24080290  addiu       $t0, $zero, 0x290
    ctx->pc = 0x13911cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x139120: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139124: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x139124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139128: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13912c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13912Cu;
    SET_GPR_U32(ctx, 31, 0x139134u);
    ctx->pc = 0x139130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13912Cu;
            // 0x139130: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139134u; }
        if (ctx->pc != 0x139134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139134u; }
        if (ctx->pc != 0x139134u) { return; }
    }
    ctx->pc = 0x139134u;
label_139134:
    // 0x139134: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x139134u;
    {
        const bool branch_taken_0x139134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139134) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x13913Cu;
label_13913c:
    // 0x13913c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139140: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139144: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x139144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x139148: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13914c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x139150: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x139150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x139154: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x139154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x139158: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13915c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139164: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x139164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139168: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13916c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139174: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x139174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139178: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x13917c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x139180: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x139184: 0x240802c8  addiu       $t0, $zero, 0x2C8
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x139188: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x139188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x13918c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x13918cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x139190: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x139194: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x139194u;
    SET_GPR_U32(ctx, 31, 0x13919Cu);
    ctx->pc = 0x139198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139194u;
            // 0x139198: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13919Cu; }
        if (ctx->pc != 0x13919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13919Cu; }
        if (ctx->pc != 0x13919Cu) { return; }
    }
    ctx->pc = 0x13919Cu;
label_13919c:
    // 0x13919c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x13919Cu;
    {
        const bool branch_taken_0x13919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13919c) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x1391A4u;
label_1391a4:
    // 0x1391a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1391a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1391a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1391ac: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1391acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1391b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1391b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1391b4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1391b8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1391b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1391bc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1391bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1391c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1391c4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1391c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1391c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1391c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1391cc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1391ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1391d0: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1391d4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1391d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1391d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1391d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391dc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1391dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1391e0: 0x240601d8  addiu       $a2, $zero, 0x1D8
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x1391e4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1391e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1391e8: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1391ec: 0x240802f0  addiu       $t0, $zero, 0x2F0
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    // 0x1391f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1391f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391f4: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1391f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1391f8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1391fc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1391FCu;
    SET_GPR_U32(ctx, 31, 0x139204u);
    ctx->pc = 0x139200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391FCu;
            // 0x139200: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139204u; }
        if (ctx->pc != 0x139204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139204u; }
        if (ctx->pc != 0x139204u) { return; }
    }
    ctx->pc = 0x139204u;
label_139204:
    // 0x139204: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x139204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139208: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13920c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x139210: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x139214: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x139214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x139218: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x139218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13921c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x139220: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x139224: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x139224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139228: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13922c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139230: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139234: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x139234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139238: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13923c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139244: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x139244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x139248: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x139248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x13924c: 0x240802a0  addiu       $t0, $zero, 0x2A0
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x139250: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x139254: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x139254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139258: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13925c: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x13925Cu;
    SET_GPR_U32(ctx, 31, 0x139264u);
    ctx->pc = 0x139260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13925Cu;
            // 0x139260: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139264u; }
        if (ctx->pc != 0x139264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139264u; }
        if (ctx->pc != 0x139264u) { return; }
    }
    ctx->pc = 0x139264u;
label_139264:
    // 0x139264: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x139264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13926c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x139270: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x139274: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x139274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x139278: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x139278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x13927c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x13927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x139280: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139284: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x139284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13928c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x13928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139290: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x139294: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x139294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13929c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x13929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1392a0: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x1392a4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1392a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1392a8: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1392ac: 0x240802c8  addiu       $t0, $zero, 0x2C8
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x1392b0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1392b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1392b4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1392b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1392b8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1392bc: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1392BCu;
    SET_GPR_U32(ctx, 31, 0x1392C4u);
    ctx->pc = 0x1392C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1392BCu;
            // 0x1392c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392C4u; }
        if (ctx->pc != 0x1392C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392C4u; }
        if (ctx->pc != 0x1392C4u) { return; }
    }
    ctx->pc = 0x1392C4u;
label_1392c4:
    // 0x1392c4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1392C4u;
    {
        const bool branch_taken_0x1392c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1392c4) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x1392CCu;
label_1392cc:
    // 0x1392cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1392ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1392d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1392d4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1392d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1392d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1392d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1392dc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1392dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1392e0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1392e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1392e4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1392e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1392e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1392ec: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1392ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1392f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1392f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1392f4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1392f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1392f8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1392fc: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1392fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139304: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x139304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139308: 0x240601d8  addiu       $a2, $zero, 0x1D8
    ctx->pc = 0x139308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x13930c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x139310: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x139314: 0x240802f0  addiu       $t0, $zero, 0x2F0
    ctx->pc = 0x139314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    // 0x139318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x139318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13931c: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x13931cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x139320: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x139324: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x139324u;
    SET_GPR_U32(ctx, 31, 0x13932Cu);
    ctx->pc = 0x139328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139324u;
            // 0x139328: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13932Cu; }
        if (ctx->pc != 0x13932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13932Cu; }
        if (ctx->pc != 0x13932Cu) { return; }
    }
    ctx->pc = 0x13932Cu;
label_13932c:
    // 0x13932c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x13932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139334: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x139334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x139338: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13933c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x139340: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x139340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x139344: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x139344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x139348: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13934c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x13934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x139350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139354: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x139354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x139358: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x13935c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x13935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x139360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139364: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x139364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x139368: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x13936c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x13936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x139370: 0x24070161  addiu       $a3, $zero, 0x161
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x139374: 0x240802c8  addiu       $t0, $zero, 0x2C8
    ctx->pc = 0x139374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x139378: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x139378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13937c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x13937cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x139380: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x139384: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x139384u;
    SET_GPR_U32(ctx, 31, 0x13938Cu);
    ctx->pc = 0x139388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139384u;
            // 0x139388: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13938Cu; }
        if (ctx->pc != 0x13938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13938Cu; }
        if (ctx->pc != 0x13938Cu) { return; }
    }
    ctx->pc = 0x13938Cu;
label_13938c:
    // 0x13938c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13938Cu;
    {
        const bool branch_taken_0x13938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13938c) {
            ctx->pc = 0x1393F4u;
            goto label_1393f4;
        }
    }
    ctx->pc = 0x139394u;
label_139394:
    // 0x139394: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x139394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x139398: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13939c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x13939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1393a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1393a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1393a4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1393a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1393a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1393ac: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1393acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1393b0: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1393b4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1393b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1393b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1393b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1393bc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1393bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1393c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1393c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1393c4: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x1393c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x1393c8: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x1393cc: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1393ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1393d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1393d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d4: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x1393d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1393d8: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x1393d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x1393dc: 0x240802a0  addiu       $t0, $zero, 0x2A0
    ctx->pc = 0x1393dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x1393e0: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1393e4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1393e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393e8: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1393ec: 0xc04eb7c  jal         func_13ADF0
    ctx->pc = 0x1393ECu;
    SET_GPR_U32(ctx, 31, 0x1393F4u);
    ctx->pc = 0x1393F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393ECu;
            // 0x1393f0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13ADF0u;
    if (runtime->hasFunction(0x13ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x13ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393F4u; }
        if (ctx->pc != 0x1393F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393F4u; }
        if (ctx->pc != 0x1393F4u) { return; }
    }
    ctx->pc = 0x1393F4u;
label_1393f4:
    // 0x1393f4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1393f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1393f8:
    // 0x1393f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1393fc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1393fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x139400: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x139400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x139404: 0x8fa60438  lw          $a2, 0x438($sp)
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x139408: 0x2484d838  addiu       $a0, $a0, -0x27C8
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957112));
    // 0x13940c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13940cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139410: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139414: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x139414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x139418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13941c: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x13941Cu;
    SET_GPR_U32(ctx, 31, 0x139424u);
    ctx->pc = 0x139420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13941Cu;
            // 0x139420: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x314DA0u;
    if (runtime->hasFunction(0x314DA0u)) {
        auto targetFn = runtime->lookupFunction(0x314DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139424u; }
        if (ctx->pc != 0x139424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00314DA0_0x314da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139424u; }
        if (ctx->pc != 0x139424u) { return; }
    }
    ctx->pc = 0x139424u;
label_139424:
    // 0x139424: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x139424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139428: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x139428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13942c: 0x3e00008  jr          $ra
    ctx->pc = 0x13942Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13942Cu;
            // 0x139430: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139434u;
    // 0x139434: 0x0  nop
    ctx->pc = 0x139434u;
    // NOP
    // 0x139438: 0x0  nop
    ctx->pc = 0x139438u;
    // NOP
    // 0x13943c: 0x0  nop
    ctx->pc = 0x13943cu;
    // NOP
label_139440:
    // 0x139440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13944c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x13944Cu;
    SET_GPR_U32(ctx, 31, 0x139454u);
    ctx->pc = 0x139450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13944Cu;
            // 0x139450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (runtime->hasFunction(0x1A0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139454u; }
        if (ctx->pc != 0x139454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139454u; }
        if (ctx->pc != 0x139454u) { return; }
    }
    ctx->pc = 0x139454u;
label_139454:
    // 0x139454: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139458: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13945c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139460: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x139464: 0xa06058b0  sb          $zero, 0x58B0($v1)
    ctx->pc = 0x139464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 0));
    // 0x139468: 0x24849620  addiu       $a0, $a0, -0x69E0
    ctx->pc = 0x139468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940192));
    // 0x13946c: 0xa04058a8  sb          $zero, 0x58A8($v0)
    ctx->pc = 0x13946cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22696), (uint8_t)GPR_U32(ctx, 0));
    // 0x139470: 0x24a5c708  addiu       $a1, $a1, -0x38F8
    ctx->pc = 0x139470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
    // 0x139474: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x139474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139478: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13947c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x13947Cu;
    SET_GPR_U32(ctx, 31, 0x139484u);
    ctx->pc = 0x139480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13947Cu;
            // 0x139480: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139484u; }
        if (ctx->pc != 0x139484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139484u; }
        if (ctx->pc != 0x139484u) { return; }
    }
    ctx->pc = 0x139484u;
label_139484:
    // 0x139484: 0xc04c200  jal         func_130800
    ctx->pc = 0x139484u;
    SET_GPR_U32(ctx, 31, 0x13948Cu);
    ctx->pc = 0x130800u;
    if (runtime->hasFunction(0x130800u)) {
        auto targetFn = runtime->lookupFunction(0x130800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13948Cu; }
        if (ctx->pc != 0x13948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130800_0x130800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13948Cu; }
        if (ctx->pc != 0x13948Cu) { return; }
    }
    ctx->pc = 0x13948Cu;
label_13948c:
    // 0x13948c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13948cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139494: 0xc055768  jal         func_155DA0
    ctx->pc = 0x139494u;
    SET_GPR_U32(ctx, 31, 0x13949Cu);
    ctx->pc = 0x139498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139494u;
            // 0x139498: 0x248494b0  addiu       $a0, $a0, -0x6B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    }
    ctx->pc = 0x13949Cu;
label_13949c:
    // 0x13949c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1394a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1394a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1394a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1394A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1394A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394A4u;
            // 0x1394a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1394ACu;
    // 0x1394ac: 0x0  nop
    ctx->pc = 0x1394acu;
    // NOP
label_1394b0:
    // 0x1394b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1394b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1394b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1394b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1394b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1394bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1394bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1394c0: 0x806358a8  lb          $v1, 0x58A8($v1)
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22696)));
    // 0x1394c4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1394C4u;
    {
        const bool branch_taken_0x1394c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394C4u;
            // 0x1394c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394c4) {
            ctx->pc = 0x139548u;
            goto label_139548;
        }
    }
    ctx->pc = 0x1394CCu;
    // 0x1394cc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1394ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1394d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1394d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394d4: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x1394d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
label_1394d8:
    // 0x1394d8: 0x90830150  lbu         $v1, 0x150($a0)
    ctx->pc = 0x1394d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1394dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1394dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1394e0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1394e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1394e4: 0xa083014d  sb          $v1, 0x14D($a0)
    ctx->pc = 0x1394e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 333), (uint8_t)GPR_U32(ctx, 3));
    // 0x1394e8: 0x90830151  lbu         $v1, 0x151($a0)
    ctx->pc = 0x1394e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 337)));
    // 0x1394ec: 0xa083014e  sb          $v1, 0x14E($a0)
    ctx->pc = 0x1394ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 334), (uint8_t)GPR_U32(ctx, 3));
    // 0x1394f0: 0x90830152  lbu         $v1, 0x152($a0)
    ctx->pc = 0x1394f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x1394f4: 0xa083014f  sb          $v1, 0x14F($a0)
    ctx->pc = 0x1394f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 335), (uint8_t)GPR_U32(ctx, 3));
    // 0x1394f8: 0x90830170  lbu         $v1, 0x170($a0)
    ctx->pc = 0x1394f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x1394fc: 0xa083016d  sb          $v1, 0x16D($a0)
    ctx->pc = 0x1394fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 365), (uint8_t)GPR_U32(ctx, 3));
    // 0x139500: 0x90830171  lbu         $v1, 0x171($a0)
    ctx->pc = 0x139500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 369)));
    // 0x139504: 0xa083016e  sb          $v1, 0x16E($a0)
    ctx->pc = 0x139504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 366), (uint8_t)GPR_U32(ctx, 3));
    // 0x139508: 0x90830172  lbu         $v1, 0x172($a0)
    ctx->pc = 0x139508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 370)));
    // 0x13950c: 0xa083016f  sb          $v1, 0x16F($a0)
    ctx->pc = 0x13950cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 367), (uint8_t)GPR_U32(ctx, 3));
    // 0x139510: 0x90830190  lbu         $v1, 0x190($a0)
    ctx->pc = 0x139510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x139514: 0xa083018d  sb          $v1, 0x18D($a0)
    ctx->pc = 0x139514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 397), (uint8_t)GPR_U32(ctx, 3));
    // 0x139518: 0x90830191  lbu         $v1, 0x191($a0)
    ctx->pc = 0x139518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 401)));
    // 0x13951c: 0xa083018e  sb          $v1, 0x18E($a0)
    ctx->pc = 0x13951cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 398), (uint8_t)GPR_U32(ctx, 3));
    // 0x139520: 0x90830192  lbu         $v1, 0x192($a0)
    ctx->pc = 0x139520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 402)));
    // 0x139524: 0xa083018f  sb          $v1, 0x18F($a0)
    ctx->pc = 0x139524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 399), (uint8_t)GPR_U32(ctx, 3));
    // 0x139528: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x139528u;
    {
        const bool branch_taken_0x139528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139528u;
            // 0x13952c: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139528) {
            ctx->pc = 0x1394D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1394d8;
        }
    }
    ctx->pc = 0x139530u;
    // 0x139530: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x139530u;
    SET_GPR_U32(ctx, 31, 0x139538u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139538u; }
        if (ctx->pc != 0x139538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139538u; }
        if (ctx->pc != 0x139538u) { return; }
    }
    ctx->pc = 0x139538u;
label_139538:
    // 0x139538: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13953c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139540: 0xc055768  jal         func_155DA0
    ctx->pc = 0x139540u;
    SET_GPR_U32(ctx, 31, 0x139548u);
    ctx->pc = 0x139544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139540u;
            // 0x139544: 0x24849560  addiu       $a0, $a0, -0x6AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139548u; }
        if (ctx->pc != 0x139548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139548u; }
        if (ctx->pc != 0x139548u) { return; }
    }
    ctx->pc = 0x139548u;
label_139548:
    // 0x139548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13954c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13954cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139550: 0x3e00008  jr          $ra
    ctx->pc = 0x139550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139550u;
            // 0x139554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139558u;
    // 0x139558: 0x0  nop
    ctx->pc = 0x139558u;
    // NOP
    // 0x13955c: 0x0  nop
    ctx->pc = 0x13955cu;
    // NOP
label_139560:
    // 0x139560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139564: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13956c: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x13956cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x139570: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x139570u;
    {
        const bool branch_taken_0x139570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139570u;
            // 0x139574: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139570) {
            ctx->pc = 0x139598u;
            goto label_139598;
        }
    }
    ctx->pc = 0x139578u;
    // 0x139578: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x139578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x13957c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x13957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x139580: 0x9063f360  lbu         $v1, -0xCA0($v1)
    ctx->pc = 0x139580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964064)));
    // 0x139584: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139584u;
    {
        const bool branch_taken_0x139584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x139584) {
            ctx->pc = 0x139588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139584u;
            // 0x139588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13959Cu;
            goto label_13959c;
        }
    }
    ctx->pc = 0x13958Cu;
    // 0x13958c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139590: 0xc055768  jal         func_155DA0
    ctx->pc = 0x139590u;
    SET_GPR_U32(ctx, 31, 0x139598u);
    ctx->pc = 0x139594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139590u;
            // 0x139594: 0x248495b0  addiu       $a0, $a0, -0x6A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139598u; }
        if (ctx->pc != 0x139598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139598u; }
        if (ctx->pc != 0x139598u) { return; }
    }
    ctx->pc = 0x139598u;
label_139598:
    // 0x139598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13959c:
    // 0x13959c: 0x3e00008  jr          $ra
    ctx->pc = 0x13959Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1395A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13959Cu;
            // 0x1395a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1395A4u;
    // 0x1395a4: 0x0  nop
    ctx->pc = 0x1395a4u;
    // NOP
    // 0x1395a8: 0x0  nop
    ctx->pc = 0x1395a8u;
    // NOP
    // 0x1395ac: 0x0  nop
    ctx->pc = 0x1395acu;
    // NOP
label_1395b0:
    // 0x1395b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1395b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1395b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1395b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1395b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1395bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1395bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1395c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1395c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1395c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1395c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395c8: 0xc055650  jal         func_155940
    ctx->pc = 0x1395C8u;
    SET_GPR_U32(ctx, 31, 0x1395D0u);
    ctx->pc = 0x1395CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1395C8u;
            // 0x1395cc: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (runtime->hasFunction(0x155940u)) {
        auto targetFn = runtime->lookupFunction(0x155940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D0u; }
        if (ctx->pc != 0x1395D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155940_0x155940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D0u; }
        if (ctx->pc != 0x1395D0u) { return; }
    }
    ctx->pc = 0x1395D0u;
label_1395d0:
    // 0x1395d0: 0xc04dc2c  jal         func_1370B0
    ctx->pc = 0x1395D0u;
    SET_GPR_U32(ctx, 31, 0x1395D8u);
    ctx->pc = 0x1370B0u;
    if (runtime->hasFunction(0x1370B0u)) {
        auto targetFn = runtime->lookupFunction(0x1370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D8u; }
        if (ctx->pc != 0x1395D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001370B0_0x1370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D8u; }
        if (ctx->pc != 0x1395D8u) { return; }
    }
    ctx->pc = 0x1395D8u;
label_1395d8:
    // 0x1395d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1395dc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1395dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1395e0: 0x8c42a208  lw          $v0, -0x5DF8($v0)
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943240)));
    // 0x1395e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1395e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1395e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1395E8u;
    {
        const bool branch_taken_0x1395e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395e8) {
            ctx->pc = 0x1395ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1395E8u;
            // 0x1395ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139608u;
            goto label_139608;
        }
    }
    ctx->pc = 0x1395F0u;
    // 0x1395f0: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x1395f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x1395f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1395f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395f8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1395F8u;
    SET_GPR_U32(ctx, 31, 0x139600u);
    ctx->pc = 0x1395FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1395F8u;
            // 0x1395fc: 0x2484afc0  addiu       $a0, $a0, -0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139600u; }
        if (ctx->pc != 0x139600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139600u; }
        if (ctx->pc != 0x139600u) { return; }
    }
    ctx->pc = 0x139600u;
label_139600:
    // 0x139600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139600u;
    {
        const bool branch_taken_0x139600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139600u;
            // 0x139604: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139600) {
            ctx->pc = 0x139614u;
            goto label_139614;
        }
    }
    ctx->pc = 0x139608u;
label_139608:
    // 0x139608: 0xc055770  jal         func_155DC0
    ctx->pc = 0x139608u;
    SET_GPR_U32(ctx, 31, 0x139610u);
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139610u; }
        if (ctx->pc != 0x139610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139610u; }
        if (ctx->pc != 0x139610u) { return; }
    }
    ctx->pc = 0x139610u;
label_139610:
    // 0x139610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_139614:
    // 0x139614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139618: 0x3e00008  jr          $ra
    ctx->pc = 0x139618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139618u;
            // 0x13961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139620u;
label_139620:
    // 0x139620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139624: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13962c: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x13962cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x139630: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x139630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x139634: 0x502001c3  beql        $at, $zero, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x139634u;
    {
        const bool branch_taken_0x139634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139634) {
            ctx->pc = 0x139638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139634u;
            // 0x139638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139D44u;
            goto label_139d44;
        }
    }
    ctx->pc = 0x13963Cu;
    // 0x13963c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x13963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x139640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x139640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139644: 0x2484c720  addiu       $a0, $a0, -0x38E0
    ctx->pc = 0x139644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
    // 0x139648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13964c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139650: 0x600008  jr          $v1
    ctx->pc = 0x139650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139658u: goto label_139658;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396CCu: goto label_1396cc;
            case 0x139824u: goto label_139824;
            case 0x1399CCu: goto label_1399cc;
            case 0x139B4Cu: goto label_139b4c;
            case 0x139BCCu: goto label_139bcc;
            case 0x139C40u: goto label_139c40;
            case 0x139CD0u: goto label_139cd0;
            case 0x139CFCu: goto label_139cfc;
            case 0x139D34u: goto label_139d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139658u;
label_139658:
    // 0x139658: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x139658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x13965c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139660: 0x9064f35a  lbu         $a0, -0xCA6($v1)
    ctx->pc = 0x139660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x139664: 0x50850005  beql        $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139664u;
    {
        const bool branch_taken_0x139664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x139664) {
            ctx->pc = 0x139668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139664u;
            // 0x139668: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13967Cu;
            goto label_13967c;
        }
    }
    ctx->pc = 0x13966Cu;
    // 0x13966c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139670: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139670u;
    {
        const bool branch_taken_0x139670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x139670) {
            ctx->pc = 0x139674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139670u;
            // 0x139674: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139688u;
            goto label_139688;
        }
    }
    ctx->pc = 0x139678u;
    // 0x139678: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13967c:
    // 0x13967c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139680: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x139680u;
    {
        const bool branch_taken_0x139680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139680u;
            // 0x139684: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139680) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139688u;
    SET_GPR_U32(ctx, 31, 0x139690u);
    ctx->pc = 0x13968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139688u;
            // 0x13968c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139690u; }
        if (ctx->pc != 0x139690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139690u; }
        if (ctx->pc != 0x139690u) { return; }
    }
    ctx->pc = 0x139690u;
label_139690:
    // 0x139690: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139694: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139698: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x139698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x13969c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1396a0: 0xa04358b0  sb          $v1, 0x58B0($v0)
    ctx->pc = 0x1396a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22704), (uint8_t)GPR_U32(ctx, 3));
label_1396a4:
    // 0x1396a4: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1396a8: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1396A8u;
    SET_GPR_U32(ctx, 31, 0x1396B0u);
    ctx->pc = 0x1396ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1396A8u;
            // 0x1396ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396B0u; }
        if (ctx->pc != 0x1396B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396B0u; }
        if (ctx->pc != 0x1396B0u) { return; }
    }
    ctx->pc = 0x1396B0u;
label_1396b0:
    // 0x1396b0: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x1396B0u;
    {
        const bool branch_taken_0x1396b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396b0) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x1396B8u;
    // 0x1396b8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1396b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1396bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1396bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1396c0: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x1396c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x1396c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1396c8: 0xa04358b0  sb          $v1, 0x58B0($v0)
    ctx->pc = 0x1396c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22704), (uint8_t)GPR_U32(ctx, 3));
label_1396cc:
    // 0x1396cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1396ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1396d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1396d4: 0x9044db55  lbu         $a0, -0x24AB($v0)
    ctx->pc = 0x1396d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x1396d8: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1396D8u;
    {
        const bool branch_taken_0x1396d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1396d8) {
            ctx->pc = 0x1396DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1396D8u;
            // 0x1396dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139754u;
            goto label_139754;
        }
    }
    ctx->pc = 0x1396E0u;
    // 0x1396e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1396e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1396e4: 0x50820010  beql        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1396E4u;
    {
        const bool branch_taken_0x1396e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1396e4) {
            ctx->pc = 0x1396E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1396E4u;
            // 0x1396e8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139728u;
            goto label_139728;
        }
    }
    ctx->pc = 0x1396ECu;
    // 0x1396ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1396ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1396f0: 0x50850003  beql        $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1396F0u;
    {
        const bool branch_taken_0x1396f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1396f0) {
            ctx->pc = 0x1396F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1396F0u;
            // 0x1396f4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139700u;
            goto label_139700;
        }
    }
    ctx->pc = 0x1396F8u;
    // 0x1396f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1396F8u;
    {
        const bool branch_taken_0x1396f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396f8) {
            ctx->pc = 0x13977Cu;
            goto label_13977c;
        }
    }
    ctx->pc = 0x139700u;
label_139700:
    // 0x139700: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139700u;
    SET_GPR_U32(ctx, 31, 0x139708u);
    ctx->pc = 0x139704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139700u;
            // 0x139704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139708u; }
        if (ctx->pc != 0x139708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139708u; }
        if (ctx->pc != 0x139708u) { return; }
    }
    ctx->pc = 0x139708u;
label_139708:
    // 0x139708: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x139708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x13970c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139710: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139710u;
    SET_GPR_U32(ctx, 31, 0x139718u);
    ctx->pc = 0x139714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139710u;
            // 0x139714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139718u; }
        if (ctx->pc != 0x139718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139718u; }
        if (ctx->pc != 0x139718u) { return; }
    }
    ctx->pc = 0x139718u;
label_139718:
    // 0x139718: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x13971c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139720: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x139720u;
    {
        const bool branch_taken_0x139720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139720u;
            // 0x139724: 0xac435898  sw          $v1, 0x5898($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139720) {
            ctx->pc = 0x13977Cu;
            goto label_13977c;
        }
    }
    ctx->pc = 0x139728u;
label_139728:
    // 0x139728: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13972c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13972Cu;
    SET_GPR_U32(ctx, 31, 0x139734u);
    ctx->pc = 0x139730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13972Cu;
            // 0x139730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139734u; }
        if (ctx->pc != 0x139734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139734u; }
        if (ctx->pc != 0x139734u) { return; }
    }
    ctx->pc = 0x139734u;
label_139734:
    // 0x139734: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x139734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x139738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13973c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13973Cu;
    SET_GPR_U32(ctx, 31, 0x139744u);
    ctx->pc = 0x139740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13973Cu;
            // 0x139740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139744u; }
        if (ctx->pc != 0x139744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139744u; }
        if (ctx->pc != 0x139744u) { return; }
    }
    ctx->pc = 0x139744u;
label_139744:
    // 0x139744: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x139744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x139748: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13974c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13974Cu;
    {
        const bool branch_taken_0x13974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13974Cu;
            // 0x139750: 0xac435898  sw          $v1, 0x5898($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13974c) {
            ctx->pc = 0x13977Cu;
            goto label_13977c;
        }
    }
    ctx->pc = 0x139754u;
label_139754:
    // 0x139754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139758: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139758u;
    SET_GPR_U32(ctx, 31, 0x139760u);
    ctx->pc = 0x13975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139758u;
            // 0x13975c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139760u; }
        if (ctx->pc != 0x139760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139760u; }
        if (ctx->pc != 0x139760u) { return; }
    }
    ctx->pc = 0x139760u;
label_139760:
    // 0x139760: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x139760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x139764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139768: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139768u;
    SET_GPR_U32(ctx, 31, 0x139770u);
    ctx->pc = 0x13976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139768u;
            // 0x13976c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139770u; }
        if (ctx->pc != 0x139770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139770u; }
        if (ctx->pc != 0x139770u) { return; }
    }
    ctx->pc = 0x139770u;
label_139770:
    // 0x139770: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x139770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x139774: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139778: 0xac435898  sw          $v1, 0x5898($v0)
    ctx->pc = 0x139778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22680), GPR_U32(ctx, 3));
label_13977c:
    // 0x13977c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x139780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139784: 0x9044dd9d  lbu         $a0, -0x2263($v0)
    ctx->pc = 0x139784u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x139788: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x139788u;
    {
        const bool branch_taken_0x139788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139788) {
            ctx->pc = 0x13978Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139788u;
            // 0x13978c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1397F4u;
            goto label_1397f4;
        }
    }
    ctx->pc = 0x139790u;
    // 0x139790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x139790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139794: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x139794u;
    {
        const bool branch_taken_0x139794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x139794) {
            ctx->pc = 0x139798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139794u;
            // 0x139798: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1397D0u;
            goto label_1397d0;
        }
    }
    ctx->pc = 0x13979Cu;
    // 0x13979c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397a0: 0x50850003  beql        $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397A0u;
    {
        const bool branch_taken_0x1397a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1397a0) {
            ctx->pc = 0x1397A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1397A0u;
            // 0x1397a4: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1397B0u;
            goto label_1397b0;
        }
    }
    ctx->pc = 0x1397A8u;
    // 0x1397a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1397A8u;
    {
        const bool branch_taken_0x1397a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397a8) {
            ctx->pc = 0x139810u;
            goto label_139810;
        }
    }
    ctx->pc = 0x1397B0u;
label_1397b0:
    // 0x1397b0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1397B0u;
    SET_GPR_U32(ctx, 31, 0x1397B8u);
    ctx->pc = 0x1397B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1397B0u;
            // 0x1397b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397B8u; }
        if (ctx->pc != 0x1397B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397B8u; }
        if (ctx->pc != 0x1397B8u) { return; }
    }
    ctx->pc = 0x1397B8u;
label_1397b8:
    // 0x1397b8: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1397bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1397bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397c0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1397C0u;
    SET_GPR_U32(ctx, 31, 0x1397C8u);
    ctx->pc = 0x1397C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1397C0u;
            // 0x1397c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397C8u; }
        if (ctx->pc != 0x1397C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397C8u; }
        if (ctx->pc != 0x1397C8u) { return; }
    }
    ctx->pc = 0x1397C8u;
label_1397c8:
    // 0x1397c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1397C8u;
    {
        const bool branch_taken_0x1397c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397c8) {
            ctx->pc = 0x139810u;
            goto label_139810;
        }
    }
    ctx->pc = 0x1397D0u;
label_1397d0:
    // 0x1397d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1397d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397d4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1397D4u;
    SET_GPR_U32(ctx, 31, 0x1397DCu);
    ctx->pc = 0x1397D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1397D4u;
            // 0x1397d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397DCu; }
        if (ctx->pc != 0x1397DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397DCu; }
        if (ctx->pc != 0x1397DCu) { return; }
    }
    ctx->pc = 0x1397DCu;
label_1397dc:
    // 0x1397dc: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x1397dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1397e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397e4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1397E4u;
    SET_GPR_U32(ctx, 31, 0x1397ECu);
    ctx->pc = 0x1397E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1397E4u;
            // 0x1397e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397ECu; }
        if (ctx->pc != 0x1397ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1397ECu; }
        if (ctx->pc != 0x1397ECu) { return; }
    }
    ctx->pc = 0x1397ECu;
label_1397ec:
    // 0x1397ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1397ECu;
    {
        const bool branch_taken_0x1397ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397ec) {
            ctx->pc = 0x139810u;
            goto label_139810;
        }
    }
    ctx->pc = 0x1397F4u;
label_1397f4:
    // 0x1397f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1397f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397f8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1397F8u;
    SET_GPR_U32(ctx, 31, 0x139800u);
    ctx->pc = 0x1397FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1397F8u;
            // 0x1397fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139800u; }
        if (ctx->pc != 0x139800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139800u; }
        if (ctx->pc != 0x139800u) { return; }
    }
    ctx->pc = 0x139800u;
label_139800:
    // 0x139800: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x139800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x139804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139808: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139808u;
    SET_GPR_U32(ctx, 31, 0x139810u);
    ctx->pc = 0x13980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139808u;
            // 0x13980c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139810u; }
        if (ctx->pc != 0x139810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139810u; }
        if (ctx->pc != 0x139810u) { return; }
    }
    ctx->pc = 0x139810u;
label_139810:
    // 0x139810: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139814: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139818: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x139818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x13981c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139820: 0xa04358b0  sb          $v1, 0x58B0($v0)
    ctx->pc = 0x139820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22704), (uint8_t)GPR_U32(ctx, 3));
label_139824:
    // 0x139824: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139828: 0x8c445898  lw          $a0, 0x5898($v0)
    ctx->pc = 0x139828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22680)));
    // 0x13982c: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x13982Cu;
    SET_GPR_U32(ctx, 31, 0x139834u);
    ctx->pc = 0x139830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13982Cu;
            // 0x139830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139834u; }
        if (ctx->pc != 0x139834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139834u; }
        if (ctx->pc != 0x139834u) { return; }
    }
    ctx->pc = 0x139834u;
label_139834:
    // 0x139834: 0x10400142  beqz        $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x139834u;
    {
        const bool branch_taken_0x139834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139834) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x13983Cu;
    // 0x13983c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x139840: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x139840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x139844: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x139844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x139848: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139848u;
    {
        const bool branch_taken_0x139848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x139848) {
            ctx->pc = 0x139858u;
            goto label_139858;
        }
    }
    ctx->pc = 0x139850u;
    // 0x139850: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x139850u;
    SET_GPR_U32(ctx, 31, 0x139858u);
    ctx->pc = 0x350D80u;
    if (runtime->hasFunction(0x350D80u)) {
        auto targetFn = runtime->lookupFunction(0x350D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139858u; }
        if (ctx->pc != 0x139858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350D80_0x350d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139858u; }
        if (ctx->pc != 0x139858u) { return; }
    }
    ctx->pc = 0x139858u;
label_139858:
    // 0x139858: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x139858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13985c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x139860: 0x24849d50  addiu       $a0, $a0, -0x62B0
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942032));
    // 0x139864: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x139864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x139868: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x139868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13986c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x13986cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x139870: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x139870u;
    SET_GPR_U32(ctx, 31, 0x139878u);
    ctx->pc = 0x139874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139870u;
            // 0x139874: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139878u; }
        if (ctx->pc != 0x139878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139878u; }
        if (ctx->pc != 0x139878u) { return; }
    }
    ctx->pc = 0x139878u;
label_139878:
    // 0x139878: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x139878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13987c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139880: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x139880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139884: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x139888: 0x24635c10  addiu       $v1, $v1, 0x5C10
    ctx->pc = 0x139888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23568));
    // 0x13988c: 0x24849d50  addiu       $a0, $a0, -0x62B0
    ctx->pc = 0x13988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942032));
    // 0x139890: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x139890u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x139894: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x139894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x139898: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x139898u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x13989c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1398a0: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1398a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1398a4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1398a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1398a8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1398a8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1398ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1398acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398b0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1398b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1398b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1398b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1398B8u;
    SET_GPR_U32(ctx, 31, 0x1398C0u);
    ctx->pc = 0x1398BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1398B8u;
            // 0x1398bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398C0u; }
        if (ctx->pc != 0x1398C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398C0u; }
        if (ctx->pc != 0x1398C0u) { return; }
    }
    ctx->pc = 0x1398C0u;
label_1398c0:
    // 0x1398c0: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x1398c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1398c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1398c8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1398c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1398cc: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x1398ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x1398d0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1398d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1398d4: 0x24635c10  addiu       $v1, $v1, 0x5C10
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23568));
    // 0x1398d8: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x1398d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1398dc: 0x2484a500  addiu       $a0, $a0, -0x5B00
    ctx->pc = 0x1398dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    // 0x1398e0: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x1398e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1398e4: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x1398e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x1398e8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1398e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1398ec: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1398ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1398f0: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1398f0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1398f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1398f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1398f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1398f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398fc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1398fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x139900: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x139900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x139904: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x139904u;
    SET_GPR_U32(ctx, 31, 0x13990Cu);
    ctx->pc = 0x139908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139904u;
            // 0x139908: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13990Cu; }
        if (ctx->pc != 0x13990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13990Cu; }
        if (ctx->pc != 0x13990Cu) { return; }
    }
    ctx->pc = 0x13990Cu;
label_13990c:
    // 0x13990c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x13990cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x139910: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139914: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x139914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139918: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x139918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x13991c: 0x24635c18  addiu       $v1, $v1, 0x5C18
    ctx->pc = 0x13991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x139920: 0x2484a500  addiu       $a0, $a0, -0x5B00
    ctx->pc = 0x139920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    // 0x139924: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x139924u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x139928: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x13992c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x13992cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x139930: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x139934: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x139934u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139938: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13993c: 0xa1200003  sb          $zero, 0x3($t1)
    ctx->pc = 0x13993cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139944: 0xa1200004  sb          $zero, 0x4($t1)
    ctx->pc = 0x139944u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x139948: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x139948u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13994c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x13994cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x139950: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x139954: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x139954u;
    SET_GPR_U32(ctx, 31, 0x13995Cu);
    ctx->pc = 0x139958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139954u;
            // 0x139958: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13995Cu; }
        if (ctx->pc != 0x13995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13995Cu; }
        if (ctx->pc != 0x13995Cu) { return; }
    }
    ctx->pc = 0x13995Cu;
label_13995c:
    // 0x13995c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x13995cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x139960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139964: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x139964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x139968: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x13996c: 0x25085c18  addiu       $t0, $t0, 0x5C18
    ctx->pc = 0x13996cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23576));
    // 0x139970: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x139970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139974: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x139974u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x139978: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x139978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x13997c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x13997cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x139980: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x139984: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x139984u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139988: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13998c: 0xa1200003  sb          $zero, 0x3($t1)
    ctx->pc = 0x13998cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139990: 0xa1200004  sb          $zero, 0x4($t1)
    ctx->pc = 0x139990u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x139994: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x139994u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x139998: 0x8cc65c00  lw          $a2, 0x5C00($a2)
    ctx->pc = 0x139998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 23552)));
    // 0x13999c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1399a0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1399a4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1399a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1399a8: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x1399a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1399ac: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x1399acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1399b0: 0x8ca55c04  lw          $a1, 0x5C04($a1)
    ctx->pc = 0x1399b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23556)));
    // 0x1399b4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x1399b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1399b8: 0xa0a70001  sb          $a3, 0x1($a1)
    ctx->pc = 0x1399b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1399bc: 0x908458b0  lbu         $a0, 0x58B0($a0)
    ctx->pc = 0x1399bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22704)));
    // 0x1399c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1399c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1399c4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1399C4u;
    {
        const bool branch_taken_0x1399c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1399C4u;
            // 0x1399c8: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399c4) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x1399CCu;
label_1399cc:
    // 0x1399cc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1399ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1399d0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1399d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1399d4: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1399d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1399d8: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1399D8u;
    {
        const bool branch_taken_0x1399d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1399d8) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1399E0u;
    // 0x1399e0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1399e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1399e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1399e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1399e8: 0x84845972  lh          $a0, 0x5972($a0)
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22898)));
    // 0x1399ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1399ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1399f0: 0xa4645972  sh          $a0, 0x5972($v1)
    ctx->pc = 0x1399f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22898), (uint16_t)GPR_U32(ctx, 4));
    // 0x1399f4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1399f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1399f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1399f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1399fc: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1399FCu;
    {
        const bool branch_taken_0x1399fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1399fc) {
            ctx->pc = 0x139A24u;
            goto label_139a24;
        }
    }
    ctx->pc = 0x139A04u;
    // 0x139a04: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x139a08: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a0c: 0xa4645972  sh          $a0, 0x5972($v1)
    ctx->pc = 0x139a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22898), (uint16_t)GPR_U32(ctx, 4));
    // 0x139a10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a14: 0x84645970  lh          $a0, 0x5970($v1)
    ctx->pc = 0x139a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22896)));
    // 0x139a18: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x139a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x139a20: 0xa4645970  sh          $a0, 0x5970($v1)
    ctx->pc = 0x139a20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22896), (uint16_t)GPR_U32(ctx, 4));
label_139a24:
    // 0x139a24: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a28: 0x84635970  lh          $v1, 0x5970($v1)
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22896)));
    // 0x139a2c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139A2Cu;
    {
        const bool branch_taken_0x139a2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139a2c) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139A34u;
    // 0x139a34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139a38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a3c: 0xa4645960  sh          $a0, 0x5960($v1)
    ctx->pc = 0x139a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 4));
    // 0x139a40: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139a44: 0xa4605970  sh          $zero, 0x5970($v1)
    ctx->pc = 0x139a44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22896), (uint16_t)GPR_U32(ctx, 0));
label_139a48:
    // 0x139a48: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x139a48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    // 0x139a4c: 0x3c0c0041  lui         $t4, 0x41
    ctx->pc = 0x139a4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65 << 16));
    // 0x139a50: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x139a50u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a54: 0x25ad5c18  addiu       $t5, $t5, 0x5C18
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 23576));
    // 0x139a58: 0x258c5c08  addiu       $t4, $t4, 0x5C08
    ctx->pc = 0x139a58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 23560));
    // 0x139a5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139a60: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x139a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139a64: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x139a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139a68: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x139a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x139a6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x139a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139a70: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x139a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_139a74:
    // 0x139a74: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x139a74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x139a78: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x139a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x139a7c: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x139a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x139a80: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x139a80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139a84: 0x81630001  lb          $v1, 0x1($t3)
    ctx->pc = 0x139a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x139a88: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x139a88u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x139a8c: 0x81630001  lb          $v1, 0x1($t3)
    ctx->pc = 0x139a8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x139a90: 0x1069000f  beq         $v1, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x139A90u;
    {
        const bool branch_taken_0x139a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x139a90) {
            ctx->pc = 0x139AD0u;
            goto label_139ad0;
        }
    }
    ctx->pc = 0x139A98u;
    // 0x139a98: 0x1068000b  beq         $v1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x139A98u;
    {
        const bool branch_taken_0x139a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x139a98) {
            ctx->pc = 0x139AC8u;
            goto label_139ac8;
        }
    }
    ctx->pc = 0x139AA0u;
    // 0x139aa0: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x139AA0u;
    {
        const bool branch_taken_0x139aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x139aa0) {
            ctx->pc = 0x139AC0u;
            goto label_139ac0;
        }
    }
    ctx->pc = 0x139AA8u;
    // 0x139aa8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139AA8u;
    {
        const bool branch_taken_0x139aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139aa8) {
            ctx->pc = 0x139AB8u;
            goto label_139ab8;
        }
    }
    ctx->pc = 0x139AB0u;
    // 0x139ab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139AB0u;
    {
        const bool branch_taken_0x139ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ab0) {
            ctx->pc = 0x139AD8u;
            goto label_139ad8;
        }
    }
    ctx->pc = 0x139AB8u;
label_139ab8:
    // 0x139ab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139AB8u;
    {
        const bool branch_taken_0x139ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AB8u;
            // 0x139abc: 0xa1400001  sb          $zero, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ab8) {
            ctx->pc = 0x139AD8u;
            goto label_139ad8;
        }
    }
    ctx->pc = 0x139AC0u;
label_139ac0:
    // 0x139ac0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139AC0u;
    {
        const bool branch_taken_0x139ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AC0u;
            // 0x139ac4: 0xa1460001  sb          $a2, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ac0) {
            ctx->pc = 0x139AD8u;
            goto label_139ad8;
        }
    }
    ctx->pc = 0x139AC8u;
label_139ac8:
    // 0x139ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139AC8u;
    {
        const bool branch_taken_0x139ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AC8u;
            // 0x139acc: 0xa1450001  sb          $a1, 0x1($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ac8) {
            ctx->pc = 0x139AD8u;
            goto label_139ad8;
        }
    }
    ctx->pc = 0x139AD0u;
label_139ad0:
    // 0x139ad0: 0xa1440001  sb          $a0, 0x1($t2)
    ctx->pc = 0x139ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x139ad4: 0x0  nop
    ctx->pc = 0x139ad4u;
    // NOP
label_139ad8:
    // 0x139ad8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x139adc: 0x29c30002  slti        $v1, $t6, 0x2
    ctx->pc = 0x139adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x139ae0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x139ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x139ae4: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x139AE4u;
    {
        const bool branch_taken_0x139ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AE4u;
            // 0x139ae8: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ae4) {
            ctx->pc = 0x139A74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139a74;
        }
    }
    ctx->pc = 0x139AECu;
    // 0x139aec: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x139aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x139af0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139af8: 0x24c65c10  addiu       $a2, $a2, 0x5C10
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23568));
    // 0x139afc: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x139afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_139b00:
    // 0x139b00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x139b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x139b04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x139b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139b08: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x139b08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x139b0c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x139B0Cu;
    {
        const bool branch_taken_0x139b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x139b0c) {
            ctx->pc = 0x139B18u;
            goto label_139b18;
        }
    }
    ctx->pc = 0x139B14u;
    // 0x139b14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x139b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_139b18:
    // 0x139b18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x139b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x139b1c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x139b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x139b20: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x139B20u;
    {
        const bool branch_taken_0x139b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B20u;
            // 0x139b24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b20) {
            ctx->pc = 0x139B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139b00;
        }
    }
    ctx->pc = 0x139B28u;
    // 0x139b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139b2c: 0x14e30084  bne         $a3, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x139B2Cu;
    {
        const bool branch_taken_0x139b2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x139b2c) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139B34u;
    // 0x139b34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x139b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x139b38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139b3c: 0x908458b0  lbu         $a0, 0x58B0($a0)
    ctx->pc = 0x139b3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22704)));
    // 0x139b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139b44: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x139B44u;
    {
        const bool branch_taken_0x139b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B44u;
            // 0x139b48: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b44) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139B4Cu;
label_139b4c:
    // 0x139b4c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x139b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x139b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b54: 0x9065f35a  lbu         $a1, -0xCA6($v1)
    ctx->pc = 0x139b54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x139b58: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139B58u;
    {
        const bool branch_taken_0x139b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x139b58) {
            ctx->pc = 0x139B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139B58u;
            // 0x139b5c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139B70u;
            goto label_139b70;
        }
    }
    ctx->pc = 0x139B60u;
    // 0x139b60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x139b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139b64: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x139B64u;
    {
        const bool branch_taken_0x139b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x139b64) {
            ctx->pc = 0x139B90u;
            goto label_139b90;
        }
    }
    ctx->pc = 0x139B6Cu;
    // 0x139b6c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x139b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_139b70:
    // 0x139b70: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139b74: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x139b74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x139b78: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139b7c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x139b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139b80: 0xa4605968  sh          $zero, 0x5968($v1)
    ctx->pc = 0x139b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 0));
    // 0x139b84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139b88: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x139B88u;
    {
        const bool branch_taken_0x139b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B88u;
            // 0x139b8c: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b88) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139B90u;
label_139b90:
    // 0x139b90: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139b94: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x139b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139b98: 0x8c675c10  lw          $a3, 0x5C10($v1)
    ctx->pc = 0x139b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23568)));
    // 0x139b9c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x139ba0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x139ba4: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x139ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x139ba8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139bac: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x139bacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x139bb0: 0x8ca55c14  lw          $a1, 0x5C14($a1)
    ctx->pc = 0x139bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23572)));
    // 0x139bb4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x139bb8: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x139bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x139bbc: 0x908458b0  lbu         $a0, 0x58B0($a0)
    ctx->pc = 0x139bbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22704)));
    // 0x139bc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139bc4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x139BC4u;
    {
        const bool branch_taken_0x139bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BC4u;
            // 0x139bc8: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bc4) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139BCCu;
label_139bcc:
    // 0x139bcc: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x139bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bd8: 0x24e75c10  addiu       $a3, $a3, 0x5C10
    ctx->pc = 0x139bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23568));
    // 0x139bdc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_139be0:
    // 0x139be0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x139be4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x139be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139be8: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x139be8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x139bec: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x139BECu;
    {
        const bool branch_taken_0x139bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x139bec) {
            ctx->pc = 0x139BF8u;
            goto label_139bf8;
        }
    }
    ctx->pc = 0x139BF4u;
    // 0x139bf4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x139bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_139bf8:
    // 0x139bf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x139bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x139bfc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x139bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x139c00: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x139C00u;
    {
        const bool branch_taken_0x139c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C00u;
            // 0x139c04: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c00) {
            ctx->pc = 0x139BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139be0;
        }
    }
    ctx->pc = 0x139C08u;
    // 0x139c08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139c0c: 0x14a3004c  bne         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x139C0Cu;
    {
        const bool branch_taken_0x139c0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x139c0c) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139C14u;
    // 0x139c14: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x139c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x139c18: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c1c: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x139c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x139c20: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c24: 0xa4605968  sh          $zero, 0x5968($v1)
    ctx->pc = 0x139c24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 0));
    // 0x139c28: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c2c: 0x906458b0  lbu         $a0, 0x58B0($v1)
    ctx->pc = 0x139c2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x139c30: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139c38: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x139C38u;
    {
        const bool branch_taken_0x139c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C38u;
            // 0x139c3c: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c38) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139C40u;
label_139c40:
    // 0x139c40: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x139c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x139c44: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c48: 0x8484596a  lh          $a0, 0x596A($a0)
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22890)));
    // 0x139c4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x139c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x139c50: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x139c50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x139c54: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x139c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x139c58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139c58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x139c5c: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x139C5Cu;
    {
        const bool branch_taken_0x139c5c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139c5c) {
            ctx->pc = 0x139C84u;
            goto label_139c84;
        }
    }
    ctx->pc = 0x139C64u;
    // 0x139c64: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x139c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x139c68: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c6c: 0xa464596a  sh          $a0, 0x596A($v1)
    ctx->pc = 0x139c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22890), (uint16_t)GPR_U32(ctx, 4));
    // 0x139c70: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c74: 0x84645968  lh          $a0, 0x5968($v1)
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22888)));
    // 0x139c78: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x139c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x139c80: 0xa4645968  sh          $a0, 0x5968($v1)
    ctx->pc = 0x139c80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 4));
label_139c84:
    // 0x139c84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c88: 0x84635968  lh          $v1, 0x5968($v1)
    ctx->pc = 0x139c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22888)));
    // 0x139c8c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139C8Cu;
    {
        const bool branch_taken_0x139c8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139c8c) {
            ctx->pc = 0x139CA8u;
            goto label_139ca8;
        }
    }
    ctx->pc = 0x139C94u;
    // 0x139c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139c98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139c9c: 0xa4645960  sh          $a0, 0x5960($v1)
    ctx->pc = 0x139c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 4));
    // 0x139ca0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139ca4: 0xa4605968  sh          $zero, 0x5968($v1)
    ctx->pc = 0x139ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22888), (uint16_t)GPR_U32(ctx, 0));
label_139ca8:
    // 0x139ca8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139cac: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x139cacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x139cb0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x139CB0u;
    {
        const bool branch_taken_0x139cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cb0) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139CB8u;
    // 0x139cb8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x139cbc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139cc0: 0x908458b0  lbu         $a0, 0x58B0($a0)
    ctx->pc = 0x139cc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22704)));
    // 0x139cc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139cc8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x139CC8u;
    {
        const bool branch_taken_0x139cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CC8u;
            // 0x139ccc: 0xa06458b0  sb          $a0, 0x58B0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22704), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cc8) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139CD0u;
label_139cd0:
    // 0x139cd0: 0xc0538d0  jal         func_14E340
    ctx->pc = 0x139CD0u;
    SET_GPR_U32(ctx, 31, 0x139CD8u);
    ctx->pc = 0x14E340u;
    if (runtime->hasFunction(0x14E340u)) {
        auto targetFn = runtime->lookupFunction(0x14E340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CD8u; }
        if (ctx->pc != 0x139CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E340_0x14e340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CD8u; }
        if (ctx->pc != 0x139CD8u) { return; }
    }
    ctx->pc = 0x139CD8u;
label_139cd8:
    // 0x139cd8: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x139cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x139cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ce0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139CE0u;
    SET_GPR_U32(ctx, 31, 0x139CE8u);
    ctx->pc = 0x139CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139CE0u;
            // 0x139ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CE8u; }
        if (ctx->pc != 0x139CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CE8u; }
        if (ctx->pc != 0x139CE8u) { return; }
    }
    ctx->pc = 0x139CE8u;
label_139ce8:
    // 0x139ce8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139cec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139cf0: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x139cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x139cf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139cf8: 0xa04358b0  sb          $v1, 0x58B0($v0)
    ctx->pc = 0x139cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22704), (uint8_t)GPR_U32(ctx, 3));
label_139cfc:
    // 0x139cfc: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x139cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x139d00: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x139D00u;
    SET_GPR_U32(ctx, 31, 0x139D08u);
    ctx->pc = 0x139D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139D00u;
            // 0x139d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D08u; }
        if (ctx->pc != 0x139D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D08u; }
        if (ctx->pc != 0x139D08u) { return; }
    }
    ctx->pc = 0x139D08u;
label_139d08:
    // 0x139d08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x139D08u;
    {
        const bool branch_taken_0x139d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d08) {
            ctx->pc = 0x139D40u;
            goto label_139d40;
        }
    }
    ctx->pc = 0x139D10u;
    // 0x139d10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139d14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x139d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x139d18: 0x906358b0  lbu         $v1, 0x58B0($v1)
    ctx->pc = 0x139d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22704)));
    // 0x139d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x139d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139d2c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x139D2Cu;
    SET_GPR_U32(ctx, 31, 0x139D34u);
    ctx->pc = 0x139D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139D2Cu;
            // 0x139d30: 0xa04358b0  sb          $v1, 0x58B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D34u; }
        if (ctx->pc != 0x139D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D34u; }
        if (ctx->pc != 0x139D34u) { return; }
    }
    ctx->pc = 0x139D34u;
label_139d34:
    // 0x139d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139d38: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139d3c: 0xa06458a8  sb          $a0, 0x58A8($v1)
    ctx->pc = 0x139d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22696), (uint8_t)GPR_U32(ctx, 4));
label_139d40:
    // 0x139d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139d44:
    // 0x139d44: 0x3e00008  jr          $ra
    ctx->pc = 0x139D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D44u;
            // 0x139d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139D4Cu;
    // 0x139d4c: 0x0  nop
    ctx->pc = 0x139d4cu;
    // NOP
label_139d50:
    // 0x139d50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x139d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x139d54: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x139d54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x139d58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x139d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x139d5c: 0x2508dbc0  addiu       $t0, $t0, -0x2440
    ctx->pc = 0x139d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
    // 0x139d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x139d64: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x139d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x139d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139d6c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_139d7c:
    // 0x139d7c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x139d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x139d80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x139d84: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x139d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x139d88: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x139d88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x139d8c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x139d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x139d90: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x139d94: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x139D94u;
    {
        const bool branch_taken_0x139d94 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x139D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D94u;
            // 0x139d98: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d94) {
            ctx->pc = 0x139D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139d7c;
        }
    }
    ctx->pc = 0x139D9Cu;
    // 0x139d9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139da0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x139da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139da4: 0xc461dc10  lwc1        $f1, -0x23F0($v1)
    ctx->pc = 0x139da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139da8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x139dac: 0x82070001  lb          $a3, 0x1($s0)
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x139db0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139db4: 0xc462dc14  lwc1        $f2, -0x23EC($v1)
    ctx->pc = 0x139db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139db8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x139db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x139dbc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139dc0: 0xc460dc18  lwc1        $f0, -0x23E8($v1)
    ctx->pc = 0x139dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139dc4: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x139dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x139dc8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139dcc: 0xc461dc1c  lwc1        $f1, -0x23E4($v1)
    ctx->pc = 0x139dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139dd0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x139dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x139dd4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139dd8: 0xc460dc20  lwc1        $f0, -0x23E0($v1)
    ctx->pc = 0x139dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139ddc: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x139ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x139de0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139de4: 0xc461dc24  lwc1        $f1, -0x23DC($v1)
    ctx->pc = 0x139de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139de8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x139de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x139dec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139df0: 0xc460dc30  lwc1        $f0, -0x23D0($v1)
    ctx->pc = 0x139df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139df4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x139df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x139df8: 0xc481dc34  lwc1        $f1, -0x23CC($a0)
    ctx->pc = 0x139df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294958132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139dfc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x139dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x139e00: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139e04: 0xc460dc38  lwc1        $f0, -0x23C8($v1)
    ctx->pc = 0x139e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e08: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x139e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x139e0c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x139e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x139e10: 0xc481dc3c  lwc1        $f1, -0x23C4($a0)
    ctx->pc = 0x139e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294958140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x139e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139e18: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139e1c: 0xc460dc40  lwc1        $f0, -0x23C0($v1)
    ctx->pc = 0x139e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e20: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x139e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x139e24: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x139e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x139e28: 0xc481dc44  lwc1        $f1, -0x23BC($a0)
    ctx->pc = 0x139e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294958148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e2c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x139e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x139e30: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139e34: 0xc460dc48  lwc1        $f0, -0x23B8($v1)
    ctx->pc = 0x139e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e38: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x139e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x139e3c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x139e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x139e40: 0xc481dc4c  lwc1        $f1, -0x23B4($a0)
    ctx->pc = 0x139e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294958156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e44: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x139e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x139e48: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x139e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x139e4c: 0xc460dc50  lwc1        $f0, -0x23B0($v1)
    ctx->pc = 0x139e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e50: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x139e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x139e54: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x139e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x139e58: 0x10e301a1  beq         $a3, $v1, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x139E58u;
    {
        const bool branch_taken_0x139e58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x139E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E58u;
            // 0x139e5c: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e58) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x139E60u;
    // 0x139e60: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x139e64: 0x50e30198  beql        $a3, $v1, . + 4 + (0x198 << 2)
    ctx->pc = 0x139E64u;
    {
        const bool branch_taken_0x139e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139e64) {
            ctx->pc = 0x139E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E64u;
            // 0x139e68: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A4C8u;
            goto label_13a4c8;
        }
    }
    ctx->pc = 0x139E6Cu;
    // 0x139e6c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139e70: 0x50e40144  beql        $a3, $a0, . + 4 + (0x144 << 2)
    ctx->pc = 0x139E70u;
    {
        const bool branch_taken_0x139e70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x139e70) {
            ctx->pc = 0x139E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E70u;
            // 0x139e74: 0x92070000  lbu         $a3, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A384u;
            goto label_13a384;
        }
    }
    ctx->pc = 0x139E78u;
    // 0x139e78: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x139e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x139e7c: 0x50e30199  beql        $a3, $v1, . + 4 + (0x199 << 2)
    ctx->pc = 0x139E7Cu;
    {
        const bool branch_taken_0x139e7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139e7c) {
            ctx->pc = 0x139E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E7Cu;
            // 0x139e80: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A4E4u;
            goto label_13a4e4;
        }
    }
    ctx->pc = 0x139E84u;
    // 0x139e84: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x139e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x139e88: 0x50e30136  beql        $a3, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x139E88u;
    {
        const bool branch_taken_0x139e88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139e88) {
            ctx->pc = 0x139E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E88u;
            // 0x139e8c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A364u;
            goto label_13a364;
        }
    }
    ctx->pc = 0x139E90u;
    // 0x139e90: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x139e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139e94: 0x50e50128  beql        $a3, $a1, . + 4 + (0x128 << 2)
    ctx->pc = 0x139E94u;
    {
        const bool branch_taken_0x139e94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x139e94) {
            ctx->pc = 0x139E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E94u;
            // 0x139e98: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A338u;
            goto label_13a338;
        }
    }
    ctx->pc = 0x139E9Cu;
    // 0x139e9c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x139e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x139ea0: 0x50e300d7  beql        $a3, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x139EA0u;
    {
        const bool branch_taken_0x139ea0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139ea0) {
            ctx->pc = 0x139EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139EA0u;
            // 0x139ea4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A200u;
            goto label_13a200;
        }
    }
    ctx->pc = 0x139EA8u;
    // 0x139ea8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x139ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x139eac: 0x50e600c9  beql        $a3, $a2, . + 4 + (0xC9 << 2)
    ctx->pc = 0x139EACu;
    {
        const bool branch_taken_0x139eac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x139eac) {
            ctx->pc = 0x139EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139EACu;
            // 0x139eb0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A1D4u;
            goto label_13a1d4;
        }
    }
    ctx->pc = 0x139EB4u;
    // 0x139eb4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x139eb8: 0x50e30073  beql        $a3, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x139EB8u;
    {
        const bool branch_taken_0x139eb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139eb8) {
            ctx->pc = 0x139EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139EB8u;
            // 0x139ebc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A088u;
            goto label_13a088;
        }
    }
    ctx->pc = 0x139EC0u;
    // 0x139ec0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x139ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139ec4: 0x50e50065  beql        $a3, $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x139EC4u;
    {
        const bool branch_taken_0x139ec4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x139ec4) {
            ctx->pc = 0x139EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139EC4u;
            // 0x139ec8: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A05Cu;
            goto label_13a05c;
        }
    }
    ctx->pc = 0x139ECCu;
    // 0x139ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ed0: 0x50e30010  beql        $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x139ED0u;
    {
        const bool branch_taken_0x139ed0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x139ed0) {
            ctx->pc = 0x139ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139ED0u;
            // 0x139ed4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139F14u;
            goto label_139f14;
        }
    }
    ctx->pc = 0x139ED8u;
    // 0x139ed8: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x139ED8u;
    {
        const bool branch_taken_0x139ed8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ed8) {
            ctx->pc = 0x139EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139ED8u;
            // 0x139edc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139EE8u;
            goto label_139ee8;
        }
    }
    ctx->pc = 0x139EE0u;
    // 0x139ee0: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x139EE0u;
    {
        const bool branch_taken_0x139ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ee0) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x139EE8u;
label_139ee8:
    // 0x139ee8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139eec: 0x24635c48  addiu       $v1, $v1, 0x5C48
    ctx->pc = 0x139eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23624));
    // 0x139ef0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x139ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x139ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139efc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x139efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139f00: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x139f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x139f04: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x139f04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x139f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139f0c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x139f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x139f10: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x139f10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_139f14:
    // 0x139f14: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x139f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x139f18: 0x24635c18  addiu       $v1, $v1, 0x5C18
    ctx->pc = 0x139f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x139f1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x139f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x139f20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139f24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x139f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139f28: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x139f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139f2c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x139f2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x139f30: 0x1860016b  blez        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x139F30u;
    {
        const bool branch_taken_0x139f30 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x139f30) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x139F38u;
    // 0x139f38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x139f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x139f3c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x139f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x139f40: 0x92090000  lbu         $t1, 0x0($s0)
    ctx->pc = 0x139f40u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139f44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x139f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x139f48: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x139f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x139f4c: 0x24e7db78  addiu       $a3, $a3, -0x2488
    ctx->pc = 0x139f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957944));
    // 0x139f50: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x139f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x139f54: 0x2484dcac  addiu       $a0, $a0, -0x2354
    ctx->pc = 0x139f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958252));
    // 0x139f58: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x139f58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x139f5c: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x139f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x139f60: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x139f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x139f64: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x139f68: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x139f68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x139f6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x139f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139f70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x139f74: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x139f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x139f78: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x139f78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x139f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139f80: 0xe94021  addu        $t0, $a3, $t1
    ctx->pc = 0x139f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x139f84: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x139f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x139f88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x139f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139f8c: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x139f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x139f90: 0x91110000  lbu         $s1, 0x0($t0)
    ctx->pc = 0x139f90u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x139f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139f9c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x139f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x139fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139fa4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x139fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x139fa8: 0x8c53008c  lw          $s3, 0x8C($v0)
    ctx->pc = 0x139fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x139fac: 0x80940000  lb          $s4, 0x0($a0)
    ctx->pc = 0x139facu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x139fb0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x139FB0u;
    SET_GPR_U32(ctx, 31, 0x139FB8u);
    ctx->pc = 0x139FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139FB0u;
            // 0x139fb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139FB8u; }
        if (ctx->pc != 0x139FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139FB8u; }
        if (ctx->pc != 0x139FB8u) { return; }
    }
    ctx->pc = 0x139FB8u;
label_139fb8:
    // 0x139fb8: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x139fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
    // 0x139fbc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x139fbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x139fc0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x139fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x139fc4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x139FC4u;
    {
        const bool branch_taken_0x139fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139FC4u;
            // 0x139fc8: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fc4) {
            ctx->pc = 0x13A03Cu;
            goto label_13a03c;
        }
    }
    ctx->pc = 0x139FCCu;
    // 0x139fcc: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x139fccu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139fd0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x139fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x139fd4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x139fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139fd8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x139fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x139fdc: 0x24e7db55  addiu       $a3, $a3, -0x24AB
    ctx->pc = 0x139fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957909));
    // 0x139fe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139fe4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x139fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x139fe8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x139fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x139fec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x139fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x139ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139ff4: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x139ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x139ff8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x139ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x139ffc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x139ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a000: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13a004: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x13a004u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a008: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x13a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13a00c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13a010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a014: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a018: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a01c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x13a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a020: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13a024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a02c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a030: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13a034: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A034u;
    SET_GPR_U32(ctx, 31, 0x13A03Cu);
    ctx->pc = 0x13A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A034u;
            // 0x13a038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A03Cu; }
        if (ctx->pc != 0x13A03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A03Cu; }
        if (ctx->pc != 0x13A03Cu) { return; }
    }
    ctx->pc = 0x13A03Cu;
label_13a03c:
    // 0x13a03c: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x13a03cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x13a040: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A040u;
    {
        const bool branch_taken_0x13a040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a040) {
            ctx->pc = 0x13A044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A040u;
            // 0x13a044: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A054u;
            goto label_13a054;
        }
    }
    ctx->pc = 0x13A048u;
    // 0x13a048: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a04c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x13A04Cu;
    {
        const bool branch_taken_0x13a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A04Cu;
            // 0x13a050: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a04c) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A054u;
label_13a054:
    // 0x13a054: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x13A054u;
    {
        const bool branch_taken_0x13a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A054u;
            // 0x13a058: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a054) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A05Cu;
label_13a05c:
    // 0x13a05c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a060: 0x24635c48  addiu       $v1, $v1, 0x5C48
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23624));
    // 0x13a064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a06c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a070: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13a070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a074: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x13a074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x13a078: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13a07c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a080: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x13a080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a084: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x13a084u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13a088:
    // 0x13a088: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a08c: 0x24635c18  addiu       $v1, $v1, 0x5C18
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x13a090: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a09c: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a0a0: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x13a0a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x13a0a4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x13a0a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13a0a8: 0x1460010d  bnez        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x13A0A8u;
    {
        const bool branch_taken_0x13a0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a0a8) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A0B0u;
    // 0x13a0b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13a0b4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x13a0b8: 0x92090000  lbu         $t1, 0x0($s0)
    ctx->pc = 0x13a0b8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a0bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a0c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13a0c4: 0x24e7db79  addiu       $a3, $a3, -0x2487
    ctx->pc = 0x13a0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957945));
    // 0x13a0c8: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x13a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x13a0cc: 0x2484dcac  addiu       $a0, $a0, -0x2354
    ctx->pc = 0x13a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958252));
    // 0x13a0d0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x13a0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13a0d4: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x13a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x13a0d8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13a0dc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x13a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x13a0e0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x13a0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a0e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13a0e8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13a0ec: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13a0f0: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a0f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a0f8: 0xe94021  addu        $t0, $a3, $t1
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13a0fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x13a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x13a100: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a104: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x13a104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x13a108: 0x91110000  lbu         $s1, 0x0($t0)
    ctx->pc = 0x13a108u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a10c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a114: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a11c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13a120: 0x8c53008c  lw          $s3, 0x8C($v0)
    ctx->pc = 0x13a120u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x13a124: 0x80940000  lb          $s4, 0x0($a0)
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a128: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A128u;
    SET_GPR_U32(ctx, 31, 0x13A130u);
    ctx->pc = 0x13A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A128u;
            // 0x13a12c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A130u; }
        if (ctx->pc != 0x13A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A130u; }
        if (ctx->pc != 0x13A130u) { return; }
    }
    ctx->pc = 0x13A130u;
label_13a130:
    // 0x13a130: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x13a130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
    // 0x13a134: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x13a134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x13a138: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13a13c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13A13Cu;
    {
        const bool branch_taken_0x13a13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A13Cu;
            // 0x13a140: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a13c) {
            ctx->pc = 0x13A1B4u;
            goto label_13a1b4;
        }
    }
    ctx->pc = 0x13A144u;
    // 0x13a144: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x13a144u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a148: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13a14c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a150: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x13a150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x13a154: 0x24e7db55  addiu       $a3, $a3, -0x24AB
    ctx->pc = 0x13a154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957909));
    // 0x13a158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a15c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x13a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a160: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13a164: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13a168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a16c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x13a16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13a170: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a174: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a178: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13a17c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x13a17cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a180: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13a184: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13a188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a18c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a190: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a194: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x13a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a198: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x13a198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13a19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a1a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a1a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a1a8: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x13a1ac: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A1ACu;
    SET_GPR_U32(ctx, 31, 0x13A1B4u);
    ctx->pc = 0x13A1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1ACu;
            // 0x13a1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1B4u; }
        if (ctx->pc != 0x13A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A1B4u; }
        if (ctx->pc != 0x13A1B4u) { return; }
    }
    ctx->pc = 0x13A1B4u;
label_13a1b4:
    // 0x13a1b4: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x13a1b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x13a1b8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A1B8u;
    {
        const bool branch_taken_0x13a1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1b8) {
            ctx->pc = 0x13A1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1B8u;
            // 0x13a1bc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A1CCu;
            goto label_13a1cc;
        }
    }
    ctx->pc = 0x13A1C0u;
    // 0x13a1c0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a1c4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x13A1C4u;
    {
        const bool branch_taken_0x13a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1C4u;
            // 0x13a1c8: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1c4) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A1CCu;
label_13a1cc:
    // 0x13a1cc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x13A1CCu;
    {
        const bool branch_taken_0x13a1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1CCu;
            // 0x13a1d0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1cc) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A1D4u;
label_13a1d4:
    // 0x13a1d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a1d8: 0x24635c48  addiu       $v1, $v1, 0x5C48
    ctx->pc = 0x13a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23624));
    // 0x13a1dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a1e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a1e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a1e8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a1ec: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x13a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a1f0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13a1f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a1f8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x13a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a1fc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x13a1fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13a200:
    // 0x13a200: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a204: 0x24635c18  addiu       $v1, $v1, 0x5C18
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x13a208: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a210: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a214: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a218: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x13a218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x13a21c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x13a21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13a220: 0x146000af  bnez        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x13A220u;
    {
        const bool branch_taken_0x13a220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a220) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A228u;
    // 0x13a228: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13a228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13a22c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x13a230: 0x92090000  lbu         $t1, 0x0($s0)
    ctx->pc = 0x13a230u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a234: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a238: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13a23c: 0x24e7db7a  addiu       $a3, $a3, -0x2486
    ctx->pc = 0x13a23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957946));
    // 0x13a240: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x13a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x13a244: 0x2484dcac  addiu       $a0, $a0, -0x2354
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958252));
    // 0x13a248: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x13a248u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13a24c: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x13a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x13a250: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13a250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13a254: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x13a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x13a258: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x13a258u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a25c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13a260: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13a264: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13a268: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a270: 0xe94021  addu        $t0, $a3, $t1
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13a274: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x13a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x13a278: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a27c: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x13a280: 0x91110000  lbu         $s1, 0x0($t0)
    ctx->pc = 0x13a280u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a28c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a294: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13a298: 0x8c52008c  lw          $s2, 0x8C($v0)
    ctx->pc = 0x13a298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x13a29c: 0x80930000  lb          $s3, 0x0($a0)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a2a0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A2A0u;
    SET_GPR_U32(ctx, 31, 0x13A2A8u);
    ctx->pc = 0x13A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2A0u;
            // 0x13a2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2A8u; }
        if (ctx->pc != 0x13A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A2A8u; }
        if (ctx->pc != 0x13A2A8u) { return; }
    }
    ctx->pc = 0x13A2A8u;
label_13a2a8:
    // 0x13a2a8: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x13a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x13a2ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x13a2acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x13a2b0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13a2b4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13A2B4u;
    {
        const bool branch_taken_0x13a2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2B4u;
            // 0x13a2b8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2b4) {
            ctx->pc = 0x13A32Cu;
            goto label_13a32c;
        }
    }
    ctx->pc = 0x13A2BCu;
    // 0x13a2bc: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x13a2bcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a2c0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13a2c4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a2c8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x13a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x13a2cc: 0x24e7db55  addiu       $a3, $a3, -0x24AB
    ctx->pc = 0x13a2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957909));
    // 0x13a2d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a2d4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x13a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a2d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13a2dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x13a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13a2e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a2e4: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x13a2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13a2e8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a2ec: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x13a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13a2f0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13a2f4: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x13a2f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a2f8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13a2fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13a300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a304: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a308: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a30c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a310: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x13a310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13a314: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a320: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x13a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x13a324: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A324u;
    SET_GPR_U32(ctx, 31, 0x13A32Cu);
    ctx->pc = 0x13A328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A324u;
            // 0x13a328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A32Cu; }
        if (ctx->pc != 0x13A32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A32Cu; }
        if (ctx->pc != 0x13A32Cu) { return; }
    }
    ctx->pc = 0x13A32Cu;
label_13a32c:
    // 0x13a32c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a330: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x13A330u;
    {
        const bool branch_taken_0x13a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A330u;
            // 0x13a334: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a330) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A338u;
label_13a338:
    // 0x13a338: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13a33c: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x13a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
    // 0x13a340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13a340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13a344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a348: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a34c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a350: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x13a350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a354: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13a358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a35c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x13a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a360: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x13a360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13a364:
    // 0x13a364: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x13A364u;
    SET_GPR_U32(ctx, 31, 0x13A36Cu);
    ctx->pc = 0x13A368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A364u;
            // 0x13a368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A36Cu; }
        if (ctx->pc != 0x13A36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A36Cu; }
        if (ctx->pc != 0x13A36Cu) { return; }
    }
    ctx->pc = 0x13A36Cu;
label_13a36c:
    // 0x13a36c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x13A36Cu;
    {
        const bool branch_taken_0x13a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a36c) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A374u;
    // 0x13a374: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13a378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a37c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x13A37Cu;
    {
        const bool branch_taken_0x13a37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A37Cu;
            // 0x13a380: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a37c) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A384u;
label_13a384:
    // 0x13a384: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13a388: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x13a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x13a38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a394: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x13a394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13a398: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x13a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13a39c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13a3a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13a3a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13a3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a3ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13a3b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a3b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13a3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a3bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13a3bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a3c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13a3c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a3c8: 0x8c51008c  lw          $s1, 0x8C($v0)
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x13a3cc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A3CCu;
    SET_GPR_U32(ctx, 31, 0x13A3D4u);
    ctx->pc = 0x13A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3CCu;
            // 0x13a3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3D4u; }
        if (ctx->pc != 0x13A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3D4u; }
        if (ctx->pc != 0x13A3D4u) { return; }
    }
    ctx->pc = 0x13A3D4u;
label_13a3d4:
    // 0x13a3d4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x13a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x13a3d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a3dc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x13a3dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a3e0: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x13a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x13a3e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x13a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13a3e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a3ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a3f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a3f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a3f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a3fc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x13a3fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a400: 0x18c0002d  blez        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x13A400u;
    {
        const bool branch_taken_0x13a400 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x13A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A400u;
            // 0x13a404: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a400) {
            ctx->pc = 0x13A4B8u;
            goto label_13a4b8;
        }
    }
    ctx->pc = 0x13A408u;
    // 0x13a408: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13a408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a40c:
    // 0x13a40c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13a40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13a410: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x13a410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13a414: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13a418: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13a418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13a41c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x13a41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a420: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13a420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13a424: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x13a424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a42c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a430: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x13a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x13a434: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a438: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13a438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13a43c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13a440: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x13a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13a444: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a44c: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x13a450: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x13a450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13a454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a458: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a45c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x13a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a460: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x13a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13a464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a470: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13a474: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x13a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13a478: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13A478u;
    SET_GPR_U32(ctx, 31, 0x13A480u);
    ctx->pc = 0x13A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A478u;
            // 0x13a47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A480u; }
        if (ctx->pc != 0x13A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A480u; }
        if (ctx->pc != 0x13A480u) { return; }
    }
    ctx->pc = 0x13A480u;
label_13a480:
    // 0x13a480: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x13a480u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a484: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a488: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x13a48c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13a490: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x13a490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13a494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a498: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a4a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a4a8: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x13a4a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x13a4ac: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x13a4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13a4b0: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x13A4B0u;
    {
        const bool branch_taken_0x13a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4B0u;
            // 0x13a4b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4b0) {
            ctx->pc = 0x13A40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a40c;
        }
    }
    ctx->pc = 0x13A4B8u;
label_13a4b8:
    // 0x13a4b8: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13a4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a4c0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x13a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a4c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13a4c8:
    // 0x13a4c8: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x13A4C8u;
    SET_GPR_U32(ctx, 31, 0x13A4D0u);
    ctx->pc = 0x13A4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4C8u;
            // 0x13a4cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4D0u; }
        if (ctx->pc != 0x13A4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4D0u; }
        if (ctx->pc != 0x13A4D0u) { return; }
    }
    ctx->pc = 0x13A4D0u;
label_13a4d0:
    // 0x13a4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A4D0u;
    {
        const bool branch_taken_0x13a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a4d0) {
            ctx->pc = 0x13A4E0u;
            goto label_13a4e0;
        }
    }
    ctx->pc = 0x13A4D8u;
    // 0x13a4d8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13a4dc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x13a4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_13a4e0:
    // 0x13a4e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13a4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13a4e4:
    // 0x13a4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4F8u;
            // 0x13a4fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A500u;
label_13a500:
    // 0x13a500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13a504: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x13a504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x13a508: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a50c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13a510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a514: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13a514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13a518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a51c: 0x24e7dc60  addiu       $a3, $a3, -0x23A0
    ctx->pc = 0x13a51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958176));
    // 0x13a520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a524: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x13a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x13a528: 0x8469dc58  lh          $t1, -0x23A8($v1)
    ctx->pc = 0x13a528u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958168)));
    // 0x13a52c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a530: 0x84a8dc5a  lh          $t0, -0x23A6($a1)
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294958170)));
    // 0x13a534: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13a538: 0xa7a90068  sh          $t1, 0x68($sp)
    ctx->pc = 0x13a538u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 9));
    // 0x13a53c: 0x8463dc5c  lh          $v1, -0x23A4($v1)
    ctx->pc = 0x13a53cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958172)));
    // 0x13a540: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13a544: 0xa7a8006a  sh          $t0, 0x6A($sp)
    ctx->pc = 0x13a544u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 106), (uint16_t)GPR_U32(ctx, 8));
    // 0x13a548: 0xa7a3006c  sh          $v1, 0x6C($sp)
    ctx->pc = 0x13a548u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 108), (uint16_t)GPR_U32(ctx, 3));
label_13a54c:
    // 0x13a54c: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x13a54cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13a550: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13a554: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x13a554u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a558: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13a558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13a55c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13a560: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13A560u;
    {
        const bool branch_taken_0x13a560 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x13a560) {
            ctx->pc = 0x13A54Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a54c;
        }
    }
    ctx->pc = 0x13A568u;
    // 0x13a568: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x13a568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x13a56c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x13a56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13a570: 0x2508dc70  addiu       $t0, $t0, -0x2390
    ctx->pc = 0x13a570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958192));
    // 0x13a574: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x13a574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_13a578:
    // 0x13a578: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x13a578u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a57c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13a57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13a580: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x13a580u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x13a584: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x13a584u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a588: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x13a588u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a58c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x13a58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x13a590: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13A590u;
    {
        const bool branch_taken_0x13a590 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x13A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A590u;
            // 0x13a594: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a590) {
            ctx->pc = 0x13A578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a578;
        }
    }
    ctx->pc = 0x13A598u;
    // 0x13a598: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13a59c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13a5a0: 0x2463db5a  addiu       $v1, $v1, -0x24A6
    ctx->pc = 0x13a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957914));
    // 0x13a5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a5a8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x13a5a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a5ac: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x13a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13a5b0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13a5b4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a5b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x13a5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13a5bc: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x13a5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a5c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x13a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13a5c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13a5c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a5c8: 0x14650189  bne         $v1, $a1, . + 4 + (0x189 << 2)
    ctx->pc = 0x13A5C8u;
    {
        const bool branch_taken_0x13a5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x13a5c8) {
            ctx->pc = 0x13ABF0u;
            goto label_13abf0;
        }
    }
    ctx->pc = 0x13A5D0u;
    // 0x13a5d0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x13a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x13a5d4: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13a5d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a5d8: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x13a5dc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x13a5e0: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x13a5e0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13a5e4: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x13a5e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x13a5e8: 0x5020012e  beql        $at, $zero, . + 4 + (0x12E << 2)
    ctx->pc = 0x13A5E8u;
    {
        const bool branch_taken_0x13a5e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5e8) {
            ctx->pc = 0x13A5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A5E8u;
            // 0x13a5ec: 0x82230001  lb          $v1, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AAA4u;
            goto label_13aaa4;
        }
    }
    ctx->pc = 0x13A5F0u;
    // 0x13a5f0: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A5F0u;
    {
        const bool branch_taken_0x13a5f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x13a5f0) {
            ctx->pc = 0x13A600u;
            goto label_13a600;
        }
    }
    ctx->pc = 0x13A5F8u;
    // 0x13a5f8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x13A5F8u;
    {
        const bool branch_taken_0x13a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A5F8u;
            // 0x13a5fc: 0x97b2006c  lhu         $s2, 0x6C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5f8) {
            ctx->pc = 0x13A744u;
            goto label_13a744;
        }
    }
    ctx->pc = 0x13A600u;
label_13a600:
    // 0x13a600: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13a604: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13a608: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x13a608u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x13a60c: 0x14660021  bne         $v1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x13A60Cu;
    {
        const bool branch_taken_0x13a60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x13a60c) {
            ctx->pc = 0x13A694u;
            goto label_13a694;
        }
    }
    ctx->pc = 0x13A614u;
    // 0x13a614: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13a618: 0x90639748  lbu         $v1, -0x68B8($v1)
    ctx->pc = 0x13a618u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x13a61c: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A61Cu;
    {
        const bool branch_taken_0x13a61c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13a61c) {
            ctx->pc = 0x13A620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A61Cu;
            // 0x13a620: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A644u;
            goto label_13a644;
        }
    }
    ctx->pc = 0x13A624u;
    // 0x13a624: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A624u;
    SET_GPR_U32(ctx, 31, 0x13A62Cu);
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A62Cu; }
        if (ctx->pc != 0x13A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A62Cu; }
        if (ctx->pc != 0x13A62Cu) { return; }
    }
    ctx->pc = 0x13A62Cu;
label_13a62c:
    // 0x13a62c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x13a62cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a630: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13a630u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a634: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A634u;
    SET_GPR_U32(ctx, 31, 0x13A63Cu);
    ctx->pc = 0x13A638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A634u;
            // 0x13a638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A63Cu; }
        if (ctx->pc != 0x13A63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A63Cu; }
        if (ctx->pc != 0x13A63Cu) { return; }
    }
    ctx->pc = 0x13A63Cu;
label_13a63c:
    // 0x13a63c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13A63Cu;
    {
        const bool branch_taken_0x13a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A63Cu;
            // 0x13a640: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a63c) {
            ctx->pc = 0x13A6B0u;
            goto label_13a6b0;
        }
    }
    ctx->pc = 0x13A644u;
label_13a644:
    // 0x13a644: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a648: 0x24635c18  addiu       $v1, $v1, 0x5C18
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x13a64c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a650: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13a654: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a658: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13a658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a65c: 0x80630003  lb          $v1, 0x3($v1)
    ctx->pc = 0x13a65cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x13a660: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13A660u;
    {
        const bool branch_taken_0x13a660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a660) {
            ctx->pc = 0x13A664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A660u;
            // 0x13a664: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A668u;
    // 0x13a668: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A668u;
    SET_GPR_U32(ctx, 31, 0x13A670u);
    ctx->pc = 0x13A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A668u;
            // 0x13a66c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A670u; }
        if (ctx->pc != 0x13A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A670u; }
        if (ctx->pc != 0x13A670u) { return; }
    }
    ctx->pc = 0x13A670u;
label_13a670:
    // 0x13a670: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13a670u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a678: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x13a678u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a67c: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A67Cu;
    SET_GPR_U32(ctx, 31, 0x13A684u);
    ctx->pc = 0x13A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A67Cu;
            // 0x13a680: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A684u; }
        if (ctx->pc != 0x13A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A684u; }
        if (ctx->pc != 0x13A684u) { return; }
    }
    ctx->pc = 0x13A684u;
label_13a684:
    // 0x13a684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13A684u;
    {
        const bool branch_taken_0x13a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A684u;
            // 0x13a688: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a684) {
            ctx->pc = 0x13A6B0u;
            goto label_13a6b0;
        }
    }
    ctx->pc = 0x13A68Cu;
label_13a68c:
    // 0x13a68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13A68Cu;
    {
        const bool branch_taken_0x13a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A68Cu;
            // 0x13a690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a68c) {
            ctx->pc = 0x13A6B0u;
            goto label_13a6b0;
        }
    }
    ctx->pc = 0x13A694u;
label_13a694:
    // 0x13a694: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A694u;
    SET_GPR_U32(ctx, 31, 0x13A69Cu);
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A69Cu; }
        if (ctx->pc != 0x13A69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A69Cu; }
        if (ctx->pc != 0x13A69Cu) { return; }
    }
    ctx->pc = 0x13A69Cu;
label_13a69c:
    // 0x13a69c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x13a69cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a6a0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13a6a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a6a4: 0xc05c6f8  jal         func_171BE0
    ctx->pc = 0x13A6A4u;
    SET_GPR_U32(ctx, 31, 0x13A6ACu);
    ctx->pc = 0x13A6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6A4u;
            // 0x13a6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BE0u;
    if (runtime->hasFunction(0x171BE0u)) {
        auto targetFn = runtime->lookupFunction(0x171BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6ACu; }
        if (ctx->pc != 0x13A6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BE0_0x171be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6ACu; }
        if (ctx->pc != 0x13A6ACu) { return; }
    }
    ctx->pc = 0x13A6ACu;
label_13a6ac:
    // 0x13a6ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13a6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13a6b0:
    // 0x13a6b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x13a6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13a6b4: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x13a6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x13a6b8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A6B8u;
    {
        const bool branch_taken_0x13a6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6b8) {
            ctx->pc = 0x13A6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6B8u;
            // 0x13a6bc: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A6C8u;
            goto label_13a6c8;
        }
    }
    ctx->pc = 0x13A6C0u;
    // 0x13a6c0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13a6c4: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x13a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_13a6c8:
    // 0x13a6c8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A6C8u;
    {
        const bool branch_taken_0x13a6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6c8) {
            ctx->pc = 0x13A730u;
            goto label_13a730;
        }
    }
    ctx->pc = 0x13A6D0u;
    // 0x13a6d0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x13a6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x13a6d4: 0x30630700  andi        $v1, $v1, 0x700
    ctx->pc = 0x13a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
    // 0x13a6d8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A6D8u;
    {
        const bool branch_taken_0x13a6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6d8) {
            ctx->pc = 0x13A730u;
            goto label_13a730;
        }
    }
    ctx->pc = 0x13A6E0u;
    // 0x13a6e0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x13a6e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a6e4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A6E4u;
    {
        const bool branch_taken_0x13a6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a6e4) {
            ctx->pc = 0x13A730u;
            goto label_13a730;
        }
    }
    ctx->pc = 0x13A6ECu;
    // 0x13a6ec: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13A6ECu;
    SET_GPR_U32(ctx, 31, 0x13A6F4u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6F4u; }
        if (ctx->pc != 0x13A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6F4u; }
        if (ctx->pc != 0x13A6F4u) { return; }
    }
    ctx->pc = 0x13A6F4u;
label_13a6f4:
    // 0x13a6f4: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x13a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x13a6f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13a6fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13a6fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a700: 0x0  nop
    ctx->pc = 0x13a700u;
    // NOP
    // 0x13a704: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a70c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a70cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a710: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13a710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13a714: 0x0  nop
    ctx->pc = 0x13a714u;
    // NOP
    // 0x13a718: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13a718u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13a71c: 0x1810  mfhi        $v1
    ctx->pc = 0x13a71cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13a720: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x13a720u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a724: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x13a724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a728: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x13a728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x13a72c: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x13a72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
label_13a730:
    // 0x13a730: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13a730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13a734: 0x94635960  lhu         $v1, 0x5960($v1)
    ctx->pc = 0x13a734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22880)));
    // 0x13a738: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A738u;
    {
        const bool branch_taken_0x13a738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a738) {
            ctx->pc = 0x13A73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A738u;
            // 0x13a73c: 0x92270000  lbu         $a3, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A748u;
            goto label_13a748;
        }
    }
    ctx->pc = 0x13A740u;
    // 0x13a740: 0x97b2006c  lhu         $s2, 0x6C($sp)
    ctx->pc = 0x13a740u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 108)));
label_13a744:
    // 0x13a744: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13a744u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_13a748:
    // 0x13a748: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x13a748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13a74c: 0x24a5db55  addiu       $a1, $a1, -0x24AB
    ctx->pc = 0x13a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957909));
    // 0x13a750: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x13a750u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a754: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x13a754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13a758: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x13a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13a75c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a760: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x13a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x13a764: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a768: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a76c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x13a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x13a770: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x13a770u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13a774: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x13a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13a778: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x13A778u;
    {
        const bool branch_taken_0x13a778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A778u;
            // 0x13a77c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a778) {
            ctx->pc = 0x13A868u;
            goto label_13a868;
        }
    }
    ctx->pc = 0x13A780u;
    // 0x13a780: 0x3085007f  andi        $a1, $a0, 0x7F
    ctx->pc = 0x13a780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x13a784: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x13a784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x13a788: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13a788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13a78c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13a790: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a794: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13a798: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13a79c: 0x24690068  addiu       $t1, $v1, 0x68
    ctx->pc = 0x13a79cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x13a7a0: 0x248a0040  addiu       $t2, $a0, 0x40
    ctx->pc = 0x13a7a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x13a7a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13a7a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7ac: 0x640d0400  daddiu      $t5, $zero, 0x400
    ctx->pc = 0x13a7acu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1024);
    // 0x13a7b0: 0x640e0200  daddiu      $t6, $zero, 0x200
    ctx->pc = 0x13a7b0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)512);
    // 0x13a7b4: 0x64030100  daddiu      $v1, $zero, 0x100
    ctx->pc = 0x13a7b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x13a7b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a7bc:
    // 0x13a7bc: 0x914c0000  lbu         $t4, 0x0($t2)
    ctx->pc = 0x13a7bcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13a7c0: 0x1185001b  beq         $t4, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13A7C0u;
    {
        const bool branch_taken_0x13a7c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 5));
        if (branch_taken_0x13a7c0) {
            ctx->pc = 0x13A830u;
            goto label_13a830;
        }
    }
    ctx->pc = 0x13A7C8u;
    // 0x13a7c8: 0x1184000f  beq         $t4, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A7C8u;
    {
        const bool branch_taken_0x13a7c8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 4));
        if (branch_taken_0x13a7c8) {
            ctx->pc = 0x13A808u;
            goto label_13a808;
        }
    }
    ctx->pc = 0x13A7D0u;
    // 0x13a7d0: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A7D0u;
    {
        const bool branch_taken_0x13a7d0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7d0) {
            ctx->pc = 0x13A7E0u;
            goto label_13a7e0;
        }
    }
    ctx->pc = 0x13A7D8u;
    // 0x13a7d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13A7D8u;
    {
        const bool branch_taken_0x13a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7d8) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A7E0u;
label_13a7e0:
    // 0x13a7e0: 0x922c0002  lbu         $t4, 0x2($s1)
    ctx->pc = 0x13a7e0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a7e4: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x13a7e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x13a7e8: 0x1580001b  bnez        $t4, . + 4 + (0x1B << 2)
    ctx->pc = 0x13A7E8u;
    {
        const bool branch_taken_0x13a7e8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7e8) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A7F0u;
    // 0x13a7f0: 0x952c0000  lhu         $t4, 0x0($t1)
    ctx->pc = 0x13a7f0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13a7f4: 0x318c0100  andi        $t4, $t4, 0x100
    ctx->pc = 0x13a7f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)256);
    // 0x13a7f8: 0x11800017  beqz        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A7F8u;
    {
        const bool branch_taken_0x13a7f8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7f8) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A800u;
    // 0x13a800: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13A800u;
    {
        const bool branch_taken_0x13a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A800u;
            // 0x13a804: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a800) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A808u;
label_13a808:
    // 0x13a808: 0x922c0002  lbu         $t4, 0x2($s1)
    ctx->pc = 0x13a808u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a80c: 0x318c0002  andi        $t4, $t4, 0x2
    ctx->pc = 0x13a80cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
    // 0x13a810: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A810u;
    {
        const bool branch_taken_0x13a810 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a810) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A818u;
    // 0x13a818: 0x952c0000  lhu         $t4, 0x0($t1)
    ctx->pc = 0x13a818u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13a81c: 0x318c0200  andi        $t4, $t4, 0x200
    ctx->pc = 0x13a81cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)512);
    // 0x13a820: 0x1180000d  beqz        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x13A820u;
    {
        const bool branch_taken_0x13a820 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a820) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A828u;
    // 0x13a828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13A828u;
    {
        const bool branch_taken_0x13a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A828u;
            // 0x13a82c: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a828) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A830u;
label_13a830:
    // 0x13a830: 0x922c0002  lbu         $t4, 0x2($s1)
    ctx->pc = 0x13a830u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a834: 0x318c0004  andi        $t4, $t4, 0x4
    ctx->pc = 0x13a834u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
    // 0x13a838: 0x15800007  bnez        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A838u;
    {
        const bool branch_taken_0x13a838 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a838) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A840u;
    // 0x13a840: 0x952c0000  lhu         $t4, 0x0($t1)
    ctx->pc = 0x13a840u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13a844: 0x318c0400  andi        $t4, $t4, 0x400
    ctx->pc = 0x13a844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1024);
    // 0x13a848: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A848u;
    {
        const bool branch_taken_0x13a848 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a848) {
            ctx->pc = 0x13A858u;
            goto label_13a858;
        }
    }
    ctx->pc = 0x13A850u;
    // 0x13a850: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x13a850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a854: 0x0  nop
    ctx->pc = 0x13a854u;
    // NOP
label_13a858:
    // 0x13a858: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x13a85c: 0x296c0003  slti        $t4, $t3, 0x3
    ctx->pc = 0x13a85cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13a860: 0x1580ffd6  bnez        $t4, . + 4 + (-0x2A << 2)
    ctx->pc = 0x13A860u;
    {
        const bool branch_taken_0x13a860 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A860u;
            // 0x13a864: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a860) {
            ctx->pc = 0x13A7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a7bc;
        }
    }
    ctx->pc = 0x13A868u;
label_13a868:
    // 0x13a868: 0x3249ffff  andi        $t1, $s2, 0xFFFF
    ctx->pc = 0x13a868u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x13a86c: 0x31230100  andi        $v1, $t1, 0x100
    ctx->pc = 0x13a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
    // 0x13a870: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x13A870u;
    {
        const bool branch_taken_0x13a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a870) {
            ctx->pc = 0x13A874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A870u;
            // 0x13a874: 0x31230200  andi        $v1, $t1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A92Cu;
            goto label_13a92c;
        }
    }
    ctx->pc = 0x13A878u;
    // 0x13a878: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x13a878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a87c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13a87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13a880: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13A880u;
    {
        const bool branch_taken_0x13a880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a880) {
            ctx->pc = 0x13A928u;
            goto label_13a928;
        }
    }
    ctx->pc = 0x13A888u;
    // 0x13a888: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x13a888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x13a88c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13a890: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13a894: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x13a894u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x13a898: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13a89c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A89Cu;
    {
        const bool branch_taken_0x13a89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a89c) {
            ctx->pc = 0x13A928u;
            goto label_13a928;
        }
    }
    ctx->pc = 0x13A8A4u;
    // 0x13a8a4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a8a8: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a8ac: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a8b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a8b8: 0x90860058  lbu         $a2, 0x58($a0)
    ctx->pc = 0x13a8b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x13a8bc: 0x2442db78  addiu       $v0, $v0, -0x2488
    ctx->pc = 0x13a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957944));
    // 0x13a8c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13a8c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a8c8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13a8cc: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x13a8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13a8d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13a8d4: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x13a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x13a8d8: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13a8d8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a8dc: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a8e0: 0x2463dcac  addiu       $v1, $v1, -0x2354
    ctx->pc = 0x13a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958252));
    // 0x13a8e4: 0xd04025  or          $t0, $a2, $s0
    ctx->pc = 0x13a8e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x13a8e8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13a8ec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a8f0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a8f4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a8f8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a8fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a904: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x13a904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x13a908: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x13a908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a90c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13a910: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13A910u;
    SET_GPR_U32(ctx, 31, 0x13A918u);
    ctx->pc = 0x13A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A910u;
            // 0x13a914: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A918u; }
        if (ctx->pc != 0x13A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A918u; }
        if (ctx->pc != 0x13A918u) { return; }
    }
    ctx->pc = 0x13A918u;
label_13a918:
    // 0x13a918: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13a918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a91c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a920: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x13A920u;
    {
        const bool branch_taken_0x13a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A920u;
            // 0x13a924: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a920) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13A928u;
label_13a928:
    // 0x13a928: 0x31230200  andi        $v1, $t1, 0x200
    ctx->pc = 0x13a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)512);
label_13a92c:
    // 0x13a92c: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x13A92Cu;
    {
        const bool branch_taken_0x13a92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a92c) {
            ctx->pc = 0x13A930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A92Cu;
            // 0x13a930: 0x31230400  andi        $v1, $t1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A9E8u;
            goto label_13a9e8;
        }
    }
    ctx->pc = 0x13A934u;
    // 0x13a934: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x13a934u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a938: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13a93c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13A93Cu;
    {
        const bool branch_taken_0x13a93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a93c) {
            ctx->pc = 0x13A9E4u;
            goto label_13a9e4;
        }
    }
    ctx->pc = 0x13A944u;
    // 0x13a944: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x13a944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x13a948: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13a948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13a94c: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13a950: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x13a950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x13a954: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x13a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13a958: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A958u;
    {
        const bool branch_taken_0x13a958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a958) {
            ctx->pc = 0x13A9E4u;
            goto label_13a9e4;
        }
    }
    ctx->pc = 0x13A960u;
    // 0x13a960: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x13a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a964: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a968: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a970: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13a974: 0x90860059  lbu         $a2, 0x59($a0)
    ctx->pc = 0x13a974u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
    // 0x13a978: 0x2442db78  addiu       $v0, $v0, -0x2488
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957944));
    // 0x13a97c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13a980: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a984: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13a988: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x13a988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13a98c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13a990: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x13a990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x13a994: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13a994u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a998: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a99c: 0x2463dcac  addiu       $v1, $v1, -0x2354
    ctx->pc = 0x13a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958252));
    // 0x13a9a0: 0xd04025  or          $t0, $a2, $s0
    ctx->pc = 0x13a9a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x13a9a4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13a9a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a9ac: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a9b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a9b4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13a9b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13a9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a9c0: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x13a9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x13a9c4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x13a9c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a9c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13a9cc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13A9CCu;
    SET_GPR_U32(ctx, 31, 0x13A9D4u);
    ctx->pc = 0x13A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A9CCu;
            // 0x13a9d0: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A9D4u; }
        if (ctx->pc != 0x13A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A9D4u; }
        if (ctx->pc != 0x13A9D4u) { return; }
    }
    ctx->pc = 0x13A9D4u;
label_13a9d4:
    // 0x13a9d4: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a9d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a9dc: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x13A9DCu;
    {
        const bool branch_taken_0x13a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A9DCu;
            // 0x13a9e0: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9dc) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13A9E4u;
label_13a9e4:
    // 0x13a9e4: 0x31230400  andi        $v1, $t1, 0x400
    ctx->pc = 0x13a9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1024);
label_13a9e8:
    // 0x13a9e8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x13A9E8u;
    {
        const bool branch_taken_0x13a9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9e8) {
            ctx->pc = 0x13AAA0u;
            goto label_13aaa0;
        }
    }
    ctx->pc = 0x13A9F0u;
    // 0x13a9f0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x13a9f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13a9f4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13a9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13a9f8: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13A9F8u;
    {
        const bool branch_taken_0x13a9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a9f8) {
            ctx->pc = 0x13AAA0u;
            goto label_13aaa0;
        }
    }
    ctx->pc = 0x13AA00u;
    // 0x13aa00: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x13aa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x13aa04: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13aa08: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13aa0c: 0x94630068  lhu         $v1, 0x68($v1)
    ctx->pc = 0x13aa0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x13aa10: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x13aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x13aa14: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13AA14u;
    {
        const bool branch_taken_0x13aa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa14) {
            ctx->pc = 0x13AAA0u;
            goto label_13aaa0;
        }
    }
    ctx->pc = 0x13AA1Cu;
    // 0x13aa1c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x13aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13aa20: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13aa20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13aa24: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13aa28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13aa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13aa30: 0x9086005a  lbu         $a2, 0x5A($a0)
    ctx->pc = 0x13aa30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x13aa34: 0x2442db78  addiu       $v0, $v0, -0x2488
    ctx->pc = 0x13aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957944));
    // 0x13aa38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13aa3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13aa40: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13aa44: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x13aa44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13aa48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13aa4c: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x13aa50: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13aa50u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13aa54: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x13aa54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13aa58: 0x2463dcac  addiu       $v1, $v1, -0x2354
    ctx->pc = 0x13aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958252));
    // 0x13aa5c: 0xd04025  or          $t0, $a2, $s0
    ctx->pc = 0x13aa5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x13aa60: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13aa64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13aa68: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13aa6c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13aa70: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13aa70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13aa74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13aa78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13aa7c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x13aa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x13aa80: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x13aa80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13aa84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13aa88: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13AA88u;
    SET_GPR_U32(ctx, 31, 0x13AA90u);
    ctx->pc = 0x13AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AA88u;
            // 0x13aa8c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AA90u; }
        if (ctx->pc != 0x13AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AA90u; }
        if (ctx->pc != 0x13AA90u) { return; }
    }
    ctx->pc = 0x13AA90u;
label_13aa90:
    // 0x13aa90: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13aa94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13aa98: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x13AA98u;
    {
        const bool branch_taken_0x13aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AA98u;
            // 0x13aa9c: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa98) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13AAA0u;
label_13aaa0:
    // 0x13aaa0: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_13aaa4:
    // 0x13aaa4: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x13aaa8: 0x546000cb  bnel        $v1, $zero, . + 4 + (0xCB << 2)
    ctx->pc = 0x13AAA8u;
    {
        const bool branch_taken_0x13aaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aaa8) {
            ctx->pc = 0x13AAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AAA8u;
            // 0x13aaac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ADD8u;
            goto label_13add8;
        }
    }
    ctx->pc = 0x13AAB0u;
    // 0x13aab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aab4: 0x14e40038  bne         $a3, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13AAB4u;
    {
        const bool branch_taken_0x13aab4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x13aab4) {
            ctx->pc = 0x13AB98u;
            goto label_13ab98;
        }
    }
    ctx->pc = 0x13AABCu;
    // 0x13aabc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13aac0: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x13aac4: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x13aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x13aac8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x13aac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x13aacc: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13aad0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x13aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x13aad4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x13aad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13aad8: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x13aad8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x13aadc: 0x922b0000  lbu         $t3, 0x0($s1)
    ctx->pc = 0x13aadcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13aae0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x13aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13aae4: 0x2529db79  addiu       $t1, $t1, -0x2487
    ctx->pc = 0x13aae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957945));
    // 0x13aae8: 0x2508db7a  addiu       $t0, $t0, -0x2486
    ctx->pc = 0x13aae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957946));
    // 0x13aaec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13aaf0: 0x24e7dcac  addiu       $a3, $a3, -0x2354
    ctx->pc = 0x13aaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958252));
    // 0x13aaf4: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x13aaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13aaf8: 0x24c6dccc  addiu       $a2, $a2, -0x2334
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958284));
    // 0x13aafc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x13ab00: 0x24a5dcec  addiu       $a1, $a1, -0x2314
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958316));
    // 0x13ab04: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x13ab08: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x13ab0c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x13ab0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x13ab10: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13ab14: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x13ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13ab18: 0x922a0000  lbu         $t2, 0x0($s1)
    ctx->pc = 0x13ab18u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ab1c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x13ab1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x13ab20: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x13ab20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13ab24: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ab24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ab28: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x13ab28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13ab2c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ab2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ab30: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13ab30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13ab34: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x13ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13ab38: 0x92290000  lbu         $t1, 0x0($s1)
    ctx->pc = 0x13ab38u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ab3c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x13ab3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ab40: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13ab40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13ab44: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x13ab44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13ab48: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x13ab48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13ab4c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x13ab4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13ab50: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13ab50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13ab54: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x13ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ab58: 0x92280000  lbu         $t0, 0x0($s1)
    ctx->pc = 0x13ab58u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ab5c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x13ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x13ab60: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13ab60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13ab64: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13ab68: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13ab68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13ab6c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13ab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13ab70: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13ab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13ab74: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x13ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13ab78: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x13ab78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ab7c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13ab80: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ab84: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ab88: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ab8c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ab90: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13ab94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_13ab98:
    // 0x13ab98: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13ab9c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13aba0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x13aba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x13aba4: 0x5464000e  bnel        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x13ABA4u;
    {
        const bool branch_taken_0x13aba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13aba4) {
            ctx->pc = 0x13ABA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABA4u;
            // 0x13aba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ABE0u;
            goto label_13abe0;
        }
    }
    ctx->pc = 0x13ABACu;
    // 0x13abac: 0x82240003  lb          $a0, 0x3($s1)
    ctx->pc = 0x13abacu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x13abb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13abb4: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x13ABB4u;
    {
        const bool branch_taken_0x13abb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13abb4) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13ABBCu;
    // 0x13abbc: 0xc0d44e4  jal         func_351390
    ctx->pc = 0x13ABBCu;
    SET_GPR_U32(ctx, 31, 0x13ABC4u);
    ctx->pc = 0x351390u;
    if (runtime->hasFunction(0x351390u)) {
        auto targetFn = runtime->lookupFunction(0x351390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABC4u; }
        if (ctx->pc != 0x13ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351390_0x351390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABC4u; }
        if (ctx->pc != 0x13ABC4u) { return; }
    }
    ctx->pc = 0x13ABC4u;
label_13abc4:
    // 0x13abc4: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x13ABC4u;
    {
        const bool branch_taken_0x13abc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abc4) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13ABCCu;
    // 0x13abcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13abd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13abd4: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x13abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x13abd8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x13ABD8u;
    {
        const bool branch_taken_0x13abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABD8u;
            // 0x13abdc: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abd8) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13ABE0u;
label_13abe0:
    // 0x13abe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13abe4: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x13abe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x13abe8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x13ABE8u;
    {
        const bool branch_taken_0x13abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABE8u;
            // 0x13abec: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abe8) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13ABF0u;
label_13abf0:
    // 0x13abf0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13abf4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x13abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13abf8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x13abf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x13abfc: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13ABFCu;
    {
        const bool branch_taken_0x13abfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13abfc) {
            ctx->pc = 0x13AC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABFCu;
            // 0x13ac00: 0xa2250003  sb          $a1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AC40u;
            goto label_13ac40;
        }
    }
    ctx->pc = 0x13AC04u;
    // 0x13ac04: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x13ac08: 0x10650072  beq         $v1, $a1, . + 4 + (0x72 << 2)
    ctx->pc = 0x13AC08u;
    {
        const bool branch_taken_0x13ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x13ac08) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13AC10u;
    // 0x13ac10: 0xc0d4508  jal         func_351420
    ctx->pc = 0x13AC10u;
    SET_GPR_U32(ctx, 31, 0x13AC18u);
    ctx->pc = 0x351420u;
    if (runtime->hasFunction(0x351420u)) {
        auto targetFn = runtime->lookupFunction(0x351420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC18u; }
        if (ctx->pc != 0x13AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351420_0x351420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC18u; }
        if (ctx->pc != 0x13AC18u) { return; }
    }
    ctx->pc = 0x13AC18u;
label_13ac18:
    // 0x13ac18: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x13AC18u;
    {
        const bool branch_taken_0x13ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac18) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13AC20u;
    // 0x13ac20: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13ac24: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13AC24u;
    SET_GPR_U32(ctx, 31, 0x13AC2Cu);
    ctx->pc = 0x13AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC24u;
            // 0x13ac28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC2Cu; }
        if (ctx->pc != 0x13AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC2Cu; }
        if (ctx->pc != 0x13AC2Cu) { return; }
    }
    ctx->pc = 0x13AC2Cu;
label_13ac2c:
    // 0x13ac2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ac30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ac34: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x13ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x13ac38: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x13AC38u;
    {
        const bool branch_taken_0x13ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC38u;
            // 0x13ac3c: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac38) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13AC40u;
label_13ac40:
    // 0x13ac40: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13ac44: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13ac44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ac48: 0x2484db55  addiu       $a0, $a0, -0x24AB
    ctx->pc = 0x13ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957909));
    // 0x13ac4c: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x13ac4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13ac50: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13ac54: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13ac54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13ac58: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13ac5c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13ac60: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13ac64: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ac68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x13ac68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ac6c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13ac6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13ac70: 0x50200057  beql        $at, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x13AC70u;
    {
        const bool branch_taken_0x13ac70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac70) {
            ctx->pc = 0x13AC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC70u;
            // 0x13ac74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ADD0u;
            goto label_13add0;
        }
    }
    ctx->pc = 0x13AC78u;
    // 0x13ac78: 0x5085000e  beql        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x13AC78u;
    {
        const bool branch_taken_0x13ac78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x13ac78) {
            ctx->pc = 0x13AC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC78u;
            // 0x13ac7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ACB4u;
            goto label_13acb4;
        }
    }
    ctx->pc = 0x13AC80u;
    // 0x13ac80: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13AC80u;
    SET_GPR_U32(ctx, 31, 0x13AC88u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC88u; }
        if (ctx->pc != 0x13AC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC88u; }
        if (ctx->pc != 0x13AC88u) { return; }
    }
    ctx->pc = 0x13AC88u;
label_13ac88:
    // 0x13ac88: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x13ac8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13ac90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13ac90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ac94: 0x0  nop
    ctx->pc = 0x13ac94u;
    // NOP
    // 0x13ac98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ac98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ac9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ac9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13aca0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13aca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13aca4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13aca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13aca8: 0x0  nop
    ctx->pc = 0x13aca8u;
    // NOP
    // 0x13acac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13acacu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13acb0: 0x1810  mfhi        $v1
    ctx->pc = 0x13acb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13acb4:
    // 0x13acb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13acb8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x13acb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13acbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13acc0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13acc4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13acc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13accc: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x13acd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13acd4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13acd8: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x13acd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13acdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ace0: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x13ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x13ace4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13ace8: 0x2442dcac  addiu       $v0, $v0, -0x2354
    ctx->pc = 0x13ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958252));
    // 0x13acec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13acecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13acf0: 0x64940  sll         $t1, $a2, 5
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x13acf4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13acf8: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x13acf8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x13acfc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ad00: 0x90ea0002  lbu         $t2, 0x2($a3)
    ctx->pc = 0x13ad00u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x13ad04: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x13ad04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13ad08: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13ad08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ad0c: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x13ad0cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ad10: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13ad14: 0xd3940  sll         $a3, $t5, 5
    ctx->pc = 0x13ad14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x13ad18: 0xa3140  sll         $a2, $t2, 5
    ctx->pc = 0x13ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x13ad1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad20: 0xe58c0  sll         $t3, $t6, 3
    ctx->pc = 0x13ad20u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x13ad24: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x13ad24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x13ad28: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x13ad28u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13ad2c: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x13ad2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x13ad30: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x13ad30u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13ad34: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x13ad34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13ad38: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x13ad38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x13ad3c: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x13ad3cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ad40: 0x922b0000  lbu         $t3, 0x0($s1)
    ctx->pc = 0x13ad40u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ad44: 0xb48c0  sll         $t1, $t3, 3
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13ad48: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x13ad48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x13ad4c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ad4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ad50: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x13ad50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x13ad54: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ad54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ad58: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x13ad58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x13ad5c: 0xa12d0001  sb          $t5, 0x1($t1)
    ctx->pc = 0x13ad5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 13));
    // 0x13ad60: 0x922b0000  lbu         $t3, 0x0($s1)
    ctx->pc = 0x13ad60u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ad64: 0xb48c0  sll         $t1, $t3, 3
    ctx->pc = 0x13ad64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13ad68: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x13ad68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x13ad6c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ad6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ad70: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x13ad74: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x13ad74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ad78: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x13ad78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x13ad7c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x13ad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13ad80: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x13ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x13ad84: 0x92290000  lbu         $t1, 0x0($s1)
    ctx->pc = 0x13ad84u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ad88: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x13ad88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x13ad8c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x13ad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13ad90: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13ad94: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13ad98: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x13ad98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13ad9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13ada0: 0xa06a0002  sb          $t2, 0x2($v1)
    ctx->pc = 0x13ada0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x13ada4: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x13ada4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ada8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x13ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13adac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13adacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13adb0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13adb4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13adb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13adbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13adc0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13adc4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x13ADC4u;
    SET_GPR_U32(ctx, 31, 0x13ADCCu);
    ctx->pc = 0x13ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADC4u;
            // 0x13adc8: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADCCu; }
        if (ctx->pc != 0x13ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADCCu; }
        if (ctx->pc != 0x13ADCCu) { return; }
    }
    ctx->pc = 0x13ADCCu;
label_13adcc:
    // 0x13adcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13add0:
    // 0x13add0: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x13add0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_13add4:
    // 0x13add4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13add4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13add8:
    // 0x13add8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13add8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13addc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13addcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ade0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ade0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ade4: 0x3e00008  jr          $ra
    ctx->pc = 0x13ADE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADE4u;
            // 0x13ade8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x0  nop
    ctx->pc = 0x13adecu;
    // NOP
    ctx->pc = 0x13adf0u;
}
