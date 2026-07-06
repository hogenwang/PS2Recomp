#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BA10
// Address: 0x18ba10 - 0x18bac0
void sub_0018BA10_0x18ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BA10_0x18ba10");
#endif

    switch (ctx->pc) {
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba58u: goto label_18ba58;
        default: break;
    }

    ctx->pc = 0x18ba10u;

    // 0x18ba10: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ba14: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18ba18: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x18ba18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18ba1c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x18ba1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ba20: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18ba24: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x18ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x18ba28: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x18ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18ba2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ba2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba30: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ba34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18ba34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba38: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18ba3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18ba40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18ba40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18ba44:
    // 0x18ba44: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x18ba44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba48: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18ba4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18ba4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba50: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x18ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18ba54: 0x9086014d  lbu         $a2, 0x14D($a0)
    ctx->pc = 0x18ba54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 333)));
label_18ba58:
    // 0x18ba58: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x18ba58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ba5c: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BA5Cu;
    {
        const bool branch_taken_0x18ba5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x18BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA5Cu;
            // 0x18ba60: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba5c) {
            ctx->pc = 0x18BA70u;
            goto label_18ba70;
        }
    }
    ctx->pc = 0x18BA64u;
    // 0x18ba64: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x18ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x18ba68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18BA68u;
    {
        const bool branch_taken_0x18ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA68u;
            // 0x18ba6c: 0x308900ff  andi        $t1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba68) {
            ctx->pc = 0x18BA88u;
            goto label_18ba88;
        }
    }
    ctx->pc = 0x18BA70u;
label_18ba70:
    // 0x18ba70: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18ba74: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x18ba74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18ba78: 0x29440009  slti        $a0, $t2, 0x9
    ctx->pc = 0x18ba78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18ba7c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18BA7Cu;
    {
        const bool branch_taken_0x18ba7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ba7c) {
            ctx->pc = 0x18BA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ba58;
        }
    }
    ctx->pc = 0x18BA84u;
    // 0x18ba84: 0x0  nop
    ctx->pc = 0x18ba84u;
    // NOP
label_18ba88:
    // 0x18ba88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18ba90: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x18ba90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18ba94: 0x5480ffeb  bnel        $a0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18BA94u;
    {
        const bool branch_taken_0x18ba94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ba94) {
            ctx->pc = 0x18BA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA94u;
            // 0x18ba98: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BA44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ba44;
        }
    }
    ctx->pc = 0x18BA9Cu;
    // 0x18ba9c: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x18ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x18baa0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x18baa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18baa4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BAA4u;
    {
        const bool branch_taken_0x18baa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18baa4) {
            ctx->pc = 0x18BAB0u;
            goto label_18bab0;
        }
    }
    ctx->pc = 0x18BAACu;
    // 0x18baac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18bab0:
    // 0x18bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BAB8u;
    // 0x18bab8: 0x0  nop
    ctx->pc = 0x18bab8u;
    // NOP
    // 0x18babc: 0x0  nop
    ctx->pc = 0x18babcu;
    // NOP
    ctx->pc = 0x18bac0u;
}
