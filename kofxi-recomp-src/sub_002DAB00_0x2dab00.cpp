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

// Function: sub_002DAB00
// Address: 0x2dab00 - 0x2dadb0
void sub_002DAB00_0x2dab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB00_0x2dab00");
#endif

    switch (ctx->pc) {
        case 0x2dab70u: goto label_2dab70;
        case 0x2dab88u: goto label_2dab88;
        case 0x2dab90u: goto label_2dab90;
        case 0x2dabe0u: goto label_2dabe0;
        case 0x2dac04u: goto label_2dac04;
        case 0x2dac24u: goto label_2dac24;
        case 0x2dac60u: goto label_2dac60;
        case 0x2dac8cu: goto label_2dac8c;
        case 0x2dacd8u: goto label_2dacd8;
        case 0x2dad74u: goto label_2dad74;
        default: break;
    }

    ctx->pc = 0x2dab00u;

    // 0x2dab00: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2dab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2dab04: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2dab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x2dab08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2dab08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab0c: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2dab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x2dab10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2dab10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab14: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2dab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x2dab18: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2dab18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab1c: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2dab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x2dab20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dab20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab24: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2dab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x2dab28: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2dab28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab2c: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2dab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x2dab30: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2dab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2dab34: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x2dab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x2dab38: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x2dab38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2dab3c: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x2dab3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2dab40: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2dab40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2dab44: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dab48: 0x2463ab90  addiu       $v1, $v1, -0x5470
    ctx->pc = 0x2dab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945680));
    // 0x2dab4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dab50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAB50u;
    {
        const bool branch_taken_0x2dab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dab50) {
            ctx->pc = 0x2DAB70u;
            goto label_2dab70;
        }
    }
    ctx->pc = 0x2DAB58u;
    // 0x2dab58: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dab5c: 0x2484aba4  addiu       $a0, $a0, -0x545C
    ctx->pc = 0x2dab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945700));
    // 0x2dab60: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dab64: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dab68: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAB68u;
    SET_GPR_U32(ctx, 31, 0x2DAB70u);
    ctx->pc = 0x2DAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB68u;
    // 0x2dab6c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DAB68u, 0x2DAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB70u;
label_2dab70:
    // 0x2dab70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DAB70u;
    {
        const bool branch_taken_0x2dab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab70) {
            ctx->pc = 0x2DABA4u;
            goto label_2daba4;
        }
    }
    ctx->pc = 0x2DAB78u;
    // 0x2dab78: 0xa11111a9  sb          $s1, 0x11A9($t0)
    ctx->pc = 0x2dab78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4521), (uint8_t)GPR_U32(ctx, 17));
    // 0x2dab7c: 0x8e51a6ed  lw          $s1, -0x5913($s2)
    ctx->pc = 0x2dab7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944493)));
    // 0x2dab80: 0xc206563  jal         func_81958C
    ctx->pc = 0x2DAB80u;
    SET_GPR_U32(ctx, 31, 0x2DAB88u);
    ctx->pc = 0x2DAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB80u;
    // 0x2dab84: 0xa2ca86f1  sb          $t2, -0x790F($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294936305), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x81958Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81958Cu, 0x2DAB80u, 0x2DAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB88u;
label_2dab88:
    // 0x2dab88: 0xc24d54e  jal         func_935538
    ctx->pc = 0x2DAB88u;
    SET_GPR_U32(ctx, 31, 0x2DAB90u);
    ctx->pc = 0x2DAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB88u;
    // 0x2dab8c: 0x22e9020  add         $s2, $s1, $t6 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x935538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x935538u, 0x2DAB88u, 0x2DAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB90u;
label_2dab90:
    // 0x2dab90: 0x0  nop
    ctx->pc = 0x2dab90u;
    // NOP
    // 0x2dab94: 0xb6afd59b  sdr         $t7, -0x2A65($s5)
    ctx->pc = 0x2dab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294956443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dab98: 0xc712d8f8  lwc1        $f18, -0x2708($t8)
    ctx->pc = 0x2dab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dab9c: 0xb6afd41b  sdr         $t7, -0x2BE5($s5)
    ctx->pc = 0x2dab9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294956059); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daba0: 0x0  nop
    ctx->pc = 0x2daba0u;
    // NOP
