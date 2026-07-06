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

// Function: sub_00342D30
// Address: 0x342d30 - 0x342e50
void sub_00342D30_0x342d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D30_0x342d30");
#endif

    ctx->pc = 0x342d30u;

    // 0x342d30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342d34: 0x8c464360  lw          $a2, 0x4360($v0)
    ctx->pc = 0x342d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17248)));
    // 0x342d38: 0x28c1001f  slti        $at, $a2, 0x1F
    ctx->pc = 0x342d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x342d3c: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x342D3Cu;
    {
        const bool branch_taken_0x342d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342d3c) {
            ctx->pc = 0x342D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342D3Cu;
            // 0x342d40: 0x24c4ffe2  addiu       $a0, $a2, -0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967266));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342D58u;
            goto label_342d58;
        }
    }
    ctx->pc = 0x342D44u;
    // 0x342d44: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x342d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x342d48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x342d4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x342d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x342d50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x342D50u;
    {
        const bool branch_taken_0x342d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D50u;
        // 0x342d54: 0x2444010e  addiu       $a0, $v0, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d50) {
            ctx->pc = 0x342D6Cu;
            goto label_342d6c;
        }
    }
    ctx->pc = 0x342D58u;
label_342d58:
    // 0x342d58: 0x240201c2  addiu       $v0, $zero, 0x1C2
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x342d5c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x342d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342d64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342d68: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342d6c:
    // 0x342d6c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342d70: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342d74: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x342d78: 0x8c424350  lw          $v0, 0x4350($v0)
    ctx->pc = 0x342d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17232)));
    // 0x342d7c: 0x10450020  beq         $v0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x342D7Cu;
    {
        const bool branch_taken_0x342d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x342d7c) {
            ctx->pc = 0x342E00u;
            goto label_342e00;
        }
    }
    ctx->pc = 0x342D84u;
    // 0x342d84: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342d88: 0x8c434358  lw          $v1, 0x4358($v0)
    ctx->pc = 0x342d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
    // 0x342d8c: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x342d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x342d90: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x342d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x342d94: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x342D94u;
    {
        const bool branch_taken_0x342d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342d94) {
            ctx->pc = 0x342DF8u;
            goto label_342df8;
        }
    }
    ctx->pc = 0x342D9Cu;
    // 0x342d9c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x342d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x342da0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x342da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x342da4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x342DA4u;
    {
        const bool branch_taken_0x342da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342da4) {
            ctx->pc = 0x342DF8u;
            goto label_342df8;
        }
    }
    ctx->pc = 0x342DACu;
    // 0x342dac: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x342db0: 0x54c20002  bnel        $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x342DB0u;
    {
        const bool branch_taken_0x342db0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x342db0) {
            ctx->pc = 0x342DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342DB0u;
            // 0x342db4: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342DBCu;
            goto label_342dbc;
        }
    }
    ctx->pc = 0x342DB8u;
    // 0x342db8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x342db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342dbc:
    // 0x342dbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342dc0: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x342dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x342dc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x342DC4u;
    {
        const bool branch_taken_0x342dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x342DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DC4u;
        // 0x342dc8: 0xac434360  sw          $v1, 0x4360($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dc4) {
            ctx->pc = 0x342DE0u;
            goto label_342de0;
        }
    }
    ctx->pc = 0x342DCCu;
    // 0x342dcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342dd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x342dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342DD8u;
    {
        const bool branch_taken_0x342dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DD8u;
        // 0x342ddc: 0x2444010e  addiu       $a0, $v0, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dd8) {
            ctx->pc = 0x342DF8u;
            goto label_342df8;
        }
    }
    ctx->pc = 0x342DE0u;
label_342de0:
    // 0x342de0: 0x2464ffe2  addiu       $a0, $v1, -0x1E
    ctx->pc = 0x342de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x342de4: 0x240201c2  addiu       $v0, $zero, 0x1C2
    ctx->pc = 0x342de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x342de8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x342de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x342dec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342df0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x342df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342df4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x342df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342df8:
    // 0x342df8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342dfc: 0xac454350  sw          $a1, 0x4350($v0)
    ctx->pc = 0x342dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17232), GPR_U32(ctx, 5));
label_342e00:
    // 0x342e00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342e04: 0x8c424358  lw          $v0, 0x4358($v0)
    ctx->pc = 0x342e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
    // 0x342e08: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x342e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x342e0c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x342E0Cu;
    {
        const bool branch_taken_0x342e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342e0c) {
            ctx->pc = 0x342E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342E0Cu;
            // 0x342e10: 0x82082a  slt         $at, $a0, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342E24u;
            goto label_342e24;
        }
    }
    ctx->pc = 0x342E14u;
    // 0x342e14: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x342e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342e18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342e1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x342E1Cu;
    {
        const bool branch_taken_0x342e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E1Cu;
        // 0x342e20: 0xac434358  sw          $v1, 0x4358($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e1c) {
            ctx->pc = 0x342E38u;
            goto label_342e38;
        }
    }
    ctx->pc = 0x342E24u;
label_342e24:
    // 0x342e24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x342E24u;
    {
        const bool branch_taken_0x342e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342e24) {
            ctx->pc = 0x342E38u;
            goto label_342e38;
        }
    }
    ctx->pc = 0x342E2Cu;
    // 0x342e2c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x342e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x342e30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342e34: 0xac434358  sw          $v1, 0x4358($v0)
    ctx->pc = 0x342e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17240), GPR_U32(ctx, 3));
label_342e38:
    // 0x342e38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x342E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E3Cu;
        // 0x342e40: 0x8c424358  lw          $v0, 0x4358($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E44u;
    // 0x342e44: 0x0  nop
    ctx->pc = 0x342e44u;
    // NOP
    // 0x342e48: 0x0  nop
    ctx->pc = 0x342e48u;
    // NOP
    // 0x342e4c: 0x0  nop
    ctx->pc = 0x342e4cu;
    // NOP
    if (ctx->pc == 0x342e4cu) { ctx->pc = 0x342e50u; }
}
