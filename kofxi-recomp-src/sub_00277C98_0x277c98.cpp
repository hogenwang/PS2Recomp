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

// Function: sub_00277C98
// Address: 0x277c98 - 0x277f18
void sub_00277C98_0x277c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277C98_0x277c98");
#endif

    switch (ctx->pc) {
        case 0x277cf4u: goto label_277cf4;
        case 0x277d10u: goto label_277d10;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d88u: goto label_277d88;
        case 0x277e50u: goto label_277e50;
        case 0x277eecu: goto label_277eec;
        default: break;
    }

    ctx->pc = 0x277c98u;

    // 0x277c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x277c9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277ca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ca4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x277ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277cb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x277cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x277cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x277cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277cbc: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x277cbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x277cc0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x277cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x277cc4: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x277cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x277cc8: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x277cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x277ccc: 0x24637d14  addiu       $v1, $v1, 0x7D14
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32020));
    // 0x277cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277cd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x277CD4u;
    {
        const bool branch_taken_0x277cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277cd4) {
            ctx->pc = 0x277CF4u;
            goto label_277cf4;
        }
    }
    ctx->pc = 0x277CDCu;
    // 0x277cdc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x277cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x277ce0: 0x24847d28  addiu       $a0, $a0, 0x7D28
    ctx->pc = 0x277ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32040));
    // 0x277ce4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x277ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x277ce8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x277ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x277cec: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x277CECu;
    SET_GPR_U32(ctx, 31, 0x277CF4u);
    ctx->pc = 0x277CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CECu;
    // 0x277cf0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x277CECu, 0x277CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CF4u;
label_277cf4:
    // 0x277cf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x277CF4u;
    {
        const bool branch_taken_0x277cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277cf4) {
            ctx->pc = 0x277D28u;
            goto label_277d28;
        }
    }
    ctx->pc = 0x277CFCu;
    // 0x277cfc: 0xa2732ce1  sb          $s3, 0x2CE1($s3)
    ctx->pc = 0x277cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11489), (uint8_t)GPR_U32(ctx, 19));
    // 0x277d00: 0x87152e63  lh          $s5, 0x2E63($t8)
    ctx->pc = 0x277d00u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 11875)));
    // 0x277d04: 0x2759820  add         $s3, $s3, $s5
    ctx->pc = 0x277d04u;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x277d08: 0xca7d91c  jal         func_29F6470
    ctx->pc = 0x277D08u;
    SET_GPR_U32(ctx, 31, 0x277D10u);
    ctx->pc = 0x277D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D08u;
    // 0x277d0c: 0xfdc2e712  sd          $v0, -0x18EE($t6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294960914), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F6470u, 0x277D08u, 0x277D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D10u;
label_277d10:
    // 0x277d10: 0xdf55917f  ld          $s5, -0x6E81($k0)
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 26), 4294939007)));
    // 0x277d14: 0x0  nop
    ctx->pc = 0x277d14u;
    // NOP
    // 0x277d18: 0xcf1ba594  pref        0x1B, -0x5A6C($t8)
    ctx->pc = 0x277d18u;
    // PREF instruction (ignored)
    // 0x277d1c: 0x980816d4  lwr         $t0, 0x16D4($zero)
    ctx->pc = 0x277d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5844); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x277d20: 0xcf1ba4e0  pref        0x1B, -0x5B20($t8)
    ctx->pc = 0x277d20u;
    // PREF instruction (ignored)
    // 0x277d24: 0x0  nop
    ctx->pc = 0x277d24u;
    // NOP
