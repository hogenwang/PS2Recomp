#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182330
// Address: 0x182330 - 0x182c60
void sub_00182330_0x182330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182330_0x182330");
#endif

    switch (ctx->pc) {
        case 0x18248cu: goto label_18248c;
        case 0x182494u: goto label_182494;
        case 0x1824b4u: goto label_1824b4;
        case 0x182610u: goto label_182610;
        case 0x1826f0u: goto label_1826f0;
        case 0x1827ccu: goto label_1827cc;
        case 0x182840u: goto label_182840;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828e0u: goto label_1828e0;
        case 0x182924u: goto label_182924;
        case 0x1829a0u: goto label_1829a0;
        case 0x1829acu: goto label_1829ac;
        case 0x1829d0u: goto label_1829d0;
        case 0x1829ecu: goto label_1829ec;
        case 0x182a9cu: goto label_182a9c;
        case 0x182af4u: goto label_182af4;
        case 0x182b8cu: goto label_182b8c;
        case 0x182bb4u: goto label_182bb4;
        case 0x182bc8u: goto label_182bc8;
        case 0x182c44u: goto label_182c44;
        case 0x182c50u: goto label_182c50;
        default: break;
    }

    ctx->pc = 0x182330u;

label_182330:
    // 0x182330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x182334: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x182334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x182338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18233c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182340: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182348: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x182348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18234c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18235c: 0x8c850510  lw          $a1, 0x510($a0)
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x182360: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x182364: 0xac830510  sw          $v1, 0x510($a0)
    ctx->pc = 0x182364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1296), GPR_U32(ctx, 3));
    // 0x182368: 0x8c840538  lw          $a0, 0x538($a0)
    ctx->pc = 0x182368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x18236c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x18236cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182370: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x182370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x182374: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x182374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x182378: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x182378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18237c: 0x32238000  andi        $v1, $s1, 0x8000
    ctx->pc = 0x18237cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x182380: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x182380u;
    {
        const bool branch_taken_0x182380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182380u;
            // 0x182384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182380) {
            ctx->pc = 0x18280Cu;
            goto label_18280c;
        }
    }
    ctx->pc = 0x182388u;
    // 0x182388: 0x8e830510  lw          $v1, 0x510($s4)
    ctx->pc = 0x182388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x18238c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x182390: 0xae820510  sw          $v0, 0x510($s4)
    ctx->pc = 0x182390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1296), GPR_U32(ctx, 2));
    // 0x182394: 0x94700000  lhu         $s0, 0x0($v1)
    ctx->pc = 0x182394u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182398: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x18239c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x18239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1823a0: 0xae820538  sw          $v0, 0x538($s4)
    ctx->pc = 0x1823a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1336), GPR_U32(ctx, 2));
    // 0x1823a4: 0x8e820530  lw          $v0, 0x530($s4)
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x1823a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1823a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1823ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1823ACu;
    {
        const bool branch_taken_0x1823ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823ac) {
            ctx->pc = 0x1823B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1823ACu;
            // 0x1823b0: 0x928204f0  lbu         $v0, 0x4F0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1823C8u;
            goto label_1823c8;
        }
    }
    ctx->pc = 0x1823B4u;
    // 0x1823b4: 0x8e830498  lw          $v1, 0x498($s4)
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x1823b8: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1823bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1823bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1823c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1823C0u;
    {
        const bool branch_taken_0x1823c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823C0u;
            // 0x1823c4: 0xae820498  sw          $v0, 0x498($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823c0) {
            ctx->pc = 0x182410u;
            goto label_182410;
        }
    }
    ctx->pc = 0x1823C8u;
label_1823c8:
    // 0x1823c8: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1823c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1823cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1823CCu;
    {
        const bool branch_taken_0x1823cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823cc) {
            ctx->pc = 0x1823D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1823CCu;
            // 0x1823d0: 0x8e820538  lw          $v0, 0x538($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1823E8u;
            goto label_1823e8;
        }
    }
    ctx->pc = 0x1823D4u;
    // 0x1823d4: 0x8e830498  lw          $v1, 0x498($s4)
    ctx->pc = 0x1823d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x1823d8: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1823dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1823dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1823e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1823E0u;
    {
        const bool branch_taken_0x1823e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823E0u;
            // 0x1823e4: 0xae820498  sw          $v0, 0x498($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e0) {
            ctx->pc = 0x182410u;
            goto label_182410;
        }
    }
    ctx->pc = 0x1823E8u;
label_1823e8:
    // 0x1823e8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1823e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1823ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1823ECu;
    {
        const bool branch_taken_0x1823ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823ec) {
            ctx->pc = 0x1823F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1823ECu;
            // 0x1823f0: 0x8e830498  lw          $v1, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182404u;
            goto label_182404;
        }
    }
    ctx->pc = 0x1823F4u;
    // 0x1823f4: 0x8e820498  lw          $v0, 0x498($s4)
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x1823f8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1823f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1823fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1823FCu;
    {
        const bool branch_taken_0x1823fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823FCu;
            // 0x182400: 0xae820498  sw          $v0, 0x498($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823fc) {
            ctx->pc = 0x182410u;
            goto label_182410;
        }
    }
    ctx->pc = 0x182404u;
label_182404:
    // 0x182404: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x182408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18240c: 0xae820498  sw          $v0, 0x498($s4)
    ctx->pc = 0x18240cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
label_182410:
    // 0x182410: 0x8e830538  lw          $v1, 0x538($s4)
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
    // 0x182414: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x182418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18241c: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x18241cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x182420: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x182420u;
    {
        const bool branch_taken_0x182420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182420) {
            ctx->pc = 0x182424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182420u;
            // 0x182424: 0x8e830510  lw          $v1, 0x510($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182470u;
            goto label_182470;
        }
    }
    ctx->pc = 0x182428u;
    // 0x182428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18242c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18242Cu;
    {
        const bool branch_taken_0x18242c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18242c) {
            ctx->pc = 0x182430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18242Cu;
            // 0x182430: 0x8e83048c  lw          $v1, 0x48C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182458u;
            goto label_182458;
        }
    }
    ctx->pc = 0x182434u;
    // 0x182434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182438: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182438u;
    {
        const bool branch_taken_0x182438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x182438) {
            ctx->pc = 0x18243Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182438u;
            // 0x18243c: 0x8e83048c  lw          $v1, 0x48C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182448u;
            goto label_182448;
        }
    }
    ctx->pc = 0x182440u;
    // 0x182440: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x182440u;
    {
        const bool branch_taken_0x182440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182440) {
            ctx->pc = 0x18246Cu;
            goto label_18246c;
        }
    }
    ctx->pc = 0x182448u;
