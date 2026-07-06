#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF9F8
// Address: 0x1df9f8 - 0x1dfa38
void sub_001DF9F8_0x1df9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF9F8_0x1df9f8");
#endif

    ctx->pc = 0x1df9f8u;

    // 0x1df9f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df9fc: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x1df9fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1dfa00: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DFA00u;
    {
        const bool branch_taken_0x1dfa00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA00u;
            // 0x1dfa04: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa00) {
            ctx->pc = 0x1DFA2Cu;
            goto label_1dfa2c;
        }
    }
    ctx->pc = 0x1DFA08u;
    // 0x1dfa08: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFA08u;
    {
        const bool branch_taken_0x1dfa08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa08) {
            ctx->pc = 0x1DFA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA08u;
            // 0x1dfa0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA20u;
            goto label_1dfa20;
        }
    }
    ctx->pc = 0x1DFA10u;
    // 0x1dfa10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfa14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA14u;
    {
        const bool branch_taken_0x1dfa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA14u;
            // 0x1dfa18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa14) {
            ctx->pc = 0x1DFA24u;
            goto label_1dfa24;
        }
    }
    ctx->pc = 0x1DFA1Cu;
    // 0x1dfa1c: 0x0  nop
    ctx->pc = 0x1dfa1cu;
    // NOP
label_1dfa20:
    // 0x1dfa20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dfa24:
    // 0x1dfa24: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA24u;
            // 0x1dfa28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA2Cu;
            goto label_1dfa2c;
        }
    }
    ctx->pc = 0x1DFA2Cu;
label_1dfa2c:
    // 0x1dfa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA2Cu;
            // 0x1dfa30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFA34u;
    // 0x1dfa34: 0x0  nop
    ctx->pc = 0x1dfa34u;
    // NOP
    ctx->pc = 0x1dfa38u;
}
