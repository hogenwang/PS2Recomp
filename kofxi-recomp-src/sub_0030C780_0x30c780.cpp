#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C780
// Address: 0x30c780 - 0x30d2b0
void sub_0030C780_0x30c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C780_0x30c780");
#endif

    switch (ctx->pc) {
        case 0x30c7d8u: goto label_30c7d8;
        case 0x30d168u: goto label_30d168;
        default: break;
    }

    ctx->pc = 0x30c780u;

    // 0x30c780: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x30c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30c784: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x30c784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x30c788: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x30c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x30c78c: 0x106002c6  beqz        $v1, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x30C78Cu;
    {
        const bool branch_taken_0x30c78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c78c) {
            ctx->pc = 0x30D2A8u;
            goto label_30d2a8;
        }
    }
    ctx->pc = 0x30C794u;
    // 0x30c794: 0x8cc500b0  lw          $a1, 0xB0($a2)
    ctx->pc = 0x30c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x30c798: 0x8cc300b8  lw          $v1, 0xB8($a2)
    ctx->pc = 0x30c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x30c79c: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x30c79cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x30c7a0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x30c7a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30c7a4: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x30c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x30c7a8: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x30c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30c7ac: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x30c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30c7b0: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x30c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x30c7b4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c7b8: 0x10a002bb  beqz        $a1, . + 4 + (0x2BB << 2)
    ctx->pc = 0x30C7B8u;
    {
        const bool branch_taken_0x30c7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7B8u;
            // 0x30c7bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7b8) {
            ctx->pc = 0x30D2A8u;
            goto label_30d2a8;
        }
    }
    ctx->pc = 0x30C7C0u;
    // 0x30c7c0: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x30c7c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x30c7c4: 0x14200262  bnez        $at, . + 4 + (0x262 << 2)
    ctx->pc = 0x30C7C4u;
    {
        const bool branch_taken_0x30c7c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7C4u;
            // 0x30c7c8: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7c4) {
            ctx->pc = 0x30D150u;
            goto label_30d150;
        }
    }
    ctx->pc = 0x30C7CCu;
    // 0x30c7cc: 0x3c094f00  lui         $t1, 0x4F00
    ctx->pc = 0x30c7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20224 << 16));
    // 0x30c7d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30c7d4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x30c7d4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c7d8:
    // 0x30c7d8: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x30c7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30c7dc: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C7DCu;
    {
        const bool branch_taken_0x30c7dc = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c7dc) {
            ctx->pc = 0x30C7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7DCu;
            // 0x30c7e0: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C7F0u;
            goto label_30c7f0;
        }
    }
    ctx->pc = 0x30C7E4u;
    // 0x30c7e4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c7e4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c7e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C7E8u;
    {
        const bool branch_taken_0x30c7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7E8u;
            // 0x30c7ec: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7e8) {
            ctx->pc = 0x30C808u;
            goto label_30c808;
        }
    }
    ctx->pc = 0x30C7F0u;
label_30c7f0:
    // 0x30c7f0: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c7f4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c7f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c7f8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c7f8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c7fc: 0x0  nop
    ctx->pc = 0x30c7fcu;
    // NOP
    // 0x30c800: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c804: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c808:
    // 0x30c808: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30c80c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30c80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c810: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30C810u;
    {
        const bool branch_taken_0x30c810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c810) {
            ctx->pc = 0x30C814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C810u;
            // 0x30c814: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C818u;
    // 0x30c818: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c81c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C820u;
            // 0x30c824: 0xacc9000c  sw          $t1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C83Cu;
            goto label_30c83c;
        }
    }
    ctx->pc = 0x30C828u;
label_30c828:
    // 0x30c828: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c82c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c830: 0x0  nop
    ctx->pc = 0x30c830u;
    // NOP
    // 0x30c834: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30c838: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x30c838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_30c83c:
    // 0x30c83c: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x30c83cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30c840: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C840u;
    {
        const bool branch_taken_0x30c840 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c840) {
            ctx->pc = 0x30C844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C840u;
            // 0x30c844: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C854u;
            goto label_30c854;
        }
    }
    ctx->pc = 0x30C848u;
    // 0x30c848: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c848u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c84c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C84Cu;
    {
        const bool branch_taken_0x30c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C84Cu;
            // 0x30c850: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c84c) {
            ctx->pc = 0x30C86Cu;
            goto label_30c86c;
        }
    }
    ctx->pc = 0x30C854u;
label_30c854:
    // 0x30c854: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c858: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c858u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c85c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c85cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c860: 0x0  nop
    ctx->pc = 0x30c860u;
    // NOP
    // 0x30c864: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c868: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c86c:
    // 0x30c86c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c86cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30c870: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30c870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c874: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30C874u;
    {
        const bool branch_taken_0x30c874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c874) {
            ctx->pc = 0x30C878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C874u;
            // 0x30c878: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C88Cu;
            goto label_30c88c;
        }
    }
    ctx->pc = 0x30C87Cu;
    // 0x30c87c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c87cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c880: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C884u;
    {
        const bool branch_taken_0x30c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C884u;
            // 0x30c888: 0xacc9003c  sw          $t1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c884) {
            ctx->pc = 0x30C8A0u;
            goto label_30c8a0;
        }
    }
    ctx->pc = 0x30C88Cu;
label_30c88c:
    // 0x30c88c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c88cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c890: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c894: 0x0  nop
    ctx->pc = 0x30c894u;
    // NOP
    // 0x30c898: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30c898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30c89c: 0xacc9003c  sw          $t1, 0x3C($a2)
    ctx->pc = 0x30c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 9));
label_30c8a0:
    // 0x30c8a0: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x30c8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x30c8a4: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C8A4u;
    {
        const bool branch_taken_0x30c8a4 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c8a4) {
            ctx->pc = 0x30C8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8A4u;
            // 0x30c8a8: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C8B8u;
            goto label_30c8b8;
        }
    }
    ctx->pc = 0x30C8ACu;
    // 0x30c8ac: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c8acu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c8b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C8B0u;
    {
        const bool branch_taken_0x30c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8B0u;
            // 0x30c8b4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8b0) {
            ctx->pc = 0x30C8D0u;
            goto label_30c8d0;
        }
    }
    ctx->pc = 0x30C8B8u;
label_30c8b8:
    // 0x30c8b8: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c8b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c8bc: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c8bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c8c0: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c8c0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c8c4: 0x0  nop
    ctx->pc = 0x30c8c4u;
    // NOP
    // 0x30c8c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c8cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c8ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c8d0:
    // 0x30c8d0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c8d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30c8d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30c8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c8d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30C8D8u;
    {
        const bool branch_taken_0x30c8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c8d8) {
            ctx->pc = 0x30C8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8D8u;
            // 0x30c8dc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C8F0u;
            goto label_30c8f0;
        }
    }
    ctx->pc = 0x30C8E0u;
    // 0x30c8e0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c8e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c8e4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c8e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C8E8u;
    {
        const bool branch_taken_0x30c8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8E8u;
            // 0x30c8ec: 0xacc9006c  sw          $t1, 0x6C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8e8) {
            ctx->pc = 0x30C904u;
            goto label_30c904;
        }
    }
    ctx->pc = 0x30C8F0u;
