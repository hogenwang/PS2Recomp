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

// Function: sub_001D5CD8
// Address: 0x1d5cd8 - 0x1d5ee8
void sub_001D5CD8_0x1d5cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5CD8_0x1d5cd8");
#endif

    switch (ctx->pc) {
        case 0x1d5cf8u: goto label_1d5cf8;
        case 0x1d5d28u: goto label_1d5d28;
        case 0x1d5dd8u: goto label_1d5dd8;
        case 0x1d5de0u: goto label_1d5de0;
        case 0x1d5e14u: goto label_1d5e14;
        case 0x1d5e80u: goto label_1d5e80;
        case 0x1d5e98u: goto label_1d5e98;
        default: break;
    }

    ctx->pc = 0x1d5cd8u;

    // 0x1d5cd8: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5cdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ce0: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1d5ce4: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1d5ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5ce8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5CE8u;
    {
        const bool branch_taken_0x1d5ce8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CE8u;
        // 0x1d5cec: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ce8) {
            ctx->pc = 0x1D5D1Cu;
            goto label_1d5d1c;
        }
    }
    ctx->pc = 0x1D5CF0u;
    // 0x1d5cf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5cf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5cf8:
    // 0x1d5cf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d5cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cfc: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5CFCu;
    {
        const bool branch_taken_0x1d5cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CFCu;
        // 0x1d5d00: 0x24840660  addiu       $a0, $a0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cfc) {
            ctx->pc = 0x1D5D20u;
            goto label_1d5d20;
        }
    }
    ctx->pc = 0x1D5D04u;
    // 0x1d5d04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d5d08: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1d5d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d5d0c: 0x0  nop
    ctx->pc = 0x1d5d0cu;
    // NOP
    // 0x1d5d10: 0x0  nop
    ctx->pc = 0x1d5d10u;
    // NOP
    // 0x1d5d14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5D14u;
    {
        const bool branch_taken_0x1d5d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d14) {
            ctx->pc = 0x1D5D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5D14u;
            // 0x1d5d18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5cf8;
        }
    }
    ctx->pc = 0x1D5D1Cu;
label_1d5d1c:
    // 0x1d5d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5d20:
    // 0x1d5d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D28u;
label_1d5d28:
    // 0x1d5d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d2c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1d5d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d5d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d5d3c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5d40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5d44: 0x24488020  addiu       $t0, $v0, -0x7FE0
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1d5d48: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1d5d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d5d4c: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1d5d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d5d50: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1d5d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d5d54: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1d5d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d5d58: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x1d5d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d5d5c: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x1d5d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d5d60: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x1d5d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d64: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x1d5d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d68: 0xb2060027  sdl         $a2, 0x27($s0)
    ctx->pc = 0x1d5d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d6c: 0xb6060020  sdr         $a2, 0x20($s0)
    ctx->pc = 0x1d5d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d70: 0xb207002f  sdl         $a3, 0x2F($s0)
    ctx->pc = 0x1d5d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d74: 0xb6070028  sdr         $a3, 0x28($s0)
    ctx->pc = 0x1d5d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d78: 0x6905001f  ldl         $a1, 0x1F($t0)
    ctx->pc = 0x1d5d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d5d7c: 0x6d050018  ldr         $a1, 0x18($t0)
    ctx->pc = 0x1d5d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d5d80: 0x69060027  ldl         $a2, 0x27($t0)
    ctx->pc = 0x1d5d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d5d84: 0x6d060020  ldr         $a2, 0x20($t0)
    ctx->pc = 0x1d5d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d5d88: 0x6907002f  ldl         $a3, 0x2F($t0)
    ctx->pc = 0x1d5d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d5d8c: 0x6d070028  ldr         $a3, 0x28($t0)
    ctx->pc = 0x1d5d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d5d90: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x1d5d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d94: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x1d5d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d98: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x1d5d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5d9c: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x1d5d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5da0: 0xb2070047  sdl         $a3, 0x47($s0)
    ctx->pc = 0x1d5da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5da4: 0xb6070040  sdr         $a3, 0x40($s0)
    ctx->pc = 0x1d5da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5da8: 0x69050037  ldl         $a1, 0x37($t0)
    ctx->pc = 0x1d5da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d5dac: 0x6d050030  ldr         $a1, 0x30($t0)
    ctx->pc = 0x1d5dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d5db0: 0x6906003f  ldl         $a2, 0x3F($t0)
    ctx->pc = 0x1d5db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d5db4: 0x6d060038  ldr         $a2, 0x38($t0)
    ctx->pc = 0x1d5db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d5db8: 0xb205004f  sdl         $a1, 0x4F($s0)
    ctx->pc = 0x1d5db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5dbc: 0xb6050048  sdr         $a1, 0x48($s0)
    ctx->pc = 0x1d5dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5dc0: 0xb2060057  sdl         $a2, 0x57($s0)
    ctx->pc = 0x1d5dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5dc4: 0xb6060050  sdr         $a2, 0x50($s0)
    ctx->pc = 0x1d5dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d5dc8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1d5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1d5dcc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1d5dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1d5dd0: 0xc074234  jal         func_1D08D0
    ctx->pc = 0x1D5DD0u;
    SET_GPR_U32(ctx, 31, 0x1D5DD8u);
    ctx->pc = 0x1D5DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DD0u;
    // 0x1d5dd4: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D08D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D08D0u, 0x1D5DD0u, 0x1D5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DD8u;