label_182448:
    // 0x182448: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x18244c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182450: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182450u;
    {
        const bool branch_taken_0x182450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182450u;
            // 0x182454: 0xae82048c  sw          $v0, 0x48C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182450) {
            ctx->pc = 0x18246Cu;
            goto label_18246c;
        }
    }
    ctx->pc = 0x182458u;
label_182458:
    // 0x182458: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x18245c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182460: 0xae82048c  sw          $v0, 0x48C($s4)
    ctx->pc = 0x182460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1164), GPR_U32(ctx, 2));
    // 0x182464: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x182464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x182468: 0xae82048c  sw          $v0, 0x48C($s4)
    ctx->pc = 0x182468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1164), GPR_U32(ctx, 2));
label_18246c:
    // 0x18246c: 0x8e830510  lw          $v1, 0x510($s4)
    ctx->pc = 0x18246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
label_182470:
    // 0x182470: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x182474: 0xae820510  sw          $v0, 0x510($s4)
    ctx->pc = 0x182474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1296), GPR_U32(ctx, 2));
    // 0x182478: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18247c: 0xa682053c  sh          $v0, 0x53C($s4)
    ctx->pc = 0x18247cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1340), (uint16_t)GPR_U32(ctx, 2));
    // 0x182480: 0x9684053c  lhu         $a0, 0x53C($s4)
    ctx->pc = 0x182480u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1340)));
    // 0x182484: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x182484u;
    SET_GPR_U32(ctx, 31, 0x18248Cu);
    ctx->pc = 0x182488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182484u;
            // 0x182488: 0x26850268  addiu       $a1, $s4, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18248Cu; }
        if (ctx->pc != 0x18248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18248Cu; }
        if (ctx->pc != 0x18248Cu) { return; }
    }
    ctx->pc = 0x18248Cu;
label_18248c:
    // 0x18248c: 0xc05fa60  jal         func_17E980
    ctx->pc = 0x18248Cu;
    SET_GPR_U32(ctx, 31, 0x182494u);
    ctx->pc = 0x182490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18248Cu;
            // 0x182490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E980u;
    if (runtime->hasFunction(0x17E980u)) {
        auto targetFn = runtime->lookupFunction(0x17E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182494u; }
        if (ctx->pc != 0x182494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E980_0x17e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182494u; }
        if (ctx->pc != 0x182494u) { return; }
    }
    ctx->pc = 0x182494u;
label_182494:
    // 0x182494: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x182494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x182498: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x18249c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1824a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1824a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824a4: 0x24c63ca0  addiu       $a2, $a2, 0x3CA0
    ctx->pc = 0x1824a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15520));
    // 0x1824a8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1824ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1824acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1824b0: 0x24a5e760  addiu       $a1, $a1, -0x18A0
    ctx->pc = 0x1824b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
label_1824b4:
    // 0x1824b4: 0xf14007  srav        $t0, $s1, $a3
    ctx->pc = 0x1824b4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
    // 0x1824b8: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x1824b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1824bc: 0x11000046  beqz        $t0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1824BCu;
    {
        const bool branch_taken_0x1824bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824bc) {
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x1824C4u;
    // 0x1824c4: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x1824c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1824c8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x1824C8u;
    {
        const bool branch_taken_0x1824c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824c8) {
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x1824D0u;
    // 0x1824d0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1824d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1824d4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1824d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1824d8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1824dc: 0x1000008  jr          $t0
    ctx->pc = 0x1824DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1824E8u: goto label_1824e8;
            case 0x182510u: goto label_182510;
            case 0x182538u: goto label_182538;
            case 0x182560u: goto label_182560;
            case 0x182588u: goto label_182588;
            case 0x1825B0u: goto label_1825b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1824E4u;
    // 0x1824e4: 0x0  nop
    ctx->pc = 0x1824e4u;
    // NOP
label_1824e8:
    // 0x1824e8: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1824ec: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x1824ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1824f0: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1824f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1824f8: 0xad090544  sw          $t1, 0x544($t0)
    ctx->pc = 0x1824f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1348), GPR_U32(ctx, 9));
    // 0x1824fc: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x1824fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x182500: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x182500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x182504: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x182504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x182508: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x182508u;
    {
        const bool branch_taken_0x182508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182508u;
            // 0x18250c: 0xae880530  sw          $t0, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182508) {
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x182510u;
label_182510:
    // 0x182510: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x182510u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182514: 0x124080  sll         $t0, $s2, 2
    ctx->pc = 0x182514u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x182518: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x182518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x18251c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18251cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x182520: 0xad090560  sw          $t1, 0x560($t0)
    ctx->pc = 0x182520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1376), GPR_U32(ctx, 9));
    // 0x182524: 0xa292055c  sb          $s2, 0x55C($s4)
    ctx->pc = 0x182524u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1372), (uint8_t)GPR_U32(ctx, 18));
    // 0x182528: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x182528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x18252c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x18252cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x182530: 0xae880530  sw          $t0, 0x530($s4)
    ctx->pc = 0x182530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
    // 0x182534: 0x0  nop
    ctx->pc = 0x182534u;
    // NOP
label_182538:
    // 0x182538: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x182538u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18253c: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x182540: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x182540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x182544: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182548: 0xad090544  sw          $t1, 0x544($t0)
    ctx->pc = 0x182548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1348), GPR_U32(ctx, 9));
    // 0x18254c: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x18254cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x182550: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x182554: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x182554u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x182558: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x182558u;
    {
        const bool branch_taken_0x182558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182558u;
            // 0x18255c: 0xae880530  sw          $t0, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182558) {
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x182560u;
label_182560:
    // 0x182560: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x182560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182564: 0x124080  sll         $t0, $s2, 2
    ctx->pc = 0x182564u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x182568: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x18256c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x182570: 0xad090560  sw          $t1, 0x560($t0)
    ctx->pc = 0x182570u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1376), GPR_U32(ctx, 9));
    // 0x182574: 0xa292055c  sb          $s2, 0x55C($s4)
    ctx->pc = 0x182574u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1372), (uint8_t)GPR_U32(ctx, 18));
    // 0x182578: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x182578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x18257c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x18257cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x182580: 0xae880530  sw          $t0, 0x530($s4)
    ctx->pc = 0x182580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
    // 0x182584: 0x0  nop
    ctx->pc = 0x182584u;
    // NOP
