#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C22E0
// Address: 0x1c22e0 - 0x1c2450
void sub_001C22E0_0x1c22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22E0_0x1c22e0");
#endif

    switch (ctx->pc) {
        case 0x1c22e0u: goto label_1c22e0;
        case 0x1c22e4u: goto label_1c22e4;
        case 0x1c22e8u: goto label_1c22e8;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f0u: goto label_1c22f0;
        case 0x1c22f4u: goto label_1c22f4;
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c2300u: goto label_1c2300;
        case 0x1c2304u: goto label_1c2304;
        case 0x1c2308u: goto label_1c2308;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2314u: goto label_1c2314;
        case 0x1c2318u: goto label_1c2318;
        case 0x1c231cu: goto label_1c231c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2324u: goto label_1c2324;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c232cu: goto label_1c232c;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c2334u: goto label_1c2334;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2340u: goto label_1c2340;
        case 0x1c2344u: goto label_1c2344;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c2354u: goto label_1c2354;
        case 0x1c2358u: goto label_1c2358;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2364u: goto label_1c2364;
        case 0x1c2368u: goto label_1c2368;
        case 0x1c236cu: goto label_1c236c;
        case 0x1c2370u: goto label_1c2370;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c237cu: goto label_1c237c;
        case 0x1c2380u: goto label_1c2380;
        case 0x1c2384u: goto label_1c2384;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c2390u: goto label_1c2390;
        case 0x1c2394u: goto label_1c2394;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23a8u: goto label_1c23a8;
        case 0x1c23acu: goto label_1c23ac;
        case 0x1c23b0u: goto label_1c23b0;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23bcu: goto label_1c23bc;
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c4u: goto label_1c23c4;
        case 0x1c23c8u: goto label_1c23c8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23d0u: goto label_1c23d0;
        case 0x1c23d4u: goto label_1c23d4;
        case 0x1c23d8u: goto label_1c23d8;
        case 0x1c23dcu: goto label_1c23dc;
        case 0x1c23e0u: goto label_1c23e0;
        case 0x1c23e4u: goto label_1c23e4;
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23ecu: goto label_1c23ec;
        case 0x1c23f0u: goto label_1c23f0;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c23fcu: goto label_1c23fc;
        case 0x1c2400u: goto label_1c2400;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2408u: goto label_1c2408;
        case 0x1c240cu: goto label_1c240c;
        case 0x1c2410u: goto label_1c2410;
        case 0x1c2414u: goto label_1c2414;
        case 0x1c2418u: goto label_1c2418;
        case 0x1c241cu: goto label_1c241c;
        case 0x1c2420u: goto label_1c2420;
        case 0x1c2424u: goto label_1c2424;
        case 0x1c2428u: goto label_1c2428;
        case 0x1c242cu: goto label_1c242c;
        case 0x1c2430u: goto label_1c2430;
        case 0x1c2434u: goto label_1c2434;
        case 0x1c2438u: goto label_1c2438;
        case 0x1c243cu: goto label_1c243c;
        case 0x1c2440u: goto label_1c2440;
        case 0x1c2444u: goto label_1c2444;
        case 0x1c2448u: goto label_1c2448;
        case 0x1c244cu: goto label_1c244c;
        default: break;
    }

    ctx->pc = 0x1c22e0u;

label_1c22e0:
    // 0x1c22e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c22e4:
    // 0x1c22e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c22e8:
    // 0x1c22e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c22ec:
    // 0x1c22ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c22ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c22f0:
    // 0x1c22f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c22f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c22f4:
    // 0x1c22f4: 0x2463d088  addiu       $v1, $v1, -0x2F78
    ctx->pc = 0x1c22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955144));
label_1c22f8:
    // 0x1c22f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c22fc:
    // 0x1c22fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2300:
    // 0x1c2300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c2304:
    // 0x1c2304: 0x82050001  lb          $a1, 0x1($s0)
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1c2308:
    // 0x1c2308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c230c:
    // 0x1c230c: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_1c2310:
    if (ctx->pc == 0x1C2310u) {
        ctx->pc = 0x1C2310u;
            // 0x1c2310: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2314u;
        goto label_1c2314;
    }
    ctx->pc = 0x1C230Cu;
    {
        const bool branch_taken_0x1c230c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C230Cu;
            // 0x1c2310: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c230c) {
            ctx->pc = 0x1C2368u;
            goto label_1c2368;
        }
    }
    ctx->pc = 0x1C2314u;
