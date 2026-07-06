#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183340
// Address: 0x183340 - 0x183570
void sub_00183340_0x183340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183340_0x183340");
#endif

    switch (ctx->pc) {
        case 0x1833b8u: goto label_1833b8;
        case 0x183404u: goto label_183404;
        case 0x183418u: goto label_183418;
        case 0x183434u: goto label_183434;
        default: break;
    }

    ctx->pc = 0x183340u;

    // 0x183340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x183344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18334c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183354: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x183358: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x183358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x18335c: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x18335Cu;
    {
        const bool branch_taken_0x18335c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18335Cu;
            // 0x183360: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18335c) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183364u;
    // 0x183364: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x183364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x183368: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x183368u;
    {
        const bool branch_taken_0x183368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183368) {
            ctx->pc = 0x18336Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183368u;
            // 0x18336c: 0x8e220490  lw          $v0, 0x490($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183384u;
            goto label_183384;
        }
    }
    ctx->pc = 0x183370u;
    // 0x183370: 0x8ca20494  lw          $v0, 0x494($a1)
    ctx->pc = 0x183370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1172)));
    // 0x183374: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x183374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x183378: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x183378u;
    {
        const bool branch_taken_0x183378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183378) {
            ctx->pc = 0x18337Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183378u;
            // 0x18337c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x183380u;
    // 0x183380: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x183380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_183384:
    // 0x183384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x183388: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x183388u;
    {
        const bool branch_taken_0x183388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183388) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183390u;
    // 0x183390: 0x8ca2048c  lw          $v0, 0x48C($a1)
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1164)));
    // 0x183394: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x183394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x183398: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x183398u;
    {
        const bool branch_taken_0x183398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183398) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x1833A0u;
    // 0x1833a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1833a4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1833a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1833a8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1833a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1833ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1833acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1833b0: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1833B0u;
    SET_GPR_U32(ctx, 31, 0x1833B8u);
    ctx->pc = 0x1833B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833B0u;
            // 0x1833b4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833B8u; }
        if (ctx->pc != 0x1833B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833B8u; }
        if (ctx->pc != 0x1833B8u) { return; }
    }
    ctx->pc = 0x1833B8u;
label_1833b8:
    // 0x1833b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1833bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1833bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1833c0: 0x0  nop
    ctx->pc = 0x1833c0u;
    // NOP
    // 0x1833c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1833c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1833c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1833C8u;
    {
        const bool branch_taken_0x1833c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1833c8) {
            ctx->pc = 0x1833CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1833C8u;
            // 0x1833cc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1833E0u;
            goto label_1833e0;
        }
    }
    ctx->pc = 0x1833D0u;
    // 0x1833d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1833d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1833d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1833d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1833d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1833D8u;
    {
        const bool branch_taken_0x1833d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833D8u;
            // 0x1833dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833d8) {
            ctx->pc = 0x1833F8u;
            goto label_1833f8;
        }
    }
    ctx->pc = 0x1833E0u;
label_1833e0:
    // 0x1833e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1833e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1833e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1833e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1833e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1833ec: 0x0  nop
    ctx->pc = 0x1833ecu;
    // NOP
    // 0x1833f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1833f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1833f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1833f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1833f8:
    // 0x1833f8: 0x92240204  lbu         $a0, 0x204($s1)
    ctx->pc = 0x1833f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1833fc: 0xc04f9a8  jal         func_13E6A0
    ctx->pc = 0x1833FCu;
    SET_GPR_U32(ctx, 31, 0x183404u);
    ctx->pc = 0x183400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833FCu;
            // 0x183400: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E6A0u;
    if (runtime->hasFunction(0x13E6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183404u; }
        if (ctx->pc != 0x183404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E6A0_0x13e6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183404u; }
        if (ctx->pc != 0x183404u) { return; }
    }
    ctx->pc = 0x183404u;
label_183404:
    // 0x183404: 0x962400ea  lhu         $a0, 0xEA($s1)
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x183408: 0x922500f7  lbu         $a1, 0xF7($s1)
    ctx->pc = 0x183408u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x18340c: 0x962600ec  lhu         $a2, 0xEC($s1)
    ctx->pc = 0x18340cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x183410: 0xc0592e4  jal         func_164B90
    ctx->pc = 0x183410u;
    SET_GPR_U32(ctx, 31, 0x183418u);
    ctx->pc = 0x183414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183410u;
            // 0x183414: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (runtime->hasFunction(0x164B90u)) {
        auto targetFn = runtime->lookupFunction(0x164B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183418u; }
        if (ctx->pc != 0x183418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B90_0x164b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183418u; }
        if (ctx->pc != 0x183418u) { return; }
    }
    ctx->pc = 0x183418u;
label_183418:
    // 0x183418: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x183418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18341c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x183420: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x183420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x183424: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x183424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x183428: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x183428u;
    {
        const bool branch_taken_0x183428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183428u;
            // 0x18342c: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183428) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183430u;
    // 0x183430: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_183434:
    // 0x183434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x183438: 0x2463e780  addiu       $v1, $v1, -0x1880
    ctx->pc = 0x183438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961024));
    // 0x18343c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x183440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183444: 0x400008  jr          $v0
    ctx->pc = 0x183444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18344Cu: goto label_18344c;
            case 0x1834ECu: goto label_1834ec;
            case 0x183504u: goto label_183504;
            case 0x18351Cu: goto label_18351c;
            case 0x183534u: goto label_183534;
            case 0x18354Cu: goto label_18354c;
            case 0x183554u: goto label_183554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18344Cu;