label_1d5dd8:
    // 0x1d5dd8: 0xc0756fa  jal         func_1D5BE8
    ctx->pc = 0x1D5DD8u;
    SET_GPR_U32(ctx, 31, 0x1D5DE0u);
    ctx->pc = 0x1D5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DD8u;
    // 0x1d5ddc: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BE8u, 0x1D5DD8u, 0x1D5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE0u;
label_1d5de0:
    // 0x1d5de0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x1d5de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x1d5de4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5de8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d5decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d5df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5df4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF8u;
        // 0x1d5dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E00u;
    // 0x1d5e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e0c: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E14u);
    ctx->pc = 0x1D5E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E0Cu;
    // 0x1d5e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D5E0Cu, 0x1D5E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E14u;
label_1d5e14:
    // 0x1d5e14: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d5e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5E1Cu;
    {
        const bool branch_taken_0x1d5e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E1Cu;
        // 0x1d5e20: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e1c) {
            ctx->pc = 0x1D5E38u;
            goto label_1d5e38;
        }
    }
    ctx->pc = 0x1D5E24u;
    // 0x1d5e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e2c: 0x8074128  j           func_1D04A0
    ctx->pc = 0x1D5E2Cu;
    ctx->pc = 0x1D5E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E2Cu;
    // 0x1d5e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D5E2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5E34u;
    // 0x1d5e34: 0x0  nop
    ctx->pc = 0x1d5e34u;
    // NOP
label_1d5e38:
    // 0x1d5e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E48u;
        // 0x1d5e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E50u;
    // 0x1d5e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5e60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5e68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d5e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e6c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E6Cu;
    {
        const bool branch_taken_0x1d5e6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E6Cu;
        // 0x1d5e70: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e6c) {
            ctx->pc = 0x1D5E90u;
            goto label_1d5e90;
        }
    }
    ctx->pc = 0x1D5E74u;
    // 0x1d5e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e78: 0xc0757ba  jal         func_1D5EE8
    ctx->pc = 0x1D5E78u;
    SET_GPR_U32(ctx, 31, 0x1D5E80u);
    ctx->pc = 0x1D5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E78u;
    // 0x1d5e7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5EE8u, 0x1D5E78u, 0x1D5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E80u;
label_1d5e80:
    // 0x1d5e80: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5e84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D5E84u;
    {
        const bool branch_taken_0x1d5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E84u;
        // 0x1d5e88: 0x24448020  addiu       $a0, $v0, -0x7FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e84) {
            ctx->pc = 0x1D5EC4u;
            goto label_1d5ec4;
        }
    }
    ctx->pc = 0x1D5E8Cu;
    // 0x1d5e8c: 0x0  nop
    ctx->pc = 0x1d5e8cu;
    // NOP
label_1d5e90:
    // 0x1d5e90: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D5E90u;
    SET_GPR_U32(ctx, 31, 0x1D5E98u);
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D5E90u, 0x1D5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E98u;
label_1d5e98:
    // 0x1d5e98: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d5e9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E9Cu;
    {
        const bool branch_taken_0x1d5e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E9Cu;
        // 0x1d5ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e9c) {
            ctx->pc = 0x1D5EC0u;
            goto label_1d5ec0;
        }
    }
    ctx->pc = 0x1D5EA4u;
    // 0x1d5ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ea8: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x1d5ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x1d5eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5eb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5eb8: 0x8074128  j           func_1D04A0
    ctx->pc = 0x1D5EB8u;
    ctx->pc = 0x1D5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB8u;
    // 0x1d5ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04A0u, 0x1D5EB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5EC0u;
label_1d5ec0:
    // 0x1d5ec0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1d5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1d5ec4:
    // 0x1d5ec4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ecc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ed4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1d5ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d5ed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EE0u;
        // 0x1d5ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EE8u;
}
