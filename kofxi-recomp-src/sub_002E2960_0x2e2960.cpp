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

// Function: sub_002E2960
// Address: 0x2e2960 - 0x2e2a98
void sub_002E2960_0x2e2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2960_0x2e2960");
#endif

    switch (ctx->pc) {
        case 0x2e29b0u: goto label_2e29b0;
        case 0x2e29c4u: goto label_2e29c4;
        case 0x2e29ccu: goto label_2e29cc;
        case 0x2e2a3cu: goto label_2e2a3c;
        case 0x2e2a78u: goto label_2e2a78;
        default: break;
    }

    ctx->pc = 0x2e2960u;

    // 0x2e2960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2968: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e2968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e296c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e2970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2974: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e2978: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e2978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e297c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e2984: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e2984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2988: 0x246329d0  addiu       $v1, $v1, 0x29D0
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10704));
    // 0x2e298c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2990: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2990u;
    {
        const bool branch_taken_0x2e2990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2990) {
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E2998u;
    // 0x2e2998: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e299c: 0x248429e4  addiu       $a0, $a0, 0x29E4
    ctx->pc = 0x2e299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10724));
    // 0x2e29a0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e29a4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e29a8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E29A8u;
    SET_GPR_U32(ctx, 31, 0x2E29B0u);
    ctx->pc = 0x2E29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E29A8u;
    // 0x2e29ac: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E29A8u, 0x2E29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29B0u;
label_2e29b0:
    // 0x2e29b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E29B0u;
    {
        const bool branch_taken_0x2e29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b0) {
            ctx->pc = 0x2E29E4u;
            goto label_2e29e4;
        }
    }
    ctx->pc = 0x2E29B8u;
    // 0x2e29b8: 0x24e537c0  addiu       $a1, $a3, 0x37C0
    ctx->pc = 0x2e29b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 14272));
    // 0x2e29bc: 0xc2b77c3  jal         func_ADDF0C
    ctx->pc = 0x2E29BCu;
    SET_GPR_U32(ctx, 31, 0x2E29C4u);
    ctx->pc = 0x2E29C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E29BCu;
    // 0x2e29c0: 0xff8ab8a2  sd          $t2, -0x475E($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294949026), GPR_U64(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0xADDF0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xADDF0Cu, 0x2E29BCu, 0x2E29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29C4u;
label_2e29c4:
    // 0x2e29c4: 0xc82c2a2  jal         func_20B0A88
    ctx->pc = 0x2E29C4u;
    SET_GPR_U32(ctx, 31, 0x2E29CCu);
    ctx->pc = 0x2E29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E29C4u;
    // 0x2e29c8: 0x249c020  add         $t8, $s2, $t1 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0A88u, 0x2E29C4u, 0x2E29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29CCu;
label_2e29cc:
    // 0x2e29cc: 0x26341478  addiu       $s4, $s1, 0x1478
    ctx->pc = 0x2e29ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 5240));
    // 0x2e29d0: 0x0  nop
    ctx->pc = 0x2e29d0u;
    // NOP
    // 0x2e29d4: 0x68f979f4  ldl         $t9, 0x79F4($a3)
    ctx->pc = 0x2e29d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x2e29d8: 0x0  nop
    ctx->pc = 0x2e29d8u;
    // NOP
    // 0x2e29dc: 0x68f979b0  ldl         $t9, 0x79B0($a3)
    ctx->pc = 0x2e29dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x2e29e0: 0x0  nop
    ctx->pc = 0x2e29e0u;
    // NOP
