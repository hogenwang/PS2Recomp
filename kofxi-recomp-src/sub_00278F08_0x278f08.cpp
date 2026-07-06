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

// Function: sub_00278F08
// Address: 0x278f08 - 0x2791b0
void sub_00278F08_0x278f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278F08_0x278f08");
#endif

    switch (ctx->pc) {
        case 0x278f6cu: goto label_278f6c;
        case 0x278fc0u: goto label_278fc0;
        case 0x279060u: goto label_279060;
        case 0x279068u: goto label_279068;
        case 0x279098u: goto label_279098;
        case 0x2790a8u: goto label_2790a8;
        case 0x2790e4u: goto label_2790e4;
        case 0x2790fcu: goto label_2790fc;
        case 0x27911cu: goto label_27911c;
        case 0x27913cu: goto label_27913c;
        case 0x27915cu: goto label_27915c;
        default: break;
    }

    ctx->pc = 0x278f08u;

    // 0x278f08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278f0c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x278f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x278f10: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x278f10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x278f14: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x278f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x278f18: 0x26d52d78  addiu       $s5, $s6, 0x2D78
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 11640));
    // 0x278f1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x278f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x278f20: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x278f24: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x278f28: 0x8e1006a4  lw          $s0, 0x6A4($s0)
    ctx->pc = 0x278f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
    // 0x278f2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x278f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x278f30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x278f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x278f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x278f38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x278f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f3c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x278f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x278f40: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x278f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f44: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x278f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x278f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f4c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x278f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x278f50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x278f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f54: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x278f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x278f58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x278f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f5c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x278f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x278f60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x278f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x278f64: 0xc09e1ee  jal         func_2787B8
    ctx->pc = 0x278F64u;
    SET_GPR_U32(ctx, 31, 0x278F6Cu);
    ctx->pc = 0x278F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F64u;
    // 0x278f68: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787B8u, 0x278F64u, 0x278F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F6Cu;
label_278f6c:
    // 0x278f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f70: 0x4800085  bltz        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x278F70u;
    {
        const bool branch_taken_0x278f70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x278F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F70u;
        // 0x278f74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f70) {
            ctx->pc = 0x279188u;
            goto label_279188;
        }
    }
    ctx->pc = 0x278F78u;
    // 0x278f78: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x278f78u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278f7c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x278f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x278f80: 0x16230081  bne         $s1, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x278F80u;
    {
        const bool branch_taken_0x278f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x278F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F80u;
        // 0x278f84: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f80) {
            ctx->pc = 0x279188u;
            goto label_279188;
        }
    }
    ctx->pc = 0x278F88u;
    // 0x278f88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x278f8c: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x278F8Cu;
    {
        const bool branch_taken_0x278f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x278F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F8Cu;
        // 0x278f90: 0x2664fffb  addiu       $a0, $s3, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f8c) {
            ctx->pc = 0x2790B0u;
            goto label_2790b0;
        }
    }
    ctx->pc = 0x278F94u;
    // 0x278f94: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278f98: 0x24638fe0  addiu       $v1, $v1, -0x7020
    ctx->pc = 0x278f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938592));
    // 0x278f9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278fa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278FA0u;
    {
        const bool branch_taken_0x278fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278fa0) {
            ctx->pc = 0x278FC0u;
            goto label_278fc0;
        }
    }
    ctx->pc = 0x278FA8u;
    // 0x278fa8: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278fac: 0x24848ff4  addiu       $a0, $a0, -0x700C
    ctx->pc = 0x278facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938612));
    // 0x278fb0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x278fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278fb4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x278fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x278fb8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278FB8u;
    SET_GPR_U32(ctx, 31, 0x278FC0u);
    ctx->pc = 0x278FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FB8u;
    // 0x278fbc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x278FB8u, 0x278FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FC0u;
