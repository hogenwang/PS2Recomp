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

// Function: sub_0024FEF8
// Address: 0x24fef8 - 0x24ffb0
void sub_0024FEF8_0x24fef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FEF8_0x24fef8");
#endif

    switch (ctx->pc) {
        case 0x24ff60u: goto label_24ff60;
        case 0x24ff8cu: goto label_24ff8c;
        default: break;
    }

    ctx->pc = 0x24fef8u;

    // 0x24fef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fefc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ff00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ff04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24ff08: 0x245011c4  addiu       $s0, $v0, 0x11C4
    ctx->pc = 0x24ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4548));
    // 0x24ff0c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ff10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24ff14: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x24ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x24ff18: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24FF18u;
    {
        const bool branch_taken_0x24ff18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF18u;
        // 0x24ff1c: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff18) {
            ctx->pc = 0x24FF64u;
            goto label_24ff64;
        }
    }
    ctx->pc = 0x24FF20u;
    // 0x24ff20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff24: 0x8a020007  lwl         $v0, 0x7($s0)
    ctx->pc = 0x24ff24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24ff28: 0x9a020004  lwr         $v0, 0x4($s0)
    ctx->pc = 0x24ff28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24ff2c: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24FF2Cu;
    {
        const bool branch_taken_0x24ff2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ff2c) {
            ctx->pc = 0x24FF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF2Cu;
            // 0x24ff30: 0x8e2411c0  lw          $a0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FF34u;
    // 0x24ff34: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x24ff38: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x24ff38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24ff3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FF3Cu;
    {
        const bool branch_taken_0x24ff3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF3Cu;
        // 0x24ff40: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff3c) {
            ctx->pc = 0x24FF58u;
            goto label_24ff58;
        }
    }
    ctx->pc = 0x24FF44u;
    // 0x24ff44: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x24ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x24ff48: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x24ff48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x24ff4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24FF4Cu;
    {
        const bool branch_taken_0x24ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF4Cu;
        // 0x24ff50: 0xae2011c0  sw          $zero, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff4c) {
            ctx->pc = 0x24FF64u;
            goto label_24ff64;
        }
    }
    ctx->pc = 0x24FF54u;
    // 0x24ff54: 0x0  nop
    ctx->pc = 0x24ff54u;
    // NOP
label_24ff58:
    // 0x24ff58: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24FF58u;
    SET_GPR_U32(ctx, 31, 0x24FF60u);
    ctx->pc = 0x24FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF58u;
    // 0x24ff5c: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24FF58u, 0x24FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF60u;
label_24ff60:
    // 0x24ff60: 0xae2011c0  sw          $zero, 0x11C0($s1)
    ctx->pc = 0x24ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 0));
label_24ff64:
    // 0x24ff64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ff68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24ff6c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x24ff6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ff70: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x24ff70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24ff74: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x24ff74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24ff78: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x24ff78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24ff7c: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x24ff7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24ff80: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x24ff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24ff84: 0xc090bda  jal         func_242F68
    ctx->pc = 0x24FF84u;
    SET_GPR_U32(ctx, 31, 0x24FF8Cu);
    ctx->pc = 0x24FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF84u;
    // 0x24ff88: 0x262411c0  addiu       $a0, $s1, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242F68u, 0x24FF84u, 0x24FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x24ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_24ff90:
    // 0x24ff90: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FF90u;
    {
        const bool branch_taken_0x24ff90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF90u;
        // 0x24ff94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff90) {
            ctx->pc = 0x24FF9Cu;
            goto label_24ff9c;
        }
    }
    ctx->pc = 0x24FF98u;
    // 0x24ff98: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x24ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_24ff9c:
    // 0x24ff9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24ff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ffa0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24ffa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ffa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ffa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA8u;
        // 0x24ffac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FFB0u;
}
