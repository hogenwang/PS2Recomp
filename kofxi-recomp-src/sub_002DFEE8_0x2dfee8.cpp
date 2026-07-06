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

// Function: sub_002DFEE8
// Address: 0x2dfee8 - 0x2dffd8
void sub_002DFEE8_0x2dfee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFEE8_0x2dfee8");
#endif

    switch (ctx->pc) {
        case 0x2dff70u: goto label_2dff70;
        case 0x2dff84u: goto label_2dff84;
        case 0x2dff94u: goto label_2dff94;
        case 0x2dffb8u: goto label_2dffb8;
        default: break;
    }

    ctx->pc = 0x2dfee8u;

    // 0x2dfee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dfee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dfeec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2dfef0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dfef4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dfef8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2dfef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2dfefc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2dfefcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2dff00: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2dff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2dff04: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2dff04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2dff08: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2dff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2dff0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dff0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff10: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2dff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2dff14: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dff18: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2dff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2dff1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dff1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff20: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2dff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2dff24: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2dff24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2dff28: 0x244cf128  addiu       $t4, $v0, -0xED8
    ctx->pc = 0x2dff28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963496));
    // 0x2dff2c: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x2dff2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2dff30: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x2dff30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2dff34: 0x8d8a0008  lw          $t2, 0x8($t4)
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2dff38: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2dff38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff3c: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2dff3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff40: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2dff40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2dff44: 0x246bf138  addiu       $t3, $v1, -0xEC8
    ctx->pc = 0x2dff44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963512));
    // 0x2dff48: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x2dff48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dff4c: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x2dff4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dff50: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x2dff50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff54: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x2dff54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff58: 0x24e4f140  addiu       $a0, $a3, -0xEC0
    ctx->pc = 0x2dff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963520));
    // 0x2dff5c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x2dff5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2dff60: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x2dff60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2dff64: 0xb26c0007  sdl         $t4, 0x7($s3)
    ctx->pc = 0x2dff64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff68: 0xb66c0000  sdr         $t4, 0x0($s3)
    ctx->pc = 0x2dff68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dff6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2dff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dff70:
    // 0x2dff70: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2dff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2dff74: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2dff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff7c: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFF7Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF84u);
    ctx->pc = 0x2DFF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF7Cu;
    // 0x2dff80: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DFF7Cu, 0x2DFF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF84u;
label_2dff84:
    // 0x2dff84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff8c: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF94u);
    ctx->pc = 0x2DFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF8Cu;
    // 0x2dff90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DFF8Cu, 0x2DFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF94u;
label_2dff94:
    // 0x2dff94: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2dff94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2dff98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dff9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffa0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2dffa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffa4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2dffa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffa8: 0x252968b8  addiu       $t1, $t1, 0x68B8
    ctx->pc = 0x2dffa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26808));
    // 0x2dffac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffb0: 0xc0b7f2a  jal         func_2DFCA8
    ctx->pc = 0x2DFFB0u;
    SET_GPR_U32(ctx, 31, 0x2DFFB8u);
    ctx->pc = 0x2DFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFFB0u;
    // 0x2dffb4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFCA8u, 0x2DFFB0u, 0x2DFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFB8u;
label_2dffb8:
    // 0x2dffb8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2dffb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dffbc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2dffbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dffc0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2dffc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dffc4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2dffc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dffc8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2dffc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dffcc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2dffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFD0u;
        // 0x2dffd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFFD8u;
}
