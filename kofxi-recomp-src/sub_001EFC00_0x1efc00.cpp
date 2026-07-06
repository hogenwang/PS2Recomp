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

// Function: sub_001EFC00
// Address: 0x1efc00 - 0x1efd90
void sub_001EFC00_0x1efc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC00_0x1efc00");
#endif

    switch (ctx->pc) {
        case 0x1efc70u: goto label_1efc70;
        case 0x1efcb0u: goto label_1efcb0;
        default: break;
    }

    ctx->pc = 0x1efc00u;

    // 0x1efc00: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1efc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1efc04: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1efc04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc08: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x1efc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
    // 0x1efc0c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1efc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x1efc10: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1efc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1efc14: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1efc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1efc18: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1efc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1efc1c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1efc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1efc20: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x1efc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1efc24: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x1efc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1efc28: 0x692a001f  ldl         $t2, 0x1F($t1)
    ctx->pc = 0x1efc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1efc2c: 0x6d2a0018  ldr         $t2, 0x18($t1)
    ctx->pc = 0x1efc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1efc30: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x1efc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc34: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x1efc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc38: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x1efc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc3c: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x1efc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc40: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x1efc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc44: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x1efc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc48: 0xb04a001f  sdl         $t2, 0x1F($v0)
    ctx->pc = 0x1efc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc4c: 0xb44a0018  sdr         $t2, 0x18($v0)
    ctx->pc = 0x1efc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1efc50: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1efc54: 0x246b9ad8  addiu       $t3, $v1, -0x6528
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941400));
    // 0x1efc58: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1efc58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x1efc5c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1efc5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc60: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1efc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1efc64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efc64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc68: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1efc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1efc6c: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x1efc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_1efc70:
    // 0x1efc70: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1efc74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1efc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1efc78: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1efc7c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1efc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1efc80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efc84: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x1efc84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1efc88: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1efc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1efc8c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1efc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1efc90: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EFC90u;
    {
        const bool branch_taken_0x1efc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC90u;
        // 0x1efc94: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc90) {
            ctx->pc = 0x1EFC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efc70;
        }
    }
    ctx->pc = 0x1EFC98u;
    // 0x1efc98: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1efc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1efc9c: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1efca0: 0x24459ae0  addiu       $a1, $v0, -0x6520
    ctx->pc = 0x1efca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941408));
    // 0x1efca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efca8: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1efcac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efcacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efcb0:
    // 0x1efcb0: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x1efcb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1efcb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1efcb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFCB8u;
    {
        const bool branch_taken_0x1efcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB8u;
        // 0x1efcbc: 0x28e80010  slti        $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcb8) {
            ctx->pc = 0x1EFCD8u;
            goto label_1efcd8;
        }
    }
    ctx->pc = 0x1EFCC0u;
    // 0x1efcc0: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1efcc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efcc8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1efccc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1efcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1efcd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFCD0u;
    {
        const bool branch_taken_0x1efcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCD0u;
        // 0x1efcd4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcd0) {
            ctx->pc = 0x1EFCDCu;
            goto label_1efcdc;
        }
    }
    ctx->pc = 0x1EFCD8u;
label_1efcd8:
    // 0x1efcd8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1efcdc:
    // 0x1efcdc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1efce0: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EFCE0u;
    {
        const bool branch_taken_0x1efce0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCE0u;
        // 0x1efce4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efce0) {
            ctx->pc = 0x1EFCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efcb0;
        }
    }
    ctx->pc = 0x1EFCE8u;
    // 0x1efce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFCF0u;
    // 0x1efcf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1efcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1efcf4: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x1efcf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1efcf8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1efcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1efcfc: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1efd00: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x1efd00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efd04: 0x2549000f  addiu       $t1, $t2, 0xF
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x1efd08: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x1efd08u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1efd0c: 0x292b0000  slti        $t3, $t1, 0x0
    ctx->pc = 0x1efd0cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efd10: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efd14: 0x254a001e  addiu       $t2, $t2, 0x1E
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30));
    // 0x1efd18: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1efd1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1efd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1efd20: 0x2507003f  addiu       $a3, $t0, 0x3F
    ctx->pc = 0x1efd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x1efd24: 0x2508007e  addiu       $t0, $t0, 0x7E
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 126));
    // 0x1efd28: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1efd2c: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1efd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1efd30: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1efd30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efd34: 0x14b480b  movn        $t1, $t2, $t3
    ctx->pc = 0x1efd34u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x1efd38: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x1efd38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1efd3c: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1efd3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efd40: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1efd40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1efd44: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1efd48: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1efd48u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1efd4c: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x1efd4cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x1efd50: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x1efd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efd54: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1efd58: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x1efd58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x1efd5c: 0xa4a7000e  sh          $a3, 0xE($a1)
    ctx->pc = 0x1efd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1efd60: 0x70c94818  mult1       $t1, $a2, $t1
    ctx->pc = 0x1efd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1efd64: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1efd64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1efd68: 0xa4a6000c  sh          $a2, 0xC($a1)
    ctx->pc = 0x1efd68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1efd6c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1efd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1efd70: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1efd70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1efd74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1efd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1efd78: 0x94a40  sll         $t1, $t1, 9
    ctx->pc = 0x1efd78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x1efd7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1efd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1efd80: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x1efd80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1efd84: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD84u;
        // 0x1efd88: 0xaca90004  sw          $t1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFD8Cu;
    // 0x1efd8c: 0x0  nop
    ctx->pc = 0x1efd8cu;
    // NOP
}
