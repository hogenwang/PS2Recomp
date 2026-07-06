#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224270
// Address: 0x224270 - 0x2243d0
void sub_00224270_0x224270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224270_0x224270");
#endif

    switch (ctx->pc) {
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        default: break;
    }

    ctx->pc = 0x224270u;

label_224270:
    // 0x224270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_224274:
    // 0x224274: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x224274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_224278:
    // 0x224278: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x224278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22427c:
    // 0x22427c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_224280:
    // 0x224280: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_224284:
    if (ctx->pc == 0x224284u) {
        ctx->pc = 0x224284u;
            // 0x224284: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224288u;
        goto label_224288;
    }
    ctx->pc = 0x224280u;
    {
        const bool branch_taken_0x224280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224280u;
            // 0x224284: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224280) {
            ctx->pc = 0x2242C4u;
            goto label_2242c4;
        }
    }
    ctx->pc = 0x224288u;
label_224288:
    // 0x224288: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_22428c:
    // 0x22428c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_224290:
    // 0x224290: 0x24843478  addiu       $a0, $a0, 0x3478
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13432));
label_224294:
    // 0x224294: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_224298:
    // 0x224298: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x224298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_22429c:
    // 0x22429c: 0x0  nop
    ctx->pc = 0x22429cu;
    // NOP
label_2242a0:
    // 0x2242a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2242a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2242a4:
    // 0x2242a4: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_2242a8:
    // 0x2242a8: 0xc089794  jal         func_225E50
label_2242ac:
    if (ctx->pc == 0x2242ACu) {
        ctx->pc = 0x2242B0u;
        goto label_2242b0;
    }
    ctx->pc = 0x2242A8u;
    SET_GPR_U32(ctx, 31, 0x2242B0u);
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242B0u; }
        if (ctx->pc != 0x2242B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242B0u; }
        if (ctx->pc != 0x2242B0u) { return; }
    }
    ctx->pc = 0x2242B0u;
label_2242b0:
    // 0x2242b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2242b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2242b4:
    // 0x2242b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2242b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2242b8:
    // 0x2242b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2242b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2242bc:
    // 0x2242bc: 0x3e00008  jr          $ra
label_2242c0:
    if (ctx->pc == 0x2242C0u) {
        ctx->pc = 0x2242C0u;
            // 0x2242c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2242C4u;
        goto label_2242c4;
    }
    ctx->pc = 0x2242BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2242C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242BCu;
            // 0x2242c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2242C4u;
label_2242c4:
    // 0x2242c4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2242c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2242c8:
    // 0x2242c8: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2242c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2242cc:
    // 0x2242cc: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
label_2242d0:
    if (ctx->pc == 0x2242D0u) {
        ctx->pc = 0x2242D0u;
            // 0x2242d0: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2242D4u;
        goto label_2242d4;
    }
    ctx->pc = 0x2242CCu;
    {
        const bool branch_taken_0x2242cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2242D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242CCu;
            // 0x2242d0: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242cc) {
            ctx->pc = 0x2242E8u;
            goto label_2242e8;
        }
    }
    ctx->pc = 0x2242D4u;
label_2242d4:
    // 0x2242d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2242d8:
    // 0x2242d8: 0x24843478  addiu       $a0, $a0, 0x3478
    ctx->pc = 0x2242d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13432));
label_2242dc:
    // 0x2242dc: 0x25083460  addiu       $t0, $t0, 0x3460
    ctx->pc = 0x2242dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13408));
label_2242e0:
    // 0x2242e0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2242e4:
    if (ctx->pc == 0x2242E4u) {
        ctx->pc = 0x2242E4u;
            // 0x2242e4: 0x240500f8  addiu       $a1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->pc = 0x2242E8u;
        goto label_2242e8;
    }
    ctx->pc = 0x2242E0u;
    {
        const bool branch_taken_0x2242e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242E0u;
            // 0x2242e4: 0x240500f8  addiu       $a1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242e0) {
            ctx->pc = 0x2242A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2242a0;
        }
    }
    ctx->pc = 0x2242E8u;
