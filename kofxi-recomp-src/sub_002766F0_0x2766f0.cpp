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

// Function: sub_002766F0
// Address: 0x2766f0 - 0x276c58
void sub_002766F0_0x2766f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766F0_0x2766f0");
#endif

    switch (ctx->pc) {
        case 0x2766f8u: goto label_2766f8;
        case 0x276750u: goto label_276750;
        case 0x27676cu: goto label_27676c;
        case 0x2767bcu: goto label_2767bc;
        case 0x2767c4u: goto label_2767c4;
        case 0x276818u: goto label_276818;
        case 0x276824u: goto label_276824;
        case 0x276860u: goto label_276860;
        case 0x2768ccu: goto label_2768cc;
        case 0x2768d4u: goto label_2768d4;
        case 0x27692cu: goto label_27692c;
        case 0x276934u: goto label_276934;
        case 0x276984u: goto label_276984;
        case 0x27698cu: goto label_27698c;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769dcu: goto label_2769dc;
        case 0x276a24u: goto label_276a24;
        case 0x276a30u: goto label_276a30;
        case 0x276a38u: goto label_276a38;
        case 0x276a4cu: goto label_276a4c;
        case 0x276a54u: goto label_276a54;
        case 0x276abcu: goto label_276abc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad8u: goto label_276ad8;
        case 0x276b50u: goto label_276b50;
        case 0x276b58u: goto label_276b58;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd8u: goto label_276bd8;
        default: break;
    }

    ctx->pc = 0x2766f0u;

    // 0x2766f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2766f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2766f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2766f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2766f8:
    // 0x2766f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2766f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2766fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x276700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x276700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276704: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x276704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x276708: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x276708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27670c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x27670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x276710: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x276710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x276714: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x276714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x276718: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x276718u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27671c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x27671cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x276720: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x276720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x276724: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x276728: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x276728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x27672c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276730: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276730u;
    {
        const bool branch_taken_0x276730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276730) {
            ctx->pc = 0x276750u;
            goto label_276750;
        }
    }
    ctx->pc = 0x276738u;
    // 0x276738: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27673c: 0x24846784  addiu       $a0, $a0, 0x6784
    ctx->pc = 0x27673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26500));
    // 0x276740: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x276740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x276744: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x276744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276748: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276748u;
    SET_GPR_U32(ctx, 31, 0x276750u);
    ctx->pc = 0x27674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276748u;
    // 0x27674c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276748u, 0x276750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276750u;
label_276750:
    // 0x276750: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276750u;
    {
        const bool branch_taken_0x276750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276750) {
            ctx->pc = 0x276784u;
            goto label_276784;
        }
    }
    ctx->pc = 0x276758u;
    // 0x276758: 0x8fd32ce5  lw          $s3, 0x2CE5($fp)
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11493)));
    // 0x27675c: 0xfd866a7a  sd          $a2, 0x6A7A($t4)
    ctx->pc = 0x27675cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 27258), GPR_U64(ctx, 6));
    // 0x276760: 0xdc8fef27  ld          $t7, -0x10D9($a0)
    ctx->pc = 0x276760u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 4294962983)));
    // 0x276764: 0xfc9762ea  sd          $s7, 0x62EA($a0)
    ctx->pc = 0x276764u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 25322), GPR_U64(ctx, 23));
    // 0x276768: 0xfdacba52  sd          $t4, -0x45AE($t5)
    ctx->pc = 0x276768u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294949458), GPR_U64(ctx, 12));
label_27676c:
    // 0x27676c: 0xffd02962  sd          $s0, 0x2962($fp)
    ctx->pc = 0x27676cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 10594), GPR_U64(ctx, 16));
    // 0x276770: 0x0  nop
    ctx->pc = 0x276770u;
    // NOP
    // 0x276774: 0xd5004c5c  ldc1        $f0, 0x4C5C($t0)
    ctx->pc = 0x276774u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x276774 raw=0xD5004C5C");
    // 0x276778: 0x9806e0b0  lwr         $a2, -0x1F50($zero)
    ctx->pc = 0x276778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959280); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x27677c: 0xd5004c18  ldc1        $f0, 0x4C18($t0)
    ctx->pc = 0x27677cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x27677C raw=0xD5004C18");
    // 0x276780: 0x0  nop
    ctx->pc = 0x276780u;
    // NOP
