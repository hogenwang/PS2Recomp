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

// Function: sub_00252838
// Address: 0x252838 - 0x252b78
void sub_00252838_0x252838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252838_0x252838");
#endif

    switch (ctx->pc) {
        case 0x2528c0u: goto label_2528c0;
        case 0x252908u: goto label_252908;
        case 0x252920u: goto label_252920;
        case 0x252978u: goto label_252978;
        case 0x2529bcu: goto label_2529bc;
        case 0x2529d4u: goto label_2529d4;
        case 0x2529e4u: goto label_2529e4;
        case 0x2529f8u: goto label_2529f8;
        case 0x252a18u: goto label_252a18;
        case 0x252a70u: goto label_252a70;
        case 0x252a88u: goto label_252a88;
        case 0x252a98u: goto label_252a98;
        case 0x252aacu: goto label_252aac;
        case 0x252accu: goto label_252acc;
        case 0x252b24u: goto label_252b24;
        case 0x252b50u: goto label_252b50;
        default: break;
    }

    ctx->pc = 0x252838u;

    // 0x252838: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x252838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x25283c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252840: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x252840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x252844: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x252848: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x252848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x25284c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x25284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x252850: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x252850u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x252854: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x252854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x252858: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x252858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25285c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x25285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x252860: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x252860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x252864: 0xffa500e8  sd          $a1, 0xE8($sp)
    ctx->pc = 0x252864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 5));
    // 0x252868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x252868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25286c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25286cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x252870: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x252870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x252874: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x252874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x252878: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x252878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x25287c: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x252880: 0xffa600f0  sd          $a2, 0xF0($sp)
    ctx->pc = 0x252880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 6));
    // 0x252884: 0xffa700f8  sd          $a3, 0xF8($sp)
    ctx->pc = 0x252884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 7));
    // 0x252888: 0xffa80100  sd          $t0, 0x100($sp)
    ctx->pc = 0x252888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 8));
    // 0x25288c: 0xffa90108  sd          $t1, 0x108($sp)
    ctx->pc = 0x25288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 9));
    // 0x252890: 0xffaa0110  sd          $t2, 0x110($sp)
    ctx->pc = 0x252890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 10));
    // 0x252894: 0xffab0118  sd          $t3, 0x118($sp)
    ctx->pc = 0x252894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 11));
    // 0x252898: 0x8fb600f0  lw          $s6, 0xF0($sp)
    ctx->pc = 0x252898u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25289c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x25289cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2528a0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2528a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2528a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2528a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2528a8: 0x8a62000f  lwl         $v0, 0xF($s3)
    ctx->pc = 0x2528a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2528ac: 0x9a62000c  lwr         $v0, 0xC($s3)
    ctx->pc = 0x2528acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2528b0: 0xaba20007  swl         $v0, 0x7($sp)
    ctx->pc = 0x2528b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2528b4: 0xbba20004  swr         $v0, 0x4($sp)
    ctx->pc = 0x2528b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2528b8: 0xc048c96  jal         func_123258
    ctx->pc = 0x2528B8u;
    SET_GPR_U32(ctx, 31, 0x2528C0u);
    ctx->pc = 0x2528BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528B8u;
    // 0x2528bc: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2528B8u, 0x2528C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528C0u;
label_2528c0:
    // 0x2528c0: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x2528c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2528c4: 0x26a511e8  addiu       $a1, $s5, 0x11E8
    ctx->pc = 0x2528c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4584));
    // 0x2528c8: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2528c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2528cc: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2528ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2528d0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2528d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2528d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2528d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2528d8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2528d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2528dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2528dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2528e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2528e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2528e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2528e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2528e8: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x2528e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x2528ec: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x2528ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2528f0: 0xa2640003  sb          $a0, 0x3($s3)
    ctx->pc = 0x2528f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2528f4: 0x8eb111e8  lw          $s1, 0x11E8($s5)
    ctx->pc = 0x2528f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4584)));
    // 0x2528f8: 0x1225004e  beq         $s1, $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x252A34u;
            goto label_252a34;
        }
    }
    ctx->pc = 0x252900u;
    // 0x252900: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x252900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
    // 0x252904: 0x0  nop
    ctx->pc = 0x252904u;
    // NOP
label_252908:
    // 0x252908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252908u;
    {
        const bool branch_taken_0x252908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252908) {
            ctx->pc = 0x252918u;
            goto label_252918;
        }
    }
    ctx->pc = 0x252910u;
    // 0x252910: 0x54560045  bnel        $v0, $s6, . + 4 + (0x45 << 2)
    ctx->pc = 0x252910u;
    {
        const bool branch_taken_0x252910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x252910) {
            ctx->pc = 0x252914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252910u;
            // 0x252914: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A28u;
            goto label_252a28;
        }
    }
    ctx->pc = 0x252918u;
