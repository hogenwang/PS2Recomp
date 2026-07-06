#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030B260
// Address: 0x30b260 - 0x30b940
void sub_0030B260_0x30b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B260_0x30b260");
#endif

    switch (ctx->pc) {
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b3c8u: goto label_30b3c8;
        case 0x30b3d0u: goto label_30b3d0;
        case 0x30b3e4u: goto label_30b3e4;
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b408u: goto label_30b408;
        case 0x30b424u: goto label_30b424;
        case 0x30b440u: goto label_30b440;
        case 0x30b45cu: goto label_30b45c;
        case 0x30b470u: goto label_30b470;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4c4u: goto label_30b4c4;
        case 0x30b4e0u: goto label_30b4e0;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b510u: goto label_30b510;
        case 0x30b52cu: goto label_30b52c;
        case 0x30b548u: goto label_30b548;
        case 0x30b57cu: goto label_30b57c;
        case 0x30b584u: goto label_30b584;
        case 0x30b598u: goto label_30b598;
        case 0x30b5acu: goto label_30b5ac;
        case 0x30b5bcu: goto label_30b5bc;
        case 0x30b5d8u: goto label_30b5d8;
        case 0x30b5f4u: goto label_30b5f4;
        case 0x30b610u: goto label_30b610;
        case 0x30b624u: goto label_30b624;
        case 0x30b650u: goto label_30b650;
        case 0x30b678u: goto label_30b678;
        case 0x30b694u: goto label_30b694;
        case 0x30b6c8u: goto label_30b6c8;
        case 0x30b6d0u: goto label_30b6d0;
        case 0x30b6e4u: goto label_30b6e4;
        case 0x30b6f8u: goto label_30b6f8;
        case 0x30b708u: goto label_30b708;
        case 0x30b724u: goto label_30b724;
        case 0x30b740u: goto label_30b740;
        case 0x30b75cu: goto label_30b75c;
        case 0x30b770u: goto label_30b770;
        case 0x30b79cu: goto label_30b79c;
        case 0x30b7c4u: goto label_30b7c4;
        case 0x30b7e0u: goto label_30b7e0;
        default: break;
    }

    ctx->pc = 0x30b260u;

    // 0x30b260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30b264: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x30b264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x30b268: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x30b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30b26c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30b270: 0x3c02440e  lui         $v0, 0x440E
    ctx->pc = 0x30b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17422 << 16));
    // 0x30b274: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b278: 0x34422a3d  ori         $v0, $v0, 0x2A3D
    ctx->pc = 0x30b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10813);
    // 0x30b27c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x30b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x30b280: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30b280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b284: 0x24841f80  addiu       $a0, $a0, 0x1F80
    ctx->pc = 0x30b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8064));
    // 0x30b288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b28c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30b28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30b290: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x30b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x30b294: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x30b294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30b298: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x30b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x30b29c: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x30b29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x30b2a0: 0x3c024d80  lui         $v0, 0x4D80
    ctx->pc = 0x30b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19840 << 16));
    // 0x30b2a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x30b2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x30b2a8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x30b2ac: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x30b2b0: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x30b2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x30b2b4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x30b2b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x30b2b8: 0xc0410c8  jal         func_104320
    ctx->pc = 0x30B2B8u;
    SET_GPR_U32(ctx, 31, 0x30B2C0u);
    ctx->pc = 0x30B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2B8u;
            // 0x30b2bc: 0x46007c06  mov.s       $f16, $f15 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (runtime->hasFunction(0x104320u)) {
        auto targetFn = runtime->lookupFunction(0x104320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2C0u; }
        if (ctx->pc != 0x30B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104320_0x104320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2C0u; }
        if (ctx->pc != 0x30B2C0u) { return; }
    }
    ctx->pc = 0x30B2C0u;
