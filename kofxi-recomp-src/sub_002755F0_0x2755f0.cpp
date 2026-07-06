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

// Function: sub_002755F0
// Address: 0x2755f0 - 0x2756f8
void sub_002755F0_0x2755f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002755F0_0x2755f0");
#endif

    switch (ctx->pc) {
        case 0x275634u: goto label_275634;
        case 0x2756dcu: goto label_2756dc;
        default: break;
    }

    ctx->pc = 0x2755f0u;

    // 0x2755f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2755f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2755f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2755f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2755f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2755f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2755fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275608: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27560c: 0x24635654  addiu       $v1, $v1, 0x5654
    ctx->pc = 0x27560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22100));
    // 0x275610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275614: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275614u;
    {
        const bool branch_taken_0x275614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275614) {
            ctx->pc = 0x275634u;
            goto label_275634;
        }
    }
    ctx->pc = 0x27561Cu;
    // 0x27561c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27561cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275620: 0x24845668  addiu       $a0, $a0, 0x5668
    ctx->pc = 0x275620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22120));
    // 0x275624: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275628: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27562c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27562Cu;
    SET_GPR_U32(ctx, 31, 0x275634u);
    ctx->pc = 0x275630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27562Cu;
    // 0x275630: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27562Cu, 0x275634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275634u;
label_275634:
    // 0x275634: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275634u;
    {
        const bool branch_taken_0x275634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275634) {
            ctx->pc = 0x275668u;
            goto label_275668;
        }
    }
    ctx->pc = 0x27563Cu;
    // 0x27563c: 0x536020  add         $t4, $v0, $s3
    ctx->pc = 0x27563cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x275640: 0x87229c5b  lh          $v0, -0x63A5($t9)
    ctx->pc = 0x275640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294941787)));
    // 0x275644: 0xfcb42dea  sd          $s4, 0x2DEA($a1)
    ctx->pc = 0x275644u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 11754), GPR_U64(ctx, 20));
    // 0x275648: 0x2d44020  add         $t0, $s6, $s4
    ctx->pc = 0x275648u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x27564c: 0xa07bfbd1  sb          $k1, -0x42F($v1)
    ctx->pc = 0x27564cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966225), (uint8_t)GPR_U32(ctx, 27));
    // 0x275650: 0xa2dcb101  sb          $gp, -0x4EFF($s6)
    ctx->pc = 0x275650u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294947073), (uint8_t)GPR_U32(ctx, 28));
    // 0x275654: 0x0  nop
    ctx->pc = 0x275654u;
    // NOP
    // 0x275658: 0x4a326f96  vminiz.w    $vf30, $vf13, $vf18z
    ctx->pc = 0x275658u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x27565c: 0x0  nop
    ctx->pc = 0x27565cu;
    // NOP
    // 0x275660: 0x4a326fb2  .word       0x4A326FB2                   # viaddi      $vi18, $vi13, -0x2 # 00200000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x275660u;
    ctx->vi[18] = ctx->vi[13] + -2;
    // 0x275664: 0x0  nop
    ctx->pc = 0x275664u;
    // NOP
label_275668:
    // 0x275668: 0xf4563853  sdc1        $f22, 0x3853($v0)
    ctx->pc = 0x275668u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x275668 raw=0xF4563853");
    // 0x27566c: 0xf15638f6  scd         $s6, 0x38F6($t2)
    ctx->pc = 0x27566cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x27566C raw=0xF15638F6");
    // 0x275670: 0xb55698d4  sdr         $s6, -0x672C($t2)
    ctx->pc = 0x275670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940884); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275674: 0xb55298d2  sdr         $s2, -0x672E($t2)
    ctx->pc = 0x275674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294940882); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275678: 0xf15e4af6  scd         $fp, 0x4AF6($t2)
    ctx->pc = 0x275678u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x275678 raw=0xF15E4AF6");
    // 0x27567c: 0x71429cd6  .word       0x71429CD6                   # INVALID     $t2, $v0, -0x632A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27567cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x16 at 0x27567C raw=0x71429CD6");
    // 0x275680: 0x61427df6  daddi       $v0, $t2, 0x7DF6
    ctx->pc = 0x275680u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)32246; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x275684: 0x6ebe3aa9  ldr         $fp, 0x3AA9($s5)
    ctx->pc = 0x275684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15017); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem >> shift)); }
    // 0x275688: 0xf1464cf6  scd         $a2, 0x4CF6($t2)
    ctx->pc = 0x275688u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x275688 raw=0xF1464CF6");
    // 0x27568c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27568Cu;
    {
        const bool branch_taken_0x27568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27568c) {
            ctx->pc = 0x2756BCu;
            goto label_2756bc;
        }
    }
    ctx->pc = 0x275694u;
    // 0x275694: 0x855717eb  lh          $s7, 0x17EB($t2)
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6123)));
    // 0x275698: 0x8de5502d  lw          $a1, 0x502D($t7)
    ctx->pc = 0x275698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20525)));
    // 0x27569c: 0xdca76bdf  ld          $a3, 0x6BDF($a1)
    ctx->pc = 0x27569cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 27615)));
    // 0x2756a0: 0x8d093b35  lw          $t1, 0x3B35($t0)
    ctx->pc = 0x2756a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15157)));
    // 0x2756a4: 0x85c61f63  lh          $a2, 0x1F63($t6)
    ctx->pc = 0x2756a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 8035)));
    // 0x2756a8: 0x87c2190b  lh          $v0, 0x190B($fp)
    ctx->pc = 0x2756a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 6411)));
    // 0x2756ac: 0x4a3269f6  .word       0x4A3269F6                   # INVALID     $s1, $s2, 0x69F6 # 00000000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x2756acu;
    throw std::runtime_error("Unhandled VU0 Special1 function: 0x36 at 0x2756AC raw=0x4A3269F6");
    // 0x2756b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2756B0 raw=0x00000001");
    // 0x2756b4: 0x4a3269d2  vmaxz.w     $vf7, $vf13, $vf18z
    ctx->pc = 0x2756b4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2756b8: 0x0  nop
    ctx->pc = 0x2756b8u;
    // NOP
label_2756bc:
    // 0x2756bc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2756bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2756c0: 0x244256ac  addiu       $v0, $v0, 0x56AC
    ctx->pc = 0x2756c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22188));
    // 0x2756c4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2756c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2756c8: 0x2484568c  addiu       $a0, $a0, 0x568C
    ctx->pc = 0x2756c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22156));
    // 0x2756cc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2756ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2756d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2756d4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2756D4u;
    SET_GPR_U32(ctx, 31, 0x2756DCu);
    ctx->pc = 0x2756D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756D4u;
    // 0x2756d8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2756D4u, 0x2756DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756DCu;
label_2756dc:
    // 0x2756dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2756dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2756e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2756e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2756e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2756e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2756e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2756e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2756ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2756ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2756F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756ECu;
        // 0x2756f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2756F4u;
    // 0x2756f4: 0x0  nop
    ctx->pc = 0x2756f4u;
    // NOP
}
