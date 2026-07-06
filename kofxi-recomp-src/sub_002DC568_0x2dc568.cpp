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

// Function: sub_002DC568
// Address: 0x2dc568 - 0x2dc780
void sub_002DC568_0x2dc568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC568_0x2dc568");
#endif

    switch (ctx->pc) {
        case 0x2dc5c0u: goto label_2dc5c0;
        case 0x2dc5dcu: goto label_2dc5dc;
        case 0x2dc600u: goto label_2dc600;
        case 0x2dc638u: goto label_2dc638;
        case 0x2dc67cu: goto label_2dc67c;
        case 0x2dc690u: goto label_2dc690;
        case 0x2dc6b8u: goto label_2dc6b8;
        case 0x2dc718u: goto label_2dc718;
        case 0x2dc754u: goto label_2dc754;
        default: break;
    }

    ctx->pc = 0x2dc568u;

    // 0x2dc568: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dc568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dc56c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2dc56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2dc570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dc570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc574: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2dc574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2dc578: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dc578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc57c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2dc57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2dc580: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2dc580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2dc584: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dc584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dc588: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x2dc588u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2dc58c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2dc58cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2dc590: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2dc590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2dc594: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dc598: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x2dc59c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc5a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC5A0u;
    {
        const bool branch_taken_0x2dc5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5a0) {
            ctx->pc = 0x2DC5C0u;
            goto label_2dc5c0;
        }
    }
    ctx->pc = 0x2DC5A8u;
    // 0x2dc5a8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc5ac: 0x2484c5f4  addiu       $a0, $a0, -0x3A0C
    ctx->pc = 0x2dc5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952436));
    // 0x2dc5b0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc5b4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dc5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dc5b8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC5B8u;
    SET_GPR_U32(ctx, 31, 0x2DC5C0u);
    ctx->pc = 0x2DC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5B8u;
    // 0x2dc5bc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC5B8u, 0x2DC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5C0u;
label_2dc5c0:
    // 0x2dc5c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC5C0u;
    {
        const bool branch_taken_0x2dc5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5c0) {
            ctx->pc = 0x2DC5F4u;
            goto label_2dc5f4;
        }
    }
    ctx->pc = 0x2DC5C8u;
    // 0x2dc5c8: 0x4a4820  add         $t1, $v0, $t2
    ctx->pc = 0x2dc5c8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x2dc5cc: 0xfdff9b32  sd          $ra, -0x64CE($t7)
    ctx->pc = 0x2dc5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 4294941490), GPR_U64(ctx, 31));
    // 0x2dc5d0: 0xa11ce321  sb          $gp, -0x1CDF($t0)
    ctx->pc = 0x2dc5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294959905), (uint8_t)GPR_U32(ctx, 28));
    // 0x2dc5d4: 0xcd582b7  jal         func_3560ADC
    ctx->pc = 0x2DC5D4u;
    SET_GPR_U32(ctx, 31, 0x2DC5DCu);
    ctx->pc = 0x2DC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5D4u;
    // 0x2dc5d8: 0xdf34146f  ld          $s4, 0x146F($t9) (Delay Slot)
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 25), 5231)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560ADCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560ADCu, 0x2DC5D4u, 0x2DC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5DCu;
label_2dc5dc:
    // 0x2dc5dc: 0x27f49028  addiu       $s4, $ra, -0x6FD8
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 31), 4294938664));
    // 0x2dc5e0: 0x0  nop
    ctx->pc = 0x2dc5e0u;
    // NOP
    // 0x2dc5e4: 0xeeb7948a  .word       0xEEB7948A                   # INVALID     $s5, $s7, -0x6B76 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc5e4u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DC5E4 raw=0xEEB7948A");
    // 0x2dc5e8: 0xc712f810  lwc1        $f18, -0x7F0($t8)
    ctx->pc = 0x2dc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc5ec: 0xeeb7959a  .word       0xEEB7959A                   # INVALID     $s5, $s7, -0x6A66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc5ecu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DC5EC raw=0xEEB7959A");
    // 0x2dc5f0: 0x0  nop
    ctx->pc = 0x2dc5f0u;
    // NOP
label_2dc5f4:
    // 0x2dc5f4: 0x497ad41b  .word       0x497AD41B                   # INVALID     $t3, $k0, -0x2BE5 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dc5f4u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x2DC5F4 raw=0x497AD41B");
    // 0x2dc5f8: 0xc0b7536  jal         func_2DD4D8
    ctx->pc = 0x2DC5F8u;
    SET_GPR_U32(ctx, 31, 0x2DC600u);
    ctx->pc = 0x2DC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5F8u;
    // 0x2dc5fc: 0x891a408d  lwl         $k0, 0x408D($t0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16525); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD4D8u, 0x2DC5F8u, 0x2DC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC600u;