label_30b2c0:
    // 0x30b2c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30b2c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30b2c8: 0x8465db20  lh          $a1, -0x24E0($v1)
    ctx->pc = 0x30b2c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x30b2cc: 0x3c0c4234  lui         $t4, 0x4234
    ctx->pc = 0x30b2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16948 << 16));
    // 0x30b2d0: 0x8444db22  lh          $a0, -0x24DE($v0)
    ctx->pc = 0x30b2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x30b2d4: 0x3c0b43e0  lui         $t3, 0x43E0
    ctx->pc = 0x30b2d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17376 << 16));
    // 0x30b2d8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b2dc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b2e0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x30b2e4: 0x3c0a4060  lui         $t2, 0x4060
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16480 << 16));
    // 0x30b2e8: 0x846eefd8  lh          $t6, -0x1028($v1)
    ctx->pc = 0x30b2e8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963160)));
    // 0x30b2ec: 0x248fff20  addiu       $t7, $a0, -0xE0
    ctx->pc = 0x30b2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x30b2f0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x30b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x30b2f4: 0x3c09425c  lui         $t1, 0x425C
    ctx->pc = 0x30b2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16988 << 16));
    // 0x30b2f8: 0x844defda  lh          $t5, -0x1026($v0)
    ctx->pc = 0x30b2f8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963162)));
    // 0x30b2fc: 0x3c084168  lui         $t0, 0x4168
    ctx->pc = 0x30b2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16744 << 16));
    // 0x30b300: 0x24a3fe40  addiu       $v1, $a1, -0x1C0
    ctx->pc = 0x30b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966848));
    // 0x30b304: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x30b304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30b308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30b308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b30c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b310: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30b310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30b314: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b318: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b31c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30b320: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x30b320u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b324: 0x0  nop
    ctx->pc = 0x30b324u;
    // NOP
    // 0x30b328: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30b328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30b32c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x30b32cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b330: 0x0  nop
    ctx->pc = 0x30b330u;
    // NOP
    // 0x30b334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30b334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30b338: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30b338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30b33c: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x30b33cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b340: 0x0  nop
    ctx->pc = 0x30b340u;
    // NOP
    // 0x30b344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30b344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30b348: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x30b348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30b34c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x30b34cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b350: 0x0  nop
    ctx->pc = 0x30b350u;
    // NOP
    // 0x30b354: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30b354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30b358: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x30b358u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b35c: 0x0  nop
    ctx->pc = 0x30b35cu;
    // NOP
    // 0x30b360: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30b360u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x30b364: 0xe4e006e0  swc1        $f0, 0x6E0($a3)
    ctx->pc = 0x30b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1760), bits); }
    // 0x30b368: 0xe4c006f0  swc1        $f0, 0x6F0($a2)
    ctx->pc = 0x30b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1776), bits); }
    // 0x30b36c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x30b36cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b370: 0x0  nop
    ctx->pc = 0x30b370u;
    // NOP
    // 0x30b374: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30b374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30b378: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x30b378u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x30b37c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x30b37cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b380: 0x0  nop
    ctx->pc = 0x30b380u;
    // NOP
    // 0x30b384: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30b384u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x30b388: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x30b388u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b38c: 0x0  nop
    ctx->pc = 0x30b38cu;
    // NOP
    // 0x30b390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30b390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b394: 0xe4a106e4  swc1        $f1, 0x6E4($a1)
    ctx->pc = 0x30b394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1764), bits); }
    // 0x30b398: 0xe48106f4  swc1        $f1, 0x6F4($a0)
    ctx->pc = 0x30b398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1780), bits); }
    // 0x30b39c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30B39Cu;
    {
        const bool branch_taken_0x30b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B39Cu;
            // 0x30b3a0: 0xe46006e4  swc1        $f0, 0x6E4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b39c) {
            ctx->pc = 0x30B478u;
            goto label_30b478;
        }
    }
    ctx->pc = 0x30B3A4u;
    // 0x30b3a4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b3a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b3ac: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b3b0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b3b4: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b3b8: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x30b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
    // 0x30b3bc: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b3c0: 0xc041052  jal         func_104148
    ctx->pc = 0x30B3C0u;
    SET_GPR_U32(ctx, 31, 0x30B3C8u);
    ctx->pc = 0x30B3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3C0u;
            // 0x30b3c4: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3C8u; }
        if (ctx->pc != 0x30B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3C8u; }
        if (ctx->pc != 0x30B3C8u) { return; }
    }
    ctx->pc = 0x30B3C8u;
label_30b3c8:
    // 0x30b3c8: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B3C8u;
    SET_GPR_U32(ctx, 31, 0x30B3D0u);
    ctx->pc = 0x30B3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3C8u;
            // 0x30b3cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D0u; }
        if (ctx->pc != 0x30B3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D0u; }
        if (ctx->pc != 0x30B3D0u) { return; }
    }
    ctx->pc = 0x30B3D0u;
label_30b3d0:
    // 0x30b3d0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b3d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b3d8: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b3dc: 0xc0c2e50  jal         func_30B940
    ctx->pc = 0x30B3DCu;
    SET_GPR_U32(ctx, 31, 0x30B3E4u);
    ctx->pc = 0x30B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3DCu;
            // 0x30b3e0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B940u;
    if (runtime->hasFunction(0x30B940u)) {
        auto targetFn = runtime->lookupFunction(0x30B940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3E4u; }
        if (ctx->pc != 0x30B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B940_0x30b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3E4u; }
        if (ctx->pc != 0x30B3E4u) { return; }
    }
    ctx->pc = 0x30B3E4u;
label_30b3e4:
    // 0x30b3e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x30b3e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30b3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b3f0: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x30B3F0u;
    SET_GPR_U32(ctx, 31, 0x30B3F8u);
    ctx->pc = 0x30B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3F0u;
            // 0x30b3f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3F8u; }
        if (ctx->pc != 0x30B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3F8u; }
        if (ctx->pc != 0x30B3F8u) { return; }
    }
    ctx->pc = 0x30B3F8u;
label_30b3f8:
    // 0x30b3f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b3fc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30b3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b400: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30B400u;
    SET_GPR_U32(ctx, 31, 0x30B408u);
    ctx->pc = 0x30B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B400u;
            // 0x30b404: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (runtime->hasFunction(0x103A48u)) {
        auto targetFn = runtime->lookupFunction(0x103A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B408u; }
        if (ctx->pc != 0x30B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B408u; }
        if (ctx->pc != 0x30B408u) { return; }
    }
    ctx->pc = 0x30B408u;
