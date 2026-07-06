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

// Function: sub_0020AA20
// Address: 0x20aa20 - 0x20b020
void sub_0020AA20_0x20aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA20_0x20aa20");
#endif

    switch (ctx->pc) {
        case 0x20aa78u: goto label_20aa78;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab88u: goto label_20ab88;
        default: break;
    }

    ctx->pc = 0x20aa20u;

    // 0x20aa20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x20aa24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20aa28: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x20aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x20aa2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x20aa30: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x20aa30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa34: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x20aa38: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x20aa3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20aa40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20aa44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20aa44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20aa4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20aa4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20aa54: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x20aa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x20aa58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20aa5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20aa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20aa60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20aa64: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa68: 0xafaa00cc  sw          $t2, 0xCC($sp)
    ctx->pc = 0x20aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 10));
    // 0x20aa6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20aa6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20aa70: 0xc0829a0  jal         func_20A680
    ctx->pc = 0x20AA70u;
    SET_GPR_U32(ctx, 31, 0x20AA78u);
    ctx->pc = 0x20AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA70u;
    // 0x20aa74: 0xafab00c8  sw          $t3, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A680u, 0x20AA70u, 0x20AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA78u;
label_20aa78:
    // 0x20aa78: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x20aa7c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20aa80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AA80u;
    {
        const bool branch_taken_0x20aa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aa80) {
            ctx->pc = 0x20AA94u;
            goto label_20aa94;
        }
    }
    ctx->pc = 0x20AA88u;
    // 0x20aa88: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20aa8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AA8Cu;
    {
        const bool branch_taken_0x20aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA8Cu;
        // 0x20aa90: 0x8c52a470  lw          $s2, -0x5B90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa8c) {
            ctx->pc = 0x20AA9Cu;
            goto label_20aa9c;
        }
    }
    ctx->pc = 0x20AA94u;
label_20aa94:
    // 0x20aa94: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20aa98: 0x8c52a460  lw          $s2, -0x5BA0($v0)
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943840)));
label_20aa9c:
    // 0x20aa9c: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x20AA9Cu;
    SET_GPR_U32(ctx, 31, 0x20AAA4u);
    ctx->pc = 0x20AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA9Cu;
    // 0x20aaa0: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x20AA9Cu, 0x20AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAA4u;
label_20aaa4:
    // 0x20aaa4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20aaa8: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x20AAA8u;
    SET_GPR_U32(ctx, 31, 0x20AAB0u);
    ctx->pc = 0x20AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAA8u;
    // 0x20aaac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x20AAA8u, 0x20AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAB0u;
label_20aab0:
    // 0x20aab0: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x20aab4: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x20aab8: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x20aabc: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x20aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x20aac0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x20aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x20aac4: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x20aac8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x20aacc: 0xafb400e4  sw          $s4, 0xE4($sp)
    ctx->pc = 0x20aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 20));
    // 0x20aad0: 0xafb400e0  sw          $s4, 0xE0($sp)
    ctx->pc = 0x20aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 20));
    // 0x20aad4: 0x262b821  addu        $s7, $s3, $v0
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20aad8: 0xafb300d8  sw          $s3, 0xD8($sp)
    ctx->pc = 0x20aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 19));
    // 0x20aadc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20aadcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x20aae0: 0xafb300d0  sw          $s3, 0xD0($sp)
    ctx->pc = 0x20aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 19));
    // 0x20aae4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20aae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aae8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x20aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x20aaec: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x20aaecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20aaf0: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x20aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x20aaf4: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x20aaf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20aaf8:
    // 0x20aaf8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20aafc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x20aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20ab00: 0x578823  subu        $s1, $v0, $s7
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x20ab04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x20ab04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab08: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x20ab0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ab0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ab10: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x20ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x20ab14: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x20ab14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20ab18: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x20ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x20ab1c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x20ab1cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab20: 0x0  nop
    ctx->pc = 0x20ab20u;
    // NOP
    // 0x20ab24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ab24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ab28: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x20ab28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x20ab2c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x20AB2Cu;
    SET_GPR_U32(ctx, 31, 0x20AB34u);
    ctx->pc = 0x20AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB2Cu;
    // 0x20ab30: 0x46150b1d  msub.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x20AB2Cu, 0x20AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB34u;
