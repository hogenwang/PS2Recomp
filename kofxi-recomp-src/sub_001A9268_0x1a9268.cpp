#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9268
// Address: 0x1a9268 - 0x1a9460
void sub_001A9268_0x1a9268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9268_0x1a9268");
#endif

    switch (ctx->pc) {
        case 0x1a9268u: goto label_1a9268;
        case 0x1a926cu: goto label_1a926c;
        case 0x1a9270u: goto label_1a9270;
        case 0x1a9274u: goto label_1a9274;
        case 0x1a9278u: goto label_1a9278;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a9280u: goto label_1a9280;
        case 0x1a9284u: goto label_1a9284;
        case 0x1a9288u: goto label_1a9288;
        case 0x1a928cu: goto label_1a928c;
        case 0x1a9290u: goto label_1a9290;
        case 0x1a9294u: goto label_1a9294;
        case 0x1a9298u: goto label_1a9298;
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92a0u: goto label_1a92a0;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92a8u: goto label_1a92a8;
        case 0x1a92acu: goto label_1a92ac;
        case 0x1a92b0u: goto label_1a92b0;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92bcu: goto label_1a92bc;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a92c4u: goto label_1a92c4;
        case 0x1a92c8u: goto label_1a92c8;
        case 0x1a92ccu: goto label_1a92cc;
        case 0x1a92d0u: goto label_1a92d0;
        case 0x1a92d4u: goto label_1a92d4;
        case 0x1a92d8u: goto label_1a92d8;
        case 0x1a92dcu: goto label_1a92dc;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92e4u: goto label_1a92e4;
        case 0x1a92e8u: goto label_1a92e8;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a92f0u: goto label_1a92f0;
        case 0x1a92f4u: goto label_1a92f4;
        case 0x1a92f8u: goto label_1a92f8;
        case 0x1a92fcu: goto label_1a92fc;
        case 0x1a9300u: goto label_1a9300;
        case 0x1a9304u: goto label_1a9304;
        case 0x1a9308u: goto label_1a9308;
        case 0x1a930cu: goto label_1a930c;
        case 0x1a9310u: goto label_1a9310;
        case 0x1a9314u: goto label_1a9314;
        case 0x1a9318u: goto label_1a9318;
        case 0x1a931cu: goto label_1a931c;
        case 0x1a9320u: goto label_1a9320;
        case 0x1a9324u: goto label_1a9324;
        case 0x1a9328u: goto label_1a9328;
        case 0x1a932cu: goto label_1a932c;
        case 0x1a9330u: goto label_1a9330;
        case 0x1a9334u: goto label_1a9334;
        case 0x1a9338u: goto label_1a9338;
        case 0x1a933cu: goto label_1a933c;
        case 0x1a9340u: goto label_1a9340;
        case 0x1a9344u: goto label_1a9344;
        case 0x1a9348u: goto label_1a9348;
        case 0x1a934cu: goto label_1a934c;
        case 0x1a9350u: goto label_1a9350;
        case 0x1a9354u: goto label_1a9354;
        case 0x1a9358u: goto label_1a9358;
        case 0x1a935cu: goto label_1a935c;
        case 0x1a9360u: goto label_1a9360;
        case 0x1a9364u: goto label_1a9364;
        case 0x1a9368u: goto label_1a9368;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9370u: goto label_1a9370;
        case 0x1a9374u: goto label_1a9374;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a9384u: goto label_1a9384;
        case 0x1a9388u: goto label_1a9388;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9418u: goto label_1a9418;
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9420u: goto label_1a9420;
        case 0x1a9424u: goto label_1a9424;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a942cu: goto label_1a942c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9434u: goto label_1a9434;
        case 0x1a9438u: goto label_1a9438;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9440u: goto label_1a9440;
        case 0x1a9444u: goto label_1a9444;
        case 0x1a9448u: goto label_1a9448;
        case 0x1a944cu: goto label_1a944c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9454u: goto label_1a9454;
        case 0x1a9458u: goto label_1a9458;
        case 0x1a945cu: goto label_1a945c;
        default: break;
    }

    ctx->pc = 0x1a9268u;