label_30b408:
    // 0x30b408: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b40c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b410: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b414: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b418: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x30b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b41c: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30B41Cu;
    SET_GPR_U32(ctx, 31, 0x30B424u);
    ctx->pc = 0x30B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B41Cu;
            // 0x30b420: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (runtime->hasFunction(0x103D90u)) {
        auto targetFn = runtime->lookupFunction(0x103D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B424u; }
        if (ctx->pc != 0x30B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103D90_0x103d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B424u; }
        if (ctx->pc != 0x30B424u) { return; }
    }
    ctx->pc = 0x30B424u;
label_30b424:
    // 0x30b424: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b42c: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b430: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b434: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x30b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b438: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30B438u;
    SET_GPR_U32(ctx, 31, 0x30B440u);
    ctx->pc = 0x30B43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B438u;
            // 0x30b43c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (runtime->hasFunction(0x103F78u)) {
        auto targetFn = runtime->lookupFunction(0x103F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B440u; }
        if (ctx->pc != 0x30B440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103F78_0x103f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B440u; }
        if (ctx->pc != 0x30B440u) { return; }
    }
    ctx->pc = 0x30B440u;
label_30b440:
    // 0x30b440: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b444: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b448: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b44c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b450: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x30b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b454: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30B454u;
    SET_GPR_U32(ctx, 31, 0x30B45Cu);
    ctx->pc = 0x30B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B454u;
            // 0x30b458: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (runtime->hasFunction(0x103E80u)) {
        auto targetFn = runtime->lookupFunction(0x103E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B45Cu; }
        if (ctx->pc != 0x30B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E80_0x103e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B45Cu; }
        if (ctx->pc != 0x30B45Cu) { return; }
    }
    ctx->pc = 0x30B45Cu;
label_30b45c:
    // 0x30b45c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b460: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30b460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b464: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b468: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B468u;
    SET_GPR_U32(ctx, 31, 0x30B470u);
    ctx->pc = 0x30B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B468u;
            // 0x30b46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B470u; }
        if (ctx->pc != 0x30B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B470u; }
        if (ctx->pc != 0x30B470u) { return; }
    }
    ctx->pc = 0x30B470u;
label_30b470:
    // 0x30b470: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30B470u;
    {
        const bool branch_taken_0x30b470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b470) {
            ctx->pc = 0x30B49Cu;
            goto label_30b49c;
        }
    }
    ctx->pc = 0x30B478u;
label_30b478:
    // 0x30b478: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b47c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b480: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b484: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b488: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b48c: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x30b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x30b490: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b494: 0xc041052  jal         func_104148
    ctx->pc = 0x30B494u;
    SET_GPR_U32(ctx, 31, 0x30B49Cu);
    ctx->pc = 0x30B498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B494u;
            // 0x30b498: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B49Cu; }
        if (ctx->pc != 0x30B49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B49Cu; }
        if (ctx->pc != 0x30B49Cu) { return; }
    }
    ctx->pc = 0x30B49Cu;
label_30b49c:
    // 0x30b49c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30b4a0: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x30b4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x30b4a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B4A4u;
    {
        const bool branch_taken_0x30b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b4a4) {
            ctx->pc = 0x30B4C4u;
            goto label_30b4c4;
        }
    }
    ctx->pc = 0x30B4ACu;
    // 0x30b4ac: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b4b0: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b4b4: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b4b8: 0x24c61e70  addiu       $a2, $a2, 0x1E70
    ctx->pc = 0x30b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7792));
    // 0x30b4bc: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B4BCu;
    SET_GPR_U32(ctx, 31, 0x30B4C4u);
    ctx->pc = 0x30B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4BCu;
            // 0x30b4c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4C4u; }
        if (ctx->pc != 0x30B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4C4u; }
        if (ctx->pc != 0x30B4C4u) { return; }
    }
    ctx->pc = 0x30B4C4u;
label_30b4c4:
    // 0x30b4c4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b4c8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30b4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30b4cc: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b4d0: 0x24842080  addiu       $a0, $a0, 0x2080
    ctx->pc = 0x30b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8320));
    // 0x30b4d4: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x30b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x30b4d8: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B4D8u;
    SET_GPR_U32(ctx, 31, 0x30B4E0u);
    ctx->pc = 0x30B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4D8u;
            // 0x30b4dc: 0x24c61fc0  addiu       $a2, $a2, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4E0u; }
        if (ctx->pc != 0x30B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4E0u; }
        if (ctx->pc != 0x30B4E0u) { return; }
    }
    ctx->pc = 0x30B4E0u;
label_30b4e0:
    // 0x30b4e0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b4e4: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B4E4u;
    SET_GPR_U32(ctx, 31, 0x30B4ECu);
    ctx->pc = 0x30B4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4E4u;
            // 0x30b4e8: 0x24841ec0  addiu       $a0, $a0, 0x1EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ECu; }
        if (ctx->pc != 0x30B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ECu; }
        if (ctx->pc != 0x30B4ECu) { return; }
    }
    ctx->pc = 0x30B4ECu;