label_182588:
    // 0x182588: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x182588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18258c: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x182590: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x182594: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x182594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182598: 0xad090544  sw          $t1, 0x544($t0)
    ctx->pc = 0x182598u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1348), GPR_U32(ctx, 9));
    // 0x18259c: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x18259cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x1825a0: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x1825a4: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x1825a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x1825a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1825A8u;
    {
        const bool branch_taken_0x1825a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825A8u;
            // 0x1825ac: 0xae880530  sw          $t0, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825a8) {
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x1825B0u;
label_1825b0:
    // 0x1825b0: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1825b4: 0x124080  sll         $t0, $s2, 2
    ctx->pc = 0x1825b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1825b8: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x1825b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1825bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1825c0: 0xad090560  sw          $t1, 0x560($t0)
    ctx->pc = 0x1825c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1376), GPR_U32(ctx, 9));
    // 0x1825c4: 0xa292055c  sb          $s2, 0x55C($s4)
    ctx->pc = 0x1825c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1372), (uint8_t)GPR_U32(ctx, 18));
    // 0x1825c8: 0x8e880530  lw          $t0, 0x530($s4)
    ctx->pc = 0x1825c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x1825cc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1825ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1825d0: 0xae880530  sw          $t0, 0x530($s4)
    ctx->pc = 0x1825d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 8));
    // 0x1825d4: 0x0  nop
    ctx->pc = 0x1825d4u;
    // NOP
label_1825d8:
    // 0x1825d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1825d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1825dc: 0x28e80006  slti        $t0, $a3, 0x6
    ctx->pc = 0x1825dcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1825e0: 0x1500ffb4  bnez        $t0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1825E0u;
    {
        const bool branch_taken_0x1825e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825E0u;
            // 0x1825e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825e0) {
            ctx->pc = 0x1824B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1824b4;
        }
    }
    ctx->pc = 0x1825E8u;
    // 0x1825e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1825e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1825ec: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x1825f0: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x1825f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1825f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1825f8: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1825fc: 0x25083cc8  addiu       $t0, $t0, 0x3CC8
    ctx->pc = 0x1825fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15560));
    // 0x182600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x182600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182604: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182608: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x182608u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x18260c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_182610:
    // 0x182610: 0xd14807  srav        $t1, $s1, $a2
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x182614: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x182614u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x182618: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x182618u;
    {
        const bool branch_taken_0x182618 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x182618) {
            ctx->pc = 0x1826B8u;
            goto label_1826b8;
        }
    }
    ctx->pc = 0x182620u;
    // 0x182620: 0x24c9fff6  addiu       $t1, $a2, -0xA
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
    // 0x182624: 0x1125001c  beq         $t1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x182624u;
    {
        const bool branch_taken_0x182624 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x182624) {
            ctx->pc = 0x182698u;
            goto label_182698;
        }
    }
    ctx->pc = 0x18262Cu;
    // 0x18262c: 0x11240010  beq         $t1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18262Cu;
    {
        const bool branch_taken_0x18262c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x18262c) {
            ctx->pc = 0x182670u;
            goto label_182670;
        }
    }
    ctx->pc = 0x182634u;
    // 0x182634: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182634u;
    {
        const bool branch_taken_0x182634 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x182634) {
            ctx->pc = 0x182648u;
            goto label_182648;
        }
    }
    ctx->pc = 0x18263Cu;
    // 0x18263c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18263Cu;
    {
        const bool branch_taken_0x18263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18263c) {
            ctx->pc = 0x1826B8u;
            goto label_1826b8;
        }
    }
    ctx->pc = 0x182644u;
    // 0x182644: 0x0  nop
    ctx->pc = 0x182644u;
    // NOP
label_182648:
    // 0x182648: 0x8d0bfff0  lw          $t3, -0x10($t0)
    ctx->pc = 0x182648u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967280)));
    // 0x18264c: 0x134880  sll         $t1, $s3, 2
    ctx->pc = 0x18264cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x182650: 0x2894821  addu        $t1, $s4, $t1
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x182654: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182658: 0xad2b0544  sw          $t3, 0x544($t1)
    ctx->pc = 0x182658u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1348), GPR_U32(ctx, 11));
    // 0x18265c: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x18265cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x182660: 0x8e890530  lw          $t1, 0x530($s4)
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x182664: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x182664u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x182668: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x182668u;
    {
        const bool branch_taken_0x182668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182668u;
            // 0x18266c: 0xae890530  sw          $t1, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182668) {
            ctx->pc = 0x1826B8u;
            goto label_1826b8;
        }
    }
    ctx->pc = 0x182670u;
label_182670:
    // 0x182670: 0x8d0bfff0  lw          $t3, -0x10($t0)
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967280)));
    // 0x182674: 0x134880  sll         $t1, $s3, 2
    ctx->pc = 0x182674u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x182678: 0x2894821  addu        $t1, $s4, $t1
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x18267c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18267cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182680: 0xad2b0544  sw          $t3, 0x544($t1)
    ctx->pc = 0x182680u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1348), GPR_U32(ctx, 11));
    // 0x182684: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x182684u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x182688: 0x8e890530  lw          $t1, 0x530($s4)
    ctx->pc = 0x182688u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x18268c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x18268cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x182690: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x182690u;
    {
        const bool branch_taken_0x182690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182690u;
            // 0x182694: 0xae890530  sw          $t1, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182690) {
            ctx->pc = 0x1826B8u;
            goto label_1826b8;
        }
    }
    ctx->pc = 0x182698u;
