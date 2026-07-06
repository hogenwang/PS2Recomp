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

// Function: sub_00161040
// Address: 0x161040 - 0x1614a0
void sub_00161040_0x161040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161040_0x161040");
#endif

    switch (ctx->pc) {
        case 0x161128u: goto label_161128;
        case 0x16113cu: goto label_16113c;
        case 0x1611fcu: goto label_1611fc;
        case 0x16132cu: goto label_16132c;
        case 0x161340u: goto label_161340;
        case 0x1613f8u: goto label_1613f8;
        case 0x161470u: goto label_161470;
        default: break;
    }

    ctx->pc = 0x161040u;

    // 0x161040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161044: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x161044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x161048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x161048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16104c: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x16104cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x161050: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x161054: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x161058: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16105c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161060: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x161060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x161064: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x161064u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x161068: 0x62183  sra         $a0, $a2, 6
    ctx->pc = 0x161068u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 6));
    // 0x16106c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x161070: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x161070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x161074: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x161074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x161078: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x161078u;
    {
        const bool branch_taken_0x161078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161078) {
            ctx->pc = 0x161168u;
            goto label_161168;
        }
    }
    ctx->pc = 0x161080u;
    // 0x161080: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x161084: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x161084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x161088: 0x86420058  lh          $v0, 0x58($s2)
    ctx->pc = 0x161088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16108c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16108cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x161090: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161090u;
    {
        const bool branch_taken_0x161090 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x161094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161090u;
        // 0x161094: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161090) {
            ctx->pc = 0x1610A0u;
            goto label_1610a0;
        }
    }
    ctx->pc = 0x161098u;
    // 0x161098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161098u;
        // 0x16109c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610A4u;
            goto label_1610a4;
        }
    }
    ctx->pc = 0x1610A0u;
label_1610a0:
    // 0x1610a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1610a4:
    // 0x1610a4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1610a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1610a8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1610a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1610ac: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1610b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1610B0u;
    {
        const bool branch_taken_0x1610b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1610B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610B0u;
        // 0x1610b4: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610b0) {
            ctx->pc = 0x1610D4u;
            goto label_1610d4;
        }
    }
    ctx->pc = 0x1610B8u;
    // 0x1610b8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x1610b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1610bc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1610c0: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1610c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1610c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1610c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1610c8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1610c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1610cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1610CCu;
    {
        const bool branch_taken_0x1610cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1610D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610CCu;
        // 0x1610d0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610cc) {
            ctx->pc = 0x1610ECu;
            goto label_1610ec;
        }
    }
    ctx->pc = 0x1610D4u;
label_1610d4:
    // 0x1610d4: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x1610d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1610d8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1610d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1610dc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1610dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1610e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1610e4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1610e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1610e8: 0x828823  subu        $s1, $a0, $v0
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1610ec:
    // 0x1610ec: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1610ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1610f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1610f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1610f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1610f8: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1610fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1610fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161100: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x161100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161104: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x161108: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x161108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
    // 0x16110c: 0x1010  mfhi        $v0
    ctx->pc = 0x16110cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161110: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161114: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x161118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16111c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16111cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161120: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x161120u;
    SET_GPR_U32(ctx, 31, 0x161128u);
    ctx->pc = 0x161124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161120u;
    // 0x161124: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x161120u, 0x161128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161128u;
label_161128:
    // 0x161128: 0x86420058  lh          $v0, 0x58($s2)
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16112c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16112cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x161130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161134: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x161134u;
    SET_GPR_U32(ctx, 31, 0x16113Cu);
    ctx->pc = 0x161138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161134u;
    // 0x161138: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x161134u, 0x16113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16113Cu;
label_16113c:
    // 0x16113c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16113cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161140: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x161140u;
    {
        const bool branch_taken_0x161140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161140) {
            ctx->pc = 0x161144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161140u;
            // 0x161144: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161158u;
            goto label_161158;
        }
    }
    ctx->pc = 0x161148u;
    // 0x161148: 0x86430058  lh          $v1, 0x58($s2)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16114c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x161150: 0xa6430058  sh          $v1, 0x58($s2)
    ctx->pc = 0x161150u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x161154: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_161158:
    // 0x161158: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x16115c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161160: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x161160u;
    {
        const bool branch_taken_0x161160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161160u;
        // 0x161164: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161160) {
            ctx->pc = 0x16121Cu;
            goto label_16121c;
        }
    }
    ctx->pc = 0x161168u;
