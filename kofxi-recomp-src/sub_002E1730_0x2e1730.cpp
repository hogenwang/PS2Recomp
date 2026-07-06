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

// Function: sub_002E1730
// Address: 0x2e1730 - 0x2e1a00
void sub_002E1730_0x2e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1730_0x2e1730");
#endif

    switch (ctx->pc) {
        case 0x2e1794u: goto label_2e1794;
        case 0x2e17a8u: goto label_2e17a8;
        case 0x2e17e4u: goto label_2e17e4;
        case 0x2e17e8u: goto label_2e17e8;
        case 0x2e180cu: goto label_2e180c;
        case 0x2e1810u: goto label_2e1810;
        case 0x2e1830u: goto label_2e1830;
        case 0x2e1854u: goto label_2e1854;
        case 0x2e1858u: goto label_2e1858;
        case 0x2e1870u: goto label_2e1870;
        case 0x2e1890u: goto label_2e1890;
        case 0x2e18b8u: goto label_2e18b8;
        case 0x2e1930u: goto label_2e1930;
        case 0x2e19a0u: goto label_2e19a0;
        case 0x2e19ccu: goto label_2e19cc;
        default: break;
    }

    ctx->pc = 0x2e1730u;

    // 0x2e1730: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e1734: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e1738: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e1738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e173c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2e1740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1744: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e1744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e1748: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e174c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2e1750: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e1750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1754: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e1754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e1758: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2e1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2e175c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2e175cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e1760: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2e1760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e1764: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2e1764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e1768: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e176c: 0x246317b4  addiu       $v1, $v1, 0x17B4
    ctx->pc = 0x2e176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6068));
    // 0x2e1770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1774: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1774u;
    {
        const bool branch_taken_0x2e1774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1774) {
            ctx->pc = 0x2E1794u;
            goto label_2e1794;
        }
    }
    ctx->pc = 0x2E177Cu;
    // 0x2e177c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e177cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e1780: 0x248417c8  addiu       $a0, $a0, 0x17C8
    ctx->pc = 0x2e1780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6088));
    // 0x2e1784: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e1784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1788: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e1788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e178c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E178Cu;
    SET_GPR_U32(ctx, 31, 0x2E1794u);
    ctx->pc = 0x2E1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E178Cu;
    // 0x2e1790: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E178Cu, 0x2E1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1794u;
label_2e1794:
    // 0x2e1794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E1794u;
    {
        const bool branch_taken_0x2e1794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1794) {
            ctx->pc = 0x2E17C8u;
            goto label_2e17c8;
        }
    }
    ctx->pc = 0x2E179Cu;
    // 0x2e179c: 0x8f315cbd  lw          $s1, 0x5CBD($t9)
    ctx->pc = 0x2e179cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 23741)));
    // 0x2e17a0: 0xc6c158c  jal         func_1B05630
    ctx->pc = 0x2E17A0u;
    SET_GPR_U32(ctx, 31, 0x2E17A8u);
    ctx->pc = 0x2E17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17A0u;
    // 0x2e17a4: 0xdd362f67  ld          $s6, 0x2F67($t1) (Delay Slot)
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 9), 12135)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B05630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05630u, 0x2E17A0u, 0x2E17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17A8u;
label_2e17a8:
    // 0x2e17a8: 0x87d87c43  lh          $t8, 0x7C43($fp)
    ctx->pc = 0x2e17a8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 31811)));
    // 0x2e17ac: 0x1442820  add         $a1, $t2, $a0
    ctx->pc = 0x2e17acu;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2e17b0: 0x27d6020  add         $t4, $s3, $sp
    ctx->pc = 0x2e17b0u;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x2e17b4: 0x0  nop
    ctx->pc = 0x2e17b4u;
    // NOP
    // 0x2e17b8: 0xcd8cd258  pref        0x0C, -0x2DA8($t4)
    ctx->pc = 0x2e17b8u;
    // PREF instruction (ignored)
    // 0x2e17bc: 0xca0c87c2  lwc2        $12, -0x783E($s0)
    ctx->pc = 0x2e17bcu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E17BC raw=0xCA0C87C2");
    // 0x2e17c0: 0xcd8cd3ec  pref        0x0C, -0x2C14($t4)
    ctx->pc = 0x2e17c0u;
    // PREF instruction (ignored)
    // 0x2e17c4: 0x0  nop
    ctx->pc = 0x2e17c4u;
    // NOP
