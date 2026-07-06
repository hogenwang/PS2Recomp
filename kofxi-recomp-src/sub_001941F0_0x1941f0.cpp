#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001941F0
// Address: 0x1941f0 - 0x1944e0
void sub_001941F0_0x1941f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001941F0_0x1941f0");
#endif

    switch (ctx->pc) {
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        default: break;
    }

    ctx->pc = 0x1941f0u;

label_1941f0:
    // 0x1941f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1941f4:
    // 0x1941f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1941f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1941f8:
    // 0x1941f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1941f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1941fc:
    // 0x1941fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1941fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_194200:
    // 0x194200: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x194200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194204:
    // 0x194204: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_194208:
    // 0x194208: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x194208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_19420c:
    // 0x19420c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_194210:
    // 0x194210: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194214:
    // 0x194214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194218:
    // 0x194218: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19421c:
    // 0x19421c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194220:
    // 0x194220: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x194220u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_194224:
    // 0x194224: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x194224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_194228:
    // 0x194228: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x194228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_19422c:
    // 0x19422c: 0x90630318  lbu         $v1, 0x318($v1)
    ctx->pc = 0x19422cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 792)));
label_194230:
    // 0x194230: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x194230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194234:
    // 0x194234: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x194234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_194238:
    // 0x194238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19423c:
    if (ctx->pc == 0x19423Cu) {
        ctx->pc = 0x19423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194238u;
        // 0x19423c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194240u;
        goto label_194240;
    }
    ctx->pc = 0x194238u;
    {
        const bool branch_taken_0x194238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194238u;
        // 0x19423c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194238) {
            ctx->pc = 0x194248u;
            goto label_194248;
        }
    }
    ctx->pc = 0x194240u;
label_194240:
    // 0x194240: 0x1000009c  b           . + 4 + (0x9C << 2)
label_194244:
    if (ctx->pc == 0x194244u) {
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194248u;
        goto label_194248;
    }
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194240) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194248u;
label_194248:
    // 0x194248: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19424c:
    // 0x19424c: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
label_194250:
    if (ctx->pc == 0x194250u) {
        ctx->pc = 0x194250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19424Cu;
        // 0x194250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194254u;
        goto label_194254;
    }
    ctx->pc = 0x19424Cu;
    {
        const bool branch_taken_0x19424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19424c) {
            ctx->pc = 0x194250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19424Cu;
            // 0x194250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194254u;
label_194254:
    // 0x194254: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x194254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_194258:
    // 0x194258: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_19425c:
    if (ctx->pc == 0x19425Cu) {
        ctx->pc = 0x19425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194258u;
        // 0x19425c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194260u;
        goto label_194260;
    }
    ctx->pc = 0x194258u;
    {
        const bool branch_taken_0x194258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194258) {
            ctx->pc = 0x19425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194258u;
            // 0x19425c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19426Cu;
            goto label_19426c;
        }
    }
    ctx->pc = 0x194260u;
label_194260:
    // 0x194260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194264:
    // 0x194264: 0x10000093  b           . + 4 + (0x93 << 2)
label_194268:
    if (ctx->pc == 0x194268u) {
        ctx->pc = 0x19426Cu;
        goto label_19426c;
    }
    ctx->pc = 0x194264u;
    {
        const bool branch_taken_0x194264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194264) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x19426Cu;
label_19426c:
    // 0x19426c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19426cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194270:
    // 0x194270: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_194274:
    // 0x194274: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_194278:
    if (ctx->pc == 0x194278u) {
        ctx->pc = 0x194278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194274u;
        // 0x194278: 0x96a400ea  lhu         $a0, 0xEA($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19427Cu;
        goto label_19427c;
    }
    ctx->pc = 0x194274u;
    {
        const bool branch_taken_0x194274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194274) {
            ctx->pc = 0x194278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194274u;
            // 0x194278: 0x96a400ea  lhu         $a0, 0xEA($s5) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194284u;
            goto label_194284;
        }
    }
    ctx->pc = 0x19427Cu;
