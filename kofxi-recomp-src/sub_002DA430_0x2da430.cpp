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

// Function: sub_002DA430
// Address: 0x2da430 - 0x2dab00
void sub_002DA430_0x2da430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA430_0x2da430");
#endif

    switch (ctx->pc) {
        case 0x2da49cu: goto label_2da49c;
        case 0x2da4b4u: goto label_2da4b4;
        case 0x2da4c0u: goto label_2da4c0;
        case 0x2da4fcu: goto label_2da4fc;
        case 0x2da50cu: goto label_2da50c;
        case 0x2da538u: goto label_2da538;
        case 0x2da54cu: goto label_2da54c;
        case 0x2da55cu: goto label_2da55c;
        case 0x2da564u: goto label_2da564;
        case 0x2da580u: goto label_2da580;
        case 0x2da5a0u: goto label_2da5a0;
        case 0x2da5c4u: goto label_2da5c4;
        case 0x2da5d8u: goto label_2da5d8;
        case 0x2da5dcu: goto label_2da5dc;
        case 0x2da6e0u: goto label_2da6e0;
        case 0x2da6e8u: goto label_2da6e8;
        case 0x2da6f4u: goto label_2da6f4;
        case 0x2da700u: goto label_2da700;
        case 0x2da710u: goto label_2da710;
        case 0x2da714u: goto label_2da714;
        case 0x2da73cu: goto label_2da73c;
        case 0x2da750u: goto label_2da750;
        case 0x2da754u: goto label_2da754;
        case 0x2da768u: goto label_2da768;
        case 0x2da774u: goto label_2da774;
        case 0x2da77cu: goto label_2da77c;
        case 0x2da780u: goto label_2da780;
        case 0x2da788u: goto label_2da788;
        case 0x2da78cu: goto label_2da78c;
        case 0x2da79cu: goto label_2da79c;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7a4u: goto label_2da7a4;
        case 0x2da7a8u: goto label_2da7a8;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7c8u: goto label_2da7c8;
        case 0x2da7e8u: goto label_2da7e8;
        case 0x2da7ecu: goto label_2da7ec;
        case 0x2da800u: goto label_2da800;
        case 0x2da804u: goto label_2da804;
        case 0x2da814u: goto label_2da814;
        case 0x2da818u: goto label_2da818;
        case 0x2da840u: goto label_2da840;
        case 0x2da894u: goto label_2da894;
        case 0x2da8c0u: goto label_2da8c0;
        case 0x2da90cu: goto label_2da90c;
        case 0x2da938u: goto label_2da938;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2daa28u: goto label_2daa28;
        case 0x2daa90u: goto label_2daa90;
        case 0x2daa94u: goto label_2daa94;
        case 0x2daac4u: goto label_2daac4;
        default: break;
    }

    ctx->pc = 0x2da430u;

    // 0x2da430: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2da430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2da434: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2da434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2da438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da43c: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2da43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x2da440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2da440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da444: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x2da444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x2da448: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x2da448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x2da44c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2da44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x2da450: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x2da450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x2da454: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2da454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2da458: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x2da458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x2da45c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2da45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2da460: 0xe7b60138  swc1        $f22, 0x138($sp)
    ctx->pc = 0x2da460u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2da464: 0xe7b50130  swc1        $f21, 0x130($sp)
    ctx->pc = 0x2da464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2da468: 0xe7b40128  swc1        $f20, 0x128($sp)
    ctx->pc = 0x2da468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2da46c: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x2da46cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da470: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2da470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2da474: 0x2463a4bc  addiu       $v1, $v1, -0x5B44
    ctx->pc = 0x2da474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943932));
    // 0x2da478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2da478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da47c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA47Cu;
    {
        const bool branch_taken_0x2da47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da47c) {
            ctx->pc = 0x2DA49Cu;
            goto label_2da49c;
        }
    }
    ctx->pc = 0x2DA484u;
    // 0x2da484: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da488: 0x2484a4d0  addiu       $a0, $a0, -0x5B30
    ctx->pc = 0x2da488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943952));
    // 0x2da48c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2da48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2da490: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2da490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da494: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA494u;
    SET_GPR_U32(ctx, 31, 0x2DA49Cu);
    ctx->pc = 0x2DA498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA494u;
    // 0x2da498: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA494u, 0x2DA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA49Cu;
label_2da49c:
    // 0x2da49c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA49Cu;
    {
        const bool branch_taken_0x2da49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da49c) {
            ctx->pc = 0x2DA4D0u;
            goto label_2da4d0;
        }
    }
    ctx->pc = 0x2DA4A4u;
    // 0x2da4a4: 0x8fd28e2d  lw          $s2, -0x71D3($fp)
    ctx->pc = 0x2da4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294938157)));
    // 0x2da4a8: 0xa1c219b9  sb          $v0, 0x19B9($t6)
    ctx->pc = 0x2da4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 6585), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da4ac: 0xce2ceae  jal         func_38B3AB8
    ctx->pc = 0x2DA4ACu;
    SET_GPR_U32(ctx, 31, 0x2DA4B4u);
    ctx->pc = 0x2DA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4ACu;
    // 0x2da4b0: 0xde11a6c7  ld          $s1, -0x5939($s0) (Delay Slot)
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 4294944455)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3AB8u, 0x2DA4ACu, 0x2DA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4B4u;
label_2da4b4:
    // 0x2da4b4: 0xdd34783f  ld          $s4, 0x783F($t1)
    ctx->pc = 0x2da4b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 9), 30783)));
    // 0x2da4b8: 0xc011264  jal         func_044990
    ctx->pc = 0x2DA4B8u;
    SET_GPR_U32(ctx, 31, 0x2DA4C0u);
    ctx->pc = 0x44990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44990u, 0x2DA4B8u, 0x2DA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4C0u;
