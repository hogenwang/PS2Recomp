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

// Function: sub_00211E48
// Address: 0x211e48 - 0x211ed8
void sub_00211E48_0x211e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211E48_0x211e48");
#endif

    switch (ctx->pc) {
        case 0x211e80u: goto label_211e80;
        case 0x211eb8u: goto label_211eb8;
        default: break;
    }

    ctx->pc = 0x211e48u;

label_211e48:
    // 0x211e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211e4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211e54: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x211e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e5c: 0x8043e52  j           func_10F948
    ctx->pc = 0x211E5Cu;
    ctx->pc = 0x211E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E5Cu;
    // 0x211e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x211E64u;
    // 0x211e64: 0x0  nop
    ctx->pc = 0x211e64u;
    // NOP
    // 0x211e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211e6c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x211e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211e70: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211e70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211e78: 0xc084792  jal         func_211E48
    ctx->pc = 0x211E78u;
    SET_GPR_U32(ctx, 31, 0x211E80u);
    ctx->pc = 0x211E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E78u;
    // 0x211e7c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E48u;
    goto label_211e48;
    ctx->pc = 0x211E80u;
label_211e80:
    // 0x211e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e88: 0x3e00008  jr          $ra
    ctx->pc = 0x211E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E88u;
        // 0x211e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E90u;
    // 0x211e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211e94: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211e94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211ea4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x211ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211ea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211eac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211eb0: 0xc084792  jal         func_211E48
    ctx->pc = 0x211EB0u;
    SET_GPR_U32(ctx, 31, 0x211EB8u);
    ctx->pc = 0x211EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211EB0u;
    // 0x211eb4: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E48u;
    goto label_211e48;
    ctx->pc = 0x211EB8u;
label_211eb8:
    // 0x211eb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x211eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ec0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211ec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x211ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211ECCu;
        // 0x211ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211ED4u;
    // 0x211ed4: 0x0  nop
    ctx->pc = 0x211ed4u;
    // NOP
    if (ctx->pc == 0x211ed4u) { ctx->pc = 0x211ed8u; }
}