label_1a9268:
    // 0x1a9268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a926c:
    // 0x1a926c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a9270:
    // 0x1a9270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9274:
    // 0x1a9274: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1a9278:
    if (ctx->pc == 0x1A9278u) {
        ctx->pc = 0x1A9278u;
            // 0x1a9278: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1A927Cu;
        goto label_1a927c;
    }
    ctx->pc = 0x1A9274u;
    {
        const bool branch_taken_0x1a9274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9274u;
            // 0x1a9278: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9274) {
            ctx->pc = 0x1A92A8u;
            goto label_1a92a8;
        }
    }
    ctx->pc = 0x1A927Cu;
label_1a927c:
    // 0x1a927c: 0xc06b48e  jal         func_1AD238
label_1a9280:
    if (ctx->pc == 0x1A9280u) {
        ctx->pc = 0x1A9284u;
        goto label_1a9284;
    }
    ctx->pc = 0x1A927Cu;
    SET_GPR_U32(ctx, 31, 0x1A9284u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9284u; }
        if (ctx->pc != 0x1A9284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9284u; }
        if (ctx->pc != 0x1A9284u) { return; }
    }
    ctx->pc = 0x1A9284u;
label_1a9284:
    // 0x1a9284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9288:
    // 0x1a9288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a928c:
    // 0x1a928c: 0xc049cb6  jal         func_1272D8
label_1a9290:
    if (ctx->pc == 0x1A9290u) {
        ctx->pc = 0x1A9290u;
            // 0x1a9290: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x1A9294u;
        goto label_1a9294;
    }
    ctx->pc = 0x1A928Cu;
    SET_GPR_U32(ctx, 31, 0x1A9294u);
    ctx->pc = 0x1A9290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A928Cu;
            // 0x1a9290: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9294u; }
        if (ctx->pc != 0x1A9294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9294u; }
        if (ctx->pc != 0x1A9294u) { return; }
    }
    ctx->pc = 0x1A9294u;
label_1a9294:
    // 0x1a9294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9298:
    // 0x1a9298: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a9298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a929c:
    // 0x1a929c: 0x806b494  j           func_1AD250
label_1a92a0:
    if (ctx->pc == 0x1A92A0u) {
        ctx->pc = 0x1A92A0u;
            // 0x1a92a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A92A4u;
        goto label_1a92a4;
    }
    ctx->pc = 0x1A929Cu;
    ctx->pc = 0x1A92A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A929Cu;
            // 0x1a92a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A92A4u;
label_1a92a4:
    // 0x1a92a4: 0x0  nop
    ctx->pc = 0x1a92a4u;
    // NOP
label_1a92a8:
    // 0x1a92a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a92a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a92ac:
    // 0x1a92ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a92acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a92b0:
    // 0x1a92b0: 0x3e00008  jr          $ra
label_1a92b4:
    if (ctx->pc == 0x1A92B4u) {
        ctx->pc = 0x1A92B4u;
            // 0x1a92b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A92B8u;
        goto label_1a92b8;
    }
    ctx->pc = 0x1A92B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92B0u;
            // 0x1a92b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A92B8u;
label_1a92b8:
    // 0x1a92b8: 0x3e00008  jr          $ra
label_1a92bc:
    if (ctx->pc == 0x1A92BCu) {
        ctx->pc = 0x1A92BCu;
            // 0x1a92bc: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = 0x1A92C0u;
        goto label_1a92c0;
    }
    ctx->pc = 0x1A92B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92B8u;
            // 0x1a92bc: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A92C0u;