label_276784:
    // 0x276784: 0xfb2ab6cf  sqc2        $vf10, -0x4931($t9)
    ctx->pc = 0x276784u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x276788: 0xf9eab6cf  sqc2        $vf10, -0x4931($t7)
    ctx->pc = 0x276788u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x27678c: 0xf9eab6cf  sqc2        $vf10, -0x4931($t7)
    ctx->pc = 0x27678cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x276790: 0xf9eab6cf  sqc2        $vf10, -0x4931($t7)
    ctx->pc = 0x276790u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x276794: 0x93e35c45  lbu         $v1, 0x5C45($ra)
    ctx->pc = 0x276794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 31), 23621)));
    // 0x276798: 0xf9ef56cb  sqc2        $vf15, 0x56CB($t7)
    ctx->pc = 0x276798u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 22219), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x27679c: 0xf9eab6cf  sqc2        $vf10, -0x4931($t7)
    ctx->pc = 0x27679cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2767a0: 0xf9eab6cf  sqc2        $vf10, -0x4931($t7)
    ctx->pc = 0x2767a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294948559), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2767a4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2767a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2767a8: 0x24426794  addiu       $v0, $v0, 0x6794
    ctx->pc = 0x2767a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26516));
    // 0x2767ac: 0xf94fbeca  sqc2        $vf15, -0x4136($t2)
    ctx->pc = 0x2767acu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294950602), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2767b0: 0xf94ea68a  sqc2        $vf14, -0x5976($t2)
    ctx->pc = 0x2767b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294944394), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x2767b4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2767B4u;
    SET_GPR_U32(ctx, 31, 0x2767BCu);
    ctx->pc = 0x2767B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767B4u;
    // 0x2767b8: 0xac6aa22d  sw          $t2, -0x5DD3($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943277), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2767B4u, 0x2767BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767BCu;
label_2767bc:
    // 0x2767bc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2767BCu;
    SET_GPR_U32(ctx, 31, 0x2767C4u);
    ctx->pc = 0x2767C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767BCu;
    // 0x2767c0: 0x686aa22d  ldl         $t2, -0x5DD3($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294943277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2767BCu, 0x2767C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767C4u;
label_2767c4:
    // 0x2767c4: 0xb9dba68b  swr         $k1, -0x5975($t6)
    ctx->pc = 0x2767c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294944395); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2767c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2767C8u;
    {
        const bool branch_taken_0x2767c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767c8) {
            ctx->pc = 0x2767F8u;
            goto label_2767f8;
        }
    }
    ctx->pc = 0x2767D0u;
    // 0x2767d0: 0x266da228  addiu       $t5, $s3, -0x5DD8
    ctx->pc = 0x2767d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943272));
    // 0x2767d4: 0x1314820  add         $t1, $t1, $s1
    ctx->pc = 0x2767d4u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x2767d8: 0xdfa2833f  ld          $v0, -0x7CC1($sp)
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 4294935359)));
    // 0x2767dc: 0x85cbb933  lh          $t3, -0x46CD($t6)
    ctx->pc = 0x2767dcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294949171)));
    // 0x2767e0: 0xfcaf5a4a  sd          $t7, 0x5A4A($a1)
    ctx->pc = 0x2767e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 23114), GPR_U64(ctx, 15));
    // 0x2767e4: 0xff23356a  sd          $v1, 0x356A($t9)
    ctx->pc = 0x2767e4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 13674), GPR_U64(ctx, 3));
    // 0x2767e8: 0xd50c5c40  ldc1        $f12, 0x5C40($t0)
    ctx->pc = 0x2767e8u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2767E8 raw=0xD50C5C40");
    // 0x2767ec: 0x9806e0b1  lwr         $a2, -0x1F4F($zero)
    ctx->pc = 0x2767ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959281); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2767f0: 0xd50c5c04  ldc1        $f12, 0x5C04($t0)
    ctx->pc = 0x2767f0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2767F0 raw=0xD50C5C04");
    // 0x2767f4: 0x0  nop
    ctx->pc = 0x2767f4u;
    // NOP
