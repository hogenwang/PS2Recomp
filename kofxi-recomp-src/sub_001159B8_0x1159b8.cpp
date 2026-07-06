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

// Function: sub_001159B8
// Address: 0x1159b8 - 0x115bc0
void sub_001159B8_0x1159b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001159B8_0x1159b8");
#endif

    switch (ctx->pc) {
        case 0x1159f0u: goto label_1159f0;
        case 0x115a00u: goto label_115a00;
        case 0x115a4cu: goto label_115a4c;
        case 0x115ab0u: goto label_115ab0;
        case 0x115b40u: goto label_115b40;
        case 0x115b7cu: goto label_115b7c;
        default: break;
    }

    ctx->pc = 0x1159b8u;

    // 0x1159b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1159b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1159bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1159bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1159c0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1159c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1159c4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1159c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1159c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1159cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1159ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1159d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1159d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1159d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1159d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1159dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1159dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1159e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1159e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1159e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1159e8: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x1159E8u;
    SET_GPR_U32(ctx, 31, 0x1159F0u);
    ctx->pc = 0x1159ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159E8u;
    // 0x1159ec: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x1159E8u, 0x1159F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159F0u;
label_1159f0:
    // 0x1159f0: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1159F0u;
    {
        const bool branch_taken_0x1159f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159F0u;
        // 0x1159f4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159f0) {
            ctx->pc = 0x115B98u;
            goto label_115b98;
        }
    }
    ctx->pc = 0x1159F8u;
    // 0x1159f8: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x1159F8u;
    SET_GPR_U32(ctx, 31, 0x115A00u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x1159F8u, 0x115A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A00u;
label_115a00:
    // 0x115a00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115A00u;
    {
        const bool branch_taken_0x115a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A00u;
        // 0x115a04: 0x3c140041  lui         $s4, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a00) {
            ctx->pc = 0x115A14u;
            goto label_115a14;
        }
    }
    ctx->pc = 0x115A08u;
    // 0x115a08: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115a0c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x115A0Cu;
    {
        const bool branch_taken_0x115a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A0Cu;
        // 0x115a10: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a0c) {
            ctx->pc = 0x115B98u;
            goto label_115b98;
        }
    }
    ctx->pc = 0x115A14u;
label_115a14:
    // 0x115a14: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x115a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a18: 0x26929c40  addiu       $s2, $s4, -0x63C0
    ctx->pc = 0x115a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941760));
    // 0x115a1c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x115A1Cu;
    {
        const bool branch_taken_0x115a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A1Cu;
        // 0x115a20: 0xae939c40  sw          $s3, -0x63C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294941760), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a1c) {
            ctx->pc = 0x115B48u;
            goto label_115b48;
        }
    }
    ctx->pc = 0x115A24u;
    // 0x115a24: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x115a28: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x115A28u;
    {
        const bool branch_taken_0x115a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A28u;
        // 0x115a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a28) {
            ctx->pc = 0x115B34u;
            goto label_115b34;
        }
    }
    ctx->pc = 0x115A30u;
    // 0x115a30: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x115a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x115a34: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x115a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x115a38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x115a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x115a3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x115A3Cu;
    {
        const bool branch_taken_0x115a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A3Cu;
        // 0x115a40: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a3c) {
            ctx->pc = 0x115AA8u;
            goto label_115aa8;
        }
    }
    ctx->pc = 0x115A44u;
    // 0x115a44: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x115a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x115a48: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115a4c:
    // 0x115a4c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x115a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x115a50: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x115a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x115a54: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x115a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115a58: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x115a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115a5c: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x115a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x115a60: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x115a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x115a64: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x115a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x115a68: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x115a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x115a6c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x115a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a70: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x115a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a74: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x115a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a78: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x115a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a7c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x115a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a80: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x115a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a84: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x115a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a88: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x115a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115a8c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x115a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x115a90: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x115a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x115a94: 0x0  nop
    ctx->pc = 0x115a94u;
    // NOP
    // 0x115a98: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x115A98u;
    {
        const bool branch_taken_0x115a98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x115a98) {
            ctx->pc = 0x115A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115a4c;
        }
    }
    ctx->pc = 0x115AA0u;
    // 0x115aa0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115AA0u;
    {
        const bool branch_taken_0x115aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115aa0) {
            ctx->pc = 0x115AE4u;
            goto label_115ae4;
        }
    }
    ctx->pc = 0x115AA8u;