label_2e17c8:
    // 0x2e17c8: 0x5c33f534  .word       0x5C33F534                   # bgtzl       $at, . + 4 + (-0xACC << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E17C8u;
    {
        const bool branch_taken_0x2e17c8 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e17c8) {
            ctx->pc = 0x2E17CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E17C8u;
            // 0x2e17cc: 0x8f27f3a7  lw          $a3, -0xC59($t9) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294964135)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC9Cu;
            return;
        }
    }
    ctx->pc = 0x2E17D0u;
    // 0x2e17d0: 0x5eaff335  .word       0x5EAFF335                   # bgtzl       $s5, . + 4 + (-0xCCB << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E17D0u;
    {
        const bool branch_taken_0x2e17d0 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2e17d0) {
            ctx->pc = 0x2E17D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E17D0u;
            // 0x2e17d4: 0x3eb7f334  .word       0x3EB7F334                   # lui         $s7, 0xF334 # 02A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62260 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE4A8u;
            return;
        }
    }
    ctx->pc = 0x2E17D8u;
    // 0x2e17d8: 0x7da7e3fc  sq          $a3, -0x1C04($t5)
    ctx->pc = 0x2e17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294960124), GPR_VEC(ctx, 7));
    // 0x2e17dc: 0xea7e326  jal         func_A9F8C98
    ctx->pc = 0x2E17DCu;
    SET_GPR_U32(ctx, 31, 0x2E17E4u);
    ctx->pc = 0x2E17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17DCu;
    // 0x2e17e0: 0xd27e1a2  jal         func_49F8688 (Delay Slot)
    // JAL 0x49F8688 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA9F8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA9F8C98u, 0x2E17DCu, 0x2E17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17E4u;
label_2e17e4:
    // 0x2e17e4: 0x7c581ebe  sq          $t8, 0x1EBE($v0)
    ctx->pc = 0x2e17e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7870), GPR_VEC(ctx, 24));
label_2e17e8:
    // 0x2e17e8: 0x1da7e3e4  .word       0x1DA7E3E4                   # bgtz        $t5, . + 4 + (-0x1C1C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E17E8u;
    {
        const bool branch_taken_0x2e17e8 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x2E17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17E8u;
        // 0x2e17ec: 0x8fa7f1a7  lw          $a3, -0xE59($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294963623)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17e8) {
            ctx->pc = 0x2DA77Cu;
            return;
        }
    }
    ctx->pc = 0x2E17F0u;
    // 0x2e17f0: 0x5f27e1a7  .word       0x5F27E1A7                   # bgtzl       $t9, . + 4 + (-0x1E59 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E17F0u;
    {
        const bool branch_taken_0x2e17f0 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2e17f0) {
            ctx->pc = 0x2E17F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E17F0u;
            // 0x2e17f4: 0x5c33f534  .word       0x5C33F534                   # bgtzl       $at, . + 4 + (-0xACC << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E17F4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9E90u;
            return;
        }
    }
    ctx->pc = 0x2E17F8u;
    // 0x2e17f8: 0x3eaff334  .word       0x3EAFF334                   # lui         $t7, 0xF334 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62260 << 16));
    // 0x2e17fc: 0x2eb7f334  sltiu       $s7, $s5, -0xCCC
    ctx->pc = 0x2e17fcu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4294964020) ? 1 : 0);
    // 0x2e1800: 0x7da7e3fc  sq          $a3, -0x1C04($t5)
    ctx->pc = 0x2e1800u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294960124), GPR_VEC(ctx, 7));
    // 0x2e1804: 0xea7e326  jal         func_A9F8C98
    ctx->pc = 0x2E1804u;
    SET_GPR_U32(ctx, 31, 0x2E180Cu);
    ctx->pc = 0x2E1808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1804u;
    // 0x2e1808: 0xd27e1a2  jal         func_49F8688 (Delay Slot)
    // JAL 0x49F8688 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA9F8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA9F8C98u, 0x2E1804u, 0x2E180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E180Cu;
