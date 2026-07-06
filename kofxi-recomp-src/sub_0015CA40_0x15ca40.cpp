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

// Function: sub_0015CA40
// Address: 0x15ca40 - 0x15ca80
void sub_0015CA40_0x15ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CA40_0x15ca40");
#endif

    ctx->pc = 0x15ca40u;

    // 0x15ca40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ca44: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x15ca44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15ca48: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x15ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x15ca4c: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x15ca4cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15ca50: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x15ca50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15ca54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca58: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x15ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ca5c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ca60: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15ca64: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x15ca64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15ca68: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x15ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca6c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x15ca6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15ca70: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x15ca70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15ca74: 0x3e00008  jr          $ra
    ctx->pc = 0x15CA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA74u;
        // 0x15ca78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CA7Cu;
    // 0x15ca7c: 0x0  nop
    ctx->pc = 0x15ca7cu;
    // NOP
}