label_20ab34:
    // 0x20ab34: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x20ab38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab3c: 0xc048a46  jal         func_122918
    ctx->pc = 0x20AB3Cu;
    SET_GPR_U32(ctx, 31, 0x20AB44u);
    ctx->pc = 0x20AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB3Cu;
    // 0x20ab40: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x20AB3Cu, 0x20AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB44u;
label_20ab44:
    // 0x20ab44: 0xc048bde  jal         func_122F78
    ctx->pc = 0x20AB44u;
    SET_GPR_U32(ctx, 31, 0x20AB4Cu);
    ctx->pc = 0x20AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB44u;
    // 0x20ab48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x20AB44u, 0x20AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB4Cu;
label_20ab4c:
    // 0x20ab4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x20ab4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab50: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x20ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x20ab54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ab54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ab58: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x20ab58u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab5c: 0x0  nop
    ctx->pc = 0x20ab5cu;
    // NOP
    // 0x20ab60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ab60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ab64: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x20ab64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x20ab68: 0xc048930  jal         func_1224C0
    ctx->pc = 0x20AB68u;
    SET_GPR_U32(ctx, 31, 0x20AB70u);
    ctx->pc = 0x20AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB68u;
    // 0x20ab6c: 0x46150b1c  madd.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x20AB68u, 0x20AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB70u;
label_20ab70:
    // 0x20ab70: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x20ab74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab78: 0xc048a46  jal         func_122918
    ctx->pc = 0x20AB78u;
    SET_GPR_U32(ctx, 31, 0x20AB80u);
    ctx->pc = 0x20AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB78u;
    // 0x20ab7c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x20AB78u, 0x20AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB80u;
label_20ab80:
    // 0x20ab80: 0xc048bde  jal         func_122F78
    ctx->pc = 0x20AB80u;
    SET_GPR_U32(ctx, 31, 0x20AB88u);
    ctx->pc = 0x20AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB80u;
    // 0x20ab84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x20AB80u, 0x20AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB88u;
