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

// Function: sub_00230AA0
// Address: 0x230aa0 - 0x230b28
void sub_00230AA0_0x230aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230AA0_0x230aa0");
#endif

    switch (ctx->pc) {
        case 0x230ac8u: goto label_230ac8;
        case 0x230ae8u: goto label_230ae8;
        case 0x230b1cu: goto label_230b1c;
        default: break;
    }

    ctx->pc = 0x230aa0u;

    // 0x230aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230aa4: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x230AA4u;
    {
        const bool branch_taken_0x230aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA4u;
        // 0x230aa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa4) {
            ctx->pc = 0x230B1Cu;
            goto label_230b1c;
        }
    }
    ctx->pc = 0x230AACu;
    // 0x230aac: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x230aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x230ab0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x230AB0u;
    {
        const bool branch_taken_0x230ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AB0u;
        // 0x230ab4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ab0) {
            ctx->pc = 0x230B0Cu;
            goto label_230b0c;
        }
    }
    ctx->pc = 0x230AB8u;
    // 0x230ab8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x230ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x230abc: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x230ABCu;
    {
        const bool branch_taken_0x230abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230abc) {
            ctx->pc = 0x230AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230ABCu;
            // 0x230ac0: 0x94c20012  lhu         $v0, 0x12($a2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230AECu;
            goto label_230aec;
        }
    }
    ctx->pc = 0x230AC4u;
    // 0x230ac4: 0x0  nop
    ctx->pc = 0x230ac4u;
    // NOP
label_230ac8:
    // 0x230ac8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x230ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230acc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x230accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x230ad0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x230ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ad4: 0x0  nop
    ctx->pc = 0x230ad4u;
    // NOP
    // 0x230ad8: 0x0  nop
    ctx->pc = 0x230ad8u;
    // NOP
    // 0x230adc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x230ADCu;
    {
        const bool branch_taken_0x230adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230adc) {
            ctx->pc = 0x230AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230ac8;
        }
    }
    ctx->pc = 0x230AE4u;
    // 0x230ae4: 0x0  nop
    ctx->pc = 0x230ae4u;
    // NOP
label_230ae8:
    // 0x230ae8: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x230ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
label_230aec:
    // 0x230aec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x230aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x230af0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230AF0u;
    {
        const bool branch_taken_0x230af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230af0) {
            ctx->pc = 0x230B14u;
            goto label_230b14;
        }
    }
    ctx->pc = 0x230AF8u;
    // 0x230af8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x230af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230AFCu;
    {
        const bool branch_taken_0x230afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AFCu;
        // 0x230b00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230afc) {
            ctx->pc = 0x230B0Cu;
            goto label_230b0c;
        }
    }
    ctx->pc = 0x230B04u;
    // 0x230b04: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x230B04u;
    {
        const bool branch_taken_0x230b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B04u;
        // 0x230b08: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b04) {
            ctx->pc = 0x230AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230ae8;
        }
    }
    ctx->pc = 0x230B0Cu;
label_230b0c:
    // 0x230b0c: 0x808c444  j           func_231110
    ctx->pc = 0x230B0Cu;
    ctx->pc = 0x230B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B0Cu;
    // 0x230b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231110u, 0x230B0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x230B14u;
label_230b14:
    // 0x230b14: 0xc08c2ca  jal         func_230B28
    ctx->pc = 0x230B14u;
    SET_GPR_U32(ctx, 31, 0x230B1Cu);
    ctx->pc = 0x230B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B28u, 0x230B14u, 0x230B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B1Cu;
label_230b1c:
    // 0x230b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b20: 0x3e00008  jr          $ra
    ctx->pc = 0x230B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B20u;
        // 0x230b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230B28u;
}