label_2e180c:
    // 0x2e180c: 0x7c581ebe  sq          $t8, 0x1EBE($v0)
    ctx->pc = 0x2e180cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7870), GPR_VEC(ctx, 24));
label_2e1810:
    // 0x2e1810: 0x1da7e3e4  .word       0x1DA7E3E4                   # bgtz        $t5, . + 4 + (-0x1C1C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1810u;
    {
        const bool branch_taken_0x2e1810 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x2E1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1810u;
        // 0x2e1814: 0x5f27effd  .word       0x5F27EFFD                   # bgtzl       $t9, . + 4 + (-0x1003 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E1814 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1810) {
            ctx->pc = 0x2DA7A4u;
            return;
        }
    }
    ctx->pc = 0x2E1818u;
    // 0x2e1818: 0x4c37f535  .word       0x4C37F535                   # INVALID     $at, $s7, -0xACB # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1818u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E1818 raw=0x4C37F535");
    // 0x2e181c: 0x8fa7f3f3  lw          $a3, -0xC0D($sp)
    ctx->pc = 0x2e181cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294964211)));
    // 0x2e1820: 0x7c33f535  sq          $s3, -0xACB($at)
    ctx->pc = 0x2e1820u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294964533), GPR_VEC(ctx, 19));
    // 0x2e1824: 0x8827f1f3  lwl         $a3, -0xE0D($at)
    ctx->pc = 0x2e1824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294963699); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2e1828: 0xc0b881a  jal         func_2E2068
    ctx->pc = 0x2E1828u;
    SET_GPR_U32(ctx, 31, 0x2E1830u);
    ctx->pc = 0x2E182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1828u;
    // 0x2e182c: 0x8c03f535  lw          $v1, -0xACB($zero) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 0), 4294964533)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2068u, 0x2E1828u, 0x2E1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1830u;
label_2e1830:
    // 0x2e1830: 0x5f27e7a7  .word       0x5F27E7A7                   # bgtzl       $t9, . + 4 + (-0x1859 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1830u;
    {
        const bool branch_taken_0x2e1830 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2e1830) {
            ctx->pc = 0x2E1834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1830u;
            // 0x2e1834: 0x84a7eba7  lh          $a3, -0x1459($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294962087)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB6D0u;
            return;
        }
    }
    ctx->pc = 0x2E1838u;
    // 0x2e1838: 0x5c33f534  .word       0x5C33F534                   # bgtzl       $at, . + 4 + (-0xACC << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1838u;
    {
        const bool branch_taken_0x2e1838 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e1838) {
            ctx->pc = 0x2E183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1838u;
            // 0x2e183c: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E183C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DED0Cu;
            return;
        }
    }
    ctx->pc = 0x2E1840u;
    // 0x2e1840: 0x3eaff334  .word       0x3EAFF334                   # lui         $t7, 0xF334 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1840u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62260 << 16));
    // 0x2e1844: 0x4eb7f335  .word       0x4EB7F335                   # INVALID     $s5, $s7, -0xCCB # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1844u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E1844 raw=0x4EB7F335");
    // 0x2e1848: 0x7da7e3fc  sq          $a3, -0x1C04($t5)
    ctx->pc = 0x2e1848u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294960124), GPR_VEC(ctx, 7));
    // 0x2e184c: 0xea7e326  jal         func_A9F8C98
    ctx->pc = 0x2E184Cu;
    SET_GPR_U32(ctx, 31, 0x2E1854u);
    ctx->pc = 0x2E1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E184Cu;
    // 0x2e1850: 0xd27eba2  jal         func_49FAE88 (Delay Slot)
    // JAL 0x49FAE88 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA9F8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA9F8C98u, 0x2E184Cu, 0x2E1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1854u;
label_2e1854:
    // 0x2e1854: 0x7c581ebe  sq          $t8, 0x1EBE($v0)
    ctx->pc = 0x2e1854u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7870), GPR_VEC(ctx, 24));