label_19427c:
    // 0x19427c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_194280:
    if (ctx->pc == 0x194280u) {
        ctx->pc = 0x194280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19427Cu;
        // 0x194280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194284u;
        goto label_194284;
    }
    ctx->pc = 0x19427Cu;
    {
        const bool branch_taken_0x19427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19427Cu;
        // 0x194280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19427c) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194284u;
label_194284:
    // 0x194284: 0xc063600  jal         func_18D800
label_194288:
    if (ctx->pc == 0x194288u) {
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19428Cu;
        goto label_19428c;
    }
    ctx->pc = 0x194284u;
    SET_GPR_U32(ctx, 31, 0x19428Cu);
    ctx->pc = 0x194288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194284u;
    // 0x194288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D800u, 0x194284u, 0x19428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19428Cu;
label_19428c:
    // 0x19428c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_194290:
    // 0x194290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194294:
    // 0x194294: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x194294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194298:
    // 0x194298: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x194298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19429c:
    // 0x19429c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1942a0:
    if (ctx->pc == 0x1942A0u) {
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19429Cu;
        // 0x1942a0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942A4u;
        goto label_1942a4;
    }
    ctx->pc = 0x19429Cu;
    {
        const bool branch_taken_0x19429c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19429Cu;
        // 0x1942a0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19429c) {
            ctx->pc = 0x1942B0u;
            goto label_1942b0;
        }
    }
    ctx->pc = 0x1942A4u;
label_1942a4:
    // 0x1942a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1942a8:
    if (ctx->pc == 0x1942A8u) {
        ctx->pc = 0x1942A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942A4u;
        // 0x1942a8: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942ACu;
        goto label_1942ac;
    }
    ctx->pc = 0x1942A4u;
    {
        const bool branch_taken_0x1942a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942a4) {
            ctx->pc = 0x1942A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942A4u;
            // 0x1942a8: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1942B4u;
            goto label_1942b4;
        }
    }
    ctx->pc = 0x1942ACu;
label_1942ac:
    // 0x1942ac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1942b0:
    // 0x1942b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1942b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1942b4:
    // 0x1942b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1942b8:
    if (ctx->pc == 0x1942B8u) {
        ctx->pc = 0x1942B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B4u;
        // 0x1942b8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942BCu;
        goto label_1942bc;
    }
    ctx->pc = 0x1942B4u;
    {
        const bool branch_taken_0x1942b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1942B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B4u;
        // 0x1942b8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942b4) {
            ctx->pc = 0x1942C4u;
            goto label_1942c4;
        }
    }
    ctx->pc = 0x1942BCu;
label_1942bc:
    // 0x1942bc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1942bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1942c0:
    // 0x1942c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1942c4:
    // 0x1942c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1942c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1942c8:
    // 0x1942c8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1942c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1942cc:
    // 0x1942cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1942d0:
    if (ctx->pc == 0x1942D0u) {
        ctx->pc = 0x1942D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942CCu;
        // 0x1942d0: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942D4u;
        goto label_1942d4;
    }
    ctx->pc = 0x1942CCu;
    {
        const bool branch_taken_0x1942cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942cc) {
            ctx->pc = 0x1942D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942CCu;
            // 0x1942d0: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1942F4u;
            goto label_1942f4;
        }
    }
    ctx->pc = 0x1942D4u;
label_1942d4:
    // 0x1942d4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x1942d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_1942d8:
    // 0x1942d8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1942d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1942dc:
    // 0x1942dc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1942dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1942e0:
    // 0x1942e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1942e4:
    if (ctx->pc == 0x1942E4u) {
        ctx->pc = 0x1942E8u;
        goto label_1942e8;
    }
    ctx->pc = 0x1942E0u;
    {
        const bool branch_taken_0x1942e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942e0) {
            ctx->pc = 0x1942F0u;
            goto label_1942f0;
        }
    }
    ctx->pc = 0x1942E8u;
label_1942e8:
    // 0x1942e8: 0x10000072  b           . + 4 + (0x72 << 2)
label_1942ec:
    if (ctx->pc == 0x1942ECu) {
        ctx->pc = 0x1942ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942E8u;
        // 0x1942ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942F0u;
        goto label_1942f0;
    }
    ctx->pc = 0x1942E8u;
    {
        const bool branch_taken_0x1942e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942E8u;
        // 0x1942ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942e8) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1942F0u;
label_1942f0:
    // 0x1942f0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1942f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1942f4:
    // 0x1942f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1942f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1942f8:
    // 0x1942f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1942fc:
    if (ctx->pc == 0x1942FCu) {
        ctx->pc = 0x194300u;
        goto label_194300;
    }
    ctx->pc = 0x1942F8u;
    {
        const bool branch_taken_0x1942f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1942f8) {
            ctx->pc = 0x194340u;
            goto label_194340;
        }
    }
    ctx->pc = 0x194300u;
label_194300:
    // 0x194300: 0x92850283  lbu         $a1, 0x283($s4)
    ctx->pc = 0x194300u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 643)));