label_1a92c0:
    // 0x1a92c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a92c4:
    // 0x1a92c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a92c8:
    // 0x1a92c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a92c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a92cc:
    // 0x1a92cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a92ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a92d0:
    // 0x1a92d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a92d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a92d4:
    // 0x1a92d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a92d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a92d8:
    // 0x1a92d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a92d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1a92dc:
    // 0x1a92dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a92dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a92e0:
    // 0x1a92e0: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1a92e4:
    // 0x1a92e4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1a92e8:
    if (ctx->pc == 0x1A92E8u) {
        ctx->pc = 0x1A92E8u;
            // 0x1a92e8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x1A92ECu;
        goto label_1a92ec;
    }
    ctx->pc = 0x1A92E4u;
    {
        const bool branch_taken_0x1a92e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A92E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92E4u;
            // 0x1a92e8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92e4) {
            ctx->pc = 0x1A930Cu;
            goto label_1a930c;
        }
    }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1a92f0:
    // 0x1a92f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1a92f4:
    // 0x1a92f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a92f8:
    // 0x1a92f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a92fc:
    // 0x1a92fc: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1a92fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1a9300:
    // 0x1a9300: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a9300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9304:
    // 0x1a9304: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a9308:
    if (ctx->pc == 0x1A9308u) {
        ctx->pc = 0x1A9308u;
            // 0x1a9308: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x1A930Cu;
        goto label_1a930c;
    }
    ctx->pc = 0x1A9304u;
    {
        const bool branch_taken_0x1a9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9304u;
            // 0x1a9308: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9304) {
            ctx->pc = 0x1A92F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a92f0;
        }
    }
    ctx->pc = 0x1A930Cu;
label_1a930c:
    // 0x1a930c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1a930cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a9310:
    // 0x1a9310: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1a9310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1a9314:
    // 0x1a9314: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_1a9318:
    if (ctx->pc == 0x1A9318u) {
        ctx->pc = 0x1A9318u;
            // 0x1a9318: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A931Cu;
        goto label_1a931c;
    }
    ctx->pc = 0x1A9314u;
    {
        const bool branch_taken_0x1a9314 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A9318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9314u;
            // 0x1a9318: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9314) {
            ctx->pc = 0x1A93A8u;
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A931Cu;
label_1a931c:
    // 0x1a931c: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a9320:
    // 0x1a9320: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1a9320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a9324:
    // 0x1a9324: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a9324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1a9328:
    // 0x1a9328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a932c:
    // 0x1a932c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9330:
    // 0x1a9330: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a9334:
    // 0x1a9334: 0x40f809  jalr        $v0
label_1a9338:
    if (ctx->pc == 0x1A9338u) {
        ctx->pc = 0x1A9338u;
            // 0x1a9338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A933Cu;
        goto label_1a933c;
    }
    ctx->pc = 0x1A9334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A933Cu);
        ctx->pc = 0x1A9338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9334u;
            // 0x1a9338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A933Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A933Cu; }
            if (ctx->pc != 0x1A933Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A933Cu;
label_1a933c:
    // 0x1a933c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9340:
    // 0x1a9340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9344:
    // 0x1a9344: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a9348:
    // 0x1a9348: 0x40f809  jalr        $v0
label_1a934c:
    if (ctx->pc == 0x1A934Cu) {
        ctx->pc = 0x1A934Cu;
            // 0x1a934c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9350u;
        goto label_1a9350;
    }
    ctx->pc = 0x1A9348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9350u);
        ctx->pc = 0x1A934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9348u;
            // 0x1a934c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9350u; }
            if (ctx->pc != 0x1A9350u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9350u;
label_1a9350:
    // 0x1a9350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9354:
    // 0x1a9354: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a9354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9358:
    // 0x1a9358: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a9358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a935c:
    // 0x1a935c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a9360:
    // 0x1a9360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9364:
    // 0x1a9364: 0x40f809  jalr        $v0
label_1a9368:
    if (ctx->pc == 0x1A9368u) {
        ctx->pc = 0x1A9368u;
            // 0x1a9368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A936Cu;
        goto label_1a936c;
    }
    ctx->pc = 0x1A9364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A936Cu);
        ctx->pc = 0x1A9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9364u;
            // 0x1a9368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A936Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A936Cu; }
            if (ctx->pc != 0x1A936Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A936Cu;
label_1a936c:
    // 0x1a936c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9370:
    // 0x1a9370: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a9370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9374:
    // 0x1a9374: 0xc049cb6  jal         func_1272D8
label_1a9378:
    if (ctx->pc == 0x1A9378u) {
        ctx->pc = 0x1A9378u;
            // 0x1a9378: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A937Cu;
        goto label_1a937c;
    }
    ctx->pc = 0x1A9374u;
    SET_GPR_U32(ctx, 31, 0x1A937Cu);
    ctx->pc = 0x1A9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9374u;
            // 0x1a9378: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A937Cu; }
        if (ctx->pc != 0x1A937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A937Cu; }
        if (ctx->pc != 0x1A937Cu) { return; }
    }
    ctx->pc = 0x1A937Cu;