label_2daba4:
    // 0x2daba4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2daba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2daba8: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2daba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dabac: 0xa9e154c0  swl         $at, 0x54C0($t7)
    ctx->pc = 0x2dabacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 21696); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dabb0: 0xa9a7c4c0  swl         $a3, -0x3B40($t5)
    ctx->pc = 0x2dabb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294952128); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dabb4: 0x8dc12260  lw          $at, 0x2260($t6)
    ctx->pc = 0x2dabb4u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8800)));
    // 0x2dabb8: 0xaa47d4a0  swl         $a3, -0x2B60($s2)
    ctx->pc = 0x2dabb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dabbc: 0x56c1569f  bnel        $s6, $at, . + 4 + (0x569F << 2)
    ctx->pc = 0x2DABBCu;
    {
        const bool branch_taken_0x2dabbc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 1));
        if (branch_taken_0x2dabbc) {
            ctx->pc = 0x2DABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DABBCu;
            // 0x2dabc0: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F063Cu;
            return;
        }
    }
    ctx->pc = 0x2DABC4u;
    // 0x2dabc4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2dabc8: 0x2484e0c8  addiu       $a0, $a0, -0x1F38
    ctx->pc = 0x2dabc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959304));
    // 0x2dabcc: 0x24a5e0e8  addiu       $a1, $a1, -0x1F18
    ctx->pc = 0x2dabccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959336));
    // 0x2dabd0: 0xac658ca6  sw          $a1, -0x735A($v1)
    ctx->pc = 0x2dabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937766), GPR_U32(ctx, 5));
    // 0x2dabd4: 0xa9415440  swl         $at, 0x5440($t2)
    ctx->pc = 0x2dabd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 21568); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dabd8: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2DABD8u;
    SET_GPR_U32(ctx, 31, 0x2DABE0u);
    ctx->pc = 0x2DABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABD8u;
    // 0x2dabdc: 0x6421569f  daddiu      $at, $at, 0x569F (Delay Slot)
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)22175);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0410u, 0x2DABD8u, 0x2DABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABE0u;
label_2dabe0:
    // 0x2dabe0: 0xab855ca0  swl         $a1, 0x5CA0($gp)
    ctx->pc = 0x2dabe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 23712); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dabe4: 0xac6594a4  sw          $a1, -0x6B5C($v1)
    ctx->pc = 0x2dabe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939812), GPR_U32(ctx, 5));
    // 0x2dabe8: 0xac658ca5  sw          $a1, -0x735B($v1)
    ctx->pc = 0x2dabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937765), GPR_U32(ctx, 5));
    // 0x2dabec: 0x8fc12060  lw          $at, 0x2060($fp)
    ctx->pc = 0x2dabecu;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8288)));
    // 0x2dabf0: 0x8cc12040  lw          $at, 0x2040($a2)
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8256)));
    // 0x2dabf4: 0xac65a0a8  sw          $a1, -0x5F58($v1)
    ctx->pc = 0x2dabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942888), GPR_U32(ctx, 5));
    // 0x2dabf8: 0x8ec12180  lw          $at, 0x2180($s6)
    ctx->pc = 0x2dabf8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8576)));
    // 0x2dabfc: 0xc0b826a  jal         func_2E09A8
    ctx->pc = 0x2DABFCu;
    SET_GPR_U32(ctx, 31, 0x2DAC04u);
    ctx->pc = 0x2DAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABFCu;
    // 0x2dac00: 0xad4155e0  sw          $at, 0x55E0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 21984), GPR_U32(ctx, 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09A8u, 0x2DABFCu, 0x2DAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC04u;
label_2dac04:
    // 0x2dac04: 0xa8e55ca0  swl         $a1, 0x5CA0($a3)
    ctx->pc = 0x2dac04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23712); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac08: 0xac6584a4  sw          $a1, -0x7B5C($v1)
    ctx->pc = 0x2dac08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935716), GPR_U32(ctx, 5));
    // 0x2dac0c: 0xac6580a5  sw          $a1, -0x7F5B($v1)
    ctx->pc = 0x2dac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934693), GPR_U32(ctx, 5));
    // 0x2dac10: 0xac659ca7  sw          $a1, -0x6359($v1)
    ctx->pc = 0x2dac10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941863), GPR_U32(ctx, 5));
    // 0x2dac14: 0xac6598a8  sw          $a1, -0x6758($v1)
    ctx->pc = 0x2dac14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940840), GPR_U32(ctx, 5));
    // 0x2dac18: 0xac65a0a6  sw          $a1, -0x5F5A($v1)
    ctx->pc = 0x2dac18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942886), GPR_U32(ctx, 5));
    // 0x2dac1c: 0xc0b8680  jal         func_2E1A00
    ctx->pc = 0x2DAC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC24u);
    ctx->pc = 0x2DAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC1Cu;
    // 0x2dac20: 0x68a1569f  ldl         $at, 0x569F($a1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 22175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A00u, 0x2DAC1Cu, 0x2DAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC24u;