label_194304:
    // 0x194304: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194308:
    // 0x194308: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x194308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_19430c:
    // 0x19430c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194310:
    // 0x194310: 0xe31004  sllv        $v0, $v1, $a3
    ctx->pc = 0x194310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_194314:
    // 0x194314: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x194314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_194318:
    // 0x194318: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_19431c:
    if (ctx->pc == 0x19431Cu) {
        ctx->pc = 0x19431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194318u;
        // 0x19431c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194320u;
        goto label_194320;
    }
    ctx->pc = 0x194318u;
    {
        const bool branch_taken_0x194318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194318) {
            ctx->pc = 0x19431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194318u;
            // 0x19431c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194334u;
            goto label_194334;
        }
    }
    ctx->pc = 0x194320u;
label_194320:
    // 0x194320: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
label_194324:
    if (ctx->pc == 0x194324u) {
        ctx->pc = 0x194328u;
        goto label_194328;
    }
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x194320) {
            ctx->pc = 0x194330u;
            goto label_194330;
        }
    }
    ctx->pc = 0x194328u;
label_194328:
    // 0x194328: 0x10000062  b           . + 4 + (0x62 << 2)
label_19432c:
    if (ctx->pc == 0x19432Cu) {
        ctx->pc = 0x19432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194328u;
        // 0x19432c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194330u;
        goto label_194330;
    }
    ctx->pc = 0x194328u;
    {
        const bool branch_taken_0x194328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194328u;
        // 0x19432c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194328) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194330u;
label_194330:
    // 0x194330: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_194334:
    // 0x194334: 0x4e3fff7  bgezl       $a3, . + 4 + (-0x9 << 2)
label_194338:
    if (ctx->pc == 0x194338u) {
        ctx->pc = 0x194338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194334u;
        // 0x194338: 0xe31004  sllv        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19433Cu;
        goto label_19433c;
    }
    ctx->pc = 0x194334u;
    {
        const bool branch_taken_0x194334 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x194334) {
            ctx->pc = 0x194338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194334u;
            // 0x194338: 0xe31004  sllv        $v0, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194314;
        }
    }
    ctx->pc = 0x19433Cu;
label_19433c:
    // 0x19433c: 0x0  nop
    ctx->pc = 0x19433cu;
    // NOP
label_194340:
    // 0x194340: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x194340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_194344:
    // 0x194344: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_194348:
    // 0x194348: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x194348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19434c:
    // 0x19434c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_194350:
    // 0x194350: 0x24425ce0  addiu       $v0, $v0, 0x5CE0
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23776));
label_194354:
    // 0x194354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194358:
    // 0x194358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19435c:
    // 0x19435c: 0x40f809  jalr        $v0
label_194360:
    if (ctx->pc == 0x194360u) {
        ctx->pc = 0x194360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19435Cu;
        // 0x194360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194364u;
        goto label_194364;
    }
    ctx->pc = 0x19435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194364u);
        ctx->pc = 0x194360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19435Cu;
        // 0x194360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19435Cu, 0x194364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194364u;
label_194364:
    // 0x194364: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_194368:
    if (ctx->pc == 0x194368u) {
        ctx->pc = 0x19436Cu;
        goto label_19436c;
    }
    ctx->pc = 0x194364u;
    {
        const bool branch_taken_0x194364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194364) {
            ctx->pc = 0x194374u;
            goto label_194374;
        }
    }
    ctx->pc = 0x19436Cu;
label_19436c:
    // 0x19436c: 0x10000051  b           . + 4 + (0x51 << 2)
label_194370:
    if (ctx->pc == 0x194370u) {
        ctx->pc = 0x194370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19436Cu;
        // 0x194370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194374u;
        goto label_194374;
    }
    ctx->pc = 0x19436Cu;
    {
        const bool branch_taken_0x19436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19436Cu;
        // 0x194370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19436c) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x194374u;
label_194374:
    // 0x194374: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x194374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_194378:
    // 0x194378: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x194378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19437c:
    // 0x19437c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x19437cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_194380:
    // 0x194380: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_194384:
    if (ctx->pc == 0x194384u) {
        ctx->pc = 0x194384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194380u;
        // 0x194384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194388u;
        goto label_194388;
    }
    ctx->pc = 0x194380u;
    {
        const bool branch_taken_0x194380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194380) {
            ctx->pc = 0x194384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194380u;
            // 0x194384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1943E8u;
            goto label_1943e8;
        }
    }
    ctx->pc = 0x194388u;
label_194388:
    // 0x194388: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x194388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_19438c:
    // 0x19438c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_194390:
    // 0x194390: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x194390u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
label_194394:
    // 0x194394: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x194394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
