#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B2F40
// Address: 0x2b2f40 - 0x2b2fa8
void sub_002B2F40_0x2b2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F40_0x2b2f40");
#endif

    switch (ctx->pc) {
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2fa0u: goto label_2b2fa0;
        default: break;
    }

    ctx->pc = 0x2b2f40u;

    // 0x2b2f40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2f44: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2F44u;
    {
        const bool branch_taken_0x2b2f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F44u;
            // 0x2b2f48: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f44) {
            ctx->pc = 0x2B2F88u;
            goto label_2b2f88;
        }
    }
    ctx->pc = 0x2B2F4Cu;
    // 0x2b2f4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2F4Cu;
    {
        const bool branch_taken_0x2b2f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F4Cu;
            // 0x2b2f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f4c) {
            ctx->pc = 0x2B2F64u;
            goto label_2b2f64;
        }
    }
    ctx->pc = 0x2B2F54u;
    // 0x2b2f54: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2F54u;
    {
        const bool branch_taken_0x2b2f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F54u;
            // 0x2b2f58: 0x240200fd  addiu       $v0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f54) {
            ctx->pc = 0x2B2F80u;
            goto label_2b2f80;
        }
    }
    ctx->pc = 0x2B2F5Cu;
    // 0x2b2f5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2F5Cu;
    {
        const bool branch_taken_0x2b2f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f5c) {
            ctx->pc = 0x2B2FA0u;
            goto label_2b2fa0;
        }
    }
    ctx->pc = 0x2B2F64u;
label_2b2f64:
    // 0x2b2f64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b2f68: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2F68u;
    {
        const bool branch_taken_0x2b2f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F68u;
            // 0x2b2f6c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f68) {
            ctx->pc = 0x2B2F90u;
            goto label_2b2f90;
        }
    }
    ctx->pc = 0x2B2F70u;
    // 0x2b2f70: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2F70u;
    {
        const bool branch_taken_0x2b2f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F70u;
            // 0x2b2f74: 0x240200fd  addiu       $v0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f70) {
            ctx->pc = 0x2B2F98u;
            goto label_2b2f98;
        }
    }
    ctx->pc = 0x2B2F78u;
    // 0x2b2f78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2F78u;
    {
        const bool branch_taken_0x2b2f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f78) {
            ctx->pc = 0x2B2FA0u;
            goto label_2b2fa0;
        }
    }
    ctx->pc = 0x2B2F80u;
label_2b2f80:
    // 0x2b2f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F80u;
            // 0x2b2f84: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2F88u;
label_2b2f88:
    // 0x2b2f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F88u;
            // 0x2b2f8c: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2F90u;
label_2b2f90:
    // 0x2b2f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F90u;
            // 0x2b2f94: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2F98u;
label_2b2f98:
    // 0x2b2f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B2F98u;
            // 0x2b2f9c: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2FA0u;
label_2b2fa0:
    // 0x2b2fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B2FA8u;
    ctx->pc = 0x2b2fa8u;
}