label_2dc600:
    // 0x2dc600: 0x85bad015  lh          $k0, -0x2FEB($t5)
    ctx->pc = 0x2dc600u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294955029)));
    // 0x2dc604: 0x85da0814  lh          $k0, 0x814($t6)
    ctx->pc = 0x2dc604u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2068)));
    // 0x2dc608: 0x4d3ad41b  .word       0x4D3AD41B                   # INVALID     $t1, $k0, -0x2BE5 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc608u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2DC608 raw=0x4D3AD41B");
    // 0x2dc60c: 0x891a40a5  lwl         $k0, 0x40A5($t0)
    ctx->pc = 0x2dc60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16549); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc610: 0x9d3a504d  lwu         $k0, 0x504D($t1)
    ctx->pc = 0x2dc610u;
    SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 9), 20557)));
    // 0x2dc614: 0x1d3a508d  .word       0x1D3A508D                   # bgtz        $t1, . + 4 + (0x508D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC614u;
    {
        const bool branch_taken_0x2dc614 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC614u;
        // 0x2dc618: 0x85b81404  lh          $t8, 0x1404($t5) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 5124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc614) {
            ctx->pc = 0x2F084Cu;
            return;
        }
    }
    ctx->pc = 0x2DC61Cu;
    // 0x2dc61c: 0x1dbad017  .word       0x1DBAD017                   # bgtz        $t5, . + 4 + (-0x2FE9 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC61Cu;
    {
        const bool branch_taken_0x2dc61c = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x2DC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC61Cu;
        // 0x2dc620: 0x19af417  .word       0x019AF417                   # dsrav       $fp, $k0, $t4 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 26) >> (GPR_U32(ctx, 12) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc61c) {
            ctx->pc = 0x2D067Cu;
            return;
        }
    }
    ctx->pc = 0x2DC624u;
    // 0x2dc624: 0x8a461ff4  lwl         $a2, 0x1FF4($s2)
    ctx->pc = 0x2dc624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2dc628: 0x85b8d407  lh          $t8, -0x2BF9($t5)
    ctx->pc = 0x2dc628u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294956039)));
    // 0x2dc62c: 0x19fad41b  .word       0x19FAD41B                   # blez        $t7, . + 4 + (-0x2BE5 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC62Cu;
    {
        const bool branch_taken_0x2dc62c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC62Cu;
        // 0x2dc630: 0xc0b7104  jal         func_2DC410 (Delay Slot)
        // JAL 0x2DC410 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc62c) {
            ctx->pc = 0x2D169Cu;
            return;
        }
    }
    ctx->pc = 0x2DC634u;
    // 0x2dc634: 0xc646cbf5  lwc1        $f6, -0x340B($s2)
    ctx->pc = 0x2dc634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294953973)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2dc638:
    // 0x2dc638: 0x89fa5c14  lwl         $k0, 0x5C14($t7)
    ctx->pc = 0x2dc638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 23572); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc63c: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2dc63cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2dc640: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2dc640u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2dc644: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dc644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dc648: 0x85badc15  lh          $k0, -0x23EB($t5)
    ctx->pc = 0x2dc648u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294958101)));
    // 0x2dc64c: 0x2442e068  addiu       $v0, $v0, -0x1F98
    ctx->pc = 0x2dc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959208));
    // 0x2dc650: 0x891a408c  lwl         $k0, 0x408C($t0)
    ctx->pc = 0x2dc650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16524); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc654: 0x2529e070  addiu       $t1, $t1, -0x1F90
    ctx->pc = 0x2dc654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959216));
    // 0x2dc658: 0x91a414d  j           func_4690534
    ctx->pc = 0x2DC658u;
    ctx->pc = 0x2DC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC658u;
    // 0x2dc65c: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4690534u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690534u, 0x2DC658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC660u;
    // 0x2dc660: 0x9d3ad415  lwu         $k0, -0x2BEB($t1)
    ctx->pc = 0x2dc660u;
    SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 9), 4294956053)));
    // 0x2dc664: 0x10bad41b  beq         $a1, $k0, . + 4 + (-0x2BE5 << 2)
    ctx->pc = 0x2DC664u;
    {
        const bool branch_taken_0x2dc664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 26));
        ctx->pc = 0x2DC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC664u;
        // 0x2dc668: 0x15fad41b  bne         $t7, $k0, . + 4 + (-0x2BE5 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DC668 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc664) {
            ctx->pc = 0x2D16D4u;
            return;
        }
    }
    ctx->pc = 0x2DC66Cu;
    // 0x2dc66c: 0xa9bac015  swl         $k0, -0x3FEB($t5)
    ctx->pc = 0x2dc66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294950933); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc670: 0x1b8f41b  .word       0x01B8F41B                   # divu        $fp, $t5, $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc670u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2dc674: 0xc0b8e62  jal         func_2E3988
    ctx->pc = 0x2DC674u;
    SET_GPR_U32(ctx, 31, 0x2DC67Cu);
    ctx->pc = 0x2DC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC674u;
    // 0x2dc678: 0x598f41b  mtsab       $t4, -0xBE5 (Delay Slot)
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)4294964251) & 0xF) << 3;
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3988u, 0x2DC674u, 0x2DC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC67Cu;
label_2dc67c:
    // 0x2dc67c: 0x81baf404  lb          $k0, -0xBFC($t5)
    ctx->pc = 0x2dc67cu;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294964228)));
    // 0x2dc680: 0x819a5e65  lb          $k0, 0x5E65($t4)
    ctx->pc = 0x2dc680u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 24165)));
    // 0x2dc684: 0x8e42a935  lw          $v0, -0x56CB($s2)
    ctx->pc = 0x2dc684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945077)));
    // 0x2dc688: 0xe468bf5  jal         func_91A2FD4
    ctx->pc = 0x2DC688u;
    SET_GPR_U32(ctx, 31, 0x2DC690u);
    ctx->pc = 0x2DC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC688u;
    // 0x2dc68c: 0x8dbb56d7  lw          $k1, 0x56D7($t5) (Delay Slot)
    SET_GPR_S32(ctx, 27, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 22231)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x91A2FD4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x91A2FD4u, 0x2DC688u, 0x2DC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC690u;
