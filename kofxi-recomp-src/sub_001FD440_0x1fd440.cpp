#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD440
// Address: 0x1fd440 - 0x1fd488
void sub_001FD440_0x1fd440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD440_0x1fd440");
#endif

    switch (ctx->pc) {
        case 0x1fd460u: goto label_1fd460;
        default: break;
    }

    ctx->pc = 0x1fd440u;

    // 0x1fd440: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fd444: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fd444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fd448: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd44c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd450: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1fd450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1fd454: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fd454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fd458: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1fd458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1fd45c: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x1fd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_1fd460:
    // 0x1fd460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd464: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fd464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fd468: 0x0  nop
    ctx->pc = 0x1fd468u;
    // NOP
    // 0x1fd46c: 0x0  nop
    ctx->pc = 0x1fd46cu;
    // NOP
    // 0x1fd470: 0x0  nop
    ctx->pc = 0x1fd470u;
    // NOP
    // 0x1fd474: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FD474u;
    {
        const bool branch_taken_0x1fd474 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD474u;
            // 0x1fd478: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd474) {
            ctx->pc = 0x1FD460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd460;
        }
    }
    ctx->pc = 0x1FD47Cu;
    // 0x1fd47c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd480: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD480u;
            // 0x1fd484: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD488u;
    ctx->pc = 0x1fd488u;
}