label_278fc0:
    // 0x278fc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278FC0u;
    {
        const bool branch_taken_0x278fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278fc0) {
            ctx->pc = 0x278FF4u;
            goto label_278ff4;
        }
    }
    ctx->pc = 0x278FC8u;
    // 0x278fc8: 0xff77deaa  sd          $s7, -0x2156($k1)
    ctx->pc = 0x278fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294958762), GPR_U64(ctx, 23));
    // 0x278fcc: 0xfdcfbdaa  sd          $t7, -0x4256($t6)
    ctx->pc = 0x278fccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294950314), GPR_U64(ctx, 15));
    // 0x278fd0: 0xff465102  sd          $a2, 0x5102($k0)
    ctx->pc = 0x278fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 20738), GPR_U64(ctx, 6));
    // 0x278fd4: 0xa0d22b31  sb          $s2, 0x2B31($a2)
    ctx->pc = 0x278fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11057), (uint8_t)GPR_U32(ctx, 18));
    // 0x278fd8: 0xa06e5919  sb          $t6, 0x5919($v1)
    ctx->pc = 0x278fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22809), (uint8_t)GPR_U32(ctx, 14));
    // 0x278fdc: 0xa0623411  sb          $v0, 0x3411($v1)
    ctx->pc = 0x278fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13329), (uint8_t)GPR_U32(ctx, 2));
    // 0x278fe0: 0x0  nop
    ctx->pc = 0x278fe0u;
    // NOP
    // 0x278fe4: 0x8934975b  lwl         $s4, -0x68A5($t1)
    ctx->pc = 0x278fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294940507); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 20) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 20, (int32_t)merged); }
    // 0x278fe8: 0x0  nop
    ctx->pc = 0x278fe8u;
    // NOP
    // 0x278fec: 0x8934970f  lwl         $s4, -0x68F1($t1)
    ctx->pc = 0x278fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294940431); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 20) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 20, (int32_t)merged); }
    // 0x278ff0: 0x0  nop
    ctx->pc = 0x278ff0u;
    // NOP
label_278ff4:
    // 0x278ff4: 0xaca418ec  sw          $a0, 0x18EC($a1)
    ctx->pc = 0x278ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6380), GPR_U32(ctx, 4));
    // 0x278ff8: 0x54b87957  bnel        $a1, $t8, . + 4 + (0x7957 << 2)
    ctx->pc = 0x278FF8u;
    {
        const bool branch_taken_0x278ff8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 24));
        if (branch_taken_0x278ff8) {
            ctx->pc = 0x278FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278FF8u;
            // 0x278ffc: 0xd6fc89d7  ldc1        $f28, -0x7629($s7) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x35 at 0x278FFC raw=0xD6FC89D7");
            ctx->in_delay_slot = false;
            ctx->pc = 0x297558u;
            return;
        }
    }
    ctx->pc = 0x279000u;
    // 0x279000: 0x4abab9b3  .word       0x4ABAB9B3                   # INVALID     $s5, $k0, -0x464D # 00000000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x279000u;
    throw std::runtime_error("Unhandled VU0 Special1 function: 0x33 at 0x279000 raw=0x4ABAB9B3");
    // 0x279004: 0x56a4c8d3  bnel        $s5, $a0, . + 4 + (-0x372D << 2)
    ctx->pc = 0x279004u;
    {
        const bool branch_taken_0x279004 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x279004) {
            ctx->pc = 0x279008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279004u;
            // 0x279008: 0xaca018ec  sw          $zero, 0x18EC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 6380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B354u;
            return;
        }
    }
    ctx->pc = 0x27900Cu;
    // 0x27900c: 0xaea02890  sw          $zero, 0x2890($s5)
    ctx->pc = 0x27900cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10384), GPR_U32(ctx, 0));
    // 0x279010: 0x55a8c94f  bnel        $t5, $t0, . + 4 + (-0x36B1 << 2)
    ctx->pc = 0x279010u;
    {
        const bool branch_taken_0x279010 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 8));
        if (branch_taken_0x279010) {
            ctx->pc = 0x279014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279010u;
            // 0x279014: 0xa8a41b04  swl         $a0, 0x1B04($a1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6916); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B550u;
            return;
        }
    }
    ctx->pc = 0x279018u;
    // 0x279018: 0xaca418e4  sw          $a0, 0x18E4($a1)
    ctx->pc = 0x279018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6372), GPR_U32(ctx, 4));
    // 0x27901c: 0x56a4c83b  bnel        $s5, $a0, . + 4 + (-0x37C5 << 2)
    ctx->pc = 0x27901Cu;
    {
        const bool branch_taken_0x27901c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x27901c) {
            ctx->pc = 0x279020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27901Cu;
            // 0x279020: 0xaca018e4  sw          $zero, 0x18E4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 6372), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B10Cu;
            return;
        }
    }
    ctx->pc = 0x279024u;
    // 0x279024: 0xaca418e8  sw          $a0, 0x18E8($a1)
    ctx->pc = 0x279024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6376), GPR_U32(ctx, 4));
    // 0x279028: 0x54a8c947  bnel        $a1, $t0, . + 4 + (-0x36B9 << 2)
    ctx->pc = 0x279028u;
    {
        const bool branch_taken_0x279028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x279028) {
            ctx->pc = 0x27902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279028u;
            // 0x27902c: 0xaca018e8  sw          $zero, 0x18E8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 6376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B548u;
            return;
        }
    }
    ctx->pc = 0x279030u;
    // 0x279030: 0x56a4c807  bnel        $s5, $a0, . + 4 + (-0x37F9 << 2)
    ctx->pc = 0x279030u;
    {
        const bool branch_taken_0x279030 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x279030) {
            ctx->pc = 0x279034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279030u;
            // 0x279034: 0xa8a01b04  swl         $zero, 0x1B04($a1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6916); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B050u;
            return;
        }
    }
    ctx->pc = 0x279038u;
    // 0x279038: 0xa8a41b08  swl         $a0, 0x1B08($a1)
    ctx->pc = 0x279038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6920); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27903c: 0xa8a01b08  swl         $zero, 0x1B08($a1)
    ctx->pc = 0x27903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 6920); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279040: 0x56a5c81b  bnel        $s5, $a1, . + 4 + (-0x37E5 << 2)
    ctx->pc = 0x279040u;
    {
        const bool branch_taken_0x279040 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        if (branch_taken_0x279040) {
            ctx->pc = 0x279044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279040u;
            // 0x279044: 0x566bf513  bnel        $s3, $t3, . + 4 + (-0xAED << 2) (Delay Slot)
            // Likely branch instruction at 0x279044 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B0B0u;
            return;
        }
    }
    ctx->pc = 0x279048u;
    // 0x279048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x279048u;
    {
        const bool branch_taken_0x279048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279048) {
            ctx->pc = 0x279078u;
            goto label_279078;
        }
    }
    ctx->pc = 0x279050u;
    // 0x279050: 0x8dacecc5  lw          $t4, -0x133B($t5)
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294962373)));
    // 0x279054: 0x27925df8  addiu       $s2, $gp, 0x5DF8
    ctx->pc = 0x279054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 24056));
    // 0x279058: 0xca23bdf  jal         func_288EF7C
    ctx->pc = 0x279058u;
    SET_GPR_U32(ctx, 31, 0x279060u);
    ctx->pc = 0x27905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279058u;
    // 0x27905c: 0x2af7020  add         $t6, $s5, $t7 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288EF7Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EF7Cu, 0x279058u, 0x279060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279060u;
