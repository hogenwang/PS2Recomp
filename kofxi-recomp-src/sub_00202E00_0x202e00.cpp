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

// Function: sub_00202E00
// Address: 0x202e00 - 0x202ee0
void sub_00202E00_0x202e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202E00_0x202e00");
#endif

    switch (ctx->pc) {
        case 0x202e8cu: goto label_202e8c;
        case 0x202ea8u: goto label_202ea8;
        case 0x202ec4u: goto label_202ec4;
        default: break;
    }

    ctx->pc = 0x202e00u;

    // 0x202e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202e04: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x202e08: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x202e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x202e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e10: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x202e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x202e14: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x202e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202e18: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x202e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x202e1c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202e20: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x202e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x202e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x202e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x202e2c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x202e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202e30: 0x246af440  addiu       $t2, $v1, -0xBC0
    ctx->pc = 0x202e30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964288));
    // 0x202e34: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x202e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x202e38: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x202e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x202e3c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x202e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e40: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x202e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e44: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x202e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x202e48: 0x24a9f458  addiu       $t1, $a1, -0xBA8
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
    // 0x202e4c: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x202e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x202e50: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x202e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x202e54: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x202e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e58: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x202e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e5c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x202e60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x202e64: 0x24c7f470  addiu       $a3, $a2, -0xB90
    ctx->pc = 0x202e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964336));
    // 0x202e68: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x202e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x202e6c: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x202e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x202e70: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x202e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e74: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x202e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202e7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x202e80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x202e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x202e84: 0xc04a966  jal         func_12A598
    ctx->pc = 0x202E84u;
    SET_GPR_U32(ctx, 31, 0x202E8Cu);
    ctx->pc = 0x202E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E84u;
    // 0x202e88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x202E84u, 0x202E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E8Cu;
label_202e8c:
    // 0x202e8c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x202e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x202e90: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x202e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202e9c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x202e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x202ea0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x202EA0u;
    SET_GPR_U32(ctx, 31, 0x202EA8u);
    ctx->pc = 0x202EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EA0u;
    // 0x202ea4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x202EA0u, 0x202EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EA8u;
label_202ea8:
    // 0x202ea8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x202ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x202eac: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x202eb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202eb8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x202ebc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x202EBCu;
    SET_GPR_U32(ctx, 31, 0x202EC4u);
    ctx->pc = 0x202EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EBCu;
    // 0x202ec0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x202EBCu, 0x202EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC4u;
label_202ec4:
    // 0x202ec4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x202ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202ec8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x202ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202ecc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x202eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202ed0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x202ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202ed4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x202ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ED8u;
        // 0x202edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202EE0u;
}