label_1c2314:
    // 0x1c2314: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1c2318:
    // 0x1c2318: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c231c:
    // 0x1c231c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1c231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c2320:
    // 0x1c2320: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1c2320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1c2324:
    // 0x1c2324: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_1c2328:
    if (ctx->pc == 0x1C2328u) {
        ctx->pc = 0x1C2328u;
            // 0x1c2328: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C232Cu;
        goto label_1c232c;
    }
    ctx->pc = 0x1C2324u;
    {
        const bool branch_taken_0x1c2324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2324) {
            ctx->pc = 0x1C2328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2324u;
            // 0x1c2328: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C236Cu;
            goto label_1c236c;
        }
    }
    ctx->pc = 0x1C232Cu;
label_1c232c:
    // 0x1c232c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c2330:
    // 0x1c2330: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c2334:
    // 0x1c2334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c2338:
    // 0x1c2338: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c2338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1c233c:
    // 0x1c233c: 0xc0435a6  jal         func_10D698
label_1c2340:
    if (ctx->pc == 0x1C2340u) {
        ctx->pc = 0x1C2340u;
            // 0x1c2340: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x1C2344u;
        goto label_1c2344;
    }
    ctx->pc = 0x1C233Cu;
    SET_GPR_U32(ctx, 31, 0x1C2344u);
    ctx->pc = 0x1C2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C233Cu;
            // 0x1c2340: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (runtime->hasFunction(0x10D698u)) {
        auto targetFn = runtime->lookupFunction(0x10D698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2344u; }
        if (ctx->pc != 0x1C2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D698_0x10d698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2344u; }
        if (ctx->pc != 0x1C2344u) { return; }
    }
    ctx->pc = 0x1C2344u;
label_1c2344:
    // 0x1c2344: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c2348:
    // 0x1c2348: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1c2348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c234c:
    // 0x1c234c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c2350:
    // 0x1c2350: 0x60f809  jalr        $v1
label_1c2354:
    if (ctx->pc == 0x1C2354u) {
        ctx->pc = 0x1C2354u;
            // 0x1c2354: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1C2358u;
        goto label_1c2358;
    }
    ctx->pc = 0x1C2350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2358u);
        ctx->pc = 0x1C2354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2350u;
            // 0x1c2354: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2358u; }
            if (ctx->pc != 0x1C2358u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2358u;
label_1c2358:
    // 0x1c2358: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1c235c:
    // 0x1c235c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c2360:
    // 0x1c2360: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1c2360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c2364:
    // 0x1c2364: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1c2364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1c2368:
    // 0x1c2368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c236c:
    // 0x1c236c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1c236cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_1c2370:
    // 0x1c2370: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1c2370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_1c2374:
    // 0x1c2374: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1c2378:
    // 0x1c2378: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c237c:
    // 0x1c237c: 0x54440030  bnel        $v0, $a0, . + 4 + (0x30 << 2)
label_1c2380:
    if (ctx->pc == 0x1C2380u) {
        ctx->pc = 0x1C2380u;
            // 0x1c2380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2384u;
        goto label_1c2384;
    }
    ctx->pc = 0x1C237Cu;
    {
        const bool branch_taken_0x1c237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c237c) {
            ctx->pc = 0x1C2380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C237Cu;
            // 0x1c2380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2440u;
            goto label_1c2440;
        }
    }
    ctx->pc = 0x1C2384u;
label_1c2384:
    // 0x1c2384: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c2388:
    // 0x1c2388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c238c:
    // 0x1c238c: 0x8c43d07c  lw          $v1, -0x2F84($v0)
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955132)));
label_1c2390:
    // 0x1c2390: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
label_1c2394:
    if (ctx->pc == 0x1C2394u) {
        ctx->pc = 0x1C2394u;
            // 0x1c2394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2398u;
        goto label_1c2398;
    }
    ctx->pc = 0x1C2390u;
    {
        const bool branch_taken_0x1c2390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c2390) {
            ctx->pc = 0x1C2394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2390u;
            // 0x1c2394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2440u;
            goto label_1c2440;
        }
    }
    ctx->pc = 0x1C2398u;
label_1c2398:
    // 0x1c2398: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1c2398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c239c:
    // 0x1c239c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1c23a0:
    // 0x1c23a0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1c23a4:
    // 0x1c23a4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1c23a8:
    // 0x1c23a8: 0x40f809  jalr        $v0
