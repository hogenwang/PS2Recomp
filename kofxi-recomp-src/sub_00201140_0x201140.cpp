#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201140
// Address: 0x201140 - 0x201430
void sub_00201140_0x201140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201140_0x201140");
#endif

    switch (ctx->pc) {
        case 0x201140u: goto label_201140;
        case 0x201144u: goto label_201144;
        case 0x201148u: goto label_201148;
        case 0x20114cu: goto label_20114c;
        case 0x201150u: goto label_201150;
        case 0x201154u: goto label_201154;
        case 0x201158u: goto label_201158;
        case 0x20115cu: goto label_20115c;
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        case 0x2011a4u: goto label_2011a4;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011acu: goto label_2011ac;
        case 0x2011b0u: goto label_2011b0;
        case 0x2011b4u: goto label_2011b4;
        case 0x2011b8u: goto label_2011b8;
        case 0x2011bcu: goto label_2011bc;
        case 0x2011c0u: goto label_2011c0;
        case 0x2011c4u: goto label_2011c4;
        case 0x2011c8u: goto label_2011c8;
        case 0x2011ccu: goto label_2011cc;
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        case 0x201240u: goto label_201240;
        case 0x201244u: goto label_201244;
        case 0x201248u: goto label_201248;
        case 0x20124cu: goto label_20124c;
        case 0x201250u: goto label_201250;
        case 0x201254u: goto label_201254;
        case 0x201258u: goto label_201258;
        case 0x20125cu: goto label_20125c;
        case 0x201260u: goto label_201260;
        case 0x201264u: goto label_201264;
        case 0x201268u: goto label_201268;
        case 0x20126cu: goto label_20126c;
        case 0x201270u: goto label_201270;
        case 0x201274u: goto label_201274;
        case 0x201278u: goto label_201278;
        case 0x20127cu: goto label_20127c;
        case 0x201280u: goto label_201280;
        case 0x201284u: goto label_201284;
        case 0x201288u: goto label_201288;
        case 0x20128cu: goto label_20128c;
        case 0x201290u: goto label_201290;
        case 0x201294u: goto label_201294;
        case 0x201298u: goto label_201298;
        case 0x20129cu: goto label_20129c;
        case 0x2012a0u: goto label_2012a0;
        case 0x2012a4u: goto label_2012a4;
        case 0x2012a8u: goto label_2012a8;
        case 0x2012acu: goto label_2012ac;
        case 0x2012b0u: goto label_2012b0;
        case 0x2012b4u: goto label_2012b4;
        case 0x2012b8u: goto label_2012b8;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c0u: goto label_2012c0;
        case 0x2012c4u: goto label_2012c4;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012ccu: goto label_2012cc;
        case 0x2012d0u: goto label_2012d0;
        case 0x2012d4u: goto label_2012d4;
        case 0x2012d8u: goto label_2012d8;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012e4u: goto label_2012e4;
        case 0x2012e8u: goto label_2012e8;
        case 0x2012ecu: goto label_2012ec;
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        default: break;
    }

    ctx->pc = 0x201140u;

label_201140:
    // 0x201140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201144:
    // 0x201144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_201148:
    // 0x201148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20114c:
    // 0x20114c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_201150:
    if (ctx->pc == 0x201150u) {
        ctx->pc = 0x201150u;
            // 0x201150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x201154u;
        goto label_201154;
    }
    ctx->pc = 0x20114Cu;
    {
        const bool branch_taken_0x20114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20114Cu;
            // 0x201150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20114c) {
            ctx->pc = 0x2011B0u;
            goto label_2011b0;
        }
    }
    ctx->pc = 0x201154u;
label_201154:
    // 0x201154: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x201154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_201158:
    // 0x201158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20115c:
    if (ctx->pc == 0x20115Cu) {
        ctx->pc = 0x20115Cu;
            // 0x20115c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x201160u;
        goto label_201160;
    }
    ctx->pc = 0x201158u;
    {
        const bool branch_taken_0x201158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201158u;
            // 0x20115c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201158) {
            ctx->pc = 0x201178u;
            goto label_201178;
        }
    }
    ctx->pc = 0x201160u;