label_30c8f0:
    // 0x30c8f0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c8f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c8f4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c8f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c8f8: 0x0  nop
    ctx->pc = 0x30c8f8u;
    // NOP
    // 0x30c8fc: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30c8fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30c900: 0xacc9006c  sw          $t1, 0x6C($a2)
    ctx->pc = 0x30c900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 9));
label_30c904:
    // 0x30c904: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x30c908: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C908u;
    {
        const bool branch_taken_0x30c908 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c908) {
            ctx->pc = 0x30C90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C908u;
            // 0x30c90c: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C91Cu;
            goto label_30c91c;
        }
    }
    ctx->pc = 0x30C910u;
    // 0x30c910: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c910u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C914u;
    {
        const bool branch_taken_0x30c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C914u;
            // 0x30c918: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c914) {
            ctx->pc = 0x30C934u;
            goto label_30c934;
        }
    }
    ctx->pc = 0x30C91Cu;
label_30c91c:
    // 0x30c91c: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c91cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c920: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c920u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c924: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c924u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c928: 0x0  nop
    ctx->pc = 0x30c928u;
    // NOP
    // 0x30c92c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c930: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c934:
    // 0x30c934: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30c938: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30c938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c93c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30C93Cu;
    {
        const bool branch_taken_0x30c93c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c93c) {
            ctx->pc = 0x30C940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C93Cu;
            // 0x30c940: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C954u;
            goto label_30c954;
        }
    }
    ctx->pc = 0x30C944u;
    // 0x30c944: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c948: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c94c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C94Cu;
    {
        const bool branch_taken_0x30c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C94Cu;
            // 0x30c950: 0xacc9009c  sw          $t1, 0x9C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c94c) {
            ctx->pc = 0x30C968u;
            goto label_30c968;
        }
    }
    ctx->pc = 0x30C954u;
label_30c954:
    // 0x30c954: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c958: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c95c: 0x0  nop
    ctx->pc = 0x30c95cu;
    // NOP
    // 0x30c960: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30c960u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30c964: 0xacc9009c  sw          $t1, 0x9C($a2)
    ctx->pc = 0x30c964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 9));
label_30c968:
    // 0x30c968: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x30c968u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x30c96c: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C96Cu;
    {
        const bool branch_taken_0x30c96c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c96c) {
            ctx->pc = 0x30C970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C96Cu;
            // 0x30c970: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C980u;
            goto label_30c980;
        }
    }
    ctx->pc = 0x30C974u;
    // 0x30c974: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c974u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C978u;
    {
        const bool branch_taken_0x30c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C978u;
            // 0x30c97c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c978) {
            ctx->pc = 0x30C998u;
            goto label_30c998;
        }
    }
    ctx->pc = 0x30C980u;
label_30c980:
    // 0x30c980: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c984: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c988: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c988u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c98c: 0x0  nop
    ctx->pc = 0x30c98cu;
    // NOP
    // 0x30c990: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c994: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c994u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c998:
    // 0x30c998: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30c99c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30c99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c9a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30C9A0u;
    {
        const bool branch_taken_0x30c9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c9a0) {
            ctx->pc = 0x30C9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9A0u;
            // 0x30c9a4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C9B8u;
            goto label_30c9b8;
        }
    }
    ctx->pc = 0x30C9A8u;
    // 0x30c9a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c9ac: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c9b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C9B0u;
    {
        const bool branch_taken_0x30c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9B0u;
            // 0x30c9b4: 0xacc900cc  sw          $t1, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9b0) {
            ctx->pc = 0x30C9CCu;
            goto label_30c9cc;
        }
    }
    ctx->pc = 0x30C9B8u;
label_30c9b8:
    // 0x30c9b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30c9bc: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30c9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30c9c0: 0x0  nop
    ctx->pc = 0x30c9c0u;
    // NOP
    // 0x30c9c4: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30c9c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30c9c8: 0xacc900cc  sw          $t1, 0xCC($a2)
    ctx->pc = 0x30c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 9));
label_30c9cc:
    // 0x30c9cc: 0x8ce90014  lw          $t1, 0x14($a3)
    ctx->pc = 0x30c9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x30c9d0: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C9D0u;
    {
        const bool branch_taken_0x30c9d0 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30c9d0) {
            ctx->pc = 0x30C9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9D0u;
            // 0x30c9d4: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C9E4u;
            goto label_30c9e4;
        }
    }
    ctx->pc = 0x30C9D8u;
    // 0x30c9d8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30c9d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c9dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C9DCu;
    {
        const bool branch_taken_0x30c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9DCu;
            // 0x30c9e0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9dc) {
            ctx->pc = 0x30C9FCu;
            goto label_30c9fc;
        }
    }
    ctx->pc = 0x30C9E4u;
label_30c9e4:
    // 0x30c9e4: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30c9e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30c9e8: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30c9e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30c9ec: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30c9ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c9f0: 0x0  nop
    ctx->pc = 0x30c9f0u;
    // NOP
    // 0x30c9f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30c9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30c9f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30c9f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30c9fc:
    // 0x30c9fc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30c9fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ca00: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca04: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CA04u;
    {
        const bool branch_taken_0x30ca04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca04) {
            ctx->pc = 0x30CA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA04u;
            // 0x30ca08: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CA1Cu;
            goto label_30ca1c;
        }
    }
    ctx->pc = 0x30CA0Cu;
    // 0x30ca0c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ca0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ca10: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ca10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ca14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CA14u;
    {
        const bool branch_taken_0x30ca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA14u;
            // 0x30ca18: 0xacc900fc  sw          $t1, 0xFC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca14) {
            ctx->pc = 0x30CA30u;
            goto label_30ca30;
        }
    }
    ctx->pc = 0x30CA1Cu;
label_30ca1c:
    // 0x30ca1c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ca1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ca20: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ca20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ca24: 0x0  nop
    ctx->pc = 0x30ca24u;
    // NOP
    // 0x30ca28: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30ca28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30ca2c: 0xacc900fc  sw          $t1, 0xFC($a2)
    ctx->pc = 0x30ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 9));
label_30ca30:
    // 0x30ca30: 0x8ce90018  lw          $t1, 0x18($a3)
    ctx->pc = 0x30ca30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x30ca34: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CA34u;
    {
        const bool branch_taken_0x30ca34 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30ca34) {
            ctx->pc = 0x30CA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA34u;
            // 0x30ca38: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CA48u;
            goto label_30ca48;
        }
    }
    ctx->pc = 0x30CA3Cu;
    // 0x30ca3c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30ca3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ca40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CA40u;
    {
        const bool branch_taken_0x30ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA40u;
            // 0x30ca44: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca40) {
            ctx->pc = 0x30CA60u;
            goto label_30ca60;
        }
    }
    ctx->pc = 0x30CA48u;