label_2242e8:
    // 0x2242e8: 0x8c8d1070  lw          $t5, 0x1070($a0)
    ctx->pc = 0x2242e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4208)));
label_2242ec:
    // 0x2242ec: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
label_2242f0:
    if (ctx->pc == 0x2242F0u) {
        ctx->pc = 0x2242F0u;
            // 0x2242f0: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2242F4u;
        goto label_2242f4;
    }
    ctx->pc = 0x2242ECu;
    {
        const bool branch_taken_0x2242ec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242ECu;
            // 0x2242f0: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242ec) {
            ctx->pc = 0x224308u;
            goto label_224308;
        }
    }
    ctx->pc = 0x2242F4u;
label_2242f4:
    // 0x2242f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2242f8:
    // 0x2242f8: 0x24843478  addiu       $a0, $a0, 0x3478
    ctx->pc = 0x2242f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13432));
label_2242fc:
    // 0x2242fc: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_224300:
    // 0x224300: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_224304:
    if (ctx->pc == 0x224304u) {
        ctx->pc = 0x224304u;
            // 0x224304: 0x240500fb  addiu       $a1, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->pc = 0x224308u;
        goto label_224308;
    }
    ctx->pc = 0x224300u;
    {
        const bool branch_taken_0x224300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224300u;
            // 0x224304: 0x240500fb  addiu       $a1, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224300) {
            ctx->pc = 0x2242A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2242a0;
        }
    }
    ctx->pc = 0x224308u;
label_224308:
    // 0x224308: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
label_22430c:
    if (ctx->pc == 0x22430Cu) {
        ctx->pc = 0x22430Cu;
            // 0x22430c: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x224310u;
        goto label_224310;
    }
    ctx->pc = 0x224308u;
    {
        const bool branch_taken_0x224308 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224308u;
            // 0x22430c: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224308) {
            ctx->pc = 0x224324u;
            goto label_224324;
        }
    }
    ctx->pc = 0x224310u;
label_224310:
    // 0x224310: 0x8deeca20  lw          $t6, -0x35E0($t7)
    ctx->pc = 0x224310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953504)));
label_224314:
    // 0x224314: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
label_224318:
    if (ctx->pc == 0x224318u) {
        ctx->pc = 0x224318u;
            // 0x224318: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x22431Cu;
        goto label_22431c;
    }
    ctx->pc = 0x224314u;
    {
        const bool branch_taken_0x224314 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x224318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224314u;
            // 0x224318: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224314) {
            ctx->pc = 0x224324u;
            goto label_224324;
        }
    }
    ctx->pc = 0x22431Cu;
label_22431c:
    // 0x22431c: 0x8deeca24  lw          $t6, -0x35DC($t7)
    ctx->pc = 0x22431cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953508)));
label_224320:
    // 0x224320: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x224320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_224324:
    // 0x224324: 0x1a0f809  jalr        $t5
label_224328:
    if (ctx->pc == 0x224328u) {
        ctx->pc = 0x224328u;
            // 0x224328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22432Cu;
        goto label_22432c;
    }
    ctx->pc = 0x224324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        SET_GPR_U32(ctx, 31, 0x22432Cu);
        ctx->pc = 0x224328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224324u;
            // 0x224328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22432Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22432Cu; }
            if (ctx->pc != 0x22432Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22432Cu;
label_22432c:
    // 0x22432c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_224330:
    if (ctx->pc == 0x224330u) {
        ctx->pc = 0x224330u;
            // 0x224330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224334u;
        goto label_224334;
    }
    ctx->pc = 0x22432Cu;
    {
        const bool branch_taken_0x22432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22432Cu;
            // 0x224330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22432c) {
            ctx->pc = 0x2243C8u;
            goto label_2243c8;
        }
    }
    ctx->pc = 0x224334u;