label_2767f8:
    // 0x2767f8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2767f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2767fc: 0x244267e8  addiu       $v0, $v0, 0x67E8
    ctx->pc = 0x2767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26600));
    // 0x276800: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x276804: 0x248467c8  addiu       $a0, $a0, 0x67C8
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26568));
    // 0x276808: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x276808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27680c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27680cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276810: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276810u;
    SET_GPR_U32(ctx, 31, 0x276818u);
    ctx->pc = 0x276814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276810u;
    // 0x276814: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276810u, 0x276818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276818u;
label_276818:
    // 0x276818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27681c: 0xc09d740  jal         func_275D00
    ctx->pc = 0x27681Cu;
    SET_GPR_U32(ctx, 31, 0x276824u);
    ctx->pc = 0x276820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27681Cu;
    // 0x276820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275D00u, 0x27681Cu, 0x276824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276824u;
label_276824:
    // 0x276824: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276828: 0x46000ff  bltz        $v1, . + 4 + (0xFF << 2)
    ctx->pc = 0x276828u;
    {
        const bool branch_taken_0x276828 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276828u;
        // 0x27682c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276828) {
            ctx->pc = 0x276C28u;
            goto label_276c28;
        }
    }
    ctx->pc = 0x276830u;
    // 0x276830: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x276830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x276834: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x276838: 0x24636880  addiu       $v1, $v1, 0x6880
    ctx->pc = 0x276838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26752));
    // 0x27683c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276840: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276840u;
    {
        const bool branch_taken_0x276840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276840) {
            ctx->pc = 0x276860u;
            goto label_276860;
        }
    }
    ctx->pc = 0x276848u;
    // 0x276848: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27684c: 0x24846894  addiu       $a0, $a0, 0x6894
    ctx->pc = 0x27684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26772));
    // 0x276850: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x276854: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x276854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276858: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276858u;
    SET_GPR_U32(ctx, 31, 0x276860u);
    ctx->pc = 0x27685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276858u;
    // 0x27685c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276858u, 0x276860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276860u;
label_276860:
    // 0x276860: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276860u;
    {
        const bool branch_taken_0x276860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276860) {
            ctx->pc = 0x276894u;
            goto label_276894;
        }
    }
    ctx->pc = 0x276868u;
    // 0x276868: 0xa20fbdf1  sb          $t7, -0x420F($s0)
    ctx->pc = 0x276868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294950385), (uint8_t)GPR_U32(ctx, 15));
    // 0x27686c: 0xdcc954cf  ld          $t1, 0x54CF($a2)
    ctx->pc = 0x27686cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 21711)));
    // 0x276870: 0x2d7c820  add         $t9, $s6, $s7
    ctx->pc = 0x276870u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x276874: 0x25234c98  addiu       $v1, $t1, 0x4C98
    ctx->pc = 0x276874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 19608));
    // 0x276878: 0xddb1d8b7  ld          $s1, -0x2749($t5)
    ctx->pc = 0x276878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 13), 4294957239)));
    // 0x27687c: 0x2ca1020  add         $v0, $s6, $t2
    ctx->pc = 0x27687cu;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x276880: 0x0  nop
    ctx->pc = 0x276880u;
    // NOP
    // 0x276884: 0x3b6b601d  xori        $t3, $k1, 0x601D
    ctx->pc = 0x276884u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)24605);
    // 0x276888: 0x9806e102  lwr         $a2, -0x1EFE($zero)
    ctx->pc = 0x276888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959362); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x27688c: 0x3b6b61d9  xori        $t3, $k1, 0x61D9
    ctx->pc = 0x27688cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)25049);
    // 0x276890: 0x0  nop
    ctx->pc = 0x276890u;
    // NOP
