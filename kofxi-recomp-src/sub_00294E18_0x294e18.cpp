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

// Function: sub_00294E18
// Address: 0x294e18 - 0x294f30
void sub_00294E18_0x294e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E18_0x294e18");
#endif

    switch (ctx->pc) {
        case 0x294ea0u: goto label_294ea0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294ec4u: goto label_294ec4;
        default: break;
    }

    ctx->pc = 0x294e18u;

    // 0x294e18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x294E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E1Cu;
        // 0x294e20: 0x24424b60  addiu       $v0, $v0, 0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E24u;
    // 0x294e24: 0x0  nop
    ctx->pc = 0x294e24u;
    // NOP
    // 0x294e28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x294E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E2Cu;
        // 0x294e30: 0x24424b90  addiu       $v0, $v0, 0x4B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E34u;
    // 0x294e34: 0x0  nop
    ctx->pc = 0x294e34u;
    // NOP
    // 0x294e38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x294E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E3Cu;
        // 0x294e40: 0x24424bc0  addiu       $v0, $v0, 0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E44u;
    // 0x294e44: 0x0  nop
    ctx->pc = 0x294e44u;
    // NOP
    // 0x294e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294e4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294e54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x294e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x294e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x294e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294e64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x294e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x294e68: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x294E68u;
    {
        const bool branch_taken_0x294e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E68u;
        // 0x294e6c: 0x8e130078  lw          $s3, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e68) {
            ctx->pc = 0x294E80u;
            goto label_294e80;
        }
    }
    ctx->pc = 0x294E70u;
    // 0x294e70: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x294e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294e74: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x294e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294e78: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x294e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294e7c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x294e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_294e80:
    // 0x294e80: 0x6a020013  ldl         $v0, 0x13($s0)
    ctx->pc = 0x294e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x294e84: 0x6e02000c  ldr         $v0, 0xC($s0)
    ctx->pc = 0x294e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x294e88: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x294e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294e8c: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x294e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x294e90: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x294E90u;
    {
        const bool branch_taken_0x294e90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E90u;
        // 0x294e94: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e90) {
            ctx->pc = 0x294EF4u;
            goto label_294ef4;
        }
    }
    ctx->pc = 0x294E98u;
    // 0x294e98: 0xc0a5b16  jal         func_296C58
    ctx->pc = 0x294E98u;
    SET_GPR_U32(ctx, 31, 0x294EA0u);
    ctx->pc = 0x294E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E98u;
    // 0x294e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C58u, 0x294E98u, 0x294EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EA0u;
label_294ea0:
    // 0x294ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ea4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x294EA4u;
    {
        const bool branch_taken_0x294ea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x294ea4) {
            ctx->pc = 0x294EBCu;
            goto label_294ebc;
        }
    }
    ctx->pc = 0x294EACu;
    // 0x294eac: 0xc0a5b0c  jal         func_296C30
    ctx->pc = 0x294EACu;
    SET_GPR_U32(ctx, 31, 0x294EB4u);
    ctx->pc = 0x294EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EACu;
    // 0x294eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C30u, 0x294EACu, 0x294EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EB4u;
label_294eb4:
    // 0x294eb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x294eb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294ebc:
    // 0x294ebc: 0xc0a5b0c  jal         func_296C30
    ctx->pc = 0x294EBCu;
    SET_GPR_U32(ctx, 31, 0x294EC4u);
    ctx->pc = 0x294EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EBCu;
    // 0x294ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C30u, 0x294EBCu, 0x294EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EC4u;
label_294ec4:
    // 0x294ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ec8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x294ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ecc: 0x11383c  dsll32      $a3, $s1, 0
    ctx->pc = 0x294eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 0));
    // 0x294ed0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x294ed0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x294ed4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x294ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294ed8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x294ed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294edc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294ee4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294eec: 0x80aa07e  j           func_2A81F8
    ctx->pc = 0x294EECu;
    ctx->pc = 0x294EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EECu;
    // 0x294ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A81F8u, 0x294EECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x294EF4u;
label_294ef4:
    // 0x294ef4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x294ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294ef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294efc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294f04: 0x3e00008  jr          $ra
    ctx->pc = 0x294F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F04u;
        // 0x294f08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F0Cu;
    // 0x294f0c: 0x0  nop
    ctx->pc = 0x294f0cu;
    // NOP
    // 0x294f10: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x294f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f14: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x294f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x294f18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x294f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f1c: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x294f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x294f20: 0x8d070078  lw          $a3, 0x78($t0)
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x294f24: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x294f28: 0x80a8e90  j           func_2A3A40
    ctx->pc = 0x294F28u;
    ctx->pc = 0x294F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294F28u;
    // 0x294f2c: 0x2508002c  addiu       $t0, $t0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3A40u, 0x294F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x294F30u;
}
