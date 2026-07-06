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

// Function: sub_0018DAD0
// Address: 0x18dad0 - 0x18db40
void sub_0018DAD0_0x18dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DAD0_0x18dad0");
#endif

    ctx->pc = 0x18dad0u;

    // 0x18dad0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18dad4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18dad8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x18dad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18dadc: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18dae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dae4: 0x2442bdac  addiu       $v0, $v0, -0x4254
    ctx->pc = 0x18dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950316));
    // 0x18dae8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18dae8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18daec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18daecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18daf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18daf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18daf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dafc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18db00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18db04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18db08: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18DB08u;
    {
        const bool branch_taken_0x18db08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db08) {
            ctx->pc = 0x18DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB08u;
            // 0x18db0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB38u;
            goto label_18db38;
        }
    }
    ctx->pc = 0x18DB10u;
    // 0x18db10: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18db14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18db18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18db1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18db20: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18db20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18db24: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB24u;
    {
        const bool branch_taken_0x18db24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18db24) {
            ctx->pc = 0x18DB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB24u;
            // 0x18db28: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB34u;
            goto label_18db34;
        }
    }
    ctx->pc = 0x18DB2Cu;
    // 0x18db2c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x18db2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18db30: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_18db34:
    // 0x18db34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18db38:
    // 0x18db38: 0x3e00008  jr          $ra
    ctx->pc = 0x18DB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DB40u;
}