label_161168:
    // 0x161168: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x161168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16116c: 0x32060002  andi        $a2, $s0, 0x2
    ctx->pc = 0x16116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x161170: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x161170u;
    {
        const bool branch_taken_0x161170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x161170) {
            ctx->pc = 0x161174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161170u;
            // 0x161174: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161198u;
            goto label_161198;
        }
    }
    ctx->pc = 0x161178u;
    // 0x161178: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x161178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x16117c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x16117cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x161180: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x161180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x161184: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x161184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x161188: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x161188u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16118c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161190u;
    {
        const bool branch_taken_0x161190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161190u;
        // 0x161194: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161190) {
            ctx->pc = 0x1611B0u;
            goto label_1611b0;
        }
    }
    ctx->pc = 0x161198u;
label_161198:
    // 0x161198: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16119c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1611a0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1611a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1611a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1611a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1611a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1611ac: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1611acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_1611b0:
    // 0x1611b0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1611b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1611b4: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1611b8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1611bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1611bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1611c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1611C0u;
    {
        const bool branch_taken_0x1611c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611C0u;
        // 0x1611c4: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611c0) {
            ctx->pc = 0x1611D8u;
            goto label_1611d8;
        }
    }
    ctx->pc = 0x1611C8u;
    // 0x1611c8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1611c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1611cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1611ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1611d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1611D0u;
    {
        const bool branch_taken_0x1611d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D0u;
        // 0x1611d4: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d0) {
            ctx->pc = 0x1611E4u;
            goto label_1611e4;
        }
    }
    ctx->pc = 0x1611D8u;
label_1611d8:
    // 0x1611d8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1611dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1611dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1611e0: 0xa38823  subu        $s1, $a1, $v1
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1611e4:
    // 0x1611e4: 0x92450030  lbu         $a1, 0x30($s2)
    ctx->pc = 0x1611e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1611e8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1611e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1611ec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1611ECu;
    {
        const bool branch_taken_0x1611ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1611ec) {
            ctx->pc = 0x1611F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1611ECu;
            // 0x1611f0: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161204u;
            goto label_161204;
        }
    }
    ctx->pc = 0x1611F4u;
    // 0x1611f4: 0xc058404  jal         func_161010
    ctx->pc = 0x1611F4u;
    SET_GPR_U32(ctx, 31, 0x1611FCu);
    ctx->pc = 0x1611F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1611F4u;
    // 0x1611f8: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x1611F4u, 0x1611FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611FCu;
label_1611fc:
    // 0x1611fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1611FCu;
    {
        const bool branch_taken_0x1611fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611FCu;
        // 0x161200: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611fc) {
            ctx->pc = 0x16121Cu;
            goto label_16121c;
        }
    }
    ctx->pc = 0x161204u;
label_161204:
    // 0x161204: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161204u;
    {
        const bool branch_taken_0x161204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161204) {
            ctx->pc = 0x161208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161204u;
            // 0x161208: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161220u;
            goto label_161220;
        }
    }
    ctx->pc = 0x16120Cu;
    // 0x16120c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x16120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x161210: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x161214: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161218: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x161218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_16121c:
    // 0x16121c: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x16121cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_161220:
    // 0x161220: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161220u;
    {
        const bool branch_taken_0x161220 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x161224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161220u;
        // 0x161224: 0x3223ffff  andi        $v1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161220) {
            ctx->pc = 0x161234u;
            goto label_161234;
        }
    }
    ctx->pc = 0x161228u;
    // 0x161228: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161228u;
    {
        const bool branch_taken_0x161228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161228) {
            ctx->pc = 0x16122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161228u;
            // 0x16122c: 0xae430048  sw          $v1, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161238u;
            goto label_161238;
        }
    }
    ctx->pc = 0x161230u;
    // 0x161230: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_161234:
    // 0x161234: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x161234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_161238:
    // 0x161238: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x16123c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x161240: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x161240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x161244: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x161244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161248: 0x1810  mfhi        $v1
    ctx->pc = 0x161248u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16124c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x161250: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x161254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161258: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161258u;
    {
        const bool branch_taken_0x161258 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x16125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161258u;
        // 0x16125c: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161258) {
            ctx->pc = 0x161278u;
            goto label_161278;
        }
    }
    ctx->pc = 0x161260u;
    // 0x161260: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x161260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x161264: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161264u;
    {
        const bool branch_taken_0x161264 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x161264) {
            ctx->pc = 0x161268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161264u;
            // 0x161268: 0x92430031  lbu         $v1, 0x31($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16127Cu;
            goto label_16127c;
        }
    }
    ctx->pc = 0x16126Cu;
    // 0x16126c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x161270: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x161274: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x161274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_161278:
    // 0x161278: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x161278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_16127c:
    // 0x16127c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x161280: 0x5060003a  beql        $v1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x161280u;
    {
        const bool branch_taken_0x161280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161280) {
            ctx->pc = 0x161284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161280u;
            // 0x161284: 0x32060001  andi        $a2, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16136Cu;
            goto label_16136c;
        }
    }
    ctx->pc = 0x161288u;
    // 0x161288: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16128c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x16128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x161290: 0x8642005a  lh          $v0, 0x5A($s2)
    ctx->pc = 0x161290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x161294: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x161294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x161298: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161298u;
    {
        const bool branch_taken_0x161298 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161298u;
        // 0x16129c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161298) {
            ctx->pc = 0x1612A8u;
            goto label_1612a8;
        }
    }
    ctx->pc = 0x1612A0u;
    // 0x1612a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1612A0u;
    {
        const bool branch_taken_0x1612a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A0u;
        // 0x1612a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612a0) {
            ctx->pc = 0x1612ACu;
            goto label_1612ac;
        }
    }
    ctx->pc = 0x1612A8u;