label_182698:
    // 0x182698: 0x8d09fff0  lw          $t1, -0x10($t0)
    ctx->pc = 0x182698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967280)));
    // 0x18269c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18269cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1826a0: 0xace90560  sw          $t1, 0x560($a3)
    ctx->pc = 0x1826a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1376), GPR_U32(ctx, 9));
    // 0x1826a4: 0xa292055c  sb          $s2, 0x55C($s4)
    ctx->pc = 0x1826a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1372), (uint8_t)GPR_U32(ctx, 18));
    // 0x1826a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1826a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1826ac: 0x8e890530  lw          $t1, 0x530($s4)
    ctx->pc = 0x1826acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x1826b0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1826b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1826b4: 0xae890530  sw          $t1, 0x530($s4)
    ctx->pc = 0x1826b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 9));
label_1826b8:
    // 0x1826b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1826b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1826bc: 0x28c9000d  slti        $t1, $a2, 0xD
    ctx->pc = 0x1826bcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1826c0: 0x1520ffd3  bnez        $t1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1826C0u;
    {
        const bool branch_taken_0x1826c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1826C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1826C0u;
            // 0x1826c4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826c0) {
            ctx->pc = 0x182610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182610;
        }
    }
    ctx->pc = 0x1826C8u;
    // 0x1826c8: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x1826c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1826cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1826ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1826d0: 0x2864821  addu        $t1, $s4, $a2
    ctx->pc = 0x1826d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1826d4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1826d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1826d8: 0x3c06fffd  lui         $a2, 0xFFFD
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65533 << 16));
    // 0x1826dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1826dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1826e0: 0x24a53cb0  addiu       $a1, $a1, 0x3CB0
    ctx->pc = 0x1826e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15536));
    // 0x1826e4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1826e8: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x1826e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x1826ec: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x1826ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1826f0:
    // 0x1826f0: 0x703007  srav        $a2, $s0, $v1
    ctx->pc = 0x1826f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x1826f4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1826f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1826f8: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1826F8u;
    {
        const bool branch_taken_0x1826f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826f8) {
            ctx->pc = 0x182760u;
            goto label_182760;
        }
    }
    ctx->pc = 0x182700u;
    // 0x182700: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182700u;
    {
        const bool branch_taken_0x182700 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x182704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182700u;
            // 0x182704: 0x30660001  andi        $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182700) {
            ctx->pc = 0x182714u;
            goto label_182714;
        }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x182708u;
    {
        const bool branch_taken_0x182708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x182708) {
            ctx->pc = 0x182714u;
            goto label_182714;
        }
    }
    ctx->pc = 0x182710u;
    // 0x182710: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x182710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_182714:
    // 0x182714: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x182714u;
    {
        const bool branch_taken_0x182714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x182714) {
            ctx->pc = 0x182740u;
            goto label_182740;
        }
    }
    ctx->pc = 0x18271Cu;
    // 0x18271c: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x18271cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x182720: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x182724: 0xac860560  sw          $a2, 0x560($a0)
    ctx->pc = 0x182724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 6));
    // 0x182728: 0xa292055c  sb          $s2, 0x55C($s4)
    ctx->pc = 0x182728u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1372), (uint8_t)GPR_U32(ctx, 18));
    // 0x18272c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x182730: 0x8e860530  lw          $a2, 0x530($s4)
    ctx->pc = 0x182730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x182734: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x182734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x182738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x182738u;
    {
        const bool branch_taken_0x182738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182738u;
            // 0x18273c: 0xae860530  sw          $a2, 0x530($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182738) {
            ctx->pc = 0x182760u;
            goto label_182760;
        }
    }
    ctx->pc = 0x182740u;
label_182740:
    // 0x182740: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x182740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x182744: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x182744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x182748: 0xad260544  sw          $a2, 0x544($t1)
    ctx->pc = 0x182748u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1348), GPR_U32(ctx, 6));
    // 0x18274c: 0xa2930540  sb          $s3, 0x540($s4)
    ctx->pc = 0x18274cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
    // 0x182750: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x182754: 0x8e860530  lw          $a2, 0x530($s4)
    ctx->pc = 0x182754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x182758: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x182758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x18275c: 0xae860530  sw          $a2, 0x530($s4)
    ctx->pc = 0x18275cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1328), GPR_U32(ctx, 6));
label_182760:
    // 0x182760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182764: 0x2866000c  slti        $a2, $v1, 0xC
    ctx->pc = 0x182764u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x182768: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x182768u;
    {
        const bool branch_taken_0x182768 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182768u;
            // 0x18276c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182768) {
            ctx->pc = 0x1826F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1826f0;
        }
    }
    ctx->pc = 0x182770u;
    // 0x182770: 0x56600009  bnel        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x182770u;
    {
        const bool branch_taken_0x182770 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x182770) {
            ctx->pc = 0x182774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182770u;
            // 0x182774: 0x8e830538  lw          $v1, 0x538($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182798u;
            goto label_182798;
        }
    }
    ctx->pc = 0x182778u;
    // 0x182778: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x182778u;
    {
        const bool branch_taken_0x182778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x182778) {
            ctx->pc = 0x182794u;
            goto label_182794;
        }
    }
    ctx->pc = 0x182780u;
    // 0x182780: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x182784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182788: 0x24841cd0  addiu       $a0, $a0, 0x1CD0
    ctx->pc = 0x182788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7376));
    // 0x18278c: 0xae840544  sw          $a0, 0x544($s4)
    ctx->pc = 0x18278cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1348), GPR_U32(ctx, 4));
    // 0x182790: 0xa2830540  sb          $v1, 0x540($s4)
    ctx->pc = 0x182790u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 3));