label_201160:
    // 0x201160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201164:
    // 0x201164: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_201168:
    if (ctx->pc == 0x201168u) {
        ctx->pc = 0x201168u;
            // 0x201168: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x20116Cu;
        goto label_20116c;
    }
    ctx->pc = 0x201164u;
    {
        const bool branch_taken_0x201164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201164) {
            ctx->pc = 0x201168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201164u;
            // 0x201168: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201188u;
            goto label_201188;
        }
    }
    ctx->pc = 0x20116Cu;
label_20116c:
    // 0x20116c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_201170:
    if (ctx->pc == 0x201170u) {
        ctx->pc = 0x201170u;
            // 0x201170: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x201174u;
        goto label_201174;
    }
    ctx->pc = 0x20116Cu;
    {
        const bool branch_taken_0x20116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20116Cu;
            // 0x201170: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20116c) {
            ctx->pc = 0x201260u;
            goto label_201260;
        }
    }
    ctx->pc = 0x201174u;
label_201174:
    // 0x201174: 0x0  nop
    ctx->pc = 0x201174u;
    // NOP
label_201178:
    // 0x201178: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_20117c:
    if (ctx->pc == 0x20117Cu) {
        ctx->pc = 0x20117Cu;
            // 0x20117c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x201180u;
        goto label_201180;
    }
    ctx->pc = 0x201178u;
    {
        const bool branch_taken_0x201178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201178) {
            ctx->pc = 0x20117Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201178u;
            // 0x20117c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2011E0u;
            goto label_2011e0;
        }
    }
    ctx->pc = 0x201180u;
label_201180:
    // 0x201180: 0x10000037  b           . + 4 + (0x37 << 2)
label_201184:
    if (ctx->pc == 0x201184u) {
        ctx->pc = 0x201184u;
            // 0x201184: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x201188u;
        goto label_201188;
    }
    ctx->pc = 0x201180u;
    {
        const bool branch_taken_0x201180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201180u;
            // 0x201184: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201180) {
            ctx->pc = 0x201260u;
            goto label_201260;
        }
    }
    ctx->pc = 0x201188u;
label_201188:
    // 0x201188: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x201188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20118c:
    // 0x20118c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_201190:
    // 0x201190: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x201190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_201194:
    // 0x201194: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x201194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_201198:
    // 0x201198: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20119c:
    // 0x20119c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x20119cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2011a0:
    // 0x2011a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2011a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2011a4:
    // 0x2011a4: 0x10000032  b           . + 4 + (0x32 << 2)
label_2011a8:
    if (ctx->pc == 0x2011A8u) {
        ctx->pc = 0x2011A8u;
            // 0x2011a8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x2011ACu;
        goto label_2011ac;
    }
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011A4u;
            // 0x2011a8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x201270u;
            goto label_201270;
        }
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0x0  nop
    ctx->pc = 0x2011acu;
    // NOP
label_2011b0:
    // 0x2011b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2011b4:
    // 0x2011b4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2011b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2011b8:
    // 0x2011b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2011b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2011bc:
    // 0x2011bc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2011bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2011c0:
    // 0x2011c0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2011c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2011c4:
    // 0x2011c4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2011c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2011c8:
    // 0x2011c8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2011c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2011cc:
    // 0x2011cc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2011ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_2011d0:
    // 0x2011d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2011d4:
    // 0x2011d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_2011d8:
    if (ctx->pc == 0x2011D8u) {
        ctx->pc = 0x2011D8u;
            // 0x2011d8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2011DCu;
        goto label_2011dc;
    }
    ctx->pc = 0x2011D4u;
    {
        const bool branch_taken_0x2011d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011D4u;
            // 0x2011d8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011d4) {
            ctx->pc = 0x201270u;
            goto label_201270;
        }
    }
    ctx->pc = 0x2011DCu;
