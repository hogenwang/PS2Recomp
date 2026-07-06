#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001662D0
// Address: 0x1662d0 - 0x1664f0
void sub_001662D0_0x1662d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001662D0_0x1662d0");
#endif

    switch (ctx->pc) {
        case 0x166310u: goto label_166310;
        case 0x166400u: goto label_166400;
        default: break;
    }

    ctx->pc = 0x1662d0u;

    // 0x1662d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1662d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1662d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1662d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1662d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1662d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1662dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1662dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1662e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1662e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1662e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1662e8: 0x908203c2  lbu         $v0, 0x3C2($a0)
    ctx->pc = 0x1662e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 962)));
    // 0x1662ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1662ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1662f0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1662F0u;
    {
        const bool branch_taken_0x1662f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662F0u;
            // 0x1662f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662f0) {
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x1662F8u;
    // 0x1662f8: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x1662f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x1662fc: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x1662fcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x166300: 0x964703ba  lhu         $a3, 0x3BA($s2)
    ctx->pc = 0x166300u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 954)));
    // 0x166304: 0x8e4800f8  lw          $t0, 0xF8($s2)
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x166308: 0xc059f80  jal         func_167E00
    ctx->pc = 0x166308u;
    SET_GPR_U32(ctx, 31, 0x166310u);
    ctx->pc = 0x16630Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166308u;
            // 0x16630c: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (runtime->hasFunction(0x167E00u)) {
        auto targetFn = runtime->lookupFunction(0x167E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166310u; }
        if (ctx->pc != 0x166310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167E00_0x167e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166310u; }
        if (ctx->pc != 0x166310u) { return; }
    }
    ctx->pc = 0x166310u;
label_166310:
    // 0x166310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x166310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166314: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x166318: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166318u;
    {
        const bool branch_taken_0x166318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166318) {
            ctx->pc = 0x16631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166318u;
            // 0x16631c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166328u;
            goto label_166328;
        }
    }
    ctx->pc = 0x166320u;
    // 0x166320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x166320u;
    {
        const bool branch_taken_0x166320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166320u;
            // 0x166324: 0x924303c0  lbu         $v1, 0x3C0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166320) {
            ctx->pc = 0x16633Cu;
            goto label_16633c;
        }
    }
    ctx->pc = 0x166328u;
label_166328:
    // 0x166328: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166328u;
    {
        const bool branch_taken_0x166328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166328) {
            ctx->pc = 0x16632Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166328u;
            // 0x16632c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x166330u;
    // 0x166330: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x166330u;
    {
        const bool branch_taken_0x166330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166330) {
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x166338u;
label_166338:
    // 0x166338: 0x924303c0  lbu         $v1, 0x3C0($s2)
    ctx->pc = 0x166338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 960)));
label_16633c:
    // 0x16633c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x16633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x166340: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166340u;
    {
        const bool branch_taken_0x166340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166340) {
            ctx->pc = 0x166344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166340u;
            // 0x166344: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166358u;
            goto label_166358;
        }
    }
    ctx->pc = 0x166348u;
    // 0x166348: 0x26220230  addiu       $v0, $s1, 0x230
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16634c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x16634cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166350: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x166350u;
    {
        const bool branch_taken_0x166350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166350u;
            // 0x166354: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166350) {
            ctx->pc = 0x1663CCu;
            goto label_1663cc;
        }
    }
    ctx->pc = 0x166358u;
label_166358:
    // 0x166358: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x166358u;
    {
        const bool branch_taken_0x166358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166358) {
            ctx->pc = 0x16635Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166358u;
            // 0x16635c: 0x864204da  lh          $v0, 0x4DA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1242)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1663D0u;
            goto label_1663d0;
        }
    }
    ctx->pc = 0x166360u;
    // 0x166360: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x166364: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x166364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x166368: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x166368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x16636c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x16636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x166370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166374: 0x0  nop
    ctx->pc = 0x166374u;
    // NOP
    // 0x166378: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16637c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x16637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x166380: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x166380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166384: 0x0  nop
    ctx->pc = 0x166384u;
    // NOP
    // 0x166388: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x166388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16638c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16638cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166390: 0x0  nop
    ctx->pc = 0x166390u;
    // NOP
    // 0x166394: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x166394u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x166398: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x166398u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16639c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x16639cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1663a0: 0x0  nop
    ctx->pc = 0x1663a0u;
    // NOP
    // 0x1663a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1663a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1663a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1663a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1663ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1663acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1663b0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1663b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1663b4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1663b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1663b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1663b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1663bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1663bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1663c0: 0x0  nop
    ctx->pc = 0x1663c0u;
    // NOP
    // 0x1663c4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1663c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1663c8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1663c8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1663cc:
    // 0x1663cc: 0x864204da  lh          $v0, 0x4DA($s2)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1242)));