label_2da4c0:
    // 0x2da4c0: 0x701cc1cf  .word       0x701CC1CF                   # INVALID     $zero, $gp, -0x3E31 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2da4c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x2DA4C0 raw=0x701CC1CF");
    // 0x2da4c4: 0xc712d516  lwc1        $f18, -0x2AEA($t8)
    ctx->pc = 0x2da4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956310)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da4c8: 0x701cc46b  .word       0x701CC46B                   # INVALID     $zero, $gp, -0x3B95 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2da4c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2B at 0x2DA4C8 raw=0x701CC46B");
    // 0x2da4cc: 0x0  nop
    ctx->pc = 0x2da4ccu;
    // NOP
label_2da4d0:
    // 0x2da4d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2da4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2da4d4: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2da4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2da4d8: 0x86701d45  lh          $s0, 0x1D45($s3)
    ctx->pc = 0x2da4d8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 7493)));
    // 0x2da4dc: 0x86d68d45  lh          $s6, -0x72BB($s6)
    ctx->pc = 0x2da4dcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294937925)));
    // 0x2da4e0: 0x79501f1a  lq          $s0, 0x1F1A($t2)
    ctx->pc = 0x2da4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 10), 7962)));
    // 0x2da4e4: 0x80506b85  lb          $s0, 0x6B85($v0)
    ctx->pc = 0x2da4e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27525)));
    // 0x2da4e8: 0x83569d25  lb          $s6, -0x62DB($k0)
    ctx->pc = 0x2da4e8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 4294941989)));
    // 0x2da4ec: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2da4f0: 0x83f4dd21  lb          $s4, -0x22DF($ra)
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294958369)));
    // 0x2da4f4: 0xc0b8bb8  jal         func_2E2EE0
    ctx->pc = 0x2DA4F4u;
    SET_GPR_U32(ctx, 31, 0x2DA4FCu);
    ctx->pc = 0x2DA4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4F4u;
    // 0x2da4f8: 0x9c506985  lwu         $s0, 0x6985($v0) (Delay Slot)
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 27013)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EE0u, 0x2DA4F4u, 0x2DA4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4FCu;
label_2da4fc:
    // 0x2da4fc: 0x86941505  lh          $s4, 0x1505($s4)
    ctx->pc = 0x2da4fcu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5381)));
    // 0x2da500: 0x9c46e965  lwu         $a2, -0x169B($v0)
    ctx->pc = 0x2da500u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961509)));
    // 0x2da504: 0x4bf01f1a  vmulz.xyzw  $vf28, $vf3, $vf16z
    ctx->pc = 0x2da504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da508: 0x80506b85  lb          $s0, 0x6B85($v0)
    ctx->pc = 0x2da508u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27525)));
label_2da50c:
    // 0x2da50c: 0x85b69d25  lh          $s6, -0x62DB($t5)
    ctx->pc = 0x2da50cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294941989)));
    // 0x2da510: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2da514: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da514u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da518: 0x86111565  lh          $s1, 0x1565($s0)
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5477)));
    // 0x2da51c: 0x86d61525  lh          $s6, 0x1525($s6)
    ctx->pc = 0x2da51cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5413)));
    // 0x2da520: 0x4bf01f1a  vmulz.xyzw  $vf28, $vf3, $vf16z
    ctx->pc = 0x2da520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da524: 0x80506b85  lb          $s0, 0x6B85($v0)
    ctx->pc = 0x2da524u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27525)));
    // 0x2da528: 0x85569d25  lh          $s6, -0x62DB($t2)
    ctx->pc = 0x2da528u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294941989)));
    // 0x2da52c: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2da530: 0xc0b6f3e  jal         func_2DBCF8
    ctx->pc = 0x2DA530u;
    SET_GPR_U32(ctx, 31, 0x2DA538u);
    ctx->pc = 0x2DA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA530u;
    // 0x2da534: 0x83f4e921  lb          $s4, -0x16DF($ra) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294961441)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBCF8u, 0x2DA530u, 0x2DA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA538u;
label_2da538:
    // 0x2da538: 0x86f41505  lh          $s4, 0x1505($s7)
    ctx->pc = 0x2da538u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 5381)));
    // 0x2da53c: 0x80506b85  lb          $s0, 0x6B85($v0)
    ctx->pc = 0x2da53cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 27525)));
    // 0x2da540: 0x4bb01f1a  vmulz.xyw   $vf28, $vf3, $vf16z
    ctx->pc = 0x2da540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da544: 0x84769d25  lh          $s6, -0x62DB($v1)
    ctx->pc = 0x2da544u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294941989)));
    // 0x2da548: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_2da54c:
    // 0x2da54c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da54cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da550: 0x83f4c921  lb          $s4, -0x36DF($ra)
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294953249)));
    // 0x2da554: 0xc0b700a  jal         func_2DC028
    ctx->pc = 0x2DA554u;
    SET_GPR_U32(ctx, 31, 0x2DA55Cu);
    ctx->pc = 0x2DA558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA554u;
    // 0x2da558: 0x83f4c934  lb          $s4, -0x36CC($ra) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294953268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC028u, 0x2DA554u, 0x2DA55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA55Cu;
label_2da55c:
    // 0x2da55c: 0x86d41505  lh          $s4, 0x1505($s6)
    ctx->pc = 0x2da55cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5381)));
    // 0x2da560: 0x9c46e945  lwu         $a2, -0x16BB($v0)
    ctx->pc = 0x2da560u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961477)));
label_2da564:
    // 0x2da564: 0x4bb01f1a  vmulz.xyw   $vf28, $vf3, $vf16z
    ctx->pc = 0x2da564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da568: 0x87569d25  lh          $s6, -0x62DB($k0)
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 4294941989)));
    // 0x2da56c: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2da570: 0x84761125  lh          $s6, 0x1125($v1)
    ctx->pc = 0x2da570u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4389)));
    // 0x2da574: 0x88506be5  lwl         $s0, 0x6BE5($v0)
    ctx->pc = 0x2da574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27621); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2da578: 0xc0b715a  jal         func_2DC568
    ctx->pc = 0x2DA578u;
    SET_GPR_U32(ctx, 31, 0x2DA580u);
    ctx->pc = 0x2DA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA578u;
    // 0x2da57c: 0x83f4c521  lb          $s4, -0x3ADF($ra) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294952225)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC568u, 0x2DA578u, 0x2DA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA580u;
