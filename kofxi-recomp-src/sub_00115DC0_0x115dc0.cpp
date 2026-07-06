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

// Function: sub_00115DC0
// Address: 0x115dc0 - 0x115fe8
void sub_00115DC0_0x115dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115DC0_0x115dc0");
#endif

    switch (ctx->pc) {
        case 0x115df8u: goto label_115df8;
        case 0x115e08u: goto label_115e08;
        case 0x115e30u: goto label_115e30;
        case 0x115e68u: goto label_115e68;
        case 0x115ed0u: goto label_115ed0;
        case 0x115f60u: goto label_115f60;
        case 0x115fa4u: goto label_115fa4;
        default: break;
    }

    ctx->pc = 0x115dc0u;

    // 0x115dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115dc4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x115dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x115dc8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x115dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x115dcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x115dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dd0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x115dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x115dd4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x115dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dd8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x115dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x115ddc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x115ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115de0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x115de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x115de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115de8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x115de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115dec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x115decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115df0: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x115DF0u;
    SET_GPR_U32(ctx, 31, 0x115DF8u);
    ctx->pc = 0x115DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DF0u;
    // 0x115df4: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x115DF0u, 0x115DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DF8u;
label_115df8:
    // 0x115df8: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x115DF8u;
    {
        const bool branch_taken_0x115df8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DF8u;
        // 0x115dfc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115df8) {
            ctx->pc = 0x115FC0u;
            goto label_115fc0;
        }
    }
    ctx->pc = 0x115E00u;
    // 0x115e00: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x115E00u;
    SET_GPR_U32(ctx, 31, 0x115E08u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x115E00u, 0x115E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E08u;
label_115e08:
    // 0x115e08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E08u;
    {
        const bool branch_taken_0x115e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115e08) {
            ctx->pc = 0x115E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E08u;
            // 0x115e0c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E1Cu;
            goto label_115e1c;
        }
    }
    ctx->pc = 0x115E10u;
    // 0x115e10: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115e14: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x115E14u;
    {
        const bool branch_taken_0x115e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E14u;
        // 0x115e18: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e14) {
            ctx->pc = 0x115FC0u;
            goto label_115fc0;
        }
    }
    ctx->pc = 0x115E1Cu;
label_115e1c:
    // 0x115e1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x115e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e20: 0x24519c48  addiu       $s1, $v0, -0x63B8
    ctx->pc = 0x115e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941768));
    // 0x115e24: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x115e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x115e28: 0xc04a966  jal         func_12A598
    ctx->pc = 0x115E28u;
    SET_GPR_U32(ctx, 31, 0x115E30u);
    ctx->pc = 0x115E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E28u;
    // 0x115e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x115E28u, 0x115E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E30u;
label_115e30:
    // 0x115e30: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x115e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x115e34: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x115E34u;
    {
        const bool branch_taken_0x115e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E34u;
        // 0x115e38: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e34) {
            ctx->pc = 0x115F68u;
            goto label_115f68;
        }
    }
    ctx->pc = 0x115E3Cu;
    // 0x115e3c: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x115e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x115e40: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x115E40u;
    {
        const bool branch_taken_0x115e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E40u;
        // 0x115e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e40) {
            ctx->pc = 0x115F50u;
            goto label_115f50;
        }
    }
    ctx->pc = 0x115E48u;
    // 0x115e48: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x115e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x115e4c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x115e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x115e50: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x115e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x115e54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x115E54u;
    {
        const bool branch_taken_0x115e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E54u;
        // 0x115e58: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e54) {
            ctx->pc = 0x115EC4u;
            goto label_115ec4;
        }
    }
    ctx->pc = 0x115E5Cu;
    // 0x115e5c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x115e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x115e60: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x115e64: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115e68:
    // 0x115e68: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x115e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115e6c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x115e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115e70: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x115e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x115e74: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x115e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x115e78: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x115e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x115e7c: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x115e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x115e80: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x115e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x115e84: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x115e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x115e88: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x115e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e8c: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x115e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e90: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x115e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e94: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x115e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e98: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x115e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e9c: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x115e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ea0: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x115ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ea4: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x115ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ea8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x115eac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x115eb0: 0x0  nop
    ctx->pc = 0x115eb0u;
    // NOP
    // 0x115eb4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x115EB4u;
    {
        const bool branch_taken_0x115eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x115eb4) {
            ctx->pc = 0x115E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115e68;
        }
    }
    ctx->pc = 0x115EBCu;
    // 0x115ebc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115EBCu;
    {
        const bool branch_taken_0x115ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ebc) {
            ctx->pc = 0x115F04u;
            goto label_115f04;
        }
    }
    ctx->pc = 0x115EC4u;