label_279060:
    // 0x279060: 0xc11413c  jal         func_4504F0
    ctx->pc = 0x279060u;
    SET_GPR_U32(ctx, 31, 0x279068u);
    ctx->pc = 0x279064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279060u;
    // 0x279064: 0x8fda9615  lw          $k0, -0x69EB($fp) (Delay Slot)
    SET_GPR_S32(ctx, 26, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294940181)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4504F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4504F0u, 0x279060u, 0x279068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279068u;
label_279068:
    // 0x279068: 0x893b5794  lwl         $k1, 0x5794($t1)
    ctx->pc = 0x279068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 22420); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x27906c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27906cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27906C raw=0x00000001");
    // 0x279070: 0x893b57c0  lwl         $k1, 0x57C0($t1)
    ctx->pc = 0x279070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 22464); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 27) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 27, (int32_t)merged); }
    // 0x279074: 0x0  nop
    ctx->pc = 0x279074u;
    // NOP
label_279078:
    // 0x279078: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x279078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27907c: 0x24429068  addiu       $v0, $v0, -0x6F98
    ctx->pc = 0x27907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938728));
    // 0x279080: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279084: 0x24849048  addiu       $a0, $a0, -0x6FB8
    ctx->pc = 0x279084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938696));
    // 0x279088: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x279088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27908c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27908cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279090: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x279090u;
    SET_GPR_U32(ctx, 31, 0x279098u);
    ctx->pc = 0x279094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279090u;
    // 0x279094: 0x8c470004  lw          $a3, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x279090u, 0x279098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279098u;
label_279098:
    // 0x279098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27909c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790a0: 0xc09e3b2  jal         func_278EC8
    ctx->pc = 0x2790A0u;
    SET_GPR_U32(ctx, 31, 0x2790A8u);
    ctx->pc = 0x2790A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790A0u;
    // 0x2790a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278EC8u, 0x2790A0u, 0x2790A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790A8u;
label_2790a8:
    // 0x2790a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2790A8u;
    {
        const bool branch_taken_0x2790a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790A8u;
        // 0x2790ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790a8) {
            ctx->pc = 0x279160u;
            goto label_279160;
        }
    }
    ctx->pc = 0x2790B0u;
label_2790b0:
    // 0x2790b0: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x2790b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2790b4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2790B4u;
    {
        const bool branch_taken_0x2790b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790B4u;
        // 0x2790b8: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790b4) {
            ctx->pc = 0x279188u;
            goto label_279188;
        }
    }
    ctx->pc = 0x2790BCu;
    // 0x2790bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2790bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2790c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2790c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2790c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2790c8: 0x8c639fc0  lw          $v1, -0x6040($v1)
    ctx->pc = 0x2790c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942656)));
    // 0x2790cc: 0x600008  jr          $v1
    ctx->pc = 0x2790CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2790D8u: goto label_2790d8;
            case 0x2790F0u: goto label_2790f0;
            case 0x279108u: goto label_279108;
            case 0x279128u: goto label_279128;
            case 0x279148u: goto label_279148;
            case 0x279170u: goto label_279170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2790CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2790D4u;
    // 0x2790d4: 0x0  nop
    ctx->pc = 0x2790d4u;
    // NOP