label_30ca48:
    // 0x30ca48: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30ca48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30ca4c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30ca4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30ca50: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30ca50u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ca54: 0x0  nop
    ctx->pc = 0x30ca54u;
    // NOP
    // 0x30ca58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30ca58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30ca5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30ca5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30ca60:
    // 0x30ca60: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30ca60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ca64: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30ca64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca68: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA68u;
            // 0x30ca6c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CA80u;
            goto label_30ca80;
        }
    }
    ctx->pc = 0x30CA70u;
    // 0x30ca70: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ca70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ca74: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ca74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ca78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CA78u;
    {
        const bool branch_taken_0x30ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA78u;
            // 0x30ca7c: 0xacc9012c  sw          $t1, 0x12C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 300), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca78) {
            ctx->pc = 0x30CA94u;
            goto label_30ca94;
        }
    }
    ctx->pc = 0x30CA80u;
label_30ca80:
    // 0x30ca80: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ca80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ca84: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ca84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ca88: 0x0  nop
    ctx->pc = 0x30ca88u;
    // NOP
    // 0x30ca8c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30ca8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30ca90: 0xacc9012c  sw          $t1, 0x12C($a2)
    ctx->pc = 0x30ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 300), GPR_U32(ctx, 9));
label_30ca94:
    // 0x30ca94: 0x8ce9001c  lw          $t1, 0x1C($a3)
    ctx->pc = 0x30ca94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x30ca98: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CA98u;
    {
        const bool branch_taken_0x30ca98 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30ca98) {
            ctx->pc = 0x30CA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA98u;
            // 0x30ca9c: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CAACu;
            goto label_30caac;
        }
    }
    ctx->pc = 0x30CAA0u;
    // 0x30caa0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30caa0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30caa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CAA4u;
    {
        const bool branch_taken_0x30caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAA4u;
            // 0x30caa8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caa4) {
            ctx->pc = 0x30CAC4u;
            goto label_30cac4;
        }
    }
    ctx->pc = 0x30CAACu;
label_30caac:
    // 0x30caac: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30caacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cab0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cab0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cab4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cab4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cab8: 0x0  nop
    ctx->pc = 0x30cab8u;
    // NOP
    // 0x30cabc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cac0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cac0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cac4:
    // 0x30cac4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cac8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cacc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CACCu;
    {
        const bool branch_taken_0x30cacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cacc) {
            ctx->pc = 0x30CAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CACCu;
            // 0x30cad0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CAE4u;
            goto label_30cae4;
        }
    }
    ctx->pc = 0x30CAD4u;
    // 0x30cad4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cad8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cadc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CADCu;
    {
        const bool branch_taken_0x30cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CADCu;
            // 0x30cae0: 0xacc9015c  sw          $t1, 0x15C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 348), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cadc) {
            ctx->pc = 0x30CAF8u;
            goto label_30caf8;
        }
    }
    ctx->pc = 0x30CAE4u;
label_30cae4:
    // 0x30cae4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cae8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30caec: 0x0  nop
    ctx->pc = 0x30caecu;
    // NOP
    // 0x30caf0: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30caf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30caf4: 0xacc9015c  sw          $t1, 0x15C($a2)
    ctx->pc = 0x30caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 348), GPR_U32(ctx, 9));
label_30caf8:
    // 0x30caf8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x30caf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x30cafc: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CAFCu;
    {
        const bool branch_taken_0x30cafc = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cafc) {
            ctx->pc = 0x30CB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAFCu;
            // 0x30cb00: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CB10u;
            goto label_30cb10;
        }
    }
    ctx->pc = 0x30CB04u;
    // 0x30cb04: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cb04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cb08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CB08u;
    {
        const bool branch_taken_0x30cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB08u;
            // 0x30cb0c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb08) {
            ctx->pc = 0x30CB28u;
            goto label_30cb28;
        }
    }
    ctx->pc = 0x30CB10u;
label_30cb10:
    // 0x30cb10: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cb10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cb14: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cb14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cb18: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cb18u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cb1c: 0x0  nop
    ctx->pc = 0x30cb1cu;
    // NOP
    // 0x30cb20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cb24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cb24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cb28:
    // 0x30cb28: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cb28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cb2c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cb2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cb30: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CB30u;
    {
        const bool branch_taken_0x30cb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cb30) {
            ctx->pc = 0x30CB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB30u;
            // 0x30cb34: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CB48u;
            goto label_30cb48;
        }
    }
    ctx->pc = 0x30CB38u;
    // 0x30cb38: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cb3c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cb40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CB40u;
    {
        const bool branch_taken_0x30cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB40u;
            // 0x30cb44: 0xacc9018c  sw          $t1, 0x18C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 396), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb40) {
            ctx->pc = 0x30CB5Cu;
            goto label_30cb5c;
        }
    }
    ctx->pc = 0x30CB48u;
label_30cb48:
    // 0x30cb48: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cb48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cb4c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cb4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cb50: 0x0  nop
    ctx->pc = 0x30cb50u;
    // NOP
    // 0x30cb54: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cb54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cb58: 0xacc9018c  sw          $t1, 0x18C($a2)
    ctx->pc = 0x30cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 396), GPR_U32(ctx, 9));
label_30cb5c:
    // 0x30cb5c: 0x8ce90024  lw          $t1, 0x24($a3)
    ctx->pc = 0x30cb5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x30cb60: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CB60u;
    {
        const bool branch_taken_0x30cb60 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cb60) {
            ctx->pc = 0x30CB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB60u;
            // 0x30cb64: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CB74u;
            goto label_30cb74;
        }
    }
    ctx->pc = 0x30CB68u;
    // 0x30cb68: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cb68u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cb6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CB6Cu;
    {
        const bool branch_taken_0x30cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB6Cu;
            // 0x30cb70: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb6c) {
            ctx->pc = 0x30CB8Cu;
            goto label_30cb8c;
        }
    }
    ctx->pc = 0x30CB74u;
label_30cb74:
    // 0x30cb74: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cb74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cb78: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cb78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cb7c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cb7cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cb80: 0x0  nop
    ctx->pc = 0x30cb80u;
    // NOP
    // 0x30cb84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cb88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cb88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cb8c:
    // 0x30cb8c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cb8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cb90: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cb94: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CB94u;
    {
        const bool branch_taken_0x30cb94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cb94) {
            ctx->pc = 0x30CB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB94u;
            // 0x30cb98: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CBACu;
            goto label_30cbac;
        }
    }
    ctx->pc = 0x30CB9Cu;
    // 0x30cb9c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cba0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CBA4u;
    {
        const bool branch_taken_0x30cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBA4u;
            // 0x30cba8: 0xacc901bc  sw          $t1, 0x1BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 444), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cba4) {
            ctx->pc = 0x30CBC0u;
            goto label_30cbc0;
        }
    }
    ctx->pc = 0x30CBACu;
label_30cbac:
    // 0x30cbac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cbacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cbb0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cbb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cbb4: 0x0  nop
    ctx->pc = 0x30cbb4u;
    // NOP
    // 0x30cbb8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cbb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cbbc: 0xacc901bc  sw          $t1, 0x1BC($a2)
    ctx->pc = 0x30cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 444), GPR_U32(ctx, 9));
