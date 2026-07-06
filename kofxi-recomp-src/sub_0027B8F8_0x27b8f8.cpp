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

// Function: sub_0027B8F8
// Address: 0x27b8f8 - 0x27bcc8
void sub_0027B8F8_0x27b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B8F8_0x27b8f8");
#endif

    switch (ctx->pc) {
        case 0x27b94cu: goto label_27b94c;
        case 0x27b960u: goto label_27b960;
        case 0x27b98cu: goto label_27b98c;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bca0u: goto label_27bca0;
        default: break;
    }

    ctx->pc = 0x27b8f8u;

    // 0x27b8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27b8fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b900: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27b908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27b908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b914: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27b918: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27b91c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27b920: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27b920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27b924: 0x2463b96c  addiu       $v1, $v1, -0x4694
    ctx->pc = 0x27b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949228));
    // 0x27b928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b92c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B92Cu;
    {
        const bool branch_taken_0x27b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b92c) {
            ctx->pc = 0x27B94Cu;
            goto label_27b94c;
        }
    }
    ctx->pc = 0x27B934u;
    // 0x27b934: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b938: 0x2484b980  addiu       $a0, $a0, -0x4680
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949248));
    // 0x27b93c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27b93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27b940: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27b940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27b944: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27B944u;
    SET_GPR_U32(ctx, 31, 0x27B94Cu);
    ctx->pc = 0x27B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B944u;
    // 0x27b948: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27B944u, 0x27B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B94Cu;
label_27b94c:
    // 0x27b94c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27B94Cu;
    {
        const bool branch_taken_0x27b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b94c) {
            ctx->pc = 0x27B980u;
            goto label_27b980;
        }
    }
    ctx->pc = 0x27B954u;
    // 0x27b954: 0xa2f3c149  sb          $s3, -0x3EB7($s7)
    ctx->pc = 0x27b954u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294951241), (uint8_t)GPR_U32(ctx, 19));
    // 0x27b958: 0xc314abd  jal         func_C52AF4
    ctx->pc = 0x27B958u;
    SET_GPR_U32(ctx, 31, 0x27B960u);
    ctx->pc = 0x27B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B958u;
    // 0x27b95c: 0x1c3c020  add         $t8, $t6, $v1 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0xC52AF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC52AF4u, 0x27B958u, 0x27B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B960u;
label_27b960:
    // 0x27b960: 0x8cc90935  lw          $t1, 0x935($a2)
    ctx->pc = 0x27b960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2357)));
    // 0x27b964: 0xde286c2f  ld          $t0, 0x6C2F($s1)
    ctx->pc = 0x27b964u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 27695)));
    // 0x27b968: 0x24d22b10  addiu       $s2, $a2, 0x2B10
    ctx->pc = 0x27b968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 11024));
    // 0x27b96c: 0x0  nop
    ctx->pc = 0x27b96cu;
    // NOP
    // 0x27b970: 0x68d14c27  ldl         $s1, 0x4C27($a2)
    ctx->pc = 0x27b970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x27b974: 0x980d2b38  lwr         $t5, 0x2B38($zero)
    ctx->pc = 0x27b974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11064); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b978: 0x68d14daf  ldl         $s1, 0x4DAF($a2)
    ctx->pc = 0x27b978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19887); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x27b97c: 0x0  nop
    ctx->pc = 0x27b97cu;
    // NOP
label_27b980:
    // 0x27b980: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x27b980u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
    // 0x27b984: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x27B984u;
    SET_GPR_U32(ctx, 31, 0x27B98Cu);
    ctx->pc = 0x27B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B984u;
    // 0x27b988: 0x8e845398  lw          $a0, 0x5398($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x27B984u, 0x27B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B98Cu;