label_182794:
    // 0x182794: 0x8e830538  lw          $v1, 0x538($s4)
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
label_182798:
    // 0x182798: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x182798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x18279c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18279Cu;
    {
        const bool branch_taken_0x18279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18279c) {
            ctx->pc = 0x1827A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18279Cu;
            // 0x1827a0: 0x8e830538  lw          $v1, 0x538($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1827D0u;
            goto label_1827d0;
        }
    }
    ctx->pc = 0x1827A4u;
    // 0x1827a4: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1827A4u;
    {
        const bool branch_taken_0x1827a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827A4u;
            // 0x1827a8: 0xa2930540  sb          $s3, 0x540($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1344), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827a4) {
            ctx->pc = 0x1827CCu;
            goto label_1827cc;
        }
    }
    ctx->pc = 0x1827ACu;
    // 0x1827ac: 0x8e820538  lw          $v0, 0x538($s4)
    ctx->pc = 0x1827acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
    // 0x1827b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1827b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827b4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1827b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1827bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1827bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1827c0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1827c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1827c4: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x1827C4u;
    SET_GPR_U32(ctx, 31, 0x1827CCu);
    ctx->pc = 0x1827C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827C4u;
            // 0x1827c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (runtime->hasFunction(0x17F860u)) {
        auto targetFn = runtime->lookupFunction(0x17F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827CCu; }
        if (ctx->pc != 0x1827CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F860_0x17f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827CCu; }
        if (ctx->pc != 0x1827CCu) { return; }
    }
    ctx->pc = 0x1827CCu;
label_1827cc:
    // 0x1827cc: 0x8e830538  lw          $v1, 0x538($s4)
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
label_1827d0:
    // 0x1827d0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1827d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1827d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1827D4u;
    {
        const bool branch_taken_0x1827d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827d4) {
            ctx->pc = 0x1827D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1827D4u;
            // 0x1827d8: 0x8e830538  lw          $v1, 0x538($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1827E8u;
            goto label_1827e8;
        }
    }
    ctx->pc = 0x1827DCu;
    // 0x1827dc: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x1827e0: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x1827e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1827e4: 0x8e830538  lw          $v1, 0x538($s4)
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
label_1827e8:
    // 0x1827e8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1827e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1827ec: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1827ECu;
    {
        const bool branch_taken_0x1827ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827ec) {
            ctx->pc = 0x1827F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1827ECu;
            // 0x1827f0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182820u;
            goto label_182820;
        }
    }
    ctx->pc = 0x1827F4u;
    // 0x1827f4: 0x8e840518  lw          $a0, 0x518($s4)
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x1827f8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1827F8u;
    {
        const bool branch_taken_0x1827f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827f8) {
            ctx->pc = 0x18281Cu;
            goto label_18281c;
        }
    }
    ctx->pc = 0x182800u;
    // 0x182800: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x182800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x182804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182804u;
    {
        const bool branch_taken_0x182804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182804u;
            // 0x182808: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182804) {
            ctx->pc = 0x18281Cu;
            goto label_18281c;
        }
    }
    ctx->pc = 0x18280Cu;
label_18280c:
    // 0x18280c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x18280cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x182810: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x182814: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x182814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x182818: 0xae830538  sw          $v1, 0x538($s4)
    ctx->pc = 0x182818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1336), GPR_U32(ctx, 3));
label_18281c:
    // 0x18281c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18281cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_182820:
    // 0x182820: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182824: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18282c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18282cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182838: 0x3e00008  jr          $ra
    ctx->pc = 0x182838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182838u;
            // 0x18283c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182840u;
label_182840:
    // 0x182840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18284c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x18284cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x182850: 0x8602050c  lh          $v0, 0x50C($s0)
    ctx->pc = 0x182850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1292)));
    // 0x182854: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x182854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    // 0x182858: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x182858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18285c: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x18285cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x182860: 0x50200021  beql        $at, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x182860u;
    {
        const bool branch_taken_0x182860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182860) {
            ctx->pc = 0x182864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182860u;
            // 0x182864: 0x2443fff0  addiu       $v1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1828E8u;
            goto label_1828e8;
        }
    }
    ctx->pc = 0x182868u;
    // 0x182868: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18286c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x182870: 0x8c44b848  lw          $a0, -0x47B8($v0)
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948936)));
    // 0x182874: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182878: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x182878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18287c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x182880: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182888: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18288c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x182890: 0xae020510  sw          $v0, 0x510($s0)
    ctx->pc = 0x182890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
    // 0x182894: 0x8602050c  lh          $v0, 0x50C($s0)
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1292)));
    // 0x182898: 0x2442fedb  addiu       $v0, $v0, -0x125
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967003));
    // 0x18289c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x18289cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1828a0: 0x5020001e  beql        $at, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1828A0u;
    {
        const bool branch_taken_0x1828a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828a0) {
            ctx->pc = 0x1828A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1828A0u;
            // 0x1828a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18291Cu;
            goto label_18291c;
        }
    }
    ctx->pc = 0x1828A8u;
    // 0x1828a8: 0xc062794  jal         func_189E50
    ctx->pc = 0x1828A8u;
    SET_GPR_U32(ctx, 31, 0x1828B0u);
    ctx->pc = 0x1828ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828A8u;
            // 0x1828ac: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (runtime->hasFunction(0x189E50u)) {
        auto targetFn = runtime->lookupFunction(0x189E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828B0u; }
        if (ctx->pc != 0x1828B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E50_0x189e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828B0u; }
        if (ctx->pc != 0x1828B0u) { return; }
    }
    ctx->pc = 0x1828B0u;
label_1828b0:
    // 0x1828b0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1828b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1828b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1828b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828b8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1828bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1828c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1828c4: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x1828c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1828cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1828d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1828d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828d8: 0xc062d68  jal         func_18B5A0
    ctx->pc = 0x1828D8u;
    SET_GPR_U32(ctx, 31, 0x1828E0u);
    ctx->pc = 0x1828DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828D8u;
            // 0x1828dc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B5A0u;
    if (runtime->hasFunction(0x18B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828E0u; }
        if (ctx->pc != 0x1828E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B5A0_0x18b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828E0u; }
        if (ctx->pc != 0x1828E0u) { return; }
    }
    ctx->pc = 0x1828E0u;
label_1828e0:
    // 0x1828e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1828E0u;
    {
        const bool branch_taken_0x1828e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828e0) {
            ctx->pc = 0x182918u;
            goto label_182918;
        }
    }
    ctx->pc = 0x1828E8u;
label_1828e8:
    // 0x1828e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1828e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1828ec: 0x8c44b850  lw          $a0, -0x47B0($v0)
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948944)));
    // 0x1828f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1828f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1828f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1828f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1828f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1828f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1828fc: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1828fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x182900: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x182900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x182904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18290c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x182914: 0xae020510  sw          $v0, 0x510($s0)
    ctx->pc = 0x182914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
