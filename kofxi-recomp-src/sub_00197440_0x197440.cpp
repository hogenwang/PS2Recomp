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

// Function: sub_00197440
// Address: 0x197440 - 0x197620
void sub_00197440_0x197440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197440_0x197440");
#endif

    switch (ctx->pc) {
        case 0x19753cu: goto label_19753c;
        case 0x197564u: goto label_197564;
        case 0x197584u: goto label_197584;
        default: break;
    }

    ctx->pc = 0x197440u;

    // 0x197440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x197444: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197448: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x197448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19744c: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x197450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x197450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x197454: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x197458: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x197458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19745c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x197460: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x197464: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x197464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19746c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19746cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197474: 0x26a60350  addiu       $a2, $s5, 0x350
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 848));
    // 0x197478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19747c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197480: 0x8c8800dc  lw          $t0, 0xDC($a0)
    ctx->pc = 0x197480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x197484: 0x8ca700dc  lw          $a3, 0xDC($a1)
    ctx->pc = 0x197484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x197488: 0x3109000c  andi        $t1, $t0, 0xC
    ctx->pc = 0x197488u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12);
    // 0x19748c: 0xac75d140  sw          $s5, -0x2EC0($v1)
    ctx->pc = 0x19748cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955328), GPR_U32(ctx, 21));
    // 0x197490: 0x99882  srl         $s3, $t1, 2
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 9), 2));
    // 0x197494: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x197494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197498: 0x30e3000c  andi        $v1, $a3, 0xC
    ctx->pc = 0x197498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x19749c: 0x38882  srl         $s1, $v1, 2
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1974a0: 0x31080030  andi        $t0, $t0, 0x30
    ctx->pc = 0x1974a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)48);
    // 0x1974a4: 0x30e30030  andi        $v1, $a3, 0x30
    ctx->pc = 0x1974a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
    // 0x1974a8: 0x89102  srl         $s2, $t0, 4
    ctx->pc = 0x1974a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x1974ac: 0xe560d158  swc1        $f0, -0x2EA8($t3)
    ctx->pc = 0x1974acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294955352), bits); }
    // 0x1974b0: 0x116040  sll         $t4, $s1, 1
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1974b4: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x1974b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1974b8: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x1974b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x1974bc: 0x1915821  addu        $t3, $t4, $s1
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1974c0: 0x38102  srl         $s0, $v1, 4
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1974c4: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1974c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x1974c8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1974cc: 0xe540d150  swc1        $f0, -0x2EB0($t2)
    ctx->pc = 0x1974ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294955344), bits); }
    // 0x1974d0: 0xad34d0c0  sw          $s4, -0x2F40($t1)
    ctx->pc = 0x1974d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294955200), GPR_U32(ctx, 20));
    // 0x1974d4: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x1974d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1974d8: 0xb2040  sll         $a0, $t3, 1
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1974dc: 0x955821  addu        $t3, $a0, $s5
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1974e0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1974e4: 0xe500d0d8  swc1        $f0, -0x2F28($t0)
    ctx->pc = 0x1974e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955224), bits); }
    // 0x1974e8: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1974ec: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x1974ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1974f0: 0x24960382  addiu       $s6, $a0, 0x382
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 898));
    // 0x1974f4: 0xe4e0d0d0  swc1        $f0, -0x2F30($a3)
    ctx->pc = 0x1974f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294955216), bits); }
    // 0x1974f8: 0x84840382  lh          $a0, 0x382($a0)
    ctx->pc = 0x1974f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 898)));
    // 0x1974fc: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1974FCu;
    {
        const bool branch_taken_0x1974fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0x26830350  addiu       $v1, $s4, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974fc) {
            ctx->pc = 0x1975F0u;
            goto label_1975f0;
        }
    }
    ctx->pc = 0x197504u;
    // 0x197504: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x197508: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x19750c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x19750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x197510: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x197514: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x197514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x197518: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19751c: 0x24970382  addiu       $s7, $a0, 0x382
    ctx->pc = 0x19751cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 898));
    // 0x197520: 0x84840382  lh          $a0, 0x382($a0)
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 898)));
    // 0x197524: 0x54800033  bnel        $a0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x197524u;
    {
        const bool branch_taken_0x197524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x197524) {
            ctx->pc = 0x197528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197524u;
            // 0x197528: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1975F4u;
            goto label_1975f4;
        }
    }
    ctx->pc = 0x19752Cu;
    // 0x19752c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197530: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x197530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197534: 0xc065ab8  jal         func_196AE0
    ctx->pc = 0x197534u;
    SET_GPR_U32(ctx, 31, 0x19753Cu);
    ctx->pc = 0x197538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197534u;
    // 0x197538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196AE0u, 0x197534u, 0x19753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19753Cu;
label_19753c:
    // 0x19753c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19753cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197544: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x197544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x197548: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x197548u;
    {
        const bool branch_taken_0x197548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197548) {
            ctx->pc = 0x1975F0u;
            goto label_1975f0;
        }
    }
    ctx->pc = 0x197550u;
    // 0x197550: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197554: 0x8442d190  lh          $v0, -0x2E70($v0)
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955408)));
    // 0x197558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19755c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x19755Cu;
    SET_GPR_U32(ctx, 31, 0x197564u);
    ctx->pc = 0x197560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19755Cu;
    // 0x197560: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x19755Cu, 0x197564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197564u;
label_197564:
    // 0x197564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19756c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197570: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x197570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x197574: 0x0  nop
    ctx->pc = 0x197574u;
    // NOP
    // 0x197578: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x197578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19757c: 0xc065d88  jal         func_197620
    ctx->pc = 0x19757Cu;
    SET_GPR_U32(ctx, 31, 0x197584u);
    ctx->pc = 0x197580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19757Cu;
    // 0x197580: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197620u, 0x19757Cu, 0x197584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197584u;
label_197584:
    // 0x197584: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x197584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197588: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x197588u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19758c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19758Cu;
    {
        const bool branch_taken_0x19758c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x197590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19758Cu;
        // 0x197590: 0x35043  sra         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19758c) {
            ctx->pc = 0x19759Cu;
            goto label_19759c;
        }
    }
    ctx->pc = 0x197594u;
    // 0x197594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197598: 0x35043  sra         $t2, $v1, 1
    ctx->pc = 0x197598u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
label_19759c:
    // 0x19759c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x19759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1975a0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1975a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1975a4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1975a8: 0x24c6cf50  addiu       $a2, $a2, -0x30B0
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954832));
    // 0x1975ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1975b0: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1975b4: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x1975b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1975b8: 0xa6ca0000  sh          $t2, 0x0($s6)
    ctx->pc = 0x1975b8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1975bc: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1975c0: 0xa4823  negu        $t1, $t2
    ctx->pc = 0x1975c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1975c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1975c8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1975cc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1975d0: 0xa6e90000  sh          $t1, 0x0($s7)
    ctx->pc = 0x1975d0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1975d4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1975d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1975dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1975dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1975e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1975e4: 0xa48a0000  sh          $t2, 0x0($a0)
    ctx->pc = 0x1975e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1975e8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1975ec: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1975ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
label_1975f0:
    // 0x1975f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1975f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1975f4:
    // 0x1975f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1975f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1975f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1975f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1975fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1975fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19760c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19760cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197614: 0x3e00008  jr          $ra
    ctx->pc = 0x197614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197614u;
        // 0x197618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19761Cu;
    // 0x19761c: 0x0  nop
    ctx->pc = 0x19761cu;
    // NOP
}