label_115aa8:
    // 0x115aa8: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x115aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x115aac: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115ab0:
    // 0x115ab0: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x115ab0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x115ab4: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x115ab4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x115ab8: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x115ab8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x115abc: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x115abcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x115ac0: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x115ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x115ac4: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x115ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x115ac8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x115ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x115acc: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x115accu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x115ad0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x115ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x115ad4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x115ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x115ad8: 0x0  nop
    ctx->pc = 0x115ad8u;
    // NOP
    // 0x115adc: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x115ADCu;
    {
        const bool branch_taken_0x115adc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x115adc) {
            ctx->pc = 0x115AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115ab0;
        }
    }
    ctx->pc = 0x115AE4u;
label_115ae4:
    // 0x115ae4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x115ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x115ae8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x115ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x115aec: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x115aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x115af0: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x115af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x115af4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x115af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115af8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x115af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115afc: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x115afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x115b00: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x115b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x115b04: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x115b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b08: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x115b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b0c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x115b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b10: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x115b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b14: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x115b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b18: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x115b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115b1c: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x115b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115b20: 0x26a39c40  addiu       $v1, $s5, -0x63C0
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941760));
    // 0x115b24: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x115b28: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x115b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115B2Cu;
    {
        const bool branch_taken_0x115b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B2Cu;
        // 0x115b30: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b2c) {
            ctx->pc = 0x115B50u;
            goto label_115b50;
        }
    }
    ctx->pc = 0x115B34u;
label_115b34:
    // 0x115b34: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x115b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x115b38: 0xc049c48  jal         func_127120
    ctx->pc = 0x115B38u;
    SET_GPR_U32(ctx, 31, 0x115B40u);
    ctx->pc = 0x115B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B38u;
    // 0x115b3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x115B38u, 0x115B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B40u;
label_115b40:
    // 0x115b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115B40u;
    {
        const bool branch_taken_0x115b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B40u;
        // 0x115b44: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b40) {
            ctx->pc = 0x115B4Cu;
            goto label_115b4c;
        }
    }
    ctx->pc = 0x115B48u;
label_115b48:
    // 0x115b48: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x115b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_115b4c:
    // 0x115b4c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115b50:
    // 0x115b50: 0x26b09c40  addiu       $s0, $s5, -0x63C0
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941760));
    // 0x115b54: 0x24a49e40  addiu       $a0, $a1, -0x61C0
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942272));
    // 0x115b58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115b5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x115b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x115b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b68: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115b6c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x115b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b70: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x115b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x115b74: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115B74u;
    SET_GPR_U32(ctx, 31, 0x115B7Cu);
    ctx->pc = 0x115B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B74u;
    // 0x115b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115B74u, 0x115B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B7Cu;
label_115b7c:
    // 0x115b7c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115B7Cu;
    {
        const bool branch_taken_0x115b7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115b7c) {
            ctx->pc = 0x115B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115B7Cu;
            // 0x115b80: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115B90u;
            goto label_115b90;
        }
    }
    ctx->pc = 0x115B84u;
    // 0x115b84: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115B88u;
    {
        const bool branch_taken_0x115b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B88u;
        // 0x115b8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b88) {
            ctx->pc = 0x115B98u;
            goto label_115b98;
        }
    }
    ctx->pc = 0x115B90u;
label_115b90:
    // 0x115b90: 0x8e829c40  lw          $v0, -0x63C0($s4)
    ctx->pc = 0x115b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941760)));
    // 0x115b94: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x115b94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_115b98:
    // 0x115b98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x115b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115b9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x115b9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115ba0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x115ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115ba4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x115ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115ba8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x115ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115bac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x115bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115bb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x115bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115bb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x115BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BB8u;
        // 0x115bbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115BC0u;
}
