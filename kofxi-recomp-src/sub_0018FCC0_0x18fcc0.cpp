#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FCC0
// Address: 0x18fcc0 - 0x18feb0
void sub_0018FCC0_0x18fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FCC0_0x18fcc0");
#endif

    switch (ctx->pc) {
        case 0x18fe9cu: goto label_18fe9c;
        default: break;
    }

    ctx->pc = 0x18fcc0u;

    // 0x18fcc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18fcc4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18fcc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18fccc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fcd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18fcd4: 0x439c0  sll         $a3, $a0, 7
    ctx->pc = 0x18fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x18fcd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18fcdc: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18fce0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18fce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18fcec: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x18fcf0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fcf4: 0x34442493  ori         $a0, $v0, 0x2493
    ctx->pc = 0x18fcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x18fcf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18fcfc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x18fd00: 0x2442c9c0  addiu       $v0, $v0, -0x3640
    ctx->pc = 0x18fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953408));
    // 0x18fd04: 0x880018  mult        $zero, $a0, $t0
    ctx->pc = 0x18fd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18fd08: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18fd0c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fd10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18fd14: 0x2442c9d8  addiu       $v0, $v0, -0x3628
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953432));
    // 0x18fd18: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x18fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18fd1c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18fd20: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd24: 0x1810  mfhi        $v1
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18fd28: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x18fd28u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18fd2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18fd30: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x18fd34: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x18fd34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x18fd38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18fd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18fd3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18fd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18fd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fd44: 0x2442c9c4  addiu       $v0, $v0, -0x363C
    ctx->pc = 0x18fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953412));
    // 0x18fd48: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18fd4c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18fd50: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x18fd50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x18fd54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fd58: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fd5c: 0x2463c9d0  addiu       $v1, $v1, -0x3630
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953424));
    // 0x18fd60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18fd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18fd64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18fd68: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x18fd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18fd6c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18fd70: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x18fd70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18fd74: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x18fd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18fd78: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x18fd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18fd7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd80: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x18fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x18fd84: 0x9064b280  lbu         $a0, -0x4D80($v1)
    ctx->pc = 0x18fd84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x18fd88: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x18fd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18fd8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd90: 0x2810  mfhi        $a1
    ctx->pc = 0x18fd90u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x18fd94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18fd94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fd98: 0x0  nop
    ctx->pc = 0x18fd98u;
    // NOP
    // 0x18fd9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fd9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fda0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x18fda0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x18fda4: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x18fda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x18fda8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18fda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18fdac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18fdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18fdb0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18fdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18fdb4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FDB4u;
    {
        const bool branch_taken_0x18fdb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDB4u;
            // 0x18fdb8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdb4) {
            ctx->pc = 0x18FDD0u;
            goto label_18fdd0;
        }
    }
    ctx->pc = 0x18FDBCu;
    // 0x18fdbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18fdc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18fdc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fdc4: 0x0  nop
    ctx->pc = 0x18fdc4u;
    // NOP
    // 0x18fdc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fdcc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x18fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_18fdd0:
    // 0x18fdd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fdd4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18fdd8: 0x2463c9c8  addiu       $v1, $v1, -0x3638
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x18fddc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18fde0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fde4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x18fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fde8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fdec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x18fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x18fdf0: 0x24634d04  addiu       $v1, $v1, 0x4D04
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19716));
    // 0x18fdf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18fdf8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x18fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fdfc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x18fdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18fe00: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x18fe00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18fe04: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x18fe04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18fe08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18fe0c: 0x2463c9fc  addiu       $v1, $v1, -0x3604
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953468));
    // 0x18fe10: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18fe14: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x18fe18: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x18fe18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fe1c: 0x24634d00  addiu       $v1, $v1, 0x4D00
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19712));
    // 0x18fe20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18fe24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fe28: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x18fe2c: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x18fe2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x18fe30: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x18fe30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18fe34: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x18fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x18fe38: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x18fe38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18fe3c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x18fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x18fe40: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x18fe40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18fe44: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x18fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x18fe48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18fe4c: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x18fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x18fe50: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18fe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18fe54: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x18fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x18fe58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18fe58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x18fe5c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18fe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18fe60: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18fe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18fe64: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18fe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18fe68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x18fe68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18fe6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FE6Cu;
    {
        const bool branch_taken_0x18fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE6Cu;
            // 0x18fe70: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe6c) {
            ctx->pc = 0x18FE7Cu;
            goto label_18fe7c;
        }
    }
    ctx->pc = 0x18FE74u;
    // 0x18fe74: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x18fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x18fe78: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x18fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_18fe7c:
    // 0x18fe7c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x18fe80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18fe84: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18fe88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fe8c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x18fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x18fe90: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x18fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x18fe94: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x18FE94u;
    SET_GPR_U32(ctx, 31, 0x18FE9Cu);
    ctx->pc = 0x18FE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE94u;
            // 0x18fe98: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (runtime->hasFunction(0x304B30u)) {
        auto targetFn = runtime->lookupFunction(0x304B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE9Cu; }
        if (ctx->pc != 0x18FE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304B30_0x304b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE9Cu; }
        if (ctx->pc != 0x18FE9Cu) { return; }
    }
    ctx->pc = 0x18FE9Cu;
label_18fe9c:
    // 0x18fe9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fea0: 0x3e00008  jr          $ra
    ctx->pc = 0x18FEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEA0u;
            // 0x18fea4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FEA8u;
    // 0x18fea8: 0x0  nop
    ctx->pc = 0x18fea8u;
    // NOP
    // 0x18feac: 0x0  nop
    ctx->pc = 0x18feacu;
    // NOP
    ctx->pc = 0x18feb0u;
}