label_2e1858:
    // 0x2e1858: 0x1da7e3e4  .word       0x1DA7E3E4                   # bgtz        $t5, . + 4 + (-0x1C1C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1858u;
    {
        const bool branch_taken_0x2e1858 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x2E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1858u;
        // 0x2e185c: 0x6c3ff535  ldr         $ra, -0xACB($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294964533); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1858) {
            ctx->pc = 0x2DA7ECu;
            return;
        }
    }
    ctx->pc = 0x2E1860u;
    // 0x2e1860: 0x8c37f535  lw          $s7, -0xACB($at)
    ctx->pc = 0x2e1860u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964533)));
    // 0x2e1864: 0x4c33f535  .word       0x4C33F535                   # INVALID     $at, $s3, -0xACB # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1864u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E1864 raw=0x4C33F535");
    // 0x2e1868: 0xc0b8586  jal         func_2E1618
    ctx->pc = 0x2E1868u;
    SET_GPR_U32(ctx, 31, 0x2E1870u);
    ctx->pc = 0x2E186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1868u;
    // 0x2e186c: 0x56581c26  bnel        $s2, $t8, . + 4 + (0x1C26 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E186C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1618u, 0x2E1868u, 0x2E1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1870u;
label_2e1870:
    // 0x2e1870: 0x5da7e326  .word       0x5DA7E326                   # bgtzl       $t5, . + 4 + (-0x1CDA << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1870u;
    {
        const bool branch_taken_0x2e1870 = (GPR_S32(ctx, 13) > 0);
        if (branch_taken_0x2e1870) {
            ctx->pc = 0x2E1874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1870u;
            // 0x2e1874: 0x7d27e3a0  sq          $a3, -0x1C60($t1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 9), 4294960032), GPR_VEC(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA50Cu;
            return;
        }
    }
    ctx->pc = 0x2E1878u;
    // 0x2e1878: 0x8c27f3e3  lw          $a3, -0xC1D($at)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964195)));
    // 0x2e187c: 0x8c27f1e3  lw          $a3, -0xE1D($at)
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963683)));
    // 0x2e1880: 0x6d77e6b4  ldr         $s7, -0x194C($t3)
    ctx->pc = 0x2e1880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294960820); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2e1884: 0x5c809c2a  bgtzl       $a0, . + 4 + (-0x63D6 << 2)
    ctx->pc = 0x2E1884u;
    {
        const bool branch_taken_0x2e1884 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2e1884) {
            ctx->pc = 0x2E1888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1884u;
            // 0x2e1888: 0x4cd81c2e  .word       0x4CD81C2E                   # INVALID     $a2, $t8, 0x1C2E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E1888 raw=0x4CD81C2E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8930u;
            return;
        }
    }
    ctx->pc = 0x2E188Cu;
    // 0x2e188c: 0x1cffe396  .word       0x1CFFE396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
label_2e1890:
    if (ctx->pc == 0x2E1890u) {
        ctx->pc = 0x2E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E188Cu;
        // 0x2e1890: 0x8c6bf535  lw          $t3, -0xACB($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964533)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1894u;
        goto label_fallthrough_0x2e188c;
    }
    ctx->pc = 0x2E188Cu;
    {
        const bool branch_taken_0x2e188c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E188Cu;
        // 0x2e1890: 0x8c6bf535  lw          $t3, -0xACB($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964533)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e188c) {
            ctx->pc = 0x2DA6E8u;
            return;
        }
    }
