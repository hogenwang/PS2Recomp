#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CE20
// Address: 0x14ce20 - 0x14cef0
void sub_0014CE20_0x14ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CE20_0x14ce20");
#endif

    switch (ctx->pc) {
        case 0x14ce6cu: goto label_14ce6c;
        default: break;
    }

    ctx->pc = 0x14ce20u;

    // 0x14ce20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ce24: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14ce28: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14ce2c: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x14ce2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ce30: 0x8464e3b0  lh          $a0, -0x1C50($v1)
    ctx->pc = 0x14ce30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x14ce34: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x14ce34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ce38: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14ce3c: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x14ce3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x14ce40: 0x8463e3b2  lh          $v1, -0x1C4E($v1)
    ctx->pc = 0x14ce40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960050)));
    // 0x14ce44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CE44u;
    {
        const bool branch_taken_0x14ce44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE44u;
            // 0x14ce48: 0xa7a3000e  sh          $v1, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce44) {
            ctx->pc = 0x14CE54u;
            goto label_14ce54;
        }
    }
    ctx->pc = 0x14CE4Cu;
    // 0x14ce4c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14CE4Cu;
    {
        const bool branch_taken_0x14ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE4Cu;
            // 0x14ce50: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce4c) {
            ctx->pc = 0x14CEE4u;
            goto label_14cee4;
        }
    }
    ctx->pc = 0x14CE54u;
label_14ce54:
    // 0x14ce54: 0x48082a  slt         $at, $v0, $t0
    ctx->pc = 0x14ce54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14ce58: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x14CE58u;
    {
        const bool branch_taken_0x14ce58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce58) {
            ctx->pc = 0x14CEC8u;
            goto label_14cec8;
        }
    }
    ctx->pc = 0x14CE60u;
    // 0x14ce60: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x14ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x14ce64: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0
    ctx->pc = 0x14ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
    // 0x14ce68: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x14ce68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ce6c:
    // 0x14ce6c: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x14ce70: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14ce74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14ce78: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14ce7c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14ce80: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x14ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14ce84: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x14ce84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ce88: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CE88u;
    {
        const bool branch_taken_0x14ce88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ce88) {
            ctx->pc = 0x14CE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE88u;
            // 0x14ce8c: 0x9084414a  lbu         $a0, 0x414A($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16714)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CE98u;
            goto label_14ce98;
        }
    }
    ctx->pc = 0x14CE90u;
    // 0x14ce90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CE90u;
    {
        const bool branch_taken_0x14ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE90u;
            // 0x14ce94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce90) {
            ctx->pc = 0x14CEE8u;
            goto label_14cee8;
        }
    }
    ctx->pc = 0x14CE98u;
label_14ce98:
    // 0x14ce98: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x14ce98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x14ce9c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x14ce9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14cea0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CEA0u;
    {
        const bool branch_taken_0x14cea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cea0) {
            ctx->pc = 0x14CEB0u;
            goto label_14ceb0;
        }
    }
    ctx->pc = 0x14CEA8u;
    // 0x14cea8: 0xa7a7000c  sh          $a3, 0xC($sp)
    ctx->pc = 0x14cea8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x14ceac: 0xa7a4000e  sh          $a0, 0xE($sp)
    ctx->pc = 0x14ceacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 4));
label_14ceb0:
    // 0x14ceb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ceb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ceb8: 0x48182a  slt         $v1, $v0, $t0
    ctx->pc = 0x14ceb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14cebc: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14CEBCu;
    {
        const bool branch_taken_0x14cebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cebc) {
            ctx->pc = 0x14CEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEBCu;
            // 0x14cec0: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CE6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ce6c;
        }
    }
    ctx->pc = 0x14CEC4u;
    // 0x14cec4: 0x0  nop
    ctx->pc = 0x14cec4u;
    // NOP
label_14cec8:
    // 0x14cec8: 0x97a2000e  lhu         $v0, 0xE($sp)
    ctx->pc = 0x14cec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x14cecc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x14ceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14ced0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14ced0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ced4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CED4u;
    {
        const bool branch_taken_0x14ced4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ced4) {
            ctx->pc = 0x14CED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CED4u;
            // 0x14ced8: 0x93a2000c  lbu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CEE4u;
            goto label_14cee4;
        }
    }
    ctx->pc = 0x14CEDCu;
    // 0x14cedc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CEDCu;
    {
        const bool branch_taken_0x14cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEDCu;
            // 0x14cee0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cedc) {
            ctx->pc = 0x14CEE4u;
            goto label_14cee4;
        }
    }
    ctx->pc = 0x14CEE4u;
label_14cee4:
    // 0x14cee4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14cee8:
    // 0x14cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x14CEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14CEF0u;
    ctx->pc = 0x14cef0u;
}