label_224334:
    // 0x224334: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224334u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_224338:
    // 0x224338: 0x8deeca20  lw          $t6, -0x35E0($t7)
    ctx->pc = 0x224338u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953504)));
label_22433c:
    // 0x22433c: 0x11c00022  beqz        $t6, . + 4 + (0x22 << 2)
label_224340:
    if (ctx->pc == 0x224340u) {
        ctx->pc = 0x224340u;
            // 0x224340: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->pc = 0x224344u;
        goto label_224344;
    }
    ctx->pc = 0x22433Cu;
    {
        const bool branch_taken_0x22433c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x224340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22433Cu;
            // 0x224340: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22433c) {
            ctx->pc = 0x2243C8u;
            goto label_2243c8;
        }
    }
    ctx->pc = 0x224344u;
label_224344:
    // 0x224344: 0xc08903a  jal         func_2240E8
label_224348:
    if (ctx->pc == 0x224348u) {
        ctx->pc = 0x224348u;
            // 0x224348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22434Cu;
        goto label_22434c;
    }
    ctx->pc = 0x224344u;
    SET_GPR_U32(ctx, 31, 0x22434Cu);
    ctx->pc = 0x224348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224344u;
            // 0x224348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2240E8u;
    if (runtime->hasFunction(0x2240E8u)) {
        auto targetFn = runtime->lookupFunction(0x2240E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22434Cu; }
        if (ctx->pc != 0x22434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002240E8_0x2240e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22434Cu; }
        if (ctx->pc != 0x22434Cu) { return; }
    }
    ctx->pc = 0x22434Cu;
label_22434c:
    // 0x22434c: 0x2306821  addu        $t5, $s1, $s0
    ctx->pc = 0x22434cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_224350:
    // 0x224350: 0x91affffe  lbu         $t7, -0x2($t5)
    ctx->pc = 0x224350u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294967294)));
label_224354:
    // 0x224354: 0xa3af0000  sb          $t7, 0x0($sp)
    ctx->pc = 0x224354u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 15));
label_224358:
    // 0x224358: 0x91aeffff  lbu         $t6, -0x1($t5)
    ctx->pc = 0x224358u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294967295)));
label_22435c:
    // 0x22435c: 0xa3ae0001  sb          $t6, 0x1($sp)
    ctx->pc = 0x22435cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 14));
label_224360:
    // 0x224360: 0x87af0000  lh          $t7, 0x0($sp)
    ctx->pc = 0x224360u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_224364:
    // 0x224364: 0x11e20018  beq         $t7, $v0, . + 4 + (0x18 << 2)
label_224368:
    if (ctx->pc == 0x224368u) {
        ctx->pc = 0x224368u;
            // 0x224368: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22436Cu;
        goto label_22436c;
    }
    ctx->pc = 0x224364u;
    {
        const bool branch_taken_0x224364 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x224368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224364u;
            // 0x224368: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224364) {
            ctx->pc = 0x2243C8u;
            goto label_2243c8;
        }
    }
    ctx->pc = 0x22436Cu;
label_22436c:
    // 0x22436c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x22436cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224370:
    // 0x224370: 0xc6900  sll         $t5, $t4, 4
    ctx->pc = 0x224370u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_224374:
    // 0x224374: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x224374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_224378:
    // 0x224378: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x224378u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22437c:
    // 0x22437c: 0x51e00007  beql        $t7, $zero, . + 4 + (0x7 << 2)
label_224380:
    if (ctx->pc == 0x224380u) {
        ctx->pc = 0x224380u;
            // 0x224380: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x224384u;
        goto label_224384;
    }
    ctx->pc = 0x22437Cu;
    {
        const bool branch_taken_0x22437c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x22437c) {
            ctx->pc = 0x224380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22437Cu;
            // 0x224380: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22439Cu;
            goto label_22439c;
        }
    }
    ctx->pc = 0x224384u;