label_1663d0:
    // 0x1663d0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1663d4: 0xa64204da  sh          $v0, 0x4DA($s2)
    ctx->pc = 0x1663d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1242), (uint16_t)GPR_U32(ctx, 2));
    // 0x1663d8: 0x924203c2  lbu         $v0, 0x3C2($s2)
    ctx->pc = 0x1663d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 962)));
    // 0x1663dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1663dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1663e0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1663E0u;
    {
        const bool branch_taken_0x1663e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663E0u;
            // 0x1663e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e0) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x1663E8u;
    // 0x1663e8: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x1663e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x1663ec: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x1663ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1663f0: 0x964703ba  lhu         $a3, 0x3BA($s2)
    ctx->pc = 0x1663f0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 954)));
    // 0x1663f4: 0x8e4800f8  lw          $t0, 0xF8($s2)
    ctx->pc = 0x1663f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x1663f8: 0xc059f80  jal         func_167E00
    ctx->pc = 0x1663F8u;
    SET_GPR_U32(ctx, 31, 0x166400u);
    ctx->pc = 0x1663FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1663F8u;
            // 0x1663fc: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (runtime->hasFunction(0x167E00u)) {
        auto targetFn = runtime->lookupFunction(0x167E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166400u; }
        if (ctx->pc != 0x166400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167E00_0x167e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166400u; }
        if (ctx->pc != 0x166400u) { return; }
    }
    ctx->pc = 0x166400u;
label_166400:
    // 0x166400: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x166400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166404: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x166404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x166408: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166408u;
    {
        const bool branch_taken_0x166408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166408) {
            ctx->pc = 0x16640Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166408u;
            // 0x16640c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166418u;
            goto label_166418;
        }
    }
    ctx->pc = 0x166410u;
    // 0x166410: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166410u;
    {
        const bool branch_taken_0x166410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166410u;
            // 0x166414: 0x24100070  addiu       $s0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166410) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x166418u;
label_166418:
    // 0x166418: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166418u;
    {
        const bool branch_taken_0x166418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166418) {
            ctx->pc = 0x16641Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166418u;
            // 0x16641c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x166420u;
    // 0x166420: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x166420u;
    {
        const bool branch_taken_0x166420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166420u;
            // 0x166424: 0x24100070  addiu       $s0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166420) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x166428u;
label_166428:
    // 0x166428: 0x924303c1  lbu         $v1, 0x3C1($s2)
    ctx->pc = 0x166428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 961)));
    // 0x16642c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x166430: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166430u;
    {
        const bool branch_taken_0x166430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166430) {
            ctx->pc = 0x166434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166430u;
            // 0x166434: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166448u;
            goto label_166448;
        }
    }
    ctx->pc = 0x166438u;
    // 0x166438: 0x260201c0  addiu       $v0, $s0, 0x1C0
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x16643c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x16643cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166440: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x166440u;
    {
        const bool branch_taken_0x166440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166440u;
            // 0x166444: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166440) {
            ctx->pc = 0x1664BCu;
            goto label_1664bc;
        }
    }
    ctx->pc = 0x166448u;
label_166448:
    // 0x166448: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x166448u;
    {
        const bool branch_taken_0x166448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166448) {
            ctx->pc = 0x16644Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166448u;
            // 0x16644c: 0x864304e0  lh          $v1, 0x4E0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1664C0u;
            goto label_1664c0;
        }
    }
    ctx->pc = 0x166450u;
    // 0x166450: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x166454: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x166454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x166458: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x166458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x16645c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x166460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166464: 0x0  nop
    ctx->pc = 0x166464u;
    // NOP
    // 0x166468: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16646c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x16646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x166470: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x166470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166474: 0x0  nop
    ctx->pc = 0x166474u;
    // NOP
    // 0x166478: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x166478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16647c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16647cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166480: 0x0  nop
    ctx->pc = 0x166480u;
    // NOP
    // 0x166484: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x166484u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x166488: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x166488u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16648c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16648cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166490: 0x0  nop
    ctx->pc = 0x166490u;
    // NOP
    // 0x166494: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x166494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x166498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16649c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16649cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1664a0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1664a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1664a4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1664a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1664a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1664a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1664ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1664acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1664b0: 0x0  nop
    ctx->pc = 0x1664b0u;
    // NOP
    // 0x1664b4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x1664b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1664b8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1664b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_1664bc:
    // 0x1664bc: 0x864304e0  lh          $v1, 0x4E0($s2)
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1248)));
label_1664c0:
    // 0x1664c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1664c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664c4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1664c8: 0xa64304e0  sh          $v1, 0x4E0($s2)
    ctx->pc = 0x1664c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1248), (uint16_t)GPR_U32(ctx, 3));
    // 0x1664cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1664ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1664d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1664d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1664d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1664d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1664d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1664d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1664dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1664DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1664E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664DCu;
            // 0x1664e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1664E4u;
    // 0x1664e4: 0x0  nop
    ctx->pc = 0x1664e4u;
    // NOP
    // 0x1664e8: 0x0  nop
    ctx->pc = 0x1664e8u;
    // NOP
    // 0x1664ec: 0x0  nop
    ctx->pc = 0x1664ecu;
    // NOP
    ctx->pc = 0x1664f0u;
}