label_2e29e4:
    // 0x2e29e4: 0x9f00056c  lwu         $zero, 0x56C($t8)
    ctx->pc = 0x2e29e4u;
    SET_GPR_U32(ctx, 0, READ32(ADD32(GPR_U32(ctx, 24), 1388)));
    // 0x2e29e8: 0x8f141465  lw          $s4, 0x1465($t8)
    ctx->pc = 0x2e29e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 5221)));
    // 0x2e29ec: 0x8b0e8644  lwl         $t6, -0x79BC($t8)
    ctx->pc = 0x2e29ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294936132); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x2e29f0: 0x8b129644  lwl         $s2, -0x69BC($t8)
    ctx->pc = 0x2e29f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294940228); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 18) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 18, (int32_t)merged); }
    // 0x2e29f4: 0x5b01064d  .word       0x5B01064D                   # blezl       $t8, . + 4 + (0x64D << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E29F4u;
    {
        const bool branch_taken_0x2e29f4 = (GPR_S32(ctx, 24) <= 0);
        if (branch_taken_0x2e29f4) {
            ctx->pc = 0x2E29F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29F4u;
            // 0x2e29f8: 0x9b028637  lwr         $v0, -0x79C9($t8) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294936119); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E432Cu;
            return;
        }
    }
    ctx->pc = 0x2E29FCu;
    // 0x2e29fc: 0x5b01962d  .word       0x5B01962D                   # blezl       $t8, . + 4 + (-0x69D3 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E29FCu;
    {
        const bool branch_taken_0x2e29fc = (GPR_S32(ctx, 24) <= 0);
        if (branch_taken_0x2e29fc) {
            ctx->pc = 0x2E2A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29FCu;
            // 0x2e2a00: 0x8f188f25  lw          $t8, -0x70DB($t8) (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294938405)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C82B4u;
            return;
        }
    }
    ctx->pc = 0x2E2A04u;
    // 0x2e2a04: 0x8f110745  lw          $s1, 0x745($t8)
    ctx->pc = 0x2e2a04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 1861)));
    // 0x2e2a08: 0x8f099745  lw          $t1, -0x68BB($t8)
    ctx->pc = 0x2e2a08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294940485)));
    // 0x2e2a0c: 0x1b00154f  blez        $t8, . + 4 + (0x154F << 2)
    ctx->pc = 0x2E2A0Cu;
    {
        const bool branch_taken_0x2e2a0c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x2E2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A0Cu;
        // 0x2e2a10: 0x847c7df7  lh          $gp, 0x7DF7($v1) (Delay Slot)
        SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32247)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a0c) {
            ctx->pc = 0x2E7F4Cu;
            return;
        }
    }
    ctx->pc = 0x2E2A14u;
    // 0x2e2a14: 0x1b00142f  blez        $t8, . + 4 + (0x142F << 2)
    ctx->pc = 0x2E2A14u;
    {
        const bool branch_taken_0x2e2a14 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x2E2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A14u;
        // 0x2e2a18: 0x9b001e77  lwr         $zero, 0x1E77($t8) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7799); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a14) {
            ctx->pc = 0x2E7AD4u;
            return;
        }
    }
    ctx->pc = 0x2E2A1Cu;
    // 0x2e2a1c: 0x7c748f  .word       0x007C748F                   # sync.p # 007C7000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e2a1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2e2a20: 0x8b0e8644  lwl         $t6, -0x79BC($t8)
    ctx->pc = 0x2e2a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294936132); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x2e2a24: 0x8f401465  lw          $zero, 0x1465($k0)
    ctx->pc = 0x2e2a24u;
    SET_GPR_S32(ctx, 0, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 5221)));
    // 0x2e2a28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2A28u;
    {
        const bool branch_taken_0x2e2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a28) {
            ctx->pc = 0x2E2A58u;
            goto label_2e2a58;
        }
    }
    ctx->pc = 0x2E2A30u;
    // 0x2e2a30: 0x8c6f41c5  lw          $t7, 0x41C5($v1)
    ctx->pc = 0x2e2a30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16837)));
    // 0x2e2a34: 0xc489ff6  jal         func_1227FD8
    ctx->pc = 0x2E2A34u;
    SET_GPR_U32(ctx, 31, 0x2E2A3Cu);
    ctx->pc = 0x2E2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A34u;
    // 0x2e2a38: 0x4e1020  add         $v0, $v0, $t6 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227FD8u, 0x2E2A34u, 0x2E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A3Cu;
label_2e2a3c:
    // 0x2e2a3c: 0x4e3020  add         $a2, $v0, $t6
    ctx->pc = 0x2e2a3cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x2e2a40: 0xfcf4a94a  sd          $s4, -0x56B6($a3)
    ctx->pc = 0x2e2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294945098), GPR_U64(ctx, 20));
    // 0x2e2a44: 0x266fd670  addiu       $t7, $s3, -0x2990
    ctx->pc = 0x2e2a44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956656));
    // 0x2e2a48: 0x684f979f  ldl         $t7, -0x6861($v0)
    ctx->pc = 0x2e2a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294940575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x2e2a4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e2a4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2E2A4C raw=0x00000001");
    // 0x2e2a50: 0x684f97db  ldl         $t7, -0x6825($v0)
    ctx->pc = 0x2e2a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294940635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x2e2a54: 0x0  nop
    ctx->pc = 0x2e2a54u;
    // NOP
label_2e2a58:
    // 0x2e2a58: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2a5c: 0x24422a48  addiu       $v0, $v0, 0x2A48
    ctx->pc = 0x2e2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10824));
    // 0x2e2a60: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2a64: 0x24842a28  addiu       $a0, $a0, 0x2A28
    ctx->pc = 0x2e2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10792));
    // 0x2e2a68: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2a6c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2a70: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2A70u;
    SET_GPR_U32(ctx, 31, 0x2E2A78u);
    ctx->pc = 0x2E2A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A70u;
    // 0x2e2a74: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E2A70u, 0x2E2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A78u;
label_2e2a78:
    // 0x2e2a78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2a88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e2a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2a8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A90u;
        // 0x2e2a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A98u;
}
