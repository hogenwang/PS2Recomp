#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00314430
// Address: 0x314430 - 0x314ab0
void sub_00314430_0x314430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314430_0x314430");
#endif

    switch (ctx->pc) {
        case 0x3145a0u: goto label_3145a0;
        case 0x314784u: goto label_314784;
        case 0x31479cu: goto label_31479c;
        case 0x3147a8u: goto label_3147a8;
        case 0x314a34u: goto label_314a34;
        case 0x314a48u: goto label_314a48;
        case 0x314a4cu: goto label_314a4c;
        default: break;
    }

    ctx->pc = 0x314430u;

    // 0x314430: 0x46106800  add.s       $f0, $f13, $f16
    ctx->pc = 0x314430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[16]);
    // 0x314434: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x314434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x314438: 0x0  nop
    ctx->pc = 0x314438u;
    // NOP
    // 0x31443c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x31443cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314440: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x314440u;
    {
        const bool branch_taken_0x314440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314440) {
            ctx->pc = 0x314590u;
            goto label_314590;
        }
    }
    ctx->pc = 0x314448u;
    // 0x314448: 0x46106841  sub.s       $f1, $f13, $f16
    ctx->pc = 0x314448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[16]);
    // 0x31444c: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x31444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x314450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314454: 0x0  nop
    ctx->pc = 0x314454u;
    // NOP
    // 0x314458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x314458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31445c: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x31445Cu;
    {
        const bool branch_taken_0x31445c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31445c) {
            ctx->pc = 0x314590u;
            goto label_314590;
        }
    }
    ctx->pc = 0x314464u;
    // 0x314464: 0x46107000  add.s       $f0, $f14, $f16
    ctx->pc = 0x314464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[16]);
    // 0x314468: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x314468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31446c: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x31446Cu;
    {
        const bool branch_taken_0x31446c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31446c) {
            ctx->pc = 0x314590u;
            goto label_314590;
        }
    }
    ctx->pc = 0x314474u;
    // 0x314474: 0x46107041  sub.s       $f1, $f14, $f16
    ctx->pc = 0x314474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[16]);
    // 0x314478: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x314478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x31447c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31447cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314480: 0x0  nop
    ctx->pc = 0x314480u;
    // NOP
    // 0x314484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x314484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314488: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x314488u;
    {
        const bool branch_taken_0x314488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314488) {
            ctx->pc = 0x314590u;
            goto label_314590;
        }
    }
    ctx->pc = 0x314490u;
    // 0x314490: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x314490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x314494: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x314494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x314498: 0x8c6a29e0  lw          $t2, 0x29E0($v1)
    ctx->pc = 0x314498u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31449c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31449cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3144a0: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x3144a4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x3144a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x3144a8: 0x460f0042  mul.s       $f1, $f0, $f15
    ctx->pc = 0x3144a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x3144ac: 0x25084df0  addiu       $t0, $t0, 0x4DF0
    ctx->pc = 0x3144acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19952));
    // 0x3144b0: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x3144b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3144b4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x3144b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x3144b8: 0xea4823  subu        $t1, $a3, $t2
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3144bc: 0x25470001  addiu       $a3, $t2, 0x1
    ctx->pc = 0x3144bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3144c0: 0xac6729e0  sw          $a3, 0x29E0($v1)
    ctx->pc = 0x3144c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 7));
    // 0x3144c4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3144c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3144c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3144c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3144cc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3144d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3144d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3144d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3144d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3144d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3144D8u;
    {
        const bool branch_taken_0x3144d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3144DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144D8u;
            // 0x3144dc: 0x1034821  addu        $t1, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144d8) {
            ctx->pc = 0x3144F0u;
            goto label_3144f0;
        }
    }
    ctx->pc = 0x3144E0u;
    // 0x3144e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3144e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3144e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3144e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3144e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3144E8u;
    {
        const bool branch_taken_0x3144e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144E8u;
            // 0x3144ec: 0x3c03437f  lui         $v1, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144e8) {
            ctx->pc = 0x31450Cu;
            goto label_31450c;
        }
    }
    ctx->pc = 0x3144F0u;