label_2dac24:
    // 0x2dac24: 0xa9c0dce0  swl         $zero, -0x2320($t6)
    ctx->pc = 0x2dac24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294958304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac28: 0xa885d4f1  swl         $a1, -0x2B0F($a0)
    ctx->pc = 0x2dac28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294956273); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac2c: 0x76225489  .word       0x76225489                   # INVALID     $s1, $v0, 0x5489 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dac2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DAC2C raw=0x76225489");
    // 0x2dac30: 0x5623509f  bnel        $s1, $v1, . + 4 + (0x509F << 2)
    ctx->pc = 0x2DAC30u;
    {
        const bool branch_taken_0x2dac30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dac30) {
            ctx->pc = 0x2DAC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAC30u;
            // 0x2dac34: 0xa9cd4496  swl         $t5, 0x4496($t6) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17558); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEEB0u;
            return;
        }
    }
    ctx->pc = 0x2DAC38u;
    // 0x2dac38: 0xac65a0b3  sw          $a1, -0x5F4D($v1)
    ctx->pc = 0x2dac38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942899), GPR_U32(ctx, 5));
    // 0x2dac3c: 0xd9c25488  lqc2        $vf2, 0x5488($t6)
    ctx->pc = 0x2dac3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 21640)));
    // 0x2dac40: 0xa9cd4495  swl         $t5, 0x4495($t6)
    ctx->pc = 0x2dac40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17557); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac44: 0xac65d4b0  sw          $a1, -0x2B50($v1)
    ctx->pc = 0x2dac44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956208), GPR_U32(ctx, 5));
    // 0x2dac48: 0x49c25489  .word       0x49C25489                   # INVALID     $t6, $v0, 0x5489 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dac48u;
    throw std::runtime_error("Unhandled COP2 format: 0xE at 0x2DAC48 raw=0x49C25489");
    // 0x2dac4c: 0xa9cd4494  swl         $t5, 0x4494($t6)
    ctx->pc = 0x2dac4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac50: 0xa9c256f0  swl         $v0, 0x56F0($t6)
    ctx->pc = 0x2dac50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 22256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac54: 0xa9c5d4a0  swl         $a1, -0x2B60($t6)
    ctx->pc = 0x2dac54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac58: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DAC58u;
    SET_GPR_U32(ctx, 31, 0x2DAC60u);
    ctx->pc = 0x2DAC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC58u;
    // 0x2dac5c: 0xa9c5d4a0  swl         $a1, -0x2B60($t6) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DAC58u, 0x2DAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC60u;