label_1a937c:
    // 0x1a937c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9380:
    // 0x1a9380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9384:
    // 0x1a9384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9388:
    // 0x1a9388: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a938c:
    // 0x1a938c: 0x40f809  jalr        $v0
label_1a9390:
    if (ctx->pc == 0x1A9390u) {
        ctx->pc = 0x1A9390u;
            // 0x1a9390: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9394u;
        goto label_1a9394;
    }
    ctx->pc = 0x1A938Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9394u);
        ctx->pc = 0x1A9390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A938Cu;
            // 0x1a9390: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9394u; }
            if (ctx->pc != 0x1A9394u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9394u;
label_1a9394:
    // 0x1a9394: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1a9398:
    // 0x1a9398: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a9398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a939c:
    // 0x1a939c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1a93a0:
    if (ctx->pc == 0x1A93A0u) {
        ctx->pc = 0x1A93A0u;
            // 0x1a93a0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x1A93A4u;
        goto label_1a93a4;
    }
    ctx->pc = 0x1A939Cu;
    {
        const bool branch_taken_0x1a939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A939Cu;
            // 0x1a93a0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a939c) {
            ctx->pc = 0x1A9320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9320;
        }
    }
    ctx->pc = 0x1A93A4u;
label_1a93a4:
    // 0x1a93a4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a93a8:
    // 0x1a93a8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_1a93ac:
    if (ctx->pc == 0x1A93ACu) {
        ctx->pc = 0x1A93ACu;
            // 0x1a93ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A93B0u;
        goto label_1a93b0;
    }
    ctx->pc = 0x1A93A8u;
    {
        const bool branch_taken_0x1a93a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93A8u;
            // 0x1a93ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93a8) {
            ctx->pc = 0x1A9438u;
            goto label_1a9438;
        }
    }
    ctx->pc = 0x1A93B0u;
label_1a93b0:
    // 0x1a93b0: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x1a93b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1a93b4:
    // 0x1a93b4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1a93b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a93b8:
    // 0x1a93b8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a93b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1a93bc:
    // 0x1a93bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a93bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a93c0:
    // 0x1a93c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a93c4:
    // 0x1a93c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a93c8:
    // 0x1a93c8: 0x40f809  jalr        $v0