label_20ab88:
    // 0x20ab88: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20ab8c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20ab90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x20ab94: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x20ab94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20ab98: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x20ab9c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x20ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x20aba0: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x20aba4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x20aba8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x20aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x20abac: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x20ABACu;
    {
        const bool branch_taken_0x20abac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABACu;
        // 0x20abb0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abac) {
            ctx->pc = 0x20AAF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20aaf8;
        }
    }
    ctx->pc = 0x20ABB4u;
    // 0x20abb4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x20abb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20abb8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x20abb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20abbc: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x20abbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x20abc0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20abc4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20abc8: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20abcc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20abd0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x20abd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20abd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20abd8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x20abd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20abdc: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x20abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x20abe0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20abe4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x20abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x20abe8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x20abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20abec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20abecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20abf0: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x20abf0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
    // 0x20abf4: 0x2463a850  addiu       $v1, $v1, -0x57B0
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
    // 0x20abf8: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x20abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x20abfc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20ac00: 0x3c046131  lui         $a0, 0x6131
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24881 << 16));
    // 0x20ac04: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ac08: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x20ac08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20ac0c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x20ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20ac10: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x20ac10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x20ac14: 0x2463a860  addiu       $v1, $v1, -0x57A0
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944864));
    // 0x20ac18: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x20ac1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20ac20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20ac20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20ac24: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ac28: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ac2c: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x20ac2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x20ac30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20ac34: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x20ac34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x20ac38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x20ac38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x20ac3c: 0xfe450020  sd          $a1, 0x20($s2)
    ctx->pc = 0x20ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 5));
    // 0x20ac40: 0x3c04c0aa  lui         $a0, 0xC0AA
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49322 << 16));
    // 0x20ac44: 0xfe480028  sd          $t0, 0x28($s2)
    ctx->pc = 0x20ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 8));
    // 0x20ac48: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x20ac48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x20ac4c: 0x9066b280  lbu         $a2, -0x4D80($v1)
    ctx->pc = 0x20ac4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20ac50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20ac54: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20ac58: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x20ac58u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20ac5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20ac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20ac60: 0x65978  dsll        $t3, $a2, 5
    ctx->pc = 0x20ac60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << 5);
    // 0x20ac64: 0x70032b89  pcpyld      $a1, $zero, $v1
    ctx->pc = 0x20ac64u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x20ac68: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x20ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20ac6c: 0x641b8  dsll        $t0, $a2, 6
    ctx->pc = 0x20ac6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 6);
    // 0x20ac70: 0x3c040413  lui         $a0, 0x413
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1043 << 16));
    // 0x20ac74: 0x1684025  or          $t0, $t3, $t0
    ctx->pc = 0x20ac74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x20ac78: 0x34844134  ori         $a0, $a0, 0x4134
    ctx->pc = 0x20ac78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16692);
    // 0x20ac7c: 0xfe480030  sd          $t0, 0x30($s2)
    ctx->pc = 0x20ac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 8));
    // 0x20ac80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ac84: 0xfe4a0038  sd          $t2, 0x38($s2)
    ctx->pc = 0x20ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 10));
    // 0x20ac88: 0x24666c00  addiu       $a2, $v1, 0x6C00
    ctx->pc = 0x20ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20ac8c: 0xfe490040  sd          $t1, 0x40($s2)
    ctx->pc = 0x20ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 9));
    // 0x20ac90: 0x3c031341  lui         $v1, 0x1341
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4929 << 16));
    // 0x20ac94: 0xfe470048  sd          $a3, 0x48($s2)
    ctx->pc = 0x20ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 7));
    // 0x20ac98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20ac98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20ac9c: 0x34633413  ori         $v1, $v1, 0x3413
    ctx->pc = 0x20ac9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13331);
    // 0x20aca0: 0x644025  or          $t0, $v1, $a0
    ctx->pc = 0x20aca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20aca4: 0xfe450050  sd          $a1, 0x50($s2)
    ctx->pc = 0x20aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 5));
    // 0x20aca8: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x20aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x20acac: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20acb0: 0xfe480058  sd          $t0, 0x58($s2)
    ctx->pc = 0x20acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 8));
    // 0x20acb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20acb8: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20acbc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20acc0: 0xae470060  sw          $a3, 0x60($s2)
    ctx->pc = 0x20acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 7));
    // 0x20acc4: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x20acc8: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x20acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
    // 0x20accc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20acd0: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x20acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x20acd4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x20acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x20acd8: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x20acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x20acdc: 0xae470070  sw          $a3, 0x70($s2)
    ctx->pc = 0x20acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 7));
    // 0x20ace0: 0xae470074  sw          $a3, 0x74($s2)
    ctx->pc = 0x20ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 7));
    // 0x20ace4: 0xae470078  sw          $a3, 0x78($s2)
    ctx->pc = 0x20ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 7));
    // 0x20ace8: 0xae5e007c  sw          $fp, 0x7C($s2)
    ctx->pc = 0x20ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 30));
    // 0x20acec: 0xae460080  sw          $a2, 0x80($s2)
    ctx->pc = 0x20acecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 6));
    // 0x20acf0: 0x9084b280  lbu         $a0, -0x4D80($a0)
    ctx->pc = 0x20acf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x20acf4: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20ACF4u;
    {
        const bool branch_taken_0x20acf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20acf4) {
            ctx->pc = 0x20ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ACF4u;
            // 0x20acf8: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD50u;
            goto label_20ad50;
        }
    }
    ctx->pc = 0x20ACFCu;
    // 0x20acfc: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ad00: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x20ad04: 0x34868889  ori         $a2, $a0, 0x8889
    ctx->pc = 0x20ad04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x20ad08: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20ad0c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20ad0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20ad10: 0x24e77100  addiu       $a3, $a3, 0x7100
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28928));
    // 0x20ad14: 0x24e88000  addiu       $t0, $a3, -0x8000
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x20ad18: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20ad1c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20ad20: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x20ad24: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x20ad24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20ad28: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x20ad28u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20ad2c: 0x0  nop
    ctx->pc = 0x20ad2cu;
    // NOP
    // 0x20ad30: 0x3010  mfhi        $a2
    ctx->pc = 0x20ad30u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20ad34: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20ad34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20ad38: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x20ad38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x20ad3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20ad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20ad40: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x20ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x20ad44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20ad48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AD48u;
    {
        const bool branch_taken_0x20ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD48u;
        // 0x20ad4c: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad48) {
            ctx->pc = 0x20AD58u;
            goto label_20ad58;
        }
    }
    ctx->pc = 0x20AD50u;