label_182918:
    // 0x182918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18291c:
    // 0x18291c: 0xc05fa60  jal         func_17E980
    ctx->pc = 0x18291Cu;
    SET_GPR_U32(ctx, 31, 0x182924u);
    ctx->pc = 0x17E980u;
    if (runtime->hasFunction(0x17E980u)) {
        auto targetFn = runtime->lookupFunction(0x17E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182924u; }
        if (ctx->pc != 0x182924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E980_0x17e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182924u; }
        if (ctx->pc != 0x182924u) { return; }
    }
    ctx->pc = 0x182924u;
label_182924:
    // 0x182924: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x182924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x182928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18292c: 0x24422320  addiu       $v0, $v0, 0x2320
    ctx->pc = 0x18292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8992));
    // 0x182930: 0xae020544  sw          $v0, 0x544($s0)
    ctx->pc = 0x182930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1348), GPR_U32(ctx, 2));
    // 0x182934: 0xa2030540  sb          $v1, 0x540($s0)
    ctx->pc = 0x182934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1344), (uint8_t)GPR_U32(ctx, 3));
    // 0x182938: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18293c: 0x8e03048c  lw          $v1, 0x48C($s0)
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x182940: 0x344201a0  ori         $v0, $v0, 0x1A0
    ctx->pc = 0x182940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
    // 0x182944: 0x3063001c  andi        $v1, $v1, 0x1C
    ctx->pc = 0x182944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28);
    // 0x182948: 0xae03048c  sw          $v1, 0x48C($s0)
    ctx->pc = 0x182948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1164), GPR_U32(ctx, 3));
    // 0x18294c: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x18294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x182950: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x182954: 0xae030490  sw          $v1, 0x490($s0)
    ctx->pc = 0x182954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 3));
    // 0x182958: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x18295c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182960: 0xae020494  sw          $v0, 0x494($s0)
    ctx->pc = 0x182960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    // 0x182964: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x182968: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x182968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x18296c: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x18296cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x182970: 0x920204f0  lbu         $v0, 0x4F0($s0)
    ctx->pc = 0x182970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x182974: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x182974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x182978: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182978u;
    {
        const bool branch_taken_0x182978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182978) {
            ctx->pc = 0x18297Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182978u;
            // 0x18297c: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182990u;
            goto label_182990;
        }
    }
    ctx->pc = 0x182980u;
    // 0x182980: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x182980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x182984: 0x304200c3  andi        $v0, $v0, 0xC3
    ctx->pc = 0x182984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)195);
    // 0x182988: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x182988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x18298c: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_182990:
    // 0x182990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182994: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x182994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x182998: 0xc05069c  jal         func_141A70
    ctx->pc = 0x182998u;
    SET_GPR_U32(ctx, 31, 0x1829A0u);
    ctx->pc = 0x18299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182998u;
            // 0x18299c: 0xae020494  sw          $v0, 0x494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A70u;
    if (runtime->hasFunction(0x141A70u)) {
        auto targetFn = runtime->lookupFunction(0x141A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829A0u; }
        if (ctx->pc != 0x1829A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A70_0x141a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829A0u; }
        if (ctx->pc != 0x1829A0u) { return; }
    }
    ctx->pc = 0x1829A0u;
label_1829a0:
    // 0x1829a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1829a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a4: 0xc0608cc  jal         func_182330
    ctx->pc = 0x1829A4u;
    SET_GPR_U32(ctx, 31, 0x1829ACu);
    ctx->pc = 0x1829A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829A4u;
            // 0x1829a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182330u;
    goto label_182330;
    ctx->pc = 0x1829ACu;
label_1829ac:
    // 0x1829ac: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x1829acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x1829b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1829b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1829b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1829b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1829b8: 0xae030530  sw          $v1, 0x530($s0)
    ctx->pc = 0x1829b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
    // 0x1829bc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x1829bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x1829c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1829c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1829c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1829c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1829C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829C8u;
            // 0x1829cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1829D0u;
label_1829d0:
    // 0x1829d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1829d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1829d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1829d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1829dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1829dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1829e0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1829e4: 0xc05f9e4  jal         func_17E790
    ctx->pc = 0x1829E4u;
    SET_GPR_U32(ctx, 31, 0x1829ECu);
    ctx->pc = 0x1829E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829E4u;
            // 0x1829e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E790u;
    if (runtime->hasFunction(0x17E790u)) {
        auto targetFn = runtime->lookupFunction(0x17E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829ECu; }
        if (ctx->pc != 0x1829ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E790_0x17e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829ECu; }
        if (ctx->pc != 0x1829ECu) { return; }
    }
    ctx->pc = 0x1829ECu;