label_3144f0:
    // 0x3144f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3144f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3144f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3144f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3144f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3144f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3144fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3144fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x314500: 0x0  nop
    ctx->pc = 0x314500u;
    // NOP
    // 0x314504: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x314504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x314508: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_31450c:
    // 0x31450c: 0x4323c  dsll32      $a2, $a0, 8
    ctx->pc = 0x31450cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 8));
    // 0x314510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314514: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x314514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x314518: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x314518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31451c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31451cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x314520: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x314520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x314524: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x314524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x314528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31452c: 0x0  nop
    ctx->pc = 0x31452cu;
    // NOP
    // 0x314530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x314530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x314534u;
    {
        const bool branch_taken_0x314534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x314538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314534u;
            // 0x314538: 0xad240110  sw          $a0, 0x110($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314534) {
            ctx->pc = 0x31454Cu;
            goto label_31454c;
        }
    }
    ctx->pc = 0x31453Cu;
    // 0x31453c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31453cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314540: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314544u;
    {
        const bool branch_taken_0x314544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314544u;
            // 0x314548: 0x5243c  dsll32      $a0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314544) {
            ctx->pc = 0x314564u;
            goto label_314564;
        }
    }
    ctx->pc = 0x31454Cu;
label_31454c:
    // 0x31454c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31454cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x314550: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314554: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314558: 0x0  nop
    ctx->pc = 0x314558u;
    // NOP
    // 0x31455c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x31455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x314560: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x314560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_314564:
    // 0x314564: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x314564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x314568: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x314568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31456c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31456cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x314570: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x314570u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x314574: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x314578: 0xe52d0004  swc1        $f13, 0x4($t1)
    ctx->pc = 0x314578u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x31457c: 0x246345a0  addiu       $v1, $v1, 0x45A0
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17824));
    // 0x314580: 0xe52e0008  swc1        $f14, 0x8($t1)
    ctx->pc = 0x314580u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x314584: 0xe530000c  swc1        $f16, 0xC($t1)
    ctx->pc = 0x314584u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x314588: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x314588u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
    // 0x31458c: 0xad230114  sw          $v1, 0x114($t1)
    ctx->pc = 0x31458cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 3));
label_314590:
    // 0x314590: 0x3e00008  jr          $ra
    ctx->pc = 0x314590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314598u;
    // 0x314598: 0x0  nop
    ctx->pc = 0x314598u;
    // NOP
    // 0x31459c: 0x0  nop
    ctx->pc = 0x31459cu;
    // NOP
label_3145a0:
    // 0x3145a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3145a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3145a4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x3145a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x3145a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3145a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3145ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3145acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3145b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3145b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3145b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3145b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3145b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3145b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3145bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3145bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3145c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3145c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3145c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3145c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3145c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3145c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3145cc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3145ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3145d0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3145d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3145d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3145d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3145d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3145d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3145dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3145e0: 0xc4960004  lwc1        $f22, 0x4($a0)
    ctx->pc = 0x3145e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3145e4: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3145e8: 0xc4950008  lwc1        $f21, 0x8($a0)
    ctx->pc = 0x3145e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3145ec: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x3145ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3145f0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3145f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3145f4: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x3145f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x3145f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3145fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3145FCu;
    {
        const bool branch_taken_0x3145fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x314600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3145FCu;
            // 0x314600: 0x38843  sra         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145fc) {
            ctx->pc = 0x31460Cu;
            goto label_31460c;
        }
    }
    ctx->pc = 0x314604u;
    // 0x314604: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x314604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x314608: 0x38843  sra         $s1, $v1, 1
    ctx->pc = 0x314608u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