label_30cbc0:
    // 0x30cbc0: 0x8ce90028  lw          $t1, 0x28($a3)
    ctx->pc = 0x30cbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x30cbc4: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CBC4u;
    {
        const bool branch_taken_0x30cbc4 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cbc4) {
            ctx->pc = 0x30CBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBC4u;
            // 0x30cbc8: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CBD8u;
            goto label_30cbd8;
        }
    }
    ctx->pc = 0x30CBCCu;
    // 0x30cbcc: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cbccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cbd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CBD0u;
    {
        const bool branch_taken_0x30cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBD0u;
            // 0x30cbd4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbd0) {
            ctx->pc = 0x30CBF0u;
            goto label_30cbf0;
        }
    }
    ctx->pc = 0x30CBD8u;
label_30cbd8:
    // 0x30cbd8: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cbd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cbdc: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cbdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cbe0: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cbe0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cbe4: 0x0  nop
    ctx->pc = 0x30cbe4u;
    // NOP
    // 0x30cbe8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cbe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cbec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cbecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cbf0:
    // 0x30cbf0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cbf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cbf4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cbf8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CBF8u;
    {
        const bool branch_taken_0x30cbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cbf8) {
            ctx->pc = 0x30CBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CBF8u;
            // 0x30cbfc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CC10u;
            goto label_30cc10;
        }
    }
    ctx->pc = 0x30CC00u;
    // 0x30cc00: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cc00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cc04: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cc04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cc08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC08u;
    {
        const bool branch_taken_0x30cc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC08u;
            // 0x30cc0c: 0xacc901ec  sw          $t1, 0x1EC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 492), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc08) {
            ctx->pc = 0x30CC24u;
            goto label_30cc24;
        }
    }
    ctx->pc = 0x30CC10u;
label_30cc10:
    // 0x30cc10: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cc10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cc14: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cc18: 0x0  nop
    ctx->pc = 0x30cc18u;
    // NOP
    // 0x30cc1c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cc1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cc20: 0xacc901ec  sw          $t1, 0x1EC($a2)
    ctx->pc = 0x30cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 492), GPR_U32(ctx, 9));
label_30cc24:
    // 0x30cc24: 0x8ce9002c  lw          $t1, 0x2C($a3)
    ctx->pc = 0x30cc24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x30cc28: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CC28u;
    {
        const bool branch_taken_0x30cc28 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cc28) {
            ctx->pc = 0x30CC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC28u;
            // 0x30cc2c: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CC3Cu;
            goto label_30cc3c;
        }
    }
    ctx->pc = 0x30CC30u;
    // 0x30cc30: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cc30u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cc34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CC34u;
    {
        const bool branch_taken_0x30cc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC34u;
            // 0x30cc38: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc34) {
            ctx->pc = 0x30CC54u;
            goto label_30cc54;
        }
    }
    ctx->pc = 0x30CC3Cu;
label_30cc3c:
    // 0x30cc3c: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cc3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cc40: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cc40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cc44: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cc44u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cc48: 0x0  nop
    ctx->pc = 0x30cc48u;
    // NOP
    // 0x30cc4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cc4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cc50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cc50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cc54:
    // 0x30cc54: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cc54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cc58: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cc58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cc5c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CC5Cu;
    {
        const bool branch_taken_0x30cc5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cc5c) {
            ctx->pc = 0x30CC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC5Cu;
            // 0x30cc60: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CC74u;
            goto label_30cc74;
        }
    }
    ctx->pc = 0x30CC64u;
    // 0x30cc64: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cc68: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cc68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cc6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC6Cu;
    {
        const bool branch_taken_0x30cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC6Cu;
            // 0x30cc70: 0xacc9021c  sw          $t1, 0x21C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc6c) {
            ctx->pc = 0x30CC88u;
            goto label_30cc88;
        }
    }
    ctx->pc = 0x30CC74u;
label_30cc74:
    // 0x30cc74: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cc74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cc78: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cc78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cc7c: 0x0  nop
    ctx->pc = 0x30cc7cu;
    // NOP
    // 0x30cc80: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cc80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cc84: 0xacc9021c  sw          $t1, 0x21C($a2)
    ctx->pc = 0x30cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 9));
label_30cc88:
    // 0x30cc88: 0x8ce90030  lw          $t1, 0x30($a3)
    ctx->pc = 0x30cc88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x30cc8c: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CC8Cu;
    {
        const bool branch_taken_0x30cc8c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cc8c) {
            ctx->pc = 0x30CC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC8Cu;
            // 0x30cc90: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CCA0u;
            goto label_30cca0;
        }
    }
    ctx->pc = 0x30CC94u;
    // 0x30cc94: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cc94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cc98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CC98u;
    {
        const bool branch_taken_0x30cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC98u;
            // 0x30cc9c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc98) {
            ctx->pc = 0x30CCB8u;
            goto label_30ccb8;
        }
    }
    ctx->pc = 0x30CCA0u;
label_30cca0:
    // 0x30cca0: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cca0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cca4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cca8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cca8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ccac: 0x0  nop
    ctx->pc = 0x30ccacu;
    // NOP
    // 0x30ccb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30ccb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30ccb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30ccb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30ccb8:
    // 0x30ccb8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30ccb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ccbc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30ccbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ccc0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CCC0u;
    {
        const bool branch_taken_0x30ccc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ccc0) {
            ctx->pc = 0x30CCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCC0u;
            // 0x30ccc4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CCD8u;
            goto label_30ccd8;
        }
    }
    ctx->pc = 0x30CCC8u;
    // 0x30ccc8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ccc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cccc: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ccccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ccd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CCD0u;
    {
        const bool branch_taken_0x30ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCD0u;
            // 0x30ccd4: 0xacc9024c  sw          $t1, 0x24C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 588), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccd0) {
            ctx->pc = 0x30CCECu;
            goto label_30ccec;
        }
    }
    ctx->pc = 0x30CCD8u;
label_30ccd8:
    // 0x30ccd8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ccd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ccdc: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ccdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cce0: 0x0  nop
    ctx->pc = 0x30cce0u;
    // NOP
    // 0x30cce4: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cce4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cce8: 0xacc9024c  sw          $t1, 0x24C($a2)
    ctx->pc = 0x30cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 588), GPR_U32(ctx, 9));
label_30ccec:
    // 0x30ccec: 0x8ce90034  lw          $t1, 0x34($a3)
    ctx->pc = 0x30ccecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x30ccf0: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CCF0u;
    {
        const bool branch_taken_0x30ccf0 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30ccf0) {
            ctx->pc = 0x30CCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCF0u;
            // 0x30ccf4: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CD04u;
            goto label_30cd04;
        }
    }
    ctx->pc = 0x30CCF8u;
    // 0x30ccf8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30ccf8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ccfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CCFCu;
    {
        const bool branch_taken_0x30ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCFCu;
            // 0x30cd00: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccfc) {
            ctx->pc = 0x30CD1Cu;
            goto label_30cd1c;
        }
    }
    ctx->pc = 0x30CD04u;