label_30b4ec:
    // 0x30b4ec: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b4f0: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b4f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30B4F4u;
    {
        const bool branch_taken_0x30b4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b4f4) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B4FCu;
    // 0x30b4fc: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b500: 0x24841ec0  addiu       $a0, $a0, 0x1EC0
    ctx->pc = 0x30b500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
    // 0x30b504: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x30b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b508: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30B508u;
    SET_GPR_U32(ctx, 31, 0x30B510u);
    ctx->pc = 0x30B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B508u;
            // 0x30b50c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (runtime->hasFunction(0x103E80u)) {
        auto targetFn = runtime->lookupFunction(0x103E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B510u; }
        if (ctx->pc != 0x30B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E80_0x103e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B510u; }
        if (ctx->pc != 0x30B510u) { return; }
    }
    ctx->pc = 0x30B510u;
label_30b510:
    // 0x30b510: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b514: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b518: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b51c: 0x24841ec0  addiu       $a0, $a0, 0x1EC0
    ctx->pc = 0x30b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
    // 0x30b520: 0xc44c00a4  lwc1        $f12, 0xA4($v0)
    ctx->pc = 0x30b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b524: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30B524u;
    SET_GPR_U32(ctx, 31, 0x30B52Cu);
    ctx->pc = 0x30B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B524u;
            // 0x30b528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (runtime->hasFunction(0x103F78u)) {
        auto targetFn = runtime->lookupFunction(0x103F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B52Cu; }
        if (ctx->pc != 0x30B52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103F78_0x103f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B52Cu; }
        if (ctx->pc != 0x30B52Cu) { return; }
    }
    ctx->pc = 0x30B52Cu;
label_30b52c:
    // 0x30b52c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b530: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b534: 0x8c424778  lw          $v0, 0x4778($v0)
    ctx->pc = 0x30b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x30b538: 0x24841ec0  addiu       $a0, $a0, 0x1EC0
    ctx->pc = 0x30b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
    // 0x30b53c: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x30b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b540: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30B540u;
    SET_GPR_U32(ctx, 31, 0x30B548u);
    ctx->pc = 0x30B544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B540u;
            // 0x30b544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (runtime->hasFunction(0x103D90u)) {
        auto targetFn = runtime->lookupFunction(0x103D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B548u; }
        if (ctx->pc != 0x30B548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103D90_0x103d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B548u; }
        if (ctx->pc != 0x30B548u) { return; }
    }
    ctx->pc = 0x30B548u;
label_30b548:
    // 0x30b548: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b54c: 0x8c424770  lw          $v0, 0x4770($v0)
    ctx->pc = 0x30b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x30b550: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30B550u;
    {
        const bool branch_taken_0x30b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b550) {
            ctx->pc = 0x30B62Cu;
            goto label_30b62c;
        }
    }
    ctx->pc = 0x30B558u;
    // 0x30b558: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b55c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b560: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b564: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b568: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b56c: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x30b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
    // 0x30b570: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b574: 0xc041052  jal         func_104148
    ctx->pc = 0x30B574u;
    SET_GPR_U32(ctx, 31, 0x30B57Cu);
    ctx->pc = 0x30B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B574u;
            // 0x30b578: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B57Cu; }
        if (ctx->pc != 0x30B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B57Cu; }
        if (ctx->pc != 0x30B57Cu) { return; }
    }
    ctx->pc = 0x30B57Cu;
label_30b57c:
    // 0x30b57c: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B57Cu;
    SET_GPR_U32(ctx, 31, 0x30B584u);
    ctx->pc = 0x30B580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B57Cu;
            // 0x30b580: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B584u; }
        if (ctx->pc != 0x30B584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B584u; }
        if (ctx->pc != 0x30B584u) { return; }
    }
    ctx->pc = 0x30B584u;
label_30b584:
    // 0x30b584: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b588: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b58c: 0x8c424770  lw          $v0, 0x4770($v0)
    ctx->pc = 0x30b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x30b590: 0xc0c2e50  jal         func_30B940
    ctx->pc = 0x30B590u;
    SET_GPR_U32(ctx, 31, 0x30B598u);
    ctx->pc = 0x30B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B590u;
            // 0x30b594: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B940u;
    if (runtime->hasFunction(0x30B940u)) {
        auto targetFn = runtime->lookupFunction(0x30B940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B598u; }
        if (ctx->pc != 0x30B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B940_0x30b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B598u; }
        if (ctx->pc != 0x30B598u) { return; }
    }
    ctx->pc = 0x30B598u;
label_30b598:
    // 0x30b598: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x30b598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x30b59c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b5a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30b5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b5a4: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x30B5A4u;
    SET_GPR_U32(ctx, 31, 0x30B5ACu);
    ctx->pc = 0x30B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5A4u;
            // 0x30b5a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5ACu; }
        if (ctx->pc != 0x30B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5ACu; }
        if (ctx->pc != 0x30B5ACu) { return; }
    }
    ctx->pc = 0x30B5ACu;
label_30b5ac:
    // 0x30b5ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b5b0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b5b4: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30B5B4u;
    SET_GPR_U32(ctx, 31, 0x30B5BCu);
    ctx->pc = 0x30B5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5B4u;
            // 0x30b5b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (runtime->hasFunction(0x103A48u)) {
        auto targetFn = runtime->lookupFunction(0x103A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5BCu; }
        if (ctx->pc != 0x30B5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5BCu; }
        if (ctx->pc != 0x30B5BCu) { return; }
    }
    ctx->pc = 0x30B5BCu;