label_2011dc:
    // 0x2011dc: 0x0  nop
    ctx->pc = 0x2011dcu;
    // NOP
label_2011e0:
    // 0x2011e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2011e4:
    // 0x2011e4: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2011e8:
    // 0x2011e8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2011e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2011ec:
    // 0x2011ec: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2011ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2011f0:
    // 0x2011f0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2011f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2011f4:
    // 0x2011f4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2011f8:
    // 0x2011f8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2011f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2011fc:
    // 0x2011fc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2011fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_201200:
    // 0x201200: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x201200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_201204:
    // 0x201204: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_201208:
    // 0x201208: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x201208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
label_20120c:
    // 0x20120c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x20120cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_201210:
    // 0x201210: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x201210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_201214:
    // 0x201214: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x201214u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_201218:
    // 0x201218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20121c:
    // 0x20121c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20121cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_201220:
    // 0x201220: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x201220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_201224:
    // 0x201224: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x201224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_201228:
    // 0x201228: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x201228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_20122c:
    // 0x20122c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x20122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_201230:
    // 0x201230: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x201230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
label_201234:
    // 0x201234: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_201238:
    // 0x201238: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x201238u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_20123c:
    // 0x20123c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201240:
    // 0x201240: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x201240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_201244:
    // 0x201244: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x201244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
label_201248:
    // 0x201248: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x201248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_20124c:
    // 0x20124c: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x20124cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_201250:
    // 0x201250: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_201254:
    // 0x201254: 0x10000006  b           . + 4 + (0x6 << 2)
label_201258:
    if (ctx->pc == 0x201258u) {
        ctx->pc = 0x201258u;
            // 0x201258: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x20125Cu;
        goto label_20125c;
    }
    ctx->pc = 0x201254u;
    {
        const bool branch_taken_0x201254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201254u;
            // 0x201258: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201254) {
            ctx->pc = 0x201270u;
            goto label_201270;
        }
    }
    ctx->pc = 0x20125Cu;
label_20125c:
    // 0x20125c: 0x0  nop
    ctx->pc = 0x20125cu;
    // NOP
label_201260:
    // 0x201260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201264:
    // 0x201264: 0x24c6f140  addiu       $a2, $a2, -0xEC0
    ctx->pc = 0x201264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963520));
label_201268:
    // 0x201268: 0x808063e  j           func_2018F8
label_20126c:
    if (ctx->pc == 0x20126Cu) {
        ctx->pc = 0x20126Cu;
            // 0x20126c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x201270u;
        goto label_201270;
    }
    ctx->pc = 0x201268u;
    ctx->pc = 0x20126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201268u;
            // 0x20126c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x201270u;
label_201270:
    // 0x201270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201274:
    // 0x201274: 0x3e00008  jr          $ra
label_201278:
    if (ctx->pc == 0x201278u) {
        ctx->pc = 0x201278u;
            // 0x201278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x20127Cu;
        goto label_20127c;
    }
    ctx->pc = 0x201274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201274u;
            // 0x201278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20127Cu;
label_20127c:
    // 0x20127c: 0x0  nop
    ctx->pc = 0x20127cu;
    // NOP
label_201280:
    // 0x201280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201284:
    // 0x201284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201288:
    // 0x201288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20128c:
    // 0x20128c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201290:
    // 0x201290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_201294:
    // 0x201294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201298:
    // 0x201298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20129c:
    // 0x20129c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2012a0:
    // 0x2012a0: 0xc080422  jal         func_201088