label_2dc690:
    // 0x2dc690: 0x41fad41b  .word       0x41FAD41B                   # INVALID     $t7, $k0, -0x2BE5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc690u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2DC690 raw=0x41FAD41B");
    // 0x2dc694: 0x8fb6b515  lw          $s6, -0x4AEB($sp)
    ctx->pc = 0x2dc694u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294948117)));
    // 0x2dc698: 0x8dbb56b7  lw          $k1, 0x56B7($t5)
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 27, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 22199)));
    // 0x2dc69c: 0x891a4205  lwl         $k0, 0x4205($t0)
    ctx->pc = 0x2dc69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16901); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc6a0: 0x8da6b535  lw          $a2, -0x4ACB($t5)
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294948149)));
    // 0x2dc6a4: 0x8dbb5697  lw          $k1, 0x5697($t5)
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 27, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 22167)));
    // 0x2dc6a8: 0xcdbab615  pref        0x1A, -0x49EB($t5)
    ctx->pc = 0x2dc6a8u;
    // PREF instruction (ignored)
    // 0x2dc6ac: 0x89ba5405  lwl         $k0, 0x5405($t5)
    ctx->pc = 0x2dc6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 21509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc6b0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DC6B0u;
    SET_GPR_U32(ctx, 31, 0x2DC6B8u);
    ctx->pc = 0x2DC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6B0u;
    // 0x2dc6b4: 0x89ba5405  lwl         $k0, 0x5405($t5) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 21509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DC6B0u, 0x2DC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6B8u;