label_1c23ac:
    if (ctx->pc == 0x1C23ACu) {
        ctx->pc = 0x1C23ACu;
            // 0x1c23ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1C23B0u;
        goto label_1c23b0;
    }
    ctx->pc = 0x1C23A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C23B0u);
        ctx->pc = 0x1C23ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23A8u;
            // 0x1c23ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C23B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C23B0u; }
            if (ctx->pc != 0x1C23B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C23B0u;
label_1c23b0:
    // 0x1c23b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c23b4:
    // 0x1c23b4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1c23b8:
    // 0x1c23b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c23bc:
    // 0x1c23bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c23c0:
    // 0x1c23c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1c23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1c23c4:
    // 0x1c23c4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1c23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_1c23c8:
    // 0x1c23c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c23cc:
    // 0x1c23cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c23d0:
    // 0x1c23d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c23d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1c23d4:
    // 0x1c23d4: 0xc043556  jal         func_10D558
label_1c23d8:
    if (ctx->pc == 0x1C23D8u) {
        ctx->pc = 0x1C23D8u;
            // 0x1c23d8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x1C23DCu;
        goto label_1c23dc;
    }
    ctx->pc = 0x1C23D4u;
    SET_GPR_U32(ctx, 31, 0x1C23DCu);
    ctx->pc = 0x1C23D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23D4u;
            // 0x1c23d8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (runtime->hasFunction(0x10D558u)) {
        auto targetFn = runtime->lookupFunction(0x10D558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23DCu; }
        if (ctx->pc != 0x1C23DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D558_0x10d558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23DCu; }
        if (ctx->pc != 0x1C23DCu) { return; }
    }
    ctx->pc = 0x1C23DCu;
label_1c23dc:
    // 0x1c23dc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c23e0:
    // 0x1c23e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c23e4:
    // 0x1c23e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c23e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c23e8:
    // 0x1c23e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1c23ec:
    // 0x1c23ec: 0xc0435a6  jal         func_10D698
label_1c23f0:
    if (ctx->pc == 0x1C23F0u) {
        ctx->pc = 0x1C23F0u;
            // 0x1c23f0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x1C23F4u;
        goto label_1c23f4;
    }
    ctx->pc = 0x1C23ECu;
    SET_GPR_U32(ctx, 31, 0x1C23F4u);
    ctx->pc = 0x1C23F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23ECu;
            // 0x1c23f0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (runtime->hasFunction(0x10D698u)) {
        auto targetFn = runtime->lookupFunction(0x10D698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F4u; }
        if (ctx->pc != 0x1C23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D698_0x10d698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F4u; }
        if (ctx->pc != 0x1C23F4u) { return; }
    }
    ctx->pc = 0x1C23F4u;
label_1c23f4:
    // 0x1c23f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c23f8:
    // 0x1c23f8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1c23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1c23fc:
    // 0x1c23fc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c2400:
    // 0x1c2400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c2404:
    // 0x1c2404: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c2404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c2408:
    // 0x1c2408: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c2408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c240c:
    // 0x1c240c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x1c240cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_1c2410:
    // 0x1c2410: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1c2410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1c2414:
    // 0x1c2414: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x1c2414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_1c2418:
    // 0x1c2418: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1c2418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1c241c:
    // 0x1c241c: 0x0  nop
    ctx->pc = 0x1c241cu;
    // NOP
label_1c2420:
    // 0x1c2420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2424:
    // 0x1c2424: 0xc043ee2  jal         func_10FB88
label_1c2428:
    if (ctx->pc == 0x1C2428u) {
        ctx->pc = 0x1C2428u;
            // 0x1c2428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C242Cu;
        goto label_1c242c;
    }
    ctx->pc = 0x1C2424u;
    SET_GPR_U32(ctx, 31, 0x1C242Cu);
    ctx->pc = 0x1C2428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2424u;
            // 0x1c2428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (runtime->hasFunction(0x10FB88u)) {
        auto targetFn = runtime->lookupFunction(0x10FB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C242Cu; }
        if (ctx->pc != 0x1C242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB88_0x10fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C242Cu; }
        if (ctx->pc != 0x1C242Cu) { return; }
    }
    ctx->pc = 0x1C242Cu;
label_1c242c:
    // 0x1c242c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_1c2430:
    if (ctx->pc == 0x1C2430u) {
        ctx->pc = 0x1C2430u;
            // 0x1c2430: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2434u;
        goto label_1c2434;
    }
    ctx->pc = 0x1C242Cu;
    {
        const bool branch_taken_0x1c242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C242Cu;
            // 0x1c2430: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c242c) {
            ctx->pc = 0x1C2420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2420;
        }
    }
    ctx->pc = 0x1C2434u;
label_1c2434:
    // 0x1c2434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2438:
    // 0x1c2438: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1c2438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c243c:
    // 0x1c243c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c243cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2440:
    // 0x1c2440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c2444:
    // 0x1c2444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2448:
    // 0x1c2448: 0x3e00008  jr          $ra
label_1c244c:
    if (ctx->pc == 0x1C244Cu) {
        ctx->pc = 0x1C244Cu;
            // 0x1c244c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C2450u;
        goto label_fallthrough_0x1c2448;
    }
    ctx->pc = 0x1C2448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2448u;
            // 0x1c244c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c2448:
    ctx->pc = 0x1C2450u;
    ctx->pc = 0x1c2450u;
}