label_2da580:
    // 0x2da580: 0x86f41545  lh          $s4, 0x1545($s7)
    ctx->pc = 0x2da580u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 5445)));
    // 0x2da584: 0x94506bc5  lhu         $s0, 0x6BC5($v0)
    ctx->pc = 0x2da584u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 27589)));
    // 0x2da588: 0x4b901f1a  vmulz.xy    $vf28, $vf3, $vf16z
    ctx->pc = 0x2da588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da58c: 0x94506bc5  lhu         $s0, 0x6BC5($v0)
    ctx->pc = 0x2da58cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 27589)));
    // 0x2da590: 0x95b69d25  lhu         $s6, -0x62DB($t5)
    ctx->pc = 0x2da590u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294941989)));
    // 0x2da594: 0x9e506ba5  lwu         $s0, 0x6BA5($s2)
    ctx->pc = 0x2da594u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 27557)));
    // 0x2da598: 0xc0b72ac  jal         func_2DCAB0
    ctx->pc = 0x2DA598u;
    SET_GPR_U32(ctx, 31, 0x2DA5A0u);
    ctx->pc = 0x2DA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA598u;
    // 0x2da59c: 0x83f4c121  lb          $s4, -0x3EDF($ra) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294951201)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCAB0u, 0x2DA598u, 0x2DA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5A0u;
label_2da5a0:
    // 0x2da5a0: 0x86941505  lh          $s4, 0x1505($s4)
    ctx->pc = 0x2da5a0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5381)));
    // 0x2da5a4: 0x9c46e945  lwu         $a2, -0x16BB($v0)
    ctx->pc = 0x2da5a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961477)));
    // 0x2da5a8: 0x4b901f1a  vmulz.xy    $vf28, $vf3, $vf16z
    ctx->pc = 0x2da5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da5ac: 0x95569d25  lhu         $s6, -0x62DB($t2)
    ctx->pc = 0x2da5acu;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294941989)));
    // 0x2da5b0: 0x9e506ba5  lwu         $s0, 0x6BA5($s2)
    ctx->pc = 0x2da5b0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 27557)));
    // 0x2da5b4: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da5b4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da5b8: 0x94506bc5  lhu         $s0, 0x6BC5($v0)
    ctx->pc = 0x2da5b8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 27589)));
    // 0x2da5bc: 0x86701d65  lh          $s0, 0x1D65($s3)
    ctx->pc = 0x2da5bcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 7525)));
    // 0x2da5c0: 0x87361165  lh          $s6, 0x1165($t9)
    ctx->pc = 0x2da5c0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4453)));
label_2da5c4:
    // 0x2da5c4: 0x83f49d21  lb          $s4, -0x62DF($ra)
    ctx->pc = 0x2da5c4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941985)));
    // 0x2da5c8: 0x83f4dd21  lb          $s4, -0x22DF($ra)
    ctx->pc = 0x2da5c8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294958369)));
    // 0x2da5cc: 0x83f4c520  lb          $s4, -0x3AE0($ra)
    ctx->pc = 0x2da5ccu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294952224)));
    // 0x2da5d0: 0xc0b8bfa  jal         func_2E2FE8
    ctx->pc = 0x2DA5D0u;
    SET_GPR_U32(ctx, 31, 0x2DA5D8u);
    ctx->pc = 0x2DA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5D0u;
    // 0x2da5d4: 0x83f4c123  lb          $s4, -0x3EDD($ra) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294951203)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2FE8u, 0x2DA5D0u, 0x2DA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5D8u;
label_2da5d8:
    // 0x2da5d8: 0x86f41505  lh          $s4, 0x1505($s7)
    ctx->pc = 0x2da5d8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 5381)));