label_1829ec:
    // 0x1829ec: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x1829ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x1829f0: 0x308300c0  andi        $v1, $a0, 0xC0
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x1829f4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1829F4u;
    {
        const bool branch_taken_0x1829f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829f4) {
            ctx->pc = 0x1829F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1829F4u;
            // 0x1829f8: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182A3Cu;
            goto label_182a3c;
        }
    }
    ctx->pc = 0x1829FCu;
    // 0x1829fc: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1829fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x182a00: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x182A00u;
    {
        const bool branch_taken_0x182a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a00) {
            ctx->pc = 0x182A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182A00u;
            // 0x182a04: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182A34u;
            goto label_182a34;
        }
    }
    ctx->pc = 0x182A08u;
    // 0x182a08: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x182a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x182a0c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182A0Cu;
    {
        const bool branch_taken_0x182a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182a0c) {
            ctx->pc = 0x182A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182A0Cu;
            // 0x182a10: 0x2403ff3f  addiu       $v1, $zero, -0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182A24u;
            goto label_182a24;
        }
    }
    ctx->pc = 0x182A14u;
    // 0x182a14: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x182a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x182a18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182A18u;
    {
        const bool branch_taken_0x182a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A18u;
            // 0x182a1c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a18) {
            ctx->pc = 0x182A38u;
            goto label_182a38;
        }
    }
    ctx->pc = 0x182A20u;
    // 0x182a20: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_182a24:
    // 0x182a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x182a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182A28u;
    {
        const bool branch_taken_0x182a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A28u;
            // 0x182a2c: 0xae030530  sw          $v1, 0x530($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a28) {
            ctx->pc = 0x182A38u;
            goto label_182a38;
        }
    }
    ctx->pc = 0x182A30u;
    // 0x182a30: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x182a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_182a34:
    // 0x182a34: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x182a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_182a38:
    // 0x182a38: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x182a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_182a3c:
    // 0x182a3c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x182a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x182a40: 0x50600050  beql        $v1, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x182A40u;
    {
        const bool branch_taken_0x182a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a40) {
            ctx->pc = 0x182A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182A40u;
            // 0x182a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182B84u;
            goto label_182b84;
        }
    }
    ctx->pc = 0x182A48u;
    // 0x182a48: 0x8203057c  lb          $v1, 0x57C($s0)
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x182a4c: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x182a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x182a50: 0x54200080  bnel        $at, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x182A50u;
    {
        const bool branch_taken_0x182a50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182a50) {
            ctx->pc = 0x182A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182A50u;
            // 0x182a54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182C54u;
            goto label_182c54;
        }
    }
    ctx->pc = 0x182A58u;
    // 0x182a58: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x182a5c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x182A5Cu;
    {
        const bool branch_taken_0x182a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A5Cu;
            // 0x182a60: 0xa202057c  sb          $v0, 0x57C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a5c) {
            ctx->pc = 0x182A84u;
            goto label_182a84;
        }
    }
    ctx->pc = 0x182A64u;
    // 0x182a64: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x182a68: 0x240200ad  addiu       $v0, $zero, 0xAD
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x182a6c: 0xa20300f6  sb          $v1, 0xF6($s0)
    ctx->pc = 0x182a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x182a70: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x182a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x182a74: 0x920204f0  lbu         $v0, 0x4F0($s0)
    ctx->pc = 0x182a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x182a78: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x182a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x182a7c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x182A7Cu;
    {
        const bool branch_taken_0x182a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A7Cu;
            // 0x182a80: 0xa20204f0  sb          $v0, 0x4F0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a7c) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182A84u;
label_182a84:
    // 0x182a84: 0x8202057c  lb          $v0, 0x57C($s0)
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x182a88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x182a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x182a8c: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x182A8Cu;
    {
        const bool branch_taken_0x182a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a8c) {
            ctx->pc = 0x182A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182A8Cu;
            // 0x182a90: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182B90u;
            goto label_182b90;
        }
    }
    ctx->pc = 0x182A94u;
    // 0x182a94: 0xc05fa00  jal         func_17E800
    ctx->pc = 0x182A94u;
    SET_GPR_U32(ctx, 31, 0x182A9Cu);
    ctx->pc = 0x182A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A94u;
            // 0x182a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E800u;
    if (runtime->hasFunction(0x17E800u)) {
        auto targetFn = runtime->lookupFunction(0x17E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A9Cu; }
        if (ctx->pc != 0x182A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E800_0x17e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A9Cu; }
        if (ctx->pc != 0x182A9Cu) { return; }
    }
    ctx->pc = 0x182A9Cu;
label_182a9c:
    // 0x182a9c: 0x8203057c  lb          $v1, 0x57C($s0)
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x182aa0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x182aa4: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x182AA4u;
    {
        const bool branch_taken_0x182aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182aa4) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182AACu;
    // 0x182aac: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x182aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x182ab0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x182ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x182ab4: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x182ab8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x182abc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x182abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x182ac0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x182ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x182ac4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x182ac8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x182acc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x182ad0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x182ad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182ad8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x182ad8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182adc: 0x18a0002b  blez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x182ADCu;
    {
        const bool branch_taken_0x182adc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x182AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182ADCu;
            // 0x182ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182adc) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182AE4u;
    // 0x182ae4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x182ae8: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x182aec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182af0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x182af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182af4:
    // 0x182af4: 0x90c30028  lbu         $v1, 0x28($a2)
    ctx->pc = 0x182af4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x182af8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182afc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x182afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x182b00: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x182b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x182b04: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x182B04u;
    {
        const bool branch_taken_0x182b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b04) {
            ctx->pc = 0x182B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182B04u;
            // 0x182b08: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182B6Cu;
            goto label_182b6c;
        }
    }
    ctx->pc = 0x182B0Cu;
    // 0x182b0c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x182b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x182b10: 0x906304f0  lbu         $v1, 0x4F0($v1)
    ctx->pc = 0x182b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x182b14: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x182b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x182b18: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x182B18u;
    {
        const bool branch_taken_0x182b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182b18) {
            ctx->pc = 0x182B68u;
            goto label_182b68;
        }
    }
    ctx->pc = 0x182B20u;
    // 0x182b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182b24: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x182B24u;
    {
        const bool branch_taken_0x182b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x182b24) {
            ctx->pc = 0x182B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182B24u;
            // 0x182b28: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182B58u;
            goto label_182b58;
        }
    }
    ctx->pc = 0x182B2Cu;
    // 0x182b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182b30: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182B30u;
    {
        const bool branch_taken_0x182b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x182b30) {
            ctx->pc = 0x182B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182B30u;
            // 0x182b34: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182B44u;
            goto label_182b44;
        }
    }
    ctx->pc = 0x182B38u;
    // 0x182b38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x182B38u;
    {
        const bool branch_taken_0x182b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b38) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182B40u;
    // 0x182b40: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x182b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_182b44:
    // 0x182b44: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x182b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x182b48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x182b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x182b4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x182B4Cu;
    {
        const bool branch_taken_0x182b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B4Cu;
            // 0x182b50: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b4c) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182B54u;
    // 0x182b54: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x182b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_182b58:
    // 0x182b58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x182b5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x182b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x182b60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x182B60u;
    {
        const bool branch_taken_0x182b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B60u;
            // 0x182b64: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b60) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182B68u;
label_182b68:
    // 0x182b68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_182b6c:
    // 0x182b6c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x182b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x182b70: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x182B70u;
    {
        const bool branch_taken_0x182b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B70u;
            // 0x182b74: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b70) {
            ctx->pc = 0x182AF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182af4;
        }
    }
    ctx->pc = 0x182B78u;
    // 0x182b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182B78u;
    {
        const bool branch_taken_0x182b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b78) {
            ctx->pc = 0x182B8Cu;
            goto label_182b8c;
        }
    }
    ctx->pc = 0x182B80u;
    // 0x182b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182b84:
    // 0x182b84: 0xc05fa00  jal         func_17E800
    ctx->pc = 0x182B84u;
    SET_GPR_U32(ctx, 31, 0x182B8Cu);
    ctx->pc = 0x17E800u;
    if (runtime->hasFunction(0x17E800u)) {
        auto targetFn = runtime->lookupFunction(0x17E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B8Cu; }
        if (ctx->pc != 0x182B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E800_0x17e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B8Cu; }
        if (ctx->pc != 0x182B8Cu) { return; }
    }
    ctx->pc = 0x182B8Cu;