label_276894:
    // 0x276894: 0x3142bb02  andi        $v0, $t2, 0xBB02
    ctx->pc = 0x276894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)47874);
    // 0x276898: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x27689c: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x27689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768a0: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2768a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768a4: 0xb8467388  swr         $a2, 0x7388($v0)
    ctx->pc = 0x2768a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 29576); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2768a8: 0x14a87cc4  bne         $a1, $t0, . + 4 + (0x7CC4 << 2)
    ctx->pc = 0x2768A8u;
    {
        const bool branch_taken_0x2768a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x2768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768A8u;
        // 0x2768ac: 0x70e47903  .word       0x70E47903                   # INVALID     $a3, $a0, 0x7903 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 4); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768a8) {
            ctx->pc = 0x295BBCu;
            return;
        }
    }
    ctx->pc = 0x2768B0u;
    // 0x2768b0: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2768b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768b4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2768b8: 0x244268a4  addiu       $v0, $v0, 0x68A4
    ctx->pc = 0x2768b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26788));
    // 0x2768bc: 0x3447d90a  ori         $a3, $v0, 0xD90A
    ctx->pc = 0x2768bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55562);
    // 0x2768c0: 0x3547d946  ori         $a3, $t2, 0xD946
    ctx->pc = 0x2768c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    // 0x2768c4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2768C4u;
    SET_GPR_U32(ctx, 31, 0x2768CCu);
    ctx->pc = 0x2768C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2768C4u;
    // 0x2768c8: 0x7140ecf6  .word       0x7140ECF6                   # psrlh       $sp, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2768C4u, 0x2768CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768CCu;
label_2768cc:
    // 0x2768cc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2768CCu;
    SET_GPR_U32(ctx, 31, 0x2768D4u);
    ctx->pc = 0x2768D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2768CCu;
    // 0x2768d0: 0xb140e8f6  sdl         $zero, -0x170A($t2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294961398); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2768CCu, 0x2768D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768D4u;
label_2768d4:
    // 0x2768d4: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x2768d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x2768d8: 0x3143db02  andi        $v1, $t2, 0xDB02
    ctx->pc = 0x2768d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)56066);
    // 0x2768dc: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2768dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768e0: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2768e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768e4: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2768e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2768e8: 0x9f28d74e  lwu         $t0, -0x28B2($t9)
    ctx->pc = 0x2768e8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 25), 4294956878)));
    // 0x2768ec: 0xd967d5ae  lqc2        $vf7, -0x2A52($t3)
    ctx->pc = 0x2768ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 4294956462)));
    // 0x2768f0: 0x7fcfbd05  sq          $t7, -0x42FB($fp)
    ctx->pc = 0x2768f0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 4294950149), GPR_VEC(ctx, 15));
    // 0x2768f4: 0x9f4f94ce  lwu         $t7, -0x6B32($k0)
    ctx->pc = 0x2768f4u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 26), 4294939854)));
    // 0x2768f8: 0x9f26776e  lwu         $a2, 0x776E($t9)
    ctx->pc = 0x2768f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 25), 30574)));
    // 0x2768fc: 0x9cee5d0e  lwu         $t6, 0x5D0E($a3)
    ctx->pc = 0x2768fcu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 7), 23822)));
    // 0x276900: 0xbf2e55ce  cache       0x0E, 0x55CE($t9)
    ctx->pc = 0x276900u;
    // CACHE instruction (ignored)
    // 0x276904: 0xbc2f38af  cache       0x0F, 0x38AF($at)
    ctx->pc = 0x276904u;
    // CACHE instruction (ignored)
    // 0x276908: 0x31433902  andi        $v1, $t2, 0x3902
    ctx->pc = 0x276908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)14594);
    // 0x27690c: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x27690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276910: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276914: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276918: 0x244268e8  addiu       $v0, $v0, 0x68E8
    ctx->pc = 0x276918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26856));
    // 0x27691c: 0x3447d90a  ori         $a3, $v0, 0xD90A
    ctx->pc = 0x27691cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55562);
    // 0x276920: 0x3547d946  ori         $a3, $t2, 0xD946
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    // 0x276924: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x276924u;
    SET_GPR_U32(ctx, 31, 0x27692Cu);
    ctx->pc = 0x276928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276924u;
    // 0x276928: 0x7140ecf6  .word       0x7140ECF6                   # psrlh       $sp, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x276924u, 0x27692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27692Cu;