label_27b98c:
    // 0x27b98c: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b990: 0x246353f4  addiu       $v1, $v1, 0x53F4
    ctx->pc = 0x27b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21492));
    // 0x27b994: 0xa89f6e45  swl         $ra, 0x6E45($a0)
    ctx->pc = 0x27b994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28229); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b998: 0xa89f7e91  swl         $ra, 0x7E91($a0)
    ctx->pc = 0x27b998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32401); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b99c: 0xa89f6e55  swl         $ra, 0x6E55($a0)
    ctx->pc = 0x27b99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28245); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9a0: 0xaaba7f89  swl         $k0, 0x7F89($s5)
    ctx->pc = 0x27b9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32649); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9a4: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9a8: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9ac: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9b0: 0x3e8d4a11  .word       0x3E8D4A11                   # lui         $t5, 0x4A11 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)18961 << 16));
    // 0x27b9b4: 0x1013cdb0  beq         $zero, $s3, . + 4 + (-0x3250 << 2)
    ctx->pc = 0x27B9B4u;
    {
        const bool branch_taken_0x27b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        ctx->pc = 0x27B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9B4u;
        // 0x27b9b8: 0x9a1149b3  lwr         $s1, 0x49B3($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 18867); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9b4) {
            ctx->pc = 0x26F078u;
            return;
        }
    }
    ctx->pc = 0x27B9BCu;
    // 0x27b9bc: 0x40747b2  .word       0x040747B2                   # INVALID     $zero, $a3, 0x47B2 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27b9bcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x27B9BC raw=0x040747B2");
    // 0x27b9c0: 0x9d0c4ab7  lwu         $t4, 0x4AB7($t0)
    ctx->pc = 0x27b9c0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 8), 19127)));
    // 0x27b9c4: 0x9faeeb9d  lwu         $t6, -0x1463($sp)
    ctx->pc = 0x27b9c4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 29), 4294962077)));
    // 0x27b9c8: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9cc: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9d0: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27b9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9d4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27b9d8: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x27b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x27b9dc: 0x3c1501c3  lui         $s5, 0x1C3
    ctx->pc = 0x27b9dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)451 << 16));
    // 0x27b9e0: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b9e4: 0x26b0539c  addiu       $s0, $s5, 0x539C
    ctx->pc = 0x27b9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 21404));
    // 0x27b9e8: 0xa8bc7e91  swl         $gp, 0x7E91($a1)
    ctx->pc = 0x27b9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32401); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 28); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9ec: 0xa9bef645  swl         $fp, -0x9BB($t5)
    ctx->pc = 0x27b9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294964805); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9f0: 0xac6553ec  sw          $a1, 0x53EC($v1)
    ctx->pc = 0x27b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21484), GPR_U32(ctx, 5));
    // 0x27b9f4: 0xa9bf6e91  swl         $ra, 0x6E91($t5)
    ctx->pc = 0x27b9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 28305); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9f8: 0xaa947e89  swl         $s4, 0x7E89($s4)
    ctx->pc = 0x27b9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32393); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b9fc: 0xa9bf7e55  swl         $ra, 0x7E55($t5)
    ctx->pc = 0x27b9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 32341); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 31); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba00: 0xaabe7d89  swl         $fp, 0x7D89($s5)
    ctx->pc = 0x27ba00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32137); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba04: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba08: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba0c: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba10: 0x1807cf3b  .word       0x1807CF3B                   # blez        $zero, . + 4 + (-0x30C5 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27BA10u;
    {
        const bool branch_taken_0x27ba10 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x27BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA10u;
        // 0x27ba14: 0x1186cb38  beq         $t4, $a2, . + 4 + (-0x34C8 << 2) (Delay Slot)
        // Likely branch instruction at 0x27BA14 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba10) {
            ctx->pc = 0x26F700u;
            return;
        }
    }
    ctx->pc = 0x27BA18u;
    // 0x27ba18: 0x9a0fecb1  lwr         $t7, -0x134F($s0)
    ctx->pc = 0x27ba18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294962353); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    // 0x27ba1c: 0x9ea94803  lwu         $t1, 0x4803($s5)
    ctx->pc = 0x27ba1cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 21), 18435)));
    // 0x27ba20: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba24: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ba28: 0x2484ba10  addiu       $a0, $a0, -0x45F0
    ctx->pc = 0x27ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949392));
    // 0x27ba2c: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27BA2Cu;
    SET_GPR_U32(ctx, 31, 0x27BA34u);
    ctx->pc = 0x27BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA2Cu;
    // 0x27ba30: 0xaabe7e01  swl         $fp, 0x7E01($s5) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27BA2Cu, 0x27BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA34u;