label_2012a4:
    if (ctx->pc == 0x2012A4u) {
        ctx->pc = 0x2012A4u;
            // 0x2012a4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2012A8u;
        goto label_2012a8;
    }
    ctx->pc = 0x2012A0u;
    SET_GPR_U32(ctx, 31, 0x2012A8u);
    ctx->pc = 0x2012A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012A0u;
            // 0x2012a4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    if (runtime->hasFunction(0x201088u)) {
        auto targetFn = runtime->lookupFunction(0x201088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012A8u; }
        if (ctx->pc != 0x2012A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201088_0x201088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012A8u; }
        if (ctx->pc != 0x2012A8u) { return; }
    }
    ctx->pc = 0x2012A8u;
label_2012a8:
    // 0x2012a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2012a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2012ac:
    // 0x2012ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2012acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2012b0:
    // 0x2012b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2012b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2012b4:
    // 0x2012b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2012b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2012b8:
    // 0x2012b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2012b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2012bc:
    // 0x2012bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2012bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2012c0:
    // 0x2012c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2012c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2012c4:
    // 0x2012c4: 0x80804b4  j           func_2012D0
label_2012c8:
    if (ctx->pc == 0x2012C8u) {
        ctx->pc = 0x2012C8u;
            // 0x2012c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2012CCu;
        goto label_2012cc;
    }
    ctx->pc = 0x2012C4u;
    ctx->pc = 0x2012C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012C4u;
            // 0x2012c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012D0u;
    goto label_2012d0;
    ctx->pc = 0x2012CCu;
label_2012cc:
    // 0x2012cc: 0x0  nop
    ctx->pc = 0x2012ccu;
    // NOP
label_2012d0:
    // 0x2012d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2012d4:
    // 0x2012d4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2012d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_2012d8:
    // 0x2012d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2012d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2012dc:
    // 0x2012dc: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2012dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_2012e0:
    // 0x2012e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2012e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2012e4:
    // 0x2012e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2012e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2012e8:
    // 0x2012e8: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2012e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_2012ec:
    // 0x2012ec: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x2012ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_2012f0:
    // 0x2012f0: 0xc080450  jal         func_201140
label_2012f4:
    if (ctx->pc == 0x2012F4u) {
        ctx->pc = 0x2012F4u;
            // 0x2012f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2012F8u;
        goto label_2012f8;
    }
    ctx->pc = 0x2012F0u;
    SET_GPR_U32(ctx, 31, 0x2012F8u);
    ctx->pc = 0x2012F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012F0u;
            // 0x2012f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201140u;
    goto label_201140;
    ctx->pc = 0x2012F8u;
label_2012f8:
    // 0x2012f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2012fc:
    // 0x2012fc: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_201300:
    // 0x201300: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_201304:
    // 0x201304: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_201308:
    // 0x201308: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_20130c:
    if (ctx->pc == 0x20130Cu) {
        ctx->pc = 0x20130Cu;
            // 0x20130c: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x201310u;
        goto label_201310;
    }
    ctx->pc = 0x201308u;
    {
        const bool branch_taken_0x201308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201308u;
            // 0x20130c: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201308) {
            ctx->pc = 0x2013D0u;
            goto label_2013d0;
        }
    }
    ctx->pc = 0x201310u;
label_201310:
    // 0x201310: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_201314:
    // 0x201314: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_201318:
    if (ctx->pc == 0x201318u) {
        ctx->pc = 0x201318u;
            // 0x201318: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x20131Cu;
        goto label_20131c;
    }
    ctx->pc = 0x201314u;
    {
        const bool branch_taken_0x201314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201314) {
            ctx->pc = 0x201318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201314u;
            // 0x201318: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201398u;
            goto label_201398;
        }
    }
    ctx->pc = 0x20131Cu;
label_20131c:
    // 0x20131c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201320:
    // 0x201320: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_201324:
    if (ctx->pc == 0x201324u) {
        ctx->pc = 0x201324u;
            // 0x201324: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x201328u;
        goto label_201328;
    }
    ctx->pc = 0x201320u;
    {
        const bool branch_taken_0x201320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201320u;
            // 0x201324: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201320) {
            ctx->pc = 0x2013D4u;
            goto label_2013d4;
        }
    }
    ctx->pc = 0x201328u;
