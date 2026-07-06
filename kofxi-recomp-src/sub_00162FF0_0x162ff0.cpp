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

// Function: sub_00162FF0
// Address: 0x162ff0 - 0x163080
void sub_00162FF0_0x162ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162FF0_0x162ff0");
#endif

    switch (ctx->pc) {
        case 0x163048u: goto label_163048;
        default: break;
    }

    ctx->pc = 0x162ff0u;

    // 0x162ff0: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x162ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x162ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ff8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x162ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x162ffc: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x162ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x163000: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x163000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x163004: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x163004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x163008: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x163008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16300c: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x163010: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x163010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x163014: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x163014u;
    {
        const bool branch_taken_0x163014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163014u;
        // 0x163018: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163014) {
            ctx->pc = 0x163068u;
            goto label_163068;
        }
    }
    ctx->pc = 0x16301Cu;
    // 0x16301c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x16301cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163020: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x163024: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x163024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x163028: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x163028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x16302c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163030: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x163034: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x163034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x163038: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x163038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16303c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x16303cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x163040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163044: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x163044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_163048:
    // 0x163048: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x16304c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16304Cu;
    {
        const bool branch_taken_0x16304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16304c) {
            ctx->pc = 0x163058u;
            goto label_163058;
        }
    }
    ctx->pc = 0x163054u;
    // 0x163054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_163058:
    // 0x163058: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16305c: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x16305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x163060: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x163060u;
    {
        const bool branch_taken_0x163060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163060u;
        // 0x163064: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163060) {
            ctx->pc = 0x163048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163048;
        }
    }
    ctx->pc = 0x163068u;
label_163068:
    // 0x163068: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x163068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x16306c: 0x3e00008  jr          $ra
    ctx->pc = 0x16306Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16306Cu;
        // 0x163070: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16306Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163074u;
    // 0x163074: 0x0  nop
    ctx->pc = 0x163074u;
    // NOP
    // 0x163078: 0x0  nop
    ctx->pc = 0x163078u;
    // NOP
    // 0x16307c: 0x0  nop
    ctx->pc = 0x16307cu;
    // NOP
    if (ctx->pc == 0x16307cu) { ctx->pc = 0x163080u; }
}
