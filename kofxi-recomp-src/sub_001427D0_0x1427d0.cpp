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

// Function: sub_001427D0
// Address: 0x1427d0 - 0x1429e0
void sub_001427D0_0x1427d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001427D0_0x1427d0");
#endif

    switch (ctx->pc) {
        case 0x14288cu: goto label_14288c;
        case 0x142898u: goto label_142898;
        case 0x1428b4u: goto label_1428b4;
        case 0x1428d0u: goto label_1428d0;
        case 0x1428dcu: goto label_1428dc;
        case 0x1428f8u: goto label_1428f8;
        case 0x142928u: goto label_142928;
        case 0x142934u: goto label_142934;
        case 0x142950u: goto label_142950;
        case 0x142980u: goto label_142980;
        case 0x14298cu: goto label_14298c;
        case 0x1429a8u: goto label_1429a8;
        default: break;
    }

    ctx->pc = 0x1427d0u;

    // 0x1427d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1427d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1427d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1427d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1427d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1427dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1427dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1427e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1427e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1427e4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1427e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1427e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1427E8u;
    {
        const bool branch_taken_0x1427e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427E8u;
        // 0x1427ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427e8) {
            ctx->pc = 0x142804u;
            goto label_142804;
        }
    }
    ctx->pc = 0x1427F0u;
    // 0x1427f0: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1427f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1427f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1427F4u;
    {
        const bool branch_taken_0x1427f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1427f4) {
            ctx->pc = 0x142804u;
            goto label_142804;
        }
    }
    ctx->pc = 0x1427FCu;
    // 0x1427fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1427FCu;
    {
        const bool branch_taken_0x1427fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427FCu;
        // 0x142800: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427fc) {
            ctx->pc = 0x142850u;
            goto label_142850;
        }
    }
    ctx->pc = 0x142804u;
label_142804:
    // 0x142804: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142808: 0x0  nop
    ctx->pc = 0x142808u;
    // NOP
    // 0x14280c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x14280cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142810: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x142810u;
    {
        const bool branch_taken_0x142810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142810) {
            ctx->pc = 0x14282Cu;
            goto label_14282c;
        }
    }
    ctx->pc = 0x142818u;
    // 0x142818: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x142818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14281c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14281Cu;
    {
        const bool branch_taken_0x14281c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14281c) {
            ctx->pc = 0x14282Cu;
            goto label_14282c;
        }
    }
    ctx->pc = 0x142824u;
    // 0x142824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x142824u;
    {
        const bool branch_taken_0x142824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142824u;
        // 0x142828: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142824) {
            ctx->pc = 0x142850u;
            goto label_142850;
        }
    }
    ctx->pc = 0x14282Cu;
label_14282c:
    // 0x14282c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14282cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142830: 0x0  nop
    ctx->pc = 0x142830u;
    // NOP
    // 0x142834: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x142834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142838: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x142838u;
    {
        const bool branch_taken_0x142838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142838) {
            ctx->pc = 0x14283Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142838u;
            // 0x14283c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142854u;
            goto label_142854;
        }
    }
    ctx->pc = 0x142840u;
    // 0x142840: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x142840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142844: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142844u;
    {
        const bool branch_taken_0x142844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142844) {
            ctx->pc = 0x142850u;
            goto label_142850;
        }
    }
    ctx->pc = 0x14284Cu;
    // 0x14284c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142850:
    // 0x142850: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142854:
    // 0x142854: 0x50620048  beql        $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x142854u;
    {
        const bool branch_taken_0x142854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142854) {
            ctx->pc = 0x142858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142854u;
            // 0x142858: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142978u;
            goto label_142978;
        }
    }
    ctx->pc = 0x14285Cu;
    // 0x14285c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142860: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x142860u;
    {
        const bool branch_taken_0x142860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142860) {
            ctx->pc = 0x142864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142860u;
            // 0x142864: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142920u;
            goto label_142920;
        }
    }
    ctx->pc = 0x142868u;
    // 0x142868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14286c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14286Cu;
    {
        const bool branch_taken_0x14286c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14286c) {
            ctx->pc = 0x142870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14286Cu;
            // 0x142870: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1428C8u;
            goto label_1428c8;
        }
    }
    ctx->pc = 0x142874u;
    // 0x142874: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x142874u;
    {
        const bool branch_taken_0x142874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142874) {
            ctx->pc = 0x142878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142874u;
            // 0x142878: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x142884u;
            goto label_142884;
        }
    }
    ctx->pc = 0x14287Cu;
    // 0x14287c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14287Cu;
    {
        const bool branch_taken_0x14287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14287Cu;
        // 0x142880: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14287c) {
            ctx->pc = 0x1429D0u;
            goto label_1429d0;
        }
    }
    ctx->pc = 0x142884u;