label_31460c:
    // 0x31460c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31460cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x314610: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x314610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x314614: 0x24e700d0  addiu       $a3, $a3, 0xD0
    ctx->pc = 0x314614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x314618: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x314618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x31461c: 0xac670370  sw          $a3, 0x370($v1)
    ctx->pc = 0x31461cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 7));
    // 0x314620: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x314620u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314624: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x314628: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x314628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31462c: 0x3c032026  lui         $v1, 0x2026
    ctx->pc = 0x31462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8230 << 16));
    // 0x314630: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x314630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x314634: 0x3464c000  ori         $a0, $v1, 0xC000
    ctx->pc = 0x314634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x314638: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x314638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31463c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314640: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x314640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x314644: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x314644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x314648: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x314648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31464c: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x31464cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x314650: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x314650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x314654: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x314654u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x314658: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x314658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x31465c: 0x8c880370  lw          $t0, 0x370($a0)
    ctx->pc = 0x31465cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x314660: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x314660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x314664: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x314668: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x314668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31466c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31466cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x314670: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x314670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x314674: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x314674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x314678: 0xac670370  sw          $a3, 0x370($v1)
    ctx->pc = 0x314678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 7));
    // 0x31467c: 0x4b203  sra         $s6, $a0, 8
    ctx->pc = 0x31467cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 8));
    // 0x314680: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314684: 0xad100010  sw          $s0, 0x10($t0)
    ctx->pc = 0x314684u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 16));
    // 0x314688: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x314688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31468c: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31468cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314690: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x314690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x314694: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x314694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x314698: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x314698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x31469c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x31469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3146a0: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x3146a4: 0xacd70008  sw          $s7, 0x8($a2)
    ctx->pc = 0x3146a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 23));
    // 0x3146a8: 0x8ca70370  lw          $a3, 0x370($a1)
    ctx->pc = 0x3146a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3146ac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3146acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3146b0: 0xacf1000c  sw          $s1, 0xC($a3)
    ctx->pc = 0x3146b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 17));
    // 0x3146b4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3146b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3146b8: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x3146b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3146bc: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x3146c0: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x3146c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3146c4: 0xac670370  sw          $a3, 0x370($v1)
    ctx->pc = 0x3146c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 7));
    // 0x3146c8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x3146c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x3146cc: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x3146ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x3146d0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3146D0u;
    {
        const bool branch_taken_0x3146d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3146d0) {
            ctx->pc = 0x3146D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3146D0u;
            // 0x3146d4: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31472Cu;
            goto label_31472c;
        }
    }
    ctx->pc = 0x3146D8u;
    // 0x3146d8: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3146d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3146dc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3146dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3146e0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3146e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3146e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3146e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3146e8: 0x0  nop
    ctx->pc = 0x3146e8u;
    // NOP
    // 0x3146ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3146ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3146f0: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x3146f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3146f4: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3146f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3146f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3146fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3146fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314700: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x314700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x314704: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x314704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x314708: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x314708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31470c: 0x0  nop
    ctx->pc = 0x31470cu;
    // NOP
    // 0x314710: 0x1010  mfhi        $v0
    ctx->pc = 0x314710u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x314714: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x314714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x314718: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x314718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31471c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314720: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x314720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x314724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x314724u;
    {
        const bool branch_taken_0x314724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314724u;
            // 0x314728: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314724) {
            ctx->pc = 0x31473Cu;
            goto label_31473c;
        }
    }
    ctx->pc = 0x31472Cu;
label_31472c:
    // 0x31472c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31472cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x314730: 0x0  nop
    ctx->pc = 0x314730u;
    // NOP
    // 0x314734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314738: 0x24487100  addiu       $t0, $v0, 0x7100
    ctx->pc = 0x314738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_31473c:
    // 0x31473c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314740: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x314740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x314744: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x314744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x314748: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x314748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31474c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x314750: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x314750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x314754: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x314754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314758: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x314758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x31475c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x314760: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x314760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x314764: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x314764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x314768: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x314768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31476c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31476cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x314770: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x314770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x314774: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x314774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x314778: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x314778u;
    {
        const bool branch_taken_0x314778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314778u;
            // 0x31477c: 0xac470370  sw          $a3, 0x370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314778) {
            ctx->pc = 0x3148D8u;
            goto label_3148d8;
        }
    }
    ctx->pc = 0x314780u;
    // 0x314780: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x314780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314784:
    // 0x314784: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x314784u;
    {
        const bool branch_taken_0x314784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x314788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314784u;
            // 0x314788: 0x292001b  divu        $zero, $s4, $s2 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314784) {
            ctx->pc = 0x314790u;
            goto label_314790;
        }
    }
    ctx->pc = 0x31478Cu;
    // 0x31478c: 0x1cd  break       0, 7
    ctx->pc = 0x31478cu;
    runtime->handleBreak(rdram, ctx);
label_314790:
    // 0x314790: 0x9812  mflo        $s3
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x314794: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x314794u;
    SET_GPR_U32(ctx, 31, 0x31479Cu);
    ctx->pc = 0x314798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314794u;
            // 0x314798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (runtime->hasFunction(0x3128D0u)) {
        auto targetFn = runtime->lookupFunction(0x3128D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31479Cu; }
        if (ctx->pc != 0x31479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003128D0_0x3128d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31479Cu; }
        if (ctx->pc != 0x31479Cu) { return; }
    }
    ctx->pc = 0x31479Cu;
label_31479c:
    // 0x31479c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147a0: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x3147A0u;
    SET_GPR_U32(ctx, 31, 0x3147A8u);
    ctx->pc = 0x3147A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3147A0u;
            // 0x3147a4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (runtime->hasFunction(0x312900u)) {
        auto targetFn = runtime->lookupFunction(0x312900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147A8u; }
        if (ctx->pc != 0x3147A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312900_0x312900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147A8u; }
        if (ctx->pc != 0x3147A8u) { return; }
    }
    ctx->pc = 0x3147A8u;