label_27ba34:
    // 0x27ba34: 0xeab27e09  swc2        $18, 0x7E09($s5)
    ctx->pc = 0x27ba34u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x27BA34 raw=0xEAB27E09");
    // 0x27ba38: 0xa9bef655  swl         $fp, -0x9AB($t5)
    ctx->pc = 0x27ba38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294964821); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba3c: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba40: 0xab927e89  swl         $s2, 0x7E89($gp)
    ctx->pc = 0x27ba40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 32393); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba44: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27ba48: 0x8e0234b8  lw          $v0, 0x34B8($s0)
    ctx->pc = 0x27ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13496)));
    // 0x27ba4c: 0xa88a7d09  swl         $t2, 0x7D09($a0)
    ctx->pc = 0x27ba4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32009); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba50: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba54: 0xaaba7c09  swl         $k0, 0x7C09($s5)
    ctx->pc = 0x27ba54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31753); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba58: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba5c: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba60: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba64: 0x188848b5  .word       0x188848B5                   # blez        $a0, . + 4 + (0x48B5 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27BA64u;
    {
        const bool branch_taken_0x27ba64 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA64u;
        // 0x27ba68: 0x1a2a4994  .word       0x1A2A4994                   # blez        $s1, . + 4 + (0x4994 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27BA68 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba64) {
            ctx->pc = 0x28DD3Cu;
            return;
        }
    }
    ctx->pc = 0x27BA6Cu;
    // 0x27ba6c: 0xbf0ece39  cache       0x0E, -0x31C7($t8)
    ctx->pc = 0x27ba6cu;
    // CACHE instruction (ignored)
    // 0x27ba70: 0xbd8cce3a  cache       0x0C, -0x31C6($t4)
    ctx->pc = 0x27ba70u;
    // CACHE instruction (ignored)
    // 0x27ba74: 0x93ae4cb0  lbu         $t6, 0x4CB0($sp)
    ctx->pc = 0x27ba74u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19632)));
    // 0x27ba78: 0x1a8d4893  .word       0x1A8D4893                   # blez        $s4, . + 4 + (0x4893 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27BA78u;
    {
        const bool branch_taken_0x27ba78 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x27BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA78u;
        // 0x27ba7c: 0x188c4bb5  .word       0x188C4BB5                   # blez        $a0, . + 4 + (0x4BB5 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27BA7C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba78) {
            ctx->pc = 0x28DCC8u;
            return;
        }
    }
    ctx->pc = 0x27BA80u;
    // 0x27ba80: 0x9aad4883  lwr         $t5, 0x4883($s5)
    ctx->pc = 0x27ba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 18563); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27ba84: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba88: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27ba88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ba8c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ba90: 0x2484ba64  addiu       $a0, $a0, -0x459C
    ctx->pc = 0x27ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949476));
    // 0x27ba94: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27BA94u;
    SET_GPR_U32(ctx, 31, 0x27BA9Cu);
    ctx->pc = 0x27BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA94u;
    // 0x27ba98: 0xa2aa3c81  sb          $t2, 0x3C81($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 15489), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27BA94u, 0x27BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA9Cu;
