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

// Function: sub_0018C2D0
// Address: 0x18c2d0 - 0x18c4d0
void sub_0018C2D0_0x18c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C2D0_0x18c2d0");
#endif

    switch (ctx->pc) {
        case 0x18c330u: goto label_18c330;
        case 0x18c358u: goto label_18c358;
        case 0x18c368u: goto label_18c368;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c3c0u: goto label_18c3c0;
        case 0x18c3ccu: goto label_18c3cc;
        case 0x18c400u: goto label_18c400;
        case 0x18c40cu: goto label_18c40c;
        default: break;
    }

    ctx->pc = 0x18c2d0u;

    // 0x18c2d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c2d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18c2d8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18c2dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x18c2e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x18c2e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18c2e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18c2e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18c2f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18c2f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18c2f8: 0x3282000c  andi        $v0, $s4, 0xC
    ctx->pc = 0x18c2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)12);
    // 0x18c2fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18c300: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x18c300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c304: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18c304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c308: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18c30c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c310: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x18c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c314: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x18c314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c31c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x18c31cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18c320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c324: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c328: 0xc062f20  jal         func_18BC80
    ctx->pc = 0x18C328u;
    SET_GPR_U32(ctx, 31, 0x18C330u);
    ctx->pc = 0x18C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C328u;
    // 0x18c32c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC80u, 0x18C328u, 0x18C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C330u;
label_18c330:
    // 0x18c330: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18c330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c334: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18c334u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x18c338: 0x52000057  beql        $s0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x18C338u;
    {
        const bool branch_taken_0x18c338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c338) {
            ctx->pc = 0x18C33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C338u;
            // 0x18c33c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C498u;
            goto label_18c498;
        }
    }
    ctx->pc = 0x18C340u;
    // 0x18c340: 0x32a2000c  andi        $v0, $s5, 0xC
    ctx->pc = 0x18c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)12);
    // 0x18c344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c348: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18c34c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x18c34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18c350: 0xc068c90  jal         func_1A3240
    ctx->pc = 0x18C350u;
    SET_GPR_U32(ctx, 31, 0x18C358u);
    ctx->pc = 0x18C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C350u;
    // 0x18c354: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3240u, 0x18C350u, 0x18C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C358u;
label_18c358:
    // 0x18c358: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x18c358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x18c35c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c360: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C360u;
    SET_GPR_U32(ctx, 31, 0x18C368u);
    ctx->pc = 0x18C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C360u;
    // 0x18c364: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DED0u, 0x18C360u, 0x18C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C368u;
label_18c368:
    // 0x18c368: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x18c368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18c36c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c370: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c378: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18c378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18c37c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18c37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c380: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x18c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x18c384: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x18c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x18c388: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x18c388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18c38c: 0x1010  mfhi        $v0
    ctx->pc = 0x18c38cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c390: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x18c394: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x18c398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c39c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x18c39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c3a0: 0xc067f48  jal         func_19FD20
    ctx->pc = 0x18C3A0u;
    SET_GPR_U32(ctx, 31, 0x18C3A8u);
    ctx->pc = 0x18C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3A0u;
    // 0x18c3a4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD20u, 0x18C3A0u, 0x18C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3A8u;
label_18c3a8:
    // 0x18c3a8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18c3a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c3ac: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x18c3acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x18c3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3b8: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C3B8u;
    SET_GPR_U32(ctx, 31, 0x18C3C0u);
    ctx->pc = 0x18C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3B8u;
    // 0x18c3bc: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DED0u, 0x18C3B8u, 0x18C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3C0u;
label_18c3c0:
    // 0x18c3c0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18c3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c3c4: 0xc067c48  jal         func_19F120
    ctx->pc = 0x18C3C4u;
    SET_GPR_U32(ctx, 31, 0x18C3CCu);
    ctx->pc = 0x18C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3C4u;
    // 0x18c3c8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x18C3C4u, 0x18C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3CCu;
label_18c3cc:
    // 0x18c3cc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x18c3d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18c3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c3d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18c3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18c3e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c3e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c3e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c3e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c3ec: 0x0  nop
    ctx->pc = 0x18c3ecu;
    // NOP
    // 0x18c3f0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x18c3f4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c3f8: 0xc063048  jal         func_18C120
    ctx->pc = 0x18C3F8u;
    SET_GPR_U32(ctx, 31, 0x18C400u);
    ctx->pc = 0x18C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3F8u;
    // 0x18c3fc: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C120u, 0x18C3F8u, 0x18C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C400u;
label_18c400:
    // 0x18c400: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c404: 0xc06307c  jal         func_18C1F0
    ctx->pc = 0x18C404u;
    SET_GPR_U32(ctx, 31, 0x18C40Cu);
    ctx->pc = 0x18C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C404u;
    // 0x18c408: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C1F0u, 0x18C404u, 0x18C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C40Cu;
label_18c40c:
    // 0x18c40c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x18c40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18c410: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x18c410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x18c414: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c414u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c418: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c420: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c424: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18c428: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x18c428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c430: 0x0  nop
    ctx->pc = 0x18c430u;
    // NOP
    // 0x18c434: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c434u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c438: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18c438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18c43c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18c43cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18c440: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x18c440u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c444: 0x0  nop
    ctx->pc = 0x18c444u;
    // NOP
    // 0x18c448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c44c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18c44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18c450: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c454: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c458: 0x0  nop
    ctx->pc = 0x18c458u;
    // NOP
    // 0x18c45c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c464: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C464u;
    {
        const bool branch_taken_0x18c464 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18c464) {
            ctx->pc = 0x18C468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C464u;
            // 0x18c468: 0x21c3c  dsll32      $v1, $v0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C474u;
            goto label_18c474;
        }
    }
    ctx->pc = 0x18C46Cu;
    // 0x18c46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c470: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_18c474:
    // 0x18c474: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c478: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x18c47c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18c480: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x18c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x18c484: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x18c484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18c488: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18C488u;
    {
        const bool branch_taken_0x18c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C488u;
        // 0x18c48c: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c488) {
            ctx->pc = 0x18C494u;
            goto label_18c494;
        }
    }
    ctx->pc = 0x18C490u;
    // 0x18c490: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x18c490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18c494:
    // 0x18c494: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18c494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c498:
    // 0x18c498: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18c498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18c49c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18c49cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c4a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c4a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18c4a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c4a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18c4a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c4ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18c4acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c4b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18c4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c4b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c4b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4BCu;
        // 0x18c4c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C4C4u;
    // 0x18c4c4: 0x0  nop
    ctx->pc = 0x18c4c4u;
    // NOP
    // 0x18c4c8: 0x0  nop
    ctx->pc = 0x18c4c8u;
    // NOP
    // 0x18c4cc: 0x0  nop
    ctx->pc = 0x18c4ccu;
    // NOP
}
