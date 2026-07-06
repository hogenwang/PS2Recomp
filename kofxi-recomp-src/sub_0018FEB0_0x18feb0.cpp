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

// Function: sub_0018FEB0
// Address: 0x18feb0 - 0x1900c0
void sub_0018FEB0_0x18feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FEB0_0x18feb0");
#endif

    switch (ctx->pc) {
        case 0x1900acu: goto label_1900ac;
        default: break;
    }

    ctx->pc = 0x18feb0u;

    // 0x18feb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18feb4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18feb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18febc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18fec0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18fec4: 0x24a5db8c  addiu       $a1, $a1, -0x2474
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957964));
    // 0x18fec8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18fecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fed0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x18fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x18fed4: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x18fed8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18fedc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18fee0: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x18fee4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fee8: 0x34652493  ori         $a1, $v1, 0x2493
    ctx->pc = 0x18fee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x18feec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fef0: 0x2463ca00  addiu       $v1, $v1, -0x3600
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953472));
    // 0x18fef4: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x18fef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18fef8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fefc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ff00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ff04: 0x2463ca18  addiu       $v1, $v1, -0x35E8
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953496));
    // 0x18ff08: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18ff0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ff10: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff14: 0x2010  mfhi        $a0
    ctx->pc = 0x18ff14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x18ff18: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x18ff18u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18ff1c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x18ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18ff20: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x18ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x18ff24: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x18ff24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x18ff28: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18ff28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ff2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ff30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ff30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff34: 0x2463ca04  addiu       $v1, $v1, -0x35FC
    ctx->pc = 0x18ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953476));
    // 0x18ff38: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ff3c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x18ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ff40: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x18ff40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[2]));
    // 0x18ff44: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18ff48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff4c: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x18ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x18ff50: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18ff50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18ff54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18ff58: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x18ff58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18ff5c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18ff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18ff60: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x18ff60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18ff64: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x18ff64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18ff68: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x18ff68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18ff6c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x18ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff70: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x18ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x18ff74: 0x9085b280  lbu         $a1, -0x4D80($a0)
    ctx->pc = 0x18ff74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x18ff78: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x18ff78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18ff7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff80: 0x3010  mfhi        $a2
    ctx->pc = 0x18ff80u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x18ff84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18ff84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff88: 0x0  nop
    ctx->pc = 0x18ff88u;
    // NOP
    // 0x18ff8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ff8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ff90: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x18ff90u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x18ff94: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x18ff94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x18ff98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18ff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18ff9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18ffa0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18ffa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18ffa4: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FFA4u;
    {
        const bool branch_taken_0x18ffa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x18FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFA4u;
        // 0x18ffa8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffa4) {
            ctx->pc = 0x18FFC0u;
            goto label_18ffc0;
        }
    }
    ctx->pc = 0x18FFACu;
    // 0x18ffac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18ffb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18ffb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ffb4: 0x0  nop
    ctx->pc = 0x18ffb4u;
    // NOP
    // 0x18ffb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ffb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ffbc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x18ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_18ffc0:
    // 0x18ffc0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18ffc4: 0x2484ca08  addiu       $a0, $a0, -0x35F8
    ctx->pc = 0x18ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953480));
    // 0x18ffc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18ffcc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffd0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x18ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ffd4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ffd8: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x18ffd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18ffdc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x18ffdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18ffe0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x18ffe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18ffe4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x18ffe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18ffe8: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x18ffe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18ffec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x18ffecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18fff0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x18fff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18fff4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18fff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18fff8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18fff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18fffc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x190000: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x190000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x190004: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x190004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x190008: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x190008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x19000c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19000cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x190010: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190010u;
    {
        const bool branch_taken_0x190010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x190014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190010u;
        // 0x190014: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190010) {
            ctx->pc = 0x190030u;
            goto label_190030;
        }
    }
    ctx->pc = 0x190018u;
    // 0x190018: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19001c: 0x8c84da70  lw          $a0, -0x2590($a0)
    ctx->pc = 0x19001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957680)));
    // 0x190020: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x190020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x190024: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190024u;
    {
        const bool branch_taken_0x190024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190024) {
            ctx->pc = 0x190030u;
            goto label_190030;
        }
    }
    ctx->pc = 0x19002Cu;
    // 0x19002c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_190030:
    // 0x190030: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x190034: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x190034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190038: 0x24844d24  addiu       $a0, $a0, 0x4D24
    ctx->pc = 0x190038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19748));
    // 0x19003c: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x19003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x190040: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x190040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x190044: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x190044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190048: 0x2484ca3c  addiu       $a0, $a0, -0x35C4
    ctx->pc = 0x190048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953532));
    // 0x19004c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x190050: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x190050u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190054: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x190054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190058: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x190058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x19005c: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x19005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
    // 0x190060: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x190060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x190064: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x190068: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x190068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x19006c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190070: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x190070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x190074: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x190074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x190078: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x190078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x19007c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19007Cu;
    {
        const bool branch_taken_0x19007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19007Cu;
        // 0x190080: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19007c) {
            ctx->pc = 0x19008Cu;
            goto label_19008c;
        }
    }
    ctx->pc = 0x190084u;
    // 0x190084: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190088: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x190088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_19008c:
    // 0x19008c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x19008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x190090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x190090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190094: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x190094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x190098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19009c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x19009cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1900a0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1900a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1900a4: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x1900A4u;
    SET_GPR_U32(ctx, 31, 0x1900ACu);
    ctx->pc = 0x1900A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900A4u;
    // 0x1900a8: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304B30u, 0x1900A4u, 0x1900ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900ACu;
label_1900ac:
    // 0x1900ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1900acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1900B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1900B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900B0u;
        // 0x1900b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1900B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1900B8u;
    // 0x1900b8: 0x0  nop
    ctx->pc = 0x1900b8u;
    // NOP
    // 0x1900bc: 0x0  nop
    ctx->pc = 0x1900bcu;
    // NOP
}
