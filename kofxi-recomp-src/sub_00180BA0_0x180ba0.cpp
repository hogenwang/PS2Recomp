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

// Function: sub_00180BA0
// Address: 0x180ba0 - 0x180c40
void sub_00180BA0_0x180ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180BA0_0x180ba0");
#endif

    ctx->pc = 0x180ba0u;

    // 0x180ba0: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x180ba4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x180ba8: 0x24a5dbb8  addiu       $a1, $a1, -0x2448
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958008));
    // 0x180bac: 0x908200f6  lbu         $v0, 0xF6($a0)
    ctx->pc = 0x180bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 246)));
    // 0x180bb0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x180bb4: 0x30c70030  andi        $a3, $a2, 0x30
    ctx->pc = 0x180bb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x180bb8: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x180bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x180bbc: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x180bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x180bc0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x180bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x180bc4: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x180bc8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x180bc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x180bcc: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x180bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x180bd0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x180bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180bd4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x180bd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180bdc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x180be0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x180be4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180be8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180BE8u;
    {
        const bool branch_taken_0x180be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE8u;
        // 0x180bec: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180be8) {
            ctx->pc = 0x180C00u;
            goto label_180c00;
        }
    }
    ctx->pc = 0x180BF0u;
    // 0x180bf0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x180bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x180bf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180BF8u;
    {
        const bool branch_taken_0x180bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BF8u;
        // 0x180bfc: 0x90420004  lbu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bf8) {
            ctx->pc = 0x180C04u;
            goto label_180c04;
        }
    }
    ctx->pc = 0x180C00u;
label_180c00:
    // 0x180c00: 0xa08300f6  sb          $v1, 0xF6($a0)
    ctx->pc = 0x180c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 246), (uint8_t)GPR_U32(ctx, 3));
label_180c04:
    // 0x180c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x180c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180c08: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x180c08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x180c0c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x180C0Cu;
    {
        const bool branch_taken_0x180c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c0c) {
            ctx->pc = 0x180C34u;
            goto label_180c34;
        }
    }
    ctx->pc = 0x180C14u;
    // 0x180c14: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x180c18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180c1c: 0x2484e720  addiu       $a0, $a0, -0x18E0
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960928));
    // 0x180c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180c24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180c28: 0x600008  jr          $v1
    ctx->pc = 0x180C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180C30u: goto label_180c30;
            case 0x180C34u: goto label_180c34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x180C30u;
label_180c30:
    // 0x180c30: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x180c30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_180c34:
    // 0x180c34: 0x3e00008  jr          $ra
    ctx->pc = 0x180C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180C3Cu;
    // 0x180c3c: 0x0  nop
    ctx->pc = 0x180c3cu;
    // NOP
}