label_27692c:
    // 0x27692c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x27692Cu;
    SET_GPR_U32(ctx, 31, 0x276934u);
    ctx->pc = 0x276930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27692Cu;
    // 0x276930: 0xb140e8f6  sdl         $zero, -0x170A($t2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294961398); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x27692Cu, 0x276934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276934u;
label_276934:
    // 0x276934: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x276934u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x276938: 0x31431b02  andi        $v1, $t2, 0x1B02
    ctx->pc = 0x276938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6914);
    // 0x27693c: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x27693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276940: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276944: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276948: 0xfcaa178f  sd          $t2, 0x178F($a1)
    ctx->pc = 0x276948u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 6031), GPR_U64(ctx, 10));
    // 0x27694c: 0xbc8edcac  cache       0x0E, -0x2354($a0)
    ctx->pc = 0x27694cu;
    // CACHE instruction (ignored)
    // 0x276950: 0x3e68f5ac  .word       0x3E68F5AC                   # lui         $t0, 0xF5AC # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276950u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62892 << 16));
    // 0x276954: 0x154534af  bne         $t2, $a1, . + 4 + (0x34AF << 2)
    ctx->pc = 0x276954u;
    {
        const bool branch_taken_0x276954 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x276958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276954u;
        // 0x276958: 0x9dae5cee  lwu         $t6, 0x5CEE($t5) (Delay Slot)
        SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 13), 23790)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276954) {
            ctx->pc = 0x283C14u;
            return;
        }
    }
    ctx->pc = 0x27695Cu;
    // 0x27695c: 0xfc6e98ae  sd          $t6, -0x6752($v1)
    ctx->pc = 0x27695cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294940846), GPR_U64(ctx, 14));
    // 0x276960: 0x31433902  andi        $v1, $t2, 0x3902
    ctx->pc = 0x276960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)14594);
    // 0x276964: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276968: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x27696c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276970: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x276970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
    // 0x276974: 0x3447d90a  ori         $a3, $v0, 0xD90A
    ctx->pc = 0x276974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55562);
    // 0x276978: 0x3547d946  ori         $a3, $t2, 0xD946
    ctx->pc = 0x276978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    // 0x27697c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x27697Cu;
    SET_GPR_U32(ctx, 31, 0x276984u);
    ctx->pc = 0x276980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27697Cu;
    // 0x276980: 0x7140ecf6  .word       0x7140ECF6                   # psrlh       $sp, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x27697Cu, 0x276984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276984u;
label_276984:
    // 0x276984: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x276984u;
    SET_GPR_U32(ctx, 31, 0x27698Cu);
    ctx->pc = 0x276988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276984u;
    // 0x276988: 0xb140e8f6  sdl         $zero, -0x170A($t2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294961398); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x276984u, 0x27698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27698Cu;
label_27698c:
    // 0x27698c: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x27698cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x276990: 0x31435b02  andi        $v1, $t2, 0x5B02
    ctx->pc = 0x276990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)23298);
    // 0x276994: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x276998: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x276998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x27699c: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x27699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769a0: 0xfcaa178f  sd          $t2, 0x178F($a1)
    ctx->pc = 0x2769a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 6031), GPR_U64(ctx, 10));
    // 0x2769a4: 0xbc8edcac  cache       0x0E, -0x2354($a0)
    ctx->pc = 0x2769a4u;
    // CACHE instruction (ignored)
    // 0x2769a8: 0xfdebf5ef  sd          $t3, -0xA11($t7)
    ctx->pc = 0x2769a8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 4294964719), GPR_U64(ctx, 11));
    // 0x2769ac: 0x7c4cfd05  sq          $t4, -0x2FB($v0)
    ctx->pc = 0x2769acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294966533), GPR_VEC(ctx, 12));
    // 0x2769b0: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769b4: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769b8: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769bc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2769c0: 0x244269a0  addiu       $v0, $v0, 0x69A0
    ctx->pc = 0x2769c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27040));
    // 0x2769c4: 0x3447d90a  ori         $a3, $v0, 0xD90A
    ctx->pc = 0x2769c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55562);
    // 0x2769c8: 0x3547d946  ori         $a3, $t2, 0xD946
    ctx->pc = 0x2769c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    // 0x2769cc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2769CCu;
    SET_GPR_U32(ctx, 31, 0x2769D4u);
    ctx->pc = 0x2769D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769CCu;
    // 0x2769d0: 0x7140ecf6  .word       0x7140ECF6                   # psrlh       $sp, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2769CCu, 0x2769D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769D4u;
