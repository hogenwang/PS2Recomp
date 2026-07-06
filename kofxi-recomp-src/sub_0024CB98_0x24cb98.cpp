#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024CB98
// Address: 0x24cb98 - 0x24cc08
void sub_0024CB98_0x24cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CB98_0x24cb98");
#endif

    switch (ctx->pc) {
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbf0u: goto label_24cbf0;
        default: break;
    }

    ctx->pc = 0x24cb98u;

    // 0x24cb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24cb9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24cba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24cba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24cbb0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24CBB0u;
    {
        const bool branch_taken_0x24cbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBB0u;
            // 0x24cbb4: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbb0) {
            ctx->pc = 0x24CBF0u;
            goto label_24cbf0;
        }
    }
    ctx->pc = 0x24CBB8u;
    // 0x24cbb8: 0xc08a254  jal         func_228950
    ctx->pc = 0x24CBB8u;
    SET_GPR_U32(ctx, 31, 0x24CBC0u);
    ctx->pc = 0x24CBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBB8u;
            // 0x24cbbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBC0u; }
        if (ctx->pc != 0x24CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBC0u; }
        if (ctx->pc != 0x24CBC0u) { return; }
    }
    ctx->pc = 0x24CBC0u;
label_24cbc0:
    // 0x24cbc0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24cbc4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24CBC4u;
    {
        const bool branch_taken_0x24cbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBC4u;
            // 0x24cbc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbc4) {
            ctx->pc = 0x24CBF0u;
            goto label_24cbf0;
        }
    }
    ctx->pc = 0x24CBCCu;
    // 0x24cbcc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24cbd0: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x24cbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cbd4: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x24cbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24cbd8: 0x8a02004b  lwl         $v0, 0x4B($s0)
    ctx->pc = 0x24cbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24cbdc: 0x9a020048  lwr         $v0, 0x48($s0)
    ctx->pc = 0x24cbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24cbe0: 0xaa02002b  swl         $v0, 0x2B($s0)
    ctx->pc = 0x24cbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24cbe4: 0xba020028  swr         $v0, 0x28($s0)
    ctx->pc = 0x24cbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24cbe8: 0xc090bda  jal         func_242F68
    ctx->pc = 0x24CBE8u;
    SET_GPR_U32(ctx, 31, 0x24CBF0u);
    ctx->pc = 0x24CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBE8u;
            // 0x24cbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (runtime->hasFunction(0x242F68u)) {
        auto targetFn = runtime->lookupFunction(0x242F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBF0u; }
        if (ctx->pc != 0x24CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242F68_0x242f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBF0u; }
        if (ctx->pc != 0x24CBF0u) { return; }
    }
    ctx->pc = 0x24CBF0u;
label_24cbf0:
    // 0x24cbf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24cbf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cbf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cbfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cbfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc00: 0x3e00008  jr          $ra
    ctx->pc = 0x24CC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC00u;
            // 0x24cc04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24CC08u;
    ctx->pc = 0x24cc08u;
}