label_2dac60:
    // 0x2dac60: 0xa9cd44e0  swl         $t5, 0x44E0($t6)
    ctx->pc = 0x2dac60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17632); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac64: 0xadcd04a0  sw          $t5, 0x4A0($t6)
    ctx->pc = 0x2dac64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 1184), GPR_U32(ctx, 13));
    // 0x2dac68: 0xade59aa4  sw          $a1, -0x655C($t7)
    ctx->pc = 0x2dac68u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294941348), GPR_U32(ctx, 5));
    // 0x2dac6c: 0xa9e116a0  swl         $at, 0x16A0($t7)
    ctx->pc = 0x2dac6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5792); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac70: 0xa9c5d4a0  swl         $a1, -0x2B60($t6)
    ctx->pc = 0x2dac70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac74: 0xa9c5d4a0  swl         $a1, -0x2B60($t6)
    ctx->pc = 0x2dac74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac78: 0xa9ad1660  swl         $t5, 0x1660($t5)
    ctx->pc = 0x2dac78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 5728); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac7c: 0xa98d1600  swl         $t5, 0x1600($t4)
    ctx->pc = 0x2dac7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 5632); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac80: 0xaf0d14b4  sw          $t5, 0x14B4($t8)
    ctx->pc = 0x2dac80u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 5300), GPR_U32(ctx, 13));
    // 0x2dac84: 0xa54d14a0  sh          $t5, 0x14A0($t2)
    ctx->pc = 0x2dac84u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 5280), (uint16_t)GPR_U32(ctx, 13));
    // 0x2dac88: 0xa9cd54e1  swl         $t5, 0x54E1($t6)
    ctx->pc = 0x2dac88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 21729); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2dac8c:
    // 0x2dac8c: 0xa96d74a0  swl         $t5, 0x74A0($t3)
    ctx->pc = 0x2dac8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29856); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac90: 0x8dc014c0  lw          $zero, 0x14C0($t6)
    ctx->pc = 0x2dac90u;
    SET_GPR_S32(ctx, 0, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 5312)));
    // 0x2dac94: 0xa9ed1620  swl         $t5, 0x1620($t7)
    ctx->pc = 0x2dac94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5664); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dac98: 0xa54d14a0  sh          $t5, 0x14A0($t2)
    ctx->pc = 0x2dac98u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 5280), (uint16_t)GPR_U32(ctx, 13));
    // 0x2dac9c: 0xa9cd54e1  swl         $t5, 0x54E1($t6)
    ctx->pc = 0x2dac9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 21729); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2daca0: 0xad65dee2  sw          $a1, -0x211E($t3)
    ctx->pc = 0x2daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294958818), GPR_U32(ctx, 5));
    // 0x2daca4: 0x544758bf  bnel        $v0, $a3, . + 4 + (0x58BF << 2)
    ctx->pc = 0x2DACA4u;
    {
        const bool branch_taken_0x2daca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2daca4) {
            ctx->pc = 0x2DACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DACA4u;
            // 0x2daca8: 0xa9d1c4e0  swl         $s1, -0x3B20($t6) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294952160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FA4u;
            return;
        }
    }
    ctx->pc = 0x2DACACu;
    // 0x2dacac: 0x76225489  .word       0x76225489                   # INVALID     $s1, $v0, 0x5489 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dacacu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DACAC raw=0x76225489");
    // 0x2dacb0: 0x5623509f  bnel        $s1, $v1, . + 4 + (0x509F << 2)
    ctx->pc = 0x2DACB0u;
    {
        const bool branch_taken_0x2dacb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dacb0) {
            ctx->pc = 0x2DACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DACB0u;
            // 0x2dacb4: 0xa9cd4496  swl         $t5, 0x4496($t6) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17558); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF30u;
            return;
        }
    }
    ctx->pc = 0x2DACB8u;
    // 0x2dacb8: 0xac65d4b0  sw          $a1, -0x2B50($v1)
    ctx->pc = 0x2dacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956208), GPR_U32(ctx, 5));
    // 0x2dacbc: 0xd9c25488  lqc2        $vf2, 0x5488($t6)
    ctx->pc = 0x2dacbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 21640)));
    // 0x2dacc0: 0xa9cd4495  swl         $t5, 0x4495($t6)
    ctx->pc = 0x2dacc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17557); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacc4: 0xa9c256f0  swl         $v0, 0x56F0($t6)
    ctx->pc = 0x2dacc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 22256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacc8: 0x49c25489  .word       0x49C25489                   # INVALID     $t6, $v0, 0x5489 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dacc8u;
    throw std::runtime_error("Unhandled COP2 format: 0xE at 0x2DACC8 raw=0x49C25489");
    // 0x2daccc: 0xa9cd4494  swl         $t5, 0x4494($t6)
    ctx->pc = 0x2dacccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacd0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DACD0u;
    SET_GPR_U32(ctx, 31, 0x2DACD8u);
    ctx->pc = 0x2DACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACD0u;
    // 0x2dacd4: 0xa9c5d4a0  swl         $a1, -0x2B60($t6) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DACD0u, 0x2DACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACD8u;