label_2dc6b8:
    // 0x2dc6b8: 0x81bb5417  lb          $k1, 0x5417($t5)
    ctx->pc = 0x2dc6b8u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 21527)));
    // 0x2dc6bc: 0x893b541f  lwl         $k1, 0x541F($t1)
    ctx->pc = 0x2dc6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 21535); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x2dc6c0: 0xc93a508c  lwc2        $26, 0x508C($t1)
    ctx->pc = 0x2dc6c0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC6C0 raw=0xC93A508C");
    // 0x2dc6c4: 0xc9bad01d  lwc2        $26, -0x2FE3($t5)
    ctx->pc = 0x2dc6c4u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DC6C4 raw=0xC9BAD01D");
    // 0x2dc6c8: 0x89ba5405  lwl         $k0, 0x5405($t5)
    ctx->pc = 0x2dc6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 21509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc6cc: 0x89ba5405  lwl         $k0, 0x5405($t5)
    ctx->pc = 0x2dc6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 21509); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 26) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 26, (int32_t)merged); }
    // 0x2dc6d0: 0xd1bb581d  lld         $k1, 0x581D($t5)
    ctx->pc = 0x2dc6d0u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DC6D0 raw=0xD1BB581D");
    // 0x2dc6d4: 0xddbb5c1d  ld          $k1, 0x5C1D($t5)
    ctx->pc = 0x2dc6d4u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 13), 23581)));
    // 0x2dc6d8: 0x897b4e9d  lwl         $k1, 0x4E9D($t3)
    ctx->pc = 0x2dc6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20125); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x2dc6dc: 0x883b441d  lwl         $k1, 0x441D($at)
    ctx->pc = 0x2dc6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 17437); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x2dc6e0: 0x81bb5435  lb          $k1, 0x5435($t5)
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 21557)));
    // 0x2dc6e4: 0x89bb4011  lwl         $k1, 0x4011($t5)
    ctx->pc = 0x2dc6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16401); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x2dc6e8: 0x85bae00d  lh          $k0, -0x1FF3($t5)
    ctx->pc = 0x2dc6e8u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294959117)));
    // 0x2dc6ec: 0xd9bb501d  lqc2        $vf27, 0x501D($t5)
    ctx->pc = 0x2dc6ecu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 20509)));
    // 0x2dc6f0: 0x883b441d  lwl         $k1, 0x441D($at)
    ctx->pc = 0x2dc6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 17437); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x2dc6f4: 0x81bb5435  lb          $k1, 0x5435($t5)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 21557)));
    // 0x2dc6f8: 0xcd3a4044  pref        0x1A, 0x4044($t1)
    ctx->pc = 0x2dc6f8u;
    // PREF instruction (ignored)
    // 0x2dc6fc: 0xa0607f4  j           func_8181FD0
    ctx->pc = 0x2DC6FCu;
    ctx->pc = 0x2DC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6FCu;
    // 0x2dc700: 0x81b8d407  lb          $t8, -0x2BF9($t5) (Delay Slot)
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294956039)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8181FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8181FD0u, 0x2DC6FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC704u;
    // 0x2dc704: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC704u;
    {
        const bool branch_taken_0x2dc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc704) {
            ctx->pc = 0x2DC734u;
            goto label_2dc734;
        }
    }
    ctx->pc = 0x2DC70Cu;
    // 0x2dc70c: 0x8e31a6d5  lw          $s1, -0x592B($s1)
    ctx->pc = 0x2dc70cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944469)));
    // 0x2dc710: 0xcf5029d  jal         func_3D40A74
    ctx->pc = 0x2DC710u;
    SET_GPR_U32(ctx, 31, 0x2DC718u);
    ctx->pc = 0x2DC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC710u;
    // 0x2dc714: 0xa2776291  sb          $s7, 0x6291($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 25233), (uint8_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D40A74u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D40A74u, 0x2DC710u, 0x2DC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC718u;
label_2dc718:
    // 0x2dc718: 0x8fb6c4f5  lw          $s6, -0x3B0B($sp)
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294952181)));
    // 0x2dc71c: 0x2568020  add         $s0, $s2, $s6
    ctx->pc = 0x2dc71cu;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x2dc720: 0x18f5020  add         $t2, $t4, $t7
    ctx->pc = 0x2dc720u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x2dc724: 0xeea8497b  .word       0xEEA8497B                   # INVALID     $s5, $t0, 0x497B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc724u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DC724 raw=0xEEA8497B");
    // 0x2dc728: 0xc712f811  lwc1        $f18, -0x7EF($t8)
    ctx->pc = 0x2dc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965265)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc72c: 0xeea8486b  .word       0xEEA8486B                   # INVALID     $s5, $t0, 0x486B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc72cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DC72C raw=0xEEA8486B");
    // 0x2dc730: 0x0  nop
    ctx->pc = 0x2dc730u;
    // NOP
label_2dc734:
    // 0x2dc734: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dc738: 0x2442c724  addiu       $v0, $v0, -0x38DC
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952740));
    // 0x2dc73c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc740: 0x2484c704  addiu       $a0, $a0, -0x38FC
    ctx->pc = 0x2dc740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952708));
    // 0x2dc744: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc748: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dc748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc74c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC74Cu;
    SET_GPR_U32(ctx, 31, 0x2DC754u);
    ctx->pc = 0x2DC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC74Cu;
    // 0x2dc750: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC74Cu, 0x2DC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC754u;
label_2dc754:
    // 0x2dc754: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dc754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc758: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2dc758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc75c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2dc75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dc760: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2dc760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc764: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2dc764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dc768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dc768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc76c: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x2dc76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dc770: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x2dc770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dc774: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x2dc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc778: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC778u;
        // 0x2dc77c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC780u;
}
