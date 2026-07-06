#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00247298
// Address: 0x247298 - 0x2473f8
void sub_00247298_0x247298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247298_0x247298");
#endif

    switch (ctx->pc) {
        case 0x247298u: goto label_247298;
        case 0x24729cu: goto label_24729c;
        case 0x2472a0u: goto label_2472a0;
        case 0x2472a4u: goto label_2472a4;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472acu: goto label_2472ac;
        case 0x2472b0u: goto label_2472b0;
        case 0x2472b4u: goto label_2472b4;
        case 0x2472b8u: goto label_2472b8;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472c4u: goto label_2472c4;
        case 0x2472c8u: goto label_2472c8;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472d4u: goto label_2472d4;
        case 0x2472d8u: goto label_2472d8;
        case 0x2472dcu: goto label_2472dc;
        case 0x2472e0u: goto label_2472e0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472e8u: goto label_2472e8;
        case 0x2472ecu: goto label_2472ec;
        case 0x2472f0u: goto label_2472f0;
        case 0x2472f4u: goto label_2472f4;
        case 0x2472f8u: goto label_2472f8;
        case 0x2472fcu: goto label_2472fc;
        case 0x247300u: goto label_247300;
        case 0x247304u: goto label_247304;
        case 0x247308u: goto label_247308;
        case 0x24730cu: goto label_24730c;
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        default: break;
    }

    ctx->pc = 0x247298u;

label_247298:
    // 0x247298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x247298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_24729c:
    // 0x24729c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2472a0:
    // 0x2472a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2472a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2472a4:
    // 0x2472a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2472a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2472a8:
    // 0x2472a8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2472a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2472ac:
    // 0x2472ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2472acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2472b0:
    // 0x2472b0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2472b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2472b4:
    // 0x2472b4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2472b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2472b8:
    // 0x2472b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2472b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2472bc:
    // 0x2472bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2472bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2472c0:
    // 0x2472c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2472c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2472c4:
    // 0x2472c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2472c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2472c8:
    // 0x2472c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2472c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2472cc:
    // 0x2472cc: 0xc08a946  jal         func_22A518
label_2472d0:
    if (ctx->pc == 0x2472D0u) {
        ctx->pc = 0x2472D0u;
            // 0x2472d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2472D4u;
        goto label_2472d4;
    }
    ctx->pc = 0x2472CCu;
    SET_GPR_U32(ctx, 31, 0x2472D4u);
    ctx->pc = 0x2472D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472CCu;
            // 0x2472d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A518u;
    if (runtime->hasFunction(0x22A518u)) {
        auto targetFn = runtime->lookupFunction(0x22A518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472D4u; }
        if (ctx->pc != 0x2472D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A518_0x22a518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472D4u; }
        if (ctx->pc != 0x2472D4u) { return; }
    }
    ctx->pc = 0x2472D4u;
label_2472d4:
    // 0x2472d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2472d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2472d8:
    // 0x2472d8: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
label_2472dc:
    if (ctx->pc == 0x2472DCu) {
        ctx->pc = 0x2472DCu;
            // 0x2472dc: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x2472E0u;
        goto label_2472e0;
    }
    ctx->pc = 0x2472D8u;
    {
        const bool branch_taken_0x2472d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2472D8u;
            // 0x2472dc: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472d8) {
            ctx->pc = 0x2473D0u;
            goto label_2473d0;
        }
    }
    ctx->pc = 0x2472E0u;
label_2472e0:
    // 0x2472e0: 0x92450039  lbu         $a1, 0x39($s2)
    ctx->pc = 0x2472e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_2472e4:
    // 0x2472e4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2472e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2472e8:
    // 0x2472e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2472ec:
    // 0x2472ec: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x2472ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_2472f0:
    // 0x2472f0: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x2472f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
label_2472f4:
    // 0x2472f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2472f8:
    // 0x2472f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2472fc:
    // 0x2472fc: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x2472fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_247300:
    // 0x247300: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_247304:
    // 0x247304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_247308:
    // 0x247308: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x247308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24730c:
    // 0x24730c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x24730cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_247310:
    // 0x247310: 0xc048c96  jal         func_123258
label_247314:
    if (ctx->pc == 0x247314u) {
        ctx->pc = 0x247314u;
            // 0x247314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247318u;
        goto label_247318;
    }
    ctx->pc = 0x247310u;
    SET_GPR_U32(ctx, 31, 0x247318u);
    ctx->pc = 0x247314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247310u;
            // 0x247314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247318u; }
        if (ctx->pc != 0x247318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247318u; }
        if (ctx->pc != 0x247318u) { return; }
    }
    ctx->pc = 0x247318u;
label_247318:
    // 0x247318: 0xc08a262  jal         func_228988
label_24731c:
    if (ctx->pc == 0x24731Cu) {
        ctx->pc = 0x24731Cu;
            // 0x24731c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x247320u;
        goto label_247320;
    }
    ctx->pc = 0x247318u;
    SET_GPR_U32(ctx, 31, 0x247320u);
    ctx->pc = 0x24731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247318u;
            // 0x24731c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247320u; }
        if (ctx->pc != 0x247320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247320u; }
        if (ctx->pc != 0x247320u) { return; }
    }
    ctx->pc = 0x247320u;
