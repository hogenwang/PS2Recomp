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

// Function: sub_001D9D30
// Address: 0x1d9d30 - 0x1d9e38
void sub_001D9D30_0x1d9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9D30_0x1d9d30");
#endif

    switch (ctx->pc) {
        case 0x1d9d4cu: goto label_1d9d4c;
        case 0x1d9d88u: goto label_1d9d88;
        case 0x1d9de8u: goto label_1d9de8;
        default: break;
    }

    ctx->pc = 0x1d9d30u;

    // 0x1d9d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d44: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9D44u;
    SET_GPR_U32(ctx, 31, 0x1D9D4Cu);
    ctx->pc = 0x1D9D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D44u;
    // 0x1d9d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9D44u, 0x1D9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4Cu;
label_1d9d4c:
    // 0x1d9d4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D4Cu;
    {
        const bool branch_taken_0x1d9d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D4Cu;
        // 0x1d9d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d4c) {
            ctx->pc = 0x1D9D70u;
            goto label_1d9d70;
        }
    }
    ctx->pc = 0x1D9D54u;
    // 0x1d9d54: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d64: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1d9d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x1d9d68: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9D68u;
    ctx->pc = 0x1D9D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D68u;
    // 0x1d9d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D70u;
label_1d9d70:
    // 0x1d9d70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d74: 0x260301dc  addiu       $v1, $s0, 0x1DC
    ctx->pc = 0x1d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x1d9d78: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1d9d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1d9d7c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d9d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d9d80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D9D80u;
    {
        const bool branch_taken_0x1d9d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D80u;
        // 0x1d9d84: 0x2604025c  addiu       $a0, $s0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d80) {
            ctx->pc = 0x1D9DE8u;
            goto label_1d9de8;
        }
    }
    ctx->pc = 0x1D9D88u;
label_1d9d88:
    // 0x1d9d88: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1d9d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d9d8c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1d9d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d9d90: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1d9d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d9d94: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1d9d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d9d98: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1d9d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d9d9c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1d9d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d9da0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1d9da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1d9da4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1d9da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1d9da8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1d9da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dac: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1d9dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9db0: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x1d9db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9db4: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x1d9db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9db8: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1d9db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dbc: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1d9dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dc0: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1d9dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dc4: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1d9dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dc8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d9dcc: 0x0  nop
    ctx->pc = 0x1d9dccu;
    // NOP
    // 0x1d9dd0: 0x0  nop
    ctx->pc = 0x1d9dd0u;
    // NOP
    // 0x1d9dd4: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D9DD4u;
    {
        const bool branch_taken_0x1d9dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DD4u;
        // 0x1d9dd8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dd4) {
            ctx->pc = 0x1D9D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9d88;
        }
    }
    ctx->pc = 0x1D9DDCu;
    // 0x1d9ddc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9DDCu;
    {
        const bool branch_taken_0x1d9ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DDCu;
        // 0x1d9de0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ddc) {
            ctx->pc = 0x1D9E20u;
            goto label_1d9e20;
        }
    }
    ctx->pc = 0x1D9DE4u;
    // 0x1d9de4: 0x0  nop
    ctx->pc = 0x1d9de4u;
    // NOP
label_1d9de8:
    // 0x1d9de8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1d9de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9dec: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1d9decu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d9df0: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1d9df0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d9df4: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1d9df4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d9df8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1d9df8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1d9dfc: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1d9dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1d9e00: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1d9e00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1d9e04: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1d9e04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1d9e08: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d9e0c: 0x0  nop
    ctx->pc = 0x1d9e0cu;
    // NOP
    // 0x1d9e10: 0x0  nop
    ctx->pc = 0x1d9e10u;
    // NOP
    // 0x1d9e14: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D9E14u;
    {
        const bool branch_taken_0x1d9e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E14u;
        // 0x1d9e18: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e14) {
            ctx->pc = 0x1D9DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9de8;
        }
    }
    ctx->pc = 0x1D9E1Cu;
    // 0x1d9e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9e20:
    // 0x1d9e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E2Cu;
        // 0x1d9e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E34u;
    // 0x1d9e34: 0x0  nop
    ctx->pc = 0x1d9e34u;
    // NOP
}