label_27ba9c:
    // 0x27ba9c: 0xaabe7f89  swl         $fp, 0x7F89($s5)
    ctx->pc = 0x27ba9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32649); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27baa0: 0x8e0234b8  lw          $v0, 0x34B8($s0)
    ctx->pc = 0x27baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13496)));
    // 0x27baa4: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27baa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27baa8: 0x8e0234b8  lw          $v0, 0x34B8($s0)
    ctx->pc = 0x27baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13496)));
    // 0x27baac: 0xa8967d09  swl         $s6, 0x7D09($a0)
    ctx->pc = 0x27baacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32009); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bab0: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bab4: 0xaaba7c09  swl         $k0, 0x7C09($s5)
    ctx->pc = 0x27bab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31753); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bab8: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27babc: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27babcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bac0: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bac4: 0x188c4bb5  .word       0x188C4BB5                   # blez        $a0, . + 4 + (0x4BB5 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27BAC4u;
    {
        const bool branch_taken_0x27bac4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAC4u;
        // 0x27bac8: 0x270fc632  addiu       $t7, $t8, -0x39CE (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 4294952498));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bac4) {
            ctx->pc = 0x28E99Cu;
            return;
        }
    }
    ctx->pc = 0x27BACCu;
    // 0x27bacc: 0x58c4cb6  teqi        $t4, 0x4CB6
    ctx->pc = 0x27baccu;
    if (GPR_S64(ctx, 12) == (int64_t)(int32_t)19638) { runtime->handleTrap(rdram, ctx); }
    // 0x27bad0: 0x100dd2b4  beq         $zero, $t5, . + 4 + (-0x2D4C << 2)
    ctx->pc = 0x27BAD0u;
    {
        const bool branch_taken_0x27bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x27BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD0u;
        // 0x27bad4: 0x9d0c4ab7  lwu         $t4, 0x4AB7($t0) (Delay Slot)
        SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 8), 19127)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bad0) {
            ctx->pc = 0x2705A4u;
            return;
        }
    }
    ctx->pc = 0x27BAD8u;
    // 0x27bad8: 0x58ecbb6  tnei        $t4, -0x344A
    ctx->pc = 0x27bad8u;
    if (GPR_S64(ctx, 12) != (int64_t)(int32_t)4294953910) { runtime->handleTrap(rdram, ctx); }
    // 0x27badc: 0x922a4a97  lbu         $t2, 0x4A97($s1)
    ctx->pc = 0x27badcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19095)));
    // 0x27bae0: 0xbb8eca3a  swr         $t6, -0x35C6($gp)
    ctx->pc = 0x27bae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294953530); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bae4: 0x92a54b83  lbu         $a1, 0x4B83($s5)
    ctx->pc = 0x27bae4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19331)));
    // 0x27bae8: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27baec: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27baecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27baf0: 0x2484bac4  addiu       $a0, $a0, -0x453C
    ctx->pc = 0x27baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949572));
    // 0x27baf4: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27BAF4u;
    SET_GPR_U32(ctx, 31, 0x27BAFCu);
    ctx->pc = 0x27BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAF4u;
    // 0x27baf8: 0xaabe7e01  swl         $fp, 0x7E01($s5) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27BAF4u, 0x27BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAFCu;
label_27bafc:
    // 0x27bafc: 0x8aae7d09  lwl         $t6, 0x7D09($s5)
    ctx->pc = 0x27bafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32009); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x27bb00: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bb04: 0xaabe7e01  swl         $fp, 0x7E01($s5)
    ctx->pc = 0x27bb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32257); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bb08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27BB08u;
    {
        const bool branch_taken_0x27bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb08) {
            ctx->pc = 0x27BB38u;
            goto label_27bb38;
        }
    }
    ctx->pc = 0x27BB10u;
    // 0x27bb10: 0x1331020  add         $v0, $t1, $s3
    ctx->pc = 0x27bb10u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x27bb14: 0x438020  add         $s0, $v0, $v1
    ctx->pc = 0x27bb14u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x27bb18: 0x2a79020  add         $s2, $s5, $a3
    ctx->pc = 0x27bb18u;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x27bb1c: 0xffd77b22  sd          $s7, 0x7B22($fp)
    ctx->pc = 0x27bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 31522), GPR_U64(ctx, 23));
    // 0x27bb20: 0xfce9e90a  sd          $t1, -0x16F6($a3)
    ctx->pc = 0x27bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294961418), GPR_U64(ctx, 9));
    // 0x27bb24: 0xde6e4087  ld          $t6, 0x4087($s3)
    ctx->pc = 0x27bb24u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 19), 16519)));
    // 0x27bb28: 0x6872c41d  ldl         $s2, -0x3BE3($v1)
    ctx->pc = 0x27bb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294951965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x27bb2c: 0x980d2b39  lwr         $t5, 0x2B39($zero)
    ctx->pc = 0x27bb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11065); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27bb30: 0x6872c595  ldl         $s2, -0x3A6B($v1)
    ctx->pc = 0x27bb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294952341); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x27bb34: 0x0  nop
    ctx->pc = 0x27bb34u;
    // NOP
