#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B7B8
// Address: 0x26b7b8 - 0x26b858
void sub_0026B7B8_0x26b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B7B8_0x26b7b8");
#endif

    switch (ctx->pc) {
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7f0u: goto label_26b7f0;
        default: break;
    }

    ctx->pc = 0x26b7b8u;

    // 0x26b7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b7bc: 0x28c80002  slti        $t0, $a2, 0x2
    ctx->pc = 0x26b7bcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26b7c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26b7c8:
    // 0x26b7c8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x26b7c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b7cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26b7d0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26b7d4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x26b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26b7d8: 0x0  nop
    ctx->pc = 0x26b7d8u;
    // NOP
    // 0x26b7dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B7DCu;
    {
        const bool branch_taken_0x26b7dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26b7dc) {
            ctx->pc = 0x26B7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b7c8;
        }
    }
    ctx->pc = 0x26B7E4u;
    // 0x26b7e4: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B7E4u;
    {
        const bool branch_taken_0x26b7e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7E4u;
            // 0x26b7e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e4) {
            ctx->pc = 0x26B80Cu;
            goto label_26b80c;
        }
    }
    ctx->pc = 0x26B7ECu;
    // 0x26b7ec: 0x0  nop
    ctx->pc = 0x26b7ecu;
    // NOP
label_26b7f0:
    // 0x26b7f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x26b7f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b7f4: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x26b7f8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26b7fc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x26b7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26b800: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x26b800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x26b804: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B804u;
    {
        const bool branch_taken_0x26b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b804) {
            ctx->pc = 0x26B7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b7f0;
        }
    }
    ctx->pc = 0x26B80Cu;
label_26b80c:
    // 0x26b80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b810: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B810u;
    {
        const bool branch_taken_0x26b810 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B810u;
            // 0x26b814: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b810) {
            ctx->pc = 0x26B830u;
            goto label_26b830;
        }
    }
    ctx->pc = 0x26B818u;
    // 0x26b818: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x26b818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b81c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x26b81cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b820: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x26b820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b824: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x26b824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b828: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x26b828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26b82c: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x26b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_26b830:
    // 0x26b830: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x26b830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x26b834: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x26b834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b838: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x26b838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26b83c: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x26b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x26b840: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x26b840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26b844: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x26b844u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x26b848: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26b84c: 0x82100a  movz        $v0, $a0, $v0
    ctx->pc = 0x26b84cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26b850: 0x3e00008  jr          $ra
    ctx->pc = 0x26B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B850u;
            // 0x26b854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B858u;
    ctx->pc = 0x26b858u;
}