label_30b5bc:
    // 0x30b5bc: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b5c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b5c4: 0x8c424770  lw          $v0, 0x4770($v0)
    ctx->pc = 0x30b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x30b5c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b5cc: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x30b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b5d0: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30B5D0u;
    SET_GPR_U32(ctx, 31, 0x30B5D8u);
    ctx->pc = 0x30B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5D0u;
            // 0x30b5d4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (runtime->hasFunction(0x103D90u)) {
        auto targetFn = runtime->lookupFunction(0x103D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5D8u; }
        if (ctx->pc != 0x30B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103D90_0x103d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5D8u; }
        if (ctx->pc != 0x30B5D8u) { return; }
    }
    ctx->pc = 0x30B5D8u;
label_30b5d8:
    // 0x30b5d8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b5dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b5e0: 0x8c424770  lw          $v0, 0x4770($v0)
    ctx->pc = 0x30b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x30b5e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b5e8: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x30b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b5ec: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30B5ECu;
    SET_GPR_U32(ctx, 31, 0x30B5F4u);
    ctx->pc = 0x30B5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5ECu;
            // 0x30b5f0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (runtime->hasFunction(0x103F78u)) {
        auto targetFn = runtime->lookupFunction(0x103F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5F4u; }
        if (ctx->pc != 0x30B5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103F78_0x103f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5F4u; }
        if (ctx->pc != 0x30B5F4u) { return; }
    }
    ctx->pc = 0x30B5F4u;
label_30b5f4:
    // 0x30b5f4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b5f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b5fc: 0x8c424770  lw          $v0, 0x4770($v0)
    ctx->pc = 0x30b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x30b600: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b604: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x30b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b608: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30B608u;
    SET_GPR_U32(ctx, 31, 0x30B610u);
    ctx->pc = 0x30B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B608u;
            // 0x30b60c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (runtime->hasFunction(0x103E80u)) {
        auto targetFn = runtime->lookupFunction(0x103E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B610u; }
        if (ctx->pc != 0x30B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E80_0x103e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B610u; }
        if (ctx->pc != 0x30B610u) { return; }
    }
    ctx->pc = 0x30B610u;
label_30b610:
    // 0x30b610: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b614: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30b614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b618: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b61c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B61Cu;
    SET_GPR_U32(ctx, 31, 0x30B624u);
    ctx->pc = 0x30B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B61Cu;
            // 0x30b620: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B624u; }
        if (ctx->pc != 0x30B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B624u; }
        if (ctx->pc != 0x30B624u) { return; }
    }
    ctx->pc = 0x30B624u;
label_30b624:
    // 0x30b624: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30B624u;
    {
        const bool branch_taken_0x30b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b624) {
            ctx->pc = 0x30B650u;
            goto label_30b650;
        }
    }
    ctx->pc = 0x30B62Cu;
label_30b62c:
    // 0x30b62c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b630: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b634: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b638: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b63c: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b640: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x30b640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x30b644: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b648: 0xc041052  jal         func_104148
    ctx->pc = 0x30B648u;
    SET_GPR_U32(ctx, 31, 0x30B650u);
    ctx->pc = 0x30B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B648u;
            // 0x30b64c: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B650u; }
        if (ctx->pc != 0x30B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B650u; }
        if (ctx->pc != 0x30B650u) { return; }
    }
    ctx->pc = 0x30B650u;
label_30b650:
    // 0x30b650: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30b654: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x30b654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x30b658: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B658u;
    {
        const bool branch_taken_0x30b658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b658) {
            ctx->pc = 0x30B678u;
            goto label_30b678;
        }
    }
    ctx->pc = 0x30B660u;
    // 0x30b660: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b664: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b668: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b66c: 0x24c61e70  addiu       $a2, $a2, 0x1E70
    ctx->pc = 0x30b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7792));
    // 0x30b670: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B670u;
    SET_GPR_U32(ctx, 31, 0x30B678u);
    ctx->pc = 0x30B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B670u;
            // 0x30b674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B678u; }
        if (ctx->pc != 0x30B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B678u; }
        if (ctx->pc != 0x30B678u) { return; }
    }
    ctx->pc = 0x30B678u;
label_30b678:
    // 0x30b678: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b67c: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30b680: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b684: 0x24842040  addiu       $a0, $a0, 0x2040
    ctx->pc = 0x30b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8256));
    // 0x30b688: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x30b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x30b68c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B68Cu;
    SET_GPR_U32(ctx, 31, 0x30B694u);
    ctx->pc = 0x30B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B68Cu;
            // 0x30b690: 0x24c61fc0  addiu       $a2, $a2, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B694u; }
        if (ctx->pc != 0x30B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B694u; }
        if (ctx->pc != 0x30B694u) { return; }
    }
    ctx->pc = 0x30B694u;
