#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031EA20
// Address: 0x31ea20 - 0x31ea70
void sub_0031EA20_0x31ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA20_0x31ea20");
#endif

    switch (ctx->pc) {
        case 0x31ea38u: goto label_31ea38;
        default: break;
    }

    ctx->pc = 0x31ea20u;

    // 0x31ea20: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x31ea20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x31ea24: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x31ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x31ea28: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x31ea28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x31ea2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ea2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea30: 0x24a50950  addiu       $a1, $a1, 0x950
    ctx->pc = 0x31ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
    // 0x31ea34: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x31ea34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31ea38:
    // 0x31ea38: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EA38u;
    {
        const bool branch_taken_0x31ea38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA38u;
            // 0x31ea3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea38) {
            ctx->pc = 0x31EA48u;
            goto label_31ea48;
        }
    }
    ctx->pc = 0x31EA40u;
    // 0x31ea40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31EA40u;
    {
        const bool branch_taken_0x31ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ea40) {
            ctx->pc = 0x31EA60u;
            goto label_31ea60;
        }
    }
    ctx->pc = 0x31EA48u;
label_31ea48:
    // 0x31ea48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ea4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ea50: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x31ea50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31ea54: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31EA54u;
    {
        const bool branch_taken_0x31ea54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea54) {
            ctx->pc = 0x31EA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA54u;
            // 0x31ea58: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ea38;
        }
    }
    ctx->pc = 0x31EA5Cu;
    // 0x31ea5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ea5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ea60:
    // 0x31ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EA68u;
    // 0x31ea68: 0x0  nop
    ctx->pc = 0x31ea68u;
    // NOP
    // 0x31ea6c: 0x0  nop
    ctx->pc = 0x31ea6cu;
    // NOP
    ctx->pc = 0x31ea70u;
}
