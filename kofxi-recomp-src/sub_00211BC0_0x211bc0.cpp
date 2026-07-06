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

// Function: sub_00211BC0
// Address: 0x211bc0 - 0x211c50
void sub_00211BC0_0x211bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211BC0_0x211bc0");
#endif

    switch (ctx->pc) {
        case 0x211bf8u: goto label_211bf8;
        case 0x211c30u: goto label_211c30;
        default: break;
    }

    ctx->pc = 0x211bc0u;

label_211bc0:
    // 0x211bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211bc4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211bcc: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x211bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x211bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bd4: 0x8043e52  j           func_10F948
    ctx->pc = 0x211BD4u;
    ctx->pc = 0x211BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BD4u;
    // 0x211bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x211BDCu;
    // 0x211bdc: 0x0  nop
    ctx->pc = 0x211bdcu;
    // NOP
    // 0x211be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211be4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x211be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211be8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211bf0: 0xc0846f0  jal         func_211BC0
    ctx->pc = 0x211BF0u;
    SET_GPR_U32(ctx, 31, 0x211BF8u);
    ctx->pc = 0x211BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BF0u;
    // 0x211bf4: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BC0u;
    goto label_211bc0;
    ctx->pc = 0x211BF8u;
label_211bf8:
    // 0x211bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c00: 0x3e00008  jr          $ra
    ctx->pc = 0x211C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C00u;
        // 0x211c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C08u;
    // 0x211c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211c0c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211c1c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x211c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211c20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211c28: 0xc0846f0  jal         func_211BC0
    ctx->pc = 0x211C28u;
    SET_GPR_U32(ctx, 31, 0x211C30u);
    ctx->pc = 0x211C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C28u;
    // 0x211c2c: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BC0u;
    goto label_211bc0;
    ctx->pc = 0x211C30u;
label_211c30:
    // 0x211c30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x211c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211c38: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x211c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211c3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211c44: 0x3e00008  jr          $ra
    ctx->pc = 0x211C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C4Cu;
    // 0x211c4c: 0x0  nop
    ctx->pc = 0x211c4cu;
    // NOP
    if (ctx->pc == 0x211c4cu) { ctx->pc = 0x211c50u; }
}