label_fallthrough_0x2e188c:
    ctx->pc = 0x2E1894u;
    // 0x2e1894: 0x5c8623aa  .word       0x5C8623AA                   # bgtzl       $a0, . + 4 + (0x23AA << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1894u;
    {
        const bool branch_taken_0x2e1894 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2e1894) {
            ctx->pc = 0x2E1898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1894u;
            // 0x2e1898: 0x1cf3e396  .word       0x1CF3E396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1898 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA740u;
            return;
        }
    }
    ctx->pc = 0x2E189Cu;
    // 0x2e189c: 0x5c67f534  .word       0x5C67F534                   # bgtzl       $v1, . + 4 + (-0xACC << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E189Cu;
    {
        const bool branch_taken_0x2e189c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e189c) {
            ctx->pc = 0x2E18A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E189Cu;
            // 0x2e18a0: 0x5c8063aa  bgtzl       $a0, . + 4 + (0x63AA << 2) (Delay Slot)
            // Likely branch instruction at 0x2E18A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DED70u;
            return;
        }
    }
    ctx->pc = 0x2E18A4u;
    // 0x2e18a4: 0x1cf7e396  .word       0x1CF7E396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18A4u;
    {
        const bool branch_taken_0x2e18a4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18A4u;
        // 0x2e18a8: 0x5567e3aa  bnel        $t3, $a3, . + 4 + (-0x1C56 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E18A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18a4) {
            ctx->pc = 0x2DA700u;
            return;
        }
    }
    ctx->pc = 0x2E18ACu;
    // 0x2e18ac: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18ACu;
    {
        const bool branch_taken_0x2e18ac = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e18ac) {
            ctx->pc = 0x2E18B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18ACu;
            // 0x2e18b0: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
            // JAL 0x2DF1D8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA780u;
            return;
        }
    }
    ctx->pc = 0x2E18B4u;
    // 0x2e18b4: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_2e18b8:
    if (ctx->pc == 0x2E18B8u) {
        ctx->pc = 0x2E18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18B4u;
        // 0x2e18b8: 0x1d27e396  .word       0x1D27E396                   # bgtz        $t1, . + 4 + (-0x1C6A << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E18B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E18BCu;
        goto label_fallthrough_0x2e18b4;
    }
    ctx->pc = 0x2E18B4u;
    {
        const bool branch_taken_0x2e18b4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e18b4) {
            ctx->pc = 0x2E18B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18B4u;
            // 0x2e18b8: 0x1d27e396  .word       0x1D27E396                   # bgtz        $t1, . + 4 + (-0x1C6A << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E18B8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA788u;
            return;
        }
    }
