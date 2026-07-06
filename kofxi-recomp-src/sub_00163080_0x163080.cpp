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

// Function: sub_00163080
// Address: 0x163080 - 0x163100
void sub_00163080_0x163080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163080_0x163080");
#endif

    switch (ctx->pc) {
        case 0x1630d4u: goto label_1630d4;
        default: break;
    }

    ctx->pc = 0x163080u;

    // 0x163080: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x163080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x163084: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x163088: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x163088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x16308c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x16308cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x163090: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x163094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x163094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163098: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16309c: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x16309cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1630a0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1630A0u;
    {
        const bool branch_taken_0x1630a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630A0u;
        // 0x1630a4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630a0) {
            ctx->pc = 0x1630F8u;
            goto label_1630f8;
        }
    }
    ctx->pc = 0x1630A8u;
    // 0x1630a8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1630a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1630ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1630acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1630b0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1630b4: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x1630b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1630bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1630c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1630c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1630c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1630cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1630d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1630d4:
    // 0x1630d4: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x1630d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1630d8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1630D8u;
    {
        const bool branch_taken_0x1630d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1630d8) {
            ctx->pc = 0x1630DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1630D8u;
            // 0x1630dc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1630E8u;
            goto label_1630e8;
        }
    }
    ctx->pc = 0x1630E0u;
    // 0x1630e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1630E0u;
    {
        const bool branch_taken_0x1630e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1630e0) {
            ctx->pc = 0x1630F8u;
            goto label_1630f8;
        }
    }
    ctx->pc = 0x1630E8u;
label_1630e8:
    // 0x1630e8: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x1630e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1630ec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1630ECu;
    {
        const bool branch_taken_0x1630ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630ECu;
        // 0x1630f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630ec) {
            ctx->pc = 0x1630D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1630d4;
        }
    }
    ctx->pc = 0x1630F4u;
    // 0x1630f4: 0x0  nop
    ctx->pc = 0x1630f4u;
    // NOP
label_1630f8:
    // 0x1630f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1630F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163100u;
}
