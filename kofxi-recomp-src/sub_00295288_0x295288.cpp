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

// Function: sub_00295288
// Address: 0x295288 - 0x2953f0
void sub_00295288_0x295288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295288_0x295288");
#endif

    switch (ctx->pc) {
        case 0x2952a0u: goto label_2952a0;
        default: break;
    }

    ctx->pc = 0x295288u;

    // 0x295288: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x295288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29528c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29528cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295290: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x295290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295294: 0x19400052  blez        $t2, . + 4 + (0x52 << 2)
    ctx->pc = 0x295294u;
    {
        const bool branch_taken_0x295294 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x295298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295294u;
        // 0x295298: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295294) {
            ctx->pc = 0x2953E0u;
            goto label_2953e0;
        }
    }
    ctx->pc = 0x29529Cu;
    // 0x29529c: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x29529cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
label_2952a0:
    // 0x2952a0: 0x29420003  slti        $v0, $t2, 0x3
    ctx->pc = 0x2952a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2952a4: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2952A4u;
    {
        const bool branch_taken_0x2952a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2952a4) {
            ctx->pc = 0x2952A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2952A4u;
            // 0x2952a8: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29533Cu;
            goto label_29533c;
        }
    }
    ctx->pc = 0x2952ACu;
    // 0x2952ac: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2952acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2952b0: 0x25664c80  addiu       $a2, $t3, 0x4C80
    ctx->pc = 0x2952b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 19584));
    // 0x2952b4: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x2952b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x2952b8: 0x91240002  lbu         $a0, 0x2($t1)
    ctx->pc = 0x2952b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2952bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2952bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2952c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2952c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2952c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2952c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2952c8: 0x644025  or          $t0, $v1, $a0
    ctx->pc = 0x2952c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2952cc: 0x813b8  dsll        $v0, $t0, 14
    ctx->pc = 0x2952ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 14);
    // 0x2952d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2952d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2952d4: 0x81b3a  dsrl        $v1, $t0, 12
    ctx->pc = 0x2952d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 12);
    // 0x2952d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2952d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2952dc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2952dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2952e0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2952e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2952e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2952e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2952e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2952e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2952ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2952ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2952f0: 0x821ba  dsrl        $a0, $t0, 6
    ctx->pc = 0x2952f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) >> 6);
    // 0x2952f4: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x2952f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2952f8: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x2952f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2952fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2952fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x295300: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x295300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x295304: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295308: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x295308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29530c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x29530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x295310: 0x3103003f  andi        $v1, $t0, 0x3F
    ctx->pc = 0x295310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x295314: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x295314u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295318: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x295318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29531c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29531cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x295320: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x295320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x295324: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x295324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x295328: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x295328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29532c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x29532cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295330: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x295330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x295334: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x295334u;
    {
        const bool branch_taken_0x295334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295334u;
        // 0x295338: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295334) {
            ctx->pc = 0x2953C8u;
            goto label_2953c8;
        }
    }
    ctx->pc = 0x29533Cu;
label_29533c:
    // 0x29533c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295340: 0x15430004  bne         $t2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x295340u;
    {
        const bool branch_taken_0x295340 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x295344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295340u;
        // 0x295344: 0x24438  dsll        $t0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295340) {
            ctx->pc = 0x295354u;
            goto label_295354;
        }
    }
    ctx->pc = 0x295348u;
    // 0x295348: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x295348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x29534c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x29534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x295350: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x295350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_295354:
    // 0x295354: 0x25664c80  addiu       $a2, $t3, 0x4C80
    ctx->pc = 0x295354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 19584));
    // 0x295358: 0x813b8  dsll        $v0, $t0, 14
    ctx->pc = 0x295358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 14);
    // 0x29535c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29535cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x295360: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x295360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x295364: 0x81b3a  dsrl        $v1, $t0, 12
    ctx->pc = 0x295364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 12);
    // 0x295368: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x295368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29536c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x29536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x295370: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x295370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x295374: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x295374u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x295378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29537c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x29537cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x295380: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x295380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x295384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x295384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x295388: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x295388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29538c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x29538cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295390: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x295390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x295394: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x295394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295398: 0x11450008  beq         $t2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x295398u;
    {
        const bool branch_taken_0x295398 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        ctx->pc = 0x29539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295398u;
        // 0x29539c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295398) {
            ctx->pc = 0x2953BCu;
            goto label_2953bc;
        }
    }
    ctx->pc = 0x2953A0u;
    // 0x2953a0: 0x811ba  dsrl        $v0, $t0, 6
    ctx->pc = 0x2953a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 6);
    // 0x2953a4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2953a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2953a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2953a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2953ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2953acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2953b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2953b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2953b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2953B4u;
    {
        const bool branch_taken_0x2953b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953B4u;
        // 0x2953b8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953b4) {
            ctx->pc = 0x2953C0u;
            goto label_2953c0;
        }
    }
    ctx->pc = 0x2953BCu;
label_2953bc:
    // 0x2953bc: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2953c0:
    // 0x2953c0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2953c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2953c4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2953c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2953c8:
    // 0x2953c8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2953c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2953cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2953ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2953d0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2953d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2953d4: 0x254afffd  addiu       $t2, $t2, -0x3
    ctx->pc = 0x2953d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967293));
    // 0x2953d8: 0x1d40ffb1  bgtz        $t2, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2953D8u;
    {
        const bool branch_taken_0x2953d8 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x2953DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953D8u;
        // 0x2953dc: 0x25290003  addiu       $t1, $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953d8) {
            ctx->pc = 0x2952A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2952a0;
        }
    }
    ctx->pc = 0x2953E0u;
label_2953e0:
    // 0x2953e0: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x2953e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2953e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2953E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2953E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953E4u;
        // 0x2953e8: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2953E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2953ECu;
    // 0x2953ec: 0x0  nop
    ctx->pc = 0x2953ecu;
    // NOP
}
