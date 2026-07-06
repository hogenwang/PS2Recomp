#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C600
// Address: 0x18c600 - 0x18c750
void sub_0018C600_0x18c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C600_0x18c600");
#endif

    switch (ctx->pc) {
        case 0x18c644u: goto label_18c644;
        case 0x18c65cu: goto label_18c65c;
        case 0x18c67cu: goto label_18c67c;
        default: break;
    }

    ctx->pc = 0x18c600u;

    // 0x18c600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18c604: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18c604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18c608: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18c60c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x18c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18c614: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c618: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18c618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c620: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x18c620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c624: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c628: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x18c628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c638: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x18c638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c63c: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C63Cu;
    SET_GPR_U32(ctx, 31, 0x18C644u);
    ctx->pc = 0x18C640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C63Cu;
            // 0x18c640: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C644u; }
        if (ctx->pc != 0x18C644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C644u; }
        if (ctx->pc != 0x18C644u) { return; }
    }
    ctx->pc = 0x18C644u;
label_18c644:
    // 0x18c644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18c648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c64c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18c64cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c654: 0xc063024  jal         func_18C090
    ctx->pc = 0x18C654u;
    SET_GPR_U32(ctx, 31, 0x18C65Cu);
    ctx->pc = 0x18C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C654u;
            // 0x18c658: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C090u;
    if (runtime->hasFunction(0x18C090u)) {
        auto targetFn = runtime->lookupFunction(0x18C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C65Cu; }
        if (ctx->pc != 0x18C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C090_0x18c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C65Cu; }
        if (ctx->pc != 0x18C65Cu) { return; }
    }
    ctx->pc = 0x18C65Cu;
label_18c65c:
    // 0x18c65c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18c65cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c660: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18c660u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x18c664: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x18C664u;
    {
        const bool branch_taken_0x18c664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c664) {
            ctx->pc = 0x18C668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C664u;
            // 0x18c668: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C718u;
            goto label_18c718;
        }
    }
    ctx->pc = 0x18C66Cu;
    // 0x18c66c: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x18c66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x18c670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c674: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C674u;
    SET_GPR_U32(ctx, 31, 0x18C67Cu);
    ctx->pc = 0x18C678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C674u;
            // 0x18c678: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (runtime->hasFunction(0x18DED0u)) {
        auto targetFn = runtime->lookupFunction(0x18DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C67Cu; }
        if (ctx->pc != 0x18C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DED0_0x18ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C67Cu; }
        if (ctx->pc != 0x18C67Cu) { return; }
    }
    ctx->pc = 0x18C67Cu;
label_18c67c:
    // 0x18c67c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x18c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18c684: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c684u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c68c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x18c68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18c690: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x18c690u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c694: 0x0  nop
    ctx->pc = 0x18c694u;
    // NOP
    // 0x18c698: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18c698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c69c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x18c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x18c6a0: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x18c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x18c6a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18c6a8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x18c6a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18c6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6b0: 0x0  nop
    ctx->pc = 0x18c6b0u;
    // NOP
    // 0x18c6b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18c6b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x18c6b8: 0x1010  mfhi        $v0
    ctx->pc = 0x18c6b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c6bc: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x18c6c0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x18c6c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x18c6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c6c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c6cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6d4: 0x0  nop
    ctx->pc = 0x18c6d4u;
    // NOP
    // 0x18c6d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c6d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c6dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18c6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18c6e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c6e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c6e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c6e8: 0x0  nop
    ctx->pc = 0x18c6e8u;
    // NOP
    // 0x18c6ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c6f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c6f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c6f4: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C6F4u;
    {
        const bool branch_taken_0x18c6f4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18c6f4) {
            ctx->pc = 0x18C6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6F4u;
            // 0x18c6f8: 0x2143c  dsll32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C704u;
            goto label_18c704;
        }
    }
    ctx->pc = 0x18C6FCu;
    // 0x18c6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c700: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18c704:
    // 0x18c704: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c708: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18c70c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18c70cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c710: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x18c710u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x18c714: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x18c714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_18c718:
    // 0x18c718: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C718u;
    {
        const bool branch_taken_0x18c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c718) {
            ctx->pc = 0x18C71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C718u;
            // 0x18c71c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C728u;
            goto label_18c728;
        }
    }
    ctx->pc = 0x18C720u;
    // 0x18c720: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c724: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18c724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c728:
    // 0x18c728: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c72c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18c72cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c730: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c744: 0x3e00008  jr          $ra
    ctx->pc = 0x18C744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C744u;
            // 0x18c748: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C74Cu;
    // 0x18c74c: 0x0  nop
    ctx->pc = 0x18c74cu;
    // NOP
    ctx->pc = 0x18c750u;
}