label_194398:
    // 0x194398: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_19439c:
    // 0x19439c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1943a0:
    // 0x1943a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1943a4:
    // 0x1943a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1943a8:
    // 0x1943a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1943ac:
    // 0x1943ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1943b0:
    // 0x1943b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1943b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1943b4:
    // 0x1943b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1943b8:
    if (ctx->pc == 0x1943B8u) {
        ctx->pc = 0x1943BCu;
        goto label_1943bc;
    }
    ctx->pc = 0x1943B4u;
    {
        const bool branch_taken_0x1943b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1943b4) {
            ctx->pc = 0x1943E4u;
            goto label_1943e4;
        }
    }
    ctx->pc = 0x1943BCu;
label_1943bc:
    // 0x1943bc: 0xc062810  jal         func_18A040
label_1943c0:
    if (ctx->pc == 0x1943C0u) {
        ctx->pc = 0x1943C4u;
        goto label_1943c4;
    }
    ctx->pc = 0x1943BCu;
    SET_GPR_U32(ctx, 31, 0x1943C4u);
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x1943BCu, 0x1943C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943C4u;
label_1943c4:
    // 0x1943c4: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
label_1943c8:
    if (ctx->pc == 0x1943C8u) {
        ctx->pc = 0x1943CCu;
        goto label_1943cc;
    }
    ctx->pc = 0x1943C4u;
    {
        const bool branch_taken_0x1943c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1943c4) {
            ctx->pc = 0x1943E4u;
            goto label_1943e4;
        }
    }
    ctx->pc = 0x1943CCu;
label_1943cc:
    // 0x1943cc: 0x8c42049c  lw          $v0, 0x49C($v0)
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
label_1943d0:
    // 0x1943d0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1943d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1943d4:
    // 0x1943d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1943d8:
    if (ctx->pc == 0x1943D8u) {
        ctx->pc = 0x1943DCu;
        goto label_1943dc;
    }
    ctx->pc = 0x1943D4u;
    {
        const bool branch_taken_0x1943d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943d4) {
            ctx->pc = 0x1943E4u;
            goto label_1943e4;
        }
    }
    ctx->pc = 0x1943DCu;
label_1943dc:
    // 0x1943dc: 0x10000035  b           . + 4 + (0x35 << 2)
label_1943e0:
    if (ctx->pc == 0x1943E0u) {
        ctx->pc = 0x1943E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943DCu;
        // 0x1943e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943E4u;
        goto label_1943e4;
    }
    ctx->pc = 0x1943DCu;
    {
        const bool branch_taken_0x1943dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943DCu;
        // 0x1943e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943dc) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1943e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1943e8:
    // 0x1943e8: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x1943e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1943ec:
    // 0x1943ec: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1943ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_1943f0:
    // 0x1943f0: 0xa2700001  sb          $s0, 0x1($s3)
    ctx->pc = 0x1943f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 16));
label_1943f4:
    // 0x1943f4: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_1943f8:
    // 0x1943f8: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1943f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_1943fc:
    // 0x1943fc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_194400:
    // 0x194400: 0xa2630024  sb          $v1, 0x24($s3)
    ctx->pc = 0x194400u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
label_194404:
    // 0x194404: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_194408:
    // 0x194408: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x194408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
label_19440c:
    // 0x19440c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_194410:
    // 0x194410: 0xa2630025  sb          $v1, 0x25($s3)
    ctx->pc = 0x194410u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 3));
label_194414:
    // 0x194414: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x194414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_194418:
    // 0x194418: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x194418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_19441c:
    // 0x19441c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19441cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_194420:
    // 0x194420: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x194420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
label_194424:
    // 0x194424: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_194428:
    // 0x194428: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
label_19442c:
    // 0x19442c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19442cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_194430:
    // 0x194430: 0xa2630027  sb          $v1, 0x27($s3)
    ctx->pc = 0x194430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 39), (uint8_t)GPR_U32(ctx, 3));
label_194434:
    // 0x194434: 0x9046031a  lbu         $a2, 0x31A($v0)
    ctx->pc = 0x194434u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 794)));
label_194438:
    // 0x194438: 0x90430319  lbu         $v1, 0x319($v0)
    ctx->pc = 0x194438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 793)));
label_19443c:
    // 0x19443c: 0x92a2008c  lbu         $v0, 0x8C($s5)
    ctx->pc = 0x19443cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
label_194440:
    // 0x194440: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x194440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_194444:
    // 0x194444: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_194448:
    if (ctx->pc == 0x194448u) {
        ctx->pc = 0x194448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194444u;
        // 0x194448: 0x306200bf  andi        $v0, $v1, 0xBF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19444Cu;
        goto label_19444c;
    }
    ctx->pc = 0x194444u;
    {
        const bool branch_taken_0x194444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194444) {
            ctx->pc = 0x194448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194444u;
            // 0x194448: 0x306200bf  andi        $v0, $v1, 0xBF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
            ctx->in_delay_slot = false;
            ctx->pc = 0x194458u;
            goto label_194458;
        }
    }
    ctx->pc = 0x19444Cu;
