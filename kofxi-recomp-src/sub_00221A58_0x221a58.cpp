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

// Function: sub_00221A58
// Address: 0x221a58 - 0x221af0
void sub_00221A58_0x221a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221A58_0x221a58");
#endif

    ctx->pc = 0x221a58u;

    // 0x221a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221a60: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x221A60u;
    {
        const bool branch_taken_0x221a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x221a60) {
            ctx->pc = 0x221A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221A60u;
            // 0x221a64: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221A90u;
            goto label_221a90;
        }
    }
    ctx->pc = 0x221A68u;
    // 0x221a68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a70: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221a70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221a74: 0x24842b90  addiu       $a0, $a0, 0x2B90
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11152));
    // 0x221a78: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
    // 0x221a7c: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x221a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x221a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a84: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x221a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x221a88: 0x8089794  j           func_225E50
    ctx->pc = 0x221A88u;
    ctx->pc = 0x221A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A88u;
    // 0x221a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x221A90u;
label_221a90:
    // 0x221a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a94: 0x3e00008  jr          $ra
    ctx->pc = 0x221A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A94u;
        // 0x221a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A9Cu;
    // 0x221a9c: 0x0  nop
    ctx->pc = 0x221a9cu;
    // NOP
    // 0x221aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221aa8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x221AA8u;
    {
        const bool branch_taken_0x221aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AA8u;
        // 0x221aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221aa8) {
            ctx->pc = 0x221AD8u;
            goto label_221ad8;
        }
    }
    ctx->pc = 0x221AB0u;
    // 0x221ab0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221ab8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221abc: 0x24842ba0  addiu       $a0, $a0, 0x2BA0
    ctx->pc = 0x221abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11168));
    // 0x221ac0: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
    // 0x221ac4: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x221ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221acc: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x221accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x221ad0: 0x8089794  j           func_225E50
    ctx->pc = 0x221AD0u;
    ctx->pc = 0x221AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AD0u;
    // 0x221ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x221AD8u;
label_221ad8:
    // 0x221ad8: 0x8c8f0028  lw          $t7, 0x28($a0)
    ctx->pc = 0x221ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x221adc: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221ADCu;
    {
        const bool branch_taken_0x221adc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x221adc) {
            ctx->pc = 0x221AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221ADCu;
            // 0x221ae0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221AE4u;
            goto label_221ae4;
        }
    }
    ctx->pc = 0x221AE4u;
label_221ae4:
    // 0x221ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x221AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AE8u;
        // 0x221aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221AF0u;
}