label_30cd04:
    // 0x30cd04: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cd04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cd08: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cd08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cd0c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cd0cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cd10: 0x0  nop
    ctx->pc = 0x30cd10u;
    // NOP
    // 0x30cd14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cd14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cd18: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cd18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cd1c:
    // 0x30cd1c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cd1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cd20: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cd24: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CD24u;
    {
        const bool branch_taken_0x30cd24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cd24) {
            ctx->pc = 0x30CD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD24u;
            // 0x30cd28: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CD3Cu;
            goto label_30cd3c;
        }
    }
    ctx->pc = 0x30CD2Cu;
    // 0x30cd2c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cd2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cd30: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cd30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cd34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CD34u;
    {
        const bool branch_taken_0x30cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD34u;
            // 0x30cd38: 0xacc9027c  sw          $t1, 0x27C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd34) {
            ctx->pc = 0x30CD50u;
            goto label_30cd50;
        }
    }
    ctx->pc = 0x30CD3Cu;
label_30cd3c:
    // 0x30cd3c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cd3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cd40: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cd40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cd44: 0x0  nop
    ctx->pc = 0x30cd44u;
    // NOP
    // 0x30cd48: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cd48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cd4c: 0xacc9027c  sw          $t1, 0x27C($a2)
    ctx->pc = 0x30cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 9));
label_30cd50:
    // 0x30cd50: 0x8ce90038  lw          $t1, 0x38($a3)
    ctx->pc = 0x30cd50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x30cd54: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CD54u;
    {
        const bool branch_taken_0x30cd54 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cd54) {
            ctx->pc = 0x30CD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD54u;
            // 0x30cd58: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CD68u;
            goto label_30cd68;
        }
    }
    ctx->pc = 0x30CD5Cu;
    // 0x30cd5c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cd5cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cd60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CD60u;
    {
        const bool branch_taken_0x30cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD60u;
            // 0x30cd64: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd60) {
            ctx->pc = 0x30CD80u;
            goto label_30cd80;
        }
    }
    ctx->pc = 0x30CD68u;
label_30cd68:
    // 0x30cd68: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cd68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cd6c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cd6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cd70: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cd70u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cd74: 0x0  nop
    ctx->pc = 0x30cd74u;
    // NOP
    // 0x30cd78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cd7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cd7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cd80:
    // 0x30cd80: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cd84: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cd84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cd88: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CD88u;
    {
        const bool branch_taken_0x30cd88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cd88) {
            ctx->pc = 0x30CD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD88u;
            // 0x30cd8c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CDA0u;
            goto label_30cda0;
        }
    }
    ctx->pc = 0x30CD90u;
    // 0x30cd90: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cd94: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cd98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CD98u;
    {
        const bool branch_taken_0x30cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD98u;
            // 0x30cd9c: 0xacc902ac  sw          $t1, 0x2AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd98) {
            ctx->pc = 0x30CDB4u;
            goto label_30cdb4;
        }
    }
    ctx->pc = 0x30CDA0u;
label_30cda0:
    // 0x30cda0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cda0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cda4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cda8: 0x0  nop
    ctx->pc = 0x30cda8u;
    // NOP
    // 0x30cdac: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cdacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cdb0: 0xacc902ac  sw          $t1, 0x2AC($a2)
    ctx->pc = 0x30cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 9));
label_30cdb4:
    // 0x30cdb4: 0x8ce9003c  lw          $t1, 0x3C($a3)
    ctx->pc = 0x30cdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x30cdb8: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CDB8u;
    {
        const bool branch_taken_0x30cdb8 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cdb8) {
            ctx->pc = 0x30CDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDB8u;
            // 0x30cdbc: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CDCCu;
            goto label_30cdcc;
        }
    }
    ctx->pc = 0x30CDC0u;
    // 0x30cdc0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cdc0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cdc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CDC4u;
    {
        const bool branch_taken_0x30cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDC4u;
            // 0x30cdc8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdc4) {
            ctx->pc = 0x30CDE4u;
            goto label_30cde4;
        }
    }
    ctx->pc = 0x30CDCCu;
label_30cdcc:
    // 0x30cdcc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cdccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cdd0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cdd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cdd4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cdd4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cdd8: 0x0  nop
    ctx->pc = 0x30cdd8u;
    // NOP
    // 0x30cddc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cde0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cde0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cde4:
    // 0x30cde4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cde4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cde8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cdec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CDECu;
    {
        const bool branch_taken_0x30cdec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cdec) {
            ctx->pc = 0x30CDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDECu;
            // 0x30cdf0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CE04u;
            goto label_30ce04;
        }
    }
    ctx->pc = 0x30CDF4u;
    // 0x30cdf4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cdf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cdf8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cdf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cdfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CDFCu;
    {
        const bool branch_taken_0x30cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDFCu;
            // 0x30ce00: 0xacc902dc  sw          $t1, 0x2DC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 732), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdfc) {
            ctx->pc = 0x30CE18u;
            goto label_30ce18;
        }
    }
    ctx->pc = 0x30CE04u;
label_30ce04:
    // 0x30ce04: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ce04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ce08: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ce08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ce0c: 0x0  nop
    ctx->pc = 0x30ce0cu;
    // NOP
    // 0x30ce10: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30ce10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30ce14: 0xacc902dc  sw          $t1, 0x2DC($a2)
    ctx->pc = 0x30ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 732), GPR_U32(ctx, 9));
label_30ce18:
    // 0x30ce18: 0x8ce90040  lw          $t1, 0x40($a3)
    ctx->pc = 0x30ce18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x30ce1c: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CE1Cu;
    {
        const bool branch_taken_0x30ce1c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30ce1c) {
            ctx->pc = 0x30CE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE1Cu;
            // 0x30ce20: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30CE24u;
    // 0x30ce24: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30ce24u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ce28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CE28u;
    {
        const bool branch_taken_0x30ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE28u;
            // 0x30ce2c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce28) {
            ctx->pc = 0x30CE48u;
            goto label_30ce48;
        }
    }
    ctx->pc = 0x30CE30u;
label_30ce30:
    // 0x30ce30: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30ce30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30ce34: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30ce34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30ce38: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30ce38u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ce3c: 0x0  nop
    ctx->pc = 0x30ce3cu;
    // NOP
    // 0x30ce40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30ce40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30ce44: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30ce44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30ce48:
    // 0x30ce48: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30ce48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ce4c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30ce4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ce50: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CE50u;
    {
        const bool branch_taken_0x30ce50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ce50) {
            ctx->pc = 0x30CE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE50u;
            // 0x30ce54: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CE68u;
            goto label_30ce68;
        }
    }
    ctx->pc = 0x30CE58u;
    // 0x30ce58: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ce58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ce5c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ce5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ce60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CE60u;
    {
        const bool branch_taken_0x30ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE60u;
            // 0x30ce64: 0xacc9030c  sw          $t1, 0x30C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 780), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce60) {
            ctx->pc = 0x30CE7Cu;
            goto label_30ce7c;
        }
    }
    ctx->pc = 0x30CE68u;
label_30ce68:
    // 0x30ce68: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ce68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ce6c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ce6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ce70: 0x0  nop
    ctx->pc = 0x30ce70u;
    // NOP
    // 0x30ce74: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30ce74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30ce78: 0xacc9030c  sw          $t1, 0x30C($a2)
    ctx->pc = 0x30ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 780), GPR_U32(ctx, 9));
