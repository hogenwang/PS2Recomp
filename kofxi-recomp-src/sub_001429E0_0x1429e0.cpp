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

// Function: sub_001429E0
// Address: 0x1429e0 - 0x142a70
void sub_001429E0_0x1429e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001429E0_0x1429e0");
#endif

    ctx->pc = 0x1429e0u;

    // 0x1429e0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1429e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1429e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1429e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1429e8: 0x0  nop
    ctx->pc = 0x1429e8u;
    // NOP
    // 0x1429ec: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1429ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1429f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1429F0u;
    {
        const bool branch_taken_0x1429f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1429f0) {
            ctx->pc = 0x1429F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1429F0u;
            // 0x1429f4: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142A00u;
            goto label_142a00;
        }
    }
    ctx->pc = 0x1429F8u;
    // 0x1429f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1429F8u;
    {
        const bool branch_taken_0x1429f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429F8u;
        // 0x1429fc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429f8) {
            ctx->pc = 0x142A5Cu;
            goto label_142a5c;
        }
    }
    ctx->pc = 0x142A00u;
label_142a00:
    // 0x142a00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142a04: 0x0  nop
    ctx->pc = 0x142a04u;
    // NOP
    // 0x142a08: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x142a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142a0c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x142A0Cu;
    {
        const bool branch_taken_0x142a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142a0c) {
            ctx->pc = 0x142A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142A0Cu;
            // 0x142a10: 0x3c024387  lui         $v0, 0x4387 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142A1Cu;
            goto label_142a1c;
        }
    }
    ctx->pc = 0x142A14u;
    // 0x142a14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x142A14u;
    {
        const bool branch_taken_0x142a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A14u;
        // 0x142a18: 0x460c1001  sub.s       $f0, $f2, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a14) {
            ctx->pc = 0x142A5Cu;
            goto label_142a5c;
        }
    }
    ctx->pc = 0x142A1Cu;
label_142a1c:
    // 0x142a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142a20: 0x0  nop
    ctx->pc = 0x142a20u;
    // NOP
    // 0x142a24: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x142a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142a28: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x142A28u;
    {
        const bool branch_taken_0x142a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142a28) {
            ctx->pc = 0x142A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142A28u;
            // 0x142a2c: 0x3c0243a0  lui         $v0, 0x43A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142A38u;
            goto label_142a38;
        }
    }
    ctx->pc = 0x142A30u;
    // 0x142a30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x142A30u;
    {
        const bool branch_taken_0x142a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A30u;
        // 0x142a34: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a30) {
            ctx->pc = 0x142A5Cu;
            goto label_142a5c;
        }
    }
    ctx->pc = 0x142A38u;
label_142a38:
    // 0x142a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142a3c: 0x0  nop
    ctx->pc = 0x142a3cu;
    // NOP
    // 0x142a40: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x142a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142a44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x142A44u;
    {
        const bool branch_taken_0x142a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142a44) {
            ctx->pc = 0x142A5Cu;
            goto label_142a5c;
        }
    }
    ctx->pc = 0x142A4Cu;
    // 0x142a4c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x142a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x142a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a54: 0x0  nop
    ctx->pc = 0x142a54u;
    // NOP
    // 0x142a58: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x142a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_142a5c:
    // 0x142a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x142A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142A64u;
    // 0x142a64: 0x0  nop
    ctx->pc = 0x142a64u;
    // NOP
    // 0x142a68: 0x0  nop
    ctx->pc = 0x142a68u;
    // NOP
    // 0x142a6c: 0x0  nop
    ctx->pc = 0x142a6cu;
    // NOP
    if (ctx->pc == 0x142a6cu) { ctx->pc = 0x142a70u; }
}
