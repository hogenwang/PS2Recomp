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

// Function: sub_00161E10
// Address: 0x161e10 - 0x161e80
void sub_00161E10_0x161e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161E10_0x161e10");
#endif

    switch (ctx->pc) {
        case 0x161e28u: goto label_161e28;
        case 0x161e4cu: goto label_161e4c;
        default: break;
    }

    ctx->pc = 0x161e10u;

    // 0x161e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e20: 0xc06818c  jal         func_1A0630
    ctx->pc = 0x161E20u;
    SET_GPR_U32(ctx, 31, 0x161E28u);
    ctx->pc = 0x161E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E20u;
    // 0x161e24: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0630u, 0x161E20u, 0x161E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E28u;
label_161e28:
    // 0x161e28: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x161e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e30: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x161e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x161e34: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161e38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x161e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x161e3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161e40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x161e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x161e44: 0xc06818c  jal         func_1A0630
    ctx->pc = 0x161E44u;
    SET_GPR_U32(ctx, 31, 0x161E4Cu);
    ctx->pc = 0x161E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E44u;
    // 0x161e48: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0630u, 0x161E44u, 0x161E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E4Cu;
label_161e4c:
    // 0x161e4c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x161e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e54: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x161e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x161e58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x161e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161e5c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x161e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x161e60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161e64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x161e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x161e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e70: 0x3e00008  jr          $ra
    ctx->pc = 0x161E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E70u;
        // 0x161e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E78u;
    // 0x161e78: 0x0  nop
    ctx->pc = 0x161e78u;
    // NOP
    // 0x161e7c: 0x0  nop
    ctx->pc = 0x161e7cu;
    // NOP
}