label_30ce7c:
    // 0x30ce7c: 0x8ce90044  lw          $t1, 0x44($a3)
    ctx->pc = 0x30ce7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x30ce80: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CE80u;
    {
        const bool branch_taken_0x30ce80 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30ce80) {
            ctx->pc = 0x30CE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE80u;
            // 0x30ce84: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CE94u;
            goto label_30ce94;
        }
    }
    ctx->pc = 0x30CE88u;
    // 0x30ce88: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30ce88u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ce8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CE8Cu;
    {
        const bool branch_taken_0x30ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE8Cu;
            // 0x30ce90: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce8c) {
            ctx->pc = 0x30CEACu;
            goto label_30ceac;
        }
    }
    ctx->pc = 0x30CE94u;
label_30ce94:
    // 0x30ce94: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30ce94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30ce98: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30ce98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30ce9c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30ce9cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cea0: 0x0  nop
    ctx->pc = 0x30cea0u;
    // NOP
    // 0x30cea4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cea8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cea8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30ceac:
    // 0x30ceac: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30ceacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ceb0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30ceb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ceb4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CEB4u;
    {
        const bool branch_taken_0x30ceb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ceb4) {
            ctx->pc = 0x30CEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEB4u;
            // 0x30ceb8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CECCu;
            goto label_30cecc;
        }
    }
    ctx->pc = 0x30CEBCu;
    // 0x30cebc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cec0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cec4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CEC4u;
    {
        const bool branch_taken_0x30cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEC4u;
            // 0x30cec8: 0xacc9033c  sw          $t1, 0x33C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 828), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cec4) {
            ctx->pc = 0x30CEE0u;
            goto label_30cee0;
        }
    }
    ctx->pc = 0x30CECCu;
label_30cecc:
    // 0x30cecc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ceccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ced0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30ced0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30ced4: 0x0  nop
    ctx->pc = 0x30ced4u;
    // NOP
    // 0x30ced8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30ced8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cedc: 0xacc9033c  sw          $t1, 0x33C($a2)
    ctx->pc = 0x30cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 828), GPR_U32(ctx, 9));
label_30cee0:
    // 0x30cee0: 0x8ce90048  lw          $t1, 0x48($a3)
    ctx->pc = 0x30cee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x30cee4: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CEE4u;
    {
        const bool branch_taken_0x30cee4 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cee4) {
            ctx->pc = 0x30CEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEE4u;
            // 0x30cee8: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CEECu;
    // 0x30ceec: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30ceecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cef0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CEF0u;
    {
        const bool branch_taken_0x30cef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CEF0u;
            // 0x30cef4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cef0) {
            ctx->pc = 0x30CF10u;
            goto label_30cf10;
        }
    }
    ctx->pc = 0x30CEF8u;
label_30cef8:
    // 0x30cef8: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cef8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cefc: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cefcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cf00: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cf00u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cf04: 0x0  nop
    ctx->pc = 0x30cf04u;
    // NOP
    // 0x30cf08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cf08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cf0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cf0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cf10:
    // 0x30cf10: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cf10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cf14: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cf14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cf18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CF18u;
    {
        const bool branch_taken_0x30cf18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cf18) {
            ctx->pc = 0x30CF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF18u;
            // 0x30cf1c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CF30u;
            goto label_30cf30;
        }
    }
    ctx->pc = 0x30CF20u;
    // 0x30cf20: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cf24: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cf28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CF28u;
    {
        const bool branch_taken_0x30cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF28u;
            // 0x30cf2c: 0xacc9036c  sw          $t1, 0x36C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 876), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf28) {
            ctx->pc = 0x30CF44u;
            goto label_30cf44;
        }
    }
    ctx->pc = 0x30CF30u;
label_30cf30:
    // 0x30cf30: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cf30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cf34: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cf34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cf38: 0x0  nop
    ctx->pc = 0x30cf38u;
    // NOP
    // 0x30cf3c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cf3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cf40: 0xacc9036c  sw          $t1, 0x36C($a2)
    ctx->pc = 0x30cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 876), GPR_U32(ctx, 9));
label_30cf44:
    // 0x30cf44: 0x8ce9004c  lw          $t1, 0x4C($a3)
    ctx->pc = 0x30cf44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x30cf48: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CF48u;
    {
        const bool branch_taken_0x30cf48 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cf48) {
            ctx->pc = 0x30CF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF48u;
            // 0x30cf4c: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CF5Cu;
            goto label_30cf5c;
        }
    }
    ctx->pc = 0x30CF50u;
    // 0x30cf50: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cf50u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cf54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CF54u;
    {
        const bool branch_taken_0x30cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF54u;
            // 0x30cf58: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf54) {
            ctx->pc = 0x30CF74u;
            goto label_30cf74;
        }
    }
    ctx->pc = 0x30CF5Cu;
label_30cf5c:
    // 0x30cf5c: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cf5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cf60: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cf60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cf64: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cf64u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cf68: 0x0  nop
    ctx->pc = 0x30cf68u;
    // NOP
    // 0x30cf6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cf6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cf70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cf70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cf74:
    // 0x30cf74: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cf74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cf78: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cf78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cf7c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CF7Cu;
    {
        const bool branch_taken_0x30cf7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cf7c) {
            ctx->pc = 0x30CF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF7Cu;
            // 0x30cf80: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CF94u;
            goto label_30cf94;
        }
    }
    ctx->pc = 0x30CF84u;
    // 0x30cf84: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cf84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cf88: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cf88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cf8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CF8Cu;
    {
        const bool branch_taken_0x30cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CF8Cu;
            // 0x30cf90: 0xacc9039c  sw          $t1, 0x39C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 924), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf8c) {
            ctx->pc = 0x30CFA8u;
            goto label_30cfa8;
        }
    }
    ctx->pc = 0x30CF94u;
label_30cf94:
    // 0x30cf94: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cf94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cf98: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cf98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cf9c: 0x0  nop
    ctx->pc = 0x30cf9cu;
    // NOP
    // 0x30cfa0: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30cfa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30cfa4: 0xacc9039c  sw          $t1, 0x39C($a2)
    ctx->pc = 0x30cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 924), GPR_U32(ctx, 9));
label_30cfa8:
    // 0x30cfa8: 0x8ce90050  lw          $t1, 0x50($a3)
    ctx->pc = 0x30cfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x30cfac: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CFACu;
    {
        const bool branch_taken_0x30cfac = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30cfac) {
            ctx->pc = 0x30CFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFACu;
            // 0x30cfb0: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CFC0u;
            goto label_30cfc0;
        }
    }
    ctx->pc = 0x30CFB4u;
    // 0x30cfb4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30cfb4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cfb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CFB8u;
    {
        const bool branch_taken_0x30cfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFB8u;
            // 0x30cfbc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfb8) {
            ctx->pc = 0x30CFD8u;
            goto label_30cfd8;
        }
    }
    ctx->pc = 0x30CFC0u;