label_3147a8:
    // 0x3147a8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3147ac: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3147acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3147b0: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3147b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3147b4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x3147b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3147b8: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3147b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3147bc: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3147bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3147c0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3147c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3147c4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3147c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3147c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3147c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3147cc: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x3147ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x3147d0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3147d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3147d4: 0x4617a082  mul.s       $f2, $f20, $f23
    ctx->pc = 0x3147d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x3147d8: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x3147d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x3147dc: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x3147dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x3147e0: 0x46161000  add.s       $f0, $f2, $f22
    ctx->pc = 0x3147e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x3147e4: 0xacd70008  sw          $s7, 0x8($a2)
    ctx->pc = 0x3147e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 23));
    // 0x3147e8: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x3147e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3147ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3147ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3147f0: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x3147f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x3147f4: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x3147f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3147f8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x3147f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3147fc: 0xac670370  sw          $a3, 0x370($v1)
    ctx->pc = 0x3147fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 7));
    // 0x314800: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314804: 0x0  nop
    ctx->pc = 0x314804u;
    // NOP
    // 0x314808: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x314808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31480c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x31480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x314810: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x314810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x314814: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x314814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x314818: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x314818u;
    {
        const bool branch_taken_0x314818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314818u;
            // 0x31481c: 0x46150840  add.s       $f1, $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314818) {
            ctx->pc = 0x314874u;
            goto label_314874;
        }
    }
    ctx->pc = 0x314820u;
    // 0x314820: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314824: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x314824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x314828: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x314828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31482c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31482cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314830: 0x0  nop
    ctx->pc = 0x314830u;
    // NOP
    // 0x314834: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x314838: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x314838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31483c: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x31483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x314840: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x314840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x314844: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x314844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314848: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x314848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31484c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x31484cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x314850: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x314854: 0x0  nop
    ctx->pc = 0x314854u;
    // NOP
    // 0x314858: 0x1010  mfhi        $v0
    ctx->pc = 0x314858u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31485c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x314860: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x314864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314868: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x314868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31486c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31486Cu;
    {
        const bool branch_taken_0x31486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31486Cu;
            // 0x314870: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31486c) {
            ctx->pc = 0x314888u;
            goto label_314888;
        }
    }
    ctx->pc = 0x314874u;
label_314874:
    // 0x314874: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314878: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x314878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31487c: 0x0  nop
    ctx->pc = 0x31487cu;
    // NOP
    // 0x314880: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314884: 0x24487100  addiu       $t0, $v0, 0x7100
    ctx->pc = 0x314884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_314888:
    // 0x314888: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x314888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31488c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31488cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x314890: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x314890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x314894: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x314894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x314898: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x314898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31489c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3148a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3148a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3148a4: 0x26940168  addiu       $s4, $s4, 0x168
    ctx->pc = 0x3148a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 360));
    // 0x3148a8: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x3148a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x3148ac: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3148acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3148b0: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3148b4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x3148b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x3148b8: 0x2b2282b  sltu        $a1, $s5, $s2
    ctx->pc = 0x3148b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3148bc: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x3148bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3148c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3148c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3148c4: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x3148c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3148c8: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3148cc: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3148CCu;
    {
        const bool branch_taken_0x3148cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3148D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3148CCu;
            // 0x3148d0: 0xac470370  sw          $a3, 0x370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148cc) {
            ctx->pc = 0x314784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_314784;
        }
    }
    ctx->pc = 0x3148D4u;
    // 0x3148d4: 0x0  nop
    ctx->pc = 0x3148d4u;
    // NOP