label_2da5dc:
    // 0x2da5dc: 0x83f49d21  lb          $s4, -0x62DF($ra)
    ctx->pc = 0x2da5dcu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941985)));
    // 0x2da5e0: 0x4bf01f1a  vmulz.xyzw  $vf28, $vf3, $vf16z
    ctx->pc = 0x2da5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da5e4: 0x97169d25  lhu         $s6, -0x62DB($t8)
    ctx->pc = 0x2da5e4u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294941989)));
    // 0x2da5e8: 0x9e506ba5  lwu         $s0, 0x6BA5($s2)
    ctx->pc = 0x2da5e8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 27557)));
    // 0x2da5ec: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da5ecu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da5f0: 0x8274d5a6  lb          $s4, -0x2A5A($s3)
    ctx->pc = 0x2da5f0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294956454)));
    // 0x2da5f4: 0x86700da5  lh          $s0, 0xDA5($s3)
    ctx->pc = 0x2da5f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 3493)));
    // 0x2da5f8: 0xa6510d65  sh          $s1, 0xD65($s2)
    ctx->pc = 0x2da5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3429), (uint16_t)GPR_U32(ctx, 17));
    // 0x2da5fc: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da5fcu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da600: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da600u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da604: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da608: 0x86409125  lh          $zero, -0x6EDB($s2)
    ctx->pc = 0x2da608u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294938917)));
    // 0x2da60c: 0x83f4e923  lb          $s4, -0x16DD($ra)
    ctx->pc = 0x2da60cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294961443)));
    // 0x2da610: 0x83f49d20  lb          $s4, -0x62E0($ra)
    ctx->pc = 0x2da610u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941984)));
    // 0x2da614: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da614u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da618: 0x82748587  lb          $s4, -0x7A79($s3)
    ctx->pc = 0x2da618u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294935943)));
    // 0x2da61c: 0x8274d581  lb          $s4, -0x2A7F($s3)
    ctx->pc = 0x2da61cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294956417)));
    // 0x2da620: 0x86469545  lh          $a2, -0x6ABB($s2)
    ctx->pc = 0x2da620u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939973)));
    // 0x2da624: 0x86700985  lh          $s0, 0x985($s3)
    ctx->pc = 0x2da624u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2437)));
    // 0x2da628: 0x83510965  lb          $s1, 0x965($k0)
    ctx->pc = 0x2da628u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 2405)));
    // 0x2da62c: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da630: 0x86408d45  lh          $zero, -0x72BB($s2)
    ctx->pc = 0x2da630u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937925)));
    // 0x2da634: 0x83505725  lb          $s0, 0x5725($k0)
    ctx->pc = 0x2da634u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 22309)));
    // 0x2da638: 0x83f49d20  lb          $s4, -0x62E0($ra)
    ctx->pc = 0x2da638u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941984)));
    // 0x2da63c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da63cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da640: 0x8274d987  lb          $s4, -0x2679($s3)
    ctx->pc = 0x2da640u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294957447)));
    // 0x2da644: 0x8274dd81  lb          $s4, -0x227F($s3)
    ctx->pc = 0x2da644u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294958465)));
    // 0x2da648: 0x86469545  lh          $a2, -0x6ABB($s2)
    ctx->pc = 0x2da648u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939973)));
    // 0x2da64c: 0x86700985  lh          $s0, 0x985($s3)
    ctx->pc = 0x2da64cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2437)));
    // 0x2da650: 0x81510965  lb          $s1, 0x965($t2)
    ctx->pc = 0x2da650u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2405)));
    // 0x2da654: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da658: 0x86408d45  lh          $zero, -0x72BB($s2)
    ctx->pc = 0x2da658u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937925)));
    // 0x2da65c: 0x81505f25  lb          $s0, 0x5F25($t2)
    ctx->pc = 0x2da65cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 24357)));
    // 0x2da660: 0x83f49d20  lb          $s4, -0x62E0($ra)
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941984)));
    // 0x2da664: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da668: 0x8274c187  lb          $s4, -0x3E79($s3)
    ctx->pc = 0x2da668u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951303)));
    // 0x2da66c: 0x8274dd81  lb          $s4, -0x227F($s3)
    ctx->pc = 0x2da66cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294958465)));
    // 0x2da670: 0x86469545  lh          $a2, -0x6ABB($s2)
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939973)));
    // 0x2da674: 0x86700985  lh          $s0, 0x985($s3)
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2437)));
    // 0x2da678: 0x83510965  lb          $s1, 0x965($k0)
    ctx->pc = 0x2da678u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 2405)));
    // 0x2da67c: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da67cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da680: 0x86408d45  lh          $zero, -0x72BB($s2)
    ctx->pc = 0x2da680u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937925)));
    // 0x2da684: 0x83505f25  lb          $s0, 0x5F25($k0)
    ctx->pc = 0x2da684u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 24357)));
    // 0x2da688: 0x83f49d20  lb          $s4, -0x62E0($ra)
    ctx->pc = 0x2da688u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941984)));
    // 0x2da68c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da68cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da690: 0x8274c587  lb          $s4, -0x3A79($s3)
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294952327)));
    // 0x2da694: 0x8274dd81  lb          $s4, -0x227F($s3)
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294958465)));
    // 0x2da698: 0x86469545  lh          $a2, -0x6ABB($s2)
    ctx->pc = 0x2da698u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939973)));
    // 0x2da69c: 0x86700985  lh          $s0, 0x985($s3)
    ctx->pc = 0x2da69cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2437)));
    // 0x2da6a0: 0x82510965  lb          $s1, 0x965($s2)
    ctx->pc = 0x2da6a0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2405)));
    // 0x2da6a4: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da6a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da6a8: 0x86408d45  lh          $zero, -0x72BB($s2)
    ctx->pc = 0x2da6a8u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937925)));
    // 0x2da6ac: 0x9b505745  lwr         $s0, 0x5745($k0)
    ctx->pc = 0x2da6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 22341); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2da6b0: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DA6B0u;
    {
        const bool branch_taken_0x2da6b0 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da6b0) {
            ctx->pc = 0x2DA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA6B0u;
            // 0x2da6b4: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1AE4u;
            return;
        }
    }
    ctx->pc = 0x2DA6B8u;
    // 0x2da6b8: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2da6bc: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2da6bcu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DA6BC raw=0xF6531D0D");
    // 0x2da6c0: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2da6c0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2da6c4: 0x83f4d135  lb          $s4, -0x2ECB($ra)
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294955317)));
    // 0x2da6c8: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2da6c8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2da6cc: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2da6ccu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2da6d0: 0x83f49d34  lb          $s4, -0x62CC($ra)
    ctx->pc = 0x2da6d0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942004)));
    // 0x2da6d4: 0x86531fb5  lh          $s3, 0x1FB5($s2)
    ctx->pc = 0x2da6d4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8117)));
    // 0x2da6d8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DA6D8u;
    SET_GPR_U32(ctx, 31, 0x2DA6E0u);
    ctx->pc = 0x2DA6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6D8u;
    // 0x2da6dc: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DA6D8u, 0x2DA6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6E0u;
label_2da6e0:
    // 0x2da6e0: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2da6e0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2da6e4: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2da6e4u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
label_2da6e8:
    // 0x2da6e8: 0x8274df01  lb          $s4, -0x20FF($s3)
    ctx->pc = 0x2da6e8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294958849)));
    // 0x2da6ec: 0x86705b05  lh          $s0, 0x5B05($s3)
    ctx->pc = 0x2da6ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 23301)));
    // 0x2da6f0: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
label_2da6f4:
    // 0x2da6f4: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da6f4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da6f8: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2da6f8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2da6fc: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2da6fcu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
label_2da700:
    // 0x2da700: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2da700u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2da704: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da708: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da708u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da70c: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2da70cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
label_2da710:
    // 0x2da710: 0x8451d945  lh          $s1, -0x26BB($v0)
    ctx->pc = 0x2da710u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957381)));
label_2da714:
    // 0x2da714: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2da714u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2da718: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da71c: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da71cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da720: 0x82f497a7  lb          $s4, -0x6859($s7)
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940583)));
    // 0x2da724: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2da724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2da728: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
    // 0x2da72c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2da72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2da730: 0x84505de5  lh          $s0, 0x5DE5($v0)
    ctx->pc = 0x2da730u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24037)));
    // 0x2da734: 0x2447dfc0  addiu       $a3, $v0, -0x2040
    ctx->pc = 0x2da734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
    // 0x2da738: 0x83f49d20  lb          $s4, -0x62E0($ra)
    ctx->pc = 0x2da738u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941984)));