label_fallthrough_0x2e18b4:
    ctx->pc = 0x2E18BCu;
    // 0x2e18bc: 0x1c27f397  .word       0x1C27F397                   # bgtz        $at, . + 4 + (-0xC69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18BCu;
    {
        const bool branch_taken_0x2e18bc = (GPR_S32(ctx, 1) > 0);
        ctx->pc = 0x2E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18BCu;
        // 0x2e18c0: 0x6437f335  daddiu      $s7, $at, -0xCCB (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)4294964021);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18bc) {
            ctx->pc = 0x2DE71Cu;
            return;
        }
    }
    ctx->pc = 0x2E18C4u;
    // 0x2e18c4: 0x5427e327  bnel        $at, $a3, . + 4 + (-0x1CD9 << 2)
    ctx->pc = 0x2E18C4u;
    {
        const bool branch_taken_0x2e18c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e18c4) {
            ctx->pc = 0x2E18C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18C4u;
            // 0x2e18c8: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E18C8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA564u;
            return;
        }
    }
    ctx->pc = 0x2E18CCu;
    // 0x2e18cc: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18CCu;
    {
        const bool branch_taken_0x2e18cc = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e18cc) {
            ctx->pc = 0x2E18D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18CCu;
            // 0x2e18d0: 0x5727e217  bnel        $t9, $a3, . + 4 + (-0x1DE9 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E18D0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA7A0u;
            return;
        }
    }
    ctx->pc = 0x2E18D4u;
    // 0x2e18d4: 0x56a7e297  bnel        $s5, $a3, . + 4 + (-0x1D69 << 2)
    ctx->pc = 0x2E18D4u;
    {
        const bool branch_taken_0x2e18d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e18d4) {
            ctx->pc = 0x2E18D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18D4u;
            // 0x2e18d8: 0x5c77f897  .word       0x5C77F897                   # bgtzl       $v1, . + 4 + (-0x769 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E18D8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA334u;
            return;
        }
    }
    ctx->pc = 0x2E18DCu;
    // 0x2e18dc: 0x5c27d197  .word       0x5C27D197                   # bgtzl       $at, . + 4 + (-0x2E69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18DCu;
    {
        const bool branch_taken_0x2e18dc = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e18dc) {
            ctx->pc = 0x2E18E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18DCu;
            // 0x2e18e0: 0x5d23e396  .word       0x5D23E396                   # bgtzl       $t1, . + 4 + (-0x1C6A << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E18E0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F3Cu;
            return;
        }
    }
    ctx->pc = 0x2E18E4u;
    // 0x2e18e4: 0xdc27e116  ld          $a3, -0x1EEA($at)
    ctx->pc = 0x2e18e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294959382)));
    // 0x2e18e8: 0x5da7e7a3  .word       0x5DA7E7A3                   # bgtzl       $t5, . + 4 + (-0x185D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18E8u;
    {
        const bool branch_taken_0x2e18e8 = (GPR_S32(ctx, 13) > 0);
        if (branch_taken_0x2e18e8) {
            ctx->pc = 0x2E18ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18E8u;
            // 0x2e18ec: 0x5627e317  bnel        $s1, $a3, . + 4 + (-0x1CE9 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E18EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB778u;
            return;
        }
    }
    ctx->pc = 0x2E18F0u;
    // 0x2e18f0: 0x5c27d197  .word       0x5C27D197                   # bgtzl       $at, . + 4 + (-0x2E69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E18F0u;
    {
        const bool branch_taken_0x2e18f0 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e18f0) {
            ctx->pc = 0x2E18F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18F0u;
            // 0x2e18f4: 0x5d23e396  .word       0x5D23E396                   # bgtzl       $t1, . + 4 + (-0x1C6A << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E18F4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F50u;
            return;
        }
    }
    ctx->pc = 0x2E18F8u;
    // 0x2e18f8: 0x752ff134  .word       0x752FF134                   # INVALID     $t1, $t7, -0xECC # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e18f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E18F8 raw=0x752FF134");
    // 0x2e18fc: 0x6c5815be  ldr         $t8, 0x15BE($v0)
    ctx->pc = 0x2e18fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5566); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x2e1900: 0x1d27e3e4  .word       0x1D27E3E4                   # bgtz        $t1, . + 4 + (-0x1C1C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1900u;
    {
        const bool branch_taken_0x2e1900 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1900u;
        // 0x2e1904: 0x5c809c2a  bgtzl       $a0, . + 4 + (-0x63D6 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E1904 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1900) {
            ctx->pc = 0x2DA894u;
            return;
        }
    }
    ctx->pc = 0x2E1908u;
    // 0x2e1908: 0x4cd81c2e  .word       0x4CD81C2E                   # INVALID     $a2, $t8, 0x1C2E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1908u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E1908 raw=0x4CD81C2E");
    // 0x2e190c: 0x1cffe396  .word       0x1CFFE396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E190Cu;
    {
        const bool branch_taken_0x2e190c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E190Cu;
        // 0x2e1910: 0x5c67f534  .word       0x5C67F534                   # bgtzl       $v1, . + 4 + (-0xACC << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E1910 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e190c) {
            ctx->pc = 0x2DA768u;
            return;
        }
    }
    ctx->pc = 0x2E1914u;
    // 0x2e1914: 0x5c8623aa  .word       0x5C8623AA                   # bgtzl       $a0, . + 4 + (0x23AA << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1914u;
    {
        const bool branch_taken_0x2e1914 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2e1914) {
            ctx->pc = 0x2E1918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1914u;
            // 0x2e1918: 0x1cf3e396  .word       0x1CF3E396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1918 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA7C0u;
            return;
        }
    }
    ctx->pc = 0x2E191Cu;
    // 0x2e191c: 0x5567e3aa  bnel        $t3, $a3, . + 4 + (-0x1C56 << 2)
    ctx->pc = 0x2E191Cu;
    {
        const bool branch_taken_0x2e191c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e191c) {
            ctx->pc = 0x2E1920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E191Cu;
            // 0x2e1920: 0x5c8063aa  bgtzl       $a0, . + 4 + (0x63AA << 2) (Delay Slot)
            // Likely branch instruction at 0x2E1920 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA7C8u;
            return;
        }
    }
    ctx->pc = 0x2E1924u;
    // 0x2e1924: 0x1cf7e396  .word       0x1CF7E396                   # bgtz        $a3, . + 4 + (-0x1C6A << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1924u;
    {
        const bool branch_taken_0x2e1924 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1924u;
        // 0x2e1928: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1924) {
            ctx->pc = 0x2DA780u;
            return;
        }
    }
    ctx->pc = 0x2E192Cu;
    // 0x2e192c: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_2e1930:
    if (ctx->pc == 0x2E1930u) {
        ctx->pc = 0x2E1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E192Cu;
        // 0x2e1930: 0x1d27e396  .word       0x1D27E396                   # bgtz        $t1, . + 4 + (-0x1C6A << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E1930 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1934u;
        goto label_fallthrough_0x2e192c;
    }
    ctx->pc = 0x2E192Cu;
    {
        const bool branch_taken_0x2e192c = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e192c) {
            ctx->pc = 0x2E1930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E192Cu;
            // 0x2e1930: 0x1d27e396  .word       0x1D27E396                   # bgtz        $t1, . + 4 + (-0x1C6A << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1930 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA800u;
            return;
        }
    }