label_182b8c:
    // 0x182b8c: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x182b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_182b90:
    // 0x182b90: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x182b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x182b94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x182B94u;
    {
        const bool branch_taken_0x182b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b94) {
            ctx->pc = 0x182B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182B94u;
            // 0x182b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182BC0u;
            goto label_182bc0;
        }
    }
    ctx->pc = 0x182B9Cu;
    // 0x182b9c: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x182b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x182ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182ba8: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x182ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x182bac: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x182BACu;
    SET_GPR_U32(ctx, 31, 0x182BB4u);
    ctx->pc = 0x182BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182BACu;
            // 0x182bb0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (runtime->hasFunction(0x17F860u)) {
        auto targetFn = runtime->lookupFunction(0x17F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182BB4u; }
        if (ctx->pc != 0x182BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F860_0x17f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182BB4u; }
        if (ctx->pc != 0x182BB4u) { return; }
    }
    ctx->pc = 0x182BB4u;
label_182bb4:
    // 0x182bb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182BB4u;
    {
        const bool branch_taken_0x182bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BB4u;
            // 0x182bb8: 0x8e020538  lw          $v0, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bb4) {
            ctx->pc = 0x182BCCu;
            goto label_182bcc;
        }
    }
    ctx->pc = 0x182BBCu;
    // 0x182bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182bc0:
    // 0x182bc0: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x182BC0u;
    SET_GPR_U32(ctx, 31, 0x182BC8u);
    ctx->pc = 0x182BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182BC0u;
            // 0x182bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (runtime->hasFunction(0x17F860u)) {
        auto targetFn = runtime->lookupFunction(0x17F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182BC8u; }
        if (ctx->pc != 0x182BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F860_0x17f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182BC8u; }
        if (ctx->pc != 0x182BC8u) { return; }
    }
    ctx->pc = 0x182BC8u;
label_182bc8:
    // 0x182bc8: 0x8e020538  lw          $v0, 0x538($s0)
    ctx->pc = 0x182bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_182bcc:
    // 0x182bcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x182bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x182bd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x182BD0u;
    {
        const bool branch_taken_0x182bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bd0) {
            ctx->pc = 0x182BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182BD0u;
            // 0x182bd4: 0x8e020538  lw          $v0, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182BF4u;
            goto label_182bf4;
        }
    }
    ctx->pc = 0x182BD8u;
    // 0x182bd8: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x182bdc: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x182be0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x182be0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x182be4: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x182be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x182be8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182bec: 0xae020538  sw          $v0, 0x538($s0)
    ctx->pc = 0x182becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 2));
    // 0x182bf0: 0x8e020538  lw          $v0, 0x538($s0)
    ctx->pc = 0x182bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_182bf4:
    // 0x182bf4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x182bf8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x182BF8u;
    {
        const bool branch_taken_0x182bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bf8) {
            ctx->pc = 0x182BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182BF8u;
            // 0x182bfc: 0x8e030494  lw          $v1, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182C28u;
            goto label_182c28;
        }
    }
    ctx->pc = 0x182C00u;
    // 0x182c00: 0x8e040518  lw          $a0, 0x518($s0)
    ctx->pc = 0x182c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x182c04: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182C04u;
    {
        const bool branch_taken_0x182c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c04) {
            ctx->pc = 0x182C24u;
            goto label_182c24;
        }
    }
    ctx->pc = 0x182C0Cu;
    // 0x182c0c: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x182c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x182c10: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x182c14: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x182c14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x182c18: 0x8c830538  lw          $v1, 0x538($a0)
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x182c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182c20: 0xac820538  sw          $v0, 0x538($a0)
    ctx->pc = 0x182c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1336), GPR_U32(ctx, 2));
label_182c24:
    // 0x182c24: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x182c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_182c28:
    // 0x182c28: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x182c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x182c2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182c30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182C30u;
    {
        const bool branch_taken_0x182c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182c30) {
            ctx->pc = 0x182C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182C30u;
            // 0x182c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182C48u;
            goto label_182c48;
        }
    }
    ctx->pc = 0x182C38u;
    // 0x182c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c3c: 0xc060b50  jal         func_182D40
    ctx->pc = 0x182C3Cu;
    SET_GPR_U32(ctx, 31, 0x182C44u);
    ctx->pc = 0x182C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C3Cu;
            // 0x182c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D40u;
    if (runtime->hasFunction(0x182D40u)) {
        auto targetFn = runtime->lookupFunction(0x182D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C44u; }
        if (ctx->pc != 0x182C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D40_0x182d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C44u; }
        if (ctx->pc != 0x182C44u) { return; }
    }
    ctx->pc = 0x182C44u;
label_182c44:
    // 0x182c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182c48:
    // 0x182c48: 0xc05fa04  jal         func_17E810
    ctx->pc = 0x182C48u;
    SET_GPR_U32(ctx, 31, 0x182C50u);
    ctx->pc = 0x17E810u;
    if (runtime->hasFunction(0x17E810u)) {
        auto targetFn = runtime->lookupFunction(0x17E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C50u; }
        if (ctx->pc != 0x182C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E810_0x17e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C50u; }
        if (ctx->pc != 0x182C50u) { return; }
    }
    ctx->pc = 0x182C50u;
label_182c50:
    // 0x182c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182c54:
    // 0x182c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c58: 0x3e00008  jr          $ra
    ctx->pc = 0x182C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C58u;
            // 0x182c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182C60u;
    ctx->pc = 0x182c60u;
}