label_2da73c:
    // 0x2da73c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da740: 0x82748187  lb          $s4, -0x7E79($s3)
    ctx->pc = 0x2da740u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294934919)));
    // 0x2da744: 0x82748581  lb          $s4, -0x7A7F($s3)
    ctx->pc = 0x2da744u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294935937)));
    // 0x2da748: 0x86469545  lh          $a2, -0x6ABB($s2)
    ctx->pc = 0x2da748u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939973)));
    // 0x2da74c: 0x86700985  lh          $s0, 0x985($s3)
    ctx->pc = 0x2da74cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2437)));
label_2da750:
    // 0x2da750: 0x87518965  lh          $s1, -0x769B($k0)
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 4294936933)));
label_2da754:
    // 0x2da754: 0x7916153a  lq          $s6, 0x153A($t0)
    ctx->pc = 0x2da754u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 8), 5434)));
    // 0x2da758: 0x86408d45  lh          $zero, -0x72BB($s2)
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937925)));
    // 0x2da75c: 0x83f4d521  lb          $s4, -0x2ADF($ra)
    ctx->pc = 0x2da75cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294956321)));
    // 0x2da760: 0x83f4d120  lb          $s4, -0x2EE0($ra)
    ctx->pc = 0x2da760u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294955296)));
    // 0x2da764: 0x83f48d23  lb          $s4, -0x72DD($ra)
    ctx->pc = 0x2da764u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294937891)));
label_2da768:
    // 0x2da768: 0x98500dc5  lwr         $s0, 0xDC5($v0)
    ctx->pc = 0x2da768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3525); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2da76c: 0xc0b8148  jal         func_2E0520
    ctx->pc = 0x2DA76Cu;
    SET_GPR_U32(ctx, 31, 0x2DA774u);
    ctx->pc = 0x2DA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA76Cu;
    // 0x2da770: 0x85f01c25  lh          $s0, 0x1C25($t7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 7205)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0520u, 0x2DA76Cu, 0x2DA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA774u;
label_2da774:
    // 0x2da774: 0x86d41505  lh          $s4, 0x1505($s6)
    ctx->pc = 0x2da774u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5381)));
    // 0x2da778: 0x9e506ba5  lwu         $s0, 0x6BA5($s2)
    ctx->pc = 0x2da778u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 27557)));
label_2da77c:
    // 0x2da77c: 0x82d69d25  lb          $s6, -0x62DB($s6)
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294941989)));
label_2da780:
    // 0x2da780: 0x4bb01f1a  vmulz.xyw   $vf28, $vf3, $vf16z
    ctx->pc = 0x2da780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2da784: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da784u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
label_2da788:
    // 0x2da788: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2da788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2da78c:
    // 0x2da78c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2da78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2da790: 0x2484e0b0  addiu       $a0, $a0, -0x1F50
    ctx->pc = 0x2da790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959280));
    // 0x2da794: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40
    ctx->pc = 0x2da794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
    // 0x2da798: 0x83f4cd23  lb          $s4, -0x32DD($ra)
    ctx->pc = 0x2da798u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294954275)));
label_2da79c:
    // 0x2da79c: 0x86101dc5  lh          $s0, 0x1DC5($s0)
    ctx->pc = 0x2da79cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7621)));
label_2da7a0:
    // 0x2da7a0: 0xc0b8104  jal         func_2E0410
label_2da7a4:
    if (ctx->pc == 0x2DA7A4u) {
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x4bb01f1a  vmulz.xyw   $vf28, $vf3, $vf16z (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7A8u;
        goto label_2da7a8;
    }
    ctx->pc = 0x2DA7A0u;
    SET_GPR_U32(ctx, 31, 0x2DA7A8u);
    ctx->pc = 0x2DA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7A0u;
    // 0x2da7a4: 0x4bb01f1a  vmulz.xyw   $vf28, $vf3, $vf16z (Delay Slot)
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0410u, 0x2DA7A0u, 0x2DA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0x85741525  lh          $s4, 0x1525($t3)
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 5413)));
    // 0x2da7ac: 0x9f506b25  lwu         $s0, 0x6B25($k0)
    ctx->pc = 0x2da7acu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 26), 27429)));
    // 0x2da7b0: 0x83f4d121  lb          $s4, -0x2EDF($ra)
    ctx->pc = 0x2da7b0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294955297)));
label_2da7b4:
    // 0x2da7b4: 0x83f4cd20  lb          $s4, -0x32E0($ra)
    ctx->pc = 0x2da7b4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294954272)));
    // 0x2da7b8: 0x83f4d123  lb          $s4, -0x2EDD($ra)
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294955299)));
    // 0x2da7bc: 0x83f4dd22  lb          $s4, -0x22DE($ra)
    ctx->pc = 0x2da7bcu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294958370)));
    // 0x2da7c0: 0xc0b8148  jal         func_2E0520
    ctx->pc = 0x2DA7C0u;
    SET_GPR_U32(ctx, 31, 0x2DA7C8u);
    ctx->pc = 0x2DA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7C0u;
    // 0x2da7c4: 0x86101c25  lh          $s0, 0x1C25($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7205)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0520u, 0x2DA7C0u, 0x2DA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7C8u;
label_2da7c8:
    // 0x2da7c8: 0x84741525  lh          $s4, 0x1525($v1)
    ctx->pc = 0x2da7c8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5413)));
    // 0x2da7cc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2da7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2da7d0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2da7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2da7d4: 0x2484dfc8  addiu       $a0, $a0, -0x2038
    ctx->pc = 0x2da7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959048));
    // 0x2da7d8: 0x24a5dfd8  addiu       $a1, $a1, -0x2028
    ctx->pc = 0x2da7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
    // 0x2da7dc: 0x83f4cd23  lb          $s4, -0x32DD($ra)
    ctx->pc = 0x2da7dcu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294954275)));
    // 0x2da7e0: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2DA7E0u;
    SET_GPR_U32(ctx, 31, 0x2DA7E8u);
    ctx->pc = 0x2DA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7E0u;
    // 0x2da7e4: 0x86101dc5  lh          $s0, 0x1DC5($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7621)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0410u, 0x2DA7E0u, 0x2DA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7E8u;