label_fallthrough_0x2e192c:
    ctx->pc = 0x2E1934u;
    // 0x2e1934: 0x1c27f397  .word       0x1C27F397                   # bgtz        $at, . + 4 + (-0xC69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1934u;
    {
        const bool branch_taken_0x2e1934 = (GPR_S32(ctx, 1) > 0);
        ctx->pc = 0x2E1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1934u;
        // 0x2e1938: 0x4437f335  .word       0x4437F335                   # dmfc1       $s7, $f30 # 00000335 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x35 at 0x2E1938 raw=0x4437F335");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1934) {
            ctx->pc = 0x2DE794u;
            return;
        }
    }
    ctx->pc = 0x2E193Cu;
    // 0x2e193c: 0x5427e327  bnel        $at, $a3, . + 4 + (-0x1CD9 << 2)
    ctx->pc = 0x2E193Cu;
    {
        const bool branch_taken_0x2e193c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e193c) {
            ctx->pc = 0x2E1940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E193Cu;
            // 0x2e1940: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1940 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA5DCu;
            return;
        }
    }
    ctx->pc = 0x2E1944u;
    // 0x2e1944: 0x5c27e3b4  .word       0x5C27E3B4                   # bgtzl       $at, . + 4 + (-0x1C4C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1944u;
    {
        const bool branch_taken_0x2e1944 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e1944) {
            ctx->pc = 0x2E1948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1944u;
            // 0x2e1948: 0x5727e217  bnel        $t9, $a3, . + 4 + (-0x1DE9 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E1948 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA818u;
            return;
        }
    }
    ctx->pc = 0x2E194Cu;
    // 0x2e194c: 0x56a7e297  bnel        $s5, $a3, . + 4 + (-0x1D69 << 2)
    ctx->pc = 0x2E194Cu;
    {
        const bool branch_taken_0x2e194c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e194c) {
            ctx->pc = 0x2E1950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E194Cu;
            // 0x2e1950: 0x5c77f897  .word       0x5C77F897                   # bgtzl       $v1, . + 4 + (-0x769 << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1950 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA3ACu;
            return;
        }
    }
    ctx->pc = 0x2E1954u;
    // 0x2e1954: 0x5c27d197  .word       0x5C27D197                   # bgtzl       $at, . + 4 + (-0x2E69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1954u;
    {
        const bool branch_taken_0x2e1954 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e1954) {
            ctx->pc = 0x2E1958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1954u;
            // 0x2e1958: 0x5d23e396  .word       0x5D23E396                   # bgtzl       $t1, . + 4 + (-0x1C6A << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E1958 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5FB4u;
            return;
        }
    }
    ctx->pc = 0x2E195Cu;
    // 0x2e195c: 0xdc27e116  ld          $a3, -0x1EEA($at)
    ctx->pc = 0x2e195cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294959382)));
    // 0x2e1960: 0x5da7eba3  .word       0x5DA7EBA3                   # bgtzl       $t5, . + 4 + (-0x145D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1960u;
    {
        const bool branch_taken_0x2e1960 = (GPR_S32(ctx, 13) > 0);
        if (branch_taken_0x2e1960) {
            ctx->pc = 0x2E1964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1960u;
            // 0x2e1964: 0x5627e317  bnel        $s1, $a3, . + 4 + (-0x1CE9 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E1964 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7F0u;
            return;
        }
    }
    ctx->pc = 0x2E1968u;
    // 0x2e1968: 0x5c27d197  .word       0x5C27D197                   # bgtzl       $at, . + 4 + (-0x2E69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1968u;
    {
        const bool branch_taken_0x2e1968 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x2e1968) {
            ctx->pc = 0x2E196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1968u;
            // 0x2e196c: 0x5d23e396  .word       0x5D23E396                   # bgtzl       $t1, . + 4 + (-0x1C6A << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E196C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5FC8u;
            return;
        }
    }
    ctx->pc = 0x2E1970u;
    // 0x2e1970: 0x752ff134  .word       0x752FF134                   # INVALID     $t1, $t7, -0xECC # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e1970u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E1970 raw=0x752FF134");
    // 0x2e1974: 0x6c5815be  ldr         $t8, 0x15BE($v0)
    ctx->pc = 0x2e1974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5566); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x2e1978: 0x1d27e3e4  .word       0x1D27E3E4                   # bgtz        $t1, . + 4 + (-0x1C1C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1978u;
    {
        const bool branch_taken_0x2e1978 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2E197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1978u;
        // 0x2e197c: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2E197C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1978) {
            ctx->pc = 0x2DA90Cu;
            return;
        }
    }
    ctx->pc = 0x2E1980u;
    // 0x2e1980: 0x0  nop
    ctx->pc = 0x2e1980u;
    // NOP
    // 0x2e1984: 0xdfd28e97  ld          $s2, -0x7169($fp)
    ctx->pc = 0x2e1984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 4294938263)));
    // 0x2e1988: 0xa3c808d9  sb          $t0, 0x8D9($fp)
    ctx->pc = 0x2e1988u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2265), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e198c: 0x857a9663  lh          $k0, -0x699D($t3)
    ctx->pc = 0x2e198cu;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294940259)));
    // 0x2e1990: 0x846c573b  lh          $t4, 0x573B($v1)
    ctx->pc = 0x2e1990u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22331)));
    // 0x2e1994: 0x16da020  add         $s4, $t3, $t5
    ctx->pc = 0x2e1994u;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x2e1998: 0xc8a1fc5  jal         func_2287F14
    ctx->pc = 0x2E1998u;
    SET_GPR_U32(ctx, 31, 0x2E19A0u);
    ctx->pc = 0x2E199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1998u;
    // 0x2e199c: 0xcd8c852d  pref        0x0C, -0x7AD3($t4) (Delay Slot)
    // PREF instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287F14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287F14u, 0x2E1998u, 0x2E19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19A0u;
