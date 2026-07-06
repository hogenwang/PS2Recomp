#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142A70
// Address: 0x142a70 - 0x142af0
void sub_00142A70_0x142a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142A70_0x142a70");
#endif

    ctx->pc = 0x142a70u;

    // 0x142a70: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x142a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x142a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a78: 0x0  nop
    ctx->pc = 0x142a78u;
    // NOP
    // 0x142a7c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x142a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142a80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x142A80u;
    {
        const bool branch_taken_0x142a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A80u;
            // 0x142a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a80) {
            ctx->pc = 0x142A90u;
            goto label_142a90;
        }
    }
    ctx->pc = 0x142A88u;
    // 0x142a88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x142A88u;
    {
        const bool branch_taken_0x142a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a88) {
            ctx->pc = 0x142AE4u;
            goto label_142ae4;
        }
    }
    ctx->pc = 0x142A90u;
label_142a90:
    // 0x142a90: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x142a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a98: 0x0  nop
    ctx->pc = 0x142a98u;
    // NOP
    // 0x142a9c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x142a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142aa0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x142AA0u;
    {
        const bool branch_taken_0x142aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142aa0) {
            ctx->pc = 0x142AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142AA0u;
            // 0x142aa4: 0x3c034387  lui         $v1, 0x4387 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142AB0u;
            goto label_142ab0;
        }
    }
    ctx->pc = 0x142AA8u;
    // 0x142aa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x142AA8u;
    {
        const bool branch_taken_0x142aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AA8u;
            // 0x142aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142aa8) {
            ctx->pc = 0x142AE4u;
            goto label_142ae4;
        }
    }
    ctx->pc = 0x142AB0u;
label_142ab0:
    // 0x142ab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ab4: 0x0  nop
    ctx->pc = 0x142ab4u;
    // NOP
    // 0x142ab8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x142ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142abc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x142ABCu;
    {
        const bool branch_taken_0x142abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142abc) {
            ctx->pc = 0x142AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142ABCu;
            // 0x142ac0: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142ACCu;
            goto label_142acc;
        }
    }
    ctx->pc = 0x142AC4u;
    // 0x142ac4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142AC4u;
    {
        const bool branch_taken_0x142ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AC4u;
            // 0x142ac8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ac4) {
            ctx->pc = 0x142AE4u;
            goto label_142ae4;
        }
    }
    ctx->pc = 0x142ACCu;
label_142acc:
    // 0x142acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ad0: 0x0  nop
    ctx->pc = 0x142ad0u;
    // NOP
    // 0x142ad4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x142ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142ad8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142AD8u;
    {
        const bool branch_taken_0x142ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142ad8) {
            ctx->pc = 0x142AE4u;
            goto label_142ae4;
        }
    }
    ctx->pc = 0x142AE0u;
    // 0x142ae0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142ae4:
    // 0x142ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x142AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142AECu;
    // 0x142aec: 0x0  nop
    ctx->pc = 0x142aecu;
    // NOP
    ctx->pc = 0x142af0u;
}