label_201328:
    // 0x201328: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_20132c:
    // 0x20132c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_201330:
    // 0x201330: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_201334:
    // 0x201334: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x201334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_201338:
    // 0x201338: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_20133c:
    // 0x20133c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_201340:
    // 0x201340: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_201344:
    // 0x201344: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x201344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_201348:
    // 0x201348: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x201348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_20134c:
    // 0x20134c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x20134cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_201350:
    // 0x201350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201354:
    // 0x201354: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x201354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
label_201358:
    // 0x201358: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_20135c:
    // 0x20135c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_201360:
    // 0x201360: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_201364:
    // 0x201364: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_201368:
    // 0x201368: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x201368u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_20136c:
    // 0x20136c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x20136cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_201370:
    // 0x201370: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x201370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_201374:
    // 0x201374: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x201374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_201378:
    // 0x201378: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x201378u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_20137c:
    // 0x20137c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_201380:
    // 0x201380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201384:
    // 0x201384: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x201384u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_201388:
    // 0x201388: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_20138c:
    if (ctx->pc == 0x20138Cu) {
        ctx->pc = 0x20138Cu;
            // 0x20138c: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x201390u;
        goto label_201390;
    }
    ctx->pc = 0x201388u;
    {
        const bool branch_taken_0x201388 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201388u;
            // 0x20138c: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201388) {
            ctx->pc = 0x2013B4u;
            goto label_2013b4;
        }
    }
    ctx->pc = 0x201390u;
label_201390:
    // 0x201390: 0x10000014  b           . + 4 + (0x14 << 2)
label_201394:
    if (ctx->pc == 0x201394u) {
        ctx->pc = 0x201394u;
            // 0x201394: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->pc = 0x201398u;
        goto label_201398;
    }
    ctx->pc = 0x201390u;
    {
        const bool branch_taken_0x201390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201390u;
            // 0x201394: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201390) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x201398u;
label_201398:
    // 0x201398: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20139c:
    // 0x20139c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2013a0:
    // 0x2013a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2013a4:
    // 0x2013a4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2013a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_2013a8:
    // 0x2013a8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x2013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_2013ac:
    // 0x2013ac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2013b0:
    if (ctx->pc == 0x2013B0u) {
        ctx->pc = 0x2013B0u;
            // 0x2013b0: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x2013B4u;
        goto label_2013b4;
    }
    ctx->pc = 0x2013ACu;
    {
        const bool branch_taken_0x2013ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013ACu;
            // 0x2013b0: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013ac) {
            ctx->pc = 0x2013C8u;
            goto label_2013c8;
        }
    }
    ctx->pc = 0x2013B4u;
label_2013b4:
    // 0x2013b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2013b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2013b8:
    // 0x2013b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2013bc:
    // 0x2013bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_2013c0:
    if (ctx->pc == 0x2013C0u) {
        ctx->pc = 0x2013C0u;
            // 0x2013c0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2013C4u;
        goto label_2013c4;
    }
    ctx->pc = 0x2013BCu;
    {
        const bool branch_taken_0x2013bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013BCu;
            // 0x2013c0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013bc) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x2013C4u;
label_2013c4:
    // 0x2013c4: 0x0  nop
    ctx->pc = 0x2013c4u;
    // NOP
label_2013c8:
    // 0x2013c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2013cc:
    if (ctx->pc == 0x2013CCu) {
        ctx->pc = 0x2013CCu;
            // 0x2013cc: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->pc = 0x2013D0u;
        goto label_2013d0;
    }
    ctx->pc = 0x2013C8u;
    {
        const bool branch_taken_0x2013c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013C8u;
            // 0x2013cc: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013c8) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x2013D0u;
label_2013d0:
    // 0x2013d0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2013d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_2013d4:
    // 0x2013d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2013d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2013d8:
    // 0x2013d8: 0x24c6f180  addiu       $a2, $a2, -0xE80
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963584));
label_2013dc:
    // 0x2013dc: 0xc08063e  jal         func_2018F8