label_18344c:
    // 0x18344c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x18344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x183450: 0x50600041  beql        $v1, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x183450u;
    {
        const bool branch_taken_0x183450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183450) {
            ctx->pc = 0x183454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183450u;
            // 0x183454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x183458u;
    // 0x183458: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x183458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18345c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18345Cu;
    {
        const bool branch_taken_0x18345c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18345c) {
            ctx->pc = 0x1834E0u;
            goto label_1834e0;
        }
    }
    ctx->pc = 0x183464u;
    // 0x183464: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x183464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x183468: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x183468u;
    {
        const bool branch_taken_0x183468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183468) {
            ctx->pc = 0x18346Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183468u;
            // 0x18346c: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1834CCu;
            goto label_1834cc;
        }
    }
    ctx->pc = 0x183470u;
    // 0x183470: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x183474: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x183474u;
    {
        const bool branch_taken_0x183474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183474) {
            ctx->pc = 0x183478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183474u;
            // 0x183478: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1834B8u;
            goto label_1834b8;
        }
    }
    ctx->pc = 0x18347Cu;
    // 0x18347c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x183480: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183480u;
    {
        const bool branch_taken_0x183480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183480) {
            ctx->pc = 0x1834B4u;
            goto label_1834b4;
        }
    }
    ctx->pc = 0x183488u;
    // 0x183488: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x183488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18348c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18348Cu;
    {
        const bool branch_taken_0x18348c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18348c) {
            ctx->pc = 0x1834B4u;
            goto label_1834b4;
        }
    }
    ctx->pc = 0x183494u;
    // 0x183494: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x183498: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183498u;
    {
        const bool branch_taken_0x183498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183498) {
            ctx->pc = 0x1834B4u;
            goto label_1834b4;
        }
    }
    ctx->pc = 0x1834A0u;
    // 0x1834a0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1834a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1834A4u;
    {
        const bool branch_taken_0x1834a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1834a4) {
            ctx->pc = 0x1834B4u;
            goto label_1834b4;
        }
    }
    ctx->pc = 0x1834ACu;
    // 0x1834ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1834ACu;
    {
        const bool branch_taken_0x1834ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834ac) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x1834B4u;
label_1834b4:
    // 0x1834b4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1834b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1834b8:
    // 0x1834b8: 0x284101e0  slti        $at, $v0, 0x1E0
    ctx->pc = 0x1834b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)480) ? 1 : 0);
    // 0x1834bc: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1834BCu;
    {
        const bool branch_taken_0x1834bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834bc) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x1834C4u;
    // 0x1834c4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1834C4u;
    {
        const bool branch_taken_0x1834c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834C4u;
            // 0x1834c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834c4) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x1834CCu;
label_1834cc:
    // 0x1834cc: 0x2841018a  slti        $at, $v0, 0x18A
    ctx->pc = 0x1834ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)394) ? 1 : 0);
    // 0x1834d0: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1834D0u;
    {
        const bool branch_taken_0x1834d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834d0) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x1834D8u;
    // 0x1834d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1834D8u;
    {
        const bool branch_taken_0x1834d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834D8u;
            // 0x1834dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834d8) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x1834E0u;
label_1834e0:
    // 0x1834e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1834e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1834e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1834E4u;
    {
        const bool branch_taken_0x1834e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834e4) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x1834ECu;
label_1834ec:
    // 0x1834ec: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1834ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1834f0: 0x28410058  slti        $at, $v0, 0x58
    ctx->pc = 0x1834f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)88) ? 1 : 0);
    // 0x1834f4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1834F4u;
    {
        const bool branch_taken_0x1834f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834f4) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x1834FCu;
    // 0x1834fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1834FCu;
    {
        const bool branch_taken_0x1834fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834FCu;
            // 0x183500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834fc) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x183504u;
label_183504:
    // 0x183504: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x183508: 0x284100bf  slti        $at, $v0, 0xBF
    ctx->pc = 0x183508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)191) ? 1 : 0);
    // 0x18350c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x18350Cu;
    {
        const bool branch_taken_0x18350c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18350c) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183514u;
    // 0x183514: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x183514u;
    {
        const bool branch_taken_0x183514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183514u;
            // 0x183518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183514) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x18351Cu;
label_18351c:
    // 0x18351c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x183520: 0x28410120  slti        $at, $v0, 0x120
    ctx->pc = 0x183520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x183524: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x183524u;
    {
        const bool branch_taken_0x183524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183524) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x18352Cu;
    // 0x18352c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18352Cu;
    {
        const bool branch_taken_0x18352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18352Cu;
            // 0x183530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18352c) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x183534u;
label_183534:
    // 0x183534: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x183534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x183538: 0x284101e4  slti        $at, $v0, 0x1E4
    ctx->pc = 0x183538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)484) ? 1 : 0);
    // 0x18353c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18353Cu;
    {
        const bool branch_taken_0x18353c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18353c) {
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183544u;
    // 0x183544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183544u;
            // 0x183548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183544) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x18354Cu;
label_18354c:
    // 0x18354c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18354Cu;
    {
        const bool branch_taken_0x18354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18354Cu;
            // 0x183550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18354c) {
            ctx->pc = 0x183558u;
            goto label_183558;
        }
    }
    ctx->pc = 0x183554u;
label_183554:
    // 0x183554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183558:
    // 0x183558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x183558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18355c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18355cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183568: 0x3e00008  jr          $ra
    ctx->pc = 0x183568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183568u;
            // 0x18356c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183570u;
    ctx->pc = 0x183570u;
}