label_27bb38:
    // 0x27bb38: 0x3c1101c3  lui         $s1, 0x1C3
    ctx->pc = 0x27bb38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)451 << 16));
    // 0x27bb3c: 0x8e2253dc  lw          $v0, 0x53DC($s1)
    ctx->pc = 0x27bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21468)));
    // 0x27bb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BB40u;
    {
        const bool branch_taken_0x27bb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb40) {
            ctx->pc = 0x27BB60u;
            goto label_27bb60;
        }
    }
    ctx->pc = 0x27BB48u;
    // 0x27bb48: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BB48u;
    {
        const bool branch_taken_0x27bb48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB48u;
        // 0x27bb4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb48) {
            ctx->pc = 0x27BB60u;
            goto label_27bb60;
        }
    }
    ctx->pc = 0x27BB50u;
    // 0x27bb50: 0xc09e920  jal         func_27A480
    ctx->pc = 0x27BB50u;
    SET_GPR_U32(ctx, 31, 0x27BB58u);
    ctx->pc = 0x27BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB50u;
    // 0x27bb54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A480u, 0x27BB50u, 0x27BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB58u;
label_27bb58:
    // 0x27bb58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27BB58u;
    {
        const bool branch_taken_0x27bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB58u;
        // 0x27bb5c: 0x26a3539c  addiu       $v1, $s5, 0x539C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb58) {
            ctx->pc = 0x27BB88u;
            goto label_27bb88;
        }
    }
    ctx->pc = 0x27BB60u;
label_27bb60:
    // 0x27bb60: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BB60u;
    {
        const bool branch_taken_0x27bb60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bb60) {
            ctx->pc = 0x27BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BB60u;
            // 0x27bb64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BB78u;
            goto label_27bb78;
        }
    }
    ctx->pc = 0x27BB68u;
    // 0x27bb68: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x27BB68u;
    SET_GPR_U32(ctx, 31, 0x27BB70u);
    ctx->pc = 0x27BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB68u;
    // 0x27bb6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BE0u, 0x27BB68u, 0x27BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB70u;
label_27bb70:
    // 0x27bb70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB70u;
    {
        const bool branch_taken_0x27bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB70u;
        // 0x27bb74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb70) {
            ctx->pc = 0x27BB84u;
            goto label_27bb84;
        }
    }
    ctx->pc = 0x27BB78u;
label_27bb78:
    // 0x27bb78: 0xc09e760  jal         func_279D80
    ctx->pc = 0x27BB78u;
    SET_GPR_U32(ctx, 31, 0x27BB80u);
    ctx->pc = 0x27BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB78u;
    // 0x27bb7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D80u, 0x27BB78u, 0x27BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB80u;
label_27bb80:
    // 0x27bb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27bb84:
    // 0x27bb84: 0x26a3539c  addiu       $v1, $s5, 0x539C
    ctx->pc = 0x27bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21404));
label_27bb88:
    // 0x27bb88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bb8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27bb90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27bb94: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27BB94u;
    SET_GPR_U32(ctx, 31, 0x27BB9Cu);
    ctx->pc = 0x27BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB94u;
    // 0x27bb98: 0x8e845398  lw          $a0, 0x5398($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27BB94u, 0x27BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB9Cu;
label_27bb9c:
    // 0x27bb9c: 0x16000041  bnez        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x27BB9Cu;
    {
        const bool branch_taken_0x27bb9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB9Cu;
        // 0x27bba0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb9c) {
            ctx->pc = 0x27BCA4u;
            goto label_27bca4;
        }
    }
    ctx->pc = 0x27BBA4u;
    // 0x27bba4: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BBA4u;
    {
        const bool branch_taken_0x27bba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBA4u;
        // 0x27bba8: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bba4) {
            ctx->pc = 0x27BBBCu;
            goto label_27bbbc;
        }
    }
    ctx->pc = 0x27BBACu;
    // 0x27bbac: 0x8e2253dc  lw          $v0, 0x53DC($s1)
    ctx->pc = 0x27bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21468)));
    // 0x27bbb0: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27BBB0u;
    {
        const bool branch_taken_0x27bbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBB0u;
        // 0x27bbb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbb0) {
            ctx->pc = 0x27BCA4u;
            goto label_27bca4;
        }
    }
    ctx->pc = 0x27BBB8u;
    // 0x27bbb8: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