label_2013e0:
    if (ctx->pc == 0x2013E0u) {
        ctx->pc = 0x2013E0u;
            // 0x2013e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2013E4u;
        goto label_2013e4;
    }
    ctx->pc = 0x2013DCu;
    SET_GPR_U32(ctx, 31, 0x2013E4u);
    ctx->pc = 0x2013E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013DCu;
            // 0x2013e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013E4u; }
        if (ctx->pc != 0x2013E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018F8_0x2018f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013E4u; }
        if (ctx->pc != 0x2013E4u) { return; }
    }
    ctx->pc = 0x2013E4u;
label_2013e4:
    // 0x2013e4: 0xc080652  jal         func_201948
label_2013e8:
    if (ctx->pc == 0x2013E8u) {
        ctx->pc = 0x2013ECu;
        goto label_2013ec;
    }
    ctx->pc = 0x2013E4u;
    SET_GPR_U32(ctx, 31, 0x2013ECu);
    ctx->pc = 0x201948u;
    if (runtime->hasFunction(0x201948u)) {
        auto targetFn = runtime->lookupFunction(0x201948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013ECu; }
        if (ctx->pc != 0x2013ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201948_0x201948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013ECu; }
        if (ctx->pc != 0x2013ECu) { return; }
    }
    ctx->pc = 0x2013ECu;
label_2013ec:
    // 0x2013ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2013f0:
    // 0x2013f0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_2013f4:
    if (ctx->pc == 0x2013F4u) {
        ctx->pc = 0x2013F4u;
            // 0x2013f4: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x2013F8u;
        goto label_2013f8;
    }
    ctx->pc = 0x2013F0u;
    {
        const bool branch_taken_0x2013f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2013f0) {
            ctx->pc = 0x2013F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2013F0u;
            // 0x2013f4: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201400u;
            goto label_201400;
        }
    }
    ctx->pc = 0x2013F8u;
label_2013f8:
    // 0x2013f8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2013fc:
    // 0x2013fc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2013fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_201400:
    // 0x201400: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_201404:
    // 0x201404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_201408:
    if (ctx->pc == 0x201408u) {
        ctx->pc = 0x201408u;
            // 0x201408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20140Cu;
        goto label_20140c;
    }
    ctx->pc = 0x201404u;
    {
        const bool branch_taken_0x201404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201404u;
            // 0x201408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201404) {
            ctx->pc = 0x201418u;
            goto label_201418;
        }
    }
    ctx->pc = 0x20140Cu;
label_20140c:
    // 0x20140c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_201410:
    // 0x201410: 0x40f809  jalr        $v0
label_201414:
    if (ctx->pc == 0x201414u) {
        ctx->pc = 0x201414u;
            // 0x201414: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x201418u;
        goto label_201418;
    }
    ctx->pc = 0x201410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201418u);
        ctx->pc = 0x201414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201410u;
            // 0x201414: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201418u; }
            if (ctx->pc != 0x201418u) { return; }
        }
        }
    }
    ctx->pc = 0x201418u;
label_201418:
    // 0x201418: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x201418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_20141c:
    // 0x20141c: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x20141cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_201420:
    // 0x201420: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x201420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_201424:
    // 0x201424: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x201424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_201428:
    // 0x201428: 0x3e00008  jr          $ra
label_20142c:
    if (ctx->pc == 0x20142Cu) {
        ctx->pc = 0x20142Cu;
            // 0x20142c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x201430u;
        goto label_fallthrough_0x201428;
    }
    ctx->pc = 0x201428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201428u;
            // 0x20142c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x201428:
    ctx->pc = 0x201430u;
    ctx->pc = 0x201430u;
}
