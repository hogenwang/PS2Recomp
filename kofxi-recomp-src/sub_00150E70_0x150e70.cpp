#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150E70
// Address: 0x150e70 - 0x150ee0
void sub_00150E70_0x150e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150E70_0x150e70");
#endif

    ctx->pc = 0x150e70u;

    // 0x150e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150e74: 0x0  nop
    ctx->pc = 0x150e74u;
    // NOP
    // 0x150e78: 0x461060c3  div.s       $f3, $f12, $f16
    ctx->pc = 0x150e78u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[3] = ctx->f[12] / ctx->f[16];
    // 0x150e7c: 0x46107003  div.s       $f0, $f14, $f16
    ctx->pc = 0x150e7cu;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[0] = ctx->f[14] / ctx->f[16];
    // 0x150e80: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x150e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x150e84: 0x46116843  div.s       $f1, $f13, $f17
    ctx->pc = 0x150e84u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[1] = ctx->f[13] / ctx->f[17];
    // 0x150e88: 0x46117803  div.s       $f0, $f15, $f17
    ctx->pc = 0x150e88u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[0] = ctx->f[15] / ctx->f[17];
    // 0x150e8c: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x150e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x150e90: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x150e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x150e94: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x150e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x150e98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150e9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x150e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x150ea0: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x150ea0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x150ea4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x150ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x150ea8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x150ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x150eac: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x150eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x150eb0: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x150eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x150eb4: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x150eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x150eb8: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x150eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x150ebc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x150ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x150ec0: 0xe4820060  swc1        $f2, 0x60($a0)
    ctx->pc = 0x150ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x150ec4: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x150ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x150ec8: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x150ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x150ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x150ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150ECCu;
            // 0x150ed0: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150ED4u;
    // 0x150ed4: 0x0  nop
    ctx->pc = 0x150ed4u;
    // NOP
    // 0x150ed8: 0x0  nop
    ctx->pc = 0x150ed8u;
    // NOP
    // 0x150edc: 0x0  nop
    ctx->pc = 0x150edcu;
    // NOP
    ctx->pc = 0x150ee0u;
}
