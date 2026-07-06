#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2F70
// Address: 0x1f2f70 - 0x1f2fd0
void sub_001F2F70_0x1f2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2F70_0x1f2f70");
#endif

    switch (ctx->pc) {
        case 0x1f2fb8u: goto label_1f2fb8;
        default: break;
    }

    ctx->pc = 0x1f2f70u;

    // 0x1f2f70: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f2f74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f80: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f2f84: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2F84u;
    {
        const bool branch_taken_0x1f2f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F2F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F84u;
            // 0x1f2f88: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f84) {
            ctx->pc = 0x1F2FB8u;
            goto label_1f2fb8;
        }
    }
    ctx->pc = 0x1F2F8Cu;
    // 0x1f2f8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2F8Cu;
    {
        const bool branch_taken_0x1f2f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F8Cu;
            // 0x1f2f90: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f8c) {
            ctx->pc = 0x1F2FC4u;
            goto label_1f2fc4;
        }
    }
    ctx->pc = 0x1F2F94u;
    // 0x1f2f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2f98: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2F98u;
    {
        const bool branch_taken_0x1f2f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F98u;
            // 0x1f2f9c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f98) {
            ctx->pc = 0x1F2FC4u;
            goto label_1f2fc4;
        }
    }
    ctx->pc = 0x1F2FA0u;
    // 0x1f2fa0: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1f2fa4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f2fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2fa8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2FA8u;
    {
        const bool branch_taken_0x1f2fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2fa8) {
            ctx->pc = 0x1F2FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FA8u;
            // 0x1f2fac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2FC0u;
            goto label_1f2fc0;
        }
    }
    ctx->pc = 0x1F2FB0u;
    // 0x1f2fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FB0u;
            // 0x1f2fb4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2FB8u;
label_1f2fb8:
    // 0x1f2fb8: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x1f2fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x1f2fbc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1f2fbcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f2fc0:
    // 0x1f2fc0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f2fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fc4:
    // 0x1f2fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2FCCu;
    // 0x1f2fcc: 0x0  nop
    ctx->pc = 0x1f2fccu;
    // NOP
    ctx->pc = 0x1f2fd0u;
}
