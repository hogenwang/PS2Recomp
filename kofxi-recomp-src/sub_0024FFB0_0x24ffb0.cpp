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

// Function: sub_0024FFB0
// Address: 0x24ffb0 - 0x250018
void sub_0024FFB0_0x24ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FFB0_0x24ffb0");
#endif

    switch (ctx->pc) {
        case 0x24ffe4u: goto label_24ffe4;
        default: break;
    }

    ctx->pc = 0x24ffb0u;

    // 0x24ffb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ffb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24ffb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ffbc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24ffc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ffc4: 0x90910001  lbu         $s1, 0x1($a0)
    ctx->pc = 0x24ffc4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x24ffc8: 0x2e22002c  sltiu       $v0, $s1, 0x2C
    ctx->pc = 0x24ffc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x24ffcc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24FFCCu;
    {
        const bool branch_taken_0x24ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFCCu;
        // 0x24ffd0: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffcc) {
            ctx->pc = 0x250004u;
            goto label_250004;
        }
    }
    ctx->pc = 0x24FFD4u;
    // 0x24ffd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24ffd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffd8: 0x2610ae65  addiu       $s0, $s0, -0x519B
    ctx->pc = 0x24ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946405));
    // 0x24ffdc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FFDCu;
    SET_GPR_U32(ctx, 31, 0x24FFE4u);
    ctx->pc = 0x24FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFDCu;
    // 0x24ffe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24FFDCu, 0x24FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFE4u;
label_24ffe4:
    // 0x24ffe4: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x24ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x24ffe8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24ffec: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x24fff0: 0x8ba40003  lwl         $a0, 0x3($sp)
    ctx->pc = 0x24fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24fff4: 0x9ba40000  lwr         $a0, 0x0($sp)
    ctx->pc = 0x24fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24fff8: 0xaa04fffe  swl         $a0, -0x2($s0)
    ctx->pc = 0x24fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967294); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fffc: 0xba04fffb  swr         $a0, -0x5($s0)
    ctx->pc = 0x24fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x250000: 0xac621038  sw          $v0, 0x1038($v1)
    ctx->pc = 0x250000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4152), GPR_U32(ctx, 2));
label_250004:
    // 0x250004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x250004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250008: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x250008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25000c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25000cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250010: 0x3e00008  jr          $ra
    ctx->pc = 0x250010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250010u;
        // 0x250014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250018u;
}