label_252918:
    // 0x252918: 0xc08a254  jal         func_228950
    ctx->pc = 0x252918u;
    SET_GPR_U32(ctx, 31, 0x252920u);
    ctx->pc = 0x25291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252918u;
    // 0x25291c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x252918u, 0x252920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252920u;
label_252920:
    // 0x252920: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x252920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x252924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x252924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252928: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252928u;
    {
        const bool branch_taken_0x252928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x252928) {
            ctx->pc = 0x25292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252928u;
            // 0x25292c: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252944u;
            goto label_252944;
        }
    }
    ctx->pc = 0x252930u;
    // 0x252930: 0x8a620013  lwl         $v0, 0x13($s3)
    ctx->pc = 0x252930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252934: 0x9a620010  lwr         $v0, 0x10($s3)
    ctx->pc = 0x252934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252938: 0x5462003b  bnel        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x252938u;
    {
        const bool branch_taken_0x252938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252938) {
            ctx->pc = 0x25293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252938u;
            // 0x25293c: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A28u;
            goto label_252a28;
        }
    }
    ctx->pc = 0x252940u;
    // 0x252940: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x252940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_252944:
    // 0x252944: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252944u;
    {
        const bool branch_taken_0x252944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x252944) {
            ctx->pc = 0x25295Cu;
            goto label_25295c;
        }
    }
    ctx->pc = 0x25294Cu;
    // 0x25294c: 0x8a62000f  lwl         $v0, 0xF($s3)
    ctx->pc = 0x25294cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252950: 0x9a62000c  lwr         $v0, 0xC($s3)
    ctx->pc = 0x252950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252954: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x252954u;
    {
        const bool branch_taken_0x252954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252954) {
            ctx->pc = 0x252958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252954u;
            // 0x252958: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A28u;
            goto label_252a28;
        }
    }
    ctx->pc = 0x25295Cu;
label_25295c:
    // 0x25295c: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x25295Cu;
    {
        const bool branch_taken_0x25295c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x252960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25295Cu;
        // 0x252960: 0x3c063b9a  lui         $a2, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25295c) {
            ctx->pc = 0x252A20u;
            goto label_252a20;
        }
    }
    ctx->pc = 0x252964u;
    // 0x252964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x252964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25296c: 0x34c6ca00  ori         $a2, $a2, 0xCA00
    ctx->pc = 0x25296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51712);
    // 0x252970: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x252970u;
    SET_GPR_U32(ctx, 31, 0x252978u);
    ctx->pc = 0x252974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252970u;
    // 0x252974: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x252970u, 0x252978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252978u;
label_252978:
    // 0x252978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25297c: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x25297Cu;
    {
        const bool branch_taken_0x25297c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25297c) {
            ctx->pc = 0x252980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25297Cu;
            // 0x252980: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A24u;
            goto label_252a24;
        }
    }
    ctx->pc = 0x252984u;
    // 0x252984: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x252984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x252988: 0x30420087  andi        $v0, $v0, 0x87
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)135);
    // 0x25298c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25298Cu;
    {
        const bool branch_taken_0x25298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25298Cu;
        // 0x252990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25298c) {
            ctx->pc = 0x2529ACu;
            goto label_2529ac;
        }
    }
    ctx->pc = 0x252994u;
    // 0x252994: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x252994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x252998: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x252998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25299c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2529a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2529A0u;
    {
        const bool branch_taken_0x2529a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529A0u;
        // 0x2529a4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529a0) {
            ctx->pc = 0x2529C4u;
            goto label_2529c4;
        }
    }
    ctx->pc = 0x2529A8u;
    // 0x2529a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2529a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2529ac:
    // 0x2529ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2529b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2529b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529b4: 0xc094198  jal         func_250660
    ctx->pc = 0x2529B4u;
    SET_GPR_U32(ctx, 31, 0x2529BCu);
    ctx->pc = 0x2529B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529B4u;
    // 0x2529b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250660u, 0x2529B4u, 0x2529BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529BCu;
label_2529bc:
    // 0x2529bc: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2529bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2529c0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2529c4:
    // 0x2529c4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2529c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2529c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2529c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529cc: 0xc08c330  jal         func_230CC0
    ctx->pc = 0x2529CCu;
    SET_GPR_U32(ctx, 31, 0x2529D4u);
    ctx->pc = 0x2529D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529CCu;
    // 0x2529d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CC0u, 0x2529CCu, 0x2529D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529D4u;