label_2dacd8:
    // 0x2dacd8: 0xa9cd44e0  swl         $t5, 0x44E0($t6)
    ctx->pc = 0x2dacd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 17632); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacdc: 0xadcd04a0  sw          $t5, 0x4A0($t6)
    ctx->pc = 0x2dacdcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 1184), GPR_U32(ctx, 13));
    // 0x2dace0: 0xade58ea4  sw          $a1, -0x715C($t7)
    ctx->pc = 0x2dace0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294938276), GPR_U32(ctx, 5));
    // 0x2dace4: 0xa9e116a0  swl         $at, 0x16A0($t7)
    ctx->pc = 0x2dace4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5792); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dace8: 0xa9c5d4a0  swl         $a1, -0x2B60($t6)
    ctx->pc = 0x2dace8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacec: 0xa9c5d4a0  swl         $a1, -0x2B60($t6)
    ctx->pc = 0x2dacecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294956192); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacf0: 0xa9ad1660  swl         $t5, 0x1660($t5)
    ctx->pc = 0x2dacf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 5728); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacf4: 0xa98d1600  swl         $t5, 0x1600($t4)
    ctx->pc = 0x2dacf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 5632); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dacf8: 0xaf0d14b4  sw          $t5, 0x14B4($t8)
    ctx->pc = 0x2dacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 5300), GPR_U32(ctx, 13));
    // 0x2dacfc: 0xa54d14a0  sh          $t5, 0x14A0($t2)
    ctx->pc = 0x2dacfcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 5280), (uint16_t)GPR_U32(ctx, 13));
    // 0x2dad00: 0xa9cd54e1  swl         $t5, 0x54E1($t6)
    ctx->pc = 0x2dad00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 21729); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad04: 0xa96d74a0  swl         $t5, 0x74A0($t3)
    ctx->pc = 0x2dad04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29856); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad08: 0xadc014c0  sw          $zero, 0x14C0($t6)
    ctx->pc = 0x2dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 5312), GPR_U32(ctx, 0));
    // 0x2dad0c: 0xa9ed1620  swl         $t5, 0x1620($t7)
    ctx->pc = 0x2dad0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5664); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad10: 0xa54d14a0  sh          $t5, 0x14A0($t2)
    ctx->pc = 0x2dad10u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 5280), (uint16_t)GPR_U32(ctx, 13));
    // 0x2dad14: 0xa9cd54e1  swl         $t5, 0x54E1($t6)
    ctx->pc = 0x2dad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 21729); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dad18: 0xad65dee2  sw          $a1, -0x211E($t3)
    ctx->pc = 0x2dad18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294958818), GPR_U32(ctx, 5));
    // 0x2dad1c: 0x544758bf  bnel        $v0, $a3, . + 4 + (0x58BF << 2)
    ctx->pc = 0x2DAD1Cu;
    {
        const bool branch_taken_0x2dad1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dad1c) {
            ctx->pc = 0x2DAD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAD1Cu;
            // 0x2dad20: 0xa9d1c4e0  swl         $s1, -0x3B20($t6) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294952160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F101Cu;
            return;
        }
    }
    ctx->pc = 0x2DAD24u;
    // 0x2dad24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAD24u;
    {
        const bool branch_taken_0x2dad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad24) {
            ctx->pc = 0x2DAD54u;
            goto label_2dad54;
        }
    }
    ctx->pc = 0x2DAD2Cu;
    // 0x2dad2c: 0x85dbe21b  lh          $k1, -0x1DE5($t6)
    ctx->pc = 0x2dad2cu;
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294959643)));
    // 0x2dad30: 0x2cdb020  add         $s6, $s6, $t5
    ctx->pc = 0x2dad30u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2dad34: 0xa3cba081  sb          $t3, -0x5F7F($fp)
    ctx->pc = 0x2dad34u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294942849), (uint8_t)GPR_U32(ctx, 11));
    // 0x2dad38: 0x8d4b6f75  lw          $t3, 0x6F75($t2)
    ctx->pc = 0x2dad38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28533)));
    // 0x2dad3c: 0x8533da93  lh          $s3, -0x256D($t1)
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294957715)));
    // 0x2dad40: 0x2a91820  add         $v1, $s5, $t1
    ctx->pc = 0x2dad40u;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x2dad44: 0xb6afdb95  sdr         $t7, -0x246B($s5)
    ctx->pc = 0x2dad44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294957973); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dad48: 0xc712d8f9  lwc1        $f18, -0x2707($t8)
    ctx->pc = 0x2dad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957305)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dad4c: 0xb6afda15  sdr         $t7, -0x25EB($s5)
    ctx->pc = 0x2dad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294957589); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dad50: 0x0  nop
    ctx->pc = 0x2dad50u;
    // NOP
label_2dad54:
    // 0x2dad54: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dad58: 0x2442ad44  addiu       $v0, $v0, -0x52BC
    ctx->pc = 0x2dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946116));
    // 0x2dad5c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dad60: 0x2484ad24  addiu       $a0, $a0, -0x52DC
    ctx->pc = 0x2dad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946084));
    // 0x2dad64: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dad68: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dad6c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD74u);
    ctx->pc = 0x2DAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD6Cu;
    // 0x2dad70: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DAD6Cu, 0x2DAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD74u;
label_2dad74:
    // 0x2dad74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dad74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad78: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2dad78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2dad7c: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2dad7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2dad80: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2dad80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2dad84: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x2dad84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2dad88: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2dad88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2dad8c: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x2dad8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2dad90: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2dad90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2dad94: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x2dad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2dad98: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x2dad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dad9c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x2dad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dada0: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2dada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dada4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DADA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADA4u;
        // 0x2dada8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DADACu;
    // 0x2dadac: 0x0  nop
    ctx->pc = 0x2dadacu;
    // NOP
    if (ctx->pc == 0x2dadacu) { ctx->pc = 0x2dadb0u; }
}