label_30cfc0:
    // 0x30cfc0: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30cfc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30cfc4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30cfc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30cfc8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30cfc8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cfcc: 0x0  nop
    ctx->pc = 0x30cfccu;
    // NOP
    // 0x30cfd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30cfd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30cfd4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30cfd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30cfd8:
    // 0x30cfd8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30cfd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cfdc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30cfdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cfe0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30CFE0u;
    {
        const bool branch_taken_0x30cfe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cfe0) {
            ctx->pc = 0x30CFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFE0u;
            // 0x30cfe4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CFF8u;
            goto label_30cff8;
        }
    }
    ctx->pc = 0x30CFE8u;
    // 0x30cfe8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cfe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cfec: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cfecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30cff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30CFF0u;
    {
        const bool branch_taken_0x30cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CFF0u;
            // 0x30cff4: 0xacc903cc  sw          $t1, 0x3CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 972), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cff0) {
            ctx->pc = 0x30D00Cu;
            goto label_30d00c;
        }
    }
    ctx->pc = 0x30CFF8u;
label_30cff8:
    // 0x30cff8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30cffc: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30cffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d000: 0x0  nop
    ctx->pc = 0x30d000u;
    // NOP
    // 0x30d004: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30d004u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30d008: 0xacc903cc  sw          $t1, 0x3CC($a2)
    ctx->pc = 0x30d008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 972), GPR_U32(ctx, 9));
label_30d00c:
    // 0x30d00c: 0x8ce90054  lw          $t1, 0x54($a3)
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x30d010: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D010u;
    {
        const bool branch_taken_0x30d010 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30d010) {
            ctx->pc = 0x30D014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D010u;
            // 0x30d014: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D024u;
            goto label_30d024;
        }
    }
    ctx->pc = 0x30D018u;
    // 0x30d018: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30d018u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d01c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D01Cu;
    {
        const bool branch_taken_0x30d01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D01Cu;
            // 0x30d020: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d01c) {
            ctx->pc = 0x30D03Cu;
            goto label_30d03c;
        }
    }
    ctx->pc = 0x30D024u;
label_30d024:
    // 0x30d024: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30d024u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30d028: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30d028u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30d02c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30d02cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d030: 0x0  nop
    ctx->pc = 0x30d030u;
    // NOP
    // 0x30d034: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30d034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30d038: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30d038u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30d03c:
    // 0x30d03c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30d03cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30d040: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30d040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d044: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D044u;
    {
        const bool branch_taken_0x30d044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d044) {
            ctx->pc = 0x30D048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D044u;
            // 0x30d048: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D05Cu;
            goto label_30d05c;
        }
    }
    ctx->pc = 0x30D04Cu;
    // 0x30d04c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d04cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d050: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D054u;
    {
        const bool branch_taken_0x30d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D054u;
            // 0x30d058: 0xacc903fc  sw          $t1, 0x3FC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1020), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d054) {
            ctx->pc = 0x30D070u;
            goto label_30d070;
        }
    }
    ctx->pc = 0x30D05Cu;
label_30d05c:
    // 0x30d05c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d05cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d060: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d064: 0x0  nop
    ctx->pc = 0x30d064u;
    // NOP
    // 0x30d068: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30d068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30d06c: 0xacc903fc  sw          $t1, 0x3FC($a2)
    ctx->pc = 0x30d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1020), GPR_U32(ctx, 9));
label_30d070:
    // 0x30d070: 0x8ce90058  lw          $t1, 0x58($a3)
    ctx->pc = 0x30d070u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x30d074: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D074u;
    {
        const bool branch_taken_0x30d074 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30d074) {
            ctx->pc = 0x30D078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D074u;
            // 0x30d078: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D088u;
            goto label_30d088;
        }
    }
    ctx->pc = 0x30D07Cu;
    // 0x30d07c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30d07cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D080u;
    {
        const bool branch_taken_0x30d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D080u;
            // 0x30d084: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d080) {
            ctx->pc = 0x30D0A0u;
            goto label_30d0a0;
        }
    }
    ctx->pc = 0x30D088u;
label_30d088:
    // 0x30d088: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30d088u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30d08c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30d08cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30d090: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30d090u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d094: 0x0  nop
    ctx->pc = 0x30d094u;
    // NOP
    // 0x30d098: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30d098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30d09c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30d09cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30d0a0:
    // 0x30d0a0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30d0a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30d0a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30d0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d0a8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D0A8u;
    {
        const bool branch_taken_0x30d0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d0a8) {
            ctx->pc = 0x30D0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0A8u;
            // 0x30d0ac: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D0C0u;
            goto label_30d0c0;
        }
    }
    ctx->pc = 0x30D0B0u;
    // 0x30d0b0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d0b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d0b4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d0b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D0B8u;
    {
        const bool branch_taken_0x30d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0B8u;
            // 0x30d0bc: 0xacc9042c  sw          $t1, 0x42C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1068), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0b8) {
            ctx->pc = 0x30D0D4u;
            goto label_30d0d4;
        }
    }
    ctx->pc = 0x30D0C0u;
label_30d0c0:
    // 0x30d0c0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d0c4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d0c8: 0x0  nop
    ctx->pc = 0x30d0c8u;
    // NOP
    // 0x30d0cc: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30d0ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30d0d0: 0xacc9042c  sw          $t1, 0x42C($a2)
    ctx->pc = 0x30d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1068), GPR_U32(ctx, 9));
label_30d0d4:
    // 0x30d0d4: 0x8ce9005c  lw          $t1, 0x5C($a3)
    ctx->pc = 0x30d0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x30d0d8: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D0D8u;
    {
        const bool branch_taken_0x30d0d8 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x30d0d8) {
            ctx->pc = 0x30D0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0D8u;
            // 0x30d0dc: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D0ECu;
            goto label_30d0ec;
        }
    }
    ctx->pc = 0x30D0E0u;
    // 0x30d0e0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x30d0e0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d0e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D0E4u;
    {
        const bool branch_taken_0x30d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D0E4u;
            // 0x30d0e8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0e4) {
            ctx->pc = 0x30D104u;
            goto label_30d104;
        }
    }
    ctx->pc = 0x30D0ECu;
label_30d0ec:
    // 0x30d0ec: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x30d0ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x30d0f0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30d0f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30d0f4: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x30d0f4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d0f8: 0x0  nop
    ctx->pc = 0x30d0f8u;
    // NOP
    // 0x30d0fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30d0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30d100: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30d100u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30d104:
    // 0x30d104: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x30d104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30d108: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30d108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d10c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D10Cu;
    {
        const bool branch_taken_0x30d10c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d10c) {
            ctx->pc = 0x30D110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D10Cu;
            // 0x30d110: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D124u;
            goto label_30d124;
        }
    }
    ctx->pc = 0x30D114u;
    // 0x30d114: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d118: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d11c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D11Cu;
    {
        const bool branch_taken_0x30d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D11Cu;
            // 0x30d120: 0xacc9045c  sw          $t1, 0x45C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1116), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d11c) {
            ctx->pc = 0x30D138u;
            goto label_30d138;
        }
    }
    ctx->pc = 0x30D124u;
