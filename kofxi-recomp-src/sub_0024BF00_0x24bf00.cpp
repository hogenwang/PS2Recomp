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

// Function: sub_0024BF00
// Address: 0x24bf00 - 0x24bf68
void sub_0024BF00_0x24bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF00_0x24bf00");
#endif

    switch (ctx->pc) {
        case 0x24bf38u: goto label_24bf38;
        default: break;
    }

    ctx->pc = 0x24bf00u;

    // 0x24bf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bf04: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24bf08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bf0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24bf14: 0x244601d0  addiu       $a2, $v0, 0x1D0
    ctx->pc = 0x24bf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x24bf18: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x24bf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24bf1c: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x24bf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24bf20: 0xaa03004b  swl         $v1, 0x4B($s0)
    ctx->pc = 0x24bf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bf24: 0xba030048  swr         $v1, 0x48($s0)
    ctx->pc = 0x24bf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bf28: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x24bf28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x24bf2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf30: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x24BF30u;
    SET_GPR_U32(ctx, 31, 0x24BF38u);
    ctx->pc = 0x24BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF30u;
    // 0x24bf34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C8D0u, 0x24BF30u, 0x24BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BF38u;
label_24bf38:
    // 0x24bf38: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x24bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24bf3c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x24bf3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x24bf40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24bf44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BF44u;
    {
        const bool branch_taken_0x24bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF44u;
        // 0x24bf48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf44) {
            ctx->pc = 0x24BF5Cu;
            goto label_24bf5c;
        }
    }
    ctx->pc = 0x24BF4Cu;
    // 0x24bf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bf54: 0x8092fda  j           func_24BF68
    ctx->pc = 0x24BF54u;
    ctx->pc = 0x24BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BF54u;
    // 0x24bf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF68u;
    sub_0024BF68_0x24bf68(rdram, ctx, runtime); return;
    ctx->pc = 0x24BF5Cu;
label_24bf5c:
    // 0x24bf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x24BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF60u;
        // 0x24bf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BF68u;
}
