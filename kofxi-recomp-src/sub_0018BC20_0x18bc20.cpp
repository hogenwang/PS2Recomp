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

// Function: sub_0018BC20
// Address: 0x18bc20 - 0x18bc80
void sub_0018BC20_0x18bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BC20_0x18bc20");
#endif

    ctx->pc = 0x18bc20u;

    // 0x18bc20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18bc24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18bc28: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x18bc28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x18bc2c: 0x8463db32  lh          $v1, -0x24CE($v1)
    ctx->pc = 0x18bc2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x18bc30: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bc34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18bc38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bc3c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x18bc40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18bc40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18bc44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18bc48: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x18bc48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18bc4c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BC4Cu;
    {
        const bool branch_taken_0x18bc4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC4Cu;
        // 0x18bc50: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc4c) {
            ctx->pc = 0x18BC5Cu;
            goto label_18bc5c;
        }
    }
    ctx->pc = 0x18BC54u;
    // 0x18bc54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18BC54u;
    {
        const bool branch_taken_0x18bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC54u;
        // 0x18bc58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc54) {
            ctx->pc = 0x18BC78u;
            goto label_18bc78;
        }
    }
    ctx->pc = 0x18BC5Cu;
label_18bc5c:
    // 0x18bc5c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x18bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18bc60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18bc60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18bc64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18bc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bc68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BC68u;
    {
        const bool branch_taken_0x18bc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bc68) {
            ctx->pc = 0x18BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BC68u;
            // 0x18bc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BC78u;
            goto label_18bc78;
        }
    }
    ctx->pc = 0x18BC70u;
    // 0x18bc70: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x18BC70u;
    {
        const bool branch_taken_0x18bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC70u;
        // 0x18bc74: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc70) {
            ctx->pc = 0x18BC78u;
            goto label_18bc78;
        }
    }
    ctx->pc = 0x18BC78u;
label_18bc78:
    // 0x18bc78: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC80u;
}