label_30b694:
    // 0x30b694: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b698: 0x8c424768  lw          $v0, 0x4768($v0)
    ctx->pc = 0x30b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
    // 0x30b69c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30B69Cu;
    {
        const bool branch_taken_0x30b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b69c) {
            ctx->pc = 0x30B778u;
            goto label_30b778;
        }
    }
    ctx->pc = 0x30B6A4u;
    // 0x30b6a4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b6a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b6ac: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b6b0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b6b4: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b6b8: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x30b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
    // 0x30b6bc: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b6c0: 0xc041052  jal         func_104148
    ctx->pc = 0x30B6C0u;
    SET_GPR_U32(ctx, 31, 0x30B6C8u);
    ctx->pc = 0x30B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6C0u;
            // 0x30b6c4: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6C8u; }
        if (ctx->pc != 0x30B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6C8u; }
        if (ctx->pc != 0x30B6C8u) { return; }
    }
    ctx->pc = 0x30B6C8u;
label_30b6c8:
    // 0x30b6c8: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B6C8u;
    SET_GPR_U32(ctx, 31, 0x30B6D0u);
    ctx->pc = 0x30B6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6C8u;
            // 0x30b6cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (runtime->hasFunction(0x103CC0u)) {
        auto targetFn = runtime->lookupFunction(0x103CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6D0u; }
        if (ctx->pc != 0x30B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103CC0_0x103cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6D0u; }
        if (ctx->pc != 0x30B6D0u) { return; }
    }
    ctx->pc = 0x30B6D0u;
label_30b6d0:
    // 0x30b6d0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b6d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b6d8: 0x8c424768  lw          $v0, 0x4768($v0)
    ctx->pc = 0x30b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
    // 0x30b6dc: 0xc0c2e50  jal         func_30B940
    ctx->pc = 0x30B6DCu;
    SET_GPR_U32(ctx, 31, 0x30B6E4u);
    ctx->pc = 0x30B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6DCu;
            // 0x30b6e0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B940u;
    if (runtime->hasFunction(0x30B940u)) {
        auto targetFn = runtime->lookupFunction(0x30B940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6E4u; }
        if (ctx->pc != 0x30B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B940_0x30b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6E4u; }
        if (ctx->pc != 0x30B6E4u) { return; }
    }
    ctx->pc = 0x30B6E4u;
label_30b6e4:
    // 0x30b6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x30b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x30b6e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b6ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30b6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b6f0: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x30B6F0u;
    SET_GPR_U32(ctx, 31, 0x30B6F8u);
    ctx->pc = 0x30B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6F0u;
            // 0x30b6f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (runtime->hasFunction(0x1039E0u)) {
        auto targetFn = runtime->lookupFunction(0x1039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6F8u; }
        if (ctx->pc != 0x30B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001039E0_0x1039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B6F8u; }
        if (ctx->pc != 0x30B6F8u) { return; }
    }
    ctx->pc = 0x30B6F8u;
label_30b6f8:
    // 0x30b6f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b6fc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b700: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30B700u;
    SET_GPR_U32(ctx, 31, 0x30B708u);
    ctx->pc = 0x30B704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B700u;
            // 0x30b704: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (runtime->hasFunction(0x103A48u)) {
        auto targetFn = runtime->lookupFunction(0x103A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B708u; }
        if (ctx->pc != 0x30B708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B708u; }
        if (ctx->pc != 0x30B708u) { return; }
    }
    ctx->pc = 0x30B708u;
label_30b708:
    // 0x30b708: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b70c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b710: 0x8c424768  lw          $v0, 0x4768($v0)
    ctx->pc = 0x30b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
    // 0x30b714: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b718: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x30b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b71c: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30B71Cu;
    SET_GPR_U32(ctx, 31, 0x30B724u);
    ctx->pc = 0x30B720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B71Cu;
            // 0x30b720: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (runtime->hasFunction(0x103D90u)) {
        auto targetFn = runtime->lookupFunction(0x103D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B724u; }
        if (ctx->pc != 0x30B724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103D90_0x103d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B724u; }
        if (ctx->pc != 0x30B724u) { return; }
    }
    ctx->pc = 0x30B724u;
label_30b724:
    // 0x30b724: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b728: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b72c: 0x8c424768  lw          $v0, 0x4768($v0)
    ctx->pc = 0x30b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
    // 0x30b730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b734: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x30b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b738: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30B738u;
    SET_GPR_U32(ctx, 31, 0x30B740u);
    ctx->pc = 0x30B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B738u;
            // 0x30b73c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (runtime->hasFunction(0x103F78u)) {
        auto targetFn = runtime->lookupFunction(0x103F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B740u; }
        if (ctx->pc != 0x30B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103F78_0x103f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B740u; }
        if (ctx->pc != 0x30B740u) { return; }
    }
    ctx->pc = 0x30B740u;
label_30b740:
    // 0x30b740: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b744: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b748: 0x8c424768  lw          $v0, 0x4768($v0)
    ctx->pc = 0x30b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
    // 0x30b74c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30b74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b750: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x30b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b754: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30B754u;
    SET_GPR_U32(ctx, 31, 0x30B75Cu);
    ctx->pc = 0x30B758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B754u;
            // 0x30b758: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (runtime->hasFunction(0x103E80u)) {
        auto targetFn = runtime->lookupFunction(0x103E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B75Cu; }
        if (ctx->pc != 0x30B75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E80_0x103e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B75Cu; }
        if (ctx->pc != 0x30B75Cu) { return; }
    }
    ctx->pc = 0x30B75Cu;