label_142884:
    // 0x142884: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x142884u;
    SET_GPR_U32(ctx, 31, 0x14288Cu);
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x142884u, 0x14288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14288Cu;
label_14288c:
    // 0x14288c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14288cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142890: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x142890u;
    SET_GPR_U32(ctx, 31, 0x142898u);
    ctx->pc = 0x142894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142890u;
    // 0x142894: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x142890u, 0x142898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142898u;
label_142898:
    // 0x142898: 0x0  nop
    ctx->pc = 0x142898u;
    // NOP
    // 0x14289c: 0x0  nop
    ctx->pc = 0x14289cu;
    // NOP
    // 0x1428a0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1428a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x1428a4: 0x0  nop
    ctx->pc = 0x1428a4u;
    // NOP
    // 0x1428a8: 0x0  nop
    ctx->pc = 0x1428a8u;
    // NOP
    // 0x1428ac: 0xc046a0a  jal         func_11A828
    ctx->pc = 0x1428ACu;
    SET_GPR_U32(ctx, 31, 0x1428B4u);
    ctx->pc = 0x11A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A828u, 0x1428ACu, 0x1428B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428B4u;
label_1428b4:
    // 0x1428b4: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x1428b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
    // 0x1428b8: 0x34422ee4  ori         $v0, $v0, 0x2EE4
    ctx->pc = 0x1428b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12004);
    // 0x1428bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1428bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1428c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1428C0u;
    {
        const bool branch_taken_0x1428c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C0u;
        // 0x1428c4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428c0) {
            ctx->pc = 0x1429CCu;
            goto label_1429cc;
        }
    }
    ctx->pc = 0x1428C8u;
label_1428c8:
    // 0x1428c8: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1428C8u;
    SET_GPR_U32(ctx, 31, 0x1428D0u);
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x1428C8u, 0x1428D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428D0u;
label_1428d0:
    // 0x1428d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1428d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1428d4: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1428D4u;
    SET_GPR_U32(ctx, 31, 0x1428DCu);
    ctx->pc = 0x1428D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428D4u;
    // 0x1428d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x1428D4u, 0x1428DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428DCu;
label_1428dc:
    // 0x1428dc: 0x0  nop
    ctx->pc = 0x1428dcu;
    // NOP
    // 0x1428e0: 0x0  nop
    ctx->pc = 0x1428e0u;
    // NOP
    // 0x1428e4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1428e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x1428e8: 0x0  nop
    ctx->pc = 0x1428e8u;
    // NOP
    // 0x1428ec: 0x0  nop
    ctx->pc = 0x1428ecu;
    // NOP
    // 0x1428f0: 0xc046a0a  jal         func_11A828
    ctx->pc = 0x1428F0u;
    SET_GPR_U32(ctx, 31, 0x1428F8u);
    ctx->pc = 0x11A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A828u, 0x1428F0u, 0x1428F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428F8u;
label_1428f8:
    // 0x1428f8: 0x3c034265  lui         $v1, 0x4265
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16997 << 16));
    // 0x1428fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x142900: 0x34632ee4  ori         $v1, $v1, 0x2EE4
    ctx->pc = 0x142900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12004);
    // 0x142904: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142908: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14290c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14290cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142910: 0x0  nop
    ctx->pc = 0x142910u;
    // NOP
    // 0x142914: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x142914u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x142918: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x142918u;
    {
        const bool branch_taken_0x142918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142918u;
        // 0x14291c: 0x4600181d  msub.s      $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142918) {
            ctx->pc = 0x1429CCu;
            goto label_1429cc;
        }
    }
    ctx->pc = 0x142920u;