label_2790d8:
    // 0x2790d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2790d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790dc: 0xc09e222  jal         func_278888
    ctx->pc = 0x2790DCu;
    SET_GPR_U32(ctx, 31, 0x2790E4u);
    ctx->pc = 0x2790E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790DCu;
    // 0x2790e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278888u, 0x2790DCu, 0x2790E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790E4u;
label_2790e4:
    // 0x2790e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2790E4u;
    {
        const bool branch_taken_0x2790e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790E4u;
        // 0x2790e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790e4) {
            ctx->pc = 0x279160u;
            goto label_279160;
        }
    }
    ctx->pc = 0x2790ECu;
    // 0x2790ec: 0x0  nop
    ctx->pc = 0x2790ecu;
    // NOP
label_2790f0:
    // 0x2790f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2790f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790f4: 0xc09e244  jal         func_278910
    ctx->pc = 0x2790F4u;
    SET_GPR_U32(ctx, 31, 0x2790FCu);
    ctx->pc = 0x2790F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790F4u;
    // 0x2790f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278910u, 0x2790F4u, 0x2790FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790FCu;
label_2790fc:
    // 0x2790fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2790FCu;
    {
        const bool branch_taken_0x2790fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790FCu;
        // 0x279100: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790fc) {
            ctx->pc = 0x279160u;
            goto label_279160;
        }
    }
    ctx->pc = 0x279104u;
    // 0x279104: 0x0  nop
    ctx->pc = 0x279104u;
    // NOP
label_279108:
    // 0x279108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27910c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27910cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279110: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x279110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279114: 0xc09e288  jal         func_278A20
    ctx->pc = 0x279114u;
    SET_GPR_U32(ctx, 31, 0x27911Cu);
    ctx->pc = 0x279118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279114u;
    // 0x279118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278A20u, 0x279114u, 0x27911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27911Cu;
label_27911c:
    // 0x27911c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27911Cu;
    {
        const bool branch_taken_0x27911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27911Cu;
        // 0x279120: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27911c) {
            ctx->pc = 0x279160u;
            goto label_279160;
        }
    }
    ctx->pc = 0x279124u;
    // 0x279124: 0x0  nop
    ctx->pc = 0x279124u;
    // NOP
label_279128:
    // 0x279128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27912c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27912cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279130: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x279130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279134: 0xc09e2fa  jal         func_278BE8
    ctx->pc = 0x279134u;
    SET_GPR_U32(ctx, 31, 0x27913Cu);
    ctx->pc = 0x279138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279134u;
    // 0x279138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278BE8u, 0x279134u, 0x27913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27913Cu;
label_27913c:
    // 0x27913c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27913Cu;
    {
        const bool branch_taken_0x27913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27913Cu;
        // 0x279140: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27913c) {
            ctx->pc = 0x279160u;
            goto label_279160;
        }
    }
    ctx->pc = 0x279144u;
    // 0x279144: 0x0  nop
    ctx->pc = 0x279144u;
    // NOP
label_279148:
    // 0x279148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27914c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27914cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279150: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x279150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279154: 0xc09e370  jal         func_278DC0
    ctx->pc = 0x279154u;
    SET_GPR_U32(ctx, 31, 0x27915Cu);
    ctx->pc = 0x279158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279154u;
    // 0x279158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278DC0u, 0x279154u, 0x27915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27915Cu;
label_27915c:
    // 0x27915c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27915cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279160:
    // 0x279160: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x279160u;
    {
        const bool branch_taken_0x279160 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x279164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279160u;
        // 0x279164: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279160) {
            ctx->pc = 0x279188u;
            goto label_279188;
        }
    }
    ctx->pc = 0x279168u;
    // 0x279168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279168u;
    {
        const bool branch_taken_0x279168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279168u;
        // 0x27916c: 0x26c32d78  addiu       $v1, $s6, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279168) {
            ctx->pc = 0x279178u;
            goto label_279178;
        }
    }
    ctx->pc = 0x279170u;
label_279170:
    // 0x279170: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x279170u;
    {
        const bool branch_taken_0x279170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279170u;
        // 0x279174: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279170) {
            ctx->pc = 0x279188u;
            goto label_279188;
        }
    }
    ctx->pc = 0x279178u;
label_279178:
    // 0x279178: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27917c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279180: 0x8c4206a4  lw          $v0, 0x6A4($v0)
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
    // 0x279184: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_279188:
    // 0x279188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x279188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27918c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27918cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x279190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279194: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x279194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279198: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x279198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27919c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x27919cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2791a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2791a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2791a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2791a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2791a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2791A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791A8u;
        // 0x2791ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791B0u;
}
