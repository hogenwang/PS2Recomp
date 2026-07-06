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

// Function: sub_00171CB0
// Address: 0x171cb0 - 0x171d40
void sub_00171CB0_0x171cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CB0_0x171cb0");
#endif

    ctx->pc = 0x171cb0u;

    // 0x171cb0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x171cb4: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x171cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x171cb8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x171cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171cbc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x171cc0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171cc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171cc8: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x171cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x171ccc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171cd0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x171CD0u;
    {
        const bool branch_taken_0x171cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CD0u;
        // 0x171cd4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cd0) {
            ctx->pc = 0x171D2Cu;
            goto label_171d2c;
        }
    }
    ctx->pc = 0x171CD8u;
    // 0x171cd8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x171cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x171cdc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x171cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171ce0: 0x2463d550  addiu       $v1, $v1, -0x2AB0
    ctx->pc = 0x171ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956368));
    // 0x171ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171cec: 0x400008  jr          $v0
    ctx->pc = 0x171CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171CF4u: goto label_171cf4;
            case 0x171CFCu: goto label_171cfc;
            case 0x171D04u: goto label_171d04;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D14u: goto label_171d14;
            case 0x171D1Cu: goto label_171d1c;
            case 0x171D24u: goto label_171d24;
            case 0x171D2Cu: goto label_171d2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x171CF4u;
label_171cf4:
    // 0x171cf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x171CF4u;
    {
        const bool branch_taken_0x171cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CF4u;
        // 0x171cf8: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cf4) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171CFCu;
label_171cfc:
    // 0x171cfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x171CFCu;
    {
        const bool branch_taken_0x171cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CFCu;
        // 0x171d00: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cfc) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D04u;
label_171d04:
    // 0x171d04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171D04u;
    {
        const bool branch_taken_0x171d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D04u;
        // 0x171d08: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d04) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D0Cu;
label_171d0c:
    // 0x171d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171D0Cu;
    {
        const bool branch_taken_0x171d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D0Cu;
        // 0x171d10: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d0c) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D14u;
label_171d14:
    // 0x171d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171D14u;
    {
        const bool branch_taken_0x171d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D14u;
        // 0x171d18: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d14) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D1Cu;
label_171d1c:
    // 0x171d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171D1Cu;
    {
        const bool branch_taken_0x171d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D1Cu;
        // 0x171d20: 0x9482000a  lhu         $v0, 0xA($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d1c) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D24u;
label_171d24:
    // 0x171d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171D24u;
    {
        const bool branch_taken_0x171d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D24u;
        // 0x171d28: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d24) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D2Cu;
label_171d2c:
    // 0x171d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171d30:
    // 0x171d30: 0x3e00008  jr          $ra
    ctx->pc = 0x171D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D38u;
    // 0x171d38: 0x0  nop
    ctx->pc = 0x171d38u;
    // NOP
    // 0x171d3c: 0x0  nop
    ctx->pc = 0x171d3cu;
    // NOP
}