label_2da7e8:
    // 0x2da7e8: 0x87741525  lh          $s4, 0x1525($k1)
    ctx->pc = 0x2da7e8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 27), 5413)));
label_2da7ec:
    // 0x2da7ec: 0x83f4d121  lb          $s4, -0x2EDF($ra)
    ctx->pc = 0x2da7ecu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294955297)));
    // 0x2da7f0: 0x83f4dd22  lb          $s4, -0x22DE($ra)
    ctx->pc = 0x2da7f0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294958370)));
    // 0x2da7f4: 0x83f4cd20  lb          $s4, -0x32E0($ra)
    ctx->pc = 0x2da7f4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294954272)));
    // 0x2da7f8: 0x83f48d23  lb          $s4, -0x72DD($ra)
    ctx->pc = 0x2da7f8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294937891)));
    // 0x2da7fc: 0xc0b8148  jal         func_2E0520
label_2da800:
    if (ctx->pc == 0x2DA800u) {
        ctx->pc = 0x2DA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7FCu;
        // 0x2da800: 0x86301c25  lh          $s0, 0x1C25($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 7205)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA804u;
        goto label_2da804;
    }
    ctx->pc = 0x2DA7FCu;
    SET_GPR_U32(ctx, 31, 0x2DA804u);
    ctx->pc = 0x2DA800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7FCu;
    // 0x2da800: 0x86301c25  lh          $s0, 0x1C25($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 7205)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0520u, 0x2DA7FCu, 0x2DA804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA804u;
label_2da804:
    // 0x2da804: 0xa6501d45  sh          $s0, 0x1D45($s2)
    ctx->pc = 0x2da804u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 7493), (uint16_t)GPR_U32(ctx, 16));
    // 0x2da808: 0x86519565  lh          $s1, -0x6A9B($s2)
    ctx->pc = 0x2da808u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294940005)));
    // 0x2da80c: 0x87149174  lh          $s4, -0x6E8C($t8)
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294938996)));
    // 0x2da810: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2da814:
    if (ctx->pc == 0x2DA814u) {
        ctx->pc = 0x2DA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA810u;
        // 0x2da814: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA818u;
        goto label_2da818;
    }
    ctx->pc = 0x2DA810u;
    {
        const bool branch_taken_0x2da810 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da810) {
            ctx->pc = 0x2DA814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA810u;
            // 0x2da814: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1C44u;
            return;
        }
    }
    ctx->pc = 0x2DA818u;
label_2da818:
    // 0x2da818: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2da818u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2da81c: 0x83f49d35  lb          $s4, -0x62CB($ra)
    ctx->pc = 0x2da81cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942005)));
    // 0x2da820: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2da820u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DA820 raw=0xF6531D0D");
    // 0x2da824: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2da824u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2da828: 0x86531f75  lh          $s3, 0x1F75($s2)
    ctx->pc = 0x2da828u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8053)));
    // 0x2da82c: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2da82cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2da830: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2da830u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2da834: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da834u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da838: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DA838u;
    SET_GPR_U32(ctx, 31, 0x2DA840u);
    ctx->pc = 0x2DA83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA838u;
    // 0x2da83c: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DA838u, 0x2DA840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA840u;
label_2da840:
    // 0x2da840: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2da840u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2da844: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2da844u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
    // 0x2da848: 0x8274c721  lb          $s4, -0x38DF($s3)
    ctx->pc = 0x2da848u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294952737)));
    // 0x2da84c: 0x86705f25  lh          $s0, 0x5F25($s3)
    ctx->pc = 0x2da84cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24357)));
    // 0x2da850: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da850u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da854: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da854u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da858: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2da858u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2da85c: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2da85cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
    // 0x2da860: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2da860u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2da864: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da868: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da868u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da86c: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
    // 0x2da870: 0x82515d45  lb          $s1, 0x5D45($s2)
    ctx->pc = 0x2da870u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 23877)));
    // 0x2da874: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2da878: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da87c: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da87cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da880: 0x82f49767  lb          $s4, -0x6899($s7)
    ctx->pc = 0x2da880u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940519)));
    // 0x2da884: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2da884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2da888: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2da888u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
    // 0x2da88c: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DA88Cu;
    {
        const bool branch_taken_0x2da88c = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da88c) {
            ctx->pc = 0x2DA890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA88Cu;
            // 0x2da890: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1CC0u;
            return;
        }
    }
    ctx->pc = 0x2DA894u;
label_2da894:
    // 0x2da894: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2da894u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2da898: 0x83f4e936  lb          $s4, -0x16CA($ra)
    ctx->pc = 0x2da898u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294961462)));
    // 0x2da89c: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2da89cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DA89C raw=0xF6531D0D");
    // 0x2da8a0: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2da8a4: 0x83f49d35  lb          $s4, -0x62CB($ra)
    ctx->pc = 0x2da8a4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942005)));
    // 0x2da8a8: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2da8a8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2da8ac: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2da8acu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2da8b0: 0x86531f75  lh          $s3, 0x1F75($s2)
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8053)));
    // 0x2da8b4: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da8b4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da8b8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DA8B8u;
    SET_GPR_U32(ctx, 31, 0x2DA8C0u);
    ctx->pc = 0x2DA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8B8u;
    // 0x2da8bc: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DA8B8u, 0x2DA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8C0u;
label_2da8c0:
    // 0x2da8c0: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2da8c4: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2da8c4u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
    // 0x2da8c8: 0x8274d321  lb          $s4, -0x2CDF($s3)
    ctx->pc = 0x2da8c8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294955809)));
    // 0x2da8cc: 0x86705f25  lh          $s0, 0x5F25($s3)
    ctx->pc = 0x2da8ccu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24357)));
    // 0x2da8d0: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da8d4: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da8d4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da8d8: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2da8d8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2da8dc: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2da8dcu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
    // 0x2da8e0: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2da8e0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2da8e4: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da8e8: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da8e8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da8ec: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2da8ecu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
    // 0x2da8f0: 0x83515d45  lb          $s1, 0x5D45($k0)
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 23877)));
    // 0x2da8f4: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2da8f4u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2da8f8: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da8fc: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da8fcu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da900: 0x82f49767  lb          $s4, -0x6899($s7)
    ctx->pc = 0x2da900u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940519)));
    // 0x2da904: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2da904u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2da908: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2da908u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
