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

// Function: sub_00193D60
// Address: 0x193d60 - 0x193de0
void sub_00193D60_0x193d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193D60_0x193d60");
#endif

    switch (ctx->pc) {
        case 0x193d6cu: goto label_193d6c;
        default: break;
    }

    ctx->pc = 0x193d60u;

    // 0x193d60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d64: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193d68: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
label_193d6c:
    // 0x193d6c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x193d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x193d70: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x193d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d74: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x193d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x193d78: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x193d7c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x193d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x193d80: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x193d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x193d84: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x193d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x193d88: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x193d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x193d8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x193d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x193d90: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x193d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x193d94: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x193d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x193d98: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x193d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x193d9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x193d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x193da0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x193da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x193da4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x193da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x193da8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x193da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x193dac: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x193dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x193db0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x193db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x193db4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x193db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x193db8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x193db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x193dbc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x193dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x193dc0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x193DC0u;
    {
        const bool branch_taken_0x193dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DC0u;
        // 0x193dc4: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dc0) {
            ctx->pc = 0x193D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193d6c;
        }
    }
    ctx->pc = 0x193DC8u;
    // 0x193dc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x193DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DCCu;
        // 0x193dd0: 0xa460d198  sh          $zero, -0x2E68($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955416), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193DD4u;
    // 0x193dd4: 0x0  nop
    ctx->pc = 0x193dd4u;
    // NOP
    // 0x193dd8: 0x0  nop
    ctx->pc = 0x193dd8u;
    // NOP
    // 0x193ddc: 0x0  nop
    ctx->pc = 0x193ddcu;
    // NOP
}