label_19444c:
    // 0x19444c: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x19444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_194450:
    // 0x194450: 0x10000002  b           . + 4 + (0x2 << 2)
label_194454:
    if (ctx->pc == 0x194454u) {
        ctx->pc = 0x194454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194450u;
        // 0x194454: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194458u;
        goto label_194458;
    }
    ctx->pc = 0x194450u;
    {
        const bool branch_taken_0x194450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194450u;
        // 0x194454: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194450) {
            ctx->pc = 0x19445Cu;
            goto label_19445c;
        }
    }
    ctx->pc = 0x194458u;
label_194458:
    // 0x194458: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x194458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19445c:
    // 0x19445c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194460:
    // 0x194460: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_194464:
    // 0x194464: 0xa2650014  sb          $a1, 0x14($s3)
    ctx->pc = 0x194464u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 5));
label_194468:
    // 0x194468: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_19446c:
    // 0x19446c: 0xa2670016  sb          $a3, 0x16($s3)
    ctx->pc = 0x19446cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 7));
label_194470:
    // 0x194470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194474:
    // 0x194474: 0xa2710015  sb          $s1, 0x15($s3)
    ctx->pc = 0x194474u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21), (uint8_t)GPR_U32(ctx, 17));
label_194478:
    // 0x194478: 0xa2660017  sb          $a2, 0x17($s3)
    ctx->pc = 0x194478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 23), (uint8_t)GPR_U32(ctx, 6));
label_19447c:
    // 0x19447c: 0x8c84d170  lw          $a0, -0x2E90($a0)
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955376)));
label_194480:
    // 0x194480: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x194480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_194484:
    // 0x194484: 0xae75001c  sw          $s5, 0x1C($s3)
    ctx->pc = 0x194484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 21));
label_194488:
    // 0x194488: 0xa2710020  sb          $s1, 0x20($s3)
    ctx->pc = 0x194488u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 17));
label_19448c:
    // 0x19448c: 0xa2670021  sb          $a3, 0x21($s3)
    ctx->pc = 0x19448cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 7));
label_194490:
    // 0x194490: 0xa2650004  sb          $a1, 0x4($s3)
    ctx->pc = 0x194490u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 5));
label_194494:
    // 0x194494: 0xa2670006  sb          $a3, 0x6($s3)
    ctx->pc = 0x194494u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 7));
label_194498:
    // 0x194498: 0xa2710005  sb          $s1, 0x5($s3)
    ctx->pc = 0x194498u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 17));
label_19449c:
    // 0x19449c: 0xa2660007  sb          $a2, 0x7($s3)
    ctx->pc = 0x19449cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 6));
label_1944a0:
    // 0x1944a0: 0x8c63d0f0  lw          $v1, -0x2F10($v1)
    ctx->pc = 0x1944a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955248)));
label_1944a4:
    // 0x1944a4: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1944a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_1944a8:
    // 0x1944a8: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x1944a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
label_1944ac:
    // 0x1944ac: 0xa2710010  sb          $s1, 0x10($s3)
    ctx->pc = 0x1944acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 17));
label_1944b0:
    // 0x1944b0: 0xa2670011  sb          $a3, 0x11($s3)
    ctx->pc = 0x1944b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 7));
label_1944b4:
    // 0x1944b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1944b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1944b8:
    // 0x1944b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1944b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1944bc:
    // 0x1944bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1944bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1944c0:
    // 0x1944c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1944c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1944c4:
    // 0x1944c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1944c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1944c8:
    // 0x1944c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1944c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1944cc:
    // 0x1944cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1944ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1944d0:
    // 0x1944d0: 0x3e00008  jr          $ra
label_1944d4:
    if (ctx->pc == 0x1944D4u) {
        ctx->pc = 0x1944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944D0u;
        // 0x1944d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944D8u;
        goto label_1944d8;
    }
    ctx->pc = 0x1944D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944D0u;
        // 0x1944d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1944D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1944D8u;
label_1944d8:
    // 0x1944d8: 0x0  nop
    ctx->pc = 0x1944d8u;
    // NOP
label_1944dc:
    // 0x1944dc: 0x0  nop
    ctx->pc = 0x1944dcu;
    // NOP
    if (ctx->pc == 0x1944dcu) { ctx->pc = 0x1944e0u; }
}