label_1612a8:
    // 0x1612a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1612ac:
    // 0x1612ac: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1612acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1612b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1612b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1612b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1612B4u;
    {
        const bool branch_taken_0x1612b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612B4u;
        // 0x1612b8: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612b4) {
            ctx->pc = 0x1612D8u;
            goto label_1612d8;
        }
    }
    ctx->pc = 0x1612BCu;
    // 0x1612bc: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x1612bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1612c0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1612c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1612c4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1612c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1612c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1612c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1612cc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1612ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1612d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1612D0u;
    {
        const bool branch_taken_0x1612d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D0u;
        // 0x1612d4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612d0) {
            ctx->pc = 0x1612F0u;
            goto label_1612f0;
        }
    }
    ctx->pc = 0x1612D8u;
label_1612d8:
    // 0x1612d8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x1612d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1612dc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1612e0: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1612e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1612e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1612e8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1612e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1612ec: 0x828023  subu        $s0, $a0, $v0
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1612f0:
    // 0x1612f0: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1612f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1612f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1612f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1612f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1612f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1612fc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x161300: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161304: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x161304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161308: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x16130c: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x16130cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
    // 0x161310: 0x1010  mfhi        $v0
    ctx->pc = 0x161310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161314: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161318: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x161318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x16131c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161324: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x161324u;
    SET_GPR_U32(ctx, 31, 0x16132Cu);
    ctx->pc = 0x161328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161324u;
    // 0x161328: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x161324u, 0x16132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16132Cu;
label_16132c:
    // 0x16132c: 0x8642005a  lh          $v0, 0x5A($s2)
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x161330: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x161330u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x161334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161338: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x161338u;
    SET_GPR_U32(ctx, 31, 0x161340u);
    ctx->pc = 0x16133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161338u;
    // 0x16133c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x161338u, 0x161340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161340u;
label_161340:
    // 0x161340: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x161340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161344: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x161344u;
    {
        const bool branch_taken_0x161344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161344) {
            ctx->pc = 0x161348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161344u;
            // 0x161348: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16135Cu;
            goto label_16135c;
        }
    }
    ctx->pc = 0x16134Cu;
    // 0x16134c: 0x8643005a  lh          $v1, 0x5A($s2)
    ctx->pc = 0x16134cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x161350: 0x31823  negu        $v1, $v1
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x161354: 0xa643005a  sh          $v1, 0x5A($s2)
    ctx->pc = 0x161354u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x161358: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x161358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_16135c:
    // 0x16135c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x16135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x161360: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161364: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x161364u;
    {
        const bool branch_taken_0x161364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161364u;
        // 0x161368: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161364) {
            ctx->pc = 0x161418u;
            goto label_161418;
        }
    }
    ctx->pc = 0x16136Cu;
label_16136c:
    // 0x16136c: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16136Cu;
    {
        const bool branch_taken_0x16136c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16136c) {
            ctx->pc = 0x161370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16136Cu;
            // 0x161370: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161394u;
            goto label_161394;
        }
    }
    ctx->pc = 0x161374u;
    // 0x161374: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x161374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x161378: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x161378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16137c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x16137cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x161380: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x161380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x161384: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x161384u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x161388: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16138c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16138Cu;
    {
        const bool branch_taken_0x16138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16138Cu;
        // 0x161390: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16138c) {
            ctx->pc = 0x1613ACu;
            goto label_1613ac;
        }
    }
    ctx->pc = 0x161394u;