label_3148d8:
    // 0x3148d8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3148d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3148dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3148dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3148e0: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3148e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3148e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3148e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3148e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3148ec: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3148f0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3148f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3148f4: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x3148f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3148f8: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x3148f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x3148fc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3148fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x314900: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x314900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x314904: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x314904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x314908: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x314908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x31490c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31490cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x314910: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314914: 0xacd70008  sw          $s7, 0x8($a2)
    ctx->pc = 0x314914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 23));
    // 0x314918: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x314918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31491c: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x31491cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x314920: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x314920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x314924: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x314924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x314928: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x314928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31492c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31492cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314930: 0xac670370  sw          $a3, 0x370($v1)
    ctx->pc = 0x314930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 7));
    // 0x314934: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x314934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x314938: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x314938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x31493c: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x31493cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x314940: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x314940u;
    {
        const bool branch_taken_0x314940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314940u;
            // 0x314944: 0x4615a040  add.s       $f1, $f20, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314940) {
            ctx->pc = 0x31499Cu;
            goto label_31499c;
        }
    }
    ctx->pc = 0x314948u;
    // 0x314948: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31494c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x314950: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x314950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x314954: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314958: 0x0  nop
    ctx->pc = 0x314958u;
    // NOP
    // 0x31495c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31495cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x314960: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x314964: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x314964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x314968: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x314968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31496c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314970: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x314970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x314974: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x314974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x314978: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31497c: 0x0  nop
    ctx->pc = 0x31497cu;
    // NOP
    // 0x314980: 0x1010  mfhi        $v0
    ctx->pc = 0x314980u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x314984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x314984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x314988: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x314988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31498c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314990: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x314990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x314994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x314994u;
    {
        const bool branch_taken_0x314994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314994u;
            // 0x314998: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314994) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x31499Cu;
label_31499c:
    // 0x31499c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31499cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3149a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3149a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3149a4: 0x0  nop
    ctx->pc = 0x3149a4u;
    // NOP
    // 0x3149a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3149ac: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x3149acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3149b0:
    // 0x3149b0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3149b4: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3149b8: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x3149b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3149bc: 0x240aa833  addiu       $t2, $zero, -0x57CD
    ctx->pc = 0x3149bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3149c0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3149c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3149c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3149c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3149c8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3149c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x3149cc: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x3149ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3149d0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3149d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3149d4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3149d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3149d8: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3149d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3149dc: 0x8c480370  lw          $t0, 0x370($v0)
    ctx->pc = 0x3149dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3149e0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3149e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3149e4: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x3149e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x3149e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3149e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3149ec: 0x8c8a0370  lw          $t2, 0x370($a0)
    ctx->pc = 0x3149ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3149f0: 0xe24821  addu        $t1, $a3, $v0
    ctx->pc = 0x3149f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3149f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3149f8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3149f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3149fc: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x3149fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x314a00: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x314a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x314a04: 0x7c6000c0  sq          $zero, 0xC0($v1)
    ctx->pc = 0x314a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), GPR_VEC(ctx, 0));
    // 0x314a08: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x314a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x314a0c: 0xac4900c0  sw          $t1, 0xC0($v0)
    ctx->pc = 0x314a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 9));
    // 0x314a10: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x314a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x314a14: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x314a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x314a18: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x314a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x314a1c: 0x7d000000  sq          $zero, 0x0($t0)
    ctx->pc = 0x314a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 0));
    // 0x314a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x314a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a24: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x314a24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x314a28: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x314a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x314a2c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x314A2Cu;
    SET_GPR_U32(ctx, 31, 0x314A34u);
    ctx->pc = 0x314A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A2Cu;
            // 0x314a30: 0xaca70370  sw          $a3, 0x370($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A34u; }
        if (ctx->pc != 0x314A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A34u; }
        if (ctx->pc != 0x314A34u) { return; }
    }
    ctx->pc = 0x314A34u;
label_314a34:
    // 0x314a34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x314a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x314a38: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x314a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x314a3c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x314a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x314a40: 0xc040a04  jal         func_102810
    ctx->pc = 0x314A40u;
    SET_GPR_U32(ctx, 31, 0x314A48u);
    ctx->pc = 0x314A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A40u;
            // 0x314a44: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A48u; }
        if (ctx->pc != 0x314A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A48u; }
        if (ctx->pc != 0x314A48u) { return; }
    }
    ctx->pc = 0x314A48u;
label_314a48:
    // 0x314a48: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_314a4c:
    // 0x314a4c: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x314a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x314a50: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x314a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x314a54: 0x0  nop
    ctx->pc = 0x314a54u;
    // NOP
    // 0x314a58: 0x0  nop
    ctx->pc = 0x314a58u;
    // NOP
    // 0x314a5c: 0x0  nop
    ctx->pc = 0x314a5cu;
    // NOP
    // 0x314a60: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x314A60u;
    {
        const bool branch_taken_0x314a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314a60) {
            ctx->pc = 0x314A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_314a4c;
        }
    }
    ctx->pc = 0x314A68u;
    // 0x314a68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x314a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314a6c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x314a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x314a70: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x314a70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x314a74: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x314a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x314a78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x314a78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314a7c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x314a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x314a80: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x314a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314a84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x314a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314a88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x314a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314a8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x314a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314a90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x314a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x314A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A9Cu;
            // 0x314aa0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314AA4u;
    // 0x314aa4: 0x0  nop
    ctx->pc = 0x314aa4u;
    // NOP
    // 0x314aa8: 0x0  nop
    ctx->pc = 0x314aa8u;
    // NOP
    // 0x314aac: 0x0  nop
    ctx->pc = 0x314aacu;
    // NOP
    ctx->pc = 0x314ab0u;
}