label_115ec4:
    // 0x115ec4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x115ec8: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x115ecc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115ed0:
    // 0x115ed0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x115ed0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115ed4: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x115ed4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x115ed8: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x115edc: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x115edcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x115ee0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x115ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x115ee4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x115ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x115ee8: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x115ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x115eec: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x115eecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x115ef0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x115ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x115ef4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x115ef8: 0x0  nop
    ctx->pc = 0x115ef8u;
    // NOP
    // 0x115efc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x115EFCu;
    {
        const bool branch_taken_0x115efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x115efc) {
            ctx->pc = 0x115ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115ed0;
        }
    }
    ctx->pc = 0x115F04u;
label_115f04:
    // 0x115f04: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x115f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115f08: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x115f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115f0c: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x115f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x115f10: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x115f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x115f14: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x115f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x115f18: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x115f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x115f1c: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x115f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x115f20: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x115f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x115f24: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x115f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f28: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x115f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f2c: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x115f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f30: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x115f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f34: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x115f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f38: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x115f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f3c: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x115f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115f40: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x115f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x115f44: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x115f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115f48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x115F48u;
    {
        const bool branch_taken_0x115f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F48u;
        // 0x115f4c: 0xaea29c40  sw          $v0, -0x63C0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f48) {
            ctx->pc = 0x115F78u;
            goto label_115f78;
        }
    }
    ctx->pc = 0x115F50u;
label_115f50:
    // 0x115f50: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x115f54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x115f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f58: 0xc049c48  jal         func_127120
    ctx->pc = 0x115F58u;
    SET_GPR_U32(ctx, 31, 0x115F60u);
    ctx->pc = 0x115F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F58u;
    // 0x115f5c: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x115F58u, 0x115F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F60u;
label_115f60:
    // 0x115f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115F60u;
    {
        const bool branch_taken_0x115f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F60u;
        // 0x115f64: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f60) {
            ctx->pc = 0x115F74u;
            goto label_115f74;
        }
    }
    ctx->pc = 0x115F68u;
label_115f68:
    // 0x115f68: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x115f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f6c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x115f70: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x115f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_115f74:
    // 0x115f74: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_115f78:
    // 0x115f78: 0x26b09c40  addiu       $s0, $s5, -0x63C0
    ctx->pc = 0x115f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941760));
    // 0x115f7c: 0x24a49e40  addiu       $a0, $a1, -0x61C0
    ctx->pc = 0x115f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942272));
    // 0x115f80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x115f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f90: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x115f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115f94: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x115f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f98: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x115f9c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115F9Cu;
    SET_GPR_U32(ctx, 31, 0x115FA4u);
    ctx->pc = 0x115FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F9Cu;
    // 0x115fa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115F9Cu, 0x115FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA4u;
label_115fa4:
    // 0x115fa4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115FA4u;
    {
        const bool branch_taken_0x115fa4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115fa4) {
            ctx->pc = 0x115FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115FA4u;
            // 0x115fa8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FB8u;
            goto label_115fb8;
        }
    }
    ctx->pc = 0x115FACu;
    // 0x115fac: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115FB0u;
    {
        const bool branch_taken_0x115fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FB0u;
        // 0x115fb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fb0) {
            ctx->pc = 0x115FC0u;
            goto label_115fc0;
        }
    }
    ctx->pc = 0x115FB8u;
label_115fb8:
    // 0x115fb8: 0x8ea29c40  lw          $v0, -0x63C0($s5)
    ctx->pc = 0x115fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941760)));
    // 0x115fbc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x115fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_115fc0:
    // 0x115fc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115fc4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x115fc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115fc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x115fc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115fcc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x115fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115fd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x115fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115fd4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x115fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115fd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x115FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FDCu;
        // 0x115fe0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115FE4u;
    // 0x115fe4: 0x0  nop
    ctx->pc = 0x115fe4u;
    // NOP
}