label_2da90c:
    // 0x2da90c: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DA90Cu;
    {
        const bool branch_taken_0x2da90c = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da90c) {
            ctx->pc = 0x2DA910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA90Cu;
            // 0x2da910: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1D40u;
            return;
        }
    }
    ctx->pc = 0x2DA914u;
    // 0x2da914: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2da914u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2da918: 0x83f49d35  lb          $s4, -0x62CB($ra)
    ctx->pc = 0x2da918u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942005)));
    // 0x2da91c: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2da91cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DA91C raw=0xF6531D0D");
    // 0x2da920: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2da920u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2da924: 0x86531f75  lh          $s3, 0x1F75($s2)
    ctx->pc = 0x2da924u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8053)));
    // 0x2da928: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2da928u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2da92c: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2da92cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2da930: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DA930u;
    SET_GPR_U32(ctx, 31, 0x2DA938u);
    ctx->pc = 0x2DA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA930u;
    // 0x2da934: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DA930u, 0x2DA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA938u;
label_2da938:
    // 0x2da938: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2da93c: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2da93cu;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
    // 0x2da940: 0x8274cb21  lb          $s4, -0x34DF($s3)
    ctx->pc = 0x2da940u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294953761)));
    // 0x2da944: 0x86705f25  lh          $s0, 0x5F25($s3)
    ctx->pc = 0x2da944u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24357)));
    // 0x2da948: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da948u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da94c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da94cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da950: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2da950u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2da954: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2da954u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
    // 0x2da958: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2da958u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2da95c: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da960: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da960u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da964: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2da964u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
    // 0x2da968: 0x81515d45  lb          $s1, 0x5D45($t2)
    ctx->pc = 0x2da968u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 23877)));
    // 0x2da96c: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2da96cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2da970: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da974: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da974u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da978: 0x82f49767  lb          $s4, -0x6899($s7)
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940519)));
    // 0x2da97c: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2da97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2da980: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2da980u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
    // 0x2da984: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DA984u;
    {
        const bool branch_taken_0x2da984 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da984) {
            ctx->pc = 0x2DA988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA984u;
            // 0x2da988: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1DB8u;
            return;
        }
    }
    ctx->pc = 0x2DA98Cu;
    // 0x2da98c: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2da98cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2da990: 0x83f49d35  lb          $s4, -0x62CB($ra)
    ctx->pc = 0x2da990u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942005)));
    // 0x2da994: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2da994u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DA994 raw=0xF6531D0D");
    // 0x2da998: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2da99c: 0x86531f75  lh          $s3, 0x1F75($s2)
    ctx->pc = 0x2da99cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8053)));
    // 0x2da9a0: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2da9a0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2da9a4: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2da9a4u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2da9a8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DA9A8u;
    SET_GPR_U32(ctx, 31, 0x2DA9B0u);
    ctx->pc = 0x2DA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9A8u;
    // 0x2da9ac: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DA9A8u, 0x2DA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9B0u;
label_2da9b0:
    // 0x2da9b0: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2da9b0u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2da9b4: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2da9b4u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
    // 0x2da9b8: 0x8274c321  lb          $s4, -0x3CDF($s3)
    ctx->pc = 0x2da9b8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951713)));
    // 0x2da9bc: 0x86705f25  lh          $s0, 0x5F25($s3)
    ctx->pc = 0x2da9bcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24357)));
    // 0x2da9c0: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da9c0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da9c4: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2da9c4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2da9c8: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2da9c8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2da9cc: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2da9ccu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
    // 0x2da9d0: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2da9d4: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da9d8: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da9d8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da9dc: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2da9dcu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
    // 0x2da9e0: 0x83515d45  lb          $s1, 0x5D45($k0)
    ctx->pc = 0x2da9e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 26), 23877)));
    // 0x2da9e4: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2da9e4u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2da9e8: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2da9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2da9ec: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2da9ecu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2da9f0: 0x82f49767  lb          $s4, -0x6899($s7)
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940519)));
    // 0x2da9f4: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2da9f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2da9f8: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2da9f8u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
    // 0x2da9fc: 0x59b31d0c  .word       0x59B31D0C                   # blezl       $t5, . + 4 + (0x1D0C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DA9FCu;
    {
        const bool branch_taken_0x2da9fc = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x2da9fc) {
            ctx->pc = 0x2DAA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA9FCu;
            // 0x2daa00: 0x79b2191a  lq          $s2, 0x191A($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 6426)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E30u;
            return;
        }
    }
    ctx->pc = 0x2DAA04u;
    // 0x2daa04: 0x865c0d13  lh          $gp, 0xD13($s2)
    ctx->pc = 0x2daa04u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3347)));
    // 0x2daa08: 0x83f49d35  lb          $s4, -0x62CB($ra)
    ctx->pc = 0x2daa08u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294942005)));
    // 0x2daa0c: 0xf6531d0d  sdc1        $f19, 0x1D0D($s2)
    ctx->pc = 0x2daa0cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DAA0C raw=0xF6531D0D");
    // 0x2daa10: 0x865c0d10  lh          $gp, 0xD10($s2)
    ctx->pc = 0x2daa10u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3344)));
    // 0x2daa14: 0x86531f75  lh          $s3, 0x1F75($s2)
    ctx->pc = 0x2daa14u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8053)));
    // 0x2daa18: 0x66531d0c  daddiu      $s3, $s2, 0x1D0C
    ctx->pc = 0x2daa18u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)7436);
    // 0x2daa1c: 0x865c0d11  lh          $gp, 0xD11($s2)
    ctx->pc = 0x2daa1cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3345)));
    // 0x2daa20: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DAA20u;
    SET_GPR_U32(ctx, 31, 0x2DAA28u);
    ctx->pc = 0x2DAA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA20u;
    // 0x2daa24: 0x86549d25  lh          $s4, -0x62DB($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DAA20u, 0x2DAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA28u;