label_2769d4:
    // 0x2769d4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2769D4u;
    SET_GPR_U32(ctx, 31, 0x2769DCu);
    ctx->pc = 0x2769D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769D4u;
    // 0x2769d8: 0xb140e8f6  sdl         $zero, -0x170A($t2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294961398); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2769D4u, 0x2769DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769DCu;
label_2769dc:
    // 0x2769dc: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x2769dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x2769e0: 0x3142db02  andi        $v0, $t2, 0xDB02
    ctx->pc = 0x2769e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)56066);
    // 0x2769e4: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769e8: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769ec: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769f0: 0x3003d902  andi        $v1, $zero, 0xD902
    ctx->pc = 0x2769f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)55554);
    // 0x2769f4: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769f8: 0x31427902  andi        $v0, $t2, 0x7902
    ctx->pc = 0x2769f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)30978);
    // 0x2769fc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276a00: 0x244269f0  addiu       $v0, $v0, 0x69F0
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27120));
    // 0x276a04: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x276a04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x276a08: 0x3547d976  ori         $a3, $t2, 0xD976
    ctx->pc = 0x276a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55670);
    // 0x276a0c: 0x3647d94a  ori         $a3, $s2, 0xD94A
    ctx->pc = 0x276a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)55626);
    // 0x276a10: 0x24c69f78  addiu       $a2, $a2, -0x6088
    ctx->pc = 0x276a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942584));
    // 0x276a14: 0x3947d90a  xori        $a3, $t2, 0xD90A
    ctx->pc = 0x276a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)55562);
    // 0x276a18: 0x91407d82  lbu         $zero, 0x7D82($t2)
    ctx->pc = 0x276a18u;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 32130)));
    // 0x276a1c: 0xc043e24  jal         func_10F890
    ctx->pc = 0x276A1Cu;
    SET_GPR_U32(ctx, 31, 0x276A24u);
    ctx->pc = 0x276A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A1Cu;
    // 0x276a20: 0x7140ecf6  .word       0x7140ECF6                   # psrlh       $sp, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x276A1Cu, 0x276A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A24u;
label_276a24:
    // 0x276a24: 0x3447d976  ori         $a3, $v0, 0xD976
    ctx->pc = 0x276a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55670);
    // 0x276a28: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x276A28u;
    SET_GPR_U32(ctx, 31, 0x276A30u);
    ctx->pc = 0x276A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A28u;
    // 0x276a2c: 0x3547d946  ori         $a3, $t2, 0xD946 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x276A28u, 0x276A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A30u;
label_276a30:
    // 0x276a30: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x276A30u;
    SET_GPR_U32(ctx, 31, 0x276A38u);
    ctx->pc = 0x276A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A30u;
    // 0x276a34: 0x3547d976  ori         $a3, $t2, 0xD976 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55670);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x276A30u, 0x276A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A38u;