label_277d28:
    // 0x277d28: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x277d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x277d2c: 0x17d4a201  bne         $fp, $s4, . + 4 + (-0x5DFF << 2)
    ctx->pc = 0x277D2Cu;
    {
        const bool branch_taken_0x277d2c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 20));
        ctx->pc = 0x277D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D2Cu;
        // 0x277d30: 0x24532d78  addiu       $s3, $v0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d2c) {
            ctx->pc = 0x260534u;
            return;
        }
    }
    ctx->pc = 0x277D34u;
    // 0x277d34: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277d38: 0x90d4a2cd  lbu         $s4, -0x5D33($a2)
    ctx->pc = 0x277d38u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294943437)));
    // 0x277d3c: 0x38d4a4cd  xori        $s4, $a2, 0xA4CD
    ctx->pc = 0x277d3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)42189);
    // 0x277d40: 0x8c4a4cd  j           func_3129334
    ctx->pc = 0x277D40u;
    ctx->pc = 0x277D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D40u;
    // 0x277d44: 0xe8d478c5  swc2        $20, 0x78C5($a2) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277D44 raw=0xE8D478C5");
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129334u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3129334u, 0x277D40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x277D48u;
    // 0x277d48: 0x392af882  xori        $t2, $t1, 0xF882
    ctx->pc = 0x277d48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)63618);
    // 0x277d4c: 0x59d4a4d5  .word       0x59D4A4D5                   # blezl       $t6, . + 4 + (-0x5B2B << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277D4Cu;
    {
        const bool branch_taken_0x277d4c = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x277d4c) {
            ctx->pc = 0x277D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277D4Cu;
            // 0x277d50: 0xab542489  swl         $s4, 0x2489($k0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 26), 9353); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2610A4u;
            return;
        }
    }
    ctx->pc = 0x277D54u;
    // 0x277d54: 0xc043320  jal         func_10CC80
    ctx->pc = 0x277D54u;
    SET_GPR_U32(ctx, 31, 0x277D5Cu);
    ctx->pc = 0x277D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D54u;
    // 0x277d58: 0x9bcfe2d5  lwr         $t7, -0x1D2B($fp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294959829); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x277D54u, 0x277D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D5Cu;
label_277d5c:
    // 0x277d5c: 0x59d4a4cd  .word       0x59D4A4CD                   # blezl       $t6, . + 4 + (-0x5B33 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277D5Cu;
    {
        const bool branch_taken_0x277d5c = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x277d5c) {
            ctx->pc = 0x277D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277D5Cu;
            // 0x277d60: 0xa8942489  swl         $s4, 0x2489($a0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 4), 9353); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x261094u;
            return;
        }
    }
    ctx->pc = 0x277D64u;
    // 0x277d64: 0x98c8d2cd  lwr         $t0, -0x2D33($a2)
    ctx->pc = 0x277d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294955725); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x277d68: 0x97d4a255  lhu         $s4, -0x5DAB($fp)
    ctx->pc = 0x277d68u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294943317)));
    // 0x277d6c: 0xa83484c6  swl         $s4, -0x7B3A($at)
    ctx->pc = 0x277d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294935750); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277d70: 0x39d4a4d1  xori        $s4, $t6, 0xA4D1
    ctx->pc = 0x277d70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)42193);
    // 0x277d74: 0x59d4a4d5  .word       0x59D4A4D5                   # blezl       $t6, . + 4 + (-0x5B2B << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277D74u;
    {
        const bool branch_taken_0x277d74 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x277d74) {
            ctx->pc = 0x277D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277D74u;
            // 0x277d78: 0xab542489  swl         $s4, 0x2489($k0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 26), 9353); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2610CCu;
            return;
        }
    }
    ctx->pc = 0x277D7Cu;
    // 0x277d7c: 0x9bcfe2d5  lwr         $t7, -0x1D2B($fp)
    ctx->pc = 0x277d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294959829); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    // 0x277d80: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x277D80u;
    SET_GPR_U32(ctx, 31, 0x277D88u);
    ctx->pc = 0x277D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D80u;
    // 0x277d84: 0xa8f414c7  swl         $s4, 0x14C7($a3) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 5319); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x277D80u, 0x277D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D88u;