label_30d124:
    // 0x30d124: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d128: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x30d128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x30d12c: 0x0  nop
    ctx->pc = 0x30d12cu;
    // NOP
    // 0x30d130: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30d130u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30d134: 0xacc9045c  sw          $t1, 0x45C($a2)
    ctx->pc = 0x30d134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1116), GPR_U32(ctx, 9));
label_30d138:
    // 0x30d138: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x30d138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x30d13c: 0x104482b  sltu        $t1, $t0, $a0
    ctx->pc = 0x30d13cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30d140: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x30d140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x30d144: 0x1520fda4  bnez        $t1, . + 4 + (-0x25C << 2)
    ctx->pc = 0x30D144u;
    {
        const bool branch_taken_0x30d144 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D144u;
            // 0x30d148: 0x24c60480  addiu       $a2, $a2, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d144) {
            ctx->pc = 0x30C7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c7d8;
        }
    }
    ctx->pc = 0x30D14Cu;
    // 0x30d14c: 0x0  nop
    ctx->pc = 0x30d14cu;
    // NOP
label_30d150:
    // 0x30d150: 0x105082b  sltu        $at, $t0, $a1
    ctx->pc = 0x30d150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30d154: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x30D154u;
    {
        const bool branch_taken_0x30d154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d154) {
            ctx->pc = 0x30D2A8u;
            goto label_30d2a8;
        }
    }
    ctx->pc = 0x30D15Cu;
    // 0x30d15c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30d160: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x30d164: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30d164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30d168:
    // 0x30d168: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30d16c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D16Cu;
    {
        const bool branch_taken_0x30d16c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30d16c) {
            ctx->pc = 0x30D170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D16Cu;
            // 0x30d170: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D180u;
            goto label_30d180;
        }
    }
    ctx->pc = 0x30D174u;
    // 0x30d174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D178u;
    {
        const bool branch_taken_0x30d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D178u;
            // 0x30d17c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d178) {
            ctx->pc = 0x30D198u;
            goto label_30d198;
        }
    }
    ctx->pc = 0x30D180u;
label_30d180:
    // 0x30d180: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30d184: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30d184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30d188: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30d188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d18c: 0x0  nop
    ctx->pc = 0x30d18cu;
    // NOP
    // 0x30d190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d194: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30d194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30d198:
    // 0x30d198: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30d198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30d19c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x30d19cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d1a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D1A0u;
    {
        const bool branch_taken_0x30d1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d1a0) {
            ctx->pc = 0x30D1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1A0u;
            // 0x30d1a4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D1B8u;
            goto label_30d1b8;
        }
    }
    ctx->pc = 0x30D1A8u;
    // 0x30d1a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d1a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d1ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d1b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D1B0u;
    {
        const bool branch_taken_0x30d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1B0u;
            // 0x30d1b4: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1b0) {
            ctx->pc = 0x30D1CCu;
            goto label_30d1cc;
        }
    }
    ctx->pc = 0x30D1B8u;
label_30d1b8:
    // 0x30d1b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d1b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d1bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d1bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d1c0: 0x0  nop
    ctx->pc = 0x30d1c0u;
    // NOP
    // 0x30d1c4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x30d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x30d1c8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x30d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_30d1cc:
    // 0x30d1cc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x30d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30d1d0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D1D0u;
    {
        const bool branch_taken_0x30d1d0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30d1d0) {
            ctx->pc = 0x30D1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1D0u;
            // 0x30d1d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D1E4u;
            goto label_30d1e4;
        }
    }
    ctx->pc = 0x30D1D8u;
    // 0x30d1d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d1dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D1DCu;
    {
        const bool branch_taken_0x30d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D1DCu;
            // 0x30d1e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1dc) {
            ctx->pc = 0x30D1FCu;
            goto label_30d1fc;
        }
    }
    ctx->pc = 0x30D1E4u;
label_30d1e4:
    // 0x30d1e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30d1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30d1e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30d1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30d1ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30d1ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d1f0: 0x0  nop
    ctx->pc = 0x30d1f0u;
    // NOP
    // 0x30d1f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d1f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30d1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30d1fc:
    // 0x30d1fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30d1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30d200: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x30d200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d204: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D204u;
    {
        const bool branch_taken_0x30d204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d204) {
            ctx->pc = 0x30D208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D204u;
            // 0x30d208: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D21Cu;
            goto label_30d21c;
        }
    }
    ctx->pc = 0x30D20Cu;
    // 0x30d20c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d20cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d210: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D214u;
    {
        const bool branch_taken_0x30d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D214u;
            // 0x30d218: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d214) {
            ctx->pc = 0x30D230u;
            goto label_30d230;
        }
    }
    ctx->pc = 0x30D21Cu;
label_30d21c:
    // 0x30d21c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d21cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d220: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d224: 0x0  nop
    ctx->pc = 0x30d224u;
    // NOP
    // 0x30d228: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x30d228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x30d22c: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x30d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
label_30d230:
    // 0x30d230: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x30d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x30d234: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D234u;
    {
        const bool branch_taken_0x30d234 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30d234) {
            ctx->pc = 0x30D238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D234u;
            // 0x30d238: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D248u;
            goto label_30d248;
        }
    }
    ctx->pc = 0x30D23Cu;
    // 0x30d23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D240u;
    {
        const bool branch_taken_0x30d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D240u;
            // 0x30d244: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d240) {
            ctx->pc = 0x30D260u;
            goto label_30d260;
        }
    }
    ctx->pc = 0x30D248u;
label_30d248:
    // 0x30d248: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30d24c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30d24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30d250: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30d250u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d254: 0x0  nop
    ctx->pc = 0x30d254u;
    // NOP
    // 0x30d258: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d25c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30d25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30d260:
    // 0x30d260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30d260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30d264: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x30d264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d268: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30D268u;
    {
        const bool branch_taken_0x30d268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d268) {
            ctx->pc = 0x30D26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D268u;
            // 0x30d26c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D280u;
            goto label_30d280;
        }
    }
    ctx->pc = 0x30D270u;
    // 0x30d270: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d274: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d278: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D278u;
    {
        const bool branch_taken_0x30d278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D278u;
            // 0x30d27c: 0xacc3006c  sw          $v1, 0x6C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d278) {
            ctx->pc = 0x30D294u;
            goto label_30d294;
        }
    }
    ctx->pc = 0x30D280u;
label_30d280:
    // 0x30d280: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d284: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30d284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d288: 0x0  nop
    ctx->pc = 0x30d288u;
    // NOP
    // 0x30d28c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x30d28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x30d290: 0xacc3006c  sw          $v1, 0x6C($a2)
    ctx->pc = 0x30d290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 3));
label_30d294:
    // 0x30d294: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30d298: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x30d298u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30d29c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x30d29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x30d2a0: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x30D2A0u;
    {
        const bool branch_taken_0x30d2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2A0u;
            // 0x30d2a4: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a0) {
            ctx->pc = 0x30D168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d168;
        }
    }
    ctx->pc = 0x30D2A8u;
label_30d2a8:
    // 0x30d2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D2B0u;
    ctx->pc = 0x30d2b0u;
}