label_247320:
    // 0x247320: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_247324:
    // 0x247324: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x247324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_247328:
    // 0x247328: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x247328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_24732c:
    // 0x24732c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_247330:
    // 0x247330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247334:
    // 0x247334: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x247334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_247338:
    // 0x247338: 0xa2050005  sb          $a1, 0x5($s0)
    ctx->pc = 0x247338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 5));
label_24733c:
    // 0x24733c: 0xc08a262  jal         func_228988
label_247340:
    if (ctx->pc == 0x247340u) {
        ctx->pc = 0x247340u;
            // 0x247340: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x247344u;
        goto label_247344;
    }
    ctx->pc = 0x24733Cu;
    SET_GPR_U32(ctx, 31, 0x247344u);
    ctx->pc = 0x247340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24733Cu;
            // 0x247340: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247344u; }
        if (ctx->pc != 0x247344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247344u; }
        if (ctx->pc != 0x247344u) { return; }
    }
    ctx->pc = 0x247344u;
label_247344:
    // 0x247344: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x247344u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_247348:
    // 0x247348: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_24734c:
    // 0x24734c: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x24734cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_247350:
    // 0x247350: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x247350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_247354:
    // 0x247354: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x247354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_247358:
    // 0x247358: 0xc08b4f8  jal         func_22D3E0
label_24735c:
    if (ctx->pc == 0x24735Cu) {
        ctx->pc = 0x24735Cu;
            // 0x24735c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247360u;
        goto label_247360;
    }
    ctx->pc = 0x247358u;
    SET_GPR_U32(ctx, 31, 0x247360u);
    ctx->pc = 0x24735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247358u;
            // 0x24735c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247360u; }
        if (ctx->pc != 0x247360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247360u; }
        if (ctx->pc != 0x247360u) { return; }
    }
    ctx->pc = 0x247360u;
label_247360:
    // 0x247360: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x247360u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_247364:
    // 0x247364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x247364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247368:
    // 0x247368: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x247368u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_24736c:
    // 0x24736c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_247370:
    // 0x247370: 0xc08b4f8  jal         func_22D3E0
label_247374:
    if (ctx->pc == 0x247374u) {
        ctx->pc = 0x247374u;
            // 0x247374: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x247378u;
        goto label_247378;
    }
    ctx->pc = 0x247370u;
    SET_GPR_U32(ctx, 31, 0x247378u);
    ctx->pc = 0x247374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247370u;
            // 0x247374: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247378u; }
        if (ctx->pc != 0x247378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247378u; }
        if (ctx->pc != 0x247378u) { return; }
    }
    ctx->pc = 0x247378u;
label_247378:
    // 0x247378: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x247378u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_24737c:
    // 0x24737c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247380:
    // 0x247380: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x247380u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_247384:
    // 0x247384: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x247384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_247388:
    // 0x247388: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_24738c:
    // 0x24738c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_247390:
    // 0x247390: 0xc08b4f8  jal         func_22D3E0
label_247394:
    if (ctx->pc == 0x247394u) {
        ctx->pc = 0x247394u;
            // 0x247394: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x247398u;
        goto label_247398;
    }
    ctx->pc = 0x247390u;
    SET_GPR_U32(ctx, 31, 0x247398u);
    ctx->pc = 0x247394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247390u;
            // 0x247394: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247398u; }
        if (ctx->pc != 0x247398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247398u; }
        if (ctx->pc != 0x247398u) { return; }
    }
    ctx->pc = 0x247398u;
label_247398:
    // 0x247398: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x247398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_24739c:
    // 0x24739c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2473a0:
    // 0x2473a0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2473a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2473a4:
    // 0x2473a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2473a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2473a8:
    // 0x2473a8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2473a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_2473ac:
    // 0x2473ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2473acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2473b0:
    // 0x2473b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2473b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2473b4:
    // 0x2473b4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2473b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2473b8:
    // 0x2473b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2473b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2473bc:
    // 0x2473bc: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2473bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2473c0:
    // 0x2473c0: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2473c4:
    // 0x2473c4: 0x40f809  jalr        $v0
label_2473c8:
    if (ctx->pc == 0x2473C8u) {
        ctx->pc = 0x2473C8u;
            // 0x2473c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2473CCu;
        goto label_2473cc;
    }
    ctx->pc = 0x2473C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2473CCu);
        ctx->pc = 0x2473C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2473C4u;
            // 0x2473c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2473CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2473CCu; }
            if (ctx->pc != 0x2473CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2473CCu;
label_2473cc:
    // 0x2473cc: 0x0  nop
    ctx->pc = 0x2473ccu;
    // NOP
label_2473d0:
    // 0x2473d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2473d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2473d4:
    // 0x2473d4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2473d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2473d8:
    // 0x2473d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2473d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2473dc:
    // 0x2473dc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2473dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2473e0:
    // 0x2473e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2473e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2473e4:
    // 0x2473e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2473e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2473e8:
    // 0x2473e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2473e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2473ec:
    // 0x2473ec: 0x3e00008  jr          $ra
label_2473f0:
    if (ctx->pc == 0x2473F0u) {
        ctx->pc = 0x2473F0u;
            // 0x2473f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2473F4u;
        goto label_2473f4;
    }
    ctx->pc = 0x2473ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2473F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2473ECu;
            // 0x2473f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2473F4u;
label_2473f4:
    // 0x2473f4: 0x0  nop
    ctx->pc = 0x2473f4u;
    // NOP
    ctx->pc = 0x2473f8u;
}
