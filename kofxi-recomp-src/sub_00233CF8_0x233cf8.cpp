#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233CF8
// Address: 0x233cf8 - 0x233d80
void sub_00233CF8_0x233cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233CF8_0x233cf8");
#endif

    switch (ctx->pc) {
        case 0x233d00u: goto label_233d00;
        case 0x233d44u: goto label_233d44;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d74u: goto label_233d74;
        default: break;
    }

    ctx->pc = 0x233cf8u;

    // 0x233cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233CF8u;
    {
        const bool branch_taken_0x233cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233CF8u;
            // 0x233cfc: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cf8) {
            ctx->pc = 0x233D0Cu;
            goto label_233d0c;
        }
    }
    ctx->pc = 0x233D00u;
label_233d00:
    // 0x233d00: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x233D00u;
    {
        const bool branch_taken_0x233d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D00u;
            // 0x233d04: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d00) {
            ctx->pc = 0x233D6Cu;
            goto label_233d6c;
        }
    }
    ctx->pc = 0x233D08u;
    // 0x233d08: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233d0c:
    // 0x233d0c: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x233d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x233d10: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233D10u;
    {
        const bool branch_taken_0x233d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d10) {
            ctx->pc = 0x233D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233D10u;
            // 0x233d14: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233d00;
        }
    }
    ctx->pc = 0x233D18u;
    // 0x233d18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x233d1c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x233d20: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x233d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x233d24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233D24u;
    {
        const bool branch_taken_0x233d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D24u;
            // 0x233d28: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d24) {
            ctx->pc = 0x233D44u;
            goto label_233d44;
        }
    }
    ctx->pc = 0x233D2Cu;
    // 0x233d2c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x233d30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x233d30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233d34: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x233d34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x233d38: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x233d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x233D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D3Cu;
            // 0x233d40: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233D44u;
label_233d44:
    // 0x233d44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233d48: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x233D48u;
    {
        const bool branch_taken_0x233d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D48u;
            // 0x233d4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d48) {
            ctx->pc = 0x233D74u;
            goto label_233d74;
        }
    }
    ctx->pc = 0x233D50u;
    // 0x233d50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x233d54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x233d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x233d58: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x233d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233d5c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x233d5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233d60: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x233d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x233d64: 0x3e00008  jr          $ra
    ctx->pc = 0x233D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D64u;
            // 0x233d68: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233D6Cu;
label_233d6c:
    // 0x233d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x233D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D6Cu;
            // 0x233d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233D74u;
label_233d74:
    // 0x233d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d78: 0x3e00008  jr          $ra
    ctx->pc = 0x233D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D78u;
            // 0x233d7c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233D80u;
    ctx->pc = 0x233d80u;
}