label_2529d4:
    // 0x2529d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2529D4u;
    {
        const bool branch_taken_0x2529d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2529d4) {
            ctx->pc = 0x2529D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529D4u;
            // 0x2529d8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A00u;
            goto label_252a00;
        }
    }
    ctx->pc = 0x2529DCu;
    // 0x2529dc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2529DCu;
    SET_GPR_U32(ctx, 31, 0x2529E4u);
    ctx->pc = 0x2529E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529DCu;
    // 0x2529e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2529DCu, 0x2529E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529E4u;
label_2529e4:
    // 0x2529e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2529e8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2529E8u;
    {
        const bool branch_taken_0x2529e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2529e8) {
            ctx->pc = 0x2529ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529E8u;
            // 0x2529ec: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A20u;
            goto label_252a20;
        }
    }
    ctx->pc = 0x2529F0u;
    // 0x2529f0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2529F0u;
    SET_GPR_U32(ctx, 31, 0x2529F8u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2529F0u, 0x2529F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529F8u;
label_2529f8:
    // 0x2529f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2529F8u;
    {
        const bool branch_taken_0x2529f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529f8) {
            ctx->pc = 0x252A20u;
            goto label_252a20;
        }
    }
    ctx->pc = 0x252A00u;
label_252a00:
    // 0x252a00: 0x94820078  lhu         $v0, 0x78($a0)
    ctx->pc = 0x252a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x252a04: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x252a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x252a08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x252A08u;
    {
        const bool branch_taken_0x252a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a08) {
            ctx->pc = 0x252A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A08u;
            // 0x252a0c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252A20u;
            goto label_252a20;
        }
    }
    ctx->pc = 0x252A10u;
    // 0x252a10: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x252A10u;
    SET_GPR_U32(ctx, 31, 0x252A18u);
    ctx->pc = 0x252A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A10u;
    // 0x252a14: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x252A10u, 0x252A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A18u;
label_252a18:
    // 0x252a18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x252a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x252a1c: 0x0  nop
    ctx->pc = 0x252a1cu;
    // NOP
label_252a20:
    // 0x252a20: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x252a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252a24:
    // 0x252a24: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x252a24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_252a28:
    // 0x252a28: 0x26a211e8  addiu       $v0, $s5, 0x11E8
    ctx->pc = 0x252a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4584));
    // 0x252a2c: 0x5622ffb6  bnel        $s1, $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x252A2Cu;
    {
        const bool branch_taken_0x252a2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x252a2c) {
            ctx->pc = 0x252A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A2Cu;
            // 0x252a30: 0x92220041  lbu         $v0, 0x41($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252908;
        }
    }
    ctx->pc = 0x252A34u;
label_252a34:
    // 0x252a34: 0x52400028  beql        $s2, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x252A34u;
    {
        const bool branch_taken_0x252a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a34) {
            ctx->pc = 0x252A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A34u;
            // 0x252a38: 0x92650009  lbu         $a1, 0x9($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AD8u;
            goto label_252ad8;
        }
    }
    ctx->pc = 0x252A3Cu;
    // 0x252a3c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x252a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x252a40: 0x30420087  andi        $v0, $v0, 0x87
    ctx->pc = 0x252a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)135);
    // 0x252a44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252A44u;
    {
        const bool branch_taken_0x252a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A44u;
        // 0x252a48: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a44) {
            ctx->pc = 0x252A60u;
            goto label_252a60;
        }
    }
    ctx->pc = 0x252A4Cu;
    // 0x252a4c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x252a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x252a50: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x252a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x252a54: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x252a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x252a58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252A58u;
    {
        const bool branch_taken_0x252a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A58u;
        // 0x252a5c: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a58) {
            ctx->pc = 0x252A78u;
            goto label_252a78;
        }
    }
    ctx->pc = 0x252A60u;
label_252a60:
    // 0x252a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x252a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x252a68: 0xc094198  jal         func_250660
    ctx->pc = 0x252A68u;
    SET_GPR_U32(ctx, 31, 0x252A70u);
    ctx->pc = 0x252A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A68u;
    // 0x252a6c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250660u, 0x252A68u, 0x252A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A70u;
label_252a70:
    // 0x252a70: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x252a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x252a74: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x252a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_252a78:
    // 0x252a78: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x252a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x252a7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x252a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a80: 0xc08c330  jal         func_230CC0
    ctx->pc = 0x252A80u;
    SET_GPR_U32(ctx, 31, 0x252A88u);
    ctx->pc = 0x252A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A80u;
    // 0x252a84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CC0u, 0x252A80u, 0x252A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A88u;