label_20ad50:
    // 0x20ad50: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20ad54: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
label_20ad58:
    // 0x20ad58: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x20ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
    // 0x20ad5c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x20ad5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ad60: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x20ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20ad64: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x20ad64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x20ad68: 0xae440088  sw          $a0, 0x88($s2)
    ctx->pc = 0x20ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 4));
    // 0x20ad6c: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x20ad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x20ad70: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x20ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x20ad74: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x20ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x20ad78: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x20ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x20ad7c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20ad80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ad88: 0xae440094  sw          $a0, 0x94($s2)
    ctx->pc = 0x20ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
    // 0x20ad8c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x20ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20ad90: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x20ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x20ad94: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20ad98: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x20ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x20ad9c: 0xae4800a0  sw          $t0, 0xA0($s2)
    ctx->pc = 0x20ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
    // 0x20ada0: 0xae4800a4  sw          $t0, 0xA4($s2)
    ctx->pc = 0x20ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 8));
    // 0x20ada4: 0xae4800a8  sw          $t0, 0xA8($s2)
    ctx->pc = 0x20ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 8));
    // 0x20ada8: 0xae5e00ac  sw          $fp, 0xAC($s2)
    ctx->pc = 0x20ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 30));
    // 0x20adac: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x20adacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x20adb0: 0x90c3b280  lbu         $v1, -0x4D80($a2)
    ctx->pc = 0x20adb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x20adb4: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20ADB4u;
    {
        const bool branch_taken_0x20adb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adb4) {
            ctx->pc = 0x20ADB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ADB4u;
            // 0x20adb8: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE10u;
            goto label_20ae10;
        }
    }
    ctx->pc = 0x20ADBCu;
    // 0x20adbc: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x20adbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x20adc0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20adc4: 0x34668889  ori         $a2, $v1, 0x8889
    ctx->pc = 0x20adc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20adc8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20adcc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20add0: 0x24e77100  addiu       $a3, $a3, 0x7100
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28928));
    // 0x20add4: 0x24e88000  addiu       $t0, $a3, -0x8000
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x20add8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20addc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20ade0: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x20ade0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x20ade4: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x20ade4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20ade8: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20adec: 0x0  nop
    ctx->pc = 0x20adecu;
    // NOP
    // 0x20adf0: 0x3010  mfhi        $a2
    ctx->pc = 0x20adf0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20adf4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20adf8: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x20adfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20adfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20ae00: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x20ae04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20ae08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE08u;
    {
        const bool branch_taken_0x20ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE08u;
        // 0x20ae0c: 0xc31824  and         $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae08) {
            ctx->pc = 0x20AE18u;
            goto label_20ae18;
        }
    }
    ctx->pc = 0x20AE10u;
