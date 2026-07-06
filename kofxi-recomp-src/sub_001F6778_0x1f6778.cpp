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

// Function: sub_001F6778
// Address: 0x1f6778 - 0x1f67f0
void sub_001F6778_0x1f6778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6778_0x1f6778");
#endif

    switch (ctx->pc) {
        case 0x1f67dcu: goto label_1f67dc;
        default: break;
    }

    ctx->pc = 0x1f6778u;

    // 0x1f6778: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1f6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f677c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F677Cu;
        // 0x1f6780: 0x8c6211fc  lw          $v0, 0x11FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6784u;
    // 0x1f6784: 0x0  nop
    ctx->pc = 0x1f6784u;
    // NOP
    // 0x1f6788: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x1f678c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f678cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6798: 0xac629b78  sw          $v0, -0x6488($v1)
    ctx->pc = 0x1f6798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941560), GPR_U32(ctx, 2));
    // 0x1f679c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f67a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f67a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67a4: 0x24489b80  addiu       $t0, $v0, -0x6480
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1f67a8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1f67a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f67ac: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1f67acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f67b0: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x1f67b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f67b4: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x1f67b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f67b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f67bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f67bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67c0: 0x8cc22018  lw          $v0, 0x2018($a2)
    ctx->pc = 0x1f67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8216)));
    // 0x1f67c4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1f67c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f67c8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1f67c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f67cc: 0xb04911ff  sdl         $t1, 0x11FF($v0)
    ctx->pc = 0x1f67ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f67d0: 0xb44911f8  sdr         $t1, 0x11F8($v0)
    ctx->pc = 0x1f67d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f67d4: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F67D4u;
    SET_GPR_U32(ctx, 31, 0x1F67DCu);
    ctx->pc = 0x1F67D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67D4u;
    // 0x1f67d8: 0x34a50f40  ori         $a1, $a1, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F67D4u, 0x1F67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67DCu;
label_1f67dc:
    // 0x1f67dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f67e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f67e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F67E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E4u;
        // 0x1f67e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F67E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F67ECu;
    // 0x1f67ec: 0x0  nop
    ctx->pc = 0x1f67ecu;
    // NOP
}