label_1a93cc:
    if (ctx->pc == 0x1A93CCu) {
        ctx->pc = 0x1A93CCu;
            // 0x1a93cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A93D0u;
        goto label_1a93d0;
    }
    ctx->pc = 0x1A93C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A93D0u);
        ctx->pc = 0x1A93CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93C8u;
            // 0x1a93cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A93D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D0u; }
            if (ctx->pc != 0x1A93D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A93D0u;
label_1a93d0:
    // 0x1a93d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a93d4:
    // 0x1a93d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a93d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a93d8:
    // 0x1a93d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a93dc:
    // 0x1a93dc: 0x40f809  jalr        $v0
label_1a93e0:
    if (ctx->pc == 0x1A93E0u) {
        ctx->pc = 0x1A93E0u;
            // 0x1a93e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A93E4u;
        goto label_1a93e4;
    }
    ctx->pc = 0x1A93DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A93E4u);
        ctx->pc = 0x1A93E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93DCu;
            // 0x1a93e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A93E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A93E4u; }
            if (ctx->pc != 0x1A93E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A93E4u;
label_1a93e4:
    // 0x1a93e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a93e8:
    // 0x1a93e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a93e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a93ec:
    // 0x1a93ec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a93ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a93f0:
    // 0x1a93f0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a93f4:
    // 0x1a93f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a93f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a93f8:
    // 0x1a93f8: 0x40f809  jalr        $v0
label_1a93fc:
    if (ctx->pc == 0x1A93FCu) {
        ctx->pc = 0x1A93FCu;
            // 0x1a93fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9400u;
        goto label_1a9400;
    }
    ctx->pc = 0x1A93F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9400u);
        ctx->pc = 0x1A93FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93F8u;
            // 0x1a93fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
            if (ctx->pc != 0x1A9400u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9404:
    // 0x1a9404: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9408:
    // 0x1a9408: 0xc049cb6  jal         func_1272D8
label_1a940c:
    if (ctx->pc == 0x1A940Cu) {
        ctx->pc = 0x1A940Cu;
            // 0x1a940c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A9410u;
        goto label_1a9410;
    }
    ctx->pc = 0x1A9408u;
    SET_GPR_U32(ctx, 31, 0x1A9410u);
    ctx->pc = 0x1A940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9408u;
            // 0x1a940c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9410u; }
        if (ctx->pc != 0x1A9410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9410u; }
        if (ctx->pc != 0x1A9410u) { return; }
    }
    ctx->pc = 0x1A9410u;
label_1a9410:
    // 0x1a9410: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1a9410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9414:
    // 0x1a9414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9418:
    // 0x1a9418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a941c:
    // 0x1a941c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1a9420:
    // 0x1a9420: 0x60f809  jalr        $v1
label_1a9424:
    if (ctx->pc == 0x1A9424u) {
        ctx->pc = 0x1A9424u;
            // 0x1a9424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9428u;
        goto label_1a9428;
    }
    ctx->pc = 0x1A9420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9428u);
        ctx->pc = 0x1A9424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9420u;
            // 0x1a9424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9428u; }
            if (ctx->pc != 0x1A9428u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9428u;
label_1a9428:
    // 0x1a9428: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1a9428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1a942c:
    // 0x1a942c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a942cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9430:
    // 0x1a9430: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_1a9434:
    if (ctx->pc == 0x1A9434u) {
        ctx->pc = 0x1A9434u;
            // 0x1a9434: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1A9438u;
        goto label_1a9438;
    }
    ctx->pc = 0x1A9430u;
    {
        const bool branch_taken_0x1a9430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9430) {
            ctx->pc = 0x1A9434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9430u;
            // 0x1a9434: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A93B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a93b8;
        }
    }
    ctx->pc = 0x1A9438u;
label_1a9438:
    // 0x1a9438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a943c:
    // 0x1a943c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a943cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9440:
    // 0x1a9440: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1a9440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a9444:
    // 0x1a9444: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a9444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9448:
    // 0x1a9448: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a944c:
    // 0x1a944c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a944cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9450:
    // 0x1a9450: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9454:
    // 0x1a9454: 0x3e00008  jr          $ra
label_1a9458:
    if (ctx->pc == 0x1A9458u) {
        ctx->pc = 0x1A9458u;
            // 0x1a9458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A945Cu;
        goto label_1a945c;
    }
    ctx->pc = 0x1A9454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9454u;
            // 0x1a9458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A945Cu;
label_1a945c:
    // 0x1a945c: 0x0  nop
    ctx->pc = 0x1a945cu;
    // NOP
    ctx->pc = 0x1a9460u;
}