label_142920:
    // 0x142920: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x142920u;
    SET_GPR_U32(ctx, 31, 0x142928u);
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x142920u, 0x142928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142928u;
label_142928:
    // 0x142928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14292c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x14292Cu;
    SET_GPR_U32(ctx, 31, 0x142934u);
    ctx->pc = 0x142930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14292Cu;
    // 0x142930: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x14292Cu, 0x142934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142934u;
label_142934:
    // 0x142934: 0x0  nop
    ctx->pc = 0x142934u;
    // NOP
    // 0x142938: 0x0  nop
    ctx->pc = 0x142938u;
    // NOP
    // 0x14293c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x14293cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x142940: 0x0  nop
    ctx->pc = 0x142940u;
    // NOP
    // 0x142944: 0x0  nop
    ctx->pc = 0x142944u;
    // NOP
    // 0x142948: 0xc046a0a  jal         func_11A828
    ctx->pc = 0x142948u;
    SET_GPR_U32(ctx, 31, 0x142950u);
    ctx->pc = 0x11A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A828u, 0x142948u, 0x142950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142950u;
label_142950:
    // 0x142950: 0x3c034265  lui         $v1, 0x4265
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16997 << 16));
    // 0x142954: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x142958: 0x34632ee4  ori         $v1, $v1, 0x2EE4
    ctx->pc = 0x142958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12004);
    // 0x14295c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14295cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142960: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142964: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x142964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142968: 0x0  nop
    ctx->pc = 0x142968u;
    // NOP
    // 0x14296c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14296cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x142970: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x142970u;
    {
        const bool branch_taken_0x142970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142970u;
        // 0x142974: 0x4600181c  madd.s      $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142970) {
            ctx->pc = 0x1429CCu;
            goto label_1429cc;
        }
    }
    ctx->pc = 0x142978u;
label_142978:
    // 0x142978: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x142978u;
    SET_GPR_U32(ctx, 31, 0x142980u);
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x142978u, 0x142980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142980u;
label_142980:
    // 0x142980: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142984: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x142984u;
    SET_GPR_U32(ctx, 31, 0x14298Cu);
    ctx->pc = 0x142988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142984u;
    // 0x142988: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x142984u, 0x14298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14298Cu;
label_14298c:
    // 0x14298c: 0x0  nop
    ctx->pc = 0x14298cu;
    // NOP
    // 0x142990: 0x0  nop
    ctx->pc = 0x142990u;
    // NOP
    // 0x142994: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x142994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x142998: 0x0  nop
    ctx->pc = 0x142998u;
    // NOP
    // 0x14299c: 0x0  nop
    ctx->pc = 0x14299cu;
    // NOP
    // 0x1429a0: 0xc046a0a  jal         func_11A828
    ctx->pc = 0x1429A0u;
    SET_GPR_U32(ctx, 31, 0x1429A8u);
    ctx->pc = 0x11A828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A828u, 0x1429A0u, 0x1429A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429A8u;
label_1429a8:
    // 0x1429a8: 0x3c034265  lui         $v1, 0x4265
    ctx->pc = 0x1429a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16997 << 16));
    // 0x1429ac: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1429acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1429b0: 0x34632ee4  ori         $v1, $v1, 0x2EE4
    ctx->pc = 0x1429b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12004);
    // 0x1429b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1429b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1429b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1429b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1429bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1429bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1429c0: 0x0  nop
    ctx->pc = 0x1429c0u;
    // NOP
    // 0x1429c4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1429c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1429c8: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x1429c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1429cc:
    // 0x1429cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1429ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1429d0:
    // 0x1429d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1429d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1429d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1429D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429D4u;
        // 0x1429d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429DCu;
    // 0x1429dc: 0x0  nop
    ctx->pc = 0x1429dcu;
    // NOP
    if (ctx->pc == 0x1429dcu) { ctx->pc = 0x1429e0u; }
}
