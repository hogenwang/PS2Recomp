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

// Function: sub_00168280
// Address: 0x168280 - 0x1682e0
void sub_00168280_0x168280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168280_0x168280");
#endif

    switch (ctx->pc) {
        case 0x168294u: goto label_168294;
        default: break;
    }

    ctx->pc = 0x168280u;

    // 0x168280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168284: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x168284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x168288: 0x24e73070  addiu       $a3, $a3, 0x3070
    ctx->pc = 0x168288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12400));
    // 0x16828c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x16828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x168290: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x168290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_168294:
    // 0x168294: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x168294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x168298: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x168298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16829c: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x16829cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1682a0: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1682a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1682a4: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x1682a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1682a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1682ac: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1682ACu;
    {
        const bool branch_taken_0x1682ac = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1682B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682ACu;
        // 0x1682b0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682ac) {
            ctx->pc = 0x168294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168294;
        }
    }
    ctx->pc = 0x1682B4u;
    // 0x1682b4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1682b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1682b8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1682b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1682bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1682bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1682c0: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x1682c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x1682c4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1682c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1682c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1682c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1682cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1682ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1682d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1682d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1682d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1682D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682D4u;
        // 0x1682d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1682D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1682DCu;
    // 0x1682dc: 0x0  nop
    ctx->pc = 0x1682dcu;
    // NOP
}