label_252a88:
    // 0x252a88: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x252A88u;
    {
        const bool branch_taken_0x252a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a88) {
            ctx->pc = 0x252A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A88u;
            // 0x252a8c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AB4u;
            goto label_252ab4;
        }
    }
    ctx->pc = 0x252A90u;
    // 0x252a90: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x252A90u;
    SET_GPR_U32(ctx, 31, 0x252A98u);
    ctx->pc = 0x252A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A90u;
    // 0x252a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x252A90u, 0x252A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A98u;
label_252a98:
    // 0x252a98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252a9c: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x252A9Cu;
    {
        const bool branch_taken_0x252a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A9Cu;
        // 0x252aa0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a9c) {
            ctx->pc = 0x252B54u;
            goto label_252b54;
        }
    }
    ctx->pc = 0x252AA4u;
    // 0x252aa4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x252AA4u;
    SET_GPR_U32(ctx, 31, 0x252AACu);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x252AA4u, 0x252AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AACu;
label_252aac:
    // 0x252aac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x252AACu;
    {
        const bool branch_taken_0x252aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AACu;
        // 0x252ab0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252aac) {
            ctx->pc = 0x252B54u;
            goto label_252b54;
        }
    }
    ctx->pc = 0x252AB4u;
label_252ab4:
    // 0x252ab4: 0x94820078  lhu         $v0, 0x78($a0)
    ctx->pc = 0x252ab4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x252ab8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x252ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x252abc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x252ABCu;
    {
        const bool branch_taken_0x252abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ABCu;
        // 0x252ac0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252abc) {
            ctx->pc = 0x252B54u;
            goto label_252b54;
        }
    }
    ctx->pc = 0x252AC4u;
    // 0x252ac4: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x252AC4u;
    SET_GPR_U32(ctx, 31, 0x252ACCu);
    ctx->pc = 0x252AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AC4u;
    // 0x252ac8: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x252AC4u, 0x252ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252ACCu;
label_252acc:
    // 0x252acc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x252ACCu;
    {
        const bool branch_taken_0x252acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ACCu;
        // 0x252ad0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252acc) {
            ctx->pc = 0x252B54u;
            goto label_252b54;
        }
    }
    ctx->pc = 0x252AD4u;
    // 0x252ad4: 0x0  nop
    ctx->pc = 0x252ad4u;
    // NOP
label_252ad8:
    // 0x252ad8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x252ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x252adc: 0x24420390  addiu       $v0, $v0, 0x390
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x252ae0: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x252ae4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x252ae8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x252ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x252aec: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x252aecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252af0: 0x246301d8  addiu       $v1, $v1, 0x1D8
    ctx->pc = 0x252af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
    // 0x252af4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x252af8: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x252af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x252afc: 0x24a52838  addiu       $a1, $a1, 0x2838
    ctx->pc = 0x252afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10296));
    // 0x252b00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252b04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x252b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x252b08: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x252B08u;
    {
        const bool branch_taken_0x252b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x252B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B08u;
        // 0x252b0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b08) {
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B10u;
    // 0x252b10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252b14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x252b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b1c: 0xc0933c4  jal         func_24CF10
    ctx->pc = 0x252B1Cu;
    SET_GPR_U32(ctx, 31, 0x252B24u);
    ctx->pc = 0x252B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B1Cu;
    // 0x252b20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF10u, 0x252B1Cu, 0x252B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B24u;
label_252b24:
    // 0x252b24: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x252b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x252b28: 0x244210a8  addiu       $v0, $v0, 0x10A8
    ctx->pc = 0x252b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
    // 0x252b2c: 0xdc430068  ld          $v1, 0x68($v0)
    ctx->pc = 0x252b2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x252b30: 0xdc440070  ld          $a0, 0x70($v0)
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x252b34: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x252b34u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x252b38: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x252b38u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x252b3c: 0xfc430068  sd          $v1, 0x68($v0)
    ctx->pc = 0x252b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 3));
    // 0x252b40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252B40u;
    {
        const bool branch_taken_0x252b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B40u;
        // 0x252b44: 0xfc440070  sd          $a0, 0x70($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b40) {
            ctx->pc = 0x252B50u;
            goto label_252b50;
        }
    }
    ctx->pc = 0x252B48u;
label_252b48:
    // 0x252b48: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x252B48u;
    SET_GPR_U32(ctx, 31, 0x252B50u);
    ctx->pc = 0x252B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B48u;
    // 0x252b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x252B48u, 0x252B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B50u;
label_252b50:
    // 0x252b50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x252b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_252b54:
    // 0x252b54: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x252b54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252b58: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x252b58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252b5c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x252b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252b60: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x252b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252b64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x252b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252b68: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x252b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x252b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b70: 0x3e00008  jr          $ra
    ctx->pc = 0x252B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B70u;
        // 0x252b74: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B78u;
}
