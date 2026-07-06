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

// Function: sub_001CCDF8
// Address: 0x1ccdf8 - 0x1ccef0
void sub_001CCDF8_0x1ccdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCDF8_0x1ccdf8");
#endif

    switch (ctx->pc) {
        case 0x1cce58u: goto label_1cce58;
        default: break;
    }

    ctx->pc = 0x1ccdf8u;

    // 0x1ccdf8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1ccdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ccdfc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1ccdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1cce00: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1cce00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cce04: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1cce04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cce08: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cce0c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1cce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1cce10: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cce14: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cce18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE18u;
    {
        const bool branch_taken_0x1cce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce18) {
            ctx->pc = 0x1CCE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCE18u;
            // 0x1cce1c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE2Cu;
            goto label_1cce2c;
        }
    }
    ctx->pc = 0x1CCE20u;
    // 0x1cce20: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1cce20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1cce24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cce24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce28: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1cce2c:
    // 0x1cce2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCE30u;
    {
        const bool branch_taken_0x1cce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE30u;
        // 0x1cce34: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce30) {
            ctx->pc = 0x1CCE40u;
            goto label_1cce40;
        }
    }
    ctx->pc = 0x1CCE38u;
    // 0x1cce38: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE38u;
        // 0x1cce3c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE40u;
label_1cce40:
    // 0x1cce40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cce44: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1cce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cce48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE4Cu;
        // 0x1cce50: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE54u;
    // 0x1cce54: 0x0  nop
    ctx->pc = 0x1cce54u;
    // NOP
label_1cce58:
    // 0x1cce58: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cce5c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1cce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1cce60: 0x2463d808  addiu       $v1, $v1, -0x27F8
    ctx->pc = 0x1cce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957064));
    // 0x1cce64: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce6c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1cce6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cce70: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1cce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1cce74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce78: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cce7c: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x1cce7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cce80: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x1cce80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1cce84: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cce84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cce88: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cce8c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x1cce8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cce90: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1cce90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1cce94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce98: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cce98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cce9c: 0xa0a70005  sb          $a3, 0x5($a1)
    ctx->pc = 0x1cce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ccea0: 0x3088000f  andi        $t0, $a0, 0xF
    ctx->pc = 0x1ccea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ccea4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1ccea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ccea8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cceac: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x1cceacu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cceb0: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x1cceb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1cceb4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cceb8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ccebc: 0xa0a90004  sb          $t1, 0x4($a1)
    ctx->pc = 0x1ccebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x1ccec0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x1ccec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ccec4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ccec8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1ccec8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccecc: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x1cceccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cced0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1cced0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cced4: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1cced4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cced8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1cced8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ccedc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1ccedcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccee0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ccee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEE4u;
        // 0x1ccee8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEECu;
    // 0x1cceec: 0x0  nop
    ctx->pc = 0x1cceecu;
    // NOP
}