label_2e19a0:
    // 0x2e19a0: 0xca0c87c3  lwc2        $12, -0x783D($s0)
    ctx->pc = 0x2e19a0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E19A0 raw=0xCA0C87C3");
    // 0x2e19a4: 0xcd8c8499  pref        0x0C, -0x7B67($t4)
    ctx->pc = 0x2e19a4u;
    // PREF instruction (ignored)
    // 0x2e19a8: 0x0  nop
    ctx->pc = 0x2e19a8u;
    // NOP
label_2e19ac:
    // 0x2e19ac: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e19acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e19b0: 0x2442199c  addiu       $v0, $v0, 0x199C
    ctx->pc = 0x2e19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6556));
    // 0x2e19b4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e19b8: 0x2484197c  addiu       $a0, $a0, 0x197C
    ctx->pc = 0x2e19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6524));
    // 0x2e19bc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e19c0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e19c4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E19C4u;
    SET_GPR_U32(ctx, 31, 0x2E19CCu);
    ctx->pc = 0x2E19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19C4u;
    // 0x2e19c8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E19C4u, 0x2E19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19CCu;
label_2e19cc:
    // 0x2e19cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e19ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e19d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e19d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e19d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e19d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e19d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e19dc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e19dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e19e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e19e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e19e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2e19e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e19e8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2e19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e19ec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2e19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e19f0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2e19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e19f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E19F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19F4u;
        // 0x2e19f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E19F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E19FCu;
    // 0x2e19fc: 0x0  nop
    ctx->pc = 0x2e19fcu;
    // NOP
}
