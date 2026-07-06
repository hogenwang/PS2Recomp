#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5040
// Address: 0x1c5040 - 0x1c5098
void sub_001C5040_0x1c5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5040_0x1c5040");
#endif

    switch (ctx->pc) {
        case 0x1c5060u: goto label_1c5060;
        case 0x1c5084u: goto label_1c5084;
        default: break;
    }

    ctx->pc = 0x1c5040u;

    // 0x1c5040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5044: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c5044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5048: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c504c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c504cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5054: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c5058: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C5058u;
    SET_GPR_U32(ctx, 31, 0x1C5060u);
    ctx->pc = 0x1C505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5058u;
            // 0x1c505c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5060u; }
        if (ctx->pc != 0x1C5060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5060u; }
        if (ctx->pc != 0x1C5060u) { return; }
    }
    ctx->pc = 0x1C5060u;
label_1c5060:
    // 0x1c5060: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1c5060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1c5064: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1c5064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1c5068: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1c5068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c506c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c5070: 0x24a5a418  addiu       $a1, $a1, -0x5BE8
    ctx->pc = 0x1c5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943768));
    // 0x1c5074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5078: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1c5078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c507c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1C507Cu;
    SET_GPR_U32(ctx, 31, 0x1C5084u);
    ctx->pc = 0x1C5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C507Cu;
            // 0x1c5080: 0xa3a00005  sb          $zero, 0x5($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5084u; }
        if (ctx->pc != 0x1C5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5084u; }
        if (ctx->pc != 0x1C5084u) { return; }
    }
    ctx->pc = 0x1C5084u;
label_1c5084:
    // 0x1c5084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5088: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c508c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5090u;
            // 0x1c5094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5098u;
    ctx->pc = 0x1c5098u;
}