label_224384:
    // 0x224384: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_224388:
    // 0x224388: 0x29cf0010  slti        $t7, $t6, 0x10
    ctx->pc = 0x224388u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
label_22438c:
    // 0x22438c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
label_224390:
    if (ctx->pc == 0x224390u) {
        ctx->pc = 0x224390u;
            // 0x224390: 0x1ae7821  addu        $t7, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->pc = 0x224394u;
        goto label_224394;
    }
    ctx->pc = 0x22438Cu;
    {
        const bool branch_taken_0x22438c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x224390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22438Cu;
            // 0x224390: 0x1ae7821  addu        $t7, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22438c) {
            ctx->pc = 0x224378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224378;
        }
    }
    ctx->pc = 0x224394u;
label_224394:
    // 0x224394: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_224398:
    if (ctx->pc == 0x224398u) {
        ctx->pc = 0x224398u;
            // 0x224398: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->pc = 0x22439Cu;
        goto label_22439c;
    }
    ctx->pc = 0x224394u;
    {
        const bool branch_taken_0x224394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224394u;
            // 0x224398: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224394) {
            ctx->pc = 0x22436Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22436c;
        }
    }
    ctx->pc = 0x22439Cu;
label_22439c:
    // 0x22439c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2243a0:
    // 0x2243a0: 0x29cf0010  slti        $t7, $t6, 0x10
    ctx->pc = 0x2243a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
label_2243a4:
    // 0x2243a4: 0x24843478  addiu       $a0, $a0, 0x3478
    ctx->pc = 0x2243a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13432));
label_2243a8:
    // 0x2243a8: 0x25083488  addiu       $t0, $t0, 0x3488
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13448));
label_2243ac:
    // 0x2243ac: 0x24050113  addiu       $a1, $zero, 0x113
    ctx->pc = 0x2243acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
label_2243b0:
    // 0x2243b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2243b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2243b4:
    // 0x2243b4: 0x15e0ffbc  bnez        $t7, . + 4 + (-0x44 << 2)
label_2243b8:
    if (ctx->pc == 0x2243B8u) {
        ctx->pc = 0x2243B8u;
            // 0x2243b8: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
        ctx->pc = 0x2243BCu;
        goto label_2243bc;
    }
    ctx->pc = 0x2243B4u;
    {
        const bool branch_taken_0x2243b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243B4u;
            // 0x2243b8: 0x24078aca  addiu       $a3, $zero, -0x7536 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b4) {
            ctx->pc = 0x2242A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2242a8;
        }
    }
    ctx->pc = 0x2243BCu;
label_2243bc:
    // 0x2243bc: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_2243c0:
    if (ctx->pc == 0x2243C0u) {
        ctx->pc = 0x2243C0u;
            // 0x2243c0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->pc = 0x2243C4u;
        goto label_2243c4;
    }
    ctx->pc = 0x2243BCu;
    {
        const bool branch_taken_0x2243bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243BCu;
            // 0x2243c0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243bc) {
            ctx->pc = 0x22436Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22436c;
        }
    }
    ctx->pc = 0x2243C4u;
label_2243c4:
    // 0x2243c4: 0x0  nop
    ctx->pc = 0x2243c4u;
    // NOP
label_2243c8:
    // 0x2243c8: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
label_2243cc:
    if (ctx->pc == 0x2243CCu) {
        ctx->pc = 0x2243CCu;
            // 0x2243cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2243D0u;
        goto label_fallthrough_0x2243c8;
    }
    ctx->pc = 0x2243C8u;
    {
        const bool branch_taken_0x2243c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243C8u;
            // 0x2243cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243c8) {
            ctx->pc = 0x2242B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2242b0;
        }
    }
label_fallthrough_0x2243c8:
    ctx->pc = 0x2243D0u;
    ctx->pc = 0x2243d0u;
}