label_30b75c:
    // 0x30b75c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b760: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b764: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b768: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B768u;
    SET_GPR_U32(ctx, 31, 0x30B770u);
    ctx->pc = 0x30B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B768u;
            // 0x30b76c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B770u; }
        if (ctx->pc != 0x30B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B770u; }
        if (ctx->pc != 0x30B770u) { return; }
    }
    ctx->pc = 0x30B770u;
label_30b770:
    // 0x30b770: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30B770u;
    {
        const bool branch_taken_0x30b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b770) {
            ctx->pc = 0x30B79Cu;
            goto label_30b79c;
        }
    }
    ctx->pc = 0x30B778u;
label_30b778:
    // 0x30b778: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b77c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b780: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b784: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30b784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b788: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b78c: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x30b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x30b790: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x30b794: 0xc041052  jal         func_104148
    ctx->pc = 0x30B794u;
    SET_GPR_U32(ctx, 31, 0x30B79Cu);
    ctx->pc = 0x30B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B794u;
            // 0x30b798: 0x24e706d0  addiu       $a3, $a3, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (runtime->hasFunction(0x104148u)) {
        auto targetFn = runtime->lookupFunction(0x104148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B79Cu; }
        if (ctx->pc != 0x30B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104148_0x104148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B79Cu; }
        if (ctx->pc != 0x30B79Cu) { return; }
    }
    ctx->pc = 0x30B79Cu;
label_30b79c:
    // 0x30b79c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30b7a0: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x30b7a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x30b7a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B7A4u;
    {
        const bool branch_taken_0x30b7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b7a4) {
            ctx->pc = 0x30B7C4u;
            goto label_30b7c4;
        }
    }
    ctx->pc = 0x30B7ACu;
    // 0x30b7ac: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b7b0: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b7b4: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x30b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x30b7b8: 0x24c61e70  addiu       $a2, $a2, 0x1E70
    ctx->pc = 0x30b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7792));
    // 0x30b7bc: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B7BCu;
    SET_GPR_U32(ctx, 31, 0x30B7C4u);
    ctx->pc = 0x30B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7BCu;
            // 0x30b7c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7C4u; }
        if (ctx->pc != 0x30B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7C4u; }
        if (ctx->pc != 0x30B7C4u) { return; }
    }
    ctx->pc = 0x30B7C4u;
label_30b7c4:
    // 0x30b7c4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b7c8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30b7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30b7cc: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30b7d0: 0x24842000  addiu       $a0, $a0, 0x2000
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x30b7d4: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x30b7d8: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B7D8u;
    SET_GPR_U32(ctx, 31, 0x30B7E0u);
    ctx->pc = 0x30B7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7D8u;
            // 0x30b7dc: 0x24c61fc0  addiu       $a2, $a2, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7E0u; }
        if (ctx->pc != 0x30B7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7E0u; }
        if (ctx->pc != 0x30B7E0u) { return; }
    }
    ctx->pc = 0x30B7E0u;
label_30b7e0:
    // 0x30b7e0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b7e4: 0x8c654730  lw          $a1, 0x4730($v1)
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
    // 0x30b7e8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30B7E8u;
    {
        const bool branch_taken_0x30b7e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b7e8) {
            ctx->pc = 0x30B850u;
            goto label_30b850;
        }
    }
    ctx->pc = 0x30B7F0u;
    // 0x30b7f0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b7f4: 0x8c634778  lw          $v1, 0x4778($v1)
    ctx->pc = 0x30b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
    // 0x30b7f8: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x30b7fc: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30B7FCu;
    {
        const bool branch_taken_0x30b7fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b7fc) {
            ctx->pc = 0x30B800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7FCu;
            // 0x30b800: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B828u;
            goto label_30b828;
        }
    }
    ctx->pc = 0x30B804u;
    // 0x30b804: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b808: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b80c: 0x8c664790  lw          $a2, 0x4790($v1)
    ctx->pc = 0x30b80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18320)));
    // 0x30b810: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b814: 0xac864748  sw          $a2, 0x4748($a0)
    ctx->pc = 0x30b814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18248), GPR_U32(ctx, 6));
    // 0x30b818: 0x8c654760  lw          $a1, 0x4760($v1)
    ctx->pc = 0x30b818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
    // 0x30b81c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b820: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30B820u;
    {
        const bool branch_taken_0x30b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B820u;
            // 0x30b824: 0xac654730  sw          $a1, 0x4730($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b820) {
            ctx->pc = 0x30B850u;
            goto label_30b850;
        }
    }
    ctx->pc = 0x30B828u;
label_30b828:
    // 0x30b828: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B828u;
    {
        const bool branch_taken_0x30b828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30b828) {
            ctx->pc = 0x30B850u;
            goto label_30b850;
        }
    }
    ctx->pc = 0x30B830u;
    // 0x30b830: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30b834: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b838: 0xac644730  sw          $a0, 0x4730($v1)
    ctx->pc = 0x30b838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18224), GPR_U32(ctx, 4));
    // 0x30b83c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b840: 0x8c644748  lw          $a0, 0x4748($v1)
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18248)));
    // 0x30b844: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b848: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30b848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b84c: 0xac644748  sw          $a0, 0x4748($v1)
    ctx->pc = 0x30b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18248), GPR_U32(ctx, 4));