label_161394:
    // 0x161394: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x161398: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x161398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16139c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16139cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1613a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1613a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1613a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1613a8: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1613a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_1613ac:
    // 0x1613ac: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1613acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1613b0: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1613b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1613b4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1613b8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1613bc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1613BCu;
    {
        const bool branch_taken_0x1613bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613BCu;
        // 0x1613c0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613bc) {
            ctx->pc = 0x1613D4u;
            goto label_1613d4;
        }
    }
    ctx->pc = 0x1613C4u;
    // 0x1613c4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1613c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1613cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613CCu;
        // 0x1613d0: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x1613E0u;
            goto label_1613e0;
        }
    }
    ctx->pc = 0x1613D4u;
label_1613d4:
    // 0x1613d4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1613d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1613dc: 0xa38023  subu        $s0, $a1, $v1
    ctx->pc = 0x1613dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1613e0:
    // 0x1613e0: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1613e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1613e4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1613e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1613e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1613E8u;
    {
        const bool branch_taken_0x1613e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613e8) {
            ctx->pc = 0x1613ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613E8u;
            // 0x1613ec: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x161400u;
            goto label_161400;
        }
    }
    ctx->pc = 0x1613F0u;
    // 0x1613f0: 0xc058404  jal         func_161010
    ctx->pc = 0x1613F0u;
    SET_GPR_U32(ctx, 31, 0x1613F8u);
    ctx->pc = 0x1613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613F0u;
    // 0x1613f4: 0x8e450038  lw          $a1, 0x38($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x1613F0u, 0x1613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1613F8u;
label_1613f8:
    // 0x1613f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1613F8u;
    {
        const bool branch_taken_0x1613f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613F8u;
        // 0x1613fc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613f8) {
            ctx->pc = 0x161418u;
            goto label_161418;
        }
    }
    ctx->pc = 0x161400u;
label_161400:
    // 0x161400: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161400u;
    {
        const bool branch_taken_0x161400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161400) {
            ctx->pc = 0x161404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161400u;
            // 0x161404: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16141Cu;
            goto label_16141c;
        }
    }
    ctx->pc = 0x161408u;
    // 0x161408: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x161408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x16140c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x16140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x161410: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161414: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x161414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_161418:
    // 0x161418: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x161418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_16141c:
    // 0x16141c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16141Cu;
    {
        const bool branch_taken_0x16141c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x161420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16141Cu;
        // 0x161420: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16141c) {
            ctx->pc = 0x161430u;
            goto label_161430;
        }
    }
    ctx->pc = 0x161424u;
    // 0x161424: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x161424u;
    {
        const bool branch_taken_0x161424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161424) {
            ctx->pc = 0x161428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161424u;
            // 0x161428: 0xae43004c  sw          $v1, 0x4C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161434u;
            goto label_161434;
        }
    }
    ctx->pc = 0x16142Cu;
    // 0x16142c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x16142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_161430:
    // 0x161430: 0xae43004c  sw          $v1, 0x4C($s2)
    ctx->pc = 0x161430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
label_161434:
    // 0x161434: 0x1027c2  srl         $a0, $s0, 31
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x161438: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16143c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x161440: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x161440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161444: 0x1810  mfhi        $v1
    ctx->pc = 0x161444u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x161448: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x161448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16144c: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x161450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161454: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x161454u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x161458: 0x92430070  lbu         $v1, 0x70($s2)
    ctx->pc = 0x161458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x16145c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16145Cu;
    {
        const bool branch_taken_0x16145c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16145c) {
            ctx->pc = 0x161460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16145Cu;
            // 0x161460: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161478u;
            goto label_161478;
        }
    }
    ctx->pc = 0x161464u;
    // 0x161464: 0x8e450074  lw          $a1, 0x74($s2)
    ctx->pc = 0x161464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x161468: 0xc058404  jal         func_161010
    ctx->pc = 0x161468u;
    SET_GPR_U32(ctx, 31, 0x161470u);
    ctx->pc = 0x16146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161468u;
    // 0x16146c: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x161468u, 0x161470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161470u;
label_161470:
    // 0x161470: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161470u;
    {
        const bool branch_taken_0x161470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161470u;
        // 0x161474: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161470) {
            ctx->pc = 0x161484u;
            goto label_161484;
        }
    }
    ctx->pc = 0x161478u;
label_161478:
    // 0x161478: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x161478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x16147c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161480: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x161480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_161484:
    // 0x161484: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161488: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16148c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16148cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161490: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161498: 0x3e00008  jr          $ra
    ctx->pc = 0x161498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161498u;
        // 0x16149c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614A0u;
}