label_27bbbc:
    // 0x27bbbc: 0x8c4353d8  lw          $v1, 0x53D8($v0)
    ctx->pc = 0x27bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21464)));
    // 0x27bbc0: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x27BBC0u;
    {
        const bool branch_taken_0x27bbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBC0u;
        // 0x27bbc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbc0) {
            ctx->pc = 0x27BCA4u;
            goto label_27bca4;
        }
    }
    ctx->pc = 0x27BBC8u;
    // 0x27bbc8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27bbcc: 0x2463bc14  addiu       $v1, $v1, -0x43EC
    ctx->pc = 0x27bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949908));
    // 0x27bbd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bbd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BBD4u;
    {
        const bool branch_taken_0x27bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bbd4) {
            ctx->pc = 0x27BBF4u;
            goto label_27bbf4;
        }
    }
    ctx->pc = 0x27BBDCu;
    // 0x27bbdc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27bbe0: 0x2484bc28  addiu       $a0, $a0, -0x43D8
    ctx->pc = 0x27bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949928));
    // 0x27bbe4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27bbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27bbe8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27bbec: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27BBECu;
    SET_GPR_U32(ctx, 31, 0x27BBF4u);
    ctx->pc = 0x27BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BBECu;
    // 0x27bbf0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27BBECu, 0x27BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBF4u;
label_27bbf4:
    // 0x27bbf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27BBF4u;
    {
        const bool branch_taken_0x27bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbf4) {
            ctx->pc = 0x27BC28u;
            goto label_27bc28;
        }
    }
    ctx->pc = 0x27BBFCu;
    // 0x27bbfc: 0x8d08b62d  lw          $t0, -0x49D3($t0)
    ctx->pc = 0x27bbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948397)));
    // 0x27bc00: 0xc3ee2cb  jal         func_FB8B2C
    ctx->pc = 0x27BC00u;
    SET_GPR_U32(ctx, 31, 0x27BC08u);
    ctx->pc = 0x27BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC00u;
    // 0x27bc04: 0x8e92f2dd  lw          $s2, -0xD23($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963933)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xFB8B2Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xFB8B2Cu, 0x27BC00u, 0x27BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC08u;
label_27bc08:
    // 0x27bc08: 0x1a33020  add         $a2, $t5, $v1
    ctx->pc = 0x27bc08u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x27bc0c: 0xa3a27d11  sb          $v0, 0x7D11($sp)
    ctx->pc = 0x27bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32017), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bc10: 0x3035020  add         $t2, $t8, $v1
    ctx->pc = 0x27bc10u;
    {     int32_t rs_val = GPR_S32(ctx, 24);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x27bc14: 0x0  nop
    ctx->pc = 0x27bc14u;
    // NOP
    // 0x27bc18: 0xc241a7ef  ll          $at, -0x5811($s2)
    ctx->pc = 0x27bc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294944751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27bc1c: 0x980d2b96  lwr         $t5, 0x2B96($zero)
    ctx->pc = 0x27bc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11158); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27bc20: 0xc241a7db  ll          $at, -0x5825($s2)
    ctx->pc = 0x27bc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294944731); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27bc24: 0x0  nop
    ctx->pc = 0x27bc24u;
    // NOP