label_20ae10:
    // 0x20ae10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ae14: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x20ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20ae18:
    // 0x20ae18: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x20ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
    // 0x20ae1c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x20ae1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ae20: 0x2403a833  addiu       $v1, $zero, -0x57CD
    ctx->pc = 0x20ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20ae24: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x20ae28: 0xae4300b8  sw          $v1, 0xB8($s2)
    ctx->pc = 0x20ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 3));
    // 0x20ae2c: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x20ae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x20ae30: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x20ae30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20ae34: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x20ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x20ae38: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20ae3c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x20ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x20ae40: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x20ae40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
    // 0x20ae44: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x20ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20ae48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ae4c: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x20ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
    // 0x20ae50: 0xae4500c4  sw          $a1, 0xC4($s2)
    ctx->pc = 0x20ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 5));
    // 0x20ae54: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x20ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x20ae58: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x20ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x20ae5c: 0xae4800d0  sw          $t0, 0xD0($s2)
    ctx->pc = 0x20ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 8));
    // 0x20ae60: 0xae4800d4  sw          $t0, 0xD4($s2)
    ctx->pc = 0x20ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 8));
    // 0x20ae64: 0xae4800d8  sw          $t0, 0xD8($s2)
    ctx->pc = 0x20ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 8));
    // 0x20ae68: 0xae5e00dc  sw          $fp, 0xDC($s2)
    ctx->pc = 0x20ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 30));
    // 0x20ae6c: 0xae4700e0  sw          $a3, 0xE0($s2)
    ctx->pc = 0x20ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 7));
    // 0x20ae70: 0x90c5b280  lbu         $a1, -0x4D80($a2)
    ctx->pc = 0x20ae70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x20ae74: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20AE74u;
    {
        const bool branch_taken_0x20ae74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae74) {
            ctx->pc = 0x20AE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE74u;
            // 0x20ae78: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AED0u;
            goto label_20aed0;
        }
    }
    ctx->pc = 0x20AE7Cu;
    // 0x20ae7c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x20ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20ae80: 0x3c058888  lui         $a1, 0x8888
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34952 << 16));
    // 0x20ae84: 0x34a68889  ori         $a2, $a1, 0x8889
    ctx->pc = 0x20ae84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x20ae88: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20ae8c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20ae90: 0x24e77100  addiu       $a3, $a3, 0x7100
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28928));
    // 0x20ae94: 0x24e88000  addiu       $t0, $a3, -0x8000
    ctx->pc = 0x20ae94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x20ae98: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x20ae98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20ae9c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20aea0: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x20aea4: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x20aea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20aea8: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20aeac: 0x0  nop
    ctx->pc = 0x20aeacu;
    // NOP
    // 0x20aeb0: 0x3010  mfhi        $a2
    ctx->pc = 0x20aeb0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20aeb4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20aeb8: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x20aeb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x20aebc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20aebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20aec0: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x20aec4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20aec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AEC8u;
    {
        const bool branch_taken_0x20aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEC8u;
        // 0x20aecc: 0xc52824  and         $a1, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aec8) {
            ctx->pc = 0x20AED8u;
            goto label_20aed8;
        }
    }
    ctx->pc = 0x20AED0u;
label_20aed0:
    // 0x20aed0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20aed4: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
