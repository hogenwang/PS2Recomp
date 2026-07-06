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

// Function: sub_001FFA20
// Address: 0x1ffa20 - 0x1ffbd0
void sub_001FFA20_0x1ffa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFA20_0x1ffa20");
#endif

    switch (ctx->pc) {
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffb00u: goto label_1ffb00;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb94u: goto label_1ffb94;
        default: break;
    }

    ctx->pc = 0x1ffa20u;

    // 0x1ffa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffa28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffa2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffa34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ffa34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ffa38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffa3c: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FFA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA44u);
    ctx->pc = 0x1FFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA3Cu;
    // 0x1ffa40: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FFA3Cu, 0x1FFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA44u;
label_1ffa44:
    // 0x1ffa44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFA44u;
    {
        const bool branch_taken_0x1ffa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa44) {
            ctx->pc = 0x1FFA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFA44u;
            // 0x1ffa48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFA5Cu;
            goto label_1ffa5c;
        }
    }
    ctx->pc = 0x1FFA4Cu;
    // 0x1ffa4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ffa50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ffa54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ffa58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffa5c:
    // 0x1ffa5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffa5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffa60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffa64: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA64u;
        // 0x1ffa68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA6Cu;
    // 0x1ffa6c: 0x0  nop
    ctx->pc = 0x1ffa6cu;
    // NOP
    // 0x1ffa70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ffa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa74: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ffa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffa78: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ffa78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ffa7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ffa84: 0x286300e1  slti        $v1, $v1, 0xE1
    ctx->pc = 0x1ffa84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1ffa88: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA88u;
    {
        const bool branch_taken_0x1ffa88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA88u;
        // 0x1ffa8c: 0x24a500b0  addiu       $a1, $a1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa88) {
            ctx->pc = 0x1FFA9Cu;
            goto label_1ffa9c;
        }
    }
    ctx->pc = 0x1FFA90u;
    // 0x1ffa90: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ffa94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa98: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ffa98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1ffa9c:
    // 0x1ffa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFAA4u;
    // 0x1ffaa4: 0x0  nop
    ctx->pc = 0x1ffaa4u;
    // NOP
    // 0x1ffaa8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ffaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaac: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffab0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ffab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ffab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffab8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ffabc: 0x286300e1  slti        $v1, $v1, 0xE1
    ctx->pc = 0x1ffabcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1ffac0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFAC0u;
    {
        const bool branch_taken_0x1ffac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAC0u;
        // 0x1ffac4: 0x24a500b0  addiu       $a1, $a1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffac0) {
            ctx->pc = 0x1FFAD4u;
            goto label_1ffad4;
        }
    }
    ctx->pc = 0x1FFAC8u;
    // 0x1ffac8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1ffac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ffacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffad0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ffad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1ffad4:
    // 0x1ffad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFADCu;
    // 0x1ffadc: 0x0  nop
    ctx->pc = 0x1ffadcu;
    // NOP
    // 0x1ffae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffae4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ffae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffaec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ffaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffaf8: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFAF8u;
    SET_GPR_U32(ctx, 31, 0x1FFB00u);
    ctx->pc = 0x1FFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAF8u;
    // 0x1ffafc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFAF8u, 0x1FFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB00u;
label_1ffb00:
    // 0x1ffb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb0c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFB0Cu;
    {
        const bool branch_taken_0x1ffb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB0Cu;
        // 0x1ffb10: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb0c) {
            ctx->pc = 0x1FFB40u;
            goto label_1ffb40;
        }
    }
    ctx->pc = 0x1FFB14u;
    // 0x1ffb14: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FFB14u;
    SET_GPR_U32(ctx, 31, 0x1FFB1Cu);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1FFB14u, 0x1FFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB1Cu;
label_1ffb1c:
    // 0x1ffb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffb20: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1ffb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ffb24: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1ffb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ffb28: 0x8a24000b  lwl         $a0, 0xB($s1)
    ctx->pc = 0x1ffb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ffb2c: 0x9a240008  lwr         $a0, 0x8($s1)
    ctx->pc = 0x1ffb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ffb30: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ffb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffb34: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ffb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffb38: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x1ffb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ffb3c: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x1ffb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ffb40:
    // 0x1ffb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffb44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffb48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB4Cu;
        // 0x1ffb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFB54u;
    // 0x1ffb54: 0x0  nop
    ctx->pc = 0x1ffb54u;
    // NOP
    // 0x1ffb58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffb5c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ffb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffb60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffb64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ffb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffb6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffb70: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFB70u;
    SET_GPR_U32(ctx, 31, 0x1FFB78u);
    ctx->pc = 0x1FFB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB70u;
    // 0x1ffb74: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFB70u, 0x1FFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB78u;
label_1ffb78:
    // 0x1ffb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb84: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFB84u;
    {
        const bool branch_taken_0x1ffb84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB84u;
        // 0x1ffb88: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb84) {
            ctx->pc = 0x1FFBB8u;
            goto label_1ffbb8;
        }
    }
    ctx->pc = 0x1FFB8Cu;
    // 0x1ffb8c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB94u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1FFB8Cu, 0x1FFB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB94u;
label_1ffb94:
    // 0x1ffb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffb98: 0x6a230013  ldl         $v1, 0x13($s1)
    ctx->pc = 0x1ffb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ffb9c: 0x6e23000c  ldr         $v1, 0xC($s1)
    ctx->pc = 0x1ffb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ffba0: 0x8a240017  lwl         $a0, 0x17($s1)
    ctx->pc = 0x1ffba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ffba4: 0x9a240014  lwr         $a0, 0x14($s1)
    ctx->pc = 0x1ffba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ffba8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ffba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffbac: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ffbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffbb0: 0xaa04000b  swl         $a0, 0xB($s0)
    ctx->pc = 0x1ffbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ffbb4: 0xba040008  swr         $a0, 0x8($s0)
    ctx->pc = 0x1ffbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ffbb8:
    // 0x1ffbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffbbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffbc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBC4u;
        // 0x1ffbc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFBCCu;
    // 0x1ffbcc: 0x0  nop
    ctx->pc = 0x1ffbccu;
    // NOP
    if (ctx->pc == 0x1ffbccu) { ctx->pc = 0x1ffbd0u; }
}
