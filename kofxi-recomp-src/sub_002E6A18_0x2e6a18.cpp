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

// Function: sub_002E6A18
// Address: 0x2e6a18 - 0x2e6ac0
void sub_002E6A18_0x2e6a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6A18_0x2e6a18");
#endif

    ctx->pc = 0x2e6a18u;

    // 0x2e6a18: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x2e6a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e6a1c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E6A1Cu;
    {
        const bool branch_taken_0x2e6a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A1Cu;
        // 0x2e6a20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a1c) {
            ctx->pc = 0x2E6AACu;
            goto label_2e6aac;
        }
    }
    ctx->pc = 0x2E6A24u;
    // 0x2e6a24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e6a28: 0x2442f7a0  addiu       $v0, $v0, -0x860
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x2e6a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e6a30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6a34: 0x800008  jr          $a0
    ctx->pc = 0x2E6A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E6A3Cu: goto label_2e6a3c;
            case 0x2E6A4Cu: goto label_2e6a4c;
            case 0x2E6A5Cu: goto label_2e6a5c;
            case 0x2E6A6Cu: goto label_2e6a6c;
            case 0x2E6A7Cu: goto label_2e6a7c;
            case 0x2E6A8Cu: goto label_2e6a8c;
            case 0x2E6A9Cu: goto label_2e6a9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E6A3Cu;
label_2e6a3c:
    // 0x2e6a3c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a44: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A44u;
    ctx->pc = 0x2E6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A44u;
    // 0x2e6a48: 0x24a5f730  addiu       $a1, $a1, -0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A4Cu;
label_2e6a4c:
    // 0x2e6a4c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a54: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A54u;
    ctx->pc = 0x2E6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A54u;
    // 0x2e6a58: 0x24a5f740  addiu       $a1, $a1, -0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A5Cu;
label_2e6a5c:
    // 0x2e6a5c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a64: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A64u;
    ctx->pc = 0x2E6A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A64u;
    // 0x2e6a68: 0x24a5f750  addiu       $a1, $a1, -0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A6Cu;
label_2e6a6c:
    // 0x2e6a6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a74: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A74u;
    ctx->pc = 0x2E6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A74u;
    // 0x2e6a78: 0x24a5f760  addiu       $a1, $a1, -0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A7Cu;
label_2e6a7c:
    // 0x2e6a7c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a84: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A84u;
    ctx->pc = 0x2E6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A84u;
    // 0x2e6a88: 0x24a5f768  addiu       $a1, $a1, -0x898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A8Cu;
label_2e6a8c:
    // 0x2e6a8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6a90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6a94: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6A94u;
    ctx->pc = 0x2E6A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A94u;
    // 0x2e6a98: 0x24a5f778  addiu       $a1, $a1, -0x888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6A9Cu;
label_2e6a9c:
    // 0x2e6a9c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6aa0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6aa4: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6AA4u;
    ctx->pc = 0x2E6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AA4u;
    // 0x2e6aa8: 0x24a5f780  addiu       $a1, $a1, -0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6AACu;
label_2e6aac:
    // 0x2e6aac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e6ab0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e6ab4: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x2E6AB4u;
    ctx->pc = 0x2E6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AB4u;
    // 0x2e6ab8: 0x24a5f790  addiu       $a1, $a1, -0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6ABCu;
    // 0x2e6abc: 0x0  nop
    ctx->pc = 0x2e6abcu;
    // NOP
}
