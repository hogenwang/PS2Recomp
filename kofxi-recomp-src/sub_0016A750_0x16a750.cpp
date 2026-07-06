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

// Function: sub_0016A750
// Address: 0x16a750 - 0x16a8b0
void sub_0016A750_0x16a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A750_0x16a750");
#endif

    switch (ctx->pc) {
        case 0x16a7c8u: goto label_16a7c8;
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7e0u: goto label_16a7e0;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a7f8u: goto label_16a7f8;
        case 0x16a804u: goto label_16a804;
        default: break;
    }

    ctx->pc = 0x16a750u;

    // 0x16a750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16a754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16a758: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16a75c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16a760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a768: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16a768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a76c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x16a76cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x16a770: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x16a770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a774: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x16a774u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16a778: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x16a778u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16a77c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16a77cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16a780: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16a780u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16a784: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16a784u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16a788: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16a788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16a78c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16a78cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16a790: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16a790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x16a794: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x16a794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x16a798: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x16a798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x16a79c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x16a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a7a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a7a4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x16a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16a7a8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x16a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7ac: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x16a7acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a7b0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x16a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a7b4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x16a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a7b8: 0x46021e81  sub.s       $f26, $f3, $f2
    ctx->pc = 0x16a7b8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x16a7bc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a7c0: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x16A7C0u;
    SET_GPR_U32(ctx, 31, 0x16A7C8u);
    ctx->pc = 0x16A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7C0u;
    // 0x16a7c4: 0x46000ec1  sub.s       $f27, $f1, $f0 (Delay Slot)
    ctx->f[27] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x16A7C0u, 0x16A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7C8u;
label_16a7c8:
    // 0x16a7c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a7cc: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x16A7CCu;
    SET_GPR_U32(ctx, 31, 0x16A7D4u);
    ctx->pc = 0x16A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7CCu;
    // 0x16a7d0: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x16A7CCu, 0x16A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7D4u;
label_16a7d4:
    // 0x16a7d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a7d8: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x16A7D8u;
    SET_GPR_U32(ctx, 31, 0x16A7E0u);
    ctx->pc = 0x16A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7D8u;
    // 0x16a7dc: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x16A7D8u, 0x16A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7E0u;
label_16a7e0:
    // 0x16a7e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a7e4: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x16A7E4u;
    SET_GPR_U32(ctx, 31, 0x16A7ECu);
    ctx->pc = 0x16A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7E4u;
    // 0x16a7e8: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x16A7E4u, 0x16A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x16a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16a7f0: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x16A7F0u;
    SET_GPR_U32(ctx, 31, 0x16A7F8u);
    ctx->pc = 0x16A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7F0u;
    // 0x16a7f4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x16A7F0u, 0x16A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7F8u;
label_16a7f8:
    // 0x16a7f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x16a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16a7fc: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x16A7FCu;
    SET_GPR_U32(ctx, 31, 0x16A804u);
    ctx->pc = 0x16A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7FCu;
    // 0x16a800: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x16A7FCu, 0x16A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A804u;
label_16a804:
    // 0x16a804: 0x4618d01a  mula.s      $f26, $f24
    ctx->pc = 0x16a804u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[24]));
    // 0x16a808: 0x4619d91d  msub.s      $f4, $f27, $f25
    ctx->pc = 0x16a808u;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[25]));
    // 0x16a80c: 0x4618d81a  mula.s      $f27, $f24
    ctx->pc = 0x16a80cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[27], ctx->f[24]));
    // 0x16a810: 0x4619d0dc  madd.s      $f3, $f26, $f25
    ctx->pc = 0x16a810u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[26], ctx->f[25]));
    // 0x16a814: 0x4616a01a  mula.s      $f20, $f22
    ctx->pc = 0x16a814u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[22]));
    // 0x16a818: 0x4617185c  madd.s      $f1, $f3, $f23
    ctx->pc = 0x16a818u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[23]));
    // 0x16a81c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x16a81cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x16a820: 0x4615209d  msub.s      $f2, $f4, $f21
    ctx->pc = 0x16a820u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[21]));
    // 0x16a824: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x16a824u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x16a828: 0x4615085c  madd.s      $f1, $f1, $f21
    ctx->pc = 0x16a828u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    // 0x16a82c: 0x4616181a  mula.s      $f3, $f22
    ctx->pc = 0x16a82cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[22]));
    // 0x16a830: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x16a830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x16a834: 0x4617a01d  msub.s      $f0, $f20, $f23
    ctx->pc = 0x16a834u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[23]));
    // 0x16a838: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x16a838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16a83c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x16a840: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x16a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a844: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x16a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16a848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16a84c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16a84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x16a850: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x16a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a854: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16a858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16a85c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16a860: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x16a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a864: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x16a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16a868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16a86c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16a86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x16a870: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a874: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x16a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x16a878: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16a878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a87c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x16a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x16a880: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16a880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a884: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x16a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x16a888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a88c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16a890: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16a894: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16a898: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16a89c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8A0u;
        // 0x16a8a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A8A8u;
    // 0x16a8a8: 0x0  nop
    ctx->pc = 0x16a8a8u;
    // NOP
    // 0x16a8ac: 0x0  nop
    ctx->pc = 0x16a8acu;
    // NOP
    if (ctx->pc == 0x16a8acu) { ctx->pc = 0x16a8b0u; }
}