label_2daa28:
    // 0x2daa28: 0x865c0d65  lh          $gp, 0xD65($s2)
    ctx->pc = 0x2daa28u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3429)));
    // 0x2daa2c: 0x825c4d25  lb          $gp, 0x4D25($s2)
    ctx->pc = 0x2daa2cu;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 19749)));
    // 0x2daa30: 0x8274cf21  lb          $s4, -0x30DF($s3)
    ctx->pc = 0x2daa30u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294954785)));
    // 0x2daa34: 0x86705f25  lh          $s0, 0x5F25($s3)
    ctx->pc = 0x2daa34u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24357)));
    // 0x2daa38: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2daa3c: 0x86549d25  lh          $s4, -0x62DB($s2)
    ctx->pc = 0x2daa3cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294941989)));
    // 0x2daa40: 0x863c5fe5  lh          $gp, 0x5FE5($s1)
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24549)));
    // 0x2daa44: 0x861c5f85  lh          $gp, 0x5F85($s0)
    ctx->pc = 0x2daa44u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24453)));
    // 0x2daa48: 0x809c5d31  lb          $gp, 0x5D31($a0)
    ctx->pc = 0x2daa48u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 23857)));
    // 0x2daa4c: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2daa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2daa50: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2daa50u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2daa54: 0x86fc3d25  lh          $gp, 0x3D25($s7)
    ctx->pc = 0x2daa54u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 15653)));
    // 0x2daa58: 0x84515d45  lh          $s1, 0x5D45($v0)
    ctx->pc = 0x2daa58u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 23877)));
    // 0x2daa5c: 0x867c5fa5  lh          $gp, 0x5FA5($s3)
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24485)));
    // 0x2daa60: 0x8adc5d25  lwl         $gp, 0x5D25($s6)
    ctx->pc = 0x2daa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 28) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 28, (int32_t)merged); }
    // 0x2daa64: 0x865c1d64  lh          $gp, 0x1D64($s2)
    ctx->pc = 0x2daa64u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 7524)));
    // 0x2daa68: 0x82f49767  lb          $s4, -0x6899($s7)
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294940519)));
    // 0x2daa6c: 0x7bd6113a  lq          $s6, 0x113A($fp)
    ctx->pc = 0x2daa6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 30), 4410)));
    // 0x2daa70: 0x86408d65  lh          $zero, -0x729B($s2)
    ctx->pc = 0x2daa70u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294937957)));
    // 0x2daa74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAA74u;
    {
        const bool branch_taken_0x2daa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa74) {
            ctx->pc = 0x2DAAA4u;
            goto label_2daaa4;
        }
    }
    ctx->pc = 0x2DAA7Cu;
    // 0x2daa7c: 0xfe91bf32  sd          $s1, -0x40CE($s4)
    ctx->pc = 0x2daa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294950706), GPR_U64(ctx, 17));
    // 0x2daa80: 0xa3444f21  sb          $a0, 0x4F21($k0)
    ctx->pc = 0x2daa80u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 20257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2daa84: 0x87644f33  lh          $a0, 0x4F33($k1)
    ctx->pc = 0x2daa84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 27), 20275)));
    // 0x2daa88: 0xced69ae  jal         func_3B5A6B8
    ctx->pc = 0x2DAA88u;
    SET_GPR_U32(ctx, 31, 0x2DAA90u);
    ctx->pc = 0x2DAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA88u;
    // 0x2daa8c: 0xc59cf37  jal         func_1673CDC (Delay Slot)
    // JAL 0x1673CDC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A6B8u, 0x2DAA88u, 0x2DAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA90u;
label_2daa90:
    // 0x2daa90: 0xa3e233d1  sb          $v0, 0x33D1($ra)
    ctx->pc = 0x2daa90u;
    WRITE8(ADD32(GPR_U32(ctx, 31), 13265), (uint8_t)GPR_U32(ctx, 2));
label_2daa94:
    // 0x2daa94: 0x7fc1cc10  sq          $at, -0x33F0($fp)
    ctx->pc = 0x2daa94u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 4294954000), GPR_VEC(ctx, 1));
    // 0x2daa98: 0xc712d517  lwc1        $f18, -0x2AE9($t8)
    ctx->pc = 0x2daa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956311)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2daa9c: 0x7fc1c9b4  sq          $at, -0x364C($fp)
    ctx->pc = 0x2daa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 4294953396), GPR_VEC(ctx, 1));
    // 0x2daaa0: 0x0  nop
    ctx->pc = 0x2daaa0u;
    // NOP
label_2daaa4:
    // 0x2daaa4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2daaa8: 0x2442aa94  addiu       $v0, $v0, -0x556C
    ctx->pc = 0x2daaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945428));
    // 0x2daaac: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2daab0: 0x2484aa74  addiu       $a0, $a0, -0x558C
    ctx->pc = 0x2daab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945396));
    // 0x2daab4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2daab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2daab8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2daab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2daabc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAABCu;
    SET_GPR_U32(ctx, 31, 0x2DAAC4u);
    ctx->pc = 0x2DAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAABCu;
    // 0x2daac0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DAABCu, 0x2DAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAC4u;
label_2daac4:
    // 0x2daac4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2daac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daac8: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2daac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2daacc: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x2daaccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2daad0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2daad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2daad4: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x2daad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2daad8: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2daad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2daadc: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x2daadcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2daae0: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2daae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2daae4: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x2daae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2daae8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2daae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2daaec: 0xc7b60138  lwc1        $f22, 0x138($sp)
    ctx->pc = 0x2daaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2daaf0: 0xc7b50130  lwc1        $f21, 0x130($sp)
    ctx->pc = 0x2daaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2daaf4: 0xc7b40128  lwc1        $f20, 0x128($sp)
    ctx->pc = 0x2daaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2daaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAF8u;
        // 0x2daafc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB00u;
}