label_20aed8:
    // 0x20aed8: 0xae4500e4  sw          $a1, 0xE4($s2)
    ctx->pc = 0x20aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 5));
    // 0x20aedc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20aee0: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x20aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20aee4: 0xae4500e8  sw          $a1, 0xE8($s2)
    ctx->pc = 0x20aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 5));
    // 0x20aee8: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x20aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x20aeec: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x20aef0: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x20aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x20aef4: 0xae4400f4  sw          $a0, 0xF4($s2)
    ctx->pc = 0x20aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 4));
    // 0x20aef8: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x20aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x20aefc: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x20aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x20af00: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x20af04: 0xae460100  sw          $a2, 0x100($s2)
    ctx->pc = 0x20af04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 6));
    // 0x20af08: 0xae460104  sw          $a2, 0x104($s2)
    ctx->pc = 0x20af08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 6));
    // 0x20af0c: 0xae460108  sw          $a2, 0x108($s2)
    ctx->pc = 0x20af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 6));
    // 0x20af10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20af14: 0xae5e010c  sw          $fp, 0x10C($s2)
    ctx->pc = 0x20af14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 30));
    // 0x20af18: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20af1c: 0xae430110  sw          $v1, 0x110($s2)
    ctx->pc = 0x20af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 3));
    // 0x20af20: 0x90a3b280  lbu         $v1, -0x4D80($a1)
    ctx->pc = 0x20af20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x20af24: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF24u;
            // 0x20af28: 0x8fa300dc  lw          $v1, 0xDC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF80u;
            goto label_20af80;
        }
    }
    ctx->pc = 0x20AF2Cu;
    // 0x20af2c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x20af30: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20af30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20af34: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20af34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20af38: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20af3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20af40: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20af44: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20af44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20af48: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20af4c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20af50: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20af50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20af54: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20af54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20af58: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20af5c: 0x0  nop
    ctx->pc = 0x20af5cu;
    // NOP
    // 0x20af60: 0x2010  mfhi        $a0
    ctx->pc = 0x20af60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20af64: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20af68: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20af6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20af70: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20af74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20af78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AF78u;
    {
        const bool branch_taken_0x20af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF78u;
        // 0x20af7c: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af78) {
            ctx->pc = 0x20AF88u;
            goto label_20af88;
        }
    }
    ctx->pc = 0x20AF80u;
label_20af80:
    // 0x20af80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20af84: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20af88:
    // 0x20af88: 0xae430114  sw          $v1, 0x114($s2)
    ctx->pc = 0x20af88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
    // 0x20af8c: 0x2403a833  addiu       $v1, $zero, -0x57CD
    ctx->pc = 0x20af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x20af90: 0xae430118  sw          $v1, 0x118($s2)
    ctx->pc = 0x20af90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 3));
    // 0x20af94: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20af98: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20AF98u;
    {
        const bool branch_taken_0x20af98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF98u;
        // 0x20af9c: 0xae40011c  sw          $zero, 0x11C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af98) {
            ctx->pc = 0x20AFC4u;
            goto label_20afc4;
        }
    }
    ctx->pc = 0x20AFA0u;
    // 0x20afa0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20afa4: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x20afa8: 0x8c66a070  lw          $a2, -0x5F90($v1)
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942832)));
    // 0x20afac: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20afb0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20afb4: 0xac65a470  sw          $a1, -0x5B90($v1)
    ctx->pc = 0x20afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943856), GPR_U32(ctx, 5));
    // 0x20afb8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20afbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFBCu;
        // 0x20afc0: 0xac83a070  sw          $v1, -0x5F90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294942832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFC4u;
label_20afc4:
    // 0x20afc4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20afc8: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x20afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x20afcc: 0x8c66a078  lw          $a2, -0x5F88($v1)
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942840)));
    // 0x20afd0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20afd4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20afd8: 0xac65a460  sw          $a1, -0x5BA0($v1)
    ctx->pc = 0x20afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943840), GPR_U32(ctx, 5));
    // 0x20afdc: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x20afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20afe0: 0xac83a078  sw          $v1, -0x5F88($a0)
    ctx->pc = 0x20afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942840), GPR_U32(ctx, 3));
label_20afe4:
    // 0x20afe4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20afe8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20afec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20afecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20aff0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20aff4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20aff4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20aff8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20aff8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20affc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20affcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b000: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20b000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b004: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20b004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b008: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b00c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b014: 0x3e00008  jr          $ra
    ctx->pc = 0x20B014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B014u;
        // 0x20b018: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B01Cu;
    // 0x20b01c: 0x0  nop
    ctx->pc = 0x20b01cu;
    // NOP
}