label_276a38:
    // 0x276a38: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x276a38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x276a3c: 0x9140e8f6  lbu         $zero, -0x170A($t2)
    ctx->pc = 0x276a3cu;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294961398)));
    // 0x276a40: 0x3547d946  ori         $a3, $t2, 0xD946
    ctx->pc = 0x276a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55622);
    // 0x276a44: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x276A44u;
    SET_GPR_U32(ctx, 31, 0x276A4Cu);
    ctx->pc = 0x276A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A44u;
    // 0x276a48: 0x71406cf6  .word       0x71406CF6                   # psrlh       $t5, $zero, 19 # 01400000 <InstrIdType: R5900_MMI> (Delay Slot)
    SET_GPR_VEC(ctx, 13, _mm_srli_epi16(GPR_VEC(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x276A44u, 0x276A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A4Cu;
label_276a4c:
    // 0x276a4c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x276A4Cu;
    SET_GPR_U32(ctx, 31, 0x276A54u);
    ctx->pc = 0x276A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A4Cu;
    // 0x276a50: 0xb140e8f6  sdl         $zero, -0x170A($t2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294961398); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x276A4Cu, 0x276A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A54u;
label_276a54:
    // 0x276a54: 0x60465946  daddi       $a2, $v0, 0x5946
    ctx->pc = 0x276a54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)22854; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x276a58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276A58u;
    {
        const bool branch_taken_0x276a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a58) {
            ctx->pc = 0x276A88u;
            goto label_276a88;
        }
    }
    ctx->pc = 0x276A60u;
    // 0x276a60: 0x8d221925  lw          $v0, 0x1925($t1)
    ctx->pc = 0x276a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6437)));
    // 0x276a64: 0xde74908f  ld          $s4, -0x6F71($s3)
    ctx->pc = 0x276a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294938767)));
    // 0x276a68: 0xfe3e81a2  sd          $fp, -0x7E5E($s1)
    ctx->pc = 0x276a68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294934946), GPR_U64(ctx, 30));
    // 0x276a6c: 0xfe6e72aa  sd          $t6, 0x72AA($s3)
    ctx->pc = 0x276a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 29354), GPR_U64(ctx, 14));
    // 0x276a70: 0x85ed5893  lh          $t5, 0x5893($t7)
    ctx->pc = 0x276a70u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 22675)));
    // 0x276a74: 0xfff32c5a  sd          $s3, 0x2C5A($ra)
    ctx->pc = 0x276a74u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 11354), GPR_U64(ctx, 19));
    // 0x276a78: 0x3b6b6d10  xori        $t3, $k1, 0x6D10
    ctx->pc = 0x276a78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)27920);
    // 0x276a7c: 0x9806e103  lwr         $a2, -0x1EFD($zero)
    ctx->pc = 0x276a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959363); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x276a80: 0x3b6b6cd4  xori        $t3, $k1, 0x6CD4
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)27860);
    // 0x276a84: 0x0  nop
    ctx->pc = 0x276a84u;
    // NOP
label_276a88:
    // 0x276a88: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276a8c: 0x24426a78  addiu       $v0, $v0, 0x6A78
    ctx->pc = 0x276a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27256));
    // 0x276a90: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x276a94: 0x24846a58  addiu       $a0, $a0, 0x6A58
    ctx->pc = 0x276a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27224));
    // 0x276a98: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x276a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276a9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276aa0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x276aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x276aa4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x276aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x276aa8: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x276aac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x276aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x276ab0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x276ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x276ab4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276AB4u;
    SET_GPR_U32(ctx, 31, 0x276ABCu);
    ctx->pc = 0x276AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276AB4u;
    // 0x276ab8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276AB4u, 0x276ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276ABCu;