label_27bc28:
    // 0x27bc28: 0x8bc22ae0  lwl         $v0, 0x2AE0($fp)
    ctx->pc = 0x27bc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 10976); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x27bc2c: 0x83c1aae0  lb          $at, -0x5520($fp)
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945504)));
    // 0x27bc30: 0x83c1aae0  lb          $at, -0x5520($fp)
    ctx->pc = 0x27bc30u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945504)));
    // 0x27bc34: 0x83c1aae0  lb          $at, -0x5520($fp)
    ctx->pc = 0x27bc34u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945504)));
    // 0x27bc38: 0xb17a30d4  sdl         $k0, 0x30D4($t3)
    ctx->pc = 0x27bc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 12500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bc3c: 0x14f21ad6  bne         $a3, $s2, . + 4 + (0x1AD6 << 2)
    ctx->pc = 0x27BC3Cu;
    {
        const bool branch_taken_0x27bc3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x27BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC3Cu;
        // 0x27bc40: 0xb9771d51  swr         $s7, 0x1D51($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7505); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc3c) {
            ctx->pc = 0x282798u;
            return;
        }
    }
    ctx->pc = 0x27BC44u;
    // 0x27bc44: 0x80f52afc  lb          $s5, 0x2AFC($a3)
    ctx->pc = 0x27bc44u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 11004)));
    // 0x27bc48: 0x83c1aae0  lb          $at, -0x5520($fp)
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945504)));
    // 0x27bc4c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27bc50: 0x2484bc38  addiu       $a0, $a0, -0x43C8
    ctx->pc = 0x27bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949944));
    // 0x27bc54: 0xc09e572  jal         func_2795C8
    ctx->pc = 0x27BC54u;
    SET_GPR_U32(ctx, 31, 0x27BC5Cu);
    ctx->pc = 0x27BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC54u;
    // 0x27bc58: 0x83c1aae0  lb          $at, -0x5520($fp) (Delay Slot)
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795C8u, 0x27BC54u, 0x27BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC5Cu;
label_27bc5c:
    // 0x27bc5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27BC5Cu;
    {
        const bool branch_taken_0x27bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc5c) {
            ctx->pc = 0x27BC8Cu;
            goto label_27bc8c;
        }
    }
    ctx->pc = 0x27BC64u;
    // 0x27bc64: 0x24949018  addiu       $s4, $a0, -0x6FE8
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938648));
    // 0x27bc68: 0xca0d010  jal         func_2834040
    ctx->pc = 0x27BC68u;
    SET_GPR_U32(ctx, 31, 0x27BC70u);
    ctx->pc = 0x27BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC68u;
    // 0x27bc6c: 0xa3d04249  sb          $s0, 0x4249($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 16969), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2834040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834040u, 0x27BC68u, 0x27BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC70u;
label_27bc70:
    // 0x27bc70: 0x27aa6e88  addiu       $t2, $sp, 0x6E88
    ctx->pc = 0x27bc70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 28296));
    // 0x27bc74: 0xa0e26601  sb          $v0, 0x6601($a3)
    ctx->pc = 0x27bc74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26113), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bc78: 0x24470758  addiu       $a3, $v0, 0x758
    ctx->pc = 0x27bc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1880));
    // 0x27bc7c: 0xc241fe7a  ll          $at, -0x186($s2)
    ctx->pc = 0x27bc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294966906); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27bc80: 0x980d2b97  lwr         $t5, 0x2B97($zero)
    ctx->pc = 0x27bc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 11159); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27bc84: 0xc241fe4e  ll          $at, -0x1B2($s2)
    ctx->pc = 0x27bc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294966862); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27bc88: 0x0  nop
    ctx->pc = 0x27bc88u;
    // NOP
label_27bc8c:
    // 0x27bc8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27BC8Cu;
    {
        const bool branch_taken_0x27bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC8Cu;
        // 0x27bc90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc8c) {
            ctx->pc = 0x27BCA4u;
            goto label_27bca4;
        }
    }
    ctx->pc = 0x27BC94u;
    // 0x27bc94: 0x0  nop
    ctx->pc = 0x27bc94u;
    // NOP
    // 0x27bc98: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27BC98u;
    SET_GPR_U32(ctx, 31, 0x27BCA0u);
    ctx->pc = 0x27BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC98u;
    // 0x27bc9c: 0x8e845398  lw          $a0, 0x5398($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27BC98u, 0x27BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCA0u;
label_27bca0:
    // 0x27bca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27bca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bca4:
    // 0x27bca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27bca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27bcac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27bcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bcb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27bcb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27bcb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27bcb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bcb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27bcb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27bcbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x27BCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC0u;
        // 0x27bcc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BCC8u;
}