label_277d88:
    // 0x277d88: 0xb1d43445  sdl         $s4, 0x3445($t6)
    ctx->pc = 0x277d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 13381); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277d8c: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277d90: 0x90d4a2cd  lbu         $s4, -0x5D33($a2)
    ctx->pc = 0x277d90u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294943437)));
    // 0x277d94: 0x38d4a4cd  xori        $s4, $a2, 0xA4CD
    ctx->pc = 0x277d94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)42189);
    // 0x277d98: 0x10d4a2cd  beq         $a2, $s4, . + 4 + (-0x5D33 << 2)
    ctx->pc = 0x277D98u;
    {
        const bool branch_taken_0x277d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 20));
        ctx->pc = 0x277D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D98u;
        // 0x277d9c: 0xa1d4a2c9  sb          $s4, -0x5D37($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 4294943433), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d98) {
            ctx->pc = 0x2608D0u;
            return;
        }
    }
    ctx->pc = 0x277DA0u;
    // 0x277da0: 0xe8d4c445  swc2        $20, -0x3BBB($a2)
    ctx->pc = 0x277da0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277DA0 raw=0xE8D4C445");
    // 0x277da4: 0xa93414c5  swl         $s4, 0x14C5($t1)
    ctx->pc = 0x277da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 5317); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277da8: 0x97d4a251  lhu         $s4, -0x5DAF($fp)
    ctx->pc = 0x277da8u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294943313)));
    // 0x277dac: 0xabd4a24d  swl         $s4, -0x5DB3($fp)
    ctx->pc = 0x277dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294943309); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277db0: 0xe8d49cc9  swc2        $20, -0x6337($a2)
    ctx->pc = 0x277db0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277DB0 raw=0xE8D49CC9");
    // 0x277db4: 0xabd41444  swl         $s4, 0x1444($fp)
    ctx->pc = 0x277db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 5188); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277db8: 0xab141445  swl         $s4, 0x1445($t8)
    ctx->pc = 0x277db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 5189); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dbc: 0x3ad4a459  xori        $s4, $s6, 0xA459
    ctx->pc = 0x277dbcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)42073);
    // 0x277dc0: 0xa15424d9  sb          $s4, 0x24D9($t2)
    ctx->pc = 0x277dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9433), (uint8_t)GPR_U32(ctx, 20));
    // 0x277dc4: 0xabd4a2c9  swl         $s4, -0x5D37($fp)
    ctx->pc = 0x277dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294943433); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dc8: 0xe8d4f545  swc2        $20, -0xABB($a2)
    ctx->pc = 0x277dc8u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277DC8 raw=0xE8D4F545");
    // 0x277dcc: 0xabf41447  swl         $s4, 0x1447($ra)
    ctx->pc = 0x277dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 5191); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dd0: 0xaad4a2cd  swl         $s4, -0x5D33($s6)
    ctx->pc = 0x277dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294943437); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dd4: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dd8: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277ddc: 0xf82b41ca  sqc2        $vf11, 0x41CA($at)
    ctx->pc = 0x277ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 16842), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x277de0: 0x3ad4a459  xori        $s4, $s6, 0xA459
    ctx->pc = 0x277de0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)42073);
    // 0x277de4: 0xe9d4b0c5  swc2        $20, -0x4F3B($t6)
    ctx->pc = 0x277de4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277DE4 raw=0xE9D4B0C5");
    // 0x277de8: 0xabd4a2cd  swl         $s4, -0x5D33($fp)
    ctx->pc = 0x277de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294943437); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277dec: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277df0: 0xa15414c5  sb          $s4, 0x14C5($t2)
    ctx->pc = 0x277df0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5317), (uint8_t)GPR_U32(ctx, 20));
    // 0x277df4: 0xabd4a2cd  swl         $s4, -0x5D33($fp)
    ctx->pc = 0x277df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294943437); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277df8: 0xf8d4bdc5  sqc2        $vf20, -0x423B($a2)
    ctx->pc = 0x277df8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294950341), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x277dfc: 0x3dd4a4d1  .word       0x3DD4A4D1                   # lui         $s4, 0xA4D1 # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42193 << 16));
    // 0x277e00: 0xe9d4bcc5  swc2        $20, -0x433B($t6)
    ctx->pc = 0x277e00u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277E00 raw=0xE9D4BCC5");
    // 0x277e04: 0xabf41447  swl         $s4, 0x1447($ra)
    ctx->pc = 0x277e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 5191); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e08: 0x97d4a251  lhu         $s4, -0x5DAF($fp)
    ctx->pc = 0x277e08u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294943313)));
    // 0x277e0c: 0xe9d4b0c5  swc2        $20, -0x4F3B($t6)
    ctx->pc = 0x277e0cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277E0C raw=0xE9D4B0C5");
    // 0x277e10: 0xabf41447  swl         $s4, 0x1447($ra)
    ctx->pc = 0x277e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 5191); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e14: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e18: 0xe92bbcc6  swc2        $11, -0x433A($t1)
    ctx->pc = 0x277e18u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x277E18 raw=0xE92BBCC6");
    // 0x277e1c: 0x17d4a251  bne         $fp, $s4, . + 4 + (-0x5DAF << 2)
    ctx->pc = 0x277E1Cu;
    {
        const bool branch_taken_0x277e1c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 20));
        ctx->pc = 0x277E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E1Cu;
        // 0x277e20: 0x59ef5cc0  .word       0x59EF5CC0                   # blezl       $t7, . + 4 + (0x5CC0 << 2) # 000F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x277E20 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e1c) {
            ctx->pc = 0x260764u;
            return;
        }
    }
    ctx->pc = 0x277E24u;
    // 0x277e24: 0x792b5c42  lq          $t3, 0x5C42($t1)
    ctx->pc = 0x277e24u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 9), 23618)));
    // 0x277e28: 0xbb14a1c3  swr         $s4, -0x5E3D($t8)
    ctx->pc = 0x277e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294943171); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e2c: 0xa7b41447  sh          $s4, 0x1447($sp)
    ctx->pc = 0x277e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 5191), (uint16_t)GPR_U32(ctx, 20));
    // 0x277e30: 0x59daa0c0  .word       0x59DAA0C0                   # blezl       $t6, . + 4 + (-0x5F40 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277E30u;
    {
        const bool branch_taken_0x277e30 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x277e30) {
            ctx->pc = 0x277E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277E30u;
            // 0x277e34: 0xbb74a1c3  swr         $s4, -0x5E3D($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294943171); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x260134u;
            return;
        }
    }
    ctx->pc = 0x277E38u;
    // 0x277e38: 0xa9d414c7  swl         $s4, 0x14C7($t6)
    ctx->pc = 0x277e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 5319); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e3c: 0x59e8a0c0  .word       0x59E8A0C0                   # blezl       $t7, . + 4 + (-0x5F40 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277E3Cu;
    {
        const bool branch_taken_0x277e3c = (GPR_S32(ctx, 15) <= 0);
        if (branch_taken_0x277e3c) {
            ctx->pc = 0x277E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277E3Cu;
            // 0x277e40: 0xbb54a1c3  swr         $s4, -0x5E3D($k0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294943171); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x260140u;
            return;
        }
    }
    ctx->pc = 0x277E44u;
    // 0x277e44: 0x59d4a08f  .word       0x59D4A08F                   # blezl       $t6, . + 4 + (-0x5F71 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277E44u;
    {
        const bool branch_taken_0x277e44 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x277e44) {
            ctx->pc = 0x277E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277E44u;
            // 0x277e48: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
            // JAL 0x2DF1D8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x260084u;
            return;
        }
    }
    ctx->pc = 0x277E4Cu;
    // 0x277e4c: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_277e50:
    // 0x277e50: 0xbbd4a1cd  swr         $s4, -0x5E33($fp)
    ctx->pc = 0x277e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294943181); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e54: 0xb3d421c5  sdl         $s4, 0x21C5($fp)
    ctx->pc = 0x277e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8645); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e58: 0xa0542405  sb          $s4, 0x2405($v0)
    ctx->pc = 0x277e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9221), (uint8_t)GPR_U32(ctx, 20));
    // 0x277e5c: 0x31d4a485  andi        $s4, $t6, 0xA485
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)42117);
    // 0x277e60: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e64: 0xa9d4a0c5  swl         $s4, -0x5F3B($t6)
    ctx->pc = 0x277e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942917); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e68: 0xb1d4ad9d  sdl         $s4, -0x5263($t6)
    ctx->pc = 0x277e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294946205); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e6c: 0xb1d4a991  sdl         $s4, -0x566F($t6)
    ctx->pc = 0x277e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294945169); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e70: 0xb15479c7  sdl         $s4, 0x79C7($t2)
    ctx->pc = 0x277e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e74: 0xb1d531c5  sdl         $s5, 0x31C5($t6)
    ctx->pc = 0x277e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 12741); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e78: 0xb9f4a1cd  swr         $s4, -0x5E33($t7)
    ctx->pc = 0x277e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294943181); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e7c: 0xbdd4b5c5  cache       0x14, -0x4A3B($t6)
    ctx->pc = 0x277e7cu;
    // CACHE instruction (ignored)
    // 0x277e80: 0x11d4b0c9  beq         $t6, $s4, . + 4 + (-0x4F37 << 2)
    ctx->pc = 0x277E80u;
    {
        const bool branch_taken_0x277e80 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 20));
        ctx->pc = 0x277E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E80u;
        // 0x277e84: 0xb1d4a595  sdl         $s4, -0x5A6B($t6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294944149); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e80) {
            ctx->pc = 0x2641A8u;
            return;
        }
    }
    ctx->pc = 0x277E88u;
    // 0x277e88: 0xb1d531c5  sdl         $s5, 0x31C5($t6)
    ctx->pc = 0x277e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 12741); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277e8c: 0xb9f4a1cd  swr         $s4, -0x5E33($t7)
    ctx->pc = 0x277e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294943181); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e90: 0xa894348d  swl         $s4, 0x348D($a0)
    ctx->pc = 0x277e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 13453); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e94: 0xf82b1046  sqc2        $vf11, 0x1046($at)
    ctx->pc = 0x277e94u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4166), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x277e98: 0x2bd4a2cd  slti        $s4, $fp, -0x5D33
    ctx->pc = 0x277e98u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294943437) ? 1 : 0);
    // 0x277e9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x277E9Cu;
    {
        const bool branch_taken_0x277e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277e9c) {
            ctx->pc = 0x277ECCu;
            goto label_277ecc;
        }
    }
    ctx->pc = 0x277EA4u;
    // 0x277ea4: 0x8cec885d  lw          $t4, -0x77A3($a3)
    ctx->pc = 0x277ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936669)));
    // 0x277ea8: 0xde12a7a7  ld          $s2, -0x5859($s0)
    ctx->pc = 0x277ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 16), 4294944679)));
    // 0x277eac: 0xde4c882f  ld          $t4, -0x77D1($s2)
    ctx->pc = 0x277eacu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 18), 4294936623)));
    // 0x277eb0: 0x8e5692b5  lw          $s6, -0x6D4B($s2)
    ctx->pc = 0x277eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939317)));
    // 0x277eb4: 0xa2541431  sb          $s4, 0x1431($s2)
    ctx->pc = 0x277eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5169), (uint8_t)GPR_U32(ctx, 20));
    // 0x277eb8: 0x8f1fe6a5  lw          $ra, -0x195B($t8)
    ctx->pc = 0x277eb8u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294960805)));
    // 0x277ebc: 0xcf1b495a  pref        0x1B, 0x495A($t8)
    ctx->pc = 0x277ebcu;
    // PREF instruction (ignored)
    // 0x277ec0: 0x980816d5  lwr         $t0, 0x16D5($zero)
    ctx->pc = 0x277ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5845); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x277ec4: 0xcf1b482e  pref        0x1B, 0x482E($t8)
    ctx->pc = 0x277ec4u;
    // PREF instruction (ignored)
    // 0x277ec8: 0x0  nop
    ctx->pc = 0x277ec8u;
    // NOP
label_277ecc:
    // 0x277ecc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x277ed0: 0x24427ebc  addiu       $v0, $v0, 0x7EBC
    ctx->pc = 0x277ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32444));
    // 0x277ed4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x277ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x277ed8: 0x24847e9c  addiu       $a0, $a0, 0x7E9C
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32412));
    // 0x277edc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x277edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277ee0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x277ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x277ee4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x277EE4u;
    SET_GPR_U32(ctx, 31, 0x277EECu);
    ctx->pc = 0x277EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EE4u;
    // 0x277ee8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x277EE4u, 0x277EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EECu;
label_277eec:
    // 0x277eec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x277eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ef0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ef4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277ef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277efc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x277efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277f00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277f04: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x277f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277f08: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x277f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x277f0c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x277f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277f10: 0x3e00008  jr          $ra
    ctx->pc = 0x277F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F10u;
        // 0x277f14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F18u;
}
