#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7478
// Address: 0x2b7478 - 0x2b74c0
void sub_002B7478_0x2b7478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7478_0x2b7478");
#endif

    switch (ctx->pc) {
        case 0x2b7490u: goto label_2b7490;
        case 0x2b74acu: goto label_2b74ac;
        default: break;
    }

    ctx->pc = 0x2b7478u;

    // 0x2b7478: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b747c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b747cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7480: 0x2447e490  addiu       $a3, $v0, -0x1B70
    ctx->pc = 0x2b7480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
    // 0x2b7484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7488: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b748c: 0x0  nop
    ctx->pc = 0x2b748cu;
    // NOP
label_2b7490:
    // 0x2b7490: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2b7490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7494: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2b7494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b7498: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b7498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b749c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B749Cu;
    {
        const bool branch_taken_0x2b749c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B74A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B749Cu;
            // 0x2b74a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b749c) {
            ctx->pc = 0x2B74ACu;
            goto label_2b74ac;
        }
    }
    ctx->pc = 0x2B74A4u;
    // 0x2b74a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B74A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B74A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74A4u;
            // 0x2b74a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B74ACu;
label_2b74ac:
    // 0x2b74ac: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2b74acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b74b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B74B0u;
    {
        const bool branch_taken_0x2b74b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B74B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74B0u;
            // 0x2b74b4: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74b0) {
            ctx->pc = 0x2B7490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7490;
        }
    }
    ctx->pc = 0x2B74B8u;
    // 0x2b74b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B74B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74B8u;
            // 0x2b74bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B74C0u;
    ctx->pc = 0x2b74c0u;
}