label_276abc:
    // 0x276abc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x276abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x276ac0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276ac4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x276ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x276ac8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276acc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x276accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_276ad0:
    // 0x276ad0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x276AD0u;
    SET_GPR_U32(ctx, 31, 0x276AD8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x276AD0u, 0x276AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AD8u;
label_276ad8:
    // 0x276ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276adc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x276ae0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x276ae4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276ae8: 0x0  nop
    ctx->pc = 0x276ae8u;
    // NOP
    // 0x276aec: 0x0  nop
    ctx->pc = 0x276aecu;
    // NOP
    // 0x276af0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x276af0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x276af4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x276af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x276af8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x276af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276b00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276b04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x276B04u;
    {
        const bool branch_taken_0x276b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B04u;
        // 0x276b08: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b04) {
            ctx->pc = 0x276B1Cu;
            goto label_276b1c;
        }
    }
    ctx->pc = 0x276B0Cu;
    // 0x276b0c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x276b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x276b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276b14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276b18: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x276b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_276b1c:
    // 0x276b1c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x276B1Cu;
    {
        const bool branch_taken_0x276b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B1Cu;
        // 0x276b20: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b1c) {
            ctx->pc = 0x276AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276ad0;
        }
    }
    ctx->pc = 0x276B24u;
    // 0x276b24: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x276b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x276b28: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x276b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x276b2c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x276b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x276b30: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x276b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b34: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x276b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x276b38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276b3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b40: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x276b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x276b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276b48: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x276b4c: 0x0  nop
    ctx->pc = 0x276b4cu;
    // NOP
label_276b50:
    // 0x276b50: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x276B50u;
    SET_GPR_U32(ctx, 31, 0x276B58u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x276B50u, 0x276B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B58u;
label_276b58:
    // 0x276b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x276b60: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x276b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x276b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276b68: 0x0  nop
    ctx->pc = 0x276b68u;
    // NOP
    // 0x276b6c: 0x0  nop
    ctx->pc = 0x276b6cu;
    // NOP
    // 0x276b70: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x276b70u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x276b74: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x276b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x276b78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x276b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276b7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276b84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x276B84u;
    {
        const bool branch_taken_0x276b84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B84u;
        // 0x276b88: 0x2e030010  sltiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b84) {
            ctx->pc = 0x276B9Cu;
            goto label_276b9c;
        }
    }
    ctx->pc = 0x276B8Cu;
    // 0x276b8c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x276b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x276b90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276b94: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276b98: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x276b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_276b9c:
    // 0x276b9c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x276B9Cu;
    {
        const bool branch_taken_0x276b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B9Cu;
        // 0x276ba0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b9c) {
            ctx->pc = 0x276B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276b50;
        }
    }
    ctx->pc = 0x276BA4u;
    // 0x276ba4: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x276ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x276ba8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x276ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x276bac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x276bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x276bb0: 0x27b30014  addiu       $s3, $sp, 0x14
    ctx->pc = 0x276bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x276bb4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x276bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x276bb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bc0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x276bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x276bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276bc8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x276bcc: 0x0  nop
    ctx->pc = 0x276bccu;
    // NOP
label_276bd0:
    // 0x276bd0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x276BD0u;
    SET_GPR_U32(ctx, 31, 0x276BD8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x276BD0u, 0x276BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BD8u;
label_276bd8:
    // 0x276bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276bdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x276be0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x276be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276be8: 0x0  nop
    ctx->pc = 0x276be8u;
    // NOP
    // 0x276bec: 0x0  nop
    ctx->pc = 0x276becu;
    // NOP
    // 0x276bf0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x276bf0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x276bf4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x276bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x276bf8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x276bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276bfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276c00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276c04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x276C04u;
    {
        const bool branch_taken_0x276c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C04u;
        // 0x276c08: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c04) {
            ctx->pc = 0x276C1Cu;
            goto label_276c1c;
        }
    }
    ctx->pc = 0x276C0Cu;
    // 0x276c0c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x276c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x276c10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276c14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276c18: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x276c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_276c1c:
    // 0x276c1c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x276C1Cu;
    {
        const bool branch_taken_0x276c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C1Cu;
        // 0x276c20: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c1c) {
            ctx->pc = 0x276BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276bd0;
        }
    }
    ctx->pc = 0x276C24u;
    // 0x276c24: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x276c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_276c28:
    // 0x276c28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x276c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276c2c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x276c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276c30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x276c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276c34: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x276c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x276c38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x276c38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276c3c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x276c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x276c40: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x276c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x276c44: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x276c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x276c48: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x276c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x276C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C4Cu;
        // 0x276c50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276C54u;
    // 0x276c54: 0x0  nop
    ctx->pc = 0x276c54u;
    // NOP
}