label_30b850:
    // 0x30b850: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b854: 0x8c654728  lw          $a1, 0x4728($v1)
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18216)));
    // 0x30b858: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30B858u;
    {
        const bool branch_taken_0x30b858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b858) {
            ctx->pc = 0x30B8C0u;
            goto label_30b8c0;
        }
    }
    ctx->pc = 0x30B860u;
    // 0x30b860: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b864: 0x8c634770  lw          $v1, 0x4770($v1)
    ctx->pc = 0x30b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18288)));
    // 0x30b868: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x30b868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x30b86c: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30B86Cu;
    {
        const bool branch_taken_0x30b86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b86c) {
            ctx->pc = 0x30B870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B86Cu;
            // 0x30b870: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B898u;
            goto label_30b898;
        }
    }
    ctx->pc = 0x30B874u;
    // 0x30b874: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b878: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b87c: 0x8c664788  lw          $a2, 0x4788($v1)
    ctx->pc = 0x30b87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18312)));
    // 0x30b880: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b884: 0xac864740  sw          $a2, 0x4740($a0)
    ctx->pc = 0x30b884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18240), GPR_U32(ctx, 6));
    // 0x30b888: 0x8c654758  lw          $a1, 0x4758($v1)
    ctx->pc = 0x30b888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18264)));
    // 0x30b88c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b890: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30B890u;
    {
        const bool branch_taken_0x30b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B890u;
            // 0x30b894: 0xac654728  sw          $a1, 0x4728($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b890) {
            ctx->pc = 0x30B8C0u;
            goto label_30b8c0;
        }
    }
    ctx->pc = 0x30B898u;
label_30b898:
    // 0x30b898: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B898u;
    {
        const bool branch_taken_0x30b898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30b898) {
            ctx->pc = 0x30B8C0u;
            goto label_30b8c0;
        }
    }
    ctx->pc = 0x30B8A0u;
    // 0x30b8a0: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x30b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30b8a4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8a8: 0xac644728  sw          $a0, 0x4728($v1)
    ctx->pc = 0x30b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18216), GPR_U32(ctx, 4));
    // 0x30b8ac: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8b0: 0x8c644740  lw          $a0, 0x4740($v1)
    ctx->pc = 0x30b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18240)));
    // 0x30b8b4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b8bc: 0xac644740  sw          $a0, 0x4740($v1)
    ctx->pc = 0x30b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18240), GPR_U32(ctx, 4));
label_30b8c0:
    // 0x30b8c0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8c4: 0x8c654720  lw          $a1, 0x4720($v1)
    ctx->pc = 0x30b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18208)));
    // 0x30b8c8: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x30B8C8u;
    {
        const bool branch_taken_0x30b8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b8c8) {
            ctx->pc = 0x30B8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8C8u;
            // 0x30b8cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B934u;
            goto label_30b934;
        }
    }
    ctx->pc = 0x30B8D0u;
    // 0x30b8d0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8d4: 0x8c634768  lw          $v1, 0x4768($v1)
    ctx->pc = 0x30b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18280)));
    // 0x30b8d8: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x30b8dc: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30B8DCu;
    {
        const bool branch_taken_0x30b8dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b8dc) {
            ctx->pc = 0x30B8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8DCu;
            // 0x30b8e0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B908u;
            goto label_30b908;
        }
    }
    ctx->pc = 0x30B8E4u;
    // 0x30b8e4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8e8: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b8ec: 0x8c664780  lw          $a2, 0x4780($v1)
    ctx->pc = 0x30b8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18304)));
    // 0x30b8f0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b8f4: 0xac864738  sw          $a2, 0x4738($a0)
    ctx->pc = 0x30b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18232), GPR_U32(ctx, 6));
    // 0x30b8f8: 0x8c654750  lw          $a1, 0x4750($v1)
    ctx->pc = 0x30b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18256)));
    // 0x30b8fc: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b900: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30B900u;
    {
        const bool branch_taken_0x30b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B900u;
            // 0x30b904: 0xac654720  sw          $a1, 0x4720($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b900) {
            ctx->pc = 0x30B930u;
            goto label_30b930;
        }
    }
    ctx->pc = 0x30B908u;
label_30b908:
    // 0x30b908: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B908u;
    {
        const bool branch_taken_0x30b908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30b908) {
            ctx->pc = 0x30B930u;
            goto label_30b930;
        }
    }
    ctx->pc = 0x30B910u;
    // 0x30b910: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x30b910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30b914: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b918: 0xac644720  sw          $a0, 0x4720($v1)
    ctx->pc = 0x30b918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18208), GPR_U32(ctx, 4));
    // 0x30b91c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b920: 0x8c644738  lw          $a0, 0x4738($v1)
    ctx->pc = 0x30b920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
    // 0x30b924: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b928: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b92c: 0xac644738  sw          $a0, 0x4738($v1)
    ctx->pc = 0x30b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18232), GPR_U32(ctx, 4));
label_30b930:
    // 0x30b930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b934:
    // 0x30b934: 0x3e00008  jr          $ra
    ctx->pc = 0x30B934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B934u;
            // 0x30b938: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B93Cu;
    // 0x30b93c: 0x0  nop
    ctx->pc = 0x30b93cu;
    // NOP
    ctx->pc = 0x30b940u;
}
