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

// Function: sub_0024C030
// Address: 0x24c030 - 0x24c0a0
void sub_0024C030_0x24c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C030_0x24c030");
#endif

    switch (ctx->pc) {
        case 0x24c060u: goto label_24c060;
        default: break;
    }

    ctx->pc = 0x24c030u;

    // 0x24c030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24c034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24c038: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24c03c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c040: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24c044: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x24c044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24c048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c04c: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x24c04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24c050: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x24c050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x24c054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c058: 0xc048c96  jal         func_123258
    ctx->pc = 0x24C058u;
    SET_GPR_U32(ctx, 31, 0x24C060u);
    ctx->pc = 0x24C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C058u;
    // 0x24c05c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24C058u, 0x24C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C060u;
label_24c060:
    // 0x24c060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c064: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x24c064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x24c068: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x24c068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x24c06c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24c06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c070: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x24c070u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x24c074: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c078: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x24c078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x24c07c: 0x8a420047  lwl         $v0, 0x47($s2)
    ctx->pc = 0x24c07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24c080: 0x9a420044  lwr         $v0, 0x44($s2)
    ctx->pc = 0x24c080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24c084: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x24c084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24c088: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x24c088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24c08c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c094: 0x3e00008  jr          $ra
    ctx->pc = 0x24C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C094u;
        // 0x24c098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C09Cu;
    // 0x24c09c: 0x0  nop
    ctx->pc = 0x24c09cu;
    // NOP
    if (ctx->pc == 0x24c09cu) { ctx->pc = 0x24c0a0u; }
}
